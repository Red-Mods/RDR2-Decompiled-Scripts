//Decompiled with MagicRDR v1.0
//Function Count : 589
//Statics Count : 1085
//Natives Count : 779
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1389> Local_4 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_872 = 1;
	bLocal_880 = true;
	bLocal_1049 = 4294967295;
	iLocal_1060 = 1000;
	iLocal_1064 = 9;
	iLocal_1067 = 7;
	iLocal_1068 = 14;
	iLocal_1069 = 0;
	iLocal_1070 = 10;
	iLocal_1071 = 11;
	iLocal_1072 = 3;
	iLocal_1073 = 10;
	iLocal_1074 = 10;
	iLocal_1075 = 10;
	Local_520 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_632 = 99;
	iLocal_633 = 6;
	iLocal_625 = 1000;
	while (Function_260())
	{
		Function_218();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x81 / 129
{
	ENABLE_CHILD_SECTOR("cas_gunsmithBlacksmith01Props01x");
	ENABLE_CHILD_SECTOR("cas_horsestables01Props01x");
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_217(&(Global_29008[Global_30693[0]]), 256);
	HUD_ENABLE(true);
	if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
	{
		CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
	}
	Function_216(4194304);
	Function_217(&(Global_29008[Global_30693[1]]), 256);
	if (IS_OBJECT_VALID(bLocal_888))
	{
		DESTROY_OBJECT(bLocal_888);
	}
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	STREAMING_UNLOAD_SCENE();
	Function_215(bLocal_881);
	UI_EXIT("HealthMeter");
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
	}
	if (IS_ACTOR_VALID(bLocal_637))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_637)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_637));
		}
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_636);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_637);
	if (bLocal_1049 >= 4294967295)
	{
		Function_214();
	}
	Function_211(6, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(bLocal_636))
	{
		RELEASE_ACTOR(bLocal_636);
	}
	Function_210(bLocal_518);
	Function_210(Local_4);
	Function_209();
	Function_183(bLocal_665, 1, bLocal_665, 0, 0, 1, 1, 1);
	Function_182();
	Function_181();
	Function_180();
	Function_179();
	Function_175(&bLocal_527);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_635))
	{
		DESTROY_ITERATOR(bLocal_635);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	RELEASE_LAYOUT_REF(bLocal_518);
	STREAMING_UNLOAD_SCENE();
	if (bLocal_664)
	{
		Global_26003[1] = 0;
		DISABLE_WORLD_SECTOR("butterBridgeB");
		DISABLE_WORLD_SECTOR("butterBridgeA");
		DISABLE_WORLD_SECTOR("butterBridgeC");
		ENABLE_WORLD_SECTOR("butterBridgeD");
		ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
		Function_25(Local_520, 1, 1, 1, 0);
	}
	else if (bLocal_665)
	{
		if (bLocal_875)
		{
			Function_24();
		}
		Function_20(Local_520);
	}
	else
	{
		Function_2(Local_520);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x294 / 660
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x2B5 / 693
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2D0 / 720
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2F1 / 753
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x307 / 775
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

void Function_7(int iParam0) //Position: 0x3A3 / 931
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3C4 / 964
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

void Function_9() //Position: 0x40A / 1034
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x423 / 1059
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x476 / 1142
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

struct<16> Function_12(int iParam0) //Position: 0x59A / 1434
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5BF / 1471
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5DF / 1503
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x5F6 / 1526
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x611 / 1553
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x858 / 2136
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x881 / 2177
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

bool Function_19(int iParam0) //Position: 0x8A5 / 2213
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x8BA / 2234
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x8D8 / 2264
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

struct<16> Function_22(int iParam0) //Position: 0x97E / 2430
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x9A8 / 2472
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

void Function_24() //Position: 0xBFE / 3070
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

void Function_25(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD18 / 3352
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
			Function_115(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_109(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_115(iVar2, &uVar0, 0);
		}
		bVar1 = Function_108();
		if (bParam1)
		{
			Function_92(iVar2, bParam0, bVar1);
			Function_91();
		}
	}
	Function_38(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_30(iVar2, bVar1);
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
	Function_26();
}

void Function_26() //Position: 0xE05 / 3589
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_27(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_27(int iParam0, bool bParam1) //Position: 0xE35 / 3637
{
	int iVar0;
	
	iVar0 = Function_28(iParam0);
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

int Function_28(int iParam0) //Position: 0xE72 / 3698
{
	if (!Function_29(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_29(int iParam0) //Position: 0xE8C / 3724
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_30(int iParam0, bool bParam1) //Position: 0xEA2 / 3746
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
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
							Function_31(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_30(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_30(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_30(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_30(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_30(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_30(57, 0);
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

void Function_31(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1199 / 4505
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_33(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_32(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_32(char* cParam0, int iParam1) //Position: 0x1205 / 4613
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

bool Function_33(bool bParam0, var uParam1, int iParam2) //Position: 0x123C / 4668
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
		if (Function_36(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_35(uVar0))
		{
			case 0x00000002:
				if (!Function_34(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_34(var uParam0, int iParam1) //Position: 0x12B4 / 4788
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_35(char* cParam0) //Position: 0x12C7 / 4807
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

int Function_36(int iParam0) //Position: 0x1368 / 4968
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_37(&bVar1, 2147483648);
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

void Function_37(bool bParam0, bool bParam1) //Position: 0x13A5 / 5029
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_38(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13B8 / 5048
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
		Function_87();
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
			Function_81(bParam0);
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
			Function_42(1);
			Function_40(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_39(bParam0, &Var14);
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

void Function_39(int iParam0, int iParam1) //Position: 0x15CA / 5578
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_40(bool bParam0, int iParam1) //Position: 0x1604 / 5636
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_41())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_41() //Position: 0x1646 / 5702
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_42(bool bParam0) //Position: 0x164F / 5711
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_73();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_37(&Global_63095, 1);
		Function_37(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_43() //Position: 0x16A0 / 5792
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51();
	Function_51();
	if (!Function_41())
	{
		Function_48();
		Function_47();
		Function_46();
		Function_45();
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x16D3 / 5843
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

void Function_45() //Position: 0x17D9 / 6105
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

void Function_46() //Position: 0x180C / 6156
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

void Function_47() //Position: 0x199A / 6554
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

void Function_48() //Position: 0x1B4E / 6990
{
	Function_49(&Global_28260, 1, 0);
	return;
}

void Function_49(int iParam0, bool bParam1, var uParam2) //Position: 0x1B5C / 7004
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
	
	bVar0 = Function_50();
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

var Function_50() //Position: 0x1D4D / 7501
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51() //Position: 0x1D62 / 7522
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
				iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DFD / 7677
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2098 / 8344
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_54(), &Var9);
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

bool Function_54() //Position: 0x26C5 / 9925
{
	int iVar0;
	
	return iVar0;
}

var Function_55(int iParam0) //Position: 0x26CD / 9933
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26DE / 9950
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0, char* cParam1) //Position: 0x27D3 / 10195
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27EC / 10220
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_60(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2851 / 10321
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2863 / 10339
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2875 / 10357
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x29A5 / 10661
{
	return Global_35278[iParam020].f_48;
}

float Function_63(int iParam0) //Position: 0x29B4 / 10676
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x29ED / 10733
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_65(int iParam0) //Position: 0x2A2A / 10794
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BC4 / 11204
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

int Function_67(bool bParam0) //Position: 0x2DDE / 11742
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_68() //Position: 0x2E1F / 11807
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2EA8 / 11944
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2F3F / 12095
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2FBE / 12222
{
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2FE4 / 12260
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x31EE / 12782
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_75(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_75(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_74(StackVal, StackVal, vVar0))
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

bool Function_74(vector3 vParam0) //Position: 0x328F / 12943
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x32A7 / 12967
{
	int iVar0;
	
	iVar0 = Function_79(uParam2, uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_77(&Global_63095, 1);
			Function_37(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_77(&Global_63095, 2);
			Function_37(&Global_63095, 1);
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
		Function_77(&Global_63095, 2);
		Function_37(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_76();
	return StackVal, StackVal, Function_76();
}

vector3 Function_76() //Position: 0x338E / 13198
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3397 / 13207
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x33A6 / 13222
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x33BC / 13244
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
				fVar2 = Function_80(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(bVar0) && !bParam1)
	{
		bVar0 = Function_79(bParam0, 1);
	}
	return bVar0;
}

float Function_80(vector3 vParam0, vector3 vParam3) //Position: 0x3483 / 13443
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_81(bool bParam0) //Position: 0x34A0 / 13472
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
				Function_86(12, 1, 0, 0);
				Function_85(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_86(13, 1, 0, 0);
				Function_85(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_86(14, 1, 0, 0);
				Function_85(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_86(15, 1, 0, 0);
				Function_85(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_86(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_84(bParam0) == 1)
					{
						iVar0 = Function_83(bParam0);
						if (Function_82(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_85(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_85(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_85(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_85(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_85(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_85(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_85(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_85(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_85(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_85(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_85(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_85(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_85(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_85(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_85(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_85(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_85(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_85(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_85(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_85(4, 19);
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
								Function_86(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_86(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_86(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_83(bParam0) == 0)
			{
				if (Function_84(bParam0) == 1)
				{
					Function_86(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_82(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_85(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_85(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_85(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_85(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_85(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_85(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_85(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_85(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_84(bParam0) == 1)
			{
				Function_86(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_86(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_85(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_85(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_85(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_86(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_85(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_85(6, 9);
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

bool Function_82(int iParam0) //Position: 0x397C / 14716
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0) //Position: 0x3992 / 14738
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_84(bool bParam0) //Position: 0x39B1 / 14769
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_85(int iParam0, bool bParam1) //Position: 0x39CB / 14795
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

int Function_86(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3A32 / 14898
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_87() //Position: 0x3C52 / 15442
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(Global_6269))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_28(Global_6269);
	if (!Function_29(iVar0) && Function_90(iVar1) < 0)
	{
		Function_52(24, Global_6269, 0);
		Function_88(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_90(Function_28(iVar0)))
	{
		Function_52(24, Global_6269, 0);
		Function_88(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_88(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3CD2 / 15570
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
		Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_89(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4026 / 16422
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

int Function_90(int iParam0) //Position: 0x40A9 / 16553
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_91() //Position: 0x40C3 / 16579
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

void Function_92(int iParam0, int iParam1, bool bParam2) //Position: 0x40F1 / 16625
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
	
	if (!Function_29(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_107(iParam0);
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
				bVar0 = (Function_67(42) - Global_34165.f_116);
				bVar1 = (Function_67(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_34165.f_124);
				bVar3 = (Function_67(49) - Global_34165.f_128);
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
				bVar4 = (Function_67(355) - Global_34165.f_116);
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
		iVar15 = Function_106(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_93(50, 1, 0);
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

void Function_93(int iParam0, bool bParam1, bool bParam2) //Position: 0x438D / 17293
{
	int iVar0;
	bool bVar1;
	
	if (Function_105(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_67(3);
	Function_102();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_100(3, bVar1);
		if (!bParam2)
		{
			if (!Function_34(Global_76848, 4))
			{
				Function_31(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_86(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_95(4, Function_99(Global_12976.f_156), 1);
				Function_94(Global_12976.f_152, Global_12976.f_156);
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

void Function_94(int iParam0, int iParam1) //Position: 0x4550 / 17744
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

int Function_95(int iParam0, char* cParam1, bool bParam2) //Position: 0x47AE / 18350
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
	Function_88(iParam0, cParam1, 0, 1);
	iVar1 = Function_96();
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

int Function_96() //Position: 0x4933 / 18739
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
	Function_97();
	return 0;
}

void Function_97() //Position: 0x49D2 / 18898
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
		Function_98(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_98(int iParam0) //Position: 0x4A81 / 19073
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

var Function_99(int iParam0) //Position: 0x4ADF / 19167
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

int Function_100(int iParam0, bool bParam1) //Position: 0x4B6E / 19310
{
	bool bVar0;
	int iVar1;
	
	Function_86(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_101(iParam0, 4294967295);
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
	iVar1 = Function_96();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_101(int iParam0, int iParam1) //Position: 0x4D0B / 19723
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

void Function_102() //Position: 0x4D4C / 19788
{
	Function_104(3, 0.0f);
	Function_103(3, 10000.0f);
	return;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4D62 / 19810
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_104(int iParam0, int iParam1) //Position: 0x4DA2 / 19874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_105(int iParam0) //Position: 0x4DE2 / 19938
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_106(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4DF1 / 19953
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

int Function_107(int iParam0) //Position: 0x4FB9 / 20409
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

var Function_108() //Position: 0x504E / 20558
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_109(int iParam0) //Position: 0x5073 / 20595
{
	if (!Function_29(iParam0))
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
			Function_93(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_93(25, 1, 0);
			Function_114(1, 1);
			break;
		
		case 0x00000015:
			Function_114(50, 1);
			Function_93(250, 1, 0);
			Function_110(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_114(50, 1);
			Function_93(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_114(5, 1);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_93(75, 1, 0);
			Function_110(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_114(5, 1);
			Function_93(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_114(25, 1);
			Function_93(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_114(10, 1);
			Function_93(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_93(50, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_93(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_110(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_114(20, 1);
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_114(25, 1);
			Function_93(150, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_114(10, 1);
			Function_93(150, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_93(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_110(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_110(100, 1, 0);
			Function_114(5, 1);
			break;
		
		case 0x0000000F:
			Function_114(3, 1);
			Function_93(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_110(125, 1, 0);
			Function_93(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_114(50, 1);
			Function_93(100, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_114(50, 1);
			Function_93(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_114(75, 1);
			Function_93(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_93(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_93(250, 1, 0);
			Function_110(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_93(75, 1, 0);
			Function_110(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_93(200, 1, 0);
			Function_110(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_93(75, 1, 0);
			Function_110(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_93(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_114(50, 1);
			Function_93(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_114(100, 1);
			Function_93(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_93(200, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_93(300, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_93(300, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_93(300, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_93(500, 1, 0);
			Function_110(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_93(150, 1, 0);
			Function_110(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_110(25, 1, 0);
			Function_114(100, 1);
			break;
		
		case 0x0000002A:
			Function_93(150, 1, 0);
			Function_110(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_110(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_110(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_110(150, 1, 0);
			Function_114(100, 1);
			break;
		
		case 0x00000035:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_110(150, 1, 0);
			Function_114(100, 1);
			break;
		
		case 0x00000032:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_110(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_110(int iParam0, bool bParam1, bool bParam2) //Position: 0x552E / 21806
{
	int iVar0;
	bool bVar1;
	
	if (Function_105(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_100(1, bVar1);
			if (!bParam2)
			{
				if (!Function_34(Global_76848, 1))
				{
					Function_31(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_113(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_34(Global_76848, 2))
				{
					Function_31(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_86(1, bVar1, 0, 0);
	}
	else
	{
		Function_112(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_95(2, Function_111(Global_12976.f_152), 0);
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
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_95(2, Function_111(Global_12976.f_152), 1);
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
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_95(2, Function_111(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_95(2, Function_111(Global_12976.f_152), 1);
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
				Function_95(2, Function_111(Global_12976.f_152), 0);
			}
			break;
	}
	Function_94(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_111(int iParam0) //Position: 0x5843 / 22595
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

int Function_112(int iParam0, bool bParam1, int iParam2) //Position: 0x58E6 / 22758
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_113(int iParam0, bool bParam1) //Position: 0x5AE1 / 23265
{
	bool bVar0;
	int iVar1;
	
	Function_112(iParam0, bParam1, 0);
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
	iVar1 = Function_101(iParam0, 4294967295);
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
	iVar1 = Function_96();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_114(bool bParam0, bool bParam1) //Position: 0x5C7D / 23677
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_86(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_86(597, bParam0, 0, 0);
	}
	if ((Function_67(597) + Function_67(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_115(int iParam0, var uParam1, bool bParam2) //Position: 0x5D48 / 23880
{
	struct<4> Var0;
	
	if (!Function_29(iParam0))
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
			Function_217(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_155(9, bParam2, 4);
			Function_157(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_157(Global_30640[0]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_217(&(Global_29008[Global_30658[0]]), 256);
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
			Function_129(&Global_76847, 0x2000000);
			Function_129(&Global_76847, 0x4000000);
			Function_129(&Global_76847, 4096);
			Function_129(&Global_76847, 8);
			Function_129(&Global_76847, 8388608);
			Function_129(&Global_76847, 524288);
			Function_129(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_217(&(Global_29008[Global_30640[4]]), 256);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_217(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_157(Global_30640[0]);
			Function_157(Global_30640[5]);
			Function_155(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_157(Global_30658[3]);
			Function_130(&(Global_29008[Global_30658[3]]), 32768);
			Function_217(&(Global_29008[Global_30658[3]]), 256);
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
			Function_217(&(Global_29008[Global_30679[1]]), 256);
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
			Function_217(&(Global_29008[Global_30685[2]]), 256);
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
				if (!Function_127(15))
				{
					Function_122(15, 0, 1);
				}
			}
			Function_217(&(Global_29008[Global_30717[1]]), 256);
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
			Function_116(11);
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

void Function_116(int iParam0) //Position: 0x6638 / 26168
{
	bool bVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_121(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_121(Global_16537[iParam021].f_72, 0);
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
			Function_117(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_117(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x67A7 / 26535
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
		Function_119(Function_120(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_119(Function_120(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_119(StackVal);
				vVar1 = { StackVal, StackVal, Function_119(StackVal) };
				if (Function_118(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_118(vector3 vParam0, vector3 vParam3) //Position: 0x68AD / 26797
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_119(int iParam0) //Position: 0x68DA / 26842
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

var Function_120(vector3 vParam0) //Position: 0x6931 / 26929
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

void Function_121(bool bParam0, bool bParam1) //Position: 0x697F / 27007
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

void Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x69D3 / 27091
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_127(bParam0))
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
		Function_86(457, 1, 0, 0);
		Function_125(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 0);
			}
			else
			{
				Function_123();
			}
		}
	}
	return;
}

void Function_123() //Position: 0x6B71 / 27505
{
	return;
}

bool Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6B77 / 27511
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

void Function_125(bool bParam0, int iParam1) //Position: 0x6C1B / 27675
{
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_126(int iParam0) //Position: 0x6C70 / 27760
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x6C86 / 27782
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_128(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0, int iParam1) //Position: 0x6CD7 / 27863
{
	int iVar0;
	
	if (!Function_126(iParam0))
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

void Function_129(var uParam0, int iParam1) //Position: 0x6D04 / 27908
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6D13 / 27923
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6D22 / 27938
{
	struct<8> Var0;
	
	if (!Function_126(bParam0))
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
		Function_86(456, 1, 0, 0);
		Function_125(bParam0, 2);
		if (bParam2)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 5);
			}
			else
			{
				Function_123();
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
		if (!Function_34(Global_76846, 2))
		{
			Function_31(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6E6C / 28268
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

bool Function_133() //Position: 0x6EB7 / 28343
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6EE4 / 28388
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

int Function_135(int iParam0) //Position: 0x7094 / 28820
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x70EB / 28907
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

var Function_137(int iParam0) //Position: 0x7110 / 28944
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x7166 / 29030
{
	int iVar0;
	
	if (!Function_126(bParam0))
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

bool Function_139(bool bParam0) //Position: 0x71C5 / 29125
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x71D1 / 29137
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x71ED / 29165
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_128(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_142(int iParam0, int iParam1) //Position: 0x723F / 29247
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_31(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x72B2 / 29362
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x730E / 29454
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_145(iParam0, iParam1);
	Function_31(Global_34573, 1, 4, 1);
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x737F / 29567
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x73D9 / 29657
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_78(iParam0))
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
			Function_86(468, 1, 0, 0);
			Function_85(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_132("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_117(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_131(14, 1, 0, 0);
				Function_147(14, 1, 0, 0, 0);
			}
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 6);
			}
			else
			{
				Function_123();
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
			Function_86(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_85(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7685 / 30341
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_126(bParam0))
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
	if (!Function_128(bParam0, 2))
	{
		Function_86(456, 1, 0, 0);
		Function_125(bParam0, 2);
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
		Function_125(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_40(1, 0);
			}
			else
			{
				Function_123();
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
		if (!Function_34(Global_76846, 2))
		{
			Function_31(Global_34573, 2, 1, 0);
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
				Function_85(2, 24);
				break;
			
			case 0x00000003:
				Function_85(2, 25);
				break;
			
			case 0x0000000F:
				Function_85(2, 26);
				break;
			
			case 0x0000000D:
				Function_85(2, 27);
				break;
			
			case 0x0000000E:
				Function_85(2, 28);
				break;
			}
	}
}

void Function_148(int iParam0, bool bParam1) //Position: 0x7914 / 30996
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

void Function_149() //Position: 0x7973 / 31091
{
	if (Function_126(Global_28180))
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

var Function_150(int iParam0, int iParam1) //Position: 0x79EE / 31214
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
					if (Function_27(6, 0) || Function_27(12, 0))
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
					else if (iVar16 && Function_27(5, 0))
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
					else if (iVar17 && Function_27(26, 0))
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
					else if (Function_27(17, 0) && iVar15)
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
					else if ((Function_27(6, 0) && Function_151(18)) && iVar19)
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
					else if ((Function_27(9, 0) && Function_151(16)) && iVar19)
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
					else if (Function_27(8, 0) && iVar19)
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
	if (Function_74(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_74(StackVal, StackVal, vVar3))
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
	if (!Function_74(StackVal, StackVal, vVar3))
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

int Function_151(int iParam0) //Position: 0x85E0 / 34272
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x85F5 / 34293
{
	int iVar0;
	int iVar1;
	
	if (!Function_126(iParam0))
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8644 / 34372
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8651 / 34385
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x86A2 / 34466
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

bool Function_156(int iParam0, int iParam1) //Position: 0x8710 / 34576
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8723 / 34595
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
		Function_86(473, 1, 0, 0);
		iVar0 = Function_158(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_86(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_86(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_86(476, 1, 0, 0);
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
		Function_85(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_85(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!Function_41())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_158(int iParam0) //Position: 0x8822 / 34850
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_82(iParam0))
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

bool Function_159(var uParam0, int iParam1) //Position: 0x887A / 34938
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8896 / 34966
{
	if (!Function_161(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x88ED / 35053
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x88FF / 35071
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

void Function_163(int iParam0) //Position: 0x8933 / 35123
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x899A / 35226
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A77 / 35447
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

void Function_166() //Position: 0x8BF0 / 35824
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8BFC / 35836
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

void Function_168() //Position: 0x8C42 / 35906
{
	Function_179();
	Function_174();
	Function_173();
	Function_172();
	Function_171();
	Function_170();
	Function_169();
	return;
}

void Function_169() //Position: 0x8C5D / 35933
{
	Function_175(&Local_505 + 4);
	RELEASE_LAYOUT_REF(Local_505);
	return;
}

void Function_170() //Position: 0x8C71 / 35953
{
	Function_175(&Local_462 + 4);
	RELEASE_LAYOUT_REF(Local_462);
	return;
}

void Function_171() //Position: 0x8C85 / 35973
{
	Function_175(&Local_481 + 4);
	RELEASE_LAYOUT_REF(Local_481);
	return;
}

void Function_172() //Position: 0x8C99 / 35993
{
	Function_175(&Local_442 + 4);
	RELEASE_LAYOUT_REF(Local_442);
	return;
}

void Function_173() //Position: 0x8CAD / 36013
{
	Function_175(&Local_414 + 4);
	RELEASE_LAYOUT_REF(Local_414);
	return;
}

void Function_174() //Position: 0x8CC1 / 36033
{
	Function_175(&Local_354 + 4);
	RELEASE_LAYOUT_REF(Local_354);
	return;
}

void Function_175(bool bParam0) //Position: 0x8CD5 / 36053
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_176(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x8CFB / 36091
{
	if (Function_178(uParam0[iParam13], 4))
	{
		if (Function_178(uParam0[iParam13], 1))
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
			Function_177(uParam0[iParam13], 1);
			Function_177(uParam0[iParam13], 2);
			Function_177(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_177(var uParam0, int iParam1) //Position: 0x8E29 / 36393
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_178(int iParam0, int iParam1) //Position: 0x8E43 / 36419
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_179() //Position: 0x8E60 / 36448
{
	Function_175(&Local_4 + 4);
	Function_175(&Local_4 + 128);
	Function_175(&Local_4 + 144);
	Function_175(&Local_4 + 352);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_180() //Position: 0x8E88 / 36488
{
	Function_175(&Local_4 + 352);
	return;
}

void Function_181() //Position: 0x8E96 / 36502
{
	Function_175(&Local_4 + 144);
	return;
}

void Function_182() //Position: 0x8EA3 / 36515
{
	Function_175(&Local_4 + 128);
	return;
}

void Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8EB0 / 36528
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_208());
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
	Function_207();
	CLEAR_PRINTED_OBJECTIVE();
	Function_206();
	Function_204(0);
	Function_203();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_202();
	Function_201();
	Function_207();
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
	Function_216(4194560);
	Function_193();
	Function_192();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_189(0, 1, 1);
	}
	else
	{
		Function_189(0, 1, 1);
	}
	Function_188();
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
	Function_184();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_37(&Global_12976 + 36 + 20, 16);
}

void Function_184() //Position: 0x90A1 / 37025
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
		if (Function_187() > 3)
		{
			bVar0 *= 2;
		}
		Function_185(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_185(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x90F7 / 37111
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_186((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_186(bool bParam0) //Position: 0x913D / 37181
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_187() //Position: 0x9162 / 37218
{
	return Global_12976.f_156;
}

void Function_188() //Position: 0x916D / 37229
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_217(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_189(int iParam0, bool bParam1, int iParam2) //Position: 0x9197 / 37271
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
		if (Function_82(Global_29006))
		{
			Function_130(&(Global_29008[Global_29006]), 131072);
			Function_217(&(Global_29008[Global_29006]), 2097152);
			Function_190(Global_29006);
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
					Function_217(&(Global_29008[iVar0]), 2097155);
					Function_130(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_41())
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

void Function_190(int iParam0) //Position: 0x92A2 / 37538
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_191())
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

bool Function_191() //Position: 0x9321 / 37665
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

void Function_192() //Position: 0x937E / 37758
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

void Function_193() //Position: 0x93A4 / 37796
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

void Function_194(int iParam0) //Position: 0x93CA / 37834
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_195(int iParam0) //Position: 0x93DD / 37853
{
	Function_196(&Global_28842, iParam0);
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0x93EB / 37867
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_197(bool bParam0) //Position: 0x9406 / 37894
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_198(int iParam0) //Position: 0x9433 / 37939
{
	int iVar0;
	
	if (!Function_126(iParam0))
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

void Function_199(bool bParam0) //Position: 0x94FA / 38138
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

void Function_200(bool bParam0) //Position: 0x9576 / 38262
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

void Function_201() //Position: 0x95EA / 38378
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

void Function_202() //Position: 0x962B / 38443
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

void Function_203() //Position: 0x966C / 38508
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_204(int iParam0) //Position: 0x9680 / 38528
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

bool Function_205() //Position: 0x96BC / 38588
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

void Function_206() //Position: 0x96E1 / 38625
{
	Global_8722 = 0.0f;
	return;
}

void Function_207() //Position: 0x96EB / 38635
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

int Function_208() //Position: 0x9716 / 38678
{
	bool bVar0;
	
	bVar0 = Function_50();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_209() //Position: 0x9730 / 38704
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_210(bool bParam0) //Position: 0x9739 / 38713
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

int Function_211(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9791 / 38801
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

void Function_212(bool bParam0) //Position: 0x9AAF / 39599
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

void Function_213(bool bParam0) //Position: 0x9ADB / 39643
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_214() //Position: 0x9AF0 / 39664
{
	Function_174();
	Function_173();
	Function_172();
	Function_171();
	Function_170();
	Function_169();
	if (bLocal_1049 >= 4294967295)
	{
		TRAIN_RELEASE_TRAIN(bLocal_1049, 200.0f);
		bLocal_1049 = 4294967295;
	}
	return;
}

void Function_215(bool bParam0) //Position: 0x9B1E / 39710
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

void Function_216(int iParam0) //Position: 0x9B4A / 39754
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0x9B67 / 39783
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_218() //Position: 0x9B7E / 39806
{
	var uVar0[12];
	int iVar13;
	
	if (Function_259())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Train to Madrugada";
		uVar0[4] = "Train to Butter Bridge";
		uVar0[5] = "Toggle Debug Draw";
		uVar0[6] = "Stage 03";
		uVar0[7] = "Blow Up Bridge";
		uVar0[8] = "Blow Up Train";
		uVar0[9] = "Stage 08";
		uVar0[10] = "Stage 09 - PASS";
		uVar0[11] = "Last Stage - FAIL";
		iVar13 = Function_245(&uLocal_618, &uVar0, &Local_520 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_244(&iVar13, &iLocal_632, &iLocal_633, &iLocal_625))
		{
			Function_237();
			Function_236();
		}
		if (iVar13 == 0)
		{
			Function_237();
			Function_236();
			Function_235(&bLocal_664, 8);
		}
		else if (iVar13 == 1)
		{
			Function_237();
			Function_236();
			Function_230(iLocal_632);
			Function_226(StackVal, StackVal, 5, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
		}
		else if (iVar13 == 2)
		{
			Function_237();
			Function_236();
			Function_221(&bLocal_666, 4);
		}
		else if (iVar13 == 3)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&iLocal_638);
			iLocal_632 = 1;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&iLocal_638);
			iLocal_632 = 2;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_237();
			Function_236();
			if (GET_DEBUG_DRAW_STATE())
			{
				Function_132("DEBUG DRAW OFF", 1.0f, 1, 0, 2, 1, 0);
				SET_DEBUG_DRAW(0);
			}
			else
			{
				Function_132("DEBUG DRAW ON", 1.0f, 1, 0, 2, 1, 0);
				SET_DEBUG_DRAW(1);
			}
		}
		else if (iVar13 == 6)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&iLocal_638);
			iLocal_632 = 2;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
		else if (iVar13 == 7)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&iLocal_638);
			iLocal_632 = 5;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
		else if (iVar13 == 8)
		{
			Function_237();
			Function_236();
			iLocal_1044 = 21;
		}
		else if (iVar13 == 9)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_219(&iLocal_638);
			iLocal_632 = 7;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
		else if (iVar13 == 10)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			iLocal_867 = 1;
			Function_219(&iLocal_638);
			iLocal_632 = 8;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
		else if (iVar13 == 11)
		{
			Function_237();
			Function_236();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			iLocal_867 = 0;
			Function_219(&iLocal_638);
			iLocal_632 = 101;
			iLocal_633 = 0;
			iLocal_625 = 1000;
		}
	}
	return;
}

void Function_219(int iParam0) //Position: 0x9EE1 / 40673
{
	Function_220(iParam0, 0.0f);
	return;
}

void Function_220(var uParam0, float fParam1) //Position: 0x9EED / 40685
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(uParam0, 1);
	Function_37(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_221(bool bParam0, int iParam1) //Position: 0x9F0E / 40718
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_222(iParam1);
	*bParam0 = 1;
	return;
}

void Function_222(int iParam0) //Position: 0x9F31 / 40753
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_225("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_224(2) || Function_224(8)) || Function_224(9)) || Function_224(10))
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
		Function_225("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_225("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_225("");
	}
	else if (iParam0 == 8)
	{
		Function_223();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_223();
	}
	return;
}

void Function_223() //Position: 0xA028 / 41000
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_224(int iParam0) //Position: 0xA034 / 41012
{
	int iVar0;
	
	if (!Function_29(iParam0))
	{
		return 0;
	}
	iVar0 = Function_28(iParam0);
	if (!Function_18(Function_28(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_225(bool bParam0) //Position: 0xA06A / 41066
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_226(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA0D4 / 41172
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_227(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_222(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_227(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA111 / 41233
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_229(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_228(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_228(int iParam0) //Position: 0xA194 / 41364
{
	if (!Function_82(iParam0))
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

var Function_229(vector3 vParam0, bool bParam3) //Position: 0xA642 / 42562
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

vector3 Function_230(int iParam0) //Position: 0xA6AD / 42669
{
	Function_231(iParam0 + 1);
	return StackVal, StackVal, Function_231(iParam0 + 1);
}

vector3 Function_231(int iParam0) //Position: 0xA6BA / 42682
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_232((*&Local_4 + 956)[0]);
			return StackVal, StackVal, Function_232((*&Local_4 + 956)[0]);
			break;
		
		case 0x00000001:
			return -2766,099f, 33,513f, 4260,272f;
			break;
		
		case 0x00000002:
			Function_232((*&Local_4 + 1040)[0]);
			return StackVal, StackVal, Function_232((*&Local_4 + 1040)[0]);
			break;
		
		case 0x00000008:
			Function_232((*&Local_4 + 1068)[1]);
			return StackVal, StackVal, Function_232((*&Local_4 + 1068)[1]);
			break;
		
		default:
			Function_232((*&Local_4 + 1100)[0]);
			return StackVal, StackVal, Function_232((*&Local_4 + 1100)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_232((*&Local_4 + 956)[0]);
	return StackVal, StackVal, Function_232((*&Local_4 + 956)[0]);
}

vector3 Function_232(bool bParam0) //Position: 0xA79D / 42909
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

int Function_233(int iParam0) //Position: 0xA7C4 / 42948
{
	return Function_234(iParam0 + 1);
}

int Function_234(int iParam0) //Position: 0xA7D1 / 42961
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 956)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 992)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1040)[0]);
			break;
		
		case 0x00000008:
			return GET_OBJECT_HEADING((*&Local_4 + 1068)[1]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1100)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 956)[0]);
}

void Function_235(bool bParam0, int iParam1) //Position: 0xA8B0 / 43184
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_222(iParam1);
	*bParam0 = 1;
	return;
}

void Function_236() //Position: 0xA8D3 / 43219
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_237() //Position: 0xA8E8 / 43240
{
	Function_239();
	Function_238(10, 3);
	return;
}

void Function_238(int iParam0, int iParam1) //Position: 0xA8F7 / 43255
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

void Function_239() //Position: 0xAA2E / 43566
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_243())
	{
		Function_242(10, 3);
	}
	else
	{
		Function_240();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_240() //Position: 0xAA79 / 43641
{
	Function_241(25, 2);
	return;
}

void Function_241(int iParam0, int iParam1) //Position: 0xAA85 / 43653
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

void Function_242(int iParam0, int iParam1) //Position: 0xAC83 / 44163
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

bool Function_243() //Position: 0xADBA / 44474
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

bool Function_244(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAE21 / 44577
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_237();
			Function_236();
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
		Function_225("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_245(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAEC7 / 44743
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_258(&Var15, &Var0);
	uVar20 = Function_257(*uParam1, &Var15);
	Function_256(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_255(uParam0, uVar20);
	Function_253(StackVal, uParam0, Var15.f_12);
	Function_251(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_250(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_247(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_246(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_246(int iParam0, int iParam1, int iParam2) //Position: 0xAF8E / 44942
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

bool Function_247(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAFEA / 45034
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
				Function_249(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_249(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_246(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_248(bParam1->f_32);
	}
	else
	{
		Function_248(bParam1->f_32);
	}
	return 0;
}

void Function_248(bool bParam0) //Position: 0xB170 / 45424
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

void Function_249(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB1AA / 45482
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

var Function_250(int iParam0, var uParam1, int iParam2) //Position: 0xB258 / 45656
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_251(var uParam0, int iParam1, int iParam2) //Position: 0xB27C / 45692
{
	switch (Function_252())
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

int Function_252() //Position: 0xB318 / 45848
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

void Function_253(var uParam0, int iParam1, int iParam2) //Position: 0xB354 / 45908
{
	switch (Function_254(uParam0))
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

int Function_254(bool bParam0) //Position: 0xB3EC / 46060
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_50()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_153(*bParam0, 0x40000000))
		{
			Function_77(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_153(*bParam0, 0x40000000))
		{
			Function_77(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_37(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_50()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_153(*bParam0, 0x20000000))
		{
			Function_77(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_153(*bParam0, 0x20000000))
		{
			Function_77(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_37(bParam0, 0x20000000);
	return 0;
}

var Function_255(var uParam0, int iParam1) //Position: 0xB537 / 46391
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

void Function_256(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB686 / 46726
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

var Function_257(int iParam0, int iParam1) //Position: 0xB719 / 46873
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_258(var uParam0, var uParam1) //Position: 0xB733 / 46899
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

bool Function_259() //Position: 0xB781 / 46977
{
	return Global_30920;
}

bool Function_260() //Position: 0xB78A / 46986
{
	if (IS_EXITFLAG_SET())
	{
		Function_230(iLocal_632);
		Function_226(StackVal, StackVal, 4, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
		return 0;
	}
	Function_588(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_520, iLocal_632, iLocal_633, &bLocal_666, &bLocal_664, &bLocal_665);
	if (iLocal_632 >= 99)
	{
		if (Function_586(&uLocal_936) < 1.0f)
		{
			Function_219(&uLocal_936);
		}
	}
	if (iLocal_632 == 99 && iLocal_632 == 100)
	{
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			Function_230(iLocal_632);
			Function_226(StackVal, StackVal, 1, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
			return 1;
		}
		if (iLocal_633 < 4 && iLocal_633 > 106)
		{
			if (Function_566(&Local_707, &uLocal_667, &uLocal_827, bLocal_635, uLocal_832))
			{
				if (Function_555(&uLocal_827))
				{
					Function_230(iLocal_632);
					Function_226(StackVal, StackVal, 5, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
					return 1;
				}
			}
		}
		if (Global_3403)
		{
			Function_230(iLocal_632);
			Function_226(StackVal, StackVal, 2, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
			return 1;
		}
		if (Function_554(2048))
		{
			Function_230(iLocal_632);
			Function_226(StackVal, StackVal, 3, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
			return 1;
		}
		if (iLocal_633 < 4 && iLocal_633 > 106)
		{
			if (!IS_ACTOR_ALIVE(bLocal_636))
			{
				Function_225("Henchman_dead");
				Function_230(iLocal_632);
				Function_226(StackVal, StackVal, 5, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
				return 1;
			}
		}
	}
	switch (iLocal_632)
	{
		case 0x00000063:
			Function_526();
			break;
		
		case 0x00000000:
			Function_493();
			break;
		
		case 0x00000001:
			Function_393();
			break;
		
		case 0x00000002:
			Function_338();
			break;
		
		case 0x00000008:
			Function_309();
			break;
		
		case 0x00000065:
			Function_263();
			break;
		
		case 0x00000064:
			if (Function_262(&bLocal_665))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_261(&iLocal_632, &iLocal_633, &iLocal_625))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_666)
	{
		Function_221(&bLocal_666, 4);
		Function_1();
		return 0;
	}
	if (bLocal_664)
	{
		Function_235(&bLocal_664, 8);
		Function_1();
		return 0;
	}
	if (bLocal_665 && iLocal_632 == 100)
	{
		Function_230(iLocal_632);
		Function_226(StackVal, StackVal, 5, &bLocal_665, &iLocal_632, Function_233(iLocal_632), Function_230(iLocal_632), 0);
	}
	return 1;
}

bool Function_261(var uParam0, var uParam1, int iParam2) //Position: 0xB9A7 / 47527
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

bool Function_262(int iParam0) //Position: 0xB9E7 / 47591
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_263() //Position: 0xB9FA / 47610
{
	switch (iLocal_633)
	{
		case 0x00000000:
			if (iLocal_867)
			{
				Function_305(1);
			}
			iLocal_871 = 0;
			bLocal_519 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
			if (IS_LAYOUTREF_VALID(bLocal_519))
			{
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(bLocal_519, "dzcv_BB_Restriction")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_519, "dzcv_BB_Restriction"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_519, "dzcv_BB_Restriction"));
				}
			}
			DISABLE_WORLD_SECTOR("butterBridgeB");
			DISABLE_WORLD_SECTOR("butterBridgeA");
			ENABLE_WORLD_SECTOR("butterBridgeC");
			ENABLE_WORLD_SECTOR("butterBridgeD");
			ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_219(&iLocal_638);
			iLocal_633 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_304())
			{
				Function_302(Local_4, 32,13f, 97,27f, 2756,32f, &Local_4 + 792[0], 0, -680,85f, 15,48f, 3706,21f, 1, 1);
				Function_300(&uLocal_1062, 0, 0, 4294967295, 4294967295);
				Function_219(&iLocal_638);
				iLocal_633 = 3;
			}
			break;
		
		case 0x00000003:
			DISABLE_WORLD_SECTOR("butterBridgeB");
			if (!IS_PHYSINST_VALID(bLocal_1063))
			{
				bLocal_1063 = LOCATE_PHYSINST_OF_TYPE(31,7f, 94,5f, 2739.0f, 100.0f, "p_gen_butterbridge02x", 1);
			}
			else
			{
				bLocal_898 = GET_OBJECT_FROM_PHYSINST(bLocal_1063);
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					PLAY_SIMPLE_PROP_ANIMATION(bLocal_898, "bridgeExplode", 0, 0, 1.0f, 0.0f);
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
			}
			if (Function_264("$/cutscene/MEXARMY02_CS02_B/MEXARMY02_CS02_B", &iLocal_625, &Local_520, &iLocal_632, 53376, 53369, 51248, 51241, 50981, 50974, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_219(&iLocal_638);
				iLocal_633 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_225("mexarmy02_bridge_destroyed");
			DECOR_SET_BOOL(Global_34573, "resetignorefadestate", true);
			bLocal_665 = true;
			break;
	}
	return;
}

bool Function_264(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBCBB / 48315
{
	if (!bParam15)
	{
		Function_274(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_273(iParam2) || iParam2->f_24 < 1))
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
				Function_219(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_272())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_271(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_219(iParam1 + 4);
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
					Function_271(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_586(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_586(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_269(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_271(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_219(iParam1 + 4);
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
						Function_268(1.0f);
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
						Function_266();
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
					Function_265(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_273(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_265(bool bParam0) //Position: 0xC2D7 / 49879
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

void Function_266() //Position: 0xC37C / 50044
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_267();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_267() //Position: 0xC3C1 / 50113
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_268(bool bParam0) //Position: 0xC3D3 / 50131
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

void Function_269(bool bParam0, bool bParam1) //Position: 0xC3F0 / 50160
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_270(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_270(bool bParam0) //Position: 0xC470 / 50288
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

int Function_271(bool bParam0) //Position: 0xC49F / 50335
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

bool Function_272() //Position: 0xC557 / 50519
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

bool Function_273(int iParam0) //Position: 0xC591 / 50577
{
	return iParam0->f_20;
}

void Function_274(var uParam0, int iParam1) //Position: 0xC59B / 50587
{
	Function_275(uParam0, iParam1, 0);
	return;
}

void Function_275(var uParam0, bool bParam1, bool bParam2) //Position: 0xC5A9 / 50601
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
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_86(20, 1, 0, 0);
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
						Function_276(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_86(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_276(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC6F5 / 50933
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

int Function_277() //Position: 0xC71E / 50974
{
	return 1;
}

int Function_278() //Position: 0xC725 / 50981
{
	Function_279(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_279(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xC739 / 51001
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
		bVar0 = Function_50();
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
			if (Function_41())
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
		Function_86(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_236();
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
	Function_265(bParam9);
}

int Function_280() //Position: 0xC829 / 51241
{
	return 1;
}

int Function_281() //Position: 0xC830 / 51248
{
	if (iLocal_632 == 101)
	{
		if (!iLocal_871)
		{
			Function_293(Global_34573, (*&Local_4 + 1100)[0], 1, 1, 1);
			if (SQUAD_IS_VALID(Local_4.f_772))
			{
				Function_292(Local_4.f_772);
			}
			Function_291();
			iLocal_871 = 1;
		}
	}
	else if (iLocal_632 == 8)
	{
		if (!iLocal_871)
		{
			TRAIN_SET_TARGET_SPEED(bLocal_1049, 0.0f);
			if (IS_ACTOR_ALIVE(bLocal_637))
			{
				Function_293(bLocal_637, (*&Local_4 + 1068)[1], 1, 1, 1);
			}
			iLocal_871 = 1;
		}
	}
	else if (iLocal_632 == 2)
	{
		if (!iLocal_871)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1040)[3], &vLocal_839);
			if (Function_283(StackVal, StackVal, vLocal_839))
			{
				if (IS_ACTOR_VALID(bLocal_637))
				{
					Function_293(bLocal_637, (*&Local_4 + 1040)[3], 1, 1, 1);
				}
				TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
				Function_282();
				if (IS_ACTOR_ALIVE((*&Local_4 + 656)[02]))
				{
					SET_ACTOR_RIDEABLE((*&Local_4 + 656)[02], 1);
				}
				iLocal_871 = 1;
			}
		}
	}
	return 1;
}

void Function_282() //Position: 0xC917 / 51479
{
	Local_4.f_708 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "SpareHorses"));
	(*&Local_4 + 696)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "sparehorse", 980, -804.0f, 13,05098f, 3720f, 0.0f, 222,874f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 696)[02], Local_4.f_708);
	TASK_STAND_STILL((*&Local_4 + 696)[02], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 696)[02], 3);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 696)[02], true);
	return;
}

bool Function_283(vector3 vParam0) //Position: 0xC9A2 / 51618
{
	if (!iLocal_874)
	{
		if (IS_ACTOR_VALID(bLocal_637))
		{
			DESTROY_ACTOR(bLocal_637);
			return 0;
		}
		iLocal_874 = 1;
	}
	if (iLocal_874 == 1)
	{
		if (!IS_ACTOR_VALID(bLocal_637))
		{
			bLocal_637 = Function_284(1, 1, vParam0.x, vParam0.y, vParam0.z, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_637, 1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bLocal_637, false);
			return 0;
		}
	}
	return 1;
}

bool Function_284(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xCA07 / 51719
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
	if (Global_3381 || Function_224(1))
	{
		Function_290(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_289())
		{
			return "";
		}
	}
	if (!Function_287())
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
		Function_232(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_232(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_232(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_232(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_286(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_286(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_41() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
				if (!Function_74(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
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
		Function_285(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_41() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_285(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCD5F / 52575
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

var Function_286(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCD9C / 52636
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

bool Function_287() //Position: 0xCE37 / 52791
{
	if (Function_288() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_288() //Position: 0xCE4D / 52813
{
	return Global_12976.f_152;
}

bool Function_289() //Position: 0xCE58 / 52824
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_290(var uParam0, bool bParam1, bool bParam2) //Position: 0xCE78 / 52856
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_77(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_77(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_291() //Position: 0xCEA5 / 52901
{
	if (IS_LAYOUTREF_VALID(Local_442))
	{
		Function_175(&Local_442 + 4);
		DESTROY_LAYOUT(Local_442);
	}
	if (IS_LAYOUTREF_VALID(Local_462))
	{
		DESTROY_LAYOUT(Local_462);
	}
	if (IS_LAYOUTREF_VALID(Local_414))
	{
		Function_175(&Local_414 + 4);
		DESTROY_LAYOUT(Local_414);
	}
	if (IS_LAYOUTREF_VALID(Local_481))
	{
		DESTROY_LAYOUT(Local_481);
	}
	if (IS_LAYOUTREF_VALID(Local_505))
	{
		DESTROY_LAYOUT(Local_505);
	}
	if (IS_LAYOUTREF_VALID(Local_354))
	{
		Function_175(&Local_354 + 4);
		DESTROY_LAYOUT(Local_354);
	}
	if (bLocal_1049 >= 4294967295)
	{
		TRAIN_DESTROY_TRAIN(bLocal_1049);
		bLocal_1049 = 4294967295;
	}
	return;
}

void Function_292(bool bParam0) //Position: 0xCF2E / 53038
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

void Function_293(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xCF72 / 53106
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

int Function_294() //Position: 0xD079 / 53369
{
	return 1;
}

int Function_295() //Position: 0xD080 / 53376
{
	float fVar0;
	
	Function_296(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_302(StackVal, StackVal, Global_6289, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_296(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xD0DB / 53467
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
	Function_236();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_50();
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
			if (Function_41())
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
				Function_299(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_299(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_86(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_298()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_298()));
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
	if (Function_297(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_297(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_297(int iParam0) //Position: 0xD384 / 54148
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_298() //Position: 0xD3A0 / 54176
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

vector3 Function_299(bool bParam0) //Position: 0xD41F / 54303
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_300(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xD430 / 54320
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_301(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_301(bool bParam0) //Position: 0xD454 / 54356
{
	int iVar0;
	
	switch (bParam0)
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

void Function_302(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10) //Position: 0xD991 / 55697
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = fParam6;
	vVar2.y = fParam7;
	vVar2.z = fParam8;
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
				Function_303(bVar1, bParam0);
			}
		}
		if (!Function_74(StackVal, StackVal, vVar2))
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

void Function_303(bool bParam0, bool bParam1) //Position: 0xDBFF / 56319
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

int Function_304() //Position: 0xDC74 / 56436
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
		}
	}
	if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		return 1;
	}
	return 0;
}

void Function_305(bool bParam0) //Position: 0xDCAD / 56493
{
	Function_306(0, 0x40400000);
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

void Function_306(bool bParam0, float fParam1) //Position: 0xDCE1 / 56545
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
	Function_308();
	Function_307();
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

void Function_307() //Position: 0xDDDF / 56799
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_308() //Position: 0xDE11 / 56849
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

void Function_309() //Position: 0xDF0E / 57102
{
	switch (iLocal_633)
	{
		case 0x00000000:
			if (Function_337(iLocal_632))
			{
				bLocal_519 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
				iLocal_871 = 0;
				if (IS_LAYOUTREF_VALID(bLocal_519))
				{
					if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(bLocal_519, "dzcv_BB_Restriction")))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_519, "dzcv_BB_Restriction"));
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_519, "dzcv_BB_Restriction"));
					}
				}
				DISABLE_WORLD_SECTOR("butterBridgeB");
				DISABLE_WORLD_SECTOR("butterBridgeA");
				ENABLE_WORLD_SECTOR("butterBridgeC");
				ENABLE_WORLD_SECTOR("butterBridgeD");
				ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				if (iLocal_653[2] == 0)
				{
					iLocal_953 = 6;
					Function_219(&iLocal_638);
					iLocal_633 = 1;
				}
				else
				{
					if (SQUAD_IS_VALID(Local_4.f_772))
					{
						Function_292(Local_4.f_772);
					}
					Function_300(&uLocal_1062, 0, 0, 4294967295, 4294967295);
					Function_302(Local_4, 32,13f, 97,27f, 2756,32f, &Local_4 + 792[0], 0, -680,85f, 15,48f, 3706,21f, 1, 1);
					iLocal_953 = 6;
					Function_219(&iLocal_638);
					iLocal_633 = 3;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_219(&iLocal_638);
				iLocal_633 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_312())
			{
				Function_219(&iLocal_638);
				if (SQUAD_IS_VALID(Local_4.f_772))
				{
					Function_292(Local_4.f_772);
				}
				Function_302(Local_4, 32,13f, 97,27f, 2756,32f, &Local_4 + 792[0], 0, -680,85f, 15,48f, 3706,21f, 1, 1);
				Function_300(&uLocal_1062, 0, 0, 4294967295, 4294967295);
				iLocal_633 = 3;
			}
			break;
		
		case 0x00000003:
			DISABLE_WORLD_SECTOR("butterBridgeB");
			if (!IS_PHYSINST_VALID(bLocal_1063))
			{
				bLocal_1063 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(31,7f, 94,5f, 2739.0f, 200.0f, "p_gen_butterbridge02x", 1);
			}
			else
			{
				bLocal_898 = GET_OBJECT_FROM_PHYSINST(bLocal_1063);
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					PLAY_SIMPLE_PROP_ANIMATION(bLocal_898, "bridgeExplode", 0, 0, 1.0f, 0.0f);
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
			}
			if (Function_264("$/cutscene/MEXARMY02_CS02_train/MEXARMY02_CS02_train", &iLocal_625, &Local_520, &iLocal_632, 53376, 58404, 51248, 57943, 50981, 50974, 0, 1, 1, 2, 1, 0, 1))
			{
				STREAMING_UNLOAD_SCENE();
				if (HUD_IS_FADED())
				{
					Function_268(0,5f);
				}
				iLocal_633 = 106;
			}
			break;
		
		case 0x00000069:
			if (Function_586(&iLocal_638) <= 0,5f)
			{
				Function_219(&iLocal_638);
				iLocal_633 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_664 = true;
			}
			break;
	}
	return;
}

int Function_310() //Position: 0xE257 / 57943
{
	if (iLocal_632 == 0)
	{
		Function_293(bLocal_901, (*&Local_4 + 956)[5], 1, 1, 1);
		Function_293(bLocal_902, (*&Local_4 + 956)[6], 1, 1, 1);
		TASK_VEHICLE_ENTER(bLocal_636, bLocal_900, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, -4378,868f, 38,704f, 4360,775f, 110,21f, 1, true, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_636, 1, false);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		iLocal_1069 = 1;
		iLocal_1074 = 0;
		iLocal_1075 = 0;
	}
	else if (iLocal_632 == 2)
	{
		if (IS_ACTOR_VALID(bLocal_637))
		{
			Function_293(bLocal_637, (*&Local_4 + 1040)[3], 1, 1, 1);
		}
		TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
		if (IS_ACTOR_ALIVE((*&Local_4 + 656)[02]))
		{
			SET_ACTOR_RIDEABLE((*&Local_4 + 656)[02], 1);
		}
		Function_293(bLocal_636, (*&Local_4 + 1040)[2], 1, 1, 1);
		Function_293(Global_34573, (*&Local_4 + 1040)[0], 1, 0, 0);
		ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
		TASK_CLEAR(bLocal_636);
		TASK_GO_NEAR_OBJECT(bLocal_636, (*&Local_4 + 1040)[1], 1.0f, 1, 0, 1);
		ENABLE_CHILD_SECTOR("cas_gunsmithBlacksmith01Props01x");
		ENABLE_CHILD_SECTOR("cas_horsestables01Props01x");
	}
	else if (iLocal_632 == 8)
	{
		Function_293(Global_34573, (*&Local_4 + 1100)[1], 1, 0, 1);
		if (bLocal_1049 >= 4294967295)
		{
			GET_OBJECT_ORIENTATION((*&Local_4 + 1124)[6], &Local_836);
			UNK_0x44986367(StackVal, &vLocal_833);
			vLocal_833 = { StackVal, StackVal, Vector(vLocal_833, StackVal, StackVal) * Vector(-1.0f, -1.0f, -1.0f) };
			GET_OBJECT_POSITION((*&Local_4 + 1124)[6], &Local_836);
			TRAIN_SET_POSITION_DIRECTION(bLocal_1049, &Local_836, &vLocal_833);
			GET_OBJECT_POSITION((*&Local_4 + 1124)[6], &Local_836);
			TRAIN_SET_TARGET_POS(bLocal_1049, &Local_836);
			TRAIN_SET_TARGET_SPEED(bLocal_1049, 0.0f);
		}
	}
	return 1;
}

int Function_311() //Position: 0xE424 / 58404
{
	if (iLocal_632 == 101)
	{
		if (!iLocal_878)
		{
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(-1,813f, -125,61f, 0.0f, -3.0f, 0);
			iLocal_878 = 1;
		}
	}
	else if (iLocal_632 == 2)
	{
		DISABLE_CHILD_SECTOR("cas_gunsmithBlacksmith01Props01x");
		DISABLE_CHILD_SECTOR("cas_horsestables01Props01x");
	}
	else if (iLocal_632 == 2)
	{
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
	}
	return 1;
}

bool Function_312() //Position: 0xE4B5 / 58549
{
	switch (iLocal_953)
	{
		case 0x00000006:
			Function_336(bLocal_1052);
			Function_336(Local_4.f_464);
			if (IS_ACTOR_VALID(bLocal_901))
			{
				bLocal_903 = GET_MOUNT(bLocal_901);
				RELEASE_ACTOR(bLocal_901);
				if (IS_ACTOR_VALID(bLocal_903))
				{
					RELEASE_ACTOR(bLocal_903);
				}
			}
			if (IS_ACTOR_VALID(bLocal_902))
			{
				bLocal_903 = GET_MOUNT(bLocal_902);
				RELEASE_ACTOR(bLocal_902);
				if (IS_ACTOR_VALID(bLocal_903))
				{
					RELEASE_ACTOR(bLocal_903);
				}
			}
			if (bLocal_1049 <= 0)
			{
				iLocal_950 = 6;
				iLocal_953 = 7;
			}
			else
			{
				iLocal_953 = 9;
			}
			break;
		
		case 0x00000007:
			if (Function_314("rail__rrtrack_02x", (*&Local_4 + 1124)[6], (*&Local_4 + 1124)[6], (*&Local_4 + 1124)[3]))
			{
				iLocal_953 = 8;
			}
			break;
		
		case 0x00000008:
			TRAIN_SET_TARGET_SPEED(bLocal_1049, 0.0f);
			TRAIN_SET_ENGINE_ENABLED(bLocal_1049, 0);
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(bLocal_1049, 4294967295, 0);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1124)[1], &Local_836);
			UNK_0x44986367(StackVal, &vLocal_833);
			GET_OBJECT_POSITION((*&Local_4 + 1124)[1], &Local_836);
			TRAIN_SET_POSITION_DIRECTION(bLocal_1049, &Local_836, &vLocal_833);
			Function_313(6, 0, 1);
			Function_215(bLocal_637);
			iLocal_953 = 9;
			break;
		
		case 0x00000009:
			iLocal_953 = 10;
			break;
		
		case 0x0000000A:
			iLocal_953 = 104;
			break;
		
		case 0x0000000B:
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_313(int iParam0, bool bParam1, bool bParam2) //Position: 0xE615 / 58901
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
				Function_215(bVar0);
			}
		}
	}
	return;
}

bool Function_314(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE70C / 59148
{
	var uVar0;
	struct<5> Var3;
	
	switch (iLocal_950)
	{
		case 0x00000006:
			if (bLocal_1049 <= 0)
			{
				bLocal_1049 = TRAIN_CREATE_NEW_TRAIN(7, iParam0, 1);
				GET_OBJECT_POSITION(bParam1, &uVar0);
				GET_OBJECT_ORIENTATION(bParam2, &Var3);
				GET_OBJECT_POSITION(bParam3, &uVar6);
				UNK_0x44986367(StackVal, &vLocal_833);
				TRAIN_SET_POSITION_DIRECTION(bLocal_1049, &uVar0, &vLocal_833);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1166);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1167);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1160);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1164);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1156);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1160);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1049, 1162);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, true)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 2)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 3)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 4)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 5)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 6)), true);
				TRAIN_FORCE_HIGH_LOD(bLocal_1049, 1);
				TRAIN_SET_TARGET_POS(bLocal_1049, &uVar6);
				TRAIN_SET_TARGET_SPEED(bLocal_1049, 0.0f);
				TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1049, 0);
				bLocal_881 = TRAIN_GET_CAR(bLocal_1049, false);
				bLocal_882 = TRAIN_GET_CAR(bLocal_1049, 2);
				bLocal_883 = TRAIN_GET_CAR(bLocal_1049, 3);
				iLocal_884 = TRAIN_GET_CAR(bLocal_1049, 4);
				iLocal_885 = TRAIN_GET_CAR(bLocal_1049, 5);
				bLocal_886 = TRAIN_GET_CAR(bLocal_1049, 6);
				iLocal_950 = 7;
			}
			else
			{
				iLocal_950 = 104;
			}
			break;
		
		case 0x00000007:
			if (Function_332(bLocal_881))
			{
				iLocal_950 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_331(bLocal_882))
			{
				iLocal_950 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_330(bLocal_883))
			{
				iLocal_950 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_329(iLocal_884))
			{
				iLocal_950 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_328(iLocal_885))
			{
				iLocal_950 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_318(bLocal_886))
			{
				iLocal_950 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_315();
			iLocal_950 = 104;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_315() //Position: 0xE912 / 59666
{
	Function_316(&Local_414 + 68);
	Function_316(&Local_414 + 76);
	Function_316(&Local_414 + 84);
	Function_316(&Local_414 + 92);
	Function_316(&Local_414 + 100);
	Function_316(&Local_414 + 108);
	Function_316(&Local_462 + 28);
	Function_316(&Local_462 + 36);
	Function_316(&Local_462 + 44);
	Function_316(&Local_462 + 52);
	Function_316(&Local_462 + 60);
	Function_316(&Local_462 + 68);
	Function_316(&Local_481 + 52);
	Function_316(&Local_481 + 60);
	Function_316(&Local_481 + 68);
	Function_316(&Local_481 + 76);
	Function_316(&Local_481 + 84);
	Function_316(&Local_481 + 92);
	Function_316(&Local_505 + 40);
	Function_316(&Local_505 + 48);
	return;
}

void Function_316(int iParam0) //Position: 0xE9B8 / 59832
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_232(*iParam0);
	vVar0 = { StackVal, StackVal, Function_232(*iParam0) };
	Function_317(*iParam0);
	vVar3 = { StackVal, StackVal, Function_317(*iParam0) };
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

vector3 Function_317(bool bParam0) //Position: 0xEA84 / 60036
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

bool Function_318(bool bParam0) //Position: 0xEAAB / 60075
{
	var uVar0;
	
	Function_327(3, 2);
	uVar0 = uVar0;
	Function_325(&Local_505 + 4, "p_gen_crateStack02x", 0, 0);
	if (!Function_320(&Local_505 + 4))
	{
		return 0;
	}
	Local_505 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	Local_505.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_505, "myVolume", 2, 0.0f, 1,888142f, 0.0f, 0.0f, 0.0f, 0.0f, 2,991357f, 2,070917f, 7,725102f);
	Local_505.f_24 = CREATE_OBJECTSET_IN_LAYOUT("FirePosSet", Local_505, 8, 0);
	(*&Local_505 + 28)[0] = CREATE_POINT_IN_LAYOUT(Local_505, "rear01", -1,038773f, 0,9787322f, 3,279619f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_505 + 28)[0], Local_505.f_24);
	Local_505.f_36 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_505, "caboose_cover_01", -0,4943278f, 0,9404024f, -2,673853f, 0.0f, 180.0f, 0.0f, 1);
	Local_505.f_40 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_505, "caboose_cover_02", 0,5130447f, 0,9570659f, -2,644474f, 0.0f, 90.0f, 0.0f, 1);
	Local_505.f_44 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_505, "caboose_cover_03", 0,01150592f, 0,9404024f, 3,305179f, 0.0f, 0.0f, 0.0f, 1);
	Local_505.f_48 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_505, "caboose_cover_04", -0,4922998f, 0,9404024f, 2,668518f, 0.0f, 270.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_505, "crateStack02x0", "p_gen_crateStack02x", 0.0f, 0,9629957f, 0.0f, 0.0f, 90,41108f, 0.0f, 1);
	Function_319(Local_505, bParam0);
	return 1;
}

void Function_319(bool bParam0, bool bParam1) //Position: 0xEC90 / 60560
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			bVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_54(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(bVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

bool Function_320(int iParam0) //Position: 0xECD2 / 60626
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_324();
	iVar1 = 0;
	if (!Function_178(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_323(iParam0[iVar03], 8);
		}
		else if (Function_322())
		{
			iVar1 = 1;
			Function_323(iParam0[iVar03], 8);
		}
		Function_323(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_178(iParam0[iVar03], 4))
		{
			if (!Function_178(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_178(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_178(iParam0[03], 8) || iVar1));
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
				Function_323(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_178(iParam0[iVar03], 4))
		{
			if (!Function_178(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
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
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
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
	Function_321();
	return 1;
}

void Function_321() //Position: 0xF04D / 61517
{
	if (!Function_297(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_322() //Position: 0xF08D / 61581
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

void Function_323(var uParam0, int iParam1) //Position: 0xF0B8 / 61624
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_324() //Position: 0xF0C9 / 61641
{
	if (!Function_297(128))
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

var Function_325(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF10B / 61707
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_326(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_323(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_326(var uParam0, int iParam1, int iParam2) //Position: 0xF143 / 61763
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_178(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_323(uParam0[iVar03], 4);
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

void Function_327(int iParam0, int iParam1) //Position: 0xF207 / 61959
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

bool Function_328(bool bParam0) //Position: 0xF250 / 62032
{
	var uVar0;
	
	Function_327(3, 2);
	uVar0 = uVar0;
	Function_325(&Local_481 + 4, "p_gen_crateWeapons04x", 0, 0);
	Function_325(&Local_481 + 4, "p_gen_crateStack02x", 0, 0);
	if (!Function_320(&Local_481 + 4))
	{
		return 0;
	}
	Local_481 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	Local_481.f_32 = CREATE_OBJECTSET_IN_LAYOUT("BoxCar02_RoofSet", Local_481, 8, 0);
	(*&Local_481 + 36)[0] = CREATE_POINT_IN_LAYOUT(Local_481, "BoxCar02_Roof_Pos01", 0.0f, 3,658668f, -2,422935f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_481 + 36)[0], Local_481.f_32);
	(*&Local_481 + 36)[1] = CREATE_POINT_IN_LAYOUT(Local_481, "BoxCar02_Roof_Pos02", 0.0f, 3,658668f, 2,559989f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_481 + 36)[1], Local_481.f_32);
	Local_481.f_48 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_01", 0,162023f, 0,98f, 4,350276f, 0.0f, 0.0f, 0.0f, 1);
	Local_481.f_52 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_02", -0,2564332f, 0,9986529f, 4,234454f, 0.0f, 270.0f, 0.0f, 1);
	Local_481.f_56 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_03", -1,09997f, 0,9785498f, 2,817737f, 0.0f, 270.0f, 0.0f, 1);
	Local_481.f_60 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_04", -0,9130258f, 0,97855f, 1,982805f, 0.0f, 180.0f, 0.0f, 1);
	Local_481.f_64 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_05", -1,113542f, 0,9785501f, -2,150507f, 0.0f, 270.0f, 0.0f, 1);
	Local_481.f_68 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_06", -1,036592f, 0,9785501f, -2,970281f, 0.0f, 180.0f, 0.0f, 1);
	Local_481.f_72 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_07", -0,1856255f, 0,9870022f, -4,370387f, 0.0f, 180.0f, 0.0f, 1);
	Local_481.f_76 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_08", 0,1621843f, 0,9620185f, -4,25203f, 0.0f, 90.0f, 0.0f, 1);
	Local_481.f_80 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_09", 1,062388f, 0,9785501f, -3,007784f, 0.0f, 90.0f, 0.0f, 1);
	Local_481.f_84 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_010", 1,052135f, 0,9785501f, -2,122864f, 0.0f, 0.0f, 0.0f, 1);
	Local_481.f_88 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_011", 1,145025f, 0,97855f, 2,063719f, 0.0f, 90.0f, 0.0f, 1);
	Local_481.f_92 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_481, "BoxCar04_cover_012", 0,9465319f, 0,97855f, 2,812584f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_481, "crateWeapons04x0", "p_gen_crateWeapons04x", -0,518935f, 0,9688807f, 0,6482228f, 0.0f, -89,16103f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_481, "crateStack02x0", "p_gen_crateStack02x", 0.0f, 0,9555629f, -1,917668f, 0.0f, -90,06703f, 0.0f, 1);
	Function_319(Local_481, bParam0);
	return 1;
}

bool Function_329(bool bParam0) //Position: 0xF676 / 63094
{
	var uVar0;
	
	Function_327(3, 2);
	uVar0 = uVar0;
	Function_325(&Local_462 + 4, "p_gen_crate17x", 0, 0);
	if (!Function_320(&Local_462 + 4))
	{
		return 0;
	}
	Local_462 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	Local_462.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_462, "myZone", 2, 0.0f, 2,063129f, 0.0f, 0.0f, 0.0f, 0.0f, 5,80653f, 5,484005f, 14,97453f);
	Local_462.f_24 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_01", -0,2499722f, 1,031745f, -5,576481f, 0.0f, 180.0f, 0.0f, 1);
	Local_462.f_28 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_02", 0,1772977f, 1,031745f, -5,650031f, 0.0f, 90.0f, 0.0f, 1);
	Local_462.f_32 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_03", 1,11525f, 1,036771f, -3,442345f, 0.0f, 90.0f, 0.0f, 1);
	Local_462.f_36 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_04", 1,005343f, 1,032476f, -2,873644f, 0.0f, 0.0f, 0.0f, 1);
	Local_462.f_40 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_05", 1,013988f, 1,032476f, 3,095541f, 0.0f, 90.0f, 0.0f, 1);
	Local_462.f_44 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_06", 1,043006f, 1,036771f, 3,463803f, 0.0f, 0.0f, 0.0f, 1);
	Local_462.f_48 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_07", 0,2576328f, 1,031745f, 5,830119f, 0.0f, 0.0f, 0.0f, 1);
	Local_462.f_52 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_08", -0,2142112f, 1,031745f, 5,894929f, 0.0f, 270.0f, 0.0f, 1);
	Local_462.f_56 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_09", -1,059657f, 1,036771f, 3,629973f, 0.0f, 270.0f, 0.0f, 1);
	Local_462.f_60 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_010", -0,9823455f, 1,032476f, 2,893973f, 0.0f, 180.0f, 0.0f, 1);
	Local_462.f_64 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_011", -1,139464f, 1,032476f, -2,925287f, 0.0f, 270.0f, 0.0f, 1);
	Local_462.f_68 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_462, "Baggage01_cover_012", -1,109503f, 1,036771f, -3,538514f, 0.0f, 180.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_462, "ncrate17x0", "p_gen_crate17x", -0,5942483f, 0,9743899f, -5,083786f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_462, "ncrate17x1", "p_gen_crate17x", -0,5942483f, 0,9743899f, -3,332435f, 0.0f, -91,26407f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_462, "ncrate17x2", "p_gen_crate17x", -0,3339943f, 0,9743899f, 3,25312f, 0.0f, -90,43121f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_462, "ncrate17x3", "p_gen_crate17x", -0,471976f, 0,9650221f, 5,129209f, -2,27187f, -179,8492f, -88,68757f, 1);
	Local_462.f_72 = CREATE_PROP_IN_LAYOUT(Local_462, "ncrate17x4", "p_gen_crate17x", -0,5927008f, 0,9828935f, -0,6758103f, 0.0f, -85,7381f, 0.0f, 1);
	Function_319(Local_462, bParam0);
	return 1;
}

bool Function_330(bool bParam0) //Position: 0xFAAC / 64172
{
	var uVar0;
	
	Function_327(3, 2);
	uVar0 = uVar0;
	Function_325(&Local_442 + 4, "p_gen_crate01x", 0, 0);
	Function_325(&Local_442 + 4, "p_gen_crate03x", 0, 0);
	Function_325(&Local_442 + 4, "p_gen_crateWeapons04x", 0, 0);
	if (!Function_320(&Local_442 + 4))
	{
		return 0;
	}
	Local_442 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	Local_442.f_44 = CREATE_OBJECTSET_IN_LAYOUT("BoxCar2RoofSet", Local_442, 8, 0);
	(*&Local_442 + 48)[0] = CREATE_POINT_IN_LAYOUT(Local_442, "nrooftop01", 0,4210121f, 1,059848f, 3,50393f, 0.0f, -84,48444f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_442 + 48)[0], Local_442.f_44);
	(*&Local_442 + 48)[1] = CREATE_POINT_IN_LAYOUT(Local_442, "nrooftop02", 0.0f, 1,06f, -1,181104f, 0.0f, 454,6254f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_442 + 48)[1], Local_442.f_44);
	Local_442.f_60 = CREATE_PROP_IN_LAYOUT(Local_442, "ncrate01x0", "p_gen_crate01x", 1,260963f, 1,092183f, -3,062003f, 0.0f, 0.0f, 0.0f, 1);
	Local_442.f_64 = CREATE_PROP_IN_LAYOUT(Local_442, "ncrate03x0", "p_gen_crate03x", -0,01797661f, 1,08065f, 4,718172f, 0.0f, 0.0f, 0.0f, 1);
	Local_442.f_68 = CREATE_PROP_IN_LAYOUT(Local_442, "crateWeapons04x0", "p_gen_crateWeapons04x", -1,247103f, 1,070282f, -4,815496f, 0.0f, -26,96412f, 0.0f, 1);
	Local_442.f_72 = CREATE_PROP_IN_LAYOUT(Local_442, "crateWeapons04x1", "p_gen_crateWeapons04x", -1,03719f, 1,032904f, -0,1220456f, 0.0f, -82,40175f, 0.0f, 1);
	Local_442.f_76 = CREATE_PROP_IN_LAYOUT(Local_442, "crateWeapons04x2", "p_gen_crateWeapons04x", 0,4558479f, 1,062771f, 5,275903f, 0.0f, -132,1149f, 0.0f, 1);
	Function_319(Local_442, bParam0);
	return 1;
}

bool Function_331(bool bParam0) //Position: 0xFD33 / 64819
{
	bool bVar0;
	
	Function_327(3, 2);
	bVar0 = bVar0;
	Function_325(&Local_414 + 4, "p_gen_crateWeapons04x", 0, 0);
	Function_325(&Local_414 + 4, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_325(&Local_414 + 4, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (!Function_320(&Local_414 + 4))
	{
		return 0;
	}
	Local_414 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	Local_414.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_414, "myVolume", 2, 0.0f, 6,604063f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_414.f_48 = CREATE_OBJECTSET_IN_LAYOUT("RoofSet", Local_414, 8, 0);
	(*&Local_414 + 52)[0] = CREATE_POINT_IN_LAYOUT(Local_414, "pos01", 0.0f, 3,697142f, 2,237385f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_414 + 52)[0], Local_414.f_48);
	(*&Local_414 + 52)[1] = CREATE_POINT_IN_LAYOUT(Local_414, "pos02", 0.0f, 3,697142f, -2,482769f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_414 + 52)[1], Local_414.f_48);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_414, "train_climb_left", "train_climb_left", -1,411f, 1,039f, -2,620399f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar0, "trainAttach", 2);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_414, "train_climb_left1", "train_climb_left", -1,411f, 1,039f, 2,286764f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar0, "trainAttach", false);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_414, "train_climb_right", "train_climb_right", 1,411f, 1,039f, -2,406803f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar0, "trainAttach", 3);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_414, "train_climb_right1", "train_climb_right", 1,411f, 1,039f, 2,540062f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar0, "trainAttach", true);
	Local_414.f_64 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_01", 0,2870879f, 0,9851047f, 4,303898f, 0.0f, 0.0f, 0.0f, 1);
	Local_414.f_68 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_02", -0,1617738f, 0,9986529f, 4,326625f, 0.0f, 270.0f, 0.0f, 1);
	Local_414.f_72 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_03", -1,218584f, 0,9785498f, 2,863947f, 0.0f, 270.0f, 0.0f, 1);
	Local_414.f_76 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_04", -1,189995f, 0,97855f, 1,921646f, 0.0f, 180.0f, 0.0f, 1);
	Local_414.f_80 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_05", -1,23951f, 0,9785501f, -2,081084f, 0.0f, 270.0f, 0.0f, 1);
	Local_414.f_84 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_06", -1,130085f, 0,9785501f, -2,98185f, 0.0f, 180.0f, 0.0f, 1);
	Local_414.f_88 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_07", -0,1568854f, 0,9870425f, -4,480693f, 0.0f, 180.0f, 0.0f, 1);
	Local_414.f_92 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_08", 0,2826001f, 0,9620185f, -4,420415f, 0.0f, 90.0f, 0.0f, 1);
	Local_414.f_96 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_09", 1,114297f, 0,9785501f, -2,926259f, 0.0f, 90.0f, 0.0f, 1);
	Local_414.f_100 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_010", 1,09524f, 0,9785501f, -2,167124f, 0.0f, 0.0f, 0.0f, 1);
	Local_414.f_104 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_011", 1,144359f, 0,97855f, 2,141771f, 0.0f, 90.0f, 0.0f, 1);
	Local_414.f_108 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_414, "BoxCar04_cover_012", 1,01273f, 0,97855f, 2,884024f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_414, "crateWeapons04x0", "p_gen_crateWeapons04x", -1,12487f, 0,9756501f, -3,629373f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_414, "crateWeapons04x1", "p_gen_crateWeapons04x", -0,3865677f, 0,9774683f, 0,6355647f, 0.0f, -92,58096f, 0.0f, 1);
	Function_319(Local_414, bParam0);
	return 1;
}

bool Function_332(int iParam0) //Position: 0x1032A / 66346
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_327(3, 2);
	uVar0 = uVar0;
	Function_325(&Local_354 + 4, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_320(&Local_354 + 4))
	{
		return 0;
	}
	Local_354 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	Local_354.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_354, "BoilerHitBox", 2, 0.0f, 1,518635f, -0,5900595f, 0.0f, 0.0f, 0.0f, 2,2f, 2,445126f, 6,634629f);
	Local_354.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_354, "onTrainCheck", 2, 0.0f, 2,118635f, 4,439789f, 0.0f, 0.0f, 0.0f, 2.0f, 2,5f, 2.0f);
	*(&Local_354 + 28) = { 0,002348f, 2,778975f, -0,977708f };
	*(&Local_354 + 28 + 12) = { 0.0f, 90.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 28);
	Local_354.f_52 = CREATE_POINT_IN_LAYOUT(Local_354, "Loc_BoilerExp", 0,002348f, 2,778975f, -0,977708f, 0.0f, 90.0f, 0.0f);
	*(&Local_354 + 56) = { 0,002348f, 2,778975f, -0,977708f };
	*(&Local_354 + 56 + 12) = { 0.0f, 90.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 56);
	Local_354.f_80 = CREATE_POINT_IN_LAYOUT(Local_354, "Loc_BoilerTarget", 0,002348f, 2,778975f, -0,977708f, 0.0f, 90.0f, 0.0f);
	Local_354.f_84 = CREATE_OBJECTSET_IN_LAYOUT("nSparksSet", Local_354, 8, 0);
	*(&Local_354 + 88[06]) = { 0,867815f, 1,080334E-07f, -0,8888474f };
	*(&Local_354 + 88[06] + 12) = { 0.0f, 0.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 88[06]);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_354, "effectPos01", 0,867815f, 1,080334E-07f, -0,8888474f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_354.f_84);
	*(&Local_354 + 88[16]) = { 0,8909378f, 0,05224555f, 0,8605514f };
	*(&Local_354 + 88[16] + 12) = { 0.0f, 0.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 88[16]);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_354, "effectPos02", 0,8909378f, 0,05224555f, 0,8605514f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_354.f_84);
	*(&Local_354 + 88[26]) = { 0,8909378f, 0,05224555f, 3,082047f };
	*(&Local_354 + 88[26] + 12) = { 0.0f, 0.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 88[26]);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_354, "effectPos03", 0,8909378f, 0,05224555f, 3,082047f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_354.f_84);
	*(&Local_354 + 88[36]) = { -0,9861965f, 0,05224539f, -0,8806729f };
	*(&Local_354 + 88[36] + 12) = { 0.0f, 0.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 88[36]);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_354, "effectPos04", -0,9861965f, 0,05224539f, -0,8806729f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_354.f_84);
	*(&Local_354 + 88[46]) = { -0,8909378f, 0,05224557f, 0,8605514f };
	*(&Local_354 + 88[46] + 12) = { 0.0f, 0.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 88[46]);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_354, "effectPos05", -0,8909378f, 0,05224557f, 0,8605514f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_354.f_84);
	*(&Local_354 + 88[56]) = { -0,9861965f, 0,05224539f, 3,082166f };
	*(&Local_354 + 88[56] + 12) = { 0.0f, 0.0f, 0.0f };
	Function_333(iParam0, &Local_354 + 88[56]);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_354, "effectPos06", -0,9861965f, 0,05224539f, 3,082166f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_354.f_84);
	Local_354.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_354, "train_engineer", "train_engineer", -0,374f, 1,14288f, 3,992f, 0.0f, 0.0f, 0.0f);
	Function_319(Local_354, iParam0);
	return 1;
}

void Function_333(var uParam0, int iParam1) //Position: 0x10796 / 67478
{
	Function_334(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_334(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x107A8 / 67496
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_335(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_335(int iParam0, int iParam1) //Position: 0x108D0 / 67792
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_74(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_74(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_336(bool bParam0) //Position: 0x1093B / 67899
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

bool Function_337(int iParam0) //Position: 0x1097F / 67967
{
	switch (iParam0)
	{
		case 0x00000008:
			Function_305(0);
			if (!iLocal_653[2])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			return 1;
			break;
		
		case 0x00000004:
			Function_219(&iLocal_638);
			iLocal_633 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			Function_219(&iLocal_638);
			iLocal_633 = 1;
			return 1;
			break;
		
		case 0x00000062:
			return 0;
			break;
	}
	return 0;
}

void Function_338() //Position: 0x10A15 / 68117
{
	if (iLocal_633 < 4 && iLocal_633 > 105)
	{
		if (!Function_392(&iLocal_918))
		{
			Function_391(&iLocal_918, 13,1f);
		}
		else if (Function_586(&iLocal_918) < 13.0f)
		{
			if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_636, 1))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_390();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_219(&iLocal_918);
			}
		}
		Function_375();
		if (!Function_392(&iLocal_915))
		{
			Function_374(&iLocal_915);
		}
		else if (Function_586(&iLocal_915) < 5.0f)
		{
			Function_373();
			Function_219(&iLocal_915);
		}
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 792)[2]))
		{
			Function_225("Mexarmy02_cliff_fail");
			bLocal_665 = true;
		}
		if (iLocal_633 < 6 && iLocal_633 == 104)
		{
			Function_232((*&Local_4 + 1124)[6]);
			if (Function_368(StackVal, StackVal, "$/cutscene/MEXARMY02_CS02_train/MEXARMY02_CS02_train", &uLocal_1061, Function_232((*&Local_4 + 1124)[6]), 0, 1000.0f, 2000.0f, 2, 1, 2, 2, 0, 1))
			{
			}
		}
	}
	switch (iLocal_633)
	{
		case 0x00000000:
			if (Function_363())
			{
				iLocal_871 = 0;
				if (!iLocal_653[1])
				{
					Function_300(&uLocal_1062, 0, 0, 4294967295, 4294967295);
					Function_219(&iLocal_638);
					iLocal_633 = 1;
				}
				else
				{
					Function_300(&uLocal_1062, 0, 0, 4294967295, 4294967295);
					Function_219(&iLocal_638);
					iLocal_633 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_362(Global_30707[2]) || iLocal_634 != 4294967295)) && Function_360())
			{
				if (Function_360())
				{
					Function_219(&iLocal_638);
					iLocal_633 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_359())
			{
				GET_OBJECT_ORIENTATION((*&Local_4 + 1124)[1], &Local_836);
				UNK_0x44986367(StackVal, &vLocal_833);
				GET_OBJECT_POSITION((*&Local_4 + 1124)[1], &Local_836);
				TRAIN_SET_POSITION_DIRECTION(bLocal_1049, &Local_836, &vLocal_833);
				TRAIN_SET_PARTICLE_EFFECTS_ENABLED(bLocal_1049, 4294967295, 1);
				Function_219(&iLocal_638);
				if (Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_520, iLocal_632))
				{
					Function_231(iLocal_632);
					Function_351(StackVal, StackVal, Function_231(iLocal_632), iLocal_632, Global_30633[1], Function_234(iLocal_632), 0);
					iLocal_633 = 3;
					UI_DISABLE("LoadingSpinner");
				}
				else
				{
					Function_231(iLocal_632);
					Function_351(StackVal, StackVal, Function_231(iLocal_632), iLocal_632, Global_30633[1], Function_234(iLocal_632), 0);
					Function_293(bLocal_636, (*&Local_4 + 1040)[2], 1, 1, 1);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
					TASK_CLEAR(bLocal_636);
					TASK_GO_NEAR_OBJECT(bLocal_636, (*&Local_4 + 1040)[1], 1.0f, 1, 0, 1);
					iLocal_633 = 4;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_264("$/cutscene/MEXARMY02_CS02_a/MEXARMY02_CS02_a", &iLocal_625, &Local_520, &iLocal_632, 53376, 58404, 51248, 57943, 50981, 72400, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_219(&iLocal_638);
				if (!iLocal_879)
				{
					Function_219(&iLocal_638);
					iLocal_633 = 104;
				}
				else
				{
					iLocal_633 = 4;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_264("$/cutscene/MEXARMY02_CS02_SEQ/MEXARMY02_CS02_SEQ", &iLocal_625, &Local_520, &iLocal_632, 53376, 72384, 72377, 57943, 50981, 50974, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_219(&iLocal_638);
				iLocal_633 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_871)
			{
				if (iLocal_879)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1040)[3], &vLocal_839);
					if (Function_283(StackVal, StackVal, vLocal_839))
					{
						if (IS_ACTOR_VALID(bLocal_637))
						{
							Function_293(bLocal_637, (*&Local_4 + 1040)[3], 1, 1, 1);
						}
						TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
						if (IS_ACTOR_ALIVE((*&Local_4 + 656)[02]))
						{
							SET_ACTOR_RIDEABLE((*&Local_4 + 656)[02], 1);
						}
						Function_282();
						Function_293(bLocal_636, (*&Local_4 + 1040)[2], 1, 1, 1);
						Function_293(Global_34573, (*&Local_4 + 1040)[0], 1, 0, 1);
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
						TASK_CLEAR(bLocal_636);
						TASK_GO_NEAR_OBJECT(bLocal_636, (*&Local_4 + 1040)[1], 1.0f, 1, 0, 1);
						iLocal_879 = 0;
						iLocal_871 = 1;
					}
				}
				else
				{
					iLocal_871 = 1;
				}
			}
			else
			{
				if (iLocal_879)
				{
					Function_293(bLocal_636, (*&Local_4 + 1040)[2], 1, 1, 1);
					Function_293(Global_34573, (*&Local_4 + 1040)[0], 1, 0, 1);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
					TASK_CLEAR(bLocal_636);
					TASK_GO_NEAR_OBJECT(bLocal_636, (*&Local_4 + 1040)[1], 1.0f, 1, 0, 1);
				}
				Function_347();
				Function_346();
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_772, 1);
				Function_345(Local_4.f_772, Global_34573, 1);
				GET_OBJECT_POSITION((*&Local_4 + 1124)[3], &Local_836);
				TRAIN_SET_TARGET_POS(bLocal_1049, &Local_836);
				TRAIN_SET_TARGET_SPEED(bLocal_1049, 13.0f);
				TRAIN_SET_MAX_ACCEL(bLocal_1049, 2.0f);
				Function_219(&iLocal_638);
				iLocal_633 = 5;
				UI_ENABLE("LoadingSpinner");
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(0,5f, 1065353216);
			}
			Function_300(&uLocal_1062, 17, 0, 4294967295, 4294967295);
			AUDIO_SET_PLAYER_MOOD(1, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_219(&iLocal_638);
			iLocal_633 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_1067 = 0;
				Function_219(&iLocal_638);
				iLocal_633 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_586(&iLocal_638) <= 5.0f)
			{
				Function_342();
				Function_219(&iLocal_638);
				Function_219(&iLocal_641);
				Function_219(&iLocal_644);
				iLocal_633 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_VOLUME_VALID((*&Local_4 + 792)[0]))
			{
				if (IS_OBJECT_IN_VOLUME(TRAIN_GET_CAR(bLocal_1049, false), (*&Local_4 + 792)[0]) || uLocal_870)
				{
					HUD_FADE_OUT(0,5f, 1.0f, 0);
					Function_219(&iLocal_638);
					Function_219(&iLocal_641);
					Function_219(&iLocal_644);
					iLocal_633 = 106;
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 792)[5]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 792)[5]))
				{
					STREAMING_LOAD_SCENE_EXT(32,13f, 97,27f, 2756,32f, -0,836f, 0,172f, -0,521f, 1);
					TRAIN_SET_TARGET_SPEED(bLocal_1049, 11.0f);
					DESTROY_VOLUME((*&Local_4 + 792)[5]);
				}
			}
			if (iLocal_867)
			{
				Function_219(&iLocal_638);
				Function_219(&iLocal_641);
				Function_219(&iLocal_644);
				iLocal_633 = 106;
			}
			break;
		
		case 0x0000006A:
			if (iLocal_867)
			{
				iLocal_653[2] = 1;
				Function_219(&iLocal_638);
				iLocal_632 = 8;
				iLocal_633 = 0;
			}
			else if (Function_339(Global_34573, TRAIN_GET_CAR(bLocal_1049, false), 250.0f))
			{
				STREAMING_UNLOAD_SCENE();
				iLocal_653[2] = 1;
				Function_219(&iLocal_638);
				iLocal_632 = 101;
				iLocal_633 = 0;
			}
			else
			{
				Function_225("mexarmy02_bridge_destroyed");
				bLocal_665 = true;
			}
			break;
	}
	return;
}

bool Function_339(bool bParam0, bool bParam1, float fParam2) //Position: 0x11118 / 69912
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_341(bParam0);
			Function_340(bParam1);
			if (VDIST(Function_341(bParam0), Function_340(bParam1)) >= fParam2)
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

vector3 Function_340(bool bParam0) //Position: 0x11232 / 70194
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

vector3 Function_341(bool bParam0) //Position: 0x1129E / 70302
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

void Function_342() //Position: 0x11308 / 70408
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_NoFollowTrain", "MexArmy02_NoFollowTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_343(int iParam0) //Position: 0x1135F / 70495
{
	Function_344(0, Global_34573, iParam0, 0);
	Function_344(1, bLocal_636, iParam0, 0);
	return;
}

void Function_344(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x11379 / 70521
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_345(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1139E / 70558
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

void Function_346() //Position: 0x113FD / 70653
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	Function_76();
	vVar1 = { StackVal, StackVal, Function_76() };
	vVar4 = { 0.0f, 180.0f, 0.0f };
	vVar7 = { 0.0f, 90.0f, 0.0f };
	vVar10 = { 0.0f, -90.0f, 0.0f };
	Local_1007[bVar07] = (*&Local_4 + 728)[32];
	Local_1007[bVar07].f_8 = 2;
	Local_1007[bVar07].f_24 = (*&Local_414 + 52)[0];
	Local_1007[bVar07].f_4 = ATTACH_OBJECTS(Local_1007[bVar07], Local_1007[bVar07].f_24, Function_54(), vVar1, vVar4, 4294967295);
	TASK_CROUCH(Local_1007[bVar07], -1.0f);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	SET_ACTOR_ONE_SHOT_DEATH(Local_1007[bVar07], true);
	SET_ACTOR_UPDATE_PRIORITY(Local_1007[bVar07], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_1007[bVar07], false);
	if (IS_ACTOR_VALID(Local_1007[bVar07]))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	bVar0++;
	Local_1007[bVar07] = (*&Local_4 + 728)[12];
	Local_1007[bVar07].f_8 = 3;
	Local_1007[bVar07].f_24 = (*&Local_442 + 48)[1];
	Local_1007[bVar07].f_4 = ATTACH_OBJECTS(Local_1007[bVar07], Local_1007[bVar07].f_24, Function_54(), vVar1, vVar7, 4294967295);
	TASK_STAND_STILL(Local_1007[bVar07], -1.0f, 0, 0);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	SET_ACTOR_ONE_SHOT_DEATH(Local_1007[bVar07], true);
	SET_ACTOR_UPDATE_PRIORITY(Local_1007[bVar07], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_1007[bVar07], false);
	if (IS_ACTOR_VALID(Local_1007[bVar07]))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	bVar0++;
	Local_1007[bVar07] = (*&Local_4 + 728)[02];
	Local_1007[bVar07].f_8 = 3;
	Local_1007[bVar07].f_24 = (*&Local_442 + 48)[0];
	Local_1007[bVar07].f_4 = ATTACH_OBJECTS(Local_1007[bVar07], Local_1007[bVar07].f_24, Function_54(), vVar1, vVar10, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	TASK_STAND_STILL(Local_1007[bVar07], -1.0f, 0, 0);
	SET_ACTOR_ONE_SHOT_DEATH(Local_1007[bVar07], true);
	SET_ACTOR_UPDATE_PRIORITY(Local_1007[bVar07], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_1007[bVar07], false);
	if (IS_ACTOR_VALID(Local_1007[bVar07]))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	bVar0++;
	Local_1007[bVar07] = (*&Local_4 + 728)[42];
	Local_1007[bVar07].f_8 = 5;
	Local_1007[bVar07].f_24 = (*&Local_481 + 36)[0];
	Local_1007[bVar07].f_4 = ATTACH_OBJECTS(Local_1007[bVar07], Local_1007[bVar07].f_24, Function_54(), vVar1, vVar4, 4294967295);
	TASK_CROUCH(Local_1007[bVar07], -1.0f);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	SET_ACTOR_ONE_SHOT_DEATH(Local_1007[bVar07], true);
	SET_ACTOR_UPDATE_PRIORITY(Local_1007[bVar07], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_1007[bVar07], false);
	if (IS_ACTOR_VALID(Local_1007[bVar07]))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	bVar0++;
	Local_1007[bVar07] = (*&Local_4 + 728)[22];
	Local_1007[bVar07].f_8 = 6;
	Local_1007[bVar07].f_24 = Local_505.f_44;
	Local_1007[bVar07].f_4 = ATTACH_OBJECTS(Local_1007[bVar07], Local_1007[bVar07].f_24, Function_54(), vVar1, vVar4, 4294967295);
	TASK_STAND_STILL(Local_1007[bVar07], -1.0f, 0, 0);
	SET_ACTOR_ONE_SHOT_DEATH(Local_1007[bVar07], true);
	SET_ACTOR_UPDATE_PRIORITY(Local_1007[bVar07], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_1007[bVar07], false);
	if (IS_ACTOR_VALID(Local_1007[bVar07]))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(Local_1007[bVar07]));
		PRINTNL();
	}
	bVar0++;
	return;
}

void Function_347() //Position: 0x11832 / 71730
{
	Local_4.f_772 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "TrainRebelPassengers"));
	(*&Local_4 + 728)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainRebel04", 522, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 728)[02], Local_4.f_772);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[02], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[02], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 728)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 728)[02], 19);
	(*&Local_4 + 728)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainRebel010", 518, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 728)[12], Local_4.f_772);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[12], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[12], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 728)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 728)[12], 19);
	(*&Local_4 + 728)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainRebel014", 523, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 728)[22], Local_4.f_772);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 728)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[22], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[22], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 728)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 728)[22], 19);
	(*&Local_4 + 728)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainRebel017", 522, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 728)[32], Local_4.f_772);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[32], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[32], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 728)[32], 1);
	SET_ACTOR_FACTION((*&Local_4 + 728)[32], 19);
	(*&Local_4 + 728)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainRebel015", 519, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 728)[42], Local_4.f_772);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[42], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 728)[42], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 728)[42], 1);
	SET_ACTOR_FACTION((*&Local_4 + 728)[42], 19);
	return;
}

int Function_348() //Position: 0x11AB9 / 72377
{
	return 1;
}

int Function_349() //Position: 0x11AC0 / 72384
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
	return 1;
}

int Function_350() //Position: 0x11AD0 / 72400
{
	iLocal_879 = 1;
	return 1;
}

void Function_351(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x11ADB / 72411
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
	if (iParam3 != Global_34165.f_48 && !Function_356())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_355(0);
	Function_354();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_353(uParam4, iVar0, iVar1);
	Function_352();
}

void Function_352() //Position: 0x11B78 / 72568
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

void Function_353(int iParam0, bool bParam1, bool bParam2) //Position: 0x11BB9 / 72633
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
	if (Function_82(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_354() //Position: 0x11D1F / 72991
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_355(bool bParam0) //Position: 0x11D43 / 73027
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

bool Function_356() //Position: 0x11D72 / 73074
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_357(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x11D8D / 73101
{
	if (Function_358(&iParam0) == iParam7 || Function_356())
	{
		return 1;
	}
	return 0;
}

int Function_358(int iParam0) //Position: 0x11DAC / 73132
{
	if (Function_273(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_359() //Position: 0x11DC4 / 73156
{
	switch (iLocal_951)
	{
		case 0x00000006:
			iLocal_950 = 6;
			if (bLocal_1049 <= 0)
			{
				iLocal_951 = 7;
			}
			else
			{
				iLocal_951 = 8;
			}
			break;
		
		case 0x00000007:
			if (Function_314("rail__rrtrack_02x", (*&Local_4 + 1124)[1], (*&Local_4 + 1124)[1], (*&Local_4 + 1124)[3]))
			{
				iLocal_951 = 8;
			}
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION((*&Local_4 + 1124)[1], &Local_836);
			TRAIN_SET_TARGET_POS(bLocal_1049, &Local_836);
			TRAIN_SET_TARGET_SPEED(bLocal_1049, 0.0f);
			TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1049, 0);
			TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
			MEMORY_CLEAR_ALL(bLocal_636);
			iLocal_951 = 9;
			break;
		
		case 0x00000009:
			iLocal_951 = 10;
			break;
		
		case 0x0000000A:
			if (!iLocal_653[1])
			{
				GET_OBJECT_POSITION((*&Local_4 + 1040)[3], &vLocal_839);
				if (Function_283(StackVal, StackVal, vLocal_839))
				{
					if (!iLocal_653[1])
					{
						if (IS_ACTOR_VALID(bLocal_637))
						{
							Function_293(bLocal_637, (*&Local_4 + 1040)[3], 1, 1, 1);
						}
						TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
						if (IS_ACTOR_VALID(bLocal_636))
						{
							Function_293(bLocal_636, (*&Local_4 + 1040)[2], 1, 1, 1);
						}
						Function_282();
						if (IS_ACTOR_ALIVE((*&Local_4 + 656)[02]))
						{
							SET_ACTOR_RIDEABLE((*&Local_4 + 656)[02], 1);
						}
					}
					iLocal_951 = 104;
				}
			}
			else
			{
				iLocal_951 = 104;
			}
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

bool Function_360() //Position: 0x11F2D / 73517
{
	Function_361(&Local_4 + 352, 522, 2, 0);
	Function_361(&Local_4 + 352, 518, 2, 0);
	Function_361(&Local_4 + 352, 523, 2, 0);
	Function_361(&Local_4 + 352, 519, 2, 0);
	if (Function_320(&Local_4 + 352))
	{
		return 1;
	}
	return 0;
}

var Function_361(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11F79 / 73593
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_178(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_323(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_323(uParam0[iVar03], 8);
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

bool Function_362(bool bParam0) //Position: 0x12049 / 73801
{
	if (!Function_82(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_363() //Position: 0x12065 / 73829
{
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (!iLocal_653[1])
	{
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
		}
		Function_293(Global_34573, (*&Local_4 + 1040)[0], 1, 1, 1);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_365();
	if (!Function_362(Global_30707[2]))
	{
		Function_364(&Local_520);
	}
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	if (IS_ACTOR_VALID(bLocal_901))
	{
		bLocal_903 = GET_MOUNT(bLocal_901);
		RELEASE_ACTOR(bLocal_901);
		if (IS_ACTOR_VALID(bLocal_903))
		{
			RELEASE_ACTOR(bLocal_903);
		}
	}
	if (IS_ACTOR_VALID(bLocal_902))
	{
		bLocal_903 = GET_MOUNT(bLocal_902);
		RELEASE_ACTOR(bLocal_902);
		if (IS_ACTOR_VALID(bLocal_903))
		{
			RELEASE_ACTOR(bLocal_903);
		}
	}
	Function_336(bLocal_1052);
	Function_336(Local_4.f_464);
	Function_215((*&Local_4 + 904)[0]);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
	}
	return 1;
}

void Function_364(int iParam0) //Position: 0x12140 / 74048
{
	if (!Function_273(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_189(1, 0, 1);
		}
	}
	return;
}

void Function_365() //Position: 0x1215B / 74075
{
	Function_216(46);
	Function_162(83980);
	Function_366(9);
	return;
}

void Function_366(int iParam0) //Position: 0x12172 / 74098
{
	Function_367(&Global_28842, iParam0);
	return;
}

void Function_367(var uParam0, float fParam1) //Position: 0x12180 / 74112
{
	int iVar0;
	
	iVar0 = (*uParam0 && fParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_368(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x121A3 / 74147
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_371(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_372()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
				if (!Function_74(StackVal, StackVal, vVar16))
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
					Function_369();
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
	else if ((!Function_371(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_372()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_371(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_369() //Position: 0x123E9 / 74729
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
			Function_370(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_370(char* cParam0, vector3 vParam1) //Position: 0x1243D / 74813
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

bool Function_371(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x12565 / 75109
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_341(bParam0);
		if (VDIST(Function_341(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_372() //Position: 0x125EF / 75247
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_373() //Position: 0x125FE / 75262
{
	if (iLocal_632 == 1)
	{
		bLocal_1048 = false;
		while (bLocal_1048 <= SQUAD_GET_SIZE(Local_4.f_464))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_464, bLocal_1048)))
			{
				if (SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_464, bLocal_1048) != (*&Local_4 + 404)[62])
				{
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_464, bLocal_1048)))
					{
						TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_464, bLocal_1048), -1.0f, 0, 0);
						if (ACTORS_IN_RANGE(Global_34573, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_464, bLocal_1048), 20.0f))
						{
							FORCE_LOOK_AT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_464, bLocal_1048), Global_34573, 5.0f);
						}
					}
				}
			}
			bLocal_1048++;
		}
	}
	else if (iLocal_632 == 2)
	{
		bLocal_1048 = false;
		while (bLocal_1048 <= SQUAD_GET_SIZE(Local_4.f_772))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bLocal_1048)))
			{
				if (SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bLocal_1048) == (*&Local_4 + 728)[32] && SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bLocal_1048) == (*&Local_4 + 728)[42])
				{
					TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bLocal_1048), -1.0f, 0, 0);
					if (ACTORS_IN_RANGE(Global_34573, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bLocal_1048), 20.0f))
					{
						FORCE_LOOK_AT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bLocal_1048), Global_34573, 5.0f);
					}
				}
			}
			bLocal_1048++;
		}
	}
	return;
}

void Function_374(int iParam0) //Position: 0x1273C / 75580
{
	if (!Function_392(iParam0))
	{
		Function_220(iParam0, 0.0f);
	}
	return;
}

void Function_375() //Position: 0x12751 / 75601
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	
	if (!DECOR_CHECK_EXIST(bLocal_518, "m_tOnTrain"))
	{
		DECOR_SET_FLOAT(bLocal_518, "m_tOnTrain", GET_CURRENT_GAME_TIME());
	}
	if (!Function_392(&iLocal_933))
	{
		Function_374(&iLocal_933);
	}
	else if (Function_586(&iLocal_933) < 5.0f)
	{
		fVar0 = Function_388(Global_34573, (*&Local_4 + 792)[0]);
		fVar1 = Function_388(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)), (*&Local_4 + 792)[0]);
		fVar2 = (fVar0 - fVar1);
		if (fVar2 < 150.0f)
		{
			Function_381(&iLocal_644, 220.0f, 320.0f, TRAIN_GET_CAR(bLocal_1049, false), "MexArmy02_catch_up_train", "MexArmy02_train_abandoned", &bLocal_665, 0, 0, 0, 4294967295, 1);
		}
		Function_219(&iLocal_933);
	}
	if (IS_VOLUME_VALID((*&Local_4 + 792)[4]))
	{
		if (IS_OBJECT_IN_VOLUME(TRAIN_GET_CAR(bLocal_1049, false), (*&Local_4 + 792)[4]))
		{
			iLocal_857[2] = 1;
			DESTROY_VOLUME((*&Local_4 + 792)[4]);
		}
	}
	if (iLocal_857[2] && !HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_380("MexArmy02_near_bridge", 7,5f, 1, 2, 0, 0, 0);
		iLocal_857[2] = 0;
	}
	switch (iLocal_1067)
	{
		case 0x00000000:
			Function_313(6, 0, 1);
			Function_379(4294967295);
			Function_380("mexarmy02_obj02c", 7,5f, 1, 2, 0, 0, 0);
			iLocal_1067 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_637)))
				{
					Function_215(bLocal_637);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				iLocal_1067 = 2;
			}
			else if (IS_ACTOR_VALID(bLocal_637))
			{
				if (!IS_ACTOR_DEAD(bLocal_637))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_637)))
					{
						ADD_BLIP_FOR_OBJECT(bLocal_637, 334, 0f, 2, 0);
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_236();
			Function_378(Local_4.f_772, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			ADD_BLIP_FOR_OBJECT(bLocal_881, 325, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bLocal_881), "MexArmy02_train_health");
			Function_380("MexArmy02_obj03a", 7,5f, 1, 2, 0, 0, 0);
			bLocal_1059 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "srebelsofftrain"));
			iLocal_1067 = 3;
			break;
		
		case 0x00000003:
			if (!Function_392(&iLocal_915))
			{
				Function_374(&iLocal_915);
			}
			else if (Function_586(&iLocal_915) < 1.0f)
			{
				bVar4 = false;
				while (bVar4 <= SQUAD_GET_SIZE(Local_4.f_772))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_772, bVar4);
					if (bVar3 != (*&Local_4 + 728)[22])
					{
						if (IS_ACTOR_VALID(bVar3))
						{
							if (IS_ACTOR_ALIVE(bVar3))
							{
								if (!IS_ACTOR_ON_TRAIN(bVar3, 0))
								{
									SQUAD_LEAVE(bVar3);
									SQUAD_JOIN(bVar3, bLocal_1059);
									if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar3)))
									{
										REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar3));
										PRINTINT(bVar4);
										PRINTNL();
									}
								}
							}
						}
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= SQUAD_GET_SIZE(bLocal_1059))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1059, bVar4);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							if (IS_ACTOR_ON_TRAIN(bVar3, 0))
							{
								SQUAD_LEAVE(bVar3);
								SQUAD_JOIN(bVar3, Local_4.f_772);
								if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar3)))
								{
									ADD_BLIP_FOR_ACTOR(bVar3, 322, 0, 2, 0);
									PRINTINT(bVar4);
									PRINTNL();
								}
							}
						}
					}
					bVar4++;
				}
				Function_219(&iLocal_915);
			}
			if (!Function_377(Local_4.f_772, 0, 1, 1, 1, 0))
			{
				Function_76();
				ATTACH_OBJECTS(Local_4.f_1344, TRAIN_GET_CAR(bLocal_1049, false), Function_54(), *(&Local_4 + 1196[06]), Function_76(), 4294967295);
				Function_76();
				ATTACH_OBJECTS(Local_4.f_1348, TRAIN_GET_CAR(bLocal_1049, false), Function_54(), *(&Local_4 + 1196[16]), Function_76(), 4294967295);
				Function_380("MexArmy02_jump_on_steamer", 7,5f, 1, 2, 0, 0, 0);
				Function_300(&uLocal_1062, 17, 0, 4294967295, 4294967295);
				if (!Function_392(&iLocal_942))
				{
					Function_374(&iLocal_942);
				}
				else
				{
					Function_219(&iLocal_942);
				}
				DISABLE_WORLD_SECTOR("butterBridgeB");
				DISABLE_WORLD_SECTOR("butterBridgeA");
				ENABLE_WORLD_SECTOR("butterBridgeC");
				ENABLE_WORLD_SECTOR("butterBridgeD");
				ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				iLocal_1067 = 4;
			}
			else if (Function_376(Local_4.f_772))
			{
				Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000004:
			if (((IS_ACTOR_ON_TRAIN(Global_34573, 0) && IS_ACTOR_IN_VOLUME(Global_34573, Local_354.f_24)) || IS_ACTION_NODE_PLAYING(Global_34573, "/default_character_main/ride/dismount/coachjacking/dismount_jackleft")) || IS_ACTION_NODE_PLAYING(Global_34573, "/default_character_main/ride/dismount/coachjacking/dismount_jackright"))
			{
				Function_236();
				DECOR_SET_FLOAT(bLocal_518, "m_tOnTrain", GET_CURRENT_GAME_TIME());
				Function_219(&iLocal_942);
				iLocal_1067 = 6;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			if (Function_586(&iLocal_942) <= 1,2f)
			{
				iLocal_867 = 1;
				iLocal_1067 = 7;
			}
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

bool Function_376(bool bParam0) //Position: 0x12D25 / 77093
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

bool Function_377(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12D65 / 77157
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

void Function_378(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x12E19 / 77337
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

void Function_379(bool bParam0) //Position: 0x12F03 / 77571
{
	DECOR_SET_INT(Global_34573, "Player_SimWhistle", bParam0);
	DECOR_SET_INT(Global_34573, "WhistleTimeWaited", 100);
	return;
}

void Function_380(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x12F43 / 77635
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

int Function_381(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12F96 / 77718
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_339(Global_34573, bParam3, iParam2))
	{
		Function_225(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_339(Global_34573, bParam3, fParam1))
	{
		if (!Function_387(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_380(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_386(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_387(1))
	{
		Function_384(1);
		if (!Function_383())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_382() //Position: 0x13104 / 78084
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

bool Function_383() //Position: 0x1312F / 78127
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

void Function_384(bool bParam0) //Position: 0x13173 / 78195
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_37(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_385(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x131D6 / 78294
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

void Function_386(bool bParam0) //Position: 0x13277 / 78455
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_77(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_387(bool bParam0) //Position: 0x132DA / 78554
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

var Function_388(bool bParam0, int iParam1) //Position: 0x13321 / 78625
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_341(bParam0);
		vVar0 = { StackVal, StackVal, Function_341(bParam0) };
		Function_389(iParam1);
		vVar3 = { StackVal, StackVal, Function_389(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_389(bool bParam0) //Position: 0x1339E / 78750
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_390() //Position: 0x133AF / 78767
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_391(int iParam0, float fParam1) //Position: 0x13408 / 78856
{
	if (!Function_392(iParam0))
	{
		Function_220(iParam0, fParam1);
	}
	return;
}

bool Function_392(int iParam0) //Position: 0x1341E / 78878
{
	return Function_153(*iParam0, 1);
}

void Function_393() //Position: 0x1342B / 78891
{
	bool bVar0;
	int iVar1;
	
	if (iLocal_633 < 3 && iLocal_633 > 105)
	{
		Function_484();
		if (!iLocal_876)
		{
			if (IS_ACTOR_ALIVE(bLocal_901))
			{
				if (Function_339(bLocal_901, (*&Local_4 + 1324)[0], 25.0f))
				{
					GET_OBJECT_POSITION((*&Local_4 + 1324)[0], &vLocal_833);
					TASK_GO_TO_COORD_AND_STAY(bLocal_901, &vLocal_833, 4, vLocal_833.y);
					iLocal_876 = 1;
				}
			}
		}
		if (!Function_392(&iLocal_918))
		{
			Function_391(&iLocal_918, 13,1f);
		}
		else if (Function_586(&iLocal_918) < 13.0f)
		{
			bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
			if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_636, 1))
			{
				if (iLocal_632 != 1 && iLocal_1073 > 1)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_390();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_483();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_TargetsSantaTrain", "MexArmy02_TargetsSantaTrain", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_219(&iLocal_918);
			}
			else if ((IS_PLAYER_TARGETTING_ACTOR(false, bLocal_901, 1) || IS_PLAYER_TARGETTING_ACTOR(false, bLocal_902, 1)) || Function_482(0, Local_4.f_464, 1))
			{
				if (iLocal_632 != 1 && iLocal_1073 > 1)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_481();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_GunOnSantaMenChu", "MexArmy02_GunOnSantaMenChu", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_480();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_TargetsSantasMenTrain", "MexArmy02_TargetsSantasMenTrain", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_219(&iLocal_918);
			}
			else if (!IS_ACTOR_VALID(bVar0))
			{
				if (iLocal_632 != 1 && iLocal_1073 > 1)
				{
					if (IS_ACTOR_SHOOTING(Global_34573))
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_479();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_ShootsRandChup", "MexArmy02_ShootsRandChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
						}
						Function_219(&iLocal_918);
					}
				}
			}
		}
		if (iLocal_1068 >= 0)
		{
			Function_478();
			Function_477();
			Function_463();
			Function_457();
			Function_440();
			if (!Function_392(&iLocal_912))
			{
				Function_374(&iLocal_912);
			}
			else
			{
				if (iLocal_945 == 10)
				{
					if (Function_586(&iLocal_912) < 5.0f)
					{
						Function_436();
					}
				}
				else
				{
					Function_436();
				}
				if (Function_586(&iLocal_912) < 5.0f)
				{
					Function_373();
					Function_435();
					Function_433();
					Function_429();
					Function_428();
					Function_219(&iLocal_912);
				}
			}
			if (Function_339(Global_34573, (*&Local_4 + 792)[3], 200.0f))
			{
				Function_232((*&Local_4 + 792)[3]);
				Function_368(StackVal, StackVal, "$/cutscene/MEXARMY02_CS02_a/MEXARMY02_CS02_a", &uLocal_1061, Function_232((*&Local_4 + 792)[3]), 0, 200.0f, 400.0f, 2, 1, 1, 2, 0, 1);
			}
		}
	}
	switch (iLocal_633)
	{
		case 0x00000000:
			if (Function_427())
			{
				Function_219(&iLocal_638);
				Function_300(&uLocal_1062, 10, 0, 4294967295, 4294967295);
				if (iLocal_653[0] == 0)
				{
					iLocal_633 = 1;
				}
				else
				{
					iLocal_633 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_362(Global_30693[0]) || iLocal_634 != 4294967295))
			{
				if (Function_426())
				{
					Function_219(&iLocal_638);
					iLocal_633 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_396())
			{
				GET_ACTOR_VELOCITY(bLocal_900, &vLocal_833);
				if (VMAG(vLocal_833) >= 0,5f)
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					Function_231(iLocal_632);
					Function_351(StackVal, StackVal, Function_231(iLocal_632), iLocal_632, Global_30633[2], Function_234(iLocal_632), 2);
					iLocal_946 = 6;
					iLocal_947 = 6;
					iLocal_948 = 6;
					iLocal_1072 = 0;
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(Global_34573);
					Function_219(&iLocal_638);
					iLocal_633 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				GET_ACTOR_VELOCITY(bLocal_900, &vLocal_833);
				if (VMAG(vLocal_833) >= 0,5f)
				{
					iLocal_1072 = 0;
					iLocal_1068 = 0;
					iLocal_1070 = 0;
					iLocal_1073 = 0;
					TASK_STAND_STILL(bLocal_900, -1.0f, 0, 0);
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_900);
					Function_219(&iLocal_638);
					iLocal_633 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (bLocal_873)
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					Function_219(&iLocal_638);
					Function_219(&iLocal_641);
					Function_219(&iLocal_644);
					iLocal_633 = 105;
				}
			}
			break;
		
		case 0x00000069:
			Function_219(&iLocal_638);
			iLocal_633 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_395(&(Local_707[217]));
				Function_395(&(Local_707[317]));
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (IS_ACTOR_VALID(Local_957[iVar17]))
					{
						DESTROY_ACTOR(Local_957[iVar17]);
					}
					iVar1++;
				}
				if (SQUAD_IS_VALID(bLocal_1055))
				{
					Function_394(&bLocal_1055);
				}
				if (SQUAD_IS_VALID(bLocal_1056))
				{
					Function_394(&bLocal_1056);
				}
				if (SQUAD_IS_VALID(bLocal_1054))
				{
					Function_394(&bLocal_1054);
				}
				if (SQUAD_IS_VALID(bLocal_1053))
				{
					Function_394(&bLocal_1053);
				}
				if (SQUAD_IS_VALID(bLocal_1052))
				{
					Function_394(&bLocal_1052);
				}
				Function_182();
				Function_181();
				Function_360();
				iLocal_653[1] = 1;
				Function_219(&iLocal_638);
				iLocal_632 = 2;
				iLocal_633 = 0;
			}
			break;
	}
	return;
}

void Function_394(bool bParam0) //Position: 0x13A08 / 80392
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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

void Function_395(int iParam0) //Position: 0x13A87 / 80519
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

bool Function_396() //Position: 0x13B3B / 80699
{
	switch (iLocal_1066)
	{
		case 0x00000000:
			if (Function_397())
			{
				iLocal_1066 = 1;
			}
			break;
		
		case 0x00000001:
			if (iLocal_653[0] == 0)
			{
				Function_293(bLocal_636, (*&Local_4 + 992)[2], 1, 1, 1);
				TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 656)[02], (*&Local_4 + 992)[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(bLocal_637, (*&Local_4 + 992)[0], 0.0f, 0.0f, 5.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				Function_293(bLocal_901, (*&Local_4 + 1324)[0], 1, 1, 1);
				Function_293((*&Local_4 + 656)[12], (*&Local_4 + 1324)[0], 1, 1, 1);
				TELEPORT_OBJECT_TO_OBJECT(bLocal_902, (*&Local_4 + 992)[9], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 656)[22], (*&Local_4 + 992)[9], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				TELEPORT_ACTOR(bLocal_637, &Global_34574, 1, 1, 1);
				if (!TELEPORT_OBJECT_TO_OBJECT(bLocal_900, (*&Local_4 + 992)[6], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216))
				{
					LOG_ERROR("m_TaxiWagon DID NOT TELEPORT");
				}
			}
			iLocal_1066 = 2;
			break;
		
		case 0x00000002:
			if (iLocal_653[0] == 0)
			{
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_901))
				{
					ACTOR_MOUNT_ACTOR(bLocal_901, (*&Local_4 + 656)[12]);
				}
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_902))
				{
					ACTOR_MOUNT_ACTOR(bLocal_902, (*&Local_4 + 656)[22]);
				}
				TASK_STAND_STILL(bLocal_901, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_902, -1.0f, 0, 0);
				MEMORY_PREFER_RIDING(bLocal_901, true);
				MEMORY_PREFER_RIDING(bLocal_902, true);
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_636))
				{
					ACTOR_MOUNT_ACTOR(bLocal_636, (*&Local_4 + 656)[02]);
				}
				MEMORY_PREFER_RIDING(bLocal_636, true);
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_637);
				}
				TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
				TASK_STAND_STILL((*&Local_4 + 656)[02], -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_900, -1.0f, 0, 0);
			}
			iLocal_1066 = 3;
			break;
		
		case 0x00000003:
			iLocal_1066 = 4;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000005:
			break;
	}
	return 0;
}

bool Function_397() //Position: 0x13D52 / 81234
{
	switch (iLocal_949)
	{
		case 0x00000006:
			iLocal_950 = 6;
			if (bLocal_1049 <= 0)
			{
				iLocal_949 = 15;
			}
			else
			{
				iLocal_949 = 16;
			}
			break;
		
		case 0x0000000F:
			if (Function_314("rail__rrtrack_02x", (*&Local_4 + 1124)[0], (*&Local_4 + 1124)[0], (*&Local_4 + 1124)[1]))
			{
				bLocal_1043 = CREATE_EVENT_TRAP("m_eHitBoiler", 5, bLocal_518);
				EVENT_TRAP_ON_VOLUME(bLocal_1043, Local_354.f_20);
				EVENT_TRAP_STORE_EVENTS(bLocal_1043, 1);
				GET_OBJECT_POSITION((*&Local_4 + 1124)[1], &Local_836);
				TRAIN_SET_TARGET_POS(bLocal_1049, &Local_836);
				TRAIN_SET_TARGET_SPEED(bLocal_1049, 0.0f);
				TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1049, 0);
				iLocal_949 = 16;
			}
			break;
		
		case 0x00000010:
			iLocal_949 = 7;
			break;
		
		case 0x00000007:
			Function_425();
			Function_424(Local_4.f_464, 25.0f);
			Function_423(Local_4.f_464, 15, 1);
			Function_418(&(Local_707[217]), Local_4.f_464, "MexicanSoldier", 0, 0x5f5e100, 1);
			Function_414(&(Local_707[217]), 2);
			iLocal_949 = 8;
			break;
		
		case 0x00000008:
			Function_412();
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_464, 2);
			iLocal_949 = 9;
			break;
		
		case 0x00000009:
			Function_411();
			Function_410();
			iLocal_949 = 10;
			break;
		
		case 0x0000000A:
			Function_407();
			Function_406(Local_4.f_628, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
			Function_424(Local_4.f_628, 35.0f);
			Function_423(Local_4.f_628, 16, 1);
			iLocal_949 = 11;
			break;
		
		case 0x0000000B:
			if (!IS_ACTOR_VALID((*&Local_4 + 712)[02]))
			{
				Function_401();
			}
			bLocal_900 = (*&Local_4 + 712)[02];
			Function_418(&(Local_707[117]), bLocal_900, "wagon", 1, 0x5f5e100, 1);
			ENABLE_VEHICLE_SEAT(bLocal_900, false, 0);
			Function_400(bLocal_900);
			iLocal_949 = 12;
			break;
		
		case 0x0000000C:
			if (!SQUAD_IS_VALID(Local_4.f_692))
			{
				Function_399();
			}
			SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 656)[02], 0);
			SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 656)[12], 0);
			SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 656)[22], 0);
			if (!SQUAD_IS_VALID(Local_4.f_488))
			{
				Function_398();
			}
			bLocal_901 = (*&Local_4 + 468)[02];
			bLocal_902 = (*&Local_4 + 468)[12];
			SQUAD_JOIN(bLocal_901, bLocal_1057);
			SQUAD_JOIN(bLocal_902, bLocal_1057);
			Function_418(&(Local_707[317]), bLocal_1057, "MexicanSoldier", 0, 0x5f5e100, 1);
			Function_414(&(Local_707[317]), 2);
			iLocal_949 = 13;
			break;
		
		case 0x0000000D:
			iLocal_949 = 104;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_398() //Position: 0x13FF9 / 81913
{
	Local_4.f_488 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexHenchmanSquad"));
	(*&Local_4 + 468)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Soldier01aRider01", 380, -4368,016f, 39,0074f, 4351,824f, 0.0f, 120,5122f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 468)[02], Local_4.f_488);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 468)[02], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 468)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 468)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 468)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 468)[02], 20);
	SET_ACTOR_HEALTH((*&Local_4 + 468)[02], 25.0f);
	(*&Local_4 + 468)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Soldier01aRider02", 381, -4372,016f, 38,88618f, 4351,824f, 179,5684f, 75,94582f, 179,7452f);
	SQUAD_JOIN((*&Local_4 + 468)[12], Local_4.f_488);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 468)[12], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 468)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 468)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 468)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 468)[12], 20);
	SET_ACTOR_HEALTH((*&Local_4 + 468)[12], 25.0f);
	return;
}

void Function_399() //Position: 0x1416B / 82283
{
	Local_4.f_692 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horses"));
	(*&Local_4 + 656)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "m_aCompanionHorse", 976, -2780f, 32,12549f, 4268f, 0.0f, -8,242899f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 656)[02], Local_4.f_692);
	TASK_STAND_STILL((*&Local_4 + 656)[02], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 656)[02], 3);
	(*&Local_4 + 656)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Soldier01_Mount", 977, -4383,119f, 38,52884f, 4369,14f, 0.0f, 118,6768f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 656)[12], Local_4.f_692);
	TASK_STAND_STILL((*&Local_4 + 656)[12], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 656)[12], 3);
	(*&Local_4 + 656)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Soldier02_Mount", 980, -4387,386f, 38,70368f, 4365,949f, 0.0f, 148,8994f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 656)[22], Local_4.f_692);
	TASK_STAND_STILL((*&Local_4 + 656)[22], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 656)[22], 3);
	(*&Local_4 + 656)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "m_aspareplayerhorse", 976, -2764f, 32,12549f, 4264f, 0.0f, -8,242899f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 656)[32], Local_4.f_692);
	TASK_STAND_STILL((*&Local_4 + 656)[32], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*&Local_4 + 656)[32], 3);
	return;
}

void Function_400(bool bParam0) //Position: 0x14319 / 82713
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

void Function_401() //Position: 0x1438B / 82827
{
	Local_4.f_724 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Wagonset", 0);
	(*&Local_4 + 712)[02] = Function_402(Local_4, "Player_Wagon", 1196, 976, -4395,177f, 37,86773f, 4364,185f, 0.0f, 167,3869f, 0.0f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_4.f_724, (*&Local_4 + 712)[02]);
	return;
}

var Function_402(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x143FB / 82939
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
			if (Function_405(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_404(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_403(bVar16, &iVar1))
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

bool Function_403(int iParam0, int iParam1) //Position: 0x1462F / 83503
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

var Function_404(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x14661 / 83553
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_405(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x14679 / 83577
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

void Function_406(bool bParam0, bool bParam1, vector3 vParam2) //Position: 0x146A0 / 83616
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, false);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_SHOOT_TARGET_SET_OFFSET(bVar1, bParam1, vParam2);
		}
		iVar0++;
	}
}

void Function_407() //Position: 0x146F6 / 83702
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_628 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry01"));
	bVar0 = Function_408(Local_4, "Enemy02aRider02", 521, Function_54(), 977, -2216f, 13,17877f, 4433,738f, 0.0f, 0,2856277f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02aRider04", 518, Function_54(), 976, -2204f, 13,051f, 4444.0f, 0.0f, 15,94403f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

bool Function_408(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x147F8 / 83960
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_409(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_409(bParam4))
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

bool Function_409(int iParam0) //Position: 0x1491D / 84253
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_410() //Position: 0x14934 / 84276
{
	Local_4.f_520 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyInfantry01"));
	(*&Local_4 + 492)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02aGrunt02", 522, -2201,936f, 5,827535f, 4322,231f, 0.0f, 115,8932f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 492)[02], Local_4.f_520);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 492)[02], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 492)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 492)[02], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 492)[02], 11.0f);
	(*&Local_4 + 492)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02aSniper01", 516, -2204,259f, 5,756438f, 4324,621f, 0.0f, 161,9111f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 492)[12], Local_4.f_520);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 492)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 492)[12], 23, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 492)[12], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 492)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 492)[12], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 492)[12], 11.0f);
	(*&Local_4 + 492)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02aGrunt03", 529, -2203,789f, 5,769855f, 4316,77f, 0.0f, 115,8932f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 492)[22], Local_4.f_520);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 492)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 492)[22], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 492)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 492)[22], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 492)[22], 11.0f);
	return;
}

void Function_411() //Position: 0x14B13 / 84755
{
	Local_4.f_788 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "AMBUSHCOVERset", 0);
	(*&Local_4 + 776)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WagonAmbush01", 1196, -2205,332f, 5,758476f, 4325,729f, 0.0f, 24,45701f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_788, (*&Local_4 + 776)[02]);
	TASK_STAND_STILL((*&Local_4 + 776)[02], -1.0f, 0, 0);
	return;
}

void Function_412() //Position: 0x14B8A / 84874
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	
	Function_76();
	vVar0 = { StackVal, StackVal, Function_76() };
	iVar3 = 0;
	vVar4 = { 0.0f, 180.0f, 0.0f };
	Local_957[iVar37] = (*&Local_4 + 404)[62];
	Local_957[iVar37].f_4 = ATTACH_OBJECTS((*&Local_4 + 404)[62], Local_354.f_236, Function_54(), vVar0, vVar0, 4294967295);
	Local_957[iVar37].f_8 = 0;
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 404)[62], true);
	iVar3++;
	Local_957[iVar37] = (*&Local_4 + 404)[12];
	Local_957[iVar37].f_8 = 2;
	Local_957[iVar37].f_24 = (*&Local_442 + 48)[1];
	Local_957[iVar37].f_4 = ATTACH_OBJECTS(Local_957[iVar37], Local_957[iVar37].f_24, Function_54(), vVar0, vVar4, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	iVar3++;
	Local_957[iVar37] = (*&Local_4 + 404)[02];
	Local_957[iVar37].f_8 = 3;
	Local_957[iVar37].f_24 = (*&Local_442 + 48)[0];
	Local_957[iVar37].f_4 = ATTACH_OBJECTS(Local_957[iVar37], Local_957[iVar37].f_24, Function_54(), vVar0, vVar4, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	TASK_STAND_STILL(Local_957[iVar37], -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	iVar3++;
	Local_957[iVar37] = (*&Local_4 + 404)[22];
	Local_957[iVar37].f_8 = 3;
	Local_957[iVar37].f_24 = Local_414.f_80;
	Local_957[iVar37].f_4 = ATTACH_OBJECTS(Local_957[iVar37], Local_957[iVar37].f_24, Function_54(), vVar0, vVar4, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	TASK_STAND_STILL(Local_957[iVar37], -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	iVar3++;
	Local_957[iVar37] = (*&Local_4 + 404)[32];
	Local_957[iVar37].f_8 = 4;
	Local_957[iVar37].f_24 = Local_462.f_40;
	Local_957[iVar37].f_4 = ATTACH_OBJECTS(Local_957[iVar37], Local_957[iVar37].f_24, Function_54(), vVar0, vVar4, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	TASK_STAND_STILL(Local_957[iVar37], -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	iVar3++;
	Local_957[iVar37] = (*&Local_4 + 404)[42];
	Local_957[iVar37].f_8 = 5;
	Local_957[iVar37].f_24 = Local_481.f_48;
	Local_957[iVar37].f_4 = ATTACH_OBJECTS(Local_957[iVar37], Local_957[iVar37].f_24, Function_54(), vVar0, vVar4, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	TASK_STAND_STILL(Local_957[iVar37], -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	iVar3++;
	Local_957[iVar37] = (*&Local_4 + 404)[52];
	Local_957[iVar37].f_8 = 5;
	Local_957[iVar37].f_24 = Local_481.f_56;
	Local_957[iVar37].f_4 = ATTACH_OBJECTS(Local_957[iVar37], Local_957[iVar37].f_24, Function_54(), vVar0, vVar4, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(StackVal);
	TASK_STAND_STILL(Local_957[iVar37], -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(Local_957[iVar37], false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(Local_957[iVar37], false);
	iVar3++;
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_464, 1);
	Function_413(Local_4.f_464);
	if (IS_ACTOR_VALID((*&Local_4 + 404)[62]))
	{
		REMOVE_OBJECT_ATTACHMENT(StackVal);
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_354.f_236)))
		{
			SNAP_ACTOR_TO_GRINGO((*&Local_4 + 404)[62], Local_354.f_236, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO((*&Local_4 + 404)[62], GET_GRINGO_FROM_OBJECT(Local_354.f_236), "UseCase1", 4294967295, 1);
			TASK_PRIORITY_SET((*&Local_4 + 404)[62], true);
		}
	}
	return;
}

void Function_413(bool bParam0) //Position: 0x14FA3 / 85923
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

void Function_414(int iParam0, int iParam1) //Position: 0x14FD5 / 85973
{
	if (iParam1 != 100000000)
	{
		Function_417(iParam0, iParam1);
	}
	else
	{
		Function_415(iParam0, 1);
	}
	return;
}

void Function_415(int iParam0, bool bParam1) //Position: 0x14FF5 / 86005
{
	iParam0->f_40 = 0;
	Function_416(iParam0, 2, bParam1);
	Function_416(iParam0, 4, bParam1);
	Function_416(iParam0, 8, bParam1);
	Function_416(iParam0, 16, bParam1);
	Function_416(iParam0, 32, bParam1);
	Function_416(iParam0, 64, bParam1);
	Function_416(iParam0, 128, bParam1);
	Function_416(iParam0, 256, bParam1);
	Function_416(iParam0, 512, bParam1);
	Function_416(iParam0, 1024, bParam1);
	return;
}

void Function_416(int iParam0, int iParam1, bool bParam2) //Position: 0x1505B / 86107
{
	bool bVar0;
	
	Function_77(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_37(iParam0 + 40, bVar0);
	}
	else
	{
		Function_77(iParam0 + 40, bVar0);
	}
	return;
}

void Function_417(int iParam0, bool bParam1) //Position: 0x15097 / 86167
{
	bool bVar0;
	
	Function_37(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_37(iParam0 + 40, bVar0);
	return;
}

int Function_418(float fParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x150C2 / 86210
{
	if (!Function_422(fParam0, uParam1))
	{
		return 0;
	}
	if (!Function_421(fParam0, bParam2))
	{
		return 0;
	}
	Function_420(fParam0, iParam3);
	fParam0->f_40 = 0;
	Function_419(fParam0, iParam4, iParam5);
	return 1;
}

void Function_419(char* cParam0, int iParam1, int iParam2) //Position: 0x150FE / 86270
{
	if (iParam1 != 100000000)
	{
		Function_416(cParam0, iParam1, iParam2);
	}
	else
	{
		Function_415(cParam0, iParam2);
	}
	return;
}

void Function_420(char* cParam0, int iParam1) //Position: 0x15121 / 86305
{
	cParam0->f_36 = iParam1;
	return;
}

bool Function_421(int iParam0, bool bParam1) //Position: 0x1512D / 86317
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

bool Function_422(var uParam0, bool bParam1) //Position: 0x151B6 / 86454
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

void Function_423(bool bParam0, int iParam1, bool bParam2) //Position: 0x15342 / 86850
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

void Function_424(bool bParam0, bool bParam1) //Position: 0x1538C / 86924
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

void Function_425() //Position: 0x153D4 / 86996
{
	Local_4.f_464 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "TrainArmyPassengers"));
	(*&Local_4 + 404)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainSoldier07", 392, -4,949314f, 0.0f, 3,907166f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[02], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[02], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[02], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[02], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[02], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[02], false);
	(*&Local_4 + 404)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainSoldier05", 381, -4,949314f, 0.0f, 3,907166f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[12], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[12], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[12], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[12], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[12], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[12], false);
	(*&Local_4 + 404)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainSoldier08", 380, -4,949314f, 0.0f, 2,87816f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[22], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[22], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[22], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[22], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[22], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[22], false);
	(*&Local_4 + 404)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainSoldier011", 379, -4,949314f, 0.0f, -0,04726852f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[32], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[32], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[32], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[32], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[32], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[32], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[32], false);
	(*&Local_4 + 404)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainSoldier013", 391, -4,949314f, 0.0f, -1,9909f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[42], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[42], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[42], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[42], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[42], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[42], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[42], false);
	(*&Local_4 + 404)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "trainSoldier014", 382, -4,949314f, 0.0f, -3,083076f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[52], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[52], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[52], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[52], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[52], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[52], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[52], false);
	(*&Local_4 + 404)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Engineer", 379, -4,949314f, 0.0f, -7,016419f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[62], Local_4.f_464);
	ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 404)[62], true);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 404)[62], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 404)[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 404)[62], 1);
	SET_ACTOR_FACTION((*&Local_4 + 404)[62], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 404)[62], 0);
	TASK_PRIORITY_SET((*&Local_4 + 404)[62], false);
	return;
}

bool Function_426() //Position: 0x1584C / 88140
{
	Function_361(&Local_4 + 144, 392, 2, 0);
	Function_361(&Local_4 + 144, 381, 2, 0);
	Function_361(&Local_4 + 144, 380, 2, 0);
	Function_361(&Local_4 + 144, 379, 2, 0);
	Function_361(&Local_4 + 144, 391, 2, 0);
	Function_361(&Local_4 + 144, 382, 2, 0);
	Function_361(&Local_4 + 144, 522, 2, 0);
	Function_361(&Local_4 + 144, 516, 2, 0);
	Function_361(&Local_4 + 144, 529, 2, 0);
	Function_361(&Local_4 + 144, 518, 2, 0);
	Function_361(&Local_4 + 144, 530, 2, 0);
	Function_361(&Local_4 + 144, 521, 2, 0);
	Function_361(&Local_4 + 144, 523, 2, 0);
	Function_361(&Local_4 + 144, 977, 2, 0);
	Function_361(&Local_4 + 144, 976, 2, 0);
	Function_361(&Local_4 + 144, 980, 2, 0);
	Function_361(&Local_4 + 144, 1196, 2, 0);
	if (Function_320(&Local_4 + 144))
	{
		return 1;
	}
	return 0;
}

bool Function_427() //Position: 0x1593C / 88380
{
	if (iLocal_653[0] == 0)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
		}
		if (!Function_362(Global_30693[0]))
		{
			Function_364(&Local_520);
		}
		TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 992)[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
		Function_215((*&Local_4 + 904)[0]);
	}
	Function_305(0);
	Function_210(bLocal_518);
	Function_210(Local_4);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
	}
	SET_ACTOR_HEALTH(bLocal_636, GET_ACTOR_MAX_HEALTH(bLocal_636));
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_365();
	Function_197(1);
	return 1;
}

void Function_428() //Position: 0x159E3 / 88547
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	
	if (bLocal_848)
	{
		if (SQUAD_IS_VALID(bLocal_1052))
		{
			bLocal_1048 = false;
			while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1052))
			{
				bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048);
				if (IS_ACTOR_VALID(bLocal_903))
				{
					Function_76();
					vVar0 = { StackVal, StackVal, Function_76() };
					Function_76();
					vVar3 = { StackVal, StackVal, Function_76() };
					fVar6 = 0.0f;
					fVar7 = 0.0f;
					fVar8 = 0.0f;
					GET_OBJECT_POSITION(bLocal_903, &vVar0);
					GET_OBJECT_POSITION(bLocal_886, &vVar3);
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1388, &vVar0, &vVar3, &fVar6, &fVar7, &fVar8);
					if (fVar6 > (fVar7 - 60.0f))
					{
						bLocal_1048 = GET_ACTOR_ENUM(bLocal_903);
						TASK_CLEAR(bLocal_903);
						MEMORY_CLEAR_ALL(bLocal_903);
						Function_212(bLocal_903);
						SQUAD_LEAVE(bLocal_903);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_903)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_903));
						}
						RELEASE_ACTOR(bLocal_903);
						return;
					}
				}
				bLocal_1048++;
			}
		}
	}
	if (IS_ITERATOR_VALID(bLocal_635))
	{
		ITERATE_ON_OBJECT_TYPE(bLocal_635, 15);
		ITERATE_IN_LAYOUT(bLocal_635, Local_4);
		bLocal_889 = START_OBJECT_ITERATOR(bLocal_635);
		while (IS_OBJECT_VALID(bLocal_889))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bLocal_889)))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bLocal_889)) == 19)
				{
					Function_76();
					vVar9 = { StackVal, StackVal, Function_76() };
					Function_76();
					vVar12 = { StackVal, StackVal, Function_76() };
					fVar15 = 0.0f;
					fVar16 = 0.0f;
					fVar17 = 0.0f;
					GET_OBJECT_POSITION(bLocal_889, &vVar9);
					GET_OBJECT_POSITION(bLocal_886, &vVar12);
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1388, &vVar9, &vVar12, &fVar15, &fVar16, &fVar17);
					if (fVar15 > (fVar16 - 100.0f))
					{
						if (IS_ACTOR_RIDING_AND_IN_SADDLE(GET_ACTOR_FROM_OBJECT(bLocal_889)))
						{
							bLocal_903 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bLocal_889));
							ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bLocal_889));
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(bLocal_889))))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(bLocal_889)));
							}
							RELEASE_ACTOR(bLocal_903);
						}
						RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(bLocal_889));
						return;
					}
				}
			}
			bLocal_889 = OBJECT_ITERATOR_NEXT(bLocal_635);
		}
	}
	return;
}

void Function_429() //Position: 0x15B94 / 88980
{
	switch (iLocal_948)
	{
		case 0x00000006:
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1055, true, 0, 1);
			Local_836 = { -20.0f, 0.0f, -2,5f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1055, 2, 0, 1);
			Local_836 = { -20.0f, 0.0f, 2,5f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1055, 3, 0, 1);
			Local_836 = { -20.0f, 0.0f, 7,5f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1055, 4, 0, 1);
			Local_836 = { -20.0f, 0.0f, 15.0f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1055, 5, 0, 1);
			Local_836 = { -20.0f, 0.0f, 25.0f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1056, true, 0, 1);
			Local_836 = { 20.0f, 0.0f, -2,5f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1056, 2, 0, 1);
			Local_836 = { 20.0f, 0.0f, 2,5f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1056, 3, 0, 1);
			Local_836 = { 20.0f, 0.0f, 7,5f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1056, 4, 0, 1);
			Local_836 = { 20.0f, 0.0f, 15.0f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1056, 5, 0, 1);
			Local_836 = { 20.0f, 0.0f, 25.0f };
			TASK_FOLLOW_OBJECT(false, GET_ACTOR_FROM_OBJECT(bLocal_881), &Local_836, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_1054, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, true, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1380, -2,5f, 1, false);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, 2, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1380, 2,5f, 1, false);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, 3, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1380, 7,5f, 1, false);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, 4, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1380, 15.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, 5, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1380, 25.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, 6, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1380, 35.0f, 1, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_1053, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, true, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1376, -2,5f, 1, false);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, 2, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1376, 2,5f, 1, false);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, 3, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1376, 7,5f, 1, false);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, 4, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1376, 15.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, 5, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1376, 25.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, 6, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, GET_ACTOR_FROM_OBJECT(bLocal_881), Local_4.f_1376, 35.0f, 1, 0);
			iLocal_948 = 15;
			break;
		
		case 0x0000000F:
			if (SQUAD_IS_VALID(bLocal_1055))
			{
				bLocal_1048 = false;
				while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1055))
				{
					bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1055, bLocal_1048);
					if (IS_ACTOR_VALID(bLocal_903))
					{
						if (IS_ACTOR_ALIVE(bLocal_903))
						{
							if (ACTORS_IN_RANGE(bLocal_903, Global_34573, 20.0f) || GET_LAST_ATTACKER(bLocal_903) != Global_34573)
							{
								TASK_CLEAR(bLocal_903);
								TASK_KILL_CHAR(bLocal_903, Global_34573);
								TASK_PRIORITY_SET(bLocal_903, true);
								CLEAR_LAST_HIT(bLocal_903);
							}
							else if (Function_339(bLocal_903, bLocal_881, 50.0f))
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1054);
							}
							else
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1055);
							}
						}
					}
					bLocal_1048++;
				}
			}
			if (SQUAD_IS_VALID(bLocal_1056))
			{
				bLocal_1048 = false;
				while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1056))
				{
					bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1056, bLocal_1048);
					if (IS_ACTOR_VALID(bLocal_903))
					{
						if (IS_ACTOR_ALIVE(bLocal_903))
						{
							if (ACTORS_IN_RANGE(bLocal_903, Global_34573, 20.0f) || GET_LAST_ATTACKER(bLocal_903) != Global_34573)
							{
								TASK_CLEAR(bLocal_903);
								TASK_KILL_CHAR(bLocal_903, Global_34573);
								TASK_PRIORITY_SET(bLocal_903, true);
								CLEAR_LAST_HIT(bLocal_903);
							}
							else if (Function_339(bLocal_903, bLocal_881, 50.0f))
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1053);
							}
							else
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1056);
							}
						}
					}
					bLocal_1048++;
				}
			}
			if (SQUAD_IS_VALID(bLocal_1054))
			{
				bLocal_1048 = false;
				while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1054))
				{
					bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1054, bLocal_1048);
					if (IS_ACTOR_VALID(bLocal_903))
					{
						if (IS_ACTOR_ALIVE(bLocal_903))
						{
							if (ACTORS_IN_RANGE(bLocal_903, Global_34573, 20.0f) || GET_LAST_ATTACKER(bLocal_903) != Global_34573)
							{
								TASK_CLEAR(bLocal_903);
								TASK_KILL_CHAR(bLocal_903, Global_34573);
								TASK_PRIORITY_SET(bLocal_903, true);
								CLEAR_LAST_HIT(bLocal_903);
							}
							else if (Function_339(bLocal_903, bLocal_881, 50.0f))
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1054);
							}
							else
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1055);
							}
						}
					}
					bLocal_1048++;
				}
			}
			if (SQUAD_IS_VALID(bLocal_1053))
			{
				bLocal_1048 = false;
				while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1053))
				{
					bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1053, bLocal_1048);
					if (IS_ACTOR_VALID(bLocal_903))
					{
						if (IS_ACTOR_ALIVE(bLocal_903))
						{
							if (ACTORS_IN_RANGE(bLocal_903, Global_34573, 20.0f) || GET_LAST_ATTACKER(bLocal_903) != Global_34573)
							{
								TASK_CLEAR(bLocal_903);
								TASK_KILL_CHAR(bLocal_903, Global_34573);
								TASK_PRIORITY_SET(bLocal_903, true);
								CLEAR_LAST_HIT(bLocal_903);
							}
							else if (Function_339(bLocal_903, bLocal_881, 50.0f))
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1053);
							}
							else
							{
								TASK_CLEAR(bLocal_903);
								SQUAD_LEAVE(bLocal_903);
								SQUAD_JOIN(bLocal_903, bLocal_1056);
							}
						}
					}
					bLocal_1048++;
				}
			}
			break;
		
		case 0x00000007:
			SQUAD_GOALS_CLEAR(bLocal_1054);
			Function_413(bLocal_1054);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			SQUAD_GOALS_CLEAR(bLocal_1053);
			Function_413(bLocal_1053);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1053, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			SQUAD_GOALS_CLEAR(bLocal_1055);
			Function_413(bLocal_1055);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1055, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			SQUAD_GOALS_CLEAR(bLocal_1056);
			Function_413(bLocal_1056);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1056, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			iLocal_948 = 104;
			break;
		
		case 0x00000068:
			Function_430(bLocal_1054, 100.0f);
			Function_430(bLocal_1053, 100.0f);
			Function_430(bLocal_1055, 100.0f);
			Function_430(bLocal_1056, 100.0f);
			break;
	}
	return;
}

void Function_430(bool bParam0, bool bParam1) //Position: 0x162D8 / 90840
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (SQUAD_GET_SIZE(bParam0) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (!Function_432(bVar1, Global_34573, bParam1) && !IS_ACTOR_ON_TRAIN(bVar1, 0))
						{
							GET_OBJECT_POSITION(bVar1, &uVar2);
							if (!WOULD_ACTOR_BE_VISIBLE(Function_431(bVar1), &uVar2, 3212836864))
							{
								SQUAD_LEAVE(bVar1);
								DESTROY_ACTOR(bVar1);
							}
						}
						else if (IS_ACTOR_HUMAN(bVar1))
						{
							if (((!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_ON_TRAIN(bVar1, 0)) && IS_ACTOR_ON_GROUND(bVar1)) && IS_ACTOR_ON_FOOT(bVar1))
							{
								GET_OBJECT_POSITION(bVar1, &uVar2);
								if (!WOULD_ACTOR_BE_VISIBLE(Function_431(bVar1), &uVar2, 3212836864))
								{
									SQUAD_LEAVE(bVar1);
									DESTROY_ACTOR(bVar1);
								}
							}
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

var Function_431(bool bParam0) //Position: 0x163A9 / 91049
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_432(bool bParam0, bool bParam1, bool bParam2) //Position: 0x163C4 / 91076
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

void Function_433() //Position: 0x164D5 / 91349
{
	var uVar0;
	
	switch (iLocal_947)
	{
		case 0x00000006:
			bLocal_1048 = false;
			while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1052))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048)))
				{
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048)))
					{
						if (ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 24))
						{
							DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), "hasdynamite", true);
						}
						if (ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 23))
						{
							DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), "hasfireb", true);
						}
						if (Function_339(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), bLocal_881, 50.0f) && !Function_432(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), Global_34573, 10.0f))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), "nhasthrown") || DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), "hasfireb"))
							{
								DELETE_ALL_WEAPONS_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048));
								UNK_0x2E84E682(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 0);
								if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), "nhasthrown"))
								{
									GIVE_WEAPON_TO_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 24, false, 1, 1);
								}
								else if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), "hasfireb"))
								{
									GIVE_WEAPON_TO_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 23, false, 1, 1);
								}
								SET_ACTOR_FACTION(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 21);
								Function_434(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 0);
								GET_OBJECT_POSITION(bLocal_881, &uVar0);
								TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048));
								TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 2);
								TASK_SHOOT_AT_COORD(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), &uVar0, -1.0f);
								TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), true);
							}
						}
						else
						{
							SET_ACTOR_FACTION(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 19);
							if (ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 24) || ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 23))
							{
								DELETE_ALL_WEAPONS_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048));
							}
							UNK_0x2E84E682(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 1);
							GIVE_WEAPON_TO_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048), 40, false, 1, 1);
							TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_1052, bLocal_1048));
						}
					}
				}
				bLocal_1048++;
			}
			break;
		
		case 0x00000007:
			SQUAD_GOALS_CLEAR(bLocal_1052);
			Function_413(bLocal_1052);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1052, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			iLocal_947 = 104;
			break;
		
		case 0x00000068:
			Function_430(bLocal_1052, 100.0f);
			break;
	}
	return;
}

void Function_434(bool bParam0, bool bParam1) //Position: 0x16753 / 91987
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_435() //Position: 0x16773 / 92019
{
	switch (iLocal_946)
	{
		case 0x00000001:
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(bLocal_1058);
			Function_413(bLocal_1058);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1058, true, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_881, Local_4.f_1388, 10.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1058, 2, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_881, Local_4.f_1388, 20.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1058, 3, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_881, Local_4.f_1388, 30.0f, 1, 0);
			iLocal_946 = 7;
			break;
		
		case 0x00000007:
			if (SQUAD_GET_SIZE(bLocal_1058) >= 0)
			{
				bLocal_1048 = false;
				while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1058))
				{
					bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1058, bLocal_1048);
					if (IS_ACTOR_VALID(bLocal_903))
					{
						if (Function_339(bLocal_903, TRAIN_GET_CAR(bLocal_1049, false), 15.0f))
						{
							SQUAD_LEAVE(bLocal_903);
							SQUAD_JOIN(bLocal_903, bLocal_1057);
						}
					}
					bLocal_1048++;
				}
			}
			break;
	}
	return;
}

void Function_436() //Position: 0x16861 / 92257
{
	if (!SQUAD_IS_VALID(bLocal_1057))
	{
		return;
	}
	switch (iLocal_945)
	{
		case 0x00000001:
			iLocal_945 = 6;
			break;
		
		case 0x00000006:
			bLocal_1050 = RAND_FLOAT_RANGE(5.0f, 15.0f);
			TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_902, bLocal_636, Local_4.f_1388, bLocal_1050, 1, 0);
			iLocal_945 = 7;
			break;
		
		case 0x00000007:
			if (!iLocal_876)
			{
				if (IS_ACTOR_ALIVE(bLocal_901))
				{
					if (Function_339(bLocal_901, (*&Local_4 + 1324)[0], 25.0f))
					{
						GET_OBJECT_POSITION((*&Local_4 + 1324)[0], &vLocal_833);
						TASK_GO_TO_COORD_AND_STAY(bLocal_901, &vLocal_833, 4, vLocal_833.y);
						iLocal_876 = 1;
					}
				}
			}
			if (bLocal_869)
			{
				if (IS_VOLUME_VALID((*&Local_4 + 920)[5]))
				{
					if (IS_ACTOR_IN_VOLUME(GET_ACTOR_FROM_OBJECT(bLocal_881), (*&Local_4 + 920)[5]))
					{
						DESTROY_VOLUME((*&Local_4 + 920)[5]);
						bLocal_877 = true;
					}
				}
				if (bLocal_877)
				{
					if (IS_ACTOR_ALIVE(bLocal_901))
					{
						TASK_CLEAR(bLocal_901);
						SQUAD_LEAVE(bLocal_901);
						SQUAD_JOIN(bLocal_901, bLocal_1057);
					}
					if (IS_ACTOR_ALIVE(bLocal_902))
					{
						TASK_CLEAR(bLocal_902);
						SQUAD_LEAVE(bLocal_902);
						SQUAD_JOIN(bLocal_902, bLocal_1057);
					}
					iLocal_945 = 8;
				}
			}
			break;
		
		case 0x00000008:
			SQUAD_GOALS_CLEAR(bLocal_1057);
			Function_413(bLocal_1057);
			Function_439(bLocal_1057);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_636, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_901, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_902, true);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1057, true, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_881, Local_4.f_1388, 10.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1057, 2, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_882, Local_4.f_1388, 20.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1057, 3, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_883, Local_4.f_1388, 30.0f, 1, 0);
			iLocal_945 = 10;
			break;
		
		case 0x0000000A:
			if (Function_438(bLocal_1057) >= 0)
			{
				bLocal_1048 = false;
				while (bLocal_1048 <= SQUAD_GET_SIZE(bLocal_1057))
				{
					bLocal_903 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1057, bLocal_1048);
					if (IS_ACTOR_VALID(bLocal_903))
					{
						if (!Function_339(bLocal_903, TRAIN_GET_CAR(bLocal_1049, false), 75.0f))
						{
							SQUAD_LEAVE(bLocal_903);
							SQUAD_JOIN(bLocal_903, bLocal_1058);
						}
					}
					bLocal_1048++;
				}
			}
			else if (Function_438(bLocal_1057) <= 1)
			{
				iLocal_945 = 8;
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID((*&Local_4 + 920)[2]))
			{
				if (IS_ACTOR_VALID(bLocal_901))
				{
					SQUAD_LEAVE(bLocal_901);
					SQUAD_JOIN(bLocal_901, bLocal_1057);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_901, 2);
				}
				if (IS_ACTOR_VALID(bLocal_902))
				{
					SQUAD_LEAVE(bLocal_902);
					SQUAD_JOIN(bLocal_902, bLocal_1057);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_902, 2);
				}
				SQUAD_GOALS_CLEAR(bLocal_1057);
				Function_413(bLocal_1057);
				GET_OBJECT_POSITION((*&Local_4 + 920)[4], &Local_836);
				bLocal_1048 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1380, 4, 0, 0, 1, false);
				TASK_GO_NEAR_COORD(false, &Local_836, 5.0f, 4);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1057, true, 0, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bLocal_1048);
				TASK_SEQUENCE_RELEASE(bLocal_1048, 1);
				Function_437(bLocal_1057, 1);
				iLocal_945 = 104;
			}
			break;
		
		case 0x0000000C:
			break;
		
		case 0x00000068:
			break;
	}
	return;
}

void Function_437(bool bParam0, int iParam1) //Position: 0x16B55 / 93013
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

int Function_438(bool bParam0) //Position: 0x16B8C / 93068
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
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
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_439(bool bParam0) //Position: 0x16BD9 / 93145
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
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_440() //Position: 0x16C1F / 93215
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	
	if (iLocal_1068 <= 12)
	{
		if (!bLocal_844)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_636, 35.0f))
				{
					if (!Function_392(&iLocal_930))
					{
						Function_219(&iLocal_930);
					}
					if (iLocal_1073 >= 0)
					{
						if (Function_586(&iLocal_930) < 12.0f)
						{
							fVar1 = 35.0f;
							bVar3 = Function_456(bLocal_1052, bLocal_1049);
							if (IS_ACTOR_VALID(bVar3))
							{
								fVar1 = Function_455(bVar3, TRAIN_GET_CAR(bLocal_1049, false));
								bVar4 = bVar3;
							}
							bVar3 = Function_456(bLocal_1053, bLocal_1049);
							if (IS_ACTOR_VALID(bVar3))
							{
								if (Function_455(bVar3, TRAIN_GET_CAR(bLocal_1049, false)) > fVar1)
								{
									fVar1 = Function_455(bVar3, TRAIN_GET_CAR(bLocal_1049, false));
									bVar4 = bVar3;
								}
							}
							bVar3 = Function_456(bLocal_1055, bLocal_1049);
							if (IS_ACTOR_VALID(bVar3))
							{
								if (Function_455(bVar3, TRAIN_GET_CAR(bLocal_1049, false)) > fVar1)
								{
									fVar1 = Function_455(bVar3, TRAIN_GET_CAR(bLocal_1049, false));
									bVar4 = bVar3;
								}
							}
							if (IS_ACTOR_VALID(bVar4))
							{
								if (!ACTORS_IN_RANGE(bVar4, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)), 34.0f))
								{
									Function_454();
								}
								else
								{
									bVar0 = RAND_INT_RANGE(false, 500);
									if (bVar0 <= 200)
									{
										Function_453();
									}
									else
									{
										Function_452();
									}
								}
							}
							if (IS_ACTOR_VALID(bVar4))
							{
								if (!ACTORS_IN_RANGE(bVar4, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)), 50.0f))
								{
									Function_300(&uLocal_1062, 17, 0, 4294967295, 4294967295);
								}
								else
								{
									Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
								}
							}
							if (!bLocal_861)
							{
								Function_299(Global_34573);
								vVar10 = { StackVal, StackVal, Function_299(Global_34573) };
								Function_299(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)));
								vVar13 = { StackVal, StackVal, Function_299(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false))) };
								ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1388, &vVar10, &vVar13, &fVar5, &fVar6, &uVar7);
								fVar8 = (fVar6 - fVar5);
								if (fVar8 < 55.0f)
								{
									if (!iLocal_862)
									{
										Function_451();
										iLocal_862 = 1;
									}
								}
								fVar9 = (fVar5 - fVar6);
								if (fVar9 < 55.0f)
								{
									if (!iLocal_862)
									{
										Function_450();
										iLocal_862 = 1;
									}
								}
								if (fVar9 > 55.0f && fVar8 > 55.0f)
								{
									if (!ACTORS_IN_RANGE(Global_34573, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)), 55.0f))
									{
										if (!iLocal_862)
										{
											Function_449();
											iLocal_862 = 1;
										}
									}
									else
									{
										iLocal_862 = 0;
									}
								}
							}
						}
					}
					if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
					{
						if (!bLocal_861)
						{
							Function_448();
						}
						bLocal_861 = true;
					}
					else
					{
						bLocal_861 = false;
					}
					if (!bLocal_861)
					{
						if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
						{
							if (iLocal_842)
							{
								bVar2 = GET_MOST_RECENT_MOUNT(Global_34573);
								if (IS_ACTOR_VALID(bVar2))
								{
									if (IS_ACTOR_ALIVE(bVar2))
									{
										if (DECOR_CHECK_EXIST(Global_34573, "beingBucked"))
										{
											if (Function_447())
											{
												Function_446();
											}
											else
											{
												Function_445();
											}
										}
										else if (!IS_ACTOR_RAGDOLL(Global_34573))
										{
											if (Function_447())
											{
												Function_444();
											}
											else
											{
												Function_443();
											}
										}
									}
									else
									{
										Function_442();
										RELEASE_ACTOR(bVar2);
									}
								}
							}
							iLocal_842 = 0;
						}
						else
						{
							iLocal_842 = 1;
						}
					}
				}
			}
			else if (Function_392(&iLocal_930))
			{
				Function_441(&iLocal_930);
			}
		}
	}
	return;
}

void Function_441(int iParam0) //Position: 0x16EF2 / 93938
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_442() //Position: 0x16F06 / 93958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonHorsKilled", "MexArmy02_JonHorsKilled", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443() //Position: 0x16F5D / 94045
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_NoGetOnHorsTrain", "MexArmy02_NoGetOnHorsTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_444() //Position: 0x16FBA / 94138
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GetsOffHorsTrain", "MexArmy02_GetsOffHorsTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x17017 / 94231
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ThrownOffHorsTrain", "MexArmy02_ThrownOffHorsTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x17078 / 94328
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ThrownOffHorsChup", "MexArmy02_ThrownOffHorsChup", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_447() //Position: 0x170D7 / 94423
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_448() //Position: 0x170EA / 94442
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonJumpsOnTrain", "MexArmy02_JonJumpsOnTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x17145 / 94533
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_WrongDirTrain", "MexArmy02_WrongDirTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x1719C / 94620
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_2FarAheadTrain", "MexArmy02_2FarAheadTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451() //Position: 0x171F5 / 94709
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_2FarBehindTrain", "MexArmy02_2FarBehindTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452() //Position: 0x17250 / 94800
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_SpotsMoreAttakrs", "MexArmy02_SpotsMoreAttakrs", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453() //Position: 0x172AD / 94893
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ChargesAtRebels", "MexArmy02_ChargesAtRebels", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_454() //Position: 0x17308 / 94984
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GeneFillerChup", "MexArmy02_GeneFillerChup", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_455(bool bParam0, bool bParam1) //Position: 0x17361 / 95073
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_341(bParam0);
			vVar0 = { StackVal, StackVal, Function_341(bParam0) };
			Function_340(bParam1);
			vVar3 = { StackVal, StackVal, Function_340(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_456(bool bParam0, bool bParam1) //Position: 0x17401 / 95233
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	fVar4 = 1E+09.0f;
	if (!SQUAD_IS_VALID(bParam0))
	{
		LOG_WARNING("SQUAD passed into GET_CLOSEST_SQUAD_MEMBER_TO_TRAIN is invalid!!");
		return "";
	}
	if (TRAIN_GET_NUM_CARS(bParam1) <= 0)
	{
		LOG_WARNING("Train not valid!!");
		return "";
	}
	bVar3 = false;
	while (bVar3 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar3);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				bVar2 = false;
				while (bVar2 <= TRAIN_GET_NUM_CARS(bParam1))
				{
					if (Function_455(bVar0, TRAIN_GET_CAR(bParam1, bVar2)) > fVar4)
					{
						fVar4 = Function_455(bVar0, TRAIN_GET_CAR(bParam1, bVar2));
						bVar1 = bVar0;
					}
					bVar2++;
				}
			}
		}
		bVar3++;
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		return bVar1;
	}
	return "";
}

void Function_457() //Position: 0x174FC / 95484
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	vector3 vVar12;
	var uVar15;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	vector3 vVar21;
	vector3 vVar24;
	bool bVar28;
	vector3 vVar29;
	vector3 vVar32;
	bool bVar36;
	vector3 vVar37;
	struct<9> Var40;
	
	if (bLocal_844)
	{
		if (Function_586(&iLocal_906) < 5.0f)
		{
			Function_225("Mexarmy02_boiler_blown");
			bLocal_665 = true;
		}
	}
	else
	{
		if (iLocal_1044 <= 6 && !iLocal_849[0])
		{
		}
	}
}

void Function_458(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x17E9F / 97951
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_459(bool bParam0, vector3 vParam1, vector3 vParam4, float fParam7, bool bParam8) //Position: 0x17EBB / 97979
{
	Function_460(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam1);
	if (fParam7 >= 0.0f)
	{
		fParam7 = 9999.0f;
	}
	SET_CAMERASHOT_TARGET_OBJECT(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), bParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam4, 0.0f, 0.0f, 0.0f, 0);
	Global_63098.f_4 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, Global_63098, 0f, fParam7);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), bParam8))
	{
		PLAY_CUTSCENEOBJECT(Global_63098, bParam8, Global_63098.f_12, Global_63098.f_16, Global_63098.f_20, Global_63098.f_24, Global_63098.f_28, Global_63098.f_32, Global_63098.f_36, Global_63098.f_40);
	}
}

void Function_460(bool bParam0) //Position: 0x17FA9 / 98217
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_461(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x17FBA / 98234
{
	Function_462(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_54(), 2, 1);
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

void Function_462(bool bParam0, bool bParam1) //Position: 0x18096 / 98454
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

void Function_463() //Position: 0x180E2 / 98530
{
	switch (iLocal_1073)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[0]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[0]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[0]))
				{
					Function_300(&uLocal_1062, 18, 0, 4294967295, 4294967295);
					Function_476();
					Function_378(Local_4.f_520, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_378(Local_4.f_544, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_378(Local_4.f_628, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_520, bLocal_1052);
					SQUADS_MERGE(Local_4.f_628, bLocal_1056);
					Function_413(bLocal_1056);
					Function_475();
					Function_474();
					Function_406(Local_4.f_632, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
					Function_424(Local_4.f_632, 35.0f);
					Function_423(Local_4.f_632, 16, 1);
					AUDIO_SET_PLAYER_MOOD(1, 0);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					bLocal_848 = true;
					DESTROY_VOLUME((*&Local_4 + 848)[0]);
					Function_219(&iLocal_927);
					iLocal_1073 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!iLocal_852[0])
			{
				if (Function_586(&iLocal_927) < 4.0f)
				{
					Function_380("MexArmy02_train_protect", 7,5f, 1, 2, 0, 0, 0);
					iLocal_852[0] = 1;
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 848)[1]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[1]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[1]))
				{
					Function_378(Local_4.f_544, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_544, bLocal_1052);
					Function_378(Local_4.f_632, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_632, bLocal_1055);
					Function_413(bLocal_1055);
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_473();
					Function_472();
					DESTROY_VOLUME((*&Local_4 + 848)[1]);
					iLocal_1073 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[2]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[2]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[2]))
				{
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_378(Local_4.f_568, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_568, bLocal_1052);
					Function_471();
					Function_406(Local_4.f_636, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
					Function_424(Local_4.f_636, 35.0f);
					Function_423(Local_4.f_636, 16, 1);
					Function_470();
					Function_406(Local_4.f_640, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
					Function_424(Local_4.f_640, 35.0f);
					Function_423(Local_4.f_640, 16, 1);
					Function_453();
					DESTROY_VOLUME((*&Local_4 + 848)[2]);
					iLocal_1073 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[3]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[3]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[3]))
				{
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_469();
					Function_378(Local_4.f_640, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_640, bLocal_1056);
					Function_413(bLocal_1056);
					Function_468();
					DESTROY_VOLUME((*&Local_4 + 848)[3]);
					iLocal_1073 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[7]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[7]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[7]))
				{
					Function_378(Local_4.f_636, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_636, bLocal_1055);
					Function_413(bLocal_1055);
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_467();
					Function_406(Local_4.f_644, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
					Function_424(Local_4.f_644, 35.0f);
					Function_423(Local_4.f_644, 16, 1);
					Function_466();
					DESTROY_VOLUME((*&Local_4 + 848)[7]);
					iLocal_1073 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[4]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[4]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[4]))
				{
					Function_378(Local_4.f_600, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_600, bLocal_1052);
					Function_378(Local_4.f_644, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_644, bLocal_1056);
					Function_413(bLocal_1056);
					Function_452();
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_465();
					Function_406(Local_4.f_648, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
					Function_424(Local_4.f_648, 35.0f);
					Function_423(Local_4.f_648, 16, 1);
					DESTROY_VOLUME((*&Local_4 + 848)[4]);
					iLocal_1073 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[5]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[5]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[5]))
				{
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_378(Local_4.f_648, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_648, bLocal_1056);
					Function_413(bLocal_1056);
					Function_464();
					Function_406(Local_4.f_652, GET_ACTOR_FROM_OBJECT(bLocal_881), 0.0f, 3.0f, 0.0f);
					Function_424(Local_4.f_652, 35.0f);
					Function_423(Local_4.f_652, 16, 1);
					Function_472();
					DESTROY_VOLUME((*&Local_4 + 848)[5]);
					iLocal_1073 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID((*&Local_4 + 848)[6]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 848)[6]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 848)[6]))
				{
					Function_300(&uLocal_1062, 40, 0, 4294967295, 4294967295);
					Function_378(Local_4.f_652, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(Local_4.f_652, bLocal_1056);
					Function_413(bLocal_1056);
					Function_453();
					DESTROY_VOLUME((*&Local_4 + 848)[6]);
					iLocal_1073 = 7;
				}
			}
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000A:
			break;
	}
	return;
}

void Function_464() //Position: 0x186F1 / 100081
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_652 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry08"));
	bVar0 = Function_408(Local_4, "Enemy02gRider07", 529, Function_54(), 976, -1016.0f, 7,702282f, 3992.0f, 0.0f, 15.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_652);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02gRider08", 518, Function_54(), 977, -1024.0f, 7,21443f, 3996.0f, 0.0f, 15.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_652);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02gRider010", 523, Function_54(), 980, -1020.0f, 8,670094f, 3984.0f, 0.0f, 15.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_652);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

void Function_465() //Position: 0x1885F / 100447
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_648 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry07"));
	bVar0 = Function_408(Local_4, "Enemy02gRider04", 518, Function_54(), 976, -1144.0f, 8,031338f, 4084.0f, 0.0f, 15,34692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02gRider09", 529, Function_54(), 980, -1152.0f, 8,031328f, 4088.0f, -0,1315025f, 12,34931f, -0,2628411f);
	SQUAD_JOIN(bVar0, Local_4.f_648);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

void Function_466() //Position: 0x18969 / 100713
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AttackNorth", "MexArmy02_AttackNorth", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467() //Position: 0x189BC / 100796
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_644 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry05"));
	bVar0 = Function_408(Local_4, "Enemy02eRider01", 518, Function_54(), 976, -1260f, 14,0549f, 4144.0f, 0.0f, 25,67445f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_644);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02eRider02", 522, Function_54(), 977, -1248f, 13,05099f, 4140.0f, 0.0f, 55,17793f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_644);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02eRider03", 522, Function_54(), 977, -1232f, 13,05099f, 4132.0f, 0.0f, 55,17793f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_644);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

void Function_468() //Position: 0x18B29 / 101161
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AttackSouth", "MexArmy02_AttackSouth", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469() //Position: 0x18B7C / 101244
{
	Local_4.f_600 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyInfantry05"));
	(*&Local_4 + 572)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02gGrunt01", 521, -1308f, 13,34707f, 4116.0f, 0.0f, 100,1267f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 572)[02], Local_4.f_600);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 572)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 572)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 572)[02], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 572)[02], 11.0f);
	(*&Local_4 + 572)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02gSniper04", 523, -1306.0f, 14,0549f, 4120.0f, 0.0f, 65,61435f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 572)[12], Local_4.f_600);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 572)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 572)[12], 23, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 572)[12], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 572)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 572)[12], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 572)[12], 11.0f);
	(*&Local_4 + 572)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02gSniper05", 521, -1324,816f, 15,0775f, 4103,976f, 0.0f, -114,624f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 572)[22], Local_4.f_600);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 572)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 572)[22], 24, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 572)[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 572)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 572)[22], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 572)[22], 11.0f);
	return;
}

void Function_470() //Position: 0x18D70 / 101744
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_640 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry04"));
	bVar0 = Function_408(Local_4, "Enemy02cRider03", 522, Function_54(), 977, -1704.0f, 18,07057f, 4436.0f, 0.0f, -64,36367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_640);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02cRider01", 529, Function_54(), 976, -1700.0f, 18,07057f, 4432.0f, 0.0f, 16,02602f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_640);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02cRider04", 529, Function_54(), 976, -1708.0f, 18,07057f, 4440.0f, 0.0f, -22,19625f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_640);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

void Function_471() //Position: 0x18EDD / 102109
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_636 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry03"));
	bVar0 = Function_408(Local_4, "Enemy02dRider01", 522, Function_54(), 977, -1600.0f, 9,035278f, 4212.0f, 0.0f, 182,8161f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_636);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02dRider02", 522, Function_54(), 976, -1596.0f, 9,035282f, 4220.0f, 0.0f, 181,5005f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_636);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

void Function_472() //Position: 0x18FDF / 102367
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AttackEast", "MexArmy02_AttackEast", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x19030 / 102448
{
	Local_4.f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyInfantry03"));
	(*&Local_4 + 548)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02gSniper01", 530, -1844,661f, 12,85401f, 4373,145f, 0.0f, 150.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 548)[02], Local_4.f_568);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 548)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 548)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 548)[02], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 548)[02], 11.0f);
	(*&Local_4 + 548)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02gSniper02", 522, -1848f, 12,04704f, 4372.0f, 0.0f, 165.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 548)[12], Local_4.f_568);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 548)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 548)[12], 23, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 548)[12], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 548)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 548)[12], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 548)[12], 11.0f);
	return;
}

void Function_474() //Position: 0x19180 / 102784
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyCavalry02"));
	bVar0 = Function_408(Local_4, "Enemy02aRider06", 521, Function_54(), 977, -2048.0f, 5,773531f, 4306,55f, 0.0f, 211,9802f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02aRider07", 518, Function_54(), 976, -2050,231f, 5,878177f, 4313,189f, 0.0f, 187,9853f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	bVar0 = Function_408(Local_4, "Enemy02aRider08", 518, Function_54(), 976, -2053,402f, 5,903527f, 4307,623f, 0.0f, 185,0515f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_PREFER_RIDING(bVar0, true);
	return;
}

void Function_475() //Position: 0x192ED / 103149
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_RebelsAttack1", "MexArmy02_RebelsAttack1", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476() //Position: 0x19344 / 103236
{
	Local_4.f_544 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "EnemyInfantry02"));
	(*&Local_4 + 524)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02fSniper01", 518, -2036f, 7,027435f, 4344.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 524)[02], Local_4.f_544);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 524)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 524)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 524)[02], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 524)[02], 11.0f);
	(*&Local_4 + 524)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Enemy02fSniper03", 522, -2035,037f, 6,798557f, 4348,184f, 0.0f, 100,0485f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 524)[12], Local_4.f_544);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 524)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 524)[12], 24, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 524)[12], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 524)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 524)[12], 19);
	SET_ACTOR_HEALTH((*&Local_4 + 524)[12], 11.0f);
	return;
}

void Function_477() //Position: 0x19494 / 103572
{
	bool bVar0;
	
	switch (iLocal_1070)
	{
		case 0x00000000:
			TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
			iLocal_1070 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				iLocal_1070 = 2;
			}
			break;
		
		case 0x00000002:
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_636, true);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_636, Local_4.f_1388, 4, 0, 0, 1, false);
			iLocal_1070 = 3;
			break;
		
		case 0x00000003:
			if (ACTORS_IN_RANGE(bLocal_636, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 6)), 36.0f))
			{
				SET_ACTOR_INVULNERABILITY(GET_MOUNT(bLocal_636), true);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_636, true);
				iLocal_1070 = 6;
			}
			break;
		
		case 0x00000004:
			TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
			iLocal_1070 = 5;
			break;
		
		case 0x00000005:
			if (ACTORS_IN_RANGE(Global_34573, bLocal_636, 8.0f))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					iLocal_1070 = 2;
				}
			}
			break;
		
		case 0x00000006:
			TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_636, bLocal_881, Local_4.f_1388, -10.0f, 1, 0);
			iLocal_1070 = 7;
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION((*&Local_4 + 1040)[4], &vLocal_833);
			TASK_GO_NEAR_COORD(bLocal_636, &vLocal_833, 3.0f, 4);
			iLocal_1070 = 9;
			break;
		
		case 0x00000009:
			if (GET_TASK_STATUS(bLocal_636, 61) == 0)
			{
				TASK_CLEAR(bLocal_636);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_DISMOUNT(false, 0);
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1040)[2], 1, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_636, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				MEMORY_PREFER_WALKING(bLocal_636, false);
				iLocal_1070 = 10;
			}
			break;
		
		case 0x0000000A:
			break;
	}
	return;
}

void Function_478() //Position: 0x19619 / 103961
{
	switch (iLocal_1072)
	{
		case 0x00000000:
			if (bLocal_869)
			{
				iLocal_1072 = 1;
			}
			break;
		
		case 0x00000001:
			TRAIN_SET_ENGINE_ENABLED(bLocal_1049, 1);
			GET_OBJECT_POSITION((*&Local_4 + 1124)[1], &Local_836);
			TRAIN_SET_TARGET_POS(bLocal_1049, &Local_836);
			TRAIN_SET_TARGET_SPEED(bLocal_1049, 8.0f);
			TRAIN_SET_MAX_ACCEL(bLocal_1049, 1,4f);
			TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1049, 1);
			iLocal_1072 = 2;
			break;
		
		case 0x00000002:
			if (IS_VOLUME_VALID((*&Local_4 + 920)[3]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 920)[3]))
				{
					iLocal_1070 = 8;
					iLocal_945 = 11;
					iLocal_947 = 7;
					iLocal_1072 = 3;
				}
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_479() //Position: 0x196C6 / 104134
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsRandChup", "MexArmy02_ShootsRandChup", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_480() //Position: 0x1971F / 104223
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_TargetsSantasMenTrain", "MexArmy02_TargetsSantasMenTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x19786 / 104326
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GunOnSantaMenChu", "MexArmy02_GunOnSantaMenChu", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_482(bool bParam0, bool bParam1, int iParam2) //Position: 0x197E3 / 104419
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (IS_PLAYER_TARGETTING_ACTOR(bParam0, bVar1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_483() //Position: 0x19834 / 104500
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_TargetsSantaTrain", "MexArmy02_TargetsSantaTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x19893 / 104595
{
	bool bVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	
	switch (iLocal_1068)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_636))
			{
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				HUD_CLEAR_OBJECTIVE();
				Function_492();
				Function_491();
				if (IS_ACTOR_VALID(bLocal_637))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_637)))
					{
						Function_215(bLocal_637);
					}
				}
				Function_313(6, 1, 1);
				Function_219(&iLocal_927);
				iLocal_945 = 1;
				iLocal_1068 = 1;
			}
			else
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					HUD_CLEAR_OBJECTIVE();
					if (IS_ACTOR_VALID(bLocal_637))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_637)))
						{
							Function_215(bLocal_637);
						}
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_636))
				{
					if (Function_586(&iLocal_927) < (7,5f + 5.0f))
					{
						Function_490();
						Function_219(&iLocal_927);
					}
				}
			}
			break;
		
		case 0x00000001:
			Function_489(&iLocal_644, 60.0f, 200.0f, bLocal_636, "Henchman_return", "Henchman_abandoned", &bLocal_665, 0, 0, 0, 325, 1);
			if ((Function_586(&iLocal_927) < 4.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && !iLocal_857[1])
			{
				Function_236();
				Function_380("mexarmy02_follow_desanta", 7,5f, 1, 2, 0, 0, 0);
				iLocal_857[1] = 1;
			}
			if (ACTORS_IN_RANGE(bLocal_636, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, 6)), 36.0f))
			{
				Function_488();
				UI_SET_TEXT("HealthMeter", "MexArmy02_train_health");
				UI_SET_PROGRESS_BAR_VAL("HealthMeter", 100.0f);
				UI_SHOW("HealthMeter");
				Function_313(6, 0, 1);
				ADD_BLIP_FOR_OBJECT(bLocal_881, 325, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bLocal_881), "MexArmy02_train_health");
				Function_300(&uLocal_1062, 17, 0, 4294967295, 4294967295);
				Function_219(&iLocal_927);
				bLocal_869 = true;
				iLocal_1068 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_586(&iLocal_927) < 5.0f || (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_586(&iLocal_927) < 0,5f))
			{
				Function_236();
				Function_380("mexarmy02_obj02b", 7,5f, 1, 2, 0, 0, 0);
				Function_219(&iLocal_927);
				iLocal_1068 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_586(&iLocal_927) < 7,5f && !iLocal_852[3])
			{
				Function_454();
				iLocal_852[3] = 1;
			}
			if (!bLocal_844)
			{
				if (!Function_392(&iLocal_933))
				{
					Function_374(&iLocal_933);
				}
				else if (Function_586(&iLocal_933) < 5.0f)
				{
					Function_299(Global_34573);
					vVar6 = { StackVal, StackVal, Function_299(Global_34573) };
					Function_299(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false)));
					vVar9 = { StackVal, StackVal, Function_299(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_1049, false))) };
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1388, &vVar6, &vVar9, &fVar1, &fVar2, &uVar3);
					fVar4 = (fVar2 - fVar1);
					if (fVar4 < 160.0f)
					{
						Function_381(&iLocal_644, 160.0f, 200.0f, TRAIN_GET_CAR(bLocal_1049, false), "MexArmy02_catch_up_train", "MexArmy02_train_abandoned", &bLocal_665, 0, 0, 0, 4294967295, 1);
					}
					fVar5 = (fVar1 - fVar2);
					if (fVar5 < 160.0f)
					{
						Function_381(&iLocal_644, 160.0f, 200.0f, TRAIN_GET_CAR(bLocal_1049, false), "MexArmy02_train_slowdown", "MexArmy02_train_abandoned", &bLocal_665, 0, 0, 0, 4294967295, 1);
					}
					Function_219(&iLocal_933);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 920)[3]))
			{
				if (IS_OBJECT_IN_VOLUME(bLocal_881, (*&Local_4 + 920)[3]))
				{
					UI_EXIT("HealthMeter");
					iLocal_948 = 7;
					iLocal_947 = 7;
					iLocal_1068 = 12;
					Function_487();
					Function_219(&iLocal_927);
				}
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			if (Function_586(&iLocal_927) < 6.0f)
			{
				Function_215(bLocal_881);
				GET_OBJECT_POSITION((*&Local_4 + 920)[0], &vLocal_833);
				bLocal_888 = Function_486(StackVal, StackVal, StackVal, StackVal, bLocal_518, Function_54(), vLocal_833, vLocal_833, Global_34573, 3.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_236();
				Function_380("mexarmy02_obj02d", 7,5f, 1, 2, 0, 0, 0);
				Function_300(&uLocal_1062, 3, 0, 4294967295, 4294967295);
				iLocal_1068 = 13;
			}
			break;
		
		case 0x0000000D:
			if (GATEWAY_UPDATE(bLocal_888))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_CLEAR(Global_34573);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,3f, 0, 0);
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					TASK_DISMOUNT(false, 0);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				MEMORY_PREFER_WALKING(bLocal_636, false);
				Function_485(bLocal_888);
				Function_219(&iLocal_638);
				bLocal_873 = true;
				iLocal_1068 = 14;
			}
			break;
		
		case 0x0000000E:
			break;
	}
	return;
}

void Function_485(bool bParam0) //Position: 0x19DB9 / 105913
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

var Function_486(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x19E43 / 106051
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, uParam14, uParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_487() //Position: 0x19F0E / 106254
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_RetreatingShouts", "MexArmy02_RetreatingShouts", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x19F6B / 106347
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ArriveAtTrain", "MexArmy02_ArriveAtTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_489(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x19FC2 / 106434
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_432(Global_34573, bParam3, uParam2))
	{
		Function_225(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_432(Global_34573, bParam3, bParam1))
	{
		if (!Function_387(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_380(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_386(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_387(2))
	{
		Function_384(2);
		if (!Function_383())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_382();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_212(bParam3);
				Function_215(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_385(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_385(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_490() //Position: 0x1A156 / 106838
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_WaitingForJonMount", "MexArmy02_WaitingForJonMount", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x1A1B7 / 106935
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_SetOff4Train", "MexArmy02_SetOff4Train", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x1A20C / 107020
{
	if (iLocal_868)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	else
	{
		ABORT_SCRIPTED_CONVERSATION(1);
	}
	iLocal_868 = 0;
	Function_441(&iLocal_927);
	return;
}

void Function_493() //Position: 0x1A22F / 107055
{
	bool bVar0;
	
	if (iLocal_633 <= 7)
	{
		Function_524();
	}
	if (iLocal_633 < 3 && iLocal_633 > 105)
	{
		Function_507();
		Function_505();
		Function_501();
		Function_499(bLocal_901, (*&Local_4 + 656)[12], &iLocal_1074, -35.0f, (*&Local_4 + 992)[8]);
		Function_499(bLocal_902, (*&Local_4 + 656)[22], &iLocal_1075, -20.0f, (*&Local_4 + 992)[9]);
		if (!Function_392(&iLocal_918))
		{
			Function_391(&iLocal_918, 13,1f);
		}
		else if (Function_586(&iLocal_918) < 13.0f)
		{
			bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
			if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_636, 1))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_390();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_219(&iLocal_918);
			}
			else if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_901, 1) || IS_PLAYER_TARGETTING_ACTOR(false, bLocal_902, 1))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_481();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_GunOnSantaMenChu", "MexArmy02_GunOnSantaMenChu", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_219(&iLocal_918);
			}
			else if (!IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_479();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_ShootsRandChup", "MexArmy02_ShootsRandChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					Function_219(&iLocal_918);
				}
			}
		}
		if (!Function_362(Global_30685[0]))
		{
			if (Function_362(Global_30693[0]))
			{
				if (!HUD_IS_FADED())
				{
					if (Function_426())
					{
						Function_397();
					}
				}
			}
		}
	}
	switch (iLocal_633)
	{
		case 0x00000000:
			if (Function_498())
			{
				Function_219(&iLocal_638);
				iLocal_633 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_362(Global_30685[0]) || iLocal_634 != 4294967295))
			{
				iLocal_1065 = 0;
				Function_219(&iLocal_638);
				iLocal_633 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_496())
			{
				if (!Function_273(&Local_520))
				{
					iLocal_633 = 3;
				}
				else
				{
					Function_231(iLocal_632);
					Function_351(StackVal, StackVal, Function_231(iLocal_632), iLocal_632, Global_30633[0], Function_234(iLocal_632), 0);
					Function_293(bLocal_901, (*&Local_4 + 956)[5], 1, 1, 1);
					Function_293(bLocal_902, (*&Local_4 + 956)[6], 1, 1, 1);
					iLocal_1069 = 0;
					iLocal_1074 = 0;
					iLocal_1075 = 0;
					Function_219(&iLocal_638);
					iLocal_633 = 6;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_264("$/cutscene/MEXICAN_ARMY_02/MEXICAN_ARMY_02", &iLocal_625, &Local_520, &iLocal_632, 53376, 53369, 72377, 57943, 50981, 50974, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_231(iLocal_632);
				Function_351(StackVal, StackVal, Function_231(iLocal_632), iLocal_632, Global_30633[0], Function_234(iLocal_632), 0);
				Function_219(&iLocal_638);
				iLocal_633 = 6;
			}
			break;
		
		case 0x00000006:
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iLocal_1064 = Function_495(Local_520);
			iLocal_871 = 0;
			Function_494();
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_900, -1.0f, -1.0f, 1, 1, 0);
			Function_300(&uLocal_1062, 3, 0, 4294967295, 4294967295);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			iLocal_842 = 0;
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_219(&iLocal_638);
			iLocal_633 = 7;
			break;
		
		case 0x00000007:
			if ((Function_586(&iLocal_638) < 8.0f || GET_ACTOR_IN_VEHICLE_SEAT(bLocal_900, true) != Global_34573) || IS_ACTOR_RIDING(Global_34573))
			{
				Function_306(0, 0x40400000);
				Function_236();
				Function_219(&iLocal_638);
				iLocal_633 = 8;
			}
			break;
		
		case 0x00000008:
			if (bLocal_845 == 1)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_636))
				{
					Function_219(&iLocal_638);
					iLocal_633 = 106;
				}
			}
			break;
		
		case 0x00000069:
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
				}
				iLocal_653[0] = 1;
				Function_219(&iLocal_638);
				iLocal_632 = 1;
				iLocal_633 = 0;
			}
			break;
	}
	return;
}

void Function_494() //Position: 0x1A689 / 108169
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_RideWitMeOrHorse", "MexArmy02_RideWitMeOrHorse", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_495(int iParam0) //Position: 0x1A6E6 / 108262
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_496() //Position: 0x1A700 / 108288
{
	switch (iLocal_1065)
	{
		case 0x00000000:
			Function_399();
			SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 656)[02], 0);
			SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 656)[12], 0);
			DECOR_SET_BOOL((*&Local_4 + 656)[12], "bNoInjuryEjection", true);
			SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 656)[22], 0);
			DECOR_SET_BOOL((*&Local_4 + 656)[22], "bNoInjuryEjection", true);
			SQUAD_LEAVE((*&Local_4 + 656)[32]);
			Function_401();
			bLocal_900 = (*&Local_4 + 712)[02];
			Function_418(&(Local_707[117]), bLocal_900, "wagon", 1, 0x5f5e100, 1);
			Function_418(&(Local_707[417]), Local_4.f_692, "MexicanSoldier_Horse", 0, 0x5f5e100, 1);
			Function_414(&(Local_707[417]), 2);
			ENABLE_VEHICLE_SEAT(bLocal_900, false, 0);
			ENABLE_VEHICLE_SEAT(bLocal_900, 2, 0);
			ENABLE_VEHICLE_SEAT(bLocal_900, 3, 0);
			ENABLE_VEHICLE_SEAT(bLocal_900, 4, 0);
			ENABLE_VEHICLE_SEAT(bLocal_900, 5, 0);
			Function_400(bLocal_900);
			Function_497(bLocal_900);
			bLocal_892 = CREATE_PROP_IN_LAYOUT(Local_4, "crateMultiplayerWeapon01x0", "p_gen_crateMultiplayerWeapon01x", -0,4665646f, 1,491665f, 1,254822f, 0.0f, -98,19228f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_892, bLocal_900, false);
			ATTACH_OBJECTS(bLocal_892, bLocal_900, Function_54(), -0,4665646f, 1,491665f, 1,254822f, 0.0f, -98,19228f, 0.0f, 4294967295);
			bLocal_893 = CREATE_PROP_IN_LAYOUT(Local_4, "crateMultiplayerWeapon01x1", "p_gen_crateMultiplayerWeapon01x", 0,183937f, 1,206059f, 1,244328f, 0.0f, -89,10876f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_893, bLocal_900, false);
			ATTACH_OBJECTS(bLocal_893, bLocal_900, Function_54(), 0,183937f, 1,206059f, 1,244328f, 0.0f, -89,10876f, 0.0f, 4294967295);
			bLocal_894 = CREATE_PROP_IN_LAYOUT(Local_4, "crateMultiplayerWeapon01x2", "p_gen_crateMultiplayerWeapon01x", -0,2277385f, 1,206059f, 1,263772f, 0.0f, -89,10876f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_894, bLocal_900, false);
			ATTACH_OBJECTS(bLocal_894, bLocal_900, Function_54(), -0,2277385f, 1,206059f, 1,263772f, 0.0f, -89,10876f, 0.0f, 4294967295);
			bLocal_895 = CREATE_PROP_IN_LAYOUT(Local_4, "crateMultiplayerWeapon01x3", "p_gen_crateMultiplayerWeapon01x", -0,5892041f, 1,206059f, 1,271523f, 0.0f, -89,10876f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_895, bLocal_900, false);
			ATTACH_OBJECTS(bLocal_895, bLocal_900, Function_54(), -0,5892041f, 1,206059f, 1,271523f, 0.0f, -89,10876f, 0.0f, 4294967295);
			bLocal_896 = CREATE_PROP_IN_LAYOUT(Local_4, "ncrate01x0", "p_gen_crate01x", 0,3636109f, 1,192816f, -0,3245885f, 0.0f, -91,12965f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_896, bLocal_900, false);
			ATTACH_OBJECTS(bLocal_896, bLocal_900, Function_54(), 0,3636109f, 1,192816f, -0,3245885f, 0.0f, -91,12965f, 0.0f, 4294967295);
			bLocal_897 = CREATE_PROP_IN_LAYOUT(Local_4, "ncrate01x1", "p_gen_crate01x", 0,4628896f, 1,192816f, 0,383054f, 0.0f, -80,87753f, 0.0f, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_897, bLocal_900, false);
			ATTACH_OBJECTS(bLocal_897, bLocal_900, Function_54(), 0,4628896f, 1,192816f, 0,383054f, 0.0f, -80,87753f, 0.0f, 4294967295);
			Function_398();
			Function_418(&(Local_707[317]), Local_4.f_488, "MexicanSoldier", 1, 0x5f5e100, 1);
			bLocal_901 = (*&Local_4 + 468)[02];
			bLocal_902 = (*&Local_4 + 468)[12];
			iLocal_1065 = 1;
			break;
		
		case 0x00000001:
			Function_293(Global_34573, (*&Local_4 + 956)[1], 1, 1, 1);
			Function_293(bLocal_636, (*&Local_4 + 956)[3], 1, 1, 1);
			Function_293(bLocal_637, (*&Local_4 + 956)[4], 1, 1, 1);
			iLocal_1065 = 4;
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			iLocal_952 = 6;
			Function_524();
			iLocal_1065 = 5;
			return 1;
			break;
		
		case 0x00000005:
			break;
	}
	return 0;
}

void Function_497(bool bParam0) //Position: 0x1ABDF / 109535
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

bool Function_498() //Position: 0x1AC4A / 109642
{
	Function_305(0);
	if (Function_273(&Local_520))
	{
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
		}
		TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 956)[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
	}
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	SET_ACTOR_HEALTH(bLocal_636, GET_ACTOR_MAX_HEALTH(bLocal_636));
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_365();
	if (!Function_362(Global_30685[0]))
	{
		Function_364(&Local_520);
	}
	SET_ACTOR_VISION_XRAY(bLocal_636, true);
	TELEPORT_OBJECT_TO_OBJECT(bLocal_636, (*&Local_4 + 956)[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
	return 1;
}

void Function_499(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1ACE9 / 109801
{
	switch (*iParam2)
	{
		case 0x00000000:
			TASK_MOUNT(bParam0, bParam1, 0, 1, 2, 2147483647);
			ACTOR_POP_NEXT_GAIT(bParam0, 2, false);
			*iParam2 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam0, 11) == 4)
			{
				TASK_MOUNT(bParam0, bParam1, 0, 1, 2, 2147483647);
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam0))
			{
				MEMORY_PREFER_RIDING(bParam0, false);
				*iParam2 = 4;
			}
			break;
		
		case 0x00000004:
			GET_PATH_POINT(Local_4.f_1384, 2, &Local_836);
			TASK_GO_NEAR_COORD(bParam0, &Local_836, 3.0f, 4);
			*iParam2 = 5;
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(bParam0, 61) == 0)
			{
				*iParam2 = 6;
			}
			break;
		
		case 0x00000006:
			TASK_FOLLOW_OBJECT_ALONG_PATH(bParam0, bLocal_900, Local_4.f_1384, bParam3, 1, 0);
			*iParam2 = 7;
			break;
		
		case 0x00000007:
			if (Function_500(bLocal_636, Local_4.f_1384) > 25.0f)
			{
				if (bParam0 == bLocal_901)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_901, Local_4.f_1388, 3, 0, 0, 1, false);
				}
				if (bParam0 != bLocal_901)
				{
					GET_OBJECT_POSITION(bParam4, &vLocal_833);
					TASK_GO_TO_COORD_AND_STAY(bParam0, &vLocal_833, 4, vLocal_833.y);
				}
				*iParam2 = 10;
			}
			break;
		
		case 0x00000008:
			TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam0))
			{
				bLocal_903 = GET_MOUNT(bParam0);
				TASK_STAND_STILL(bLocal_903, -1.0f, 0, 0);
			}
			*iParam2 = 9;
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
	}
}

float Function_500(bool bParam0, bool bParam1) //Position: 0x1AE44 / 110148
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_341(bParam0);
		vVar4 = { StackVal, StackVal, Function_341(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

int Function_501() //Position: 0x1AED1 / 110289
{
	if (!iLocal_846)
	{
		if (!iLocal_872)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
			}
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			iLocal_1071 = 11;
		}
	}
	switch (iLocal_1071)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (iLocal_872)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_905) && !IS_BUTTON_DOWN(0, 4, 1, false))
					{
						iLocal_1064 = 9;
						Function_492();
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
						Function_236();
						iLocal_846 = 1;
						iLocal_872 = 0;
						iLocal_866 = 1;
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						Function_86(17, 1, 0, 0);
						iLocal_1071 = 2;
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				iLocal_1069 = 8;
				STOP_VEHICLE(bLocal_900);
				iLocal_1074 = 8;
				iLocal_1075 = 8;
				iLocal_1071 = 10;
			}
			break;
		
		case 0x0000000A:
			GET_ACTOR_VELOCITY(Global_34573, &Local_836);
			bLocal_1050 = VMAG(Local_836);
			if (bLocal_1050 >= 0,5f)
			{
				ACTOR_DISMOUNT_NOW(Global_34573);
				ACTOR_DISMOUNT_NOW(bLocal_636);
				iLocal_1071 = 3;
			}
			break;
		
		case 0x00000003:
			Function_293(Global_34573, (*&Local_4 + 992)[0], 1, 1, 1);
			bLocal_1050 = Function_504(Global_34573, bLocal_636);
			Function_503(bLocal_1050);
			TELEPORT_OBJECT_TO_OBJECT(bLocal_900, (*&Local_4 + 1324)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(bLocal_636, (*&Local_4 + 1324)[1], 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			vLocal_833.x = (vLocal_833.x - 10.0f);
			TELEPORT_OBJECT_TO_OBJECT(bLocal_637, (*&Local_4 + 1324)[1], -10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 656)[22], (*&Local_4 + 1324)[3], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			TELEPORT_OBJECT_TO_OBJECT((*&Local_4 + 656)[12], (*&Local_4 + 1324)[2], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
			iLocal_1071 = 4;
			break;
		
		case 0x00000004:
			if (!Function_362(Global_30693[0]))
			{
				Function_189(1, 0, 1);
				iLocal_1071 = 5;
			}
			break;
		
		case 0x00000005:
			if (STREAMING_IS_WORLD_LOADED() && Function_362(Global_30693[0]))
			{
				iLocal_1071 = 6;
			}
			break;
		
		case 0x00000006:
			iLocal_1071 = 7;
			break;
		
		case 0x00000007:
			if (!IS_SEAT_OCCUPIED(bLocal_900, false))
			{
				SET_ACTOR_IN_VEHICLE(bLocal_636, bLocal_900, false);
			}
			if (!IS_SEAT_OCCUPIED(bLocal_900, true))
			{
				SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_900, true);
			}
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_636, 0);
			START_VEHICLE(bLocal_900);
			if (!Function_392(&iLocal_924))
			{
				Function_374(&iLocal_924);
			}
			Function_219(&iLocal_924);
			iLocal_1071 = 8;
			break;
		
		case 0x00000008:
			if (Function_586(&iLocal_924) < 0,1f)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_900, false) == bLocal_636)
				{
					GET_ACTOR_VEHICLE_STATE(bLocal_636, &uLocal_1046, &iLocal_1047);
					if (iLocal_1047 != 1 && (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_901) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_902)))
					{
						FORCE_VEHICLE_CINEMATIC_CAMERA(0);
						Function_219(&iLocal_924);
						iLocal_1074 = 6;
						iLocal_1075 = 6;
						iLocal_1069 = 4;
						iLocal_1071 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_586(&iLocal_924) < 1,5f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(Global_34573);
				Function_502();
				iLocal_846 = 0;
				iLocal_1071 = 11;
			}
			break;
		
		case 0x0000000B:
			return 1;
			break;
	}
	return 0;
}

void Function_502() //Position: 0x1B207 / 111111
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AA", "MexArmy02_DrawNearBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_DrawNearBanter_v1_AB", "MexArmy02_DrawNearBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AC1", "MexArmy02_DrawNearBanter_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AC2", "MexArmy02_DrawNearBanter_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AC3", "MexArmy02_DrawNearBanter_v1_AC3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_DrawNearBanter_v1_AD", "MexArmy02_DrawNearBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AE", "MexArmy02_DrawNearBanter_v1_AE", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503(bool bParam0) //Position: 0x1B434 / 111668
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

bool Function_504(bool bParam0, bool bParam1) //Position: 0x1B44C / 111692
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

void Function_505() //Position: 0x1B53D / 111933
{
	if (!bLocal_845)
	{
		if (!iLocal_846)
		{
			if (iLocal_1069 <= 10)
			{
				if (Function_500(bLocal_636, Local_4.f_1384) <= 10.0f)
				{
					Function_489(&iLocal_644, 60.0f, 200.0f, bLocal_636, "Henchman_return", "Henchman_abandoned", &bLocal_665, 0, 0, 0, 325, 1);
					if ((!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && !IS_ACTOR_INSIDE_VEHICLE(Global_34573)) && GET_ACTOR_IN_VEHICLE_SEAT(bLocal_900, true) == Global_34573)
					{
						iLocal_842 = 0;
						iLocal_843 = 0;
						if (!iLocal_847)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_380("mexarmy02_ride_shotgun", 7,5f, 1, 2, 0, 0, 0);
							if (IS_ACTOR_VALID(bLocal_637))
							{
								if (IS_ACTOR_ALIVE(bLocal_637))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_637)))
									{
										ADD_BLIP_FOR_ACTOR(bLocal_637, 334, 0, 2, 0);
									}
								}
							}
							iLocal_847 = 1;
						}
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
						}
						if (IS_VOLUME_VALID((*&Local_4 + 904)[0]))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 904)[0])))
							{
								Function_215((*&Local_4 + 904)[0]);
							}
						}
						if (!IS_BLIP_VALID(Function_506(6)))
						{
							Function_313(6, 1, 1);
						}
					}
					else if ((!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && IS_ACTOR_INSIDE_VEHICLE(Global_34573)) && GET_ACTOR_IN_VEHICLE_SEAT(bLocal_900, true) != Global_34573)
					{
						iLocal_842 = 0;
						iLocal_843 = 1;
						if (iLocal_872 && IS_ACTOR_INSIDE_VEHICLE(bLocal_636))
						{
							if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
							{
								bLocal_905 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
								iLocal_1071 = 1;
							}
						}
						if (IS_BLIP_VALID(Function_506(6)))
						{
							Function_313(6, 0, 1);
						}
						if (IS_ACTOR_VALID(bLocal_637))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_637)))
							{
								Function_215(bLocal_637);
							}
						}
						if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 904)[0])))
						{
							ADD_BLIP_FOR_OBJECT((*&Local_4 + 904)[0], 330, 0f, 2, 0);
						}
						if (iLocal_847)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_380("mexarmy02_obj_ride_with_desanta", 7,5f, 1, 2, 0, 0, 0);
							iLocal_847 = 0;
						}
					}
					else if ((IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && !IS_ACTOR_INSIDE_VEHICLE(Global_34573)) && GET_ACTOR_IN_VEHICLE_SEAT(bLocal_900, true) == Global_34573)
					{
						iLocal_843 = 0;
						iLocal_842 = 1;
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 904)[0])))
						{
							Function_215((*&Local_4 + 904)[0]);
						}
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_905))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_905);
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_637)))
						{
							Function_215(bLocal_637);
						}
						if (!IS_BLIP_VALID(Function_506(6)))
						{
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_900, -1.0f, -1.0f, 1, 1, 0);
							Function_313(6, 1, 1);
						}
						if (iLocal_847)
						{
							iLocal_945 = 1;
							HUD_CLEAR_OBJECTIVE();
							Function_380("mexarmy02_follow_desanta_chp", 7,5f, 1, 2, 0, 0, 0);
							iLocal_847 = 0;
						}
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 904)[0])))
					{
						Function_215((*&Local_4 + 904)[0]);
					}
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_637)))
					{
						Function_215(bLocal_637);
					}
					iLocal_945 = 1;
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_637)))
					{
						Function_215(bLocal_637);
					}
					if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573))
					{
						Function_313(6, 0, 1);
						HUD_CLEAR_OBJECTIVE();
						Function_380("mexarmy02_obj02c", 7,5f, 1, 2, 0, 0, 0);
					}
					CLEAR_PLAYER_CONTROL_HORSE_FOLLOW(0);
					Function_219(&iLocal_927);
					TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
					iLocal_1069 = 10;
				}
			}
		}
	}
	return;
}

var Function_506(int iParam0) //Position: 0x1B8CE / 112846
{
	return Global_8492[iParam014].f_52;
}

void Function_507() //Position: 0x1B8DD / 112861
{
	if (!DECOR_CHECK_EXIST(bLocal_518, "m_tDeSanta"))
	{
		DECOR_SET_FLOAT(bLocal_518, "m_tDeSanta", GET_CURRENT_GAME_TIME());
	}
	switch (iLocal_1069)
	{
		case 0x00000000:
			TASK_VEHICLE_ENTER(bLocal_636, bLocal_900, 1, 1);
			ACTOR_POP_NEXT_GAIT(bLocal_636, 1, false);
			Function_494();
			iLocal_1069 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bLocal_636, 53) != 1)
			{
				TASK_VEHICLE_ENTER(bLocal_636, bLocal_900, 1, 1);
			}
			if (IS_ACTOR_INSIDE_VEHICLE(bLocal_636))
			{
				TASK_CLEAR(bLocal_636);
				TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
				DECOR_SET_FLOAT(bLocal_518, "m_tDeSanta", GET_CURRENT_GAME_TIME());
				FORCE_LOOK_AT_ACTOR(bLocal_636, Global_34573, -1.0f);
				iLocal_1069 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_1069 = 3;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_901) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_902))
			{
				iLocal_1069 = 4;
			}
			break;
		
		case 0x00000004:
			if (iLocal_842 != 1 || iLocal_843 != 1)
			{
				bLocal_880 = false;
				STOP_FORCE_LOOK_AT_COORD(bLocal_636);
				bLocal_1048 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1384, 4, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_636, bLocal_1048);
				TASK_SEQUENCE_RELEASE(bLocal_1048, 1);
				Function_300(&uLocal_1062, 10, 0, 4294967295, 4294967295);
				iLocal_1069 = 5;
			}
			if (bLocal_880)
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_518, "m_tDeSanta")) < 13.0f)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_636, 24.0f))
					{
						if (iLocal_842 != 0 && iLocal_843 != 0)
						{
							bLocal_1048 = RAND_INT_RANGE(false, 10000);
							if (bLocal_1048 <= 5000)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_523();
								}
							}
							if (bLocal_1048 >= 5000)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_522();
								}
							}
							DECOR_SET_FLOAT(bLocal_518, "m_tDeSanta", GET_CURRENT_GAME_TIME());
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			Function_510();
			if (Function_500(bLocal_636, Local_4.f_1384) < 10.0f)
			{
				if (iLocal_842 != 0 && iLocal_843 != 0)
				{
					iLocal_1069 = 6;
				}
			}
			break;
		
		case 0x00000006:
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_636, 5);
			iLocal_1069 = 7;
			break;
		
		case 0x00000007:
			if (((iLocal_842 != 1 || iLocal_843 != 1) || !ACTORS_IN_RANGE(Global_34573, bLocal_636, 100.0f)) || Function_500(bLocal_636, Local_4.f_1384) >= 10.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_636);
				iLocal_1069 = 5;
			}
			break;
		
		case 0x00000008:
			TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
			iLocal_1069 = 9;
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			bLocal_1050 = Function_509(bLocal_636, 1);
			if (bLocal_1050 > 1.0f)
			{
				TASK_VEHICLE_LEAVE(bLocal_636);
				Function_508();
				iLocal_1069 = 11;
			}
			break;
		
		case 0x0000000B:
			if (GET_TASK_STATUS(bLocal_636, 55) == 0)
			{
				iLocal_1069 = 12;
			}
			break;
		
		case 0x0000000C:
			TASK_MOUNT(bLocal_636, (*&Local_4 + 656)[02], 0, 1, 2, 2147483647);
			MEMORY_PREFER_RIDING(bLocal_636, false);
			iLocal_1069 = 13;
			break;
		
		case 0x0000000D:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_636))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_636, false);
				bLocal_903 = GET_MOUNT(bLocal_636);
				SET_ACTORS_HORSE(bLocal_636, bLocal_903);
				bLocal_845 = true;
				iLocal_1069 = 14;
			}
			break;
		
		case 0x0000000E:
			break;
	}
	return;
}

void Function_508() //Position: 0x1BC01 / 113665
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JumpsOutFollowMe", "MexArmy02_JumpsOutFollowMe", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_509(bool bParam0, bool bParam1) //Position: 0x1BC5E / 113758
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_510() //Position: 0x1BC7D / 113789
{
	if (Function_455(bLocal_636, (*&Local_4 + 1324)[1]) > 20.0f && !iLocal_866)
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		iLocal_1064 = 8;
		iLocal_866 = 1;
	}
	if (Function_455(bLocal_636, (*&Local_4 + 1324)[1]) > 100.0f)
	{
		iLocal_872 = 0;
	}
	if (ACTORS_IN_RANGE(Global_34573, bLocal_636, 30.0f))
	{
		if (iLocal_863[1])
		{
			Function_521();
			iLocal_863[1] = 0;
		}
		if (iLocal_843 || iLocal_842)
		{
			iLocal_863[0] = 0;
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_392(&iLocal_927))
				{
					Function_441(&iLocal_927);
				}
			}
			else
			{
				if (iLocal_868)
				{
					iLocal_868 = 0;
				}
				if (!Function_392(&iLocal_927))
				{
					Function_219(&iLocal_927);
				}
				if (Function_586(&iLocal_927) < 3,5f)
				{
					switch (iLocal_1064)
					{
						case 0x00000000:
							if (Function_586(&iLocal_927) < 7,5f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									if (iLocal_842)
									{
										Function_520();
									}
									else if (iLocal_843)
									{
										Function_519();
									}
									iLocal_1064 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v1_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									Function_518();
									iLocal_1064 = 2;
								}
							}
							else
							{
								iLocal_1064 = 2;
							}
							break;
						
						case 0x00000002:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v2_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									Function_517();
									iLocal_1064 = 3;
								}
							}
							else
							{
								iLocal_1064 = 3;
							}
							break;
						
						case 0x00000003:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v3_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									Function_516();
									iLocal_1064 = 4;
								}
							}
							else
							{
								iLocal_1064 = 4;
							}
							break;
						
						case 0x00000004:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v4_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									Function_515();
									iLocal_1064 = 5;
								}
							}
							else
							{
								iLocal_1064 = 5;
							}
							break;
						
						case 0x00000005:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v5_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									Function_514();
									iLocal_1064 = 6;
								}
							}
							else
							{
								iLocal_1064 = 6;
							}
							break;
						
						case 0x00000006:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v6_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_868 = 1;
									Function_513();
									iLocal_1064 = 7;
								}
							}
							else
							{
								iLocal_1064 = 7;
							}
							break;
						
						case 0x00000007:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_868 = 1;
								Function_512();
								iLocal_1064 = 9;
							}
							break;
						
						case 0x00000008:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_868 = 1;
								Function_502();
								iLocal_1064 = 9;
							}
							break;
						
						case 0x00000009:
							break;
						}
					}
			}
		}
		else if (!iLocal_863[0])
		{
			if (Function_447())
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_JumpsOutOfWagChu", "MexArmy02_JumpsOutOfWagChu", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_GetsOffHorsChup", "MexArmy02_GetsOffHorsChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
			}
			iLocal_863[0] = 1;
		}
	}
	else if (!iLocal_863[1])
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		Function_511();
		iLocal_863[1] = 1;
	}
	return;
}

void Function_511() //Position: 0x1C050 / 114768
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonRunsOffWag", "MexArmy02_JonRunsOffWag", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1C0A7 / 114855
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_NoMoreTalk", "MexArmy02_NoMoreTalk", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1C0F8 / 114936
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AA", "MexArmy02_Banter2Chupa_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AB", "MexArmy02_Banter2Chupa_v6_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AC", "MexArmy02_Banter2Chupa_v6_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AD", "MexArmy02_Banter2Chupa_v6_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AE1", "MexArmy02_Banter2Chupa_v6_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AE2", "MexArmy02_Banter2Chupa_v6_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AF", "MexArmy02_Banter2Chupa_v6_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AG1", "MexArmy02_Banter2Chupa_v6_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AG2", "MexArmy02_Banter2Chupa_v6_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AG3", "MexArmy02_Banter2Chupa_v6_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AH", "MexArmy02_Banter2Chupa_v6_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AI1", "MexArmy02_Banter2Chupa_v6_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AI2", "MexArmy02_Banter2Chupa_v6_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AI3", "MexArmy02_Banter2Chupa_v6_AI3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AJ", "MexArmy02_Banter2Chupa_v6_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AK1", "MexArmy02_Banter2Chupa_v6_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AK2", "MexArmy02_Banter2Chupa_v6_AK2", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1C5DD / 116189
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AA", "MexArmy02_Banter2Chupa_v5_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AB", "MexArmy02_Banter2Chupa_v5_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AC", "MexArmy02_Banter2Chupa_v5_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AD", "MexArmy02_Banter2Chupa_v5_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AE", "MexArmy02_Banter2Chupa_v5_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AF", "MexArmy02_Banter2Chupa_v5_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AG", "MexArmy02_Banter2Chupa_v5_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AH", "MexArmy02_Banter2Chupa_v5_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AI1", "MexArmy02_Banter2Chupa_v5_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AI2", "MexArmy02_Banter2Chupa_v5_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AI3", "MexArmy02_Banter2Chupa_v5_AI3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AJ", "MexArmy02_Banter2Chupa_v5_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AK", "MexArmy02_Banter2Chupa_v5_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AL", "MexArmy02_Banter2Chupa_v5_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AM1", "MexArmy02_Banter2Chupa_v5_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AM2", "MexArmy02_Banter2Chupa_v5_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AM3", "MexArmy02_Banter2Chupa_v5_AM3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AN", "MexArmy02_Banter2Chupa_v5_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_590", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AO1", "MexArmy02_Banter2Chupa_v5_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AO2", "MexArmy02_Banter2Chupa_v5_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AP", "MexArmy02_Banter2Chupa_v5_AP", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AQ", "MexArmy02_Banter2Chupa_v5_AQ", true, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1CC3F / 117823
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AA", "MexArmy02_Banter2Chupa_v4_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AB1", "MexArmy02_Banter2Chupa_v4_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AB2", "MexArmy02_Banter2Chupa_v4_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AB3", "MexArmy02_Banter2Chupa_v4_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AC", "MexArmy02_Banter2Chupa_v4_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AD1", "MexArmy02_Banter2Chupa_v4_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AD2", "MexArmy02_Banter2Chupa_v4_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AE", "MexArmy02_Banter2Chupa_v4_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AF1", "MexArmy02_Banter2Chupa_v4_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AF2", "MexArmy02_Banter2Chupa_v4_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AG", "MexArmy02_Banter2Chupa_v4_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AH1", "MexArmy02_Banter2Chupa_v4_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AH2", "MexArmy02_Banter2Chupa_v4_AH2", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1D006 / 118790
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AA", "MexArmy02_Banter2Chupa_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AB", "MexArmy02_Banter2Chupa_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AC1", "MexArmy02_Banter2Chupa_v3_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AC2", "MexArmy02_Banter2Chupa_v3_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AD", "MexArmy02_Banter2Chupa_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AE1", "MexArmy02_Banter2Chupa_v3_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AE2", "MexArmy02_Banter2Chupa_v3_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AF", "MexArmy02_Banter2Chupa_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AG", "MexArmy02_Banter2Chupa_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AH", "MexArmy02_Banter2Chupa_v3_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AI", "MexArmy02_Banter2Chupa_v3_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AJ1", "MexArmy02_Banter2Chupa_v3_AJ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AJ2", "MexArmy02_Banter2Chupa_v3_AJ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AK", "MexArmy02_Banter2Chupa_v3_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AL", "MexArmy02_Banter2Chupa_v3_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AM1", "MexArmy02_Banter2Chupa_v3_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AM2", "MexArmy02_Banter2Chupa_v3_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AM3", "MexArmy02_Banter2Chupa_v3_AM3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AN", "MexArmy02_Banter2Chupa_v3_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AO", "MexArmy02_Banter2Chupa_v3_AO", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AP", "MexArmy02_Banter2Chupa_v3_AP", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AQ1", "MexArmy02_Banter2Chupa_v3_AQ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AQ2", "MexArmy02_Banter2Chupa_v3_AQ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4400", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AR", "MexArmy02_Banter2Chupa_v3_AR", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AS1", "MexArmy02_Banter2Chupa_v3_AS1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AS2", "MexArmy02_Banter2Chupa_v3_AS2", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517() //Position: 0x1D78F / 120719
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AA", "MexArmy02_Banter2Chupa_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AB", "MexArmy02_Banter2Chupa_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AC", "MexArmy02_Banter2Chupa_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AD", "MexArmy02_Banter2Chupa_v2_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AE1", "MexArmy02_Banter2Chupa_v2_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AE2", "MexArmy02_Banter2Chupa_v2_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AF", "MexArmy02_Banter2Chupa_v2_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AG1", "MexArmy02_Banter2Chupa_v2_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AG2", "MexArmy02_Banter2Chupa_v2_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AG3", "MexArmy02_Banter2Chupa_v2_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AH", "MexArmy02_Banter2Chupa_v2_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AI", "MexArmy02_Banter2Chupa_v2_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AJ", "MexArmy02_Banter2Chupa_v2_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AK", "MexArmy02_Banter2Chupa_v2_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AL", "MexArmy02_Banter2Chupa_v2_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AM", "MexArmy02_Banter2Chupa_v2_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AN", "MexArmy02_Banter2Chupa_v2_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AO1", "MexArmy02_Banter2Chupa_v2_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AO2", "MexArmy02_Banter2Chupa_v2_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AO3", "MexArmy02_Banter2Chupa_v2_AO3", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_518() //Position: 0x1DD45 / 122181
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AA", "MexArmy02_Banter2Chupa_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AB", "MexArmy02_Banter2Chupa_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AC1", "MexArmy02_Banter2Chupa_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AC2", "MexArmy02_Banter2Chupa_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AC3", "MexArmy02_Banter2Chupa_v1_AC3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AD", "MexArmy02_Banter2Chupa_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AE1", "MexArmy02_Banter2Chupa_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AE2", "MexArmy02_Banter2Chupa_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AF", "MexArmy02_Banter2Chupa_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AG1", "MexArmy02_Banter2Chupa_v1_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AG2", "MexArmy02_Banter2Chupa_v1_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AH", "MexArmy02_Banter2Chupa_v1_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AI1", "MexArmy02_Banter2Chupa_v1_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AI2", "MexArmy02_Banter2Chupa_v1_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AI3", "MexArmy02_Banter2Chupa_v1_AI3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AJ1", "MexArmy02_Banter2Chupa_v1_AJ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AJ2", "MexArmy02_Banter2Chupa_v1_AJ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AK1", "MexArmy02_Banter2Chupa_v1_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AK2", "MexArmy02_Banter2Chupa_v1_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AK3", "MexArmy02_Banter2Chupa_v1_AK3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AL", "MexArmy02_Banter2Chupa_v1_AL", true, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1E350 / 123728
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonGetsOnWag", "MexArmy02_JonGetsOnWag", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_520() //Position: 0x1E3A5 / 123813
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonMounts", "MexArmy02_JonMounts", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_521() //Position: 0x1E3F4 / 123892
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ComesBakChup", "MexArmy02_ComesBakChup", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1E449 / 123977
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_WaitingGetOnWagOr", "MexArmy02_WaitingGetOnWagOr", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1E4A8 / 124072
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonNoFollow", "MexArmy02_JonNoFollow", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x1E4FB / 124155
{
	if (!IS_DOOR_VALID(uLocal_954[0]))
	{
		uLocal_954[0] = Function_525(Global_30685[0], "escalara02", "villaWall04", 1);
	}
	if (!IS_DOOR_VALID(uLocal_954[1]))
	{
		uLocal_954[1] = Function_525(Global_30685[0], "escalara02", "villaWall04", 2);
	}
	if (iLocal_633 < 3)
	{
		GET_OBJECT_POSITION(Global_34573, &vLocal_833);
		if (IS_DOOR_VALID(uLocal_954[0]))
		{
			if (!IS_DOOR_OPENED(uLocal_954[0]))
			{
				Function_154(uLocal_954[0], 1);
				OPEN_DOOR_FAST(uLocal_954[0], &vLocal_833);
			}
		}
		if (IS_DOOR_VALID(uLocal_954[1]))
		{
			if (!IS_DOOR_OPENED(uLocal_954[1]))
			{
				Function_154(uLocal_954[1], 1);
				OPEN_DOOR_FAST(uLocal_954[1], &vLocal_833);
			}
		}
	}
	else
	{
		if (IS_DOOR_VALID(uLocal_954[0]))
		{
			Function_121(uLocal_954[0], 1);
		}
		if (IS_DOOR_VALID(uLocal_954[1]))
		{
			Function_121(uLocal_954[1], 1);
		}
	}
	return;
}

var Function_525(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x1E60F / 124431
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_82(iParam0))
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

void Function_526() //Position: 0x1E6AB / 124587
{
	switch (iLocal_633)
	{
		case 0x00000006:
			Function_546(&Local_520, 1);
			Function_194(4194304);
			Function_130(&(Global_29008[Global_30693[0]]), 256);
			bLocal_518 = CREATE_LAYOUT("m_DynamicLayout");
			Function_545();
			SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(61.0f);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			DISABLE_WORLD_SECTOR("butterBridgeB");
			DISABLE_WORLD_SECTOR("butterBridgeA");
			ENABLE_WORLD_SECTOR("butterBridgeC");
			ENABLE_WORLD_SECTOR("butterBridgeD");
			ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
			if (!Function_273(&Local_520))
			{
				TELEPORT_ACTOR(Global_34573, &Global_3422[2640] + 52, 1, 1, 1);
				bLocal_1048 = false;
				while (bLocal_1048 < 5)
				{
					(*&Global_34165 + 68)[bLocal_1048] = 0;
					bLocal_1048++;
				}
				iLocal_633 = 7;
			}
			else
			{
				Function_189(1, 0, 1);
				iLocal_633 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_219(&iLocal_638);
				iLocal_633 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_633 = 9;
			break;
		
		case 0x00000009:
			Unknown_Function();
			Unknown_Function();
			if (StackVal && StackVal)
			{
				iLocal_633 = 12;
				iLocal_633 = 12;
			}
			break;
		
		case 0x0000000C:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_635 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			RESET_ACTOR_GAITS(bLocal_636, 0);
			SET_CRIPPLE_ENABLE(bLocal_636, 0);
			SET_ACTOR_FACTION(bLocal_636, 20);
			TASK_PRIORITY_SET(bLocal_636, true);
			TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_636, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_636, 50.0f);
			SET_ACTOR_HEALTH(bLocal_636, GET_ACTOR_MAX_HEALTH(bLocal_636));
			SET_ACTOR_INVULNERABILITY(bLocal_636, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_636, 0);
			RESET_ACTOR_GAITS(bLocal_637, 0);
			TASK_PRIORITY_SET(bLocal_637, true);
			TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_637, 50.0f);
			SET_ACTOR_HEALTH(bLocal_637, GET_ACTOR_MAX_HEALTH(bLocal_637));
			Function_531();
			Function_374(&iLocal_638);
			Function_374(&iLocal_641);
			Function_374(&iLocal_644);
			Function_374(&uLocal_647);
			Function_374(&uLocal_921);
			Function_374(&uLocal_650);
			Function_374(&iLocal_924);
			Function_374(&uLocal_936);
			Function_374(&uLocal_939);
			Function_374(&iLocal_912);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 792)[3]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 792)[3]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 792)[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 792)[3], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 792)[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 792)[0]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 792)[0]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 792)[0], 15);
			Function_530(&(Local_707[517]), bLocal_518, 0x5f5e100);
			iLocal_632 = 0;
			iLocal_633 = 0;
			Function_528(&Local_520, &iLocal_632, &iLocal_633);
			Function_527(StackVal, StackVal, StackVal, StackVal, StackVal, Function_536(), Local_520);
			switch (iLocal_632)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
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

void Function_527(struct<25> Param0) //Position: 0x1E9D5 / 125397
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_632 = 0;
			break;
		
		case 0x00000002:
			iLocal_632 = 2;
			break;
		
		case 0x0000000A:
			iLocal_632 = 101;
			break;
	}
}

void Function_528(int iParam0, var uParam1, int iParam2) //Position: 0x1EA0E / 125454
{
	if (Function_273(iParam0))
	{
		*uParam1 = Function_358(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_529();
	}
	return;
}

void Function_529() //Position: 0x1EA42 / 125506
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

int Function_530(int iParam0, bool bParam1, int iParam2) //Position: 0x1EA93 / 125587
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Layout invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		if (GET_OBJECT_TYPE(*iParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*iParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*iParam0);
			}
		}
	}
	Function_76();
	Function_76();
	*iParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "nMFT_Dummy", Function_76(), Function_76());
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	iParam0->f_28 = 8;
	iParam0->f_32 = 2;
	if (!Function_421(iParam0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_420(iParam0, 0);
	iParam0->f_40 = 0;
	Function_419(iParam0, iParam2, 0);
	Function_414(iParam0, 3);
	return 1;
}

void Function_531() //Position: 0x1EBA4 / 125860
{
	UNK_0xAC72E757(1);
	iLocal_949 = 6;
	iLocal_951 = 6;
	uLocal_899 = uLocal_899;
	uLocal_904 = uLocal_904;
	Function_535();
	Function_534();
	Function_532(&uLocal_667, bLocal_518);
	Function_418(&(Local_707[017]), bLocal_636, "Henchman", 0, 0x5f5e100, 1);
	Function_414(&(Local_707[217]), 2);
	bLocal_1057 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sMexCavEscortTrain"));
	bLocal_1058 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sMexCavReturn"));
	bLocal_1052 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sRebelInf"));
	bLocal_1056 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sRebCavAprRight"));
	bLocal_1055 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sRebCavAprLeft"));
	bLocal_1053 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sRebCavAttRight"));
	bLocal_1054 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "m_sRebCavAttLeft"));
	return;
}

int Function_532(var uParam0, bool bParam1) //Position: 0x1ECCD / 126157
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_533(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_533(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_533(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_533(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_533(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1F36D / 127853
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
	Function_77(iParam0 + 8, iParam4);
	return 1;
}

void Function_534() //Position: 0x1F430 / 128048
{
	Function_130(&(Global_29008[Global_30693[1]]), 256);
	return;
}

void Function_535() //Position: 0x1F447 / 128071
{
	Function_130(&(Global_29008[Global_30693[0]]), 256);
	return;
}

var Function_536() //Position: 0x1F45E / 128094
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	Function_327(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("MexArmy02_layout");
	Local_4.f_820 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage05Vols_set");
	(*&Local_4 + 792)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ButterBridgeVol", 2, 76,89383f, 93,48872f, 2825,198f, 0.0f, 16,93603f, 0.0f, 87,01794f, 16,48365f, 181,6171f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 792)[0]);
	(*&Local_4 + 792)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "vSetupBridge", 2, 32,59366f, 99,26919f, 2748,913f, 0.0f, 0.0f, 0.0f, 100.0f, 63,381f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 792)[1]);
	(*&Local_4 + 792)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "vCliffFallCheck", 2, -203,548f, 61,9703f, 3020,06f, 0.0f, 0.0f, 4,8f, 457,1776f, 1.0f, 480.0f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 792)[2]);
	(*&Local_4 + 792)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "barcutvol12", 2, -790,8101f, 14,85291f, 3700,328f, 180.0f, 46,25484f, -2,595867f, 25,99133f, 8,770638f, 34,4641f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 792)[3]);
	(*&Local_4 + 792)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "bridgewarningvol", 2, -17,57545f, 91,73593f, 3065,563f, 0.0f, 16,93603f, 0.0f, 63,57737f, 16,48365f, 58,1548f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 792)[4]);
	(*&Local_4 + 792)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "streamingtrigger", 2, -610,8046f, 14,86721f, 3537,383f, 0.0f, 16,93603f, 0.0f, 116,5265f, 29,26781f, 58,1548f);
	ADD_TO_VOLUME_SET(Local_4.f_820, (*&Local_4 + 792)[5]);
	Local_4.f_844 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 824)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CUTSCENE01VOL", 2, -4380,061f, 38,12237f, 4362,101f, 0.0f, 0.0f, 0.0f, 100.0f, 50.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_844, (*&Local_4 + 824)[0]);
	(*&Local_4 + 824)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CUTSCENE02VOL_DEL", 2, -2626,85f, 30,14538f, 4221,708f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_4.f_844, (*&Local_4 + 824)[1]);
	(*&Local_4 + 824)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CUTSCENELASTVOL", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_4.f_844, (*&Local_4 + 824)[2]);
	(*&Local_4 + 824)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CS03Vol", 2, -784.0f, 13,05098f, 3728.0f, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	ADD_TO_VOLUME_SET(Local_4.f_844, (*&Local_4 + 824)[3]);
	Local_4.f_884 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "AmbushTriggers_set");
	(*&Local_4 + 848)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush01", 2, -2297,543f, 6,023549f, 4333,28f, 0.0f, 0.0f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[0]);
	(*&Local_4 + 848)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush02", 2, -2089,403f, 8,963179f, 4349,574f, 0.0f, 0.0f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[1]);
	(*&Local_4 + 848)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush03", 2, -1896,553f, 9,812302f, 4390,323f, 0.0f, 0.0f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[2]);
	(*&Local_4 + 848)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush04", 2, -1723,727f, 9,449072f, 4357,43f, 0.0f, 22,27736f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[3]);
	(*&Local_4 + 848)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush05", 2, -1347,181f, 21,73684f, 4148,004f, 0.0f, 39,9031f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[4]);
	(*&Local_4 + 848)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush06", 2, -1252f, 11,04314f, 4104.0f, 0.0f, 22,30208f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[5]);
	(*&Local_4 + 848)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush07", 2, -1124.0f, 8,907719f, 4032f, 0.0f, 26,78057f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[6]);
	(*&Local_4 + 848)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush08", 2, -1659,636f, 5,687636f, 4303,198f, 0.0f, 24,09918f, 0.0f, 10.0f, 25.0f, 350.0f);
	ADD_TO_VOLUME_SET(Local_4.f_884, (*&Local_4 + 848)[7]);
	Local_4.f_900 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "UseContext_set");
	(*&Local_4 + 888)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "vTrainBreakLever_del", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2,75f, 3.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_4.f_900, (*&Local_4 + 888)[0]);
	(*&Local_4 + 888)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "vHelpText01", 2, -699,7909f, 13,37628f, 3712,787f, 0.0f, -41,39167f, 0.0f, 276,6093f, 25.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_900, (*&Local_4 + 888)[1]);
	Local_4.f_916 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Volumes_Stage_01_set");
	(*&Local_4 + 904)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_arriveChuparosa", 2, -2772.0f, 32,12549f, 4272f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_916, (*&Local_4 + 904)[0]);
	(*&Local_4 + 904)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_escortsReady", 2, -4401,135f, 35,9181f, 4389,286f, -1,149884f, -14,54725f, 2,45635f, 28,98095f, 15.0f, 25,28393f);
	ADD_TO_VOLUME_SET(Local_4.f_916, (*&Local_4 + 904)[1]);
	Local_4.f_948 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Volumes_Stage_02_set");
	(*&Local_4 + 920)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_Madrugada", 2, -802,6964f, 13,05098f, 3717,776f, 0.0f, 46,25484f, 0.0f, 4.0f, 15.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 920)[0]);
	(*&Local_4 + 920)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_StartFollowTrain", 2, -2697,189f, 32,21368f, 4207,891f, 0.0f, 89,93345f, 0.0f, 40.0f, 40.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 920)[1]);
	(*&Local_4 + 920)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_MadrugadaMexHenchIdle", 2, -756.0f, 13,05098f, 3780f, 0.0f, 51,79411f, 0.0f, 15.0f, 15.0f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 920)[2]);
	(*&Local_4 + 920)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_MadrugadaStation", 2, -778,7966f, 13,05098f, 3762,057f, 0.0f, 51,79411f, 0.0f, 250.0f, 50.0f, 250.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 920)[3]);
	(*&Local_4 + 920)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_StartFollowTrain1", 2, -2531,406f, 23,05175f, 4315,438f, 0.0f, 89,93345f, 0.0f, 40.0f, 40.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 920)[5]);
	Local_4.f_952 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 956)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -4378,868f, 38,70368f, 4360,778f, 0.0f, -211,2164f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[0], Local_4.f_952);
	(*&Local_4 + 956)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -4378,868f, 38,70368f, 4360,778f, 0.0f, -249,79f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[1], Local_4.f_952);
	(*&Local_4 + 956)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONStart01", -4378,173f, 38,70368f, 4361,199f, 0.0f, -208,8032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[2], Local_4.f_952);
	(*&Local_4 + 956)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONEnd01", -4379,357f, 38,63703f, 4363,291f, 0.0f, 99,17556f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[3], Local_4.f_952);
	(*&Local_4 + 956)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -4399,859f, 37,82392f, 4355,609f, 0.0f, 228,3658f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[4], Local_4.f_952);
	(*&Local_4 + 956)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CheechEnd01", -4374,239f, 38,63691f, 4363,335f, 0.0f, 88,87958f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[5], Local_4.f_952);
	(*&Local_4 + 956)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "ChongEnd01", -4376,032f, 38,8423f, 4363,623f, 0.0f, 111,5438f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[6], Local_4.f_952);
	Local_4.f_988 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 992)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -2766,104f, 32,12549f, 4260f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[0], Local_4.f_988);
	(*&Local_4 + 992)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -2766,104f, 32,12549f, 4260f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[1], Local_4.f_988);
	(*&Local_4 + 992)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONStart02", -2776.0f, 32,12549f, 4268f, 0.0f, -40,91803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[2], Local_4.f_988);
	(*&Local_4 + 992)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONEnd02", -2776.0f, 32,12549f, 4268f, 0.0f, -42,4044f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[3], Local_4.f_988);
	(*&Local_4 + 992)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -2766,657f, 32,12549f, 4269,344f, 0.0f, -0,7896745f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[4], Local_4.f_988);
	(*&Local_4 + 992)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -2780f, 32,12549f, 4268f, 0.0f, -10,47389f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[5], Local_4.f_988);
	(*&Local_4 + 992)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart02", -2772f, 32,12549f, 4268f, 0.0f, -5,729618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[6], Local_4.f_988);
	(*&Local_4 + 992)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "ChuparosaGateway", -2768f, 32,9883f, 4268f, 0.0f, -51,17885f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[7], Local_4.f_988);
	(*&Local_4 + 992)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Soldier01Wait", -2776f, 31,12157f, 4256f, 0.0f, -29,46655f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[8], Local_4.f_988);
	(*&Local_4 + 992)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Soldier02Wait", -2764f, 32,12549f, 4256f, 0.0f, 36,87042f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 992)[9], Local_4.f_988);
	Local_4.f_1036 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1040)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -791,765f, 13,05097f, 3711,603f, 0.0f, 120.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1040)[0], Local_4.f_1036);
	(*&Local_4 + 1040)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONStart03", -800.0f, 13,05097f, 3720f, 0.0f, 249,0625f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1040)[1], Local_4.f_1036);
	(*&Local_4 + 1040)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONEnd03", -792.0f, 13,05097f, 3700f, 0.0f, 231,3009f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1040)[2], Local_4.f_1036);
	(*&Local_4 + 1040)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -803,905f, 13,05098f, 3710,75f, 0.0f, -130,19f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1040)[3], Local_4.f_1036);
	(*&Local_4 + 1040)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "compdesination", -808,3735f, 13,05097f, 3714,888f, 0.0f, 405,4241f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1040)[4], Local_4.f_1036);
	Local_4.f_1064 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene09Set", Local_4, 8, 0);
	(*&Local_4 + 1068)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart09", 72,00002f, 94,41074f, 2864.0f, 0.0f, 353,304f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1068)[0], Local_4.f_1064);
	(*&Local_4 + 1068)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart09", 72,00004f, 91,54297f, 2960.0f, 0.0f, -10,1075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1068)[1], Local_4.f_1064);
	(*&Local_4 + 1068)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd09", 51,74f, 94,56f, 2775,7f, 0.0f, 217,8f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1068)[2], Local_4.f_1064);
	(*&Local_4 + 1068)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONStart09", 72,00003f, 94,22006f, 2860,001f, 0.0f, -10,1075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1068)[3], Local_4.f_1064);
	(*&Local_4 + 1068)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONEnd09", 68,00005f, 94,87612f, 2900.0f, 0.0f, 15,62845f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1068)[4], Local_4.f_1064);
	(*&Local_4 + 1068)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStart09", 60,41062f, 94,36859f, 2800,281f, 0.0f, 15,62845f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1068)[5], Local_4.f_1064);
	Local_4.f_1096 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 1100)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PLAYERSTARTLAST", 48,0001f, 94,36859f, 2780.0f, 0.0f, -40,22651f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1100)[0], Local_4.f_1096);
	(*&Local_4 + 1100)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PLAYERENDLAST", 49,84208f, 94,50358f, 2771,754f, 0.0f, -143,0651f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1100)[1], Local_4.f_1096);
	(*&Local_4 + 1100)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONSTARTLAST", 46,33875f, 94,36859f, 2779,184f, 0.0f, 314,7603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1100)[2], Local_4.f_1096);
	(*&Local_4 + 1100)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "COMPANIONENDLAST", 46,33875f, 94,36859f, 2779,184f, 0.0f, 314,7603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1100)[3], Local_4.f_1096);
	Local_4.f_1120 = CREATE_OBJECTSET_IN_LAYOUT("TrainPointsSet", Local_4, 8, 0);
	(*&Local_4 + 1124)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "fChuparosaStation", -2635,951f, 31,45428f, 4229,752f, 0.0f, 243,9694f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[0], Local_4.f_1120);
	(*&Local_4 + 1124)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "fCasaMadrugadaStation", -771,559f, 13,43f, 3763,302f, 0.0f, 309,0989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[1], Local_4.f_1120);
	(*&Local_4 + 1124)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "fHeadStart", -636,0233f, 15,31186f, 3582,619f, 0.0f, 350.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[2], Local_4.f_1120);
	(*&Local_4 + 1124)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "fButterBridgeStop", 51,55246f, 94,87237f, 2767,482f, 0.0f, 30.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[3], Local_4.f_1120);
	(*&Local_4 + 1124)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "fButterBridgeStart", 75,50539f, 94,10248f, 2807,585f, 0.0f, 20.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[4], Local_4.f_1120);
	(*&Local_4 + 1124)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "fButterBridgeStop1", 32,74274f, 94,386f, 2740,854f, 0.0f, 30.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[5], Local_4.f_1120);
	(*&Local_4 + 1124)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "fButterBridgeGoodStart", 48,432f, 94,704f, 2763,485f, 0.0f, -182,2088f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[6], Local_4.f_1120);
	(*&Local_4 + 1124)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "fHermanasStation", -1646,272f, 7,684686f, 4282,329f, 0.0f, 320,1085f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1124)[7], Local_4.f_1120);
	Local_4.f_1160 = CREATE_OBJECTSET_IN_LAYOUT("FlagStage06Set", Local_4, 8, 0);
	(*&Local_4 + 1164)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "fBridgePart00", 27,04836f, 93,348f, 2733,187f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[0], Local_4.f_1160);
	(*&Local_4 + 1164)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "fBridgePart01", 42,356f, 94,338f, 2754,992f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[1], Local_4.f_1160);
	(*&Local_4 + 1164)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "fBridgePart02", 34,1716f, 94,39109f, 2745,927f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[2], Local_4.f_1160);
	(*&Local_4 + 1164)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "fBridgePart03", 17,95124f, 88,47893f, 2729,693f, 0.0f, 40,8548f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[3], Local_4.f_1160);
	(*&Local_4 + 1164)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "fBridgePart04", 4,349076f, 0.0f, -4,249575f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[4], Local_4.f_1160);
	(*&Local_4 + 1164)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "fBridgeEffectCenterpoint", 31,507f, 94,386f, 2741,567f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[5], Local_4.f_1160);
	Local_4.f_1192 = CREATE_OBJECTSET_IN_LAYOUT("TrainGringoLocatorsSet", Local_4, 8, 0);
	*(&Local_4 + 1196[06]) = { -0,9528465f, 1,14288f, 4,973906f };
	*(&Local_4 + 1196[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "fSteamer01", -0,9528465f, 1,14288f, 4,973906f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1192);
	*(&Local_4 + 1196[16]) = { 0,9285078f, 1,14288f, 4,973906f };
	*(&Local_4 + 1196[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "fSteamer02", 0,9285078f, 1,14288f, 4,973906f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1192);
	*(&Local_4 + 1196[26]) = { 0,011f, 1,419f, 3,13f };
	*(&Local_4 + 1196[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "fTrainBreakLever", 0,011f, 1,419f, 3,13f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1192);
	*(&Local_4 + 1196[36]) = { -1.0f, 0,9787322f, 3,297404f };
	*(&Local_4 + 1196[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "fCaboose01", -1.0f, 0,9787322f, 3,297404f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_1192);
	*(&Local_4 + 1196[46]) = { 1.0f, 0,9787322f, 3,297404f };
	*(&Local_4 + 1196[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "fCaboose02", 1.0f, 0,9787322f, 3,297404f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_1192);
	Local_4.f_1320 = CREATE_OBJECTSET_IN_LAYOUT("FlagStage01Set", Local_4, 8, 0);
	(*&Local_4 + 1324)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "lookoutpoint", -2560.0f, 28,85841f, 4268f, 0.0f, -118,0525f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[0], Local_4.f_1320);
	(*&Local_4 + 1324)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonNapTeleport", -2792,23f, 30,87127f, 4442,212f, 0.0f, 34,33389f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[1], Local_4.f_1320);
	(*&Local_4 + 1324)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Soldier01NapTeleport", -2800,298f, 30,95926f, 4416,535f, 0.0f, -13,74221f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[2], Local_4.f_1320);
	(*&Local_4 + 1324)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Soldier02NapTeleport", -2793,436f, 30,95926f, 4405,797f, 0.0f, -14,49776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1324)[3], Local_4.f_1320);
	Local_4.f_1344 = CREATE_GRINGO_IN_LAYOUT(Local_4, "jump_from_horse", "jump_from_horse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1348 = CREATE_GRINGO_IN_LAYOUT(Local_4, "jump_from_horse1", "jump_from_horse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1352 = CREATE_GRINGO_IN_LAYOUT(Local_4, "jump_from_horse2", "jump_from_horse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1356 = CREATE_GRINGO_IN_LAYOUT(Local_4, "jump_from_horse3", "jump_from_horse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1360 = CREATE_GRINGO_IN_LAYOUT(Local_4, "train_lever", "train_lever", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1364 = CREATE_GRINGO_IN_LAYOUT(Local_4, "train_climb_left", "train_climb_left", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1368 = CREATE_GRINGO_IN_LAYOUT(Local_4, "train_climb_right", "train_climb_right", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}

void Function_537(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x22451 / 140369
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

var Function_538(int iParam0, bool bParam1) //Position: 0x224A5 / 140453
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_409(iParam0))
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
						Function_539(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_539(bool bParam0, bool bParam1) //Position: 0x22525 / 140581
{
	Function_541(bParam0);
	Function_540(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_540(bool bParam0) //Position: 0x2254B / 140619
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_541(bool bParam0) //Position: 0x2256F / 140655
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

var Function_542(int iParam0, bool bParam1) //Position: 0x2263E / 140862
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

int Function_543() //Position: 0x226D1 / 141009
{
	Function_361(&Local_4 + 4, 380, 2, 0);
	Function_361(&Local_4 + 4, 381, 2, 0);
	Function_361(&Local_4 + 4, 976, 2, 0);
	Function_361(&Local_4 + 4, 977, 2, 0);
	Function_361(&Local_4 + 4, 980, 2, 0);
	Function_361(&Local_4 + 4, 1196, 2, 0);
	Function_325(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	Function_325(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/train_lever", 1, 0);
	Function_325(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_325(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (Function_320(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

int Function_544(bool bParam0) //Position: 0x22841 / 141377
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

void Function_545() //Position: 0x2286F / 141423
{
	Function_361(&bLocal_527, 1166, 2, 0);
	Function_361(&bLocal_527, 1167, 2, 0);
	Function_361(&bLocal_527, 1164, 2, 0);
	Function_361(&bLocal_527, 1156, 2, 0);
	Function_361(&bLocal_527, 1160, 2, 0);
	Function_361(&bLocal_527, 1162, 2, 0);
	Function_325(&bLocal_527, "steamerExplodeMain01x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment01x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment02x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment03x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment04x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment05x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment06x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment07x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment08x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment09x", 0, 0);
	Function_325(&bLocal_527, "steamerExplodeFragment10x", 0, 0);
	Function_325(&bLocal_527, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_325(&bLocal_527, "p_gen_crate01x", 0, 0);
	Function_325(&bLocal_527, "nmexarmy02", 10, 0);
	return;
}

void Function_546(int iParam0, bool bParam1) //Position: 0x22AAB / 141995
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_552(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_273(iParam0))
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
	if (!Function_273(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_209();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_236();
	Function_267();
	Function_225("");
	Function_551(0);
	Function_550();
	Function_202();
	Function_201();
	ENABLE_JOURNAL_REPLAY(0);
	Function_549();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_306(0, 0x40400000);
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
	Function_548(13);
	Function_548(14);
	Function_548(25);
	Function_548(24);
	Function_548(12);
	Function_548(27);
	Function_548(26);
	Function_548(15);
	Function_547();
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

void Function_547() //Position: 0x22ECF / 143055
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

void Function_548(int iParam0) //Position: 0x22F43 / 143171
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_549() //Position: 0x22F63 / 143203
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

void Function_550() //Position: 0x22FA0 / 143264
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_551(int iParam0) //Position: 0x22FB4 / 143284
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

void Function_552(int iParam0, int iParam1) //Position: 0x22FE9 / 143337
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
			Function_553(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_553(int iParam0) //Position: 0x2306B / 143467
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

bool Function_554(int iParam0) //Position: 0x230B9 / 143545
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_555(int iParam0) //Position: 0x230D7 / 143575
{
	switch (iParam0->f_16)
	{
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_565();
					break;
				
				case 0x00000001:
					if (*iParam0)
					{
						Function_564();
					}
					else
					{
						Function_563();
					}
					break;
				
				case 0x00000005:
					if (StackVal && Function_562(Function_562(StackVal) == bLocal_518) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_479();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_ShootsRandChup", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					Function_561();
					break;
				
				case 0x00000001:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_ShootsWagHorsNoKil", "MexArmy02_ShootsWagHorsNoKil", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						Function_560();
					}
					break;
				
				case 0x00000002:
					Function_559();
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000005:
					if (StackVal && Function_562(Function_562(StackVal) == bLocal_518) == Local_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_479();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_ShootsRandChup", "", false, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_AssaultsSantaChup", "MexArmy02_AssaultsSantaChup", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						Function_558();
					}
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_636, "MexArmy02_AssaultOnSantaMenChu", "MexArmy02_AssaultOnSantaMenChu", false, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						Function_557();
					}
					break;
				
				case 0x00000003:
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
			Function_556(iParam0, 1);
			return 1;
		}
	}
	Function_556(iParam0, 0);
	return 0;
}

void Function_556(int iParam0, bool bParam1) //Position: 0x233AF / 144303
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

void Function_557() //Position: 0x233D3 / 144339
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AssaultOnSantaMenChu", "MexArmy02_AssaultOnSantaMenChu", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x23438 / 144440
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AssaultsSantaChup", "MexArmy02_AssaultsSantaChup", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x23497 / 144535
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsSantaMenChu", "MexArmy02_ShootsSantaMenChu", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x234F6 / 144630
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsWagHorsNoKil", "MexArmy02_ShootsWagHorsNoKil", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561() //Position: 0x23557 / 144727
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsDeSantaChup", "MexArmy02_ShootsDeSantaChup", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_562(bool bParam0) //Position: 0x235B6 / 144822
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_563() //Position: 0x23610 / 144912
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Kills1WagHors", "MexArmy02_Kills1WagHors", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_564() //Position: 0x23667 / 144999
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_KillsWagHorsFail", "MexArmy02_KillsWagHorsFail", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_565() //Position: 0x236C4 / 145092
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_KillsSantaTrain", "MexArmy02_KillsSantaTrain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_566(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x2371F / 145183
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
		Function_556(iParam2, 0);
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
														Function_556(iParam2, 0);
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
														Function_225(&Var18);
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
	Function_556(iParam2, 0);
	return 0;
}

void Function_567(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x23AB8 / 146104
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

void Function_568(var uParam0, int iParam1, bool bParam2) //Position: 0x23BA3 / 146339
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
			Function_37(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_37(&bParam2, 2);
			break;
	}
	Function_37(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_569(bool bParam0) //Position: 0x23C19 / 146457
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_37(&iVar0, 1);
	Function_37(&iVar0, 2);
	Function_37(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_570(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23C3B / 146491
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

var Function_571(int iParam0, bool bParam1) //Position: 0x23D85 / 146821
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

bool Function_572(int iParam0) //Position: 0x23EB8 / 147128
{
	return 2 | iParam0;
}

int Function_573(int iParam0) //Position: 0x23EC2 / 147138
{
	return 4 | iParam0;
}

int Function_574(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23ECC / 147148
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
					Function_77(&iParam3, 2);
					Function_37(&iParam3, 4);
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
					Function_77(&iParam3, 2);
					Function_37(&iParam3, 4);
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

int Function_575(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23F7E / 147326
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

var Function_576(int iParam0, int iParam1, bool bParam2) //Position: 0x2413A / 147770
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_577(int iParam0, int iParam1, bool bParam2) //Position: 0x2414F / 147791
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_578(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24164 / 147812
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_579(int iParam0) //Position: 0x24181 / 147841
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

int Function_580(var uParam0, int iParam1, bool bParam2) //Position: 0x241F0 / 147952
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

int Function_581(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2440B / 148491
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
								Function_77(&iParam4, 2);
								Function_37(&iParam4, 4);
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

bool Function_582(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x246CA / 149194
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

int Function_583(int iParam0, var uParam1, bool bParam2) //Position: 0x24783 / 149379
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

bool Function_584(int iParam0, bool bParam1, bool bParam2) //Position: 0x24897 / 149655
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

int Function_585(int iParam0) //Position: 0x248BF / 149695
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

float Function_586(int iParam0) //Position: 0x248F0 / 149744
{
	if (Function_392(iParam0))
	{
		if (Function_587(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_587(bool bParam0) //Position: 0x249B8 / 149944
{
	return Function_153(*bParam0, 2);
}

void Function_588(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x249C5 / 149957
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_41())
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

