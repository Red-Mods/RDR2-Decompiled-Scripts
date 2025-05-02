//Decompiled with MagicRDR v1.0
//Function Count : 624
//Statics Count : 1019
//Natives Count : 799
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2585> Local_4 = { 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_985 = 0;
	iLocal_986 = 1;
	iLocal_989 = 0;
	iLocal_990 = 0;
	iLocal_991 = 0;
	iLocal_992 = 0;
	iLocal_1006 = 0;
	Local_653 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_723 = 99;
	bLocal_724 = 6;
	Local_716 = 1000;
	while (Function_284())
	{
		Function_214();
		WAIT(false);
	}
	Function_1();
	LOG_ERROR("Should never reach ENDSCRIPT");
	return;
}

void Function_1() //Position: 0x7E / 126
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bLocal_727))
	{
		DECOR_SET_BOOL(bLocal_727, "ForceAllowRain", false);
	}
	STOP_PED_SPEAKING(bLocal_729, 0);
	if (IS_VEHICLE_CINEMATIC_CAMERA_FORCED_ON())
	{
		FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	}
	if (IS_OBJECT_VALID(bLocal_732))
	{
		Function_213(bLocal_732);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	Function_212(bLocal_733);
	Function_212(bLocal_734[0]);
	Function_212(bLocal_734[1]);
	Function_212(bLocal_734[2]);
	AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_728, 1);
	ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 0);
	ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 0);
	ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 0);
	if (bLocal_964)
	{
		SET_ALLOW_MELEE_SPECIAL_MOVE(Global_34573, 1);
		SET_ALLOW_MELEE_SPECIAL_MOVE(bLocal_729, 1);
	}
	UNK_0xD2A140BC(0);
	Function_211(&Local_4 + 452);
	Function_211(&Local_4 + 472);
	Function_211(&Local_4 + 504);
	Function_211(&Local_4 + 536);
	Function_211(&Local_4 + 560);
	Function_211(&Local_4 + 584);
	Function_211(&Local_4 + 608);
	Function_211(&Local_4 + 648);
	Function_211(&Local_4 + 696);
	Function_210(uLocal_731);
	Function_209(&(Global_29008[Global_30717[3]]), 384);
	Function_209(&(Global_29008[Global_30717[0]]), 256);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 700)[4]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 700)[4]);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_208();
	DECOR_SET_BOOL(Global_34573, "Player_DisablePutOnHorse", false);
	DECOR_SET_BOOL(Global_34573, "corpse_loot_gringo", true);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	bVar0 = Function_206("blackwater", "policeStation", 4);
	if (IS_DOOR_VALID(bVar0))
	{
		Function_205(bVar0, 1);
	}
	bVar0 = Function_206("blackwater", "policeStation", 5);
	if (IS_DOOR_VALID(bVar0))
	{
		Function_205(bVar0, 1);
	}
	if (IS_ACTOR_VALID(bLocal_728))
	{
		DESTROY_ACTOR(bLocal_728);
	}
	if (IS_ACTOR_VALID(bLocal_730))
	{
		DESTROY_ACTOR(bLocal_730);
	}
	if (IS_ACTOR_VALID(bLocal_729))
	{
		DESTROY_ACTOR(bLocal_729);
	}
	Function_204(bLocal_652);
	Function_204(Local_4);
	Function_203();
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	Function_212(bLocal_733);
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	TOGGLE_COVER_PROPS(0);
	Function_200(10, 1, 0, 1, 1);
	DESTROY_ACTOR(bLocal_727);
	Function_174(bLocal_790, 1, 0, 0, 0, 1, 1, 1);
	Function_170();
	Function_166(&bLocal_660);
	RELEASE_LAYOUT_REF(bLocal_652);
	if (bLocal_789)
	{
		Function_24(Local_653, 1, 1, 1, 0);
	}
	else if (bLocal_790)
	{
		Function_20(Local_653);
	}
	else
	{
		Function_2(Local_653);
	}
	UI_EXIT("HealthMeter");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x3A7 / 935
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x3C8 / 968
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x3E3 / 995
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x404 / 1028
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x41A / 1050
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

void Function_7(int iParam0) //Position: 0x4B6 / 1206
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x4D7 / 1239
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

void Function_9() //Position: 0x51D / 1309
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x536 / 1334
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x589 / 1417
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

struct<16> Function_12(int iParam0) //Position: 0x6AD / 1709
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x6D2 / 1746
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x6F2 / 1778
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x709 / 1801
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x724 / 1828
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x96B / 2411
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x994 / 2452
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

bool Function_19(int iParam0) //Position: 0x9B8 / 2488
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x9CD / 2509
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x9EB / 2539
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

struct<16> Function_22(int iParam0) //Position: 0xA91 / 2705
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0xABB / 2747
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD11 / 3345
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
		Function_161(&(Global_3422[iVar240]));
		Function_160(4194304);
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

void Function_25() //Position: 0xDFE / 3582
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

int Function_26(int iParam0, bool bParam1) //Position: 0xE2E / 3630
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

int Function_27(int iParam0) //Position: 0xE6B / 3691
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xE85 / 3717
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xE9B / 3739
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1192 / 4498
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

void Function_31(char* cParam0, int iParam1) //Position: 0x11FE / 4606
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1235 / 4661
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

bool Function_33(var uParam0, int iParam1) //Position: 0x12AD / 4781
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x12C0 / 4800
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

int Function_35(int iParam0) //Position: 0x1361 / 4961
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x139E / 5022
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13B1 / 5041
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

void Function_38(int iParam0, int iParam1) //Position: 0x15C3 / 5571
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x15FD / 5629
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

bool Function_40() //Position: 0x163F / 5695
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1648 / 5704
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

void Function_42() //Position: 0x1699 / 5785
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

void Function_43() //Position: 0x16CC / 5836
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

void Function_44() //Position: 0x17D2 / 6098
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

void Function_45() //Position: 0x1805 / 6149
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

void Function_46() //Position: 0x1993 / 6547
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

void Function_47() //Position: 0x1B47 / 6983
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1B55 / 6997
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

var Function_49() //Position: 0x1D46 / 7494
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1D5B / 7515
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DF6 / 7670
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2091 / 8337
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

bool Function_53() //Position: 0x26BE / 9918
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x26C6 / 9926
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26D7 / 9943
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x27CC / 10188
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27E5 / 10213
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x284A / 10314
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x285C / 10332
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x286E / 10350
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

int Function_61(int iParam0) //Position: 0x299E / 10654
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x29AD / 10669
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x29E6 / 10726
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2A23 / 10787
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BBD / 11197
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

int Function_66(bool bParam0) //Position: 0x2DD7 / 11735
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2E18 / 11800
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

struct<8> Function_68() //Position: 0x2EA1 / 11937
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

struct<8> Function_69() //Position: 0x2F38 / 12088
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

void Function_70() //Position: 0x2FB7 / 12215
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2FDD / 12253
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

void Function_72() //Position: 0x31E7 / 12775
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

bool Function_73(vector3 vParam0) //Position: 0x3288 / 12936
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x32A0 / 12960
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

vector3 Function_75() //Position: 0x3387 / 13191
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3390 / 13200
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x339F / 13215
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x33B5 / 13237
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x347C / 13436
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3499 / 13465
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

bool Function_81(int iParam0) //Position: 0x3975 / 14709
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x398B / 14731
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x39AA / 14762
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x39C4 / 14788
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3A2B / 14891
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

void Function_86() //Position: 0x3C4B / 15435
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3CCB / 15563
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x401E / 16414
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

int Function_89(int iParam0) //Position: 0x40A1 / 16545
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x40BB / 16571
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x40E9 / 16617
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4385 / 17285
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

void Function_93(int iParam0, int iParam1) //Position: 0x4548 / 17736
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x47A6 / 18342
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

int Function_95() //Position: 0x492B / 18731
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

void Function_96() //Position: 0x49CA / 18890
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

void Function_97(int iParam0) //Position: 0x4A79 / 19065
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

var Function_98(int iParam0) //Position: 0x4AD7 / 19159
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4B66 / 19302
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

var Function_100(int iParam0, int iParam1) //Position: 0x4D03 / 19715
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

void Function_101() //Position: 0x4D44 / 19780
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4D5A / 19802
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4D9A / 19866
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4DDA / 19930
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4DE9 / 19945
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

int Function_106(int iParam0) //Position: 0x4FB1 / 20401
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

var Function_107() //Position: 0x5046 / 20550
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x506B / 20587
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5526 / 21798
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

var Function_110(int iParam0) //Position: 0x583B / 22587
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x58DE / 22750
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5AD9 / 23257
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5C75 / 23669
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5D40 / 23872
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
			Function_158(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(Global_30640[0]);
			Function_155(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_153(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_155(Global_30668[0]);
			Function_144(0);
			Function_142(2, 1);
			Function_142(0, 1);
			Function_142(1, 1);
			break;
		
		case 0x00000003:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_155(Global_30668[0]);
			Function_155(Global_30640[0]);
			Function_140(0, 1);
			Function_140(15, 1);
			Function_140(9, 1);
			Function_140(12, 1);
			Function_140(16, 1);
			Function_142(3, 1);
			break;
		
		case 0x00000005:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_153(21, bParam2, 4);
			Function_155(Global_30668[0]);
			Function_142(39, 1);
			break;
		
		case 0x00000007:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_139(4))
					{
						Function_129(4, 0, 0, 1);
					}
				}
			}
			Function_155(Global_30640[0]);
			Function_155(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_155(Global_30640[0]);
			Function_155(Global_30668[2]);
			Function_128(&(Global_29008[Global_30668[2]]), 32768);
			Function_209(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_153(9, bParam2, 4);
			Function_155(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_155(Global_30640[0]);
			Function_155(Global_30658[0]);
			Function_128(&(Global_29008[Global_30658[0]]), 32768);
			Function_209(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_155(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(Global_30640[0]);
			Function_155(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_155(Global_30640[1]);
			Function_155(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_155(Global_30679[0]);
			Function_155(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_155(Global_30658[5]);
			Function_155(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_153(21, bParam2, 4);
			Function_155(Global_30640[4]);
			Function_155(Global_30658[4]);
			Function_127(&Global_76847, 0x2000000);
			Function_127(&Global_76847, 0x4000000);
			Function_127(&Global_76847, 4096);
			Function_127(&Global_76847, 8);
			Function_127(&Global_76847, 8388608);
			Function_127(&Global_76847, 524288);
			Function_127(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_155(Global_30640[4]);
			Function_155(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_209(&(Global_29008[Global_30640[4]]), 256);
			Function_155(Global_30640[4]);
			Function_155(Global_30658[0]);
			Function_128(&(Global_29008[Global_30658[0]]), 32768);
			Function_209(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_155(Global_30640[0]);
			Function_155(Global_30640[5]);
			Function_153(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_155(Global_30658[3]);
			Function_128(&(Global_29008[Global_30658[3]]), 32768);
			Function_209(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_153(9, bParam2, 4);
			Function_155(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_128(&(Global_29008[Global_30679[1]]), 32768);
			Function_155(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_153(12, bParam2, 4);
			Function_209(&(Global_29008[Global_30679[1]]), 256);
			Function_155(Global_30668[3]);
			Function_155(Global_30693[0]);
			Function_155(Global_30685[0]);
			Function_144(4);
			Function_140(13, 1);
			Function_140(1, 1);
			Function_140(18, 1);
			Function_142(34, 1);
			Function_142(44, 1);
			Function_142(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_153(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_155(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_155(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_155(Global_30693[0]);
			Function_155(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_155(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_155(Global_30685[0]);
			Function_155(Global_30693[0]);
			Function_155(Global_30693[1]);
			Function_155(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_153(23, bParam2, 3);
			Function_140(23, 1);
			Function_155(Global_30685[0]);
			Function_155(Global_30685[2]);
			Function_128(&(Global_29008[Global_30685[2]]), 32768);
			Function_209(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_153(19, bParam2, 4);
			Function_155(Global_30685[0]);
			Function_155(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_153(24, bParam2, 3);
			Function_140(24, 1);
			Function_155(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_155(Global_30685[0]);
			Function_155(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_155(Global_30693[12]);
			Function_155(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_155(Global_30693[12]);
			Function_155(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_153(25, bParam2, 10);
			Function_155(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_155(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_155(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_153(13, bParam2, 4);
			Function_155(Global_30693[2]);
			Function_155(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_139(8))
				{
					Function_129(8, 0, 0, 1);
				}
			}
			Function_155(Global_30685[0]);
			Function_144(9);
			Function_140(7, 1);
			Function_140(11, 1);
			Function_140(3, 1);
			Function_140(20, 1);
			Function_142(57, 1);
			break;
		
		case 0x0000002A:
			Function_153(2, bParam2, 4);
			Function_155(Global_30717[0]);
			Function_155(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_155(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_155(Global_30717[0]);
			Function_155(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_155(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_155(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_155(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_153(17, bParam2, 4);
			Function_155(Global_30723[0]);
			Function_155(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_125(15))
				{
					Function_120(15, 0, 1);
				}
			}
			Function_209(&(Global_29008[Global_30717[1]]), 256);
			Function_144(11);
			Function_155(Global_30717[1]);
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_155(Global_30717[1]);
			Function_155(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_155(Global_30717[1]);
			Function_115(11);
			Function_144(12);
			Global_16537[1121].f_40 = 0;
			Function_142(56, 1);
			if (!bParam2)
			{
				if (!Function_139(9))
				{
					Function_129(9, 0, 0, 0);
				}
				if (!Function_139(10))
				{
					Function_129(10, 0, 0, 1);
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

void Function_115(int iParam0) //Position: 0x6630 / 26160
{
	bool bVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_205(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_205(Global_16537[iParam021].f_72, 0);
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x679F / 26527
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x68A5 / 26789
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x68D2 / 26834
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

var Function_119(vector3 vParam0) //Position: 0x6929 / 26921
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

void Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6977 / 26999
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_125(bParam0))
	{
		if (!Function_139(bParam0))
		{
			Function_129(bParam0, 1, 0, 0);
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
		Function_123(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_121();
			}
		}
	}
	return;
}

void Function_121() //Position: 0x6B15 / 27413
{
	return;
}

bool Function_122(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6B1B / 27419
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

void Function_123(bool bParam0, int iParam1) //Position: 0x6BBF / 27583
{
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_124(int iParam0) //Position: 0x6C14 / 27668
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x6C2A / 27690
{
	if (!Function_124(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_126(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_126(int iParam0, int iParam1) //Position: 0x6C7B / 27771
{
	int iVar0;
	
	if (!Function_124(iParam0))
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

void Function_127(var uParam0, int iParam1) //Position: 0x6CA8 / 27816
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_128(var uParam0, int iParam1) //Position: 0x6CB7 / 27831
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6CC6 / 27846
{
	struct<8> Var0;
	
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_138(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_139(bParam0))
	{
		Function_85(456, 1, 0, 0);
		Function_123(bParam0, 2);
		if (bParam2)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 5);
			}
			else
			{
				Function_121();
			}
		}
		Function_132(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_131() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_131() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_130(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_130(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6E10 / 28176
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

bool Function_131() //Position: 0x6E5B / 28251
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_132(bool bParam0) //Position: 0x6E88 / 28296
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
			if (Function_136(bParam0, Function_137(bVar24)))
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
			if (Function_136(bParam0, Function_137(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_135(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_134(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_133(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_133(int iParam0) //Position: 0x7038 / 28728
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_124(iParam0))
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

void Function_134(bool bParam0, bool bParam1) //Position: 0x708F / 28815
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

var Function_135(int iParam0) //Position: 0x70B4 / 28852
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_124(iParam0))
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

bool Function_136(bool bParam0, bool bParam1) //Position: 0x710A / 28938
{
	int iVar0;
	
	if (!Function_124(bParam0))
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

bool Function_137(bool bParam0) //Position: 0x7169 / 29033
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_138(int iParam0) //Position: 0x7175 / 29045
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_139(int iParam0) //Position: 0x7191 / 29073
{
	if (!Function_124(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_126(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_140(int iParam0, int iParam1) //Position: 0x71E3 / 29155
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_141(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_141(int iParam0, int iParam1) //Position: 0x7256 / 29270
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_142(int iParam0, int iParam1) //Position: 0x72B2 / 29362
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7323 / 29475
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_144(int iParam0) //Position: 0x737D / 29565
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
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
			Function_130("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_129(14, 1, 0, 0);
				Function_145(14, 1, 0, 0, 0);
			}
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 6);
			}
			else
			{
				Function_121();
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
			Function_130("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7629 / 30249
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_138(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0, 2))
	{
		Function_85(456, 1, 0, 0);
		Function_123(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_130(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_136(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_123(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_121();
			}
		}
		Function_132(bParam0);
		if (StackVal && !Function_151(((((!Function_131() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_151((((Function_131() || Global_3380) || Global_3392) || Global_3384), 1))
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
			Function_147();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_146(3, bParam1);
				break;
			
			case 0x00000005:
				Function_146(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_146(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_146(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_146(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_146(2, SHIFT_LEFT(bParam1, 18));
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

void Function_146(int iParam0, bool bParam1) //Position: 0x78B8 / 30904
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

void Function_147() //Position: 0x7917 / 30999
{
	if (Function_124(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_148(int iParam0, int iParam1) //Position: 0x7992 / 31122
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
					if (Function_149(13) && iVar16)
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
					if (Function_149(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(23) && iVar17)
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
					if (Function_149(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(27) && iVar18)
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
					if (Function_149(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(49) && iVar15)
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
					if (Function_149(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_149(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_149(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(15) && iVar19)
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

int Function_149(int iParam0) //Position: 0x8587 / 34183
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0) //Position: 0x859C / 34204
{
	int iVar0;
	int iVar1;
	
	if (!Function_124(iParam0))
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

bool Function_151(bool bParam0, bool bParam1) //Position: 0x85EB / 34283
{
	return (bParam0 && bParam1) == 0;
}

void Function_152(bool bParam0, bool bParam1) //Position: 0x85F8 / 34296
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

void Function_153(bool bParam0, bool bParam1, int iParam2) //Position: 0x8649 / 34377
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_154(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_158(bParam0, 0, 0);
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

bool Function_154(int iParam0, int iParam1) //Position: 0x86B7 / 34487
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_155(int iParam0) //Position: 0x86CA / 34506
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_157(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_128(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_156(iParam0);
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

var Function_156(int iParam0) //Position: 0x87C9 / 34761
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

bool Function_157(var uParam0, int iParam1) //Position: 0x8821 / 34849
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_158(bool bParam0, bool bParam1, int iParam2) //Position: 0x883D / 34877
{
	if (!Function_159(bParam0))
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

bool Function_159(int iParam0) //Position: 0x8894 / 34964
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_160(bool bParam0) //Position: 0x88A6 / 34982
{
	bool bVar0;
	
	if (Function_151(bParam0, 1) && Function_151(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_161(int iParam0) //Position: 0x88DA / 35034
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
			Function_162(4, 0, 0);
		}
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8941 / 35137
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
		Function_163(Global_16524, bVar0, 1);
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A1E / 35358
{
	int iVar0;
	
	Function_165(bParam0);
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
	Function_164();
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

void Function_164() //Position: 0x8B97 / 35735
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_165(int iParam0) //Position: 0x8BA3 / 35747
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

void Function_166(bool bParam0) //Position: 0x8BE9 / 35817
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_167(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_167(var uParam0, int iParam1) //Position: 0x8C0F / 35855
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

void Function_168(var uParam0, int iParam1) //Position: 0x8D3D / 36157
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_169(int iParam0, int iParam1) //Position: 0x8D57 / 36183
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_170() //Position: 0x8D74 / 36212
{
	Function_173();
	Function_172();
	Function_171();
	return;
}

void Function_171() //Position: 0x8D83 / 36227
{
	Function_166(&Local_4 + 300);
	return;
}

void Function_172() //Position: 0x8D91 / 36241
{
	Function_166(&Local_4 + 236);
	return;
}

void Function_173() //Position: 0x8D9E / 36254
{
	Function_166(&Local_4 + 4);
	Function_166(&Local_4 + 236);
	Function_166(&Local_4 + 300);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8DBF / 36287
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_199());
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
	Function_198();
	CLEAR_PRINTED_OBJECTIVE();
	Function_208();
	Function_196(0);
	Function_195();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_194();
	Function_193();
	Function_198();
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

void Function_175() //Position: 0x8FB0 / 36784
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

void Function_176(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9006 / 36870
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_177((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_177(bool bParam0) //Position: 0x904C / 36940
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_178() //Position: 0x9071 / 36977
{
	return Global_12976.f_156;
}

void Function_179() //Position: 0x907C / 36988
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_209(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x90A6 / 37030
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
			Function_128(&(Global_29008[Global_29006]), 131072);
			Function_209(&(Global_29008[Global_29006]), 2097152);
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
				if (Function_157(&(Global_29008[iVar0]), 4) || Function_157(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_209(&(Global_29008[iVar0]), 2097155);
					Function_128(&(Global_29008[iVar0]), 262144);
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

void Function_181(int iParam0) //Position: 0x91B1 / 37297
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
		if (!Function_157(&(Global_29008[iParam0]), 2048))
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

bool Function_182() //Position: 0x9230 / 37424
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_157(&(Global_29008[iVar0]), 4) || Function_157(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_183() //Position: 0x928D / 37517
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

void Function_184() //Position: 0x92B3 / 37555
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

void Function_185(int iParam0) //Position: 0x92D9 / 37593
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_186(int iParam0) //Position: 0x92F6 / 37622
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_187(int iParam0) //Position: 0x9309 / 37641
{
	Function_188(&Global_28842, iParam0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0x9317 / 37655
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_189(bool bParam0) //Position: 0x9332 / 37682
{
	if (Function_151(bParam0, 1) && !Function_151(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_190(int iParam0) //Position: 0x935F / 37727
{
	int iVar0;
	
	if (!Function_124(iParam0))
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

void Function_191(bool bParam0) //Position: 0x9426 / 37926
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

void Function_192(bool bParam0) //Position: 0x94A2 / 38050
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

void Function_193() //Position: 0x9516 / 38166
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

void Function_194() //Position: 0x9557 / 38231
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

void Function_195() //Position: 0x9598 / 38296
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_196(int iParam0) //Position: 0x95AC / 38316
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

bool Function_197() //Position: 0x95E8 / 38376
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

void Function_198() //Position: 0x960D / 38413
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

int Function_199() //Position: 0x9638 / 38456
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

int Function_200(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9652 / 38482
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
		Function_202(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_201(StackVal);
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

void Function_201(bool bParam0) //Position: 0x9970 / 39280
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

void Function_202(bool bParam0) //Position: 0x999C / 39324
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_203() //Position: 0x99B1 / 39345
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_204(bool bParam0) //Position: 0x99BA / 39354
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

void Function_205(bool bParam0, bool bParam1) //Position: 0x9A12 / 39442
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

bool Function_206(var uParam0, var uParam1, int iParam2) //Position: 0x9A66 / 39526
{
	return Function_207(Global_29006, uParam0, uParam1, iParam2);
}

int Function_207(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x9A78 / 39544
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

void Function_208() //Position: 0x9B14 / 39700
{
	Global_8722 = 0.0f;
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0x9B1E / 39710
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_210(bool bParam0) //Position: 0x9B35 / 39733
{
	if (IS_BLIP_VALID(bParam0))
	{
		REMOVE_BLIP(bParam0);
	}
	return;
}

void Function_211(int iParam0) //Position: 0x9B48 / 39752
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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

void Function_212(bool bParam0) //Position: 0x9BC7 / 39879
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_213(bool bParam0) //Position: 0x9BDA / 39898
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

void Function_214() //Position: 0x9C64 / 40036
{
	var uVar0[12];
	int iVar13;
	
	if (!Function_283())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "Stage 02: Investiage the Wreck";
	uVar0[4] = "Stage 03: Escape Serendipity";
	uVar0[5] = "Stage 04: Drive Back";
	uVar0[6] = "Stage 05: Car broken down";
	uVar0[7] = "Final Cutscene";
	uVar0[8] = "Teleport to Contact";
	uVar0[9] = "After fight drive to BW";
	uVar0[10] = "Teleport after nastas rescue";
	iVar13 = Function_269(&uLocal_709, &uVar0, &Local_653 + 4, GET_DEBUG_PADINDEX(), 0);
	if (Function_268(&iVar13, &iLocal_723, &bLocal_724, &Local_716))
	{
		Function_261();
		Function_260();
	}
	switch (iVar13)
	{
		case 0x00000000:
			Function_261();
			Function_260();
			Function_259(&bLocal_789, 8);
			break;
		
		case 0x00000001:
			Function_261();
			Function_260();
			Function_254(iLocal_723);
			Function_250(StackVal, StackVal, 5, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
			break;
		
		case 0x00000002:
			Function_261();
			Function_260();
			Function_245(&bLocal_791, 4);
			break;
		
		case 0x00000003:
			Function_261();
			Function_260();
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_243();
			Local_716 = 1000;
			iLocal_723 = 1;
			Function_240(0);
			break;
		
		case 0x00000004:
			Function_261();
			Function_260();
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_237();
			Local_716 = 1000;
			iLocal_723 = 2;
			Function_240(0);
			break;
		
		case 0x00000005:
			Function_261();
			Function_260();
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_233();
			Local_716 = 1000;
			iLocal_723 = 3;
			Function_240(0);
			break;
		
		case 0x00000006:
			Function_261();
			Function_260();
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_219();
			Local_716 = 1000;
			iLocal_723 = 4;
			Function_240(0);
			break;
		
		case 0x00000007:
			Function_261();
			Function_260();
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_218();
			Local_716 = 1000;
			iLocal_723 = 101;
			Function_240(0);
			break;
		
		case 0x00000008:
			Function_261();
			Function_217(&Local_4 + 648);
			Function_217(&Local_4 + 696);
			break;
		
		case 0x00000009:
			Function_261();
			Function_260();
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_219();
			iLocal_942 = 1;
			Local_716 = 1000;
			iLocal_723 = 4;
			Function_240(0);
			break;
		
		case 0x0000000A:
			Function_215(Global_34573, (*&Local_4 + 1780)[10], 1, 1, 1);
			break;
	}
	return;
}

void Function_215(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9F52 / 40786
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
				Function_216(StackVal, StackVal, StackVal, bParam0, vVar0, uParam2, uParam3, uParam4);
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

void Function_216(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xA069 / 41065
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

void Function_217(var uParam0) //Position: 0xA122 / 41250
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
				KILL_ACTOR(bVar1);
				KILL_ACTOR(bVar2);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				KILL_ACTOR(bVar1);
				KILL_ACTOR(bVar2);
			}
			else
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_218() //Position: 0xA1A1 / 41377
{
	return;
}

void Function_219() //Position: 0xA1A7 / 41383
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	if (!ACTOR_HAS_WEAPON(Global_34573, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 1, 0);
	}
	Function_220(1);
	Function_201(bLocal_730);
	Function_201(bLocal_729);
	return;
}

void Function_220(bool bParam0) //Position: 0xA1F4 / 41460
{
	if (!IS_ACTOR_VALID(bLocal_729))
	{
		Function_232();
		bLocal_729 = (*&Local_4 + 408)[02];
		Function_231(bLocal_729);
		STOP_PED_SPEAKING(bLocal_729, 1);
		if (Function_230(bLocal_729, 1))
		{
			SET_ACTOR_MAX_HEALTH(bLocal_729, 300.0f);
			Function_229(bLocal_729);
			Function_228(bLocal_729, 0);
			SET_ACTOR_FACTION(bLocal_729, 20);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_729, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_729, true);
			if (bParam0)
			{
				HOGTIE_ACTOR(bLocal_729);
			}
			TASK_PRIORITY_SET(bLocal_729, true);
			TASK_STAND_STILL(bLocal_729, -1.0f, 0, 0);
			LIMIT_BLOOD_ON_ACTOR(bLocal_729, 4);
			SET_AMBIENT_VOICE_NAME(bLocal_729, "COMPANION_NativeFriend");
		}
		if (iLocal_723 == 0 && iLocal_723 == 1)
		{
			Function_221(&(Local_851[317]), bLocal_729, "Indian", 0, 0x5f5e100, 1);
		}
	}
	return;
}

int Function_221(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA2C6 / 41670
{
	if (!Function_227(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_226(uParam0, bParam2))
	{
		return 0;
	}
	Function_225(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_222(uParam0, iParam4, iParam5);
	return 1;
}

void Function_222(var uParam0, int iParam1, int iParam2) //Position: 0xA302 / 41730
{
	if (iParam1 != 100000000)
	{
		Function_224(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_223(uParam0, iParam2);
	}
	return;
}

void Function_223(int iParam0, bool bParam1) //Position: 0xA325 / 41765
{
	iParam0->f_40 = 0;
	Function_224(iParam0, 2, bParam1);
	Function_224(iParam0, 4, bParam1);
	Function_224(iParam0, 8, bParam1);
	Function_224(iParam0, 16, bParam1);
	Function_224(iParam0, 32, bParam1);
	Function_224(iParam0, 64, bParam1);
	Function_224(iParam0, 128, bParam1);
	Function_224(iParam0, 256, bParam1);
	Function_224(iParam0, 512, bParam1);
	Function_224(iParam0, 1024, bParam1);
	return;
}

void Function_224(int iParam0, int iParam1, bool bParam2) //Position: 0xA38B / 41867
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

void Function_225(var uParam0, int iParam1) //Position: 0xA3C7 / 41927
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_226(int iParam0, bool bParam1) //Position: 0xA3D3 / 41939
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

bool Function_227(var uParam0, bool bParam1) //Position: 0xA45C / 42076
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

void Function_228(bool bParam0, bool bParam1) //Position: 0xA5E8 / 42472
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[2]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[6]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[2], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[6], 0);
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xA62E / 42542
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		SET_ACTOR_KO_POINTS(bParam0, GET_ACTOR_MAX_KO_POINTS(bParam0));
	}
	return;
}

bool Function_230(bool bParam0, bool bParam1) //Position: 0xA650 / 42576
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

void Function_231(bool bParam0) //Position: 0xA691 / 42641
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

void Function_232() //Position: 0xA6C5 / 42693
{
	Local_4.f_420 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "ContactGroup"));
	(*&Local_4 + 408)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Contact", 563, 357,2444f, 78,86572f, 1986,167f, 0.0f, 218,4775f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 408)[02], Local_4.f_420);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 408)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 408)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 408)[02], 20);
	SET_ACTOR_FACTION((*&Local_4 + 408)[02], 20);
	return;
}

void Function_233() //Position: 0xA758 / 42840
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	if (!ACTOR_HAS_WEAPON(Global_34573, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 1, 0);
	}
	Function_220(0);
	Function_236(bLocal_729, (*&Local_4 + 1096)[2], 1, 1, 1);
	Function_234(bLocal_730, 4);
	Function_201(bLocal_730);
	Function_201(bLocal_729);
	return;
}

void Function_234(bool bParam0, bool bParam1) //Position: 0xA7BD / 42941
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
		Function_235(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_76(&bVar0, bParam1);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

void Function_235(bool bParam0) //Position: 0xA832 / 43058
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

void Function_236(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xA8F5 / 43253
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

void Function_237() //Position: 0xA9FC / 43516
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	if (!ACTOR_HAS_WEAPON(Global_34573, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 1, 0);
	}
	Function_201(bLocal_730);
	Function_201(bLocal_728);
	Function_238(10, 0, 1);
	return;
}

void Function_238(int iParam0, bool bParam1, bool bParam2) //Position: 0xAA4C / 43596
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
						Function_201(bVar1);
					}
				}
				Function_239(bVar0);
			}
		}
	}
	return;
}

void Function_239(bool bParam0) //Position: 0xAB43 / 43843
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

void Function_240(int iParam0) //Position: 0xAB6F / 43887
{
	char* cVar0[32];
	
	Function_241(&iLocal_739);
	Function_241(&iLocal_745);
	Function_241(&iLocal_742);
	bLocal_724 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_723)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "08", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "04", 32);
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

void Function_241(int iParam0) //Position: 0xAD44 / 44356
{
	Function_242(iParam0, 0.0f);
	return;
}

void Function_242(int iParam0, float fParam1) //Position: 0xAD50 / 44368
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_243() //Position: 0xAD71 / 44401
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	if (!ACTOR_HAS_WEAPON(Global_34573, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 1, 0);
	}
	AI_GOAL_LOOK_CLEAR(bLocal_728);
	Function_201(bLocal_730);
	Function_201(bLocal_728);
	Function_238(10, 0, 1);
	return;
}

void Function_244(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xADC7 / 44487
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

void Function_245(bool bParam0, int iParam1) //Position: 0xADF0 / 44528
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_246(iParam1);
	*bParam0 = 1;
	return;
}

void Function_246(int iParam0) //Position: 0xAE13 / 44563
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_249("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_248(2) || Function_248(8)) || Function_248(9)) || Function_248(10))
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
		Function_249("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_249("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_249("");
	}
	else if (iParam0 == 8)
	{
		Function_247();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_247();
	}
	return;
}

void Function_247() //Position: 0xAF0A / 44810
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_248(int iParam0) //Position: 0xAF16 / 44822
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

void Function_249(bool bParam0) //Position: 0xAF4C / 44876
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_250(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xAFB6 / 44982
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_251(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_246(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_251(vector3 vParam0, var uParam3, var uParam4) //Position: 0xAFF3 / 45043
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_253(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_252(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_252(int iParam0) //Position: 0xB076 / 45174
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

var Function_253(vector3 vParam0, bool bParam3) //Position: 0xB524 / 46372
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

vector3 Function_254(int iParam0) //Position: 0xB58F / 46479
{
	Function_255(iParam0 + 1);
	return StackVal, StackVal, Function_255(iParam0 + 1);
}

vector3 Function_255(int iParam0) //Position: 0xB59C / 46492
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_256((*&Local_4 + 1184)[1]);
			return StackVal, StackVal, Function_256((*&Local_4 + 1184)[1]);
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_4 + 1240[16]);
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_4 + 1240[06]);
		
		case 0x00000003:
			return StackVal, StackVal, *(&Local_4 + 1240[16]);
		
		case 0x00000004:
			return StackVal, StackVal, *(&Local_4 + 1240[26]);
		
		case 0x00000065:
			return StackVal, StackVal, *(&Local_4 + 1240[36]);
		
		default:
	}
	return StackVal, StackVal, *(&Local_4 + 1240[36]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	Function_256((*&Local_4 + 1184)[1]);
	return StackVal, StackVal, Function_256((*&Local_4 + 1184)[1]);
}

vector3 Function_256(bool bParam0) //Position: 0xB675 / 46709
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

int Function_257(int iParam0) //Position: 0xB69C / 46748
{
	return Function_258(iParam0 + 1);
}

int Function_258(int iParam0) //Position: 0xB6A9 / 46761
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 1184)[1]);
		
		case 0x00000001:
			return StackVal;
		
		case 0x00000002:
			return StackVal;
		
		case 0x00000003:
			return StackVal;
		
		case 0x00000004:
			return StackVal;
		
		case 0x00000065:
			return StackVal;
		
		default:
	}
	return StackVal;
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return StackVal;
}

void Function_259(bool bParam0, int iParam1) //Position: 0xB78F / 46991
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_246(iParam1);
	*bParam0 = 1;
	return;
}

void Function_260() //Position: 0xB7B2 / 47026
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_261() //Position: 0xB7C7 / 47047
{
	Function_263();
	Function_262(10, 3);
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0xB7D6 / 47062
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

void Function_263() //Position: 0xB90D / 47373
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_267())
	{
		Function_266(10, 3);
	}
	else
	{
		Function_264();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_264() //Position: 0xB958 / 47448
{
	Function_265(25, 2);
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0xB964 / 47460
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

void Function_266(int iParam0, int iParam1) //Position: 0xBB62 / 47970
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

bool Function_267() //Position: 0xBC99 / 48281
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
				if (!Function_151(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_268(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBD00 / 48384
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_261();
			Function_260();
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
		Function_249("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_269(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBDA6 / 48550
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_282(&Var15, &Var0);
	uVar20 = Function_281(*uParam1, &Var15);
	Function_280(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_279(uParam0, uVar20);
	Function_277(StackVal, uParam0, Var15.f_12);
	Function_275(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_274(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_271(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_270(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_270(int iParam0, int iParam1, int iParam2) //Position: 0xBE6D / 48749
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

bool Function_271(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xBEC9 / 48841
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
				Function_273(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_273(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_270(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_272(bParam1->f_32);
	}
	else
	{
		Function_272(bParam1->f_32);
	}
	return 0;
}

void Function_272(bool bParam0) //Position: 0xC052 / 49234
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

void Function_273(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xC08C / 49292
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

var Function_274(int iParam0, var uParam1, int iParam2) //Position: 0xC13A / 49466
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_275(var uParam0, int iParam1, int iParam2) //Position: 0xC15E / 49502
{
	switch (Function_276())
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

int Function_276() //Position: 0xC1FA / 49658
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

void Function_277(var uParam0, int iParam1, int iParam2) //Position: 0xC236 / 49718
{
	switch (Function_278(uParam0))
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

int Function_278(bool bParam0) //Position: 0xC2CE / 49870
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_151(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_151(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_151(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_151(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_279(var uParam0, int iParam1) //Position: 0xC419 / 50201
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

void Function_280(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC568 / 50536
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

var Function_281(int iParam0, int iParam1) //Position: 0xC5FB / 50683
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_282(var uParam0, var uParam1) //Position: 0xC615 / 50709
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

bool Function_283() //Position: 0xC663 / 50787
{
	return Global_30920;
}

bool Function_284() //Position: 0xC66C / 50796
{
	if (IS_EXITFLAG_SET())
	{
		Function_254(iLocal_723);
		Function_250(StackVal, StackVal, 4, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
		return 0;
	}
	Function_623(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_653, iLocal_723, bLocal_724, &bLocal_791, &bLocal_789, &bLocal_790);
	if (iLocal_723 == 99 && iLocal_723 == 100)
	{
		Function_618();
		Function_617();
		Function_616();
		if (iLocal_946)
		{
			Function_615();
		}
		else if (iLocal_723 != 101)
		{
			if (IS_ACTOR_VALID(bLocal_730))
			{
				if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
				{
					iLocal_946 = 1;
				}
			}
		}
		if (Function_613())
		{
			if (IS_ACTOR_VALID(bLocal_728))
			{
				if (!DECOR_CHECK_EXIST(bLocal_728, "iscompanion"))
				{
					SET_ACTOR_IS_COMPANION(bLocal_728, 1);
					DECOR_SET_BOOL(bLocal_728, "iscompanion", true);
				}
			}
			if (Function_593(&Local_851, &uLocal_811, &uLocal_920, cLocal_726, iLocal_792))
			{
				if (Function_591(&uLocal_920))
				{
					Function_254(iLocal_723);
					Function_250(StackVal, StackVal, 5, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
					return 1;
				}
			}
			if (IS_ACTOR_DEAD(Global_34573))
			{
				Function_254(iLocal_723);
				Function_250(StackVal, StackVal, 1, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
				return 1;
			}
			if (Function_590(2048))
			{
				Function_254(iLocal_723);
				Function_250(StackVal, StackVal, 3, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
				return 1;
			}
			if ((Global_3403 || Global_3404) || Function_588(Global_34573, 1))
			{
				Function_254(iLocal_723);
				Function_250(StackVal, StackVal, 2, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
				return 1;
			}
			if (IS_ACTOR_VALID(bLocal_729))
			{
				if (IS_ACTOR_DEAD(bLocal_729))
				{
					Function_249("Nastas_dead");
					Function_254(iLocal_723);
					Function_250(StackVal, StackVal, 5, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
					return 1;
				}
			}
			if ((Function_587() && iLocal_723 == 1) && iLocal_723 == 101)
			{
				Function_249("FBI05_carFail");
				Function_254(iLocal_723);
				Function_250(StackVal, StackVal, 5, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
				return 1;
			}
			Function_586();
		}
	}
	switch (iLocal_723)
	{
		case 0x00000063:
			Function_545();
			break;
		
		case 0x00000000:
			Function_530();
			break;
		
		case 0x00000001:
			Function_510();
			break;
		
		case 0x00000002:
			Function_437();
			break;
		
		case 0x00000003:
			Function_420();
			break;
		
		case 0x00000004:
			Function_328();
			break;
		
		case 0x00000065:
			Function_287();
			break;
		
		case 0x00000064:
			if (Function_286(&bLocal_790))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_285(&iLocal_723, &bLocal_724, &Local_716))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_789)
	{
		Function_259(&bLocal_789, 8);
		Function_1();
		return 0;
	}
	if (bLocal_790 && iLocal_723 == 100)
	{
		Function_254(iLocal_723);
		Function_250(StackVal, StackVal, 5, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
	}
	if (bLocal_791)
	{
		Function_245(&bLocal_791, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_285(var uParam0, var uParam1, int iParam2) //Position: 0xC937 / 51511
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

bool Function_286(int iParam0) //Position: 0xC977 / 51575
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_287() //Position: 0xC98A / 51594
{
	switch (bLocal_724)
	{
		case 0x00000000:
			Function_324(0);
			Function_322(9);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_725 = Global_30717[0];
			if (!Function_321(iLocal_725))
			{
				Function_320(&Local_653);
			}
			ENABLE_CHILD_SECTOR("blk_archeologist01Props01x");
			if (iLocal_783[4] == 0)
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1240[36]), 1, false, 0);
				Function_240(1);
			}
			else
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_725) || iLocal_725 != 4294967295))
			{
				Function_240(2);
			}
			break;
		
		case 0x00000002:
			Function_318();
			Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
			Function_240(3);
			break;
		
		case 0x00000003:
			if (Function_288("$/cutscene/FBI_05_END_SCENE/FBI_05_END_SCENE", &Local_716, &Local_653, &iLocal_723, 55395, 55383, 55302, 55123, 54807, 54800, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			if (iLocal_971)
			{
				iLocal_971 = 0;
			}
			if (!HUD_IS_FADING())
			{
				bLocal_789 = true;
			}
			break;
	}
	return;
}

bool Function_288(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xCAFC / 51964
{
	if (!bParam15)
	{
		Function_301(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_300(iParam2) || iParam2->f_24 < 1))
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
				Function_241(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_299())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_298(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_241(iParam1 + 4);
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
					Function_298(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_295(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_295(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_293(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_298(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_241(iParam1 + 4);
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
						Function_292(1.0f);
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
						Function_290();
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
					Function_289(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_300(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_289(bool bParam0) //Position: 0xD110 / 53520
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

void Function_290() //Position: 0xD1B5 / 53685
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_291();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_291() //Position: 0xD1FA / 53754
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_292(bool bParam0) //Position: 0xD20C / 53772
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

void Function_293(bool bParam0, bool bParam1) //Position: 0xD229 / 53801
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
			if ((bVar3 == Global_34573 && !Function_294(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_294(bool bParam0) //Position: 0xD2A9 / 53929
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

float Function_295(int iParam0) //Position: 0xD2D8 / 53976
{
	if (Function_297(iParam0))
	{
		if (Function_296(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_296(int iParam0) //Position: 0xD3A0 / 54176
{
	return Function_151(*iParam0, 2);
}

bool Function_297(int iParam0) //Position: 0xD3AD / 54189
{
	return Function_151(*iParam0, 1);
}

int Function_298(bool bParam0) //Position: 0xD3BA / 54202
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

bool Function_299() //Position: 0xD472 / 54386
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

bool Function_300(int iParam0) //Position: 0xD4AC / 54444
{
	return iParam0->f_20;
}

void Function_301(var uParam0, int iParam1) //Position: 0xD4B6 / 54454
{
	Function_302(uParam0, iParam1, 0);
	return;
}

void Function_302(var uParam0, bool bParam1, bool bParam2) //Position: 0xD4C4 / 54468
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
			Function_244(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_244(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_303() //Position: 0xD610 / 54800
{
	return 1;
}

int Function_304() //Position: 0xD617 / 54807
{
	Function_238(10, 0, 1);
	Function_200(10, 1, 0, 1, 1);
	DESTROY_ACTOR(bLocal_727);
	DESTROY_ACTOR(bLocal_728);
	DESTROY_ACTOR(bLocal_729);
	if (IS_ACTOR_VALID(bLocal_730))
	{
		Function_201(bLocal_730);
		DESTROY_ACTOR(bLocal_730);
	}
	Function_305(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_305(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xD663 / 54883
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
		Function_260();
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
	Function_289(bParam9);
}

int Function_306() //Position: 0xD753 / 55123
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1240[36]), 1, false, 0);
	if (IS_ACTOR_VALID(bLocal_727))
	{
		Function_236(bLocal_727, (*&Local_4 + 1184)[3], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_728))
	{
		Function_236(bLocal_728, (*&Local_4 + 1184)[5], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_730))
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[0], 1, 1, 1);
	}
	STOP_PED_SPEAKING(bLocal_729, 0);
	Function_238(10, 0, 1);
	Function_200(10, 1, 0, 1, 1);
	DESTROY_ACTOR(bLocal_727);
	DESTROY_ACTOR(bLocal_728);
	DESTROY_ACTOR(bLocal_729);
	if (IS_ACTOR_VALID(bLocal_730))
	{
		Function_201(bLocal_730);
		DESTROY_ACTOR(bLocal_730);
	}
	return 1;
}

int Function_307() //Position: 0xD806 / 55302
{
	if (!iLocal_971)
	{
		if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
		}
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(Global_12976.f_36);
		}
		if (IS_ACTOR_VALID(bLocal_730))
		{
			Function_201(bLocal_730);
			DESTROY_ACTOR(bLocal_730);
		}
		iLocal_971 = 1;
	}
	return 1;
}

int Function_308() //Position: 0xD857 / 55383
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	return 1;
}

int Function_309() //Position: 0xD863 / 55395
{
	Function_312(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_256((*&Local_4 + 1120)[4]);
	Function_310(StackVal, StackVal, bLocal_652, Function_256((*&Local_4 + 1120)[4]), &Local_4 + 776[2], 0, 0, 0, 0, 1, 1);
	if (IS_ACTOR_IN_VOLUME(bLocal_730, (*&Local_4 + 776)[2]))
	{
	}
	return 1;
}

void Function_310(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10) //Position: 0xD8AC / 55468
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
				Function_311(bVar1, bParam0);
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

void Function_311(bool bParam0, bool bParam1) //Position: 0xDB1A / 56090
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

void Function_312(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xDB8F / 56207
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
	Function_260();
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
				Function_315(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_315(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if (Function_313(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_160(0x4000000);
	}
	if (Function_313(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_160(0x8000000);
	}
}

bool Function_313(int iParam0) //Position: 0xDE38 / 56888
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_314() //Position: 0xDE54 / 56916
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

vector3 Function_315(bool bParam0) //Position: 0xDED3 / 57043
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_316(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDEE4 / 57060
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_317(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_317(int iParam0) //Position: 0xDF08 / 57096
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

void Function_318() //Position: 0xE445 / 58437
{
	Function_238(10, 0, 1);
	if (IS_ACTOR_VALID(bLocal_730))
	{
		Function_319(bLocal_730, 1);
		Function_201(bLocal_730);
	}
	return;
}

void Function_319(bool bParam0, int iParam1) //Position: 0xE468 / 58472
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
		Function_235(bParam0);
	}
	bVar0 = DECOR_GET_INT(bParam0, "carSettings");
	Function_36(&bVar0, iParam1);
	DECOR_SET_INT(bParam0, "carSettings", bVar0);
	return;
}

void Function_320(int iParam0) //Position: 0xE4DD / 58589
{
	if (!Function_300(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_180(1, 0, 1);
		}
	}
	return;
}

bool Function_321(int iParam0) //Position: 0xE4F8 / 58616
{
	if (!Function_81(iParam0))
	{
		return 1;
	}
	return Function_157(&(Global_29008[iParam0]), 4);
}

void Function_322(int iParam0) //Position: 0xE514 / 58644
{
	Function_323(&Global_28842, iParam0);
	return;
}

void Function_323(var uParam0, int iParam1) //Position: 0xE522 / 58658
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_324(bool bParam0) //Position: 0xE545 / 58693
{
	Function_325(0, 0x40400000);
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

void Function_325(bool bParam0, float fParam1) //Position: 0xE579 / 58745
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
	Function_327();
	Function_326();
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

void Function_326() //Position: 0xE677 / 58999
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_327() //Position: 0xE6A9 / 59049
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

void Function_328() //Position: 0xE7A6 / 59302
{
	Function_414();
	switch (bLocal_724)
	{
		case 0x00000000:
			Function_324(0);
			Function_229(bLocal_729);
			HUD_ENABLE(true);
			AI_IGNORE_ACTOR(bLocal_729);
			if (IS_ACTOR_VALID(bLocal_727))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_727);
			}
			if (IS_ACTOR_VALID(bLocal_728))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_728);
			}
			if (IS_ACTOR_VALID(bLocal_729))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_729);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_322(9);
			Function_160(81920);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 732)[7], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 732)[7]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 732)[7]);
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			ACTOR_SET_NEXT_WEAPON(Global_34573, 2);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_984 = 1;
			if (iLocal_783[3] == 0)
			{
				Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_725 = Global_30637[0];
				if (!Function_321(iLocal_725))
				{
					Function_320(&Local_653);
				}
				Function_413();
				Function_240(1);
			}
			else
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_406()) && (Function_321(iLocal_725) || iLocal_725 != 4294967295))
			{
				Function_405();
				Function_240(2);
			}
			break;
		
		case 0x00000002:
			if (iLocal_942)
			{
				iLocal_991 = 5;
				iLocal_987 = 0;
				iLocal_794 = 0;
				iLocal_795 = 0;
				iLocal_801 = 1;
				Function_240(8);
				return;
			}
			if (Function_403(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_653, iLocal_723))
			{
				Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
				Function_382();
				Function_240(3);
			}
			else
			{
				Function_382();
				Function_381();
				Function_240(4);
			}
			break;
		
		case 0x00000003:
			if (Function_288("$/cutscene/FBI_05_CS05/FBI_05_CS05", &Local_716, &Local_653, &iLocal_723, 72434, 72422, 72307, 72507, 72287, 54800, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_240(4);
			}
			break;
		
		case 0x00000004:
			iLocal_792 = 1;
			if (iLocal_971)
			{
				iLocal_971 = 0;
			}
			Function_376();
			Function_373();
			iLocal_984 = 0;
			Function_240(6);
			break;
		
		case 0x00000006:
			Function_376();
			if (HUD_IS_FADED())
			{
				Function_292(1.0f);
			}
			Function_240(7);
			break;
		
		case 0x00000007:
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_648) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_608)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_696)) < 2)
			{
				Function_316(&uLocal_979, 39, 0, 4294967295, 4294967295);
			}
			Function_376();
			if (Function_338())
			{
				ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
				ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
				ENABLE_VEHICLE_SEAT(bLocal_730, 3, 0);
				ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
				Function_241(&iLocal_739);
				Function_240(8);
			}
			break;
		
		case 0x00000008:
			Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
			if (Function_295(&iLocal_739) <= 3.0f && !((IS_ANY_SPEECH_PLAYING(Global_34573) || IS_ANY_SPEECH_PLAYING(bLocal_727)) || IS_ANY_SPEECH_PLAYING(bLocal_728)))
			{
				if (Function_288("$/cutscene/FBI_05_CS05_B/FBI_05_CS05_B", &Local_716, &Local_653, &iLocal_723, 61192, 72422, 72307, 60589, 60569, 54800, 0, 1, 1, 2, 2, 0, 1))
				{
					if (IS_VOLUME_VALID((*&Local_4 + 732)[7]))
					{
						DESTROY_VOLUME((*&Local_4 + 732)[7]);
					}
					HUD_CLEAR_OBJECTIVE();
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1168)[1])))
					{
						ADD_BLIP_FOR_OBJECT((*&Local_4 + 1168)[1], 330, 0f, 2, 0);
					}
					if (IS_OBJECT_ANIMATOR_VALID(bLocal_931))
					{
						DESTROY_OBJECT_ANIMATOR(bLocal_931);
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_728, bLocal_730, true);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_330(bLocal_730, bLocal_728);
					if (HUD_IS_FADED())
					{
						Function_292(1.0f);
					}
					Function_316(&uLocal_979, 60, 0, 4294967295, 4294967295);
					Function_240(9);
				}
			}
			break;
		
		case 0x00000009:
			if (iLocal_971)
			{
				iLocal_971 = 0;
			}
			if (!ACTOR_HAS_ANIM_SET(bLocal_729, "FBI05_injured_guy_in_car"))
			{
				TASK_STAND_STILL(bLocal_729, -1.0f, 0, 0);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_729, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car", 1);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car/Loop");
			}
			if (Function_338())
			{
				if (IS_ACTOR_VALID(bLocal_727))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_727);
				}
				if (IS_ACTOR_VALID(bLocal_728))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_728);
				}
				if (IS_ACTOR_VALID(bLocal_729))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_729);
				}
				Function_240(106);
			}
			break;
		
		case 0x00000069:
			if ((Function_295(&iLocal_739) < 0,5f && !IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_295(&iLocal_739) < 6.0f)
			{
				Function_244(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			Function_329();
			iLocal_783[4] = 1;
			iLocal_723 = 101;
			Function_240(0);
			break;
	}
	return;
}

void Function_329() //Position: 0xEC43 / 60483
{
	Function_171();
	Function_212(bLocal_733);
	Function_212(bLocal_734[0]);
	Function_212(bLocal_734[1]);
	Function_212(bLocal_734[2]);
	return;
}

void Function_330(bool bParam0, bool bParam1) //Position: 0xEC6D / 60525
{
	CLEAR_ACTOR_MAX_SPEED(bParam0);
	SET_ACTOR_SPEED(bParam0, 6,4f);
	AI_ACTOR_FORCE_SPEED(bParam1, 2);
	SET_ACTOR_SPEED(bParam1, 6,4f);
	ACTOR_POP_NEXT_GAIT(bParam1, 2, false);
	return;
}

int Function_331() //Position: 0xEC99 / 60569
{
	Function_305(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_332() //Position: 0xECAD / 60589
{
	if (!iLocal_971)
	{
		if (!IS_ACTOR_VALID(bLocal_730))
		{
			Function_333((*&Local_4 + 1120)[3]);
		}
		else
		{
			Function_236(bLocal_730, (*&Local_4 + 1120)[3], 1, 1, 1);
		}
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(bLocal_727);
	if (GET_VEHICLE(bLocal_727) != bLocal_730)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	}
	TASK_CLEAR(bLocal_728);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, false) != bLocal_728)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != bLocal_729)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_729, bLocal_730, 3);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 2) != Global_34573)
	{
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	}
	RESET_ANIM_SET_FOR_ACTOR(bLocal_729, 0);
	SET_ANIM_SET_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car", 1);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car/Loop");
	iLocal_946 = 1;
	TASK_CLEAR(bLocal_728);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2500, 5, 0, 0, 1, false);
	TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 4);
	TASK_PRIORITY_SET(bLocal_728, true);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	FORCE_VEHICLE_CINEMATIC_CAMERA(1);
	Function_330(bLocal_730, bLocal_728);
	ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 3, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
	return 1;
}

void Function_333(bool bParam0) //Position: 0xEE22 / 60962
{
	if (IS_ACTOR_VALID(bLocal_730))
	{
	}
	else
	{
		Function_256(bParam0);
		Function_336(bParam0);
		bLocal_730 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Car", 1194, Function_256(bParam0), Function_336(bParam0));
		SET_ACTOR_UPDATE_PRIORITY(bLocal_730, false);
		if (Function_230(bLocal_730, 1))
		{
			Function_319(bLocal_730, 1);
		}
		Function_231(bLocal_730);
		fLocal_779 = -1.0f;
		Function_221(&(Local_851[217]), bLocal_730, "Car", 0, 0x5f5e100, 1);
		Function_334(&(Local_851[217]), 8);
	}
	return;
}

void Function_334(int iParam0, int iParam1) //Position: 0xEE96 / 61078
{
	if (iParam1 != 100000000)
	{
		Function_335(iParam0, iParam1);
	}
	else
	{
		Function_223(iParam0, 1);
	}
	return;
}

void Function_335(int iParam0, bool bParam1) //Position: 0xEEB6 / 61110
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

vector3 Function_336(bool bParam0) //Position: 0xEEE1 / 61153
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

int Function_337() //Position: 0xEF08 / 61192
{
	Function_312(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_256((*&Local_4 + 2316)[0]);
	Function_310(StackVal, StackVal, bLocal_652, Function_256((*&Local_4 + 2316)[0]), &Local_4 + 732[7], 0, 0.0f, 0.0f, 0.0f, 0, 1);
	if (IS_OBJECT_ANIMATOR_VALID(bLocal_931))
	{
		DESTROY_OBJECT_ANIMATOR(bLocal_931);
	}
	return 1;
}

bool Function_338() //Position: 0xEF4C / 61260
{
	Function_587();
	if (iLocal_801 && !iLocal_795)
	{
		Function_372(1);
	}
	if (!iLocal_794 && iLocal_991 == 3)
	{
		Function_364(&iLocal_742, 45.0f, 100.0f, bLocal_730, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_790, 0, 0, 0, 325, 1);
	}
	if (((((((iLocal_991 <= 6 && !iLocal_802) && (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))) && !Function_131()) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !iLocal_803) && !iLocal_795) && !iLocal_794)
	{
		Function_359();
	}
	switch (iLocal_991)
	{
		case 0x00000000:
			Function_358(1);
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_357();
				Function_241(&iLocal_739);
				iLocal_991 = 1;
			}
			break;
		
		case 0x00000001:
			Function_358(1);
			if (!iLocal_945)
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_730, (*&Local_4 + 732)[4]))
				{
					iLocal_945 = 1;
				}
			}
			if ((iLocal_945 && Function_614(Global_34573, bLocal_730, 2)) && !Function_297(&iLocal_754))
			{
				iLocal_991 = 3;
				return 1;
			}
			break;
		
		case 0x00000003:
			if (iLocal_959)
			{
				iLocal_959 = 0;
			}
			if (!iLocal_808)
			{
			}
		}
	}
}
}

bool Function_339(bool bParam0) //Position: 0xF41B / 62491
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bParam0)
	{
		bVar0 = (*&Local_4 + 1616)[3];
		bVar1 = (*&Local_4 + 1616)[2];
	}
	else
	{
		bVar0 = (*&Local_4 + 1616)[1];
		bVar1 = (*&Local_4 + 1616)[0];
	}
	switch (iLocal_987)
	{
		case 0x00000000:
			if (HUD_IS_FADED())
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 2) == Global_34573)
				{
					bLocal_781 = 2;
				}
				else
				{
					bLocal_781 = 3;
				}
				Function_315(Global_34573);
				Function_256(bVar0);
				Function_340(VDIST(Function_315(Global_34573), Function_256(bVar0)));
				Function_236(Global_34573, bVar0, 1, 1, 1);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				HUD_ENABLE(true);
				Function_241(&iLocal_739);
				iLocal_987 = 1;
				return 0;
			}
			break;
		
		case 0x00000001:
			Function_256(bVar0);
			if (STREAMING_IS_WORLD_LOADED() && STREAMING_ARE_BOUNDS_LOADED(Function_256(bVar0), 50.0f))
			{
				Function_241(&iLocal_739);
				iLocal_987 = 2;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_236(bLocal_730, bVar1, 1, 1, 1);
			Function_241(&iLocal_739);
			iLocal_987 = 3;
			return 0;
			break;
		
		case 0x00000003:
			Function_256(bVar0);
			if (STREAMING_IS_WORLD_LOADED() && STREAMING_ARE_BOUNDS_LOADED(Function_256(bVar0), 50.0f))
			{
				SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, bLocal_781);
				SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
				iLocal_959 = 1;
				bVar2 = GET_PHYSINST_FROM_ACTOR(bLocal_730);
				ACTIVATE_PHYSINST(bVar2);
				if (bParam0)
				{
					TASK_CLEAR(bLocal_728);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2500, 5, 0, 0, 1, false);
					AI_ACTOR_FORCE_SPEED(bLocal_728, 4);
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 4);
				}
				else
				{
					TASK_CLEAR(bLocal_728);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2460, 4, 0, 0, 1, false);
				}
				Function_241(&iLocal_739);
				iLocal_987 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Function_295(&iLocal_739) < 1,5f)
			{
				SET_PLAYER_CONTROL(0, 1, 1, 1);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_794 = 0;
				Function_241(&iLocal_739);
				if (bParam0)
				{
					iLocal_991 = 6;
				}
				else
				{
					iLocal_986 = 3;
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_340(bool bParam0) //Position: 0xF5DF / 62943
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_341() //Position: 0xF5F7 / 62967
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_ArriveAtOffice", "FBI05_ArriveAtOffice", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_342(int iParam0) //Position: 0xF648 / 63048
{
	Function_343(0, Global_34573, iParam0, 0);
	Function_343(1, bLocal_727, iParam0, 0);
	Function_343(2, bLocal_728, iParam0, 0);
	Function_343(3, bLocal_729, iParam0, 0);
	return;
}

void Function_343(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xF676 / 63094
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_151(uParam2, Function_137(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_344() //Position: 0xF69B / 63131
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_ArriveBlakwatr_v1_AA", "FBI05_ArriveBlakwatr_v1_AA", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_ArriveBlakwatr_v1_AB", "FBI05_ArriveBlakwatr_v1_AB", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_ArriveBlakwatr_v1_AC", "FBI05_ArriveBlakwatr_v1_AC", false, 4, 0, 0, 1);
		Function_342(15);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_345(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xF77F / 63359
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

bool Function_346() //Position: 0xF7D2 / 63442
{
	if (!Function_364(&iLocal_742, 45.0f, 100.0f, bLocal_730, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_790, 0, 0, 0, 325, 1))
	{
		if (iLocal_992 <= 6)
		{
			Function_201(bLocal_730);
		}
	}
	else if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_730)))
	{
		ADD_BLIP_FOR_ACTOR(bLocal_730, 325, 0, 2, 0);
		SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_730), "FBI05_CarBlip");
	}
	if (iLocal_992 <= 0 && iLocal_992 > 5)
	{
	}
	Function_355();
	switch (iLocal_992)
	{
		case 0x00000000:
			iLocal_792 = 1;
			Function_241(&iLocal_739);
			iLocal_992 = 1;
			return 0;
			break;
		
		case 0x00000001:
			if (!bLocal_796)
			{
				bLocal_796 = true;
				TASK_CROUCH(bLocal_728, -1.0f);
				MEMORY_ALLOW_SHOOTING(bLocal_728, false);
				Function_354(Local_4.f_648, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_354(Local_4.f_608, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_354(Local_4.f_696, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			if (bLocal_796)
			{
				bLocal_780 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(false);
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_993[7], -1.0f, 1086324736);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				Function_351(bLocal_727, Local_4.f_648, 1);
				Function_351(bLocal_727, Local_4.f_696, 1);
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_780);
				TASK_SEQUENCE_RELEASE(bLocal_780, 1);
				Function_241(&iLocal_739);
				iLocal_992 = 2;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000002:
			if (Function_295(&iLocal_739) <= 5.0f)
			{
				Function_345("FBI05_obj03_carbust", 0x40f00000, 1, 2, 0, 0, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1168)[1])))
				{
					Function_239((*&Local_4 + 1168)[1]);
				}
				Function_241(&iLocal_739);
				iLocal_992 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			if (Function_348(Global_34573, bLocal_730, 40.0f))
			{
				if (Function_295(&iLocal_739) <= 5.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) <= 10.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_JonNoShootAttakrs", "FBI05_JonNoShootAttakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
						Function_241(&iLocal_739);
					}
					else
					{
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_RossShoutsEnc", "FBI05_RossShoutsEnc", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
								Function_241(&iLocal_739);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_EncoFixCar", "FBI05_EncoFixCar", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
								Function_241(&iLocal_739);
								break;
							
							case 0x00000002:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_RosYellsAttakrs", "FBI05_RosYellsAttakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
								Function_241(&iLocal_739);
								break;
							}
						}
				}
			}
			else if (Function_295(&iLocal_739) <= 5.0f)
			{
				switch (RAND_INT_RANGE(false, true))
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_RunsAwayCombat", "FBI05_RunsAwayCombat", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						Function_241(&iLocal_739);
						break;
					
					case 0x00000001:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_RunsAwayCombat2", "FBI05_RunsAwayCombat2", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						Function_241(&iLocal_739);
						break;
					}
			}
			if (Function_347(Local_4.f_648) >= 0 && Function_347(Local_4.f_696) >= 0)
			{
				iLocal_792 = 0;
				Function_241(&iLocal_739);
				UNK_0xE18028C1(bLocal_810);
				iLocal_992 = 4;
				return 1;
			}
			return 0;
			break;
		
		case 0x00000004:
			if (Function_295(&iLocal_739) <= (2.0f + 2.0f))
			{
				SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
				TASK_CLEAR(bLocal_727);
				ACTOR_HOLSTER_WEAPON(bLocal_727, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_727, 1);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_727, bLocal_730, 1, 1, 0);
				TASK_PRIORITY_SET(bLocal_727, true);
				Function_241(&iLocal_739);
				iLocal_992 = 5;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000005:
			TASK_CLEAR(bLocal_728);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
			bLocal_780 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 0, 1, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
			TASK_SEQUENCE_RELEASE(bLocal_780, 1);
			Function_241(&iLocal_739);
			iLocal_992 = 6;
			return 0;
			break;
		
		case 0x00000006:
			if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 2) != Global_34573)
			{
				if (Function_295(&iLocal_739) <= 5.0f)
				{
					Function_345("FBI05_obj01a", 0x40f00000, 1, 2, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_730)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_730, 325, 0, 2, 0);
						SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_730), "FBI05_CarBlip");
					}
					Function_241(&iLocal_739);
					iLocal_992 = 7;
					return 0;
				}
			}
			Function_241(&iLocal_739);
			iLocal_992 = 7;
			return 0;
			return 0;
			break;
		
		case 0x00000007:
			if (Function_614(Global_34573, bLocal_730, 2))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_730)))
				{
					Function_201(bLocal_730);
					CLEAR_PRINTED_OBJECTIVE();
				}
			}
			if (((Function_614(bLocal_728, bLocal_730, 0) && Function_614(bLocal_727, bLocal_730, 1)) && Function_614(bLocal_729, bLocal_730, 3)) && Function_614(Global_34573, bLocal_730, 2))
			{
				CLEAR_PRINTED_OBJECTIVE();
				Function_201(bLocal_730);
				START_VEHICLE(bLocal_730);
				TASK_CLEAR(bLocal_728);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2500, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 4);
				TASK_PRIORITY_SET(bLocal_728, true);
				return 1;
			}
			break;
	}
	return 0;
}

int Function_347(bool bParam0) //Position: 0xFDEB / 65003
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
				if (!IS_ACTOR_HOGTIED(bVar2))
				{
					iVar1++;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_348(var uParam0, bool bParam1, float fParam2) //Position: 0xFE44 / 65092
{
	float fVar0;
	
	fVar0 = Function_349(uParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

float Function_349(bool bParam0, bool bParam1) //Position: 0xFE61 / 65121
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_350(&uVar0, &uVar3);
	return iVar6;
}

var Function_350(var uParam0, int iParam1) //Position: 0xFE80 / 65152
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_351(bool bParam0, bool bParam1, int iParam2) //Position: 0xFE9E / 65182
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
				Function_352(&bParam0, bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_352(var uParam0, bool bParam1, bool bParam2) //Position: 0xFEE8 / 65256
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_353(bParam1);
			vVar0 = { StackVal, StackVal, Function_353(bParam1) };
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

vector3 Function_353(bool bParam0) //Position: 0xFFF0 / 65520
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

void Function_354(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1005B / 65627
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

void Function_355() //Position: 0x10145 / 65861
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= Function_356(Local_4.f_696))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_696, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(bVar1, (*&Local_4 + 732)[1]))
			{
				AI_GOAL_SHOOT_CLEAR(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

int Function_356(bool bParam0) //Position: 0x1018D / 65933
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

void Function_357() //Position: 0x101DD / 66013
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Back2Blakwter_v1_AA", "FBI05_Back2Blakwter_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AB", "FBI05_Back2Blakwter_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Back2Blakwter_v1_AC", "FBI05_Back2Blakwter_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AD", "FBI05_Back2Blakwter_v1_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Back2Blakwter_v1_AE", "FBI05_Back2Blakwter_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AF", "FBI05_Back2Blakwter_v1_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3750", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Back2Blakwter_v1_AG", "FBI05_Back2Blakwter_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AH", "FBI05_Back2Blakwter_v1_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Back2Blakwter_v1_AI1", "FBI05_Back2Blakwter_v1_AI1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Back2Blakwter_v1_AI2", "FBI05_Back2Blakwter_v1_AI2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Back2Blakwter_v1_AI3", "FBI05_Back2Blakwter_v1_AI3", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2440", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Back2Blakwter_v1_AJ", "FBI05_Back2Blakwter_v1_AJ", false, 1, 0, 0, 1);
		Function_342(15);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_358(bool bParam0) //Position: 0x10548 / 66888
{
	if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		if (!iLocal_797)
		{
			if (!bParam0)
			{
				if (!IS_ACTOR_IN_VOLUME(bLocal_730, (*&Local_4 + 840)[4]))
				{
					iLocal_797 = 1;
					Function_241(&iLocal_739);
					iLocal_986 = 4;
				}
			}
			else
			{
				Function_241(&iLocal_739);
				iLocal_991 = 4;
			}
		}
	}
	return;
}

void Function_359() //Position: 0x10592 / 66962
{
	if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_DriveBak2Blackwater_v1_Ac"))
	{
		Function_363();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_DriveBak2Blackwater_v3_AA"))
	{
		Function_362();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_JRBanterDriveBak_v1_AA"))
	{
		Function_361();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_JRBanterDriveBak2_v1_AA"))
	{
		Function_360();
	}
	return;
}

void Function_360() //Position: 0x1064F / 67151
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak2_v1_AA", "FBI05_JRBanterDriveBak2_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_JRBanterDriveBak2_v1_AB", "FBI05_JRBanterDriveBak2_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak2_v1_AC1", "FBI05_JRBanterDriveBak2_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak2_v1_AC2", "FBI05_JRBanterDriveBak2_v1_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak2_v1_AC3", "FBI05_JRBanterDriveBak2_v1_AC3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak2_v1_AC4", "FBI05_JRBanterDriveBak2_v1_AC4", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_JRBanterDriveBak2_v1_AD", "FBI05_JRBanterDriveBak2_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak2_v1_AE", "FBI05_JRBanterDriveBak2_v1_AE", false, 1, 0, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_361() //Position: 0x108B9 / 67769
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "FBI05_JRBanterDriveBak_v1_AA", "FBI05_JRBanterDriveBak_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak_v1_AB", "FBI05_JRBanterDriveBak_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_JRBanterDriveBak_v1_AC", "FBI05_JRBanterDriveBak_v1_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JRBanterDriveBak_v1_AD", "FBI05_JRBanterDriveBak_v1_AD", false, 1, 0, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362() //Position: 0x109EF / 68079
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v3_AA", "FBI05_DriveBak2Blackwater_v3_AA", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v3_AB", "FBI05_DriveBak2Blackwater_v3_AB", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v3_AC", "FBI05_DriveBak2Blackwater_v3_AC", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v3_AD1", "FBI05_DriveBak2Blackwater_v3_AD1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v3_AD2", "FBI05_DriveBak2Blackwater_v3_AD2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v3_AD3", "FBI05_DriveBak2Blackwater_v3_AD3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v3_AD4", "FBI05_DriveBak2Blackwater_v3_AD4", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v3_AE", "FBI05_DriveBak2Blackwater_v3_AE", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v3_AF", "FBI05_DriveBak2Blackwater_v3_AF", false, 4, 0, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_363() //Position: 0x10CC6 / 68806
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_DriveBak2Blackwater_v1_AC", "FBI05_DriveBak2Blackwater_v1_AC", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v1_AD1", "FBI05_DriveBak2Blackwater_v1_AD1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v1_AD2", "FBI05_DriveBak2Blackwater_v1_AD2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v1_AE", "FBI05_DriveBak2Blackwater_v1_AE", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v1_AF", "FBI05_DriveBak2Blackwater_v1_AF", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v1_AG1", "FBI05_DriveBak2Blackwater_v1_AG1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DriveBak2Blackwater_v1_AG2", "FBI05_DriveBak2Blackwater_v1_AG2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_DriveBak2Blackwater_v1_AH", "FBI05_DriveBak2Blackwater_v1_AH", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v1_AI1", "FBI05_DriveBak2Blackwater_v1_AI1", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DriveBak2Blackwater_v1_AI2", "FBI05_DriveBak2Blackwater_v1_AI2", true, 4, 0, 0, 1);
		Function_342(15);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_364(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x10FEF / 69615
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_371(Global_34573, bParam3, iParam2))
	{
		Function_249(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_371(Global_34573, bParam3, bParam1))
	{
		if (!Function_370(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_345(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_369(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_368(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_368(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_370(2))
	{
		Function_367(2);
		if (!Function_366())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_365();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_201(bParam3);
				Function_239(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_368(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_368(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_365() //Position: 0x11183 / 70019
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

bool Function_366() //Position: 0x111AE / 70062
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

void Function_367(bool bParam0) //Position: 0x111F2 / 70130
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

void Function_368(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x11255 / 70229
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

void Function_369(bool bParam0) //Position: 0x112F6 / 70390
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

bool Function_370(bool bParam0) //Position: 0x11359 / 70489
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_151(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_371(bool bParam0, bool bParam1, bool bParam2) //Position: 0x113A0 / 70560
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

void Function_372(bool bParam0) //Position: 0x114B1 / 70833
{
	if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
		{
			if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_738))
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
				iLocal_795 = 1;
				iLocal_794 = 1;
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (bParam0)
				{
					Function_241(&iLocal_739);
					if (iLocal_959)
					{
						iLocal_959 = 0;
					}
					Function_85(17, 1, 0, 0);
					iLocal_991 = 7;
				}
				else
				{
					if (iLocal_959)
					{
						iLocal_959 = 0;
					}
					Function_241(&iLocal_739);
					Function_85(17, 1, 0, 0);
					iLocal_986 = 6;
				}
			}
		}
		else
		{
			bLocal_738 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	return;
}

void Function_373() //Position: 0x11584 / 71044
{
	Function_375();
	Function_374();
	RESET_ANIM_SET_FOR_ACTOR(bLocal_729, 0);
	SET_ANIM_SET_FOR_ACTOR(bLocal_729, "FBI05_Nastas_Backseat", 1);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_729, "FBI05_Nastas_Backseat/Nastas_Backseat_idle");
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iLocal_991 = 3;
	return;
}

void Function_374() //Position: 0x115F6 / 71158
{
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2516, 4, 1, 0, 1, false);
	TASK_KILL_CHAR(false, Global_34573);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 612)[02], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2524, 3, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_993[1], -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 612)[12], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2524, 3, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, bLocal_993[2], -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 612)[22], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2520, 4, 1, 0, 1, false);
	TASK_KILL_CHAR(false, Global_34573);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 612)[32], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2504, 3, 1, 0, 1, false);
	TASK_KILL_CHAR(false, bLocal_727);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 588)[02], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2508, 3, 1, 0, 1, false);
	TASK_KILL_CHAR(false, Global_34573);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 588)[12], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	return;
}

void Function_375() //Position: 0x1175E / 71518
{
	ATTACH_OBJECTS(bLocal_734[0], (*&Local_4 + 652)[02], Function_53(), 0.0f, 8.0f, -7.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	AI_GOAL_SHOOT_AT_OBJECT((*&Local_4 + 652)[02], bLocal_734[0]);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2528, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 652)[02], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	ATTACH_OBJECTS(bLocal_734[1], (*&Local_4 + 652)[12], Function_53(), 0.0f, 8.0f, -7.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	AI_GOAL_SHOOT_AT_OBJECT((*&Local_4 + 652)[12], bLocal_734[1]);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2536, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 652)[12], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	ATTACH_OBJECTS(bLocal_734[2], (*&Local_4 + 652)[22], Function_53(), 0.0f, 8.0f, -7.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	AI_GOAL_SHOOT_AT_OBJECT((*&Local_4 + 652)[22], bLocal_734[2]);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2532, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 652)[22], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2536, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 652)[32], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2532, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 652)[42], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	return;
}

void Function_376() //Position: 0x118F8 / 71928
{
	if (!iLocal_933)
	{
		bLocal_930 = GET_PHYSINST_FROM_OBJECT(bLocal_730);
		if (IS_PHYSINST_VALID(bLocal_930))
		{
			bLocal_931 = GET_OBJECT_ANIMATOR_ON_OBJECT(bLocal_930);
			if (!IS_OBJECT_ANIMATOR_VALID(bLocal_931))
			{
				bLocal_931 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bLocal_930, "fix_car", "fix_car", "fix_car/car/car_afer/pst");
				iLocal_933 = 1;
			}
			if (!IS_OBJECT_ANIMATOR_VALID(bLocal_931))
			{
				LOG_ERROR("Failed to create object animator on 'CARRRR'!");
			}
		}
		else
		{
			LOG_ERROR("Failed to get physinst from 'CARRRR'!");
		}
	}
	else if (IS_OBJECT_ANIMATOR_READY(bLocal_931))
	{
		if (GET_TASK_STATUS(bLocal_728, 19) != 1)
		{
			TASK_USE_GRINGO(bLocal_728, GET_GRINGO_FROM_OBJECT(bLocal_932), "UseCase1", 4294967295, 1);
		}
		if (IS_ACTION_NODE_PLAYING(bLocal_728, "fix_car/fix_car_before/pre"))
		{
			if (iLocal_934 != 1)
			{
				SET_OBJECT_ANIMATOR_NODE(bLocal_931, "/global/fix_car/car/car_before/pre");
				iLocal_934 = 1;
			}
		}
	}
	return;
}

int Function_377() //Position: 0x11A5F / 72287
{
	Function_305(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_378() //Position: 0x11A73 / 72307
{
	if (!iLocal_971)
	{
		if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
		}
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(Global_12976.f_36);
		}
		if (!IS_ACTOR_VALID(bLocal_730))
		{
			Function_333((*&Local_4 + 1120)[3]);
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_730);
		}
		else
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_730);
			Function_236(bLocal_730, (*&Local_4 + 1120)[3], 1, 1, 1);
		}
		iLocal_971 = 1;
	}
	return 1;
}

int Function_379() //Position: 0x11AE6 / 72422
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	return 1;
}

int Function_380() //Position: 0x11AF2 / 72434
{
	Function_312(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_256((*&Local_4 + 2316)[0]);
	Function_310(StackVal, StackVal, bLocal_652, Function_256((*&Local_4 + 2316)[0]), &Local_4 + 732[7], 0, 0.0f, 0.0f, 0.0f, 0, 1);
	if (IS_ACTOR_IN_VOLUME(bLocal_730, (*&Local_4 + 732)[7]))
	{
	}
	return 1;
}

int Function_381() //Position: 0x11B3B / 72507
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!iLocal_971)
	{
		if (!IS_ACTOR_VALID(bLocal_730))
		{
			Function_333((*&Local_4 + 1120)[3]);
		}
		else
		{
			Function_236(bLocal_730, (*&Local_4 + 1120)[3], 1, 1, 1);
		}
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != bLocal_729)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_729, bLocal_730, 3);
	}
	RESET_ANIM_SET_FOR_ACTOR(bLocal_729, 0);
	SET_ANIM_SET_FOR_ACTOR(bLocal_729, "FBI05_Nastas_Backseat", 1);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_729, "FBI05_Nastas_Backseat/Nastas_Backseat_idle");
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1240[26]), 1, true, 1);
	TASK_CLEAR(bLocal_728);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_728, *(&Local_4 + 1240[116]), 1, true, 1);
	TASK_CLEAR(bLocal_727);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_727, *(&Local_4 + 1240[106]), 1, true, 1);
	iLocal_946 = 0;
	Function_316(&uLocal_979, 40, 0, 4294967295, 4294967295);
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 2, 0);
	ACTOR_ADD_WEAPON_AMMO(Global_34573, 2, 9.0f);
	GET_POSITION(bLocal_730, &vVar0);
	vVar3 = { 0.0f, GET_HEADING(bLocal_730), 0.0f };
	bLocal_932 = CREATE_GRINGO_IN_LAYOUT(bLocal_652, "nfixGringo", "fix_car", vVar0, vVar3);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_728, bLocal_730, false);
	SNAP_OBJECT_TO_GROUND(bLocal_932, 5.0f, false, 1092616192);
	SNAP_ACTOR_TO_GRINGO(bLocal_728, bLocal_932, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(bLocal_728, GET_GRINGO_FROM_OBJECT(bLocal_932), "UseCase1", 4294967295, 1);
	return 1;
}

void Function_382() //Position: 0x11CFA / 72954
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_255(iLocal_723);
	Function_397(StackVal, StackVal, Function_255(iLocal_723), iLocal_723, Global_30637[0], Function_258(iLocal_723), 5);
	iLocal_991 = 3;
	iLocal_987 = 0;
	iLocal_794 = 0;
	iLocal_795 = 0;
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	GET_ACTOR_AXIS(bLocal_730, &vVar0, 2);
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, 2,5f);
	Function_256(bLocal_730);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, Function_256(bLocal_730), StackVal) };
	Function_336(bLocal_730);
	bLocal_733 = CREATE_POINT_IN_LAYOUT(bLocal_652, Function_53(), vVar3, Function_336(bLocal_730));
	Function_396();
	if (!SQUAD_IS_VALID(Local_4.f_648))
	{
		Function_393();
	}
	if (!SQUAD_IS_VALID(Local_4.f_696))
	{
		Function_384();
	}
	bLocal_782 = false;
	iLocal_802 = 0;
	iLocal_803 = 0;
	Function_229(bLocal_728);
	Function_229(bLocal_729);
	ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 3, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
	bLocal_782 = Function_383();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_782);
	PRINTNL();
	return;
}

bool Function_383() //Position: 0x11E04 / 73220
{
	return Global_34165.f_60;
}

void Function_384() //Position: 0x11E0F / 73231
{
	bLocal_734[0] = CREATE_POINT_IN_LAYOUT(bLocal_652, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	bLocal_734[1] = CREATE_POINT_IN_LAYOUT(bLocal_652, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	bLocal_734[2] = CREATE_POINT_IN_LAYOUT(bLocal_652, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Function_390();
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_696, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_4.f_696, 0, 4294967295, 0);
	Function_389(Local_4.f_696, 1);
	Function_388(Local_4.f_696, 0);
	Function_387(Local_4.f_696, 1);
	Function_385(Local_4.f_696, 60.0f, -1.0f, -1.0f);
	if (IS_ACTOR_VALID(GET_MOUNT((*&Local_4 + 652)[02])))
	{
		Function_231(GET_MOUNT((*&Local_4 + 652)[02]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT((*&Local_4 + 652)[12])))
	{
		Function_231(GET_MOUNT((*&Local_4 + 652)[12]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT((*&Local_4 + 652)[22])))
	{
		Function_231(GET_MOUNT((*&Local_4 + 652)[22]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT((*&Local_4 + 652)[32])))
	{
		Function_231(GET_MOUNT((*&Local_4 + 652)[32]));
	}
	if (IS_ACTOR_VALID(GET_MOUNT((*&Local_4 + 652)[42])))
	{
		Function_231(GET_MOUNT((*&Local_4 + 652)[42]));
	}
	return;
}

void Function_385(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x11F32 / 73522
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
			Function_386(bVar1, bParam1, fParam2, fParam3);
		}
		bVar0++;
	}
}

void Function_386(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x11F78 / 73592
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

void Function_387(bool bParam0, bool bParam1) //Position: 0x11FBF / 73663
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_388(bool bParam0, int iParam1) //Position: 0x11FFD / 73725
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

void Function_389(bool bParam0, bool bParam1) //Position: 0x12034 / 73780
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
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_390() //Position: 0x1207C / 73852
{
	Local_4.f_696 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S4_On_Horse"));
	(*&Local_4 + 652)[02] = Function_391(Local_4, "S4_On_Horse_0", 475, Function_53(), 980, 496,2011f, 96,04275f, 1847,328f, 3,54203f, -89,83283f, -3,542015f);
	SQUAD_JOIN((*&Local_4 + 652)[02], Local_4.f_696);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[02]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[02], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 652)[02], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 652)[02], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[02], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[02], 19);
	(*&Local_4 + 652)[12] = Function_391(Local_4, "S4_On_Horse_1", 470, Function_53(), 980, 503,958f, 96,88577f, 1855,783f, 0,0689053f, -81,37999f, -0,06812695f);
	SQUAD_JOIN((*&Local_4 + 652)[12], Local_4.f_696);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[12]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[12], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 652)[12], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 652)[12], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[12], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[12], 19);
	(*&Local_4 + 652)[22] = Function_391(Local_4, "S4_On_Horse_2", 469, Function_53(), 980, 498,3035f, 97,05173f, 1838,02f, 179,9358f, -80,74902f, -179,9366f);
	SQUAD_JOIN((*&Local_4 + 652)[22], Local_4.f_696);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[22]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[22], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[22], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 652)[22], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 652)[22], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[22], 19);
	(*&Local_4 + 652)[32] = Function_391(Local_4, "S4_On_Horse_3", 469, Function_53(), 980, 525,9341f, 96,80964f, 1853,934f, 179,9358f, -80,74902f, -179,9366f);
	SQUAD_JOIN((*&Local_4 + 652)[32], Local_4.f_696);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[32]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[32], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[32], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[32], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 652)[32], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 652)[32], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[32], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[32], 19);
	(*&Local_4 + 652)[42] = Function_391(Local_4, "S4_On_Horse_4", 469, Function_53(), 980, 517,6711f, 98,38428f, 1828f, 179,9358f, -80,74902f, -179,9366f);
	SQUAD_JOIN((*&Local_4 + 652)[42], Local_4.f_696);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[42]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 652)[42], 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[42], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 652)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[42], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 652)[42], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 652)[42], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 652)[42], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 652)[42], 19);
	return;
}

var Function_391(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x124E4 / 74980
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_392(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_392(bParam4))
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

bool Function_392(int iParam0) //Position: 0x12609 / 75273
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_393() //Position: 0x12620 / 75296
{
	Function_395();
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_648, 0);
	Function_388(Local_4.f_648, 0);
	Function_387(Local_4.f_648, 1);
	Function_385(Local_4.f_648, 55.0f, -1.0f, -1.0f);
	Function_394();
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_608, 0);
	Function_388(Local_4.f_608, 0);
	Function_387(Local_4.f_608, 1);
	Function_385(Local_4.f_608, 70.0f, -1.0f, -1.0f);
	return;
}

void Function_394() //Position: 0x12682 / 75394
{
	Local_4.f_608 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S4_On_Foot_Suicide"));
	(*&Local_4 + 588)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S4_On_Foot_S_0", 467, 521,2134f, 97,79358f, 1846,183f, 179,8777f, -85,1546f, -179,8782f);
	SQUAD_JOIN((*&Local_4 + 588)[02], Local_4.f_608);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 588)[02], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[02], 19);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[02], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[02], 19);
	(*&Local_4 + 588)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S4_On_Foot_S_1", 468, 517,86f, 97,63512f, 1840,188f, 0,6462166f, -89,08427f, -0,6461341f);
	SQUAD_JOIN((*&Local_4 + 588)[12], Local_4.f_608);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 588)[12], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 588)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[12], 19);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 588)[12], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 588)[12], 19);
	return;
}

void Function_395() //Position: 0x127D4 / 75732
{
	Local_4.f_648 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "S4_On_Foot"));
	(*&Local_4 + 612)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S4_On_Foot_0", 472, 512.0f, 97,20816f, 1845,061f, 0,0514631f, -78,42332f, -0,05041619f);
	SQUAD_JOIN((*&Local_4 + 612)[02], Local_4.f_648);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 612)[02], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 612)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[02], 19);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 612)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[02], 19);
	(*&Local_4 + 612)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S4_On_Foot_1", 470, 513,0648f, 98,33385f, 1838,739f, 0,6462166f, -89,08427f, -0,6461341f);
	SQUAD_JOIN((*&Local_4 + 612)[12], Local_4.f_648);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 612)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 612)[12]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 612)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 612)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 612)[12], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 612)[12], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 612)[12], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 612)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[12], 19);
	(*&Local_4 + 612)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S4_On_Foot_2", 468, 516,4941f, 97,17768f, 1845,802f, 0,04339444f, -76,23189f, -0,04214793f);
	SQUAD_JOIN((*&Local_4 + 612)[22], Local_4.f_648);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 612)[22], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 612)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[22], 19);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 612)[22], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[22], 19);
	(*&Local_4 + 612)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S4_On_Foot_3", 476, 504,5745f, 97,18886f, 1849,391f, 0,03852041f, -74,44838f, -0,03711015f);
	SQUAD_JOIN((*&Local_4 + 612)[32], Local_4.f_648);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 612)[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 612)[32]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 612)[32], 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[32], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 612)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 612)[32], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 612)[32], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 612)[32], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 612)[32], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 612)[32], 19);
	return;
}

void Function_396() //Position: 0x12AC2 / 76482
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	Function_256((*&Local_4 + 2316)[5]);
	vVar1 = { StackVal, StackVal, Function_256((*&Local_4 + 2316)[5]) };
	bVar4 = GET_OBJECT_HEADING((*&Local_4 + 2316)[5]);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 2,5f, bVar4, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
	}
	else
	{
		bLocal_993[0] = bVar0;
	}
	Function_256((*&Local_4 + 2316)[6]);
	vVar1 = { StackVal, StackVal, Function_256((*&Local_4 + 2316)[6]) };
	bVar4 = GET_OBJECT_HEADING((*&Local_4 + 2316)[6]);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 2,5f, bVar4, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
	}
	else
	{
		bLocal_993[1] = bVar0;
	}
	Function_256((*&Local_4 + 2316)[7]);
	vVar1 = { StackVal, StackVal, Function_256((*&Local_4 + 2316)[7]) };
	bVar4 = GET_OBJECT_HEADING((*&Local_4 + 2316)[7]);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 2,5f, bVar4, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
	}
	else
	{
		bLocal_993[2] = bVar0;
	}
	Function_256((*&Local_4 + 2316)[8]);
	vVar1 = { StackVal, StackVal, Function_256((*&Local_4 + 2316)[8]) };
	bVar4 = GET_OBJECT_HEADING((*&Local_4 + 2316)[8]);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 2,5f, bVar4, 360.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
	}
	else
	{
		bLocal_993[4] = bVar0;
	}
	Function_256((*&Local_4 + 2316)[9]);
	vVar1 = { StackVal, StackVal, Function_256((*&Local_4 + 2316)[9]) };
	bVar4 = GET_OBJECT_HEADING((*&Local_4 + 2316)[9]);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 1.0f, bVar4, 90.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
	}
	else
	{
		bLocal_993[6] = bVar0;
	}
	Function_256((*&Local_4 + 2316)[10]);
	vVar1 = { StackVal, StackVal, Function_256((*&Local_4 + 2316)[10]) };
	bVar4 = GET_OBJECT_HEADING((*&Local_4 + 2316)[10]);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 1.0f, bVar4, 90.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
	}
	else
	{
		bLocal_993[7] = bVar0;
	}
	return;
}

void Function_397(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x12C5E / 76894
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
	if (iParam3 != Global_34165.f_48 && !Function_402())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_401(0);
	Function_400();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_399(uParam4, iVar0, iVar1);
	Function_398();
}

void Function_398() //Position: 0x12CFB / 77051
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

void Function_399(int iParam0, bool bParam1, bool bParam2) //Position: 0x12D3C / 77116
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

void Function_400() //Position: 0x12EA2 / 77474
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_401(bool bParam0) //Position: 0x12EC6 / 77510
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

bool Function_402() //Position: 0x12EF5 / 77557
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_403(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x12F10 / 77584
{
	if (Function_404(&iParam0) == iParam7 || Function_402())
	{
		return 1;
	}
	return 0;
}

int Function_404(int iParam0) //Position: 0x12F2F / 77615
{
	if (Function_300(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_405() //Position: 0x12F47 / 77639
{
	Function_220(1);
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[3]);
	}
	else
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[3], 1, 1, 1);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1240[26]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_728, *(&Local_4 + 1240[116]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_727, *(&Local_4 + 1240[106]), 1, true, 1);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != bLocal_729)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_729, bLocal_730, 3);
	}
	return;
}

int Function_406() //Position: 0x13007 / 77831
{
	Function_412(&Local_4 + 300, 467, 2, 0);
	Function_412(&Local_4 + 300, 468, 2, 0);
	Function_412(&Local_4 + 300, 475, 2, 0);
	Function_412(&Local_4 + 300, 980, 2, 0);
	Function_412(&Local_4 + 300, 469, 2, 0);
	if (Function_407(&Local_4 + 300))
	{
		return 1;
	}
	return 0;
}

bool Function_407(bool bParam0) //Position: 0x13061 / 77921
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_411();
	iVar1 = 0;
	if (!Function_169(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_410(bParam0[iVar03], 8);
		}
		else if (Function_409())
		{
			iVar1 = 1;
			Function_410(bParam0[iVar03], 8);
		}
		Function_410(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_169(bParam0[iVar03], 4))
		{
			if (!Function_169(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_169(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_169(bParam0[03], 8) || iVar1));
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
				Function_410(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_169(bParam0[iVar03], 4))
		{
			if (!Function_169(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_410(bParam0[iVar03], 2);
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
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_410(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_410(bParam0[iVar03], 2);
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
	Function_408();
	return 1;
}

void Function_408() //Position: 0x133DC / 78812
{
	if (!Function_313(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_409() //Position: 0x1341C / 78876
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

void Function_410(var uParam0, int iParam1) //Position: 0x13447 / 78919
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_411() //Position: 0x13458 / 78936
{
	if (!Function_313(128))
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

var Function_412(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1349A / 79002
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
			Function_410(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_410(uParam0[iVar03], 8);
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

void Function_413() //Position: 0x1356A / 79210
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1240[26]), 1, true, 1);
	return;
}

void Function_414() //Position: 0x1358F / 79247
{
	bool bVar0;
	
	if (!Function_613())
	{
		return;
	}
	if (iLocal_991 != 3 || bLocal_724 != 8)
	{
	}
	else
	{
		if (!IS_ACTOR_RIDING_VEHICLE(bLocal_727))
		{
			if (GET_TASK_STATUS(bLocal_727, 0) != 1)
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 1, 2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
		}
		if (!IS_ACTOR_RIDING_VEHICLE(bLocal_729))
		{
			if (GET_TASK_STATUS(bLocal_729, 0) != 1)
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 3, 2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_729, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
		}
		if (!IS_ACTOR_RIDING_VEHICLE(bLocal_728))
		{
			if (GET_TASK_STATUS(bLocal_728, 0) != 1)
			{
				SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_728, bLocal_730, true);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 0, 2, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_728, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
			}
		}
	}
	if (bLocal_724 < 4 && bLocal_724 > 9)
	{
		Function_256((*&Local_4 + 2316)[0]);
		Function_415(StackVal, StackVal, "$/cutscene/FBI_05_CS05_B/FBI_05_CS05_B", &uLocal_937, Function_256((*&Local_4 + 2316)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	else if (bLocal_724 > 9)
	{
		Function_256((*&Local_4 + 1120)[4]);
		Function_415(StackVal, StackVal, "$/cutscene/FBI_05_END_SCENE/FBI_05_END_SCENE", &uLocal_937, Function_256((*&Local_4 + 1120)[4]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	return;
}

int Function_415(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x13710 / 79632
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_418(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_419()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_416();
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
	else if ((!Function_418(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_419()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_418(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_416() //Position: 0x13956 / 80214
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
			Function_417(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_417(char* cParam0, vector3 vParam1) //Position: 0x139AA / 80298
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

bool Function_418(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x13AD2 / 80594
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_353(bParam0);
		if (VDIST(Function_353(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_419() //Position: 0x13B5C / 80732
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_420() //Position: 0x13B6B / 80747
{
	bool bVar0;
	
	Function_436();
	switch (bLocal_724)
	{
		case 0x00000000:
			Function_324(0);
			HUD_ENABLE(true);
			Function_229(bLocal_729);
			Function_229(bLocal_728);
			TASK_CLEAR(bLocal_728);
			MEMORY_CLEAR_ALL(bLocal_728);
			TASK_CLEAR(bLocal_729);
			MEMORY_CLEAR_ALL(bLocal_729);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_728, 1);
			DECOR_SET_BOOL(bLocal_727, "ForceAllowRain", false);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_160(81924);
			CLEAR_AMBIENT_OBJECTS_VOLUME(StackVal, 15);
			Function_322(9);
			Function_160(1);
			bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_652, Function_53(), 2, 351,89f, 74,59f, 1963,09f, 0.0f, 0.0f, 0.0f, 150.0f, 150.0f, 150.0f);
			CLEAR_AMBIENT_OBJECTS_VOLUME(bVar0, 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			iLocal_984 = 1;
			if (iLocal_783[2] == 0)
			{
				Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_725 = Global_30637[0];
				if (!Function_321(iLocal_725))
				{
					Function_320(&Local_653);
				}
				Function_435();
				Function_240(1);
			}
			else
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_725) || iLocal_725 != 4294967295))
			{
				Function_434();
				Function_240(2);
			}
			break;
		
		case 0x00000002:
			if (Function_403(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_653, iLocal_723))
			{
				Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
				Function_240(3);
			}
			else
			{
				Function_433();
				Function_431();
				Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
				Function_240(6);
			}
			Function_428();
			break;
		
		case 0x00000003:
			if (Function_288("$/cutscene/FBI_05_CS04/FBI_05_CS04", &Local_716, &Local_653, &iLocal_723, 81861, 81807, 81692, 82201, 81655, 54800, 0, 2, 2, 2, 2, 0, 1))
			{
				Function_240(6);
			}
			break;
		
		case 0x00000006:
			Function_330(bLocal_730, bLocal_728);
			if (iLocal_971)
			{
				iLocal_971 = 0;
			}
			Function_316(&uLocal_979, 60, 0, 4294967295, 4294967295);
			Function_292(1.0f);
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1168)[1])))
			{
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1168)[1], 330, 0f, 2, 0);
			}
			Function_345("FBI05_obj03b", 3,5f, 1, 2, 0, 0, 0);
			Function_240(7);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			iLocal_984 = 0;
			break;
		
		case 0x00000007:
			Function_422(1, 0);
			if (Function_338())
			{
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_421();
				iLocal_783[3] = 1;
				iLocal_723 = 4;
				Function_240(0);
			}
			break;
	}
	return;
}

void Function_421() //Position: 0x13DF6 / 81398
{
	return;
}

void Function_422(bool bParam0, bool bParam1) //Position: 0x13DFC / 81404
{
	if (!bParam0)
	{
		if (!Function_297(&iLocal_769))
		{
			Function_423(&iLocal_769);
		}
		else if (Function_295(&iLocal_769) <= 7.0f)
		{
			SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(bLocal_729, "Nastas_AGONY", 0, 1, 3, 0);
			Function_241(&iLocal_769);
		}
	}
	else if (!Function_297(&iLocal_769))
	{
		Function_423(&iLocal_769);
	}
	else if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bLocal_729)) > 0,2f)
	{
		if (!iLocal_772)
		{
			SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(bLocal_729, "Nastas_PAIN_HIGH", 1, 1, 3, 0);
			Function_241(&iLocal_769);
			CLEAR_LAST_HIT(bLocal_729);
			iLocal_772 = 1;
		}
		else if (Function_295(&iLocal_769) <= 2.0f && !IS_ANY_SPEECH_PLAYING(bLocal_729))
		{
			iLocal_772 = 0;
		}
	}
	else
	{
		if (iLocal_772)
		{
			if (Function_295(&iLocal_769) <= 2.0f && !IS_ANY_SPEECH_PLAYING(bLocal_729))
			{
				iLocal_772 = 0;
			}
		}
		if (!bParam1)
		{
		}
	}
	return;
}

void Function_423(int iParam0) //Position: 0x13EE2 / 81634
{
	if (!Function_297(iParam0))
	{
		Function_242(iParam0, 0.0f);
	}
	return;
}

int Function_424() //Position: 0x13EF7 / 81655
{
	Function_330(bLocal_730, bLocal_728);
	MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
	Function_305(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_425() //Position: 0x13F1C / 81692
{
	if (!iLocal_971)
	{
		if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
		}
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(Global_12976.f_36);
		}
		if (!IS_ACTOR_VALID(bLocal_730))
		{
			Function_333((*&Local_4 + 1120)[2]);
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_730);
		}
		else
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_730);
			Function_236(bLocal_730, (*&Local_4 + 1120)[2], 1, 1, 1);
		}
		iLocal_971 = 1;
	}
	return 1;
}

int Function_426() //Position: 0x13F8F / 81807
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(Global_12976.f_36);
	}
	return 1;
}

int Function_427() //Position: 0x13FC5 / 81861
{
	bool bVar0;
	
	Function_312(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	Function_256((*&Local_4 + 1120)[2]);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_652, "tempcutscenevol", 2, Function_256((*&Local_4 + 1120)[2]), 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 30.0f);
	Function_256((*&Local_4 + 1120)[2]);
	Function_310(StackVal, StackVal, bLocal_652, Function_256((*&Local_4 + 1120)[2]), &bVar0, 0, 0, 0, 0, 1, 1);
	if (IS_ACTOR_IN_VOLUME(bLocal_730, bVar0))
	{
	}
	return 1;
}

void Function_428() //Position: 0x1403D / 81981
{
	Function_255(iLocal_723);
	Function_397(StackVal, StackVal, Function_255(iLocal_723), iLocal_723, Global_30637[0], Function_258(iLocal_723), 5);
	Function_406();
	Function_429();
	iLocal_792 = 0;
	Function_229(bLocal_728);
	Function_229(bLocal_729);
	bLocal_782 = Function_383();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_782);
	PRINTNL();
	return;
}

void Function_429() //Position: 0x1409F / 82079
{
	Function_430(Local_4.f_472);
	Function_430(Local_4.f_452);
	Function_430(Local_4.f_504);
	Function_430(Local_4.f_536);
	Function_430(Local_4.f_560);
	Function_430(Local_4.f_584);
	return;
}

void Function_430(bool bParam0) //Position: 0x140D5 / 82133
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

int Function_431() //Position: 0x14119 / 82201
{
	bool bVar0;
	var uVar1;
	
	if (!iLocal_971)
	{
		if (!IS_ACTOR_VALID(bLocal_730))
		{
			Function_333((*&Local_4 + 1120)[2]);
		}
		else
		{
			Function_236(bLocal_730, (*&Local_4 + 1120)[2], 1, 1, 1);
		}
	}
	bVar0 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		FREE_FROM_HOGTIE(bVar0);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 3, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
	TASK_CLEAR(bLocal_727);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, false) != bLocal_728)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	}
	GET_POSITION(Global_34573, &uVar1);
	TELEPORT_ACTOR(bLocal_727, &uVar1, 1, 1, 1);
	SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(Global_34573);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 2) != Global_34573)
	{
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != bLocal_729)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_729, bLocal_730, 3);
	}
	if (!ACTOR_HAS_ANIM_SET(bLocal_729, "FBI05_injured_guy_in_car"))
	{
		TASK_STAND_STILL(bLocal_729, -1.0f, 0, 0);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_729, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car", 1);
		SET_ACTION_NODE_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car/Loop");
	}
	DECOR_SET_BOOL(Global_34573, "Player_DisablePutOnHorse", false);
	iLocal_946 = 1;
	TASK_CLEAR(bLocal_728);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2500, 5, 0, 0, 1, false);
	AI_ACTOR_FORCE_SPEED(bLocal_728, 4);
	TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 4);
	TASK_PRIORITY_SET(bLocal_728, true);
	if (bLocal_964)
	{
		SET_ALLOW_MELEE_SPECIAL_MOVE(Global_34573, 1);
		SET_ALLOW_MELEE_SPECIAL_MOVE(bLocal_729, 1);
	}
	TASK_CLEAR(Global_34573);
	MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
	SET_ACTION_NODE_FOR_ACTOR(Global_34573, "default_character_main");
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	Function_432();
	iLocal_792 = 0;
	return 1;
}

void Function_432() //Position: 0x1434C / 82764
{
	struct<5> Var0;
	
	GET_ACTOR_AXIS(bLocal_730, &Var0, 2);
	VSCALE(&Var0, -100.0f);
	Var0.f_4 = (StackVal + 0.0f);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_730), false);
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(bLocal_730), &Var0);
	return;
}

void Function_433() //Position: 0x14386 / 82822
{
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[2]);
	}
	else
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[2], 1, 1, 1);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 3, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, false) != bLocal_728)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, true) != bLocal_727)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(Global_34573);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 2) != Global_34573)
	{
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != bLocal_729)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_729, bLocal_730, 3);
	}
	if (!ACTOR_HAS_ANIM_SET(bLocal_729, "FBI05_injured_guy_in_car"))
	{
		TASK_STAND_STILL(bLocal_729, -1.0f, 0, 0);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_729, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car", 1);
		SET_ACTION_NODE_FOR_ACTOR(bLocal_729, "FBI05_injured_guy_in_car/Loop");
	}
	DECOR_SET_BOOL(Global_34573, "Player_DisablePutOnHorse", false);
	iLocal_946 = 1;
	TASK_CLEAR(bLocal_728);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2500, 5, 0, 0, 1, false);
	AI_ACTOR_FORCE_SPEED(bLocal_728, 4);
	TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 4);
	TASK_PRIORITY_SET(bLocal_728, true);
	Function_330(bLocal_730, bLocal_728);
	TASK_CLEAR(Global_34573);
	MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
	SET_ACTION_NODE_FOR_ACTOR(Global_34573, "default_character_main");
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	return;
}

void Function_434() //Position: 0x14577 / 83319
{
	Function_220(1);
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[2]);
	}
	else
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[2], 1, 1, 1);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	Function_236(Global_34573, (*&Local_4 + 1096)[0], 1, 1, 1);
	Function_236(bLocal_728, (*&Local_4 + 1096)[1], 1, 1, 1);
	Function_236(bLocal_729, (*&Local_4 + 1096)[2], 1, 1, 1);
	Function_236(bLocal_727, (*&Local_4 + 1096)[3], 1, 1, 1);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, false) != bLocal_728)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, true) != bLocal_727)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(Global_34573);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 2) != Global_34573)
	{
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 2);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != bLocal_729)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_729, bLocal_730, 3);
	}
	return;
}

void Function_435() //Position: 0x1467D / 83581
{
	Function_236(Global_34573, (*&Local_4 + 1096)[0], 1, 1, 1);
	TASK_CLEAR(Global_34573);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_436() //Position: 0x146A1 / 83617
{
	bool bVar0;
	
	if (!Function_613())
	{
		return;
	}
	if (!iLocal_794)
	{
		Function_364(&iLocal_742, 45.0f, 100.0f, bLocal_730, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_790, 0, 0, 0, 325, 1);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	if (!IS_ACTOR_RIDING_VEHICLE(bLocal_727))
	{
		if (GET_TASK_STATUS(bLocal_727, 0) != 1)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 1, 2, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_727, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	if (!IS_ACTOR_RIDING_VEHICLE(bLocal_729))
	{
		if (GET_TASK_STATUS(bLocal_729, 0) != 1)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 3, 2, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_729, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	if (!IS_ACTOR_RIDING_VEHICLE(bLocal_728))
	{
		if (GET_TASK_STATUS(bLocal_728, 0) != 1)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 0, 2, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	Function_256((*&Local_4 + 2316)[0]);
	Function_415(StackVal, StackVal, "$/cutscene/FBI_05_CS05/FBI_05_CS05", &uLocal_937, Function_256((*&Local_4 + 2316)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	return;
}

void Function_437() //Position: 0x147EA / 83946
{
	bool bVar0;
	
	Function_505();
	switch (bLocal_724)
	{
		case 0x00000000:
			Function_324(0);
			HUD_ENABLE(true);
			Function_160(81924);
			Function_322(9);
			CLEAR_AMBIENT_OBJECTS_VOLUME(StackVal, 15);
			bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_652, Function_53(), 2, 351,89f, 74,59f, 1963,09f, 0.0f, 0.0f, 0.0f, 150.0f, 150.0f, 150.0f);
			CLEAR_AMBIENT_OBJECTS_VOLUME(bVar0, 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
			Function_229(bLocal_729);
			Function_229(bLocal_728);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[6]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[7]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[8]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[9]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[10]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[11]);
			SET_ACTOR_VOLUME_PARAMETERS(bLocal_728, true, 1);
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			ACTOR_SET_NEXT_WEAPON(Global_34573, 2);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (iLocal_783[1] == 0)
			{
				Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_725 = Global_30637[0];
				if (!Function_321(iLocal_725))
				{
					Function_320(&Local_653);
				}
				Function_236(Global_34573, (*&Local_4 + 1060)[4], 1, 1, 1);
				Function_236(bLocal_728, (*&Local_4 + 1060)[1], 1, 1, 1);
				Function_240(1);
			}
			else
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_504()) && (Function_321(iLocal_725) || iLocal_725 != 4294967295))
			{
				Function_503();
				Function_240(2);
			}
			break;
		
		case 0x00000002:
			if (Function_403(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_653, iLocal_723))
			{
				Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
				Function_240(3);
			}
			else
			{
				iLocal_968 = 1;
				Function_316(&uLocal_979, 0, 0, 4294967295, 4294967295);
				Function_501();
				Function_240(4);
			}
			Function_500();
			break;
		
		case 0x00000003:
			if (Function_288("$/cutscene/FBI_05_CS03/FBI_05_CS03", &Local_716, &Local_653, &iLocal_723, 98352, 98221, 98214, 98574, 97062, 97048, 0, 2, 2, 2, 2, 0, 1))
			{
				Function_240(55);
			}
			break;
		
		case 0x0000000C:
			break;
		
		case 0x00000037:
			MEMORY_ALLOW_SHOOTING(bLocal_728, true);
			Function_292(1.0f);
			if (!Function_297(&iLocal_751))
			{
				Function_423(&iLocal_751);
			}
			else
			{
				Function_241(&iLocal_751);
			}
			Function_486();
			Function_484();
			if (!ACTOR_HAS_WEAPON(Global_34573, 2))
			{
				SET_WEAPONENUM_LOCKED(2, 0);
				GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 0, 1);
				_ADD_AMMO_OF_TYPE(Global_34573, 6, 80.0f, 1, 0);
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 0, 1);
				_ADD_AMMO_OF_TYPE(Global_34573, 6, 80.0f, 1, 0);
			}
			Function_240(6);
			break;
		
		case 0x00000004:
			if (Function_476())
			{
				if (!Function_297(&iLocal_751))
				{
					Function_423(&iLocal_751);
				}
				else
				{
					Function_241(&iLocal_751);
				}
				Function_240(95);
			}
			break;
		
		case 0x0000005F:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_486();
				Function_484();
				Function_292(1.0f);
				Function_240(6);
			}
			break;
		
		case 0x00000006:
			Function_422(1, 0);
			if (iLocal_990 <= 3)
			{
				Function_472();
			}
			if (Function_439())
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_730)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_730));
				}
				Function_234(bLocal_730, 4);
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_438();
				iLocal_783[2] = 1;
				iLocal_723 = 3;
				Function_240(0);
			}
			break;
	}
	return;
}

void Function_438() //Position: 0x14B49 / 84809
{
	AI_GOAL_LOOK_CLEAR(bLocal_729);
	Function_208();
	Function_172();
	ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 0);
	ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 0);
	ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 0);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_728);
	return;
}

bool Function_439() //Position: 0x14B79 / 84857
{
	Function_461();
	Function_455();
	if (!IS_OBJECT_VALID(bLocal_732))
	{
		Function_256((*&Local_4 + 1652)[0]);
		Function_336((*&Local_4 + 1652)[0]);
		bLocal_732 = Function_454(StackVal, StackVal, StackVal, StackVal, bLocal_652, "PutNastasInCarGateway", Function_256((*&Local_4 + 1652)[0]), Function_336((*&Local_4 + 1652)[0]), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
		SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bLocal_732), "FBI05_CarBlip");
	}
	else if (Function_450(bLocal_732, 0, 1, 0, 0, 0))
	{
		Function_239(bLocal_732);
		Function_213(bLocal_732);
		ABORT_SCRIPTED_CONVERSATION(0);
		return 1;
	}
	if (IS_VOLUME_VALID((*&Local_4 + 972)[1]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[1]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[2]))
		{
			if (iLocal_990 <= 3)
			{
				iLocal_990 = 3;
				Function_241(&iLocal_739);
				if (iLocal_989 <= 9)
				{
					iLocal_989 = 9;
				}
				DESTROY_VOLUME((*&Local_4 + 972)[1]);
			}
		}
	}
	if (iLocal_990 > 4)
	{
		Function_364(&iLocal_742, 40.0f, 60.0f, bLocal_730, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_790, 0, 0, 0, 325, 1);
	}
	if (iLocal_990 < 2)
	{
		Function_449();
		Function_448();
	}
	else
	{
		UI_EXIT("HealthMeter");
	}
	if (!Function_297(&iLocal_760))
	{
		Function_423(&iLocal_760);
	}
	else if (Function_295(&iLocal_760) <= 10.0f && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (((((Function_356(Local_4.f_452) < 0 || Function_356(Local_4.f_472) < 0) || Function_356(Local_4.f_536) < 0) || Function_356(Local_4.f_560) < 0) || Function_356(Local_4.f_584) < 0) || Function_356(Local_4.f_504) < 0)
		{
			switch (RAND_INT_RANGE(false, 2))
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_FordYellsEnemys", "FBI05_FordYellsEnemys", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000001:
					if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) <= 7.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonNoShootAtakrs", "FBI05_JonNoShootAtakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_FordEncJon", "FBI05_FordEncJon", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) <= 7.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonNoShootAtakrs", "FBI05_JonNoShootAtakrs", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_KeepMovingFord", "FBI05_KeepMovingFord", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
					}
					break;
			}
			Function_241(&iLocal_760);
		}
	}
	switch (iLocal_990)
	{
		case 0x00000000:
			Function_292(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 2, 1);
			Function_260();
			Function_345("FBI05_obj02d", 0x40f00000, 1, 2, 0, 0, 0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_730)))
			{
				Function_201(bLocal_730);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_732)))
			{
				ADD_BLIP_FOR_OBJECT(bLocal_732, 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bLocal_732), "FBI05_CarBlip");
			}
			Function_447();
			iLocal_990 = 1;
			Function_241(&iLocal_739);
			return 0;
			break;
		
		case 0x00000001:
			if (iLocal_989 != 7 && Function_295(&iLocal_739) <= 7.0f)
			{
				Function_443();
				Function_260();
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_EnemysOutDocks", "FBI05_EnemysOutDocks", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
				iLocal_990 = 2;
				Function_241(&iLocal_739);
			}
			break;
		
		case 0x00000002:
			if (iLocal_989 == 10)
			{
				iLocal_990 = 3;
				Function_241(&iLocal_739);
			}
			break;
		
		case 0x00000003:
			if (Function_348(Global_34573, bLocal_727, 20.0f) && Function_442(bLocal_727, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				Function_316(&uLocal_979, 6, 0, 4294967295, 4294967295);
			}
			Function_441(1);
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[1]))
			{
				Function_440();
				iLocal_990 = 4;
				Function_241(&iLocal_739);
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Function_295(&iLocal_739) <= 1,5f)
			{
				TASK_CLEAR(bLocal_727);
				AI_QUICK_EXIT_GRINGO(bLocal_727, 1);
				SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
				bLocal_780 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_730, 1, 1, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_727, bLocal_780);
				TASK_SEQUENCE_RELEASE(bLocal_780, 1);
				TASK_PRIORITY_SET(bLocal_727, true);
				iLocal_990 = 5;
				Function_241(&iLocal_739);
				return 0;
			}
			break;
		
		case 0x00000005:
			if (Function_295(&iLocal_739) <= 5.0f)
			{
				Function_345("FBI05_obj02e", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_990 = 6;
				Function_241(&iLocal_739);
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[6]))
			{
			}
			break;
	}
	return 0;
}

void Function_440() //Position: 0x1511F / 86303
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_RossShoutsArriveCar", "FBI05_RossShoutsArriveCar", false, 2, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441(bool bParam0) //Position: 0x1517A / 86394
{
	if (IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 928)[7]))
	{
		if (bParam0)
		{
			Function_236(bLocal_728, (*&Local_4 + 1664)[7], 1, 1, 1);
			LOG_ERROR("HandleFordhamFallingOff -- Fordham in water... putting him to land..");
		}
		else
		{
			Function_236(bLocal_728, (*&Local_4 + 1664)[8], 1, 1, 1);
			LOG_ERROR("HandleFordhamFallingOff -- Fordham in water... putting him to the pier..");
		}
	}
	return;
}

var Function_442(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x15254 / 86612
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_443() //Position: 0x1526E / 86638
{
	Function_446();
	Function_354(Local_4.f_560, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_387(Local_4.f_560, 1);
	Function_385(Local_4.f_560, 35.0f, 2,5f, 0,5f);
	Function_445(Local_4.f_560, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 540)[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 540)[12], 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 540)[02], *(&Local_4 + 2100[06]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 540)[12], *(&Local_4 + 2100[16]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_560, 0);
	return;
}

void Function_444(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13) //Position: 0x15325 / 86821
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	bVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &vParam1, 2,5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(bVar0))
	{
		if (iParam8 != 2)
		{
			Function_315(bParam0);
			if (VDIST(Function_315(bParam0), vParam1) < 5.0f)
			{
				if (bParam13)
				{
					TASK_GO_NEAR_COORD(false, &vParam1, 2.0f, iParam8);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(false, &vParam1, iParam8, 3212836864);
				}
			}
		}
		if (bParam10)
		{
			if (bParam11)
			{
				TASK_SHOOT_FROM_COVER(false, Global_34573, bVar0, bParam9, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar0, bParam9, 1086324736);
			}
		}
		else
		{
			TASK_HIDE_AT_COVER(false, bVar0, bParam9, 6.0f, iParam12);
		}
	}
	else if (bParam10)
	{
		TASK_GO_NEAR_COORD(false, &vParam1, 5.0f, iParam8);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &vParam1, bParam9);
	}
	else
	{
		TASK_GO_TO_COORD(false, &vParam1, iParam8);
		UNK_0x44986367(StackVal, &vVar2);
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar2, vParam1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal) };
		TASK_FACE_COORD(false, &vParam1, 0);
		TASK_CROUCH(false, bParam9);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bParam0);
	TASK_PRIORITY_SET(bParam0, bParam7);
	TASK_SEQUENCE_PERFORM(bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

void Function_445(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1543D / 87101
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
				DECOR_SET_INT(bVar1, bParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_446() //Position: 0x15484 / 87172
{
	Local_4.f_560 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "PierGang_2"));
	(*&Local_4 + 540)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_2_0", 468, 370,2678f, 73,59006f, 1942,802f, -1,188454f, 58,75469f, -0,363382f);
	SQUAD_JOIN((*&Local_4 + 540)[02], Local_4.f_560);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 540)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[02]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 540)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[02], 9, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 540)[02], 9, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[02], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[02], 19);
	(*&Local_4 + 540)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_2_1", 474, 371,5693f, 73,56374f, 1942,451f, 0.0f, 81,17406f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 540)[12], Local_4.f_560);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 540)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[12]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 540)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 540)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[12], 9, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 540)[12], 9, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 540)[12], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 540)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 540)[12], 19);
	return;
}

void Function_447() //Position: 0x15644 / 87620
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_CleaWayBoat", "FBI05_CleaWayBoat", false, 2, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x1568F / 87695
{
	if (!iLocal_935)
	{
		UI_SET_TEXT("HealthMeter", "FBI05_UINastasHP");
		UI_SHOW("HealthMeter");
		iLocal_935 = 1;
	}
	else if ((GET_ACTOR_HEALTH(bLocal_729) / 3.0f) >= 3.0f && (GET_ACTOR_HEALTH(bLocal_729) / 3.0f) < 0.0f)
	{
		UI_SET_PROGRESS_BAR_VAL("HealthMeter", 3.0f);
	}
	else
	{
		UI_SET_PROGRESS_BAR_VAL("HealthMeter", (GET_ACTOR_HEALTH(bLocal_729) / 3.0f));
	}
	return;
}

void Function_449() //Position: 0x1571E / 87838
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	var uVar8;
	
	Function_315(Global_34573);
	vVar0 = { StackVal, StackVal, Function_315(Global_34573) };
	Function_315(bLocal_728);
	vVar3 = { StackVal, StackVal, Function_315(bLocal_728) };
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2472, &vVar0, &vVar3, &fVar6, &fVar7, &uVar8);
	if (Function_348(Global_34573, bLocal_728, 40.0f))
	{
		if ((fVar7 - fVar6) <= 10.0f && !iLocal_954)
		{
			switch (RAND_INT_RANGE(false, true))
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_Jon2FarBehind", "FBI05_Jon2FarBehind", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000001:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_CleaWayBoat", "FBI05_CleaWayBoat", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
			}
			iLocal_954 = 1;
			Function_241(&iLocal_951);
		}
		if ((fVar6 - fVar7) <= 25.0f && !iLocal_954)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_2FarAheadWrek", "FBI05_2FarAheadWrek", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
			Function_241(&iLocal_951);
			iLocal_954 = 1;
		}
	}
	else if (!iLocal_954)
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonRunsAwayFromArea", "FBI05_JonRunsAwayFromArea", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
		Function_241(&iLocal_951);
		iLocal_954 = 1;
	}
	if (iLocal_954)
	{
		if (!Function_297(&iLocal_951))
		{
			Function_423(&iLocal_951);
		}
		else if (Function_295(&iLocal_951) <= 15.0f)
		{
			iLocal_954 = 0;
		}
	}
	return;
}

bool Function_450(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x158F5 / 88309
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
				Function_453(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_452(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_452(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_451(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_451(&iVar6, &vVar3);
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

int Function_451(int iParam0, int iParam1) //Position: 0x15B07 / 88839
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

float Function_452(bool bParam0, bool bParam1) //Position: 0x15B72 / 88946
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_453(bool bParam0, bool bParam1) //Position: 0x15B91 / 88977
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
	else if (!bParam1 || Function_452(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

bool Function_454(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x15BEE / 89070
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, iParam8, iParam10, iParam13, 0, uParam14, uParam17);
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

void Function_455() //Position: 0x15CB9 / 89273
{
	if (IS_VOLUME_VALID((*&Local_4 + 880)[6]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[6]) || IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 880)[6]))
		{
			iLocal_939[0] = 1;
			Function_459();
			DESTROY_VOLUME((*&Local_4 + 880)[6]);
		}
	}
	else
	{
		Function_458();
	}
	if (IS_VOLUME_VALID((*&Local_4 + 972)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[5]) || IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 972)[5]))
		{
			iLocal_939[1] = 1;
			Function_456();
			DESTROY_VOLUME((*&Local_4 + 972)[5]);
		}
	}
	return;
}

void Function_456() //Position: 0x15D4B / 89419
{
	Function_457();
	Function_354(Local_4.f_584, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_387(Local_4.f_584, 1);
	Function_385(Local_4.f_584, 45.0f, 2,5f, 0,5f);
	Function_445(Local_4.f_584, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 564)[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 564)[12], 0);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 2156[06], 2, 3212836864);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_4 + 2156[06], -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 564)[02], bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	TASK_PRIORITY_SET((*&Local_4 + 564)[02], true);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 564)[12], *(&Local_4 + 2156[16]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_584, 0);
	return;
}

void Function_457() //Position: 0x15E3B / 89659
{
	Local_4.f_584 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "PierGang_3"));
	(*&Local_4 + 564)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_3_0", 474, 334,4159f, 74,58802f, 1939,582f, 179,988f, 30,48195f, 179,9939f);
	SQUAD_JOIN((*&Local_4 + 564)[02], Local_4.f_584);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 564)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 564)[02]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 564)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 564)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 564)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 564)[02], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 564)[02], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 564)[02], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 564)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 564)[02], 19);
	(*&Local_4 + 564)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_3_1", 475, 335,3181f, 74,58913f, 1938,729f, 0.0f, 153,1229f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 564)[12], Local_4.f_584);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 564)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 564)[12]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 564)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 564)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 564)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 564)[12], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 564)[12], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 564)[12], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 564)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 564)[12], 19);
	return;
}

void Function_458() //Position: 0x15FFB / 90107
{
	if (IS_VOLUME_VALID((*&Local_4 + 880)[8]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[8]) || IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 880)[8]))
		{
			TASK_CLEAR((*&Local_4 + 456)[02]);
			Function_256((*&Local_4 + 1836)[1]);
			vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1836)[1]) };
			bLocal_780 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD_NONSTOP(false, &vLocal_804, 2, 3212836864);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_804, GET_OBJECT_HEADING((*&Local_4 + 1836)[1]), -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_4 + 456)[02], bLocal_780);
			TASK_SEQUENCE_RELEASE(bLocal_780, 1);
			TASK_PRIORITY_SET((*&Local_4 + 456)[02], true);
			DESTROY_VOLUME((*&Local_4 + 880)[8]);
		}
	}
	return;
}

void Function_459() //Position: 0x160A3 / 90275
{
	Function_460();
	Function_387(Local_4.f_472, 1);
	Function_385(Local_4.f_472, 45.0f, 1,5f, 0,1f);
	Function_354(Local_4.f_472, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_472, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_460() //Position: 0x160FA / 90362
{
	Local_4.f_468 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "GangBelowStepsset", 0);
	Local_4.f_472 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GangBelowSteps"));
	(*&Local_4 + 456)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GangB_1", 470, 351,1982f, 76,50726f, 1984,082f, 177,7341f, -7,011962f, 176,7633f);
	ADD_ACTORSET_MEMBER(Local_4.f_468, (*&Local_4 + 456)[02]);
	SQUAD_JOIN((*&Local_4 + 456)[02], Local_4.f_472);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 456)[02], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 456)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 456)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 456)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 456)[02], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 456)[02], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 456)[02], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 456)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 456)[02], 19);
	return;
}

void Function_461() //Position: 0x16212 / 90642
{
	if (!bLocal_800)
	{
	}
	if (IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 928)[8]))
	{
		Function_236(bLocal_728, (*&Local_4 + 1664)[9], 1, 1, 1);
	}
	switch (iLocal_989)
	{
		case 0x00000000:
			if ((!Function_468((*&Local_4 + 424)[02], 0, 1, 0, 0, 0, 0, 0, 0) && !Function_468((*&Local_4 + 424)[12], 0, 1, 0, 0, 0, 0, 0, 0)) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[6]))
			{
				if (IS_ACTOR_ALIVE((*&Local_4 + 424)[02]))
				{
					TASK_CLEAR((*&Local_4 + 424)[02]);
					TASK_KILL_CHAR((*&Local_4 + 424)[02], bLocal_728);
				}
				if (IS_ACTOR_ALIVE((*&Local_4 + 424)[12]))
				{
					TASK_CLEAR((*&Local_4 + 424)[12]);
					TASK_KILL_CHAR((*&Local_4 + 424)[12], bLocal_728);
				}
				TASK_CLEAR(bLocal_728);
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_728, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2444), -1.0f, 1086324736);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 2);
				TASK_PRIORITY_SET(bLocal_728, true);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_728, 8, 0.0f);
				iLocal_989 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_ALIVE((*&Local_4 + 424)[22]))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 928)[5]) || IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 928)[6]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_728, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2448), -1.0f, 1086324736);
				}
				else
				{
					iLocal_989 = 3;
					Function_467(3);
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_939[0] == 1)
			{
				if (IS_ACTOR_ALIVE((*&Local_4 + 456)[02]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_728, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2448), -1.0f, 1086324736);
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 2);
					TASK_PRIORITY_SET(bLocal_728, true);
				}
				else
				{
					Function_466();
					iLocal_989 = 5;
				}
			}
			break;
		
		case 0x00000004:
			Function_465((*&Local_4 + 928)[3], (*&Local_4 + 456)[02], 5);
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 928)[4]))
			{
				if (Function_356(Local_4.f_504) < 0 || Function_356(Local_4.f_536) < 0)
				{
					TASK_CLEAR(bLocal_728);
					Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_728, *(&Local_4 + 2212[06]), 1, 2, -1.0f, 1, 0, 1, 0);
					Function_464(bLocal_728, Local_4.f_504);
					Function_464(bLocal_728, Local_4.f_536);
					iLocal_989 = 6;
					Function_241(&iLocal_748);
				}
				else
				{
					iLocal_989 = 6;
					Function_241(&iLocal_748);
				}
			}
			else if (GET_TASK_STATUS(bLocal_728, 43) != 1)
			{
				TASK_CLEAR(bLocal_728);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2464, 5, 1, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, 2);
				TASK_PRIORITY_SET(bLocal_728, true);
			}
			break;
		
		case 0x00000006:
			if (((Function_295(&iLocal_748) <= 17.0f || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[0])) || !IS_ACTOR_ALIVE((*&Local_4 + 476)[12])) || Function_356(Local_4.f_536) >= 0)
			{
				TASK_CLEAR(bLocal_728);
				Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_728, *(&Local_4 + 2212[16]), 1, 2, -1.0f, 1, 0, 1, 0);
				Function_464(bLocal_728, Local_4.f_504);
				Function_464(bLocal_728, Local_4.f_536);
				if (IS_ACTOR_ALIVE((*&Local_4 + 476)[02]))
				{
					TASK_CLEAR((*&Local_4 + 476)[02]);
					Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 476)[02], *(&Local_4 + 1852[36]), 1, 2, -1.0f, 1, 0, 1, 0);
				}
				iLocal_989 = 7;
				Function_241(&iLocal_748);
				Function_241(&iLocal_739);
			}
			break;
		
		case 0x00000007:
			Function_441(0);
			if (Function_295(&iLocal_748) <= 60.0f || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[3]))
			{
				TASK_CLEAR(bLocal_728);
				Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_728, *(&Local_4 + 2212[36]), 1, 2, -1.0f, 1, 0, 1, 0);
				Function_464(bLocal_728, Local_4.f_504);
				Function_464(bLocal_728, Local_4.f_536);
				Function_464(bLocal_728, Local_4.f_560);
				if (IS_ACTOR_ALIVE((*&Local_4 + 476)[02]))
				{
					TASK_CLEAR((*&Local_4 + 476)[02]);
					Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 476)[02], *(&Local_4 + 1852[46]), 1, 2, -1.0f, 1, 0, 1, 0);
				}
				if (IS_ACTOR_ALIVE((*&Local_4 + 476)[22]))
				{
					TASK_CLEAR((*&Local_4 + 476)[22]);
					TASK_KILL_CHAR((*&Local_4 + 476)[22], bLocal_728);
				}
				iLocal_989 = 8;
				Function_241(&iLocal_748);
			}
			break;
		
		case 0x00000008:
			Function_441(0);
			if ((((Function_356(Local_4.f_536) >= 0 && Function_356(Local_4.f_560) >= 0) && Function_356(Local_4.f_584) >= 0) && Function_356(Local_4.f_504) >= 0) && iLocal_939[1])
			{
				Function_260();
				Function_463();
				iLocal_989 = 9;
				Function_241(&iLocal_748);
				Function_316(&uLocal_979, 20, 0, 4294967295, 4294967295);
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[1]))
			{
				Function_260();
				Function_462();
				iLocal_989 = 9;
				Function_241(&iLocal_748);
				Function_316(&uLocal_979, 20, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000009:
			Function_441(1);
			TASK_CLEAR(bLocal_728);
			SET_ACTOR_FACE_STYLE(bLocal_728, 0);
			bLocal_780 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2544, 2, 1, 0, 1, false);
			TASK_GO_NEAR_OBJECT(0, (*&Local_4 + 1780)[7], 1.0f, 2, 1, 1);
			TASK_GO_NEAR_OBJECT(0, (*&Local_4 + 1780)[8], 1.0f, 2, 1, 1);
			TASK_GO_NEAR_OBJECT(0, (*&Local_4 + 1780)[9], 1.0f, 2, 1, 1);
			TASK_GO_TO_OBJECT(0, (*&Local_4 + 1640)[0], 2, 0, 1);
			TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
			TASK_SEQUENCE_RELEASE(bLocal_780, 1);
			TASK_PRIORITY_SET(bLocal_728, true);
			iLocal_989 = 10;
			Function_241(&iLocal_748);
			break;
	}
	return;
}

void Function_462() //Position: 0x16738 / 91960
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_NoFollowToCar", "FBI05_NoFollowToCar", false, 2, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_463() //Position: 0x16787 / 92039
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_AllEnemyDefeatedCar", "FBI05_AllEnemyDefeatedCar", false, 2, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464(bool bParam0, bool bParam1) //Position: 0x167E2 / 92130
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

void Function_465(bool bParam0, var uParam1, bool bParam2) //Position: 0x16819 / 92185
{
	if (IS_VOLUME_VALID(bParam0))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_728, bParam0))
		{
			if (Function_468(uParam1, 0, 1, 0, 0, 0, 0, 0, 0))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
				DESTROY_VOLUME(bParam0);
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, true);
				iLocal_989 = bParam2;
				Function_467(bParam2);
			}
		}
	}
	else if (!Function_468(uParam1, 0, 1, 0, 0, 0, 0, 0, 0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, true);
		iLocal_989 = bParam2;
		Function_467(bParam2);
	}
	return;
}

void Function_466() //Position: 0x16886 / 92294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_AllEnemysOnBoatKille", "FBI05_AllEnemysOnBoatKille", false, 2, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467(bool bParam0) //Position: 0x168E3 / 92387
{
	switch (bParam0)
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
		
		default:
			break;
	}
	return;
}

bool Function_468(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x16929 / 92457
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_471(&bVar0, 1);
	}
	if (bParam2)
	{
		Function_471(&bVar0, 2);
	}
	if (bParam3)
	{
		Function_471(&bVar0, 4);
	}
	if (bParam4)
	{
		Function_471(&bVar0, 8);
	}
	if (bParam5)
	{
		Function_471(&bVar0, 1024);
	}
	if (bParam7)
	{
		Function_471(&bVar0, 16);
	}
	if (bParam8)
	{
		Function_471(&bVar0, 32);
	}
	if (bParam6)
	{
		Function_471(&bVar0, 1048576);
	}
	return Function_469(uParam0, bVar0);
}

int Function_469(bool bParam0, int iParam1) //Position: 0x16998 / 92568
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_470(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_470(iParam1, 64))
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

bool Function_470(var uParam0, int iParam1) //Position: 0x16A71 / 92785
{
	return (uParam0 && iParam1) == 0;
}

void Function_471(bool bParam0, bool bParam1) //Position: 0x16A7E / 92798
{
	Function_76(bParam0, bParam1);
	return;
}

void Function_472() //Position: 0x16A8B / 92811
{
	switch (iLocal_980)
	{
		case 0x00000000:
			Function_316(&uLocal_979, 36, 0, 4294967295, 4294967295);
			if (Function_475(Local_4.f_452) >= 0 || !IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[3]))
			{
				iLocal_980 = 1;
				iLocal_981 = 0;
			}
			else if (Function_473(Local_4.f_504) || Function_473(Local_4.f_536))
			{
				iLocal_980 = 4;
				iLocal_981 = 0;
			}
			break;
		
		case 0x00000001:
			Function_316(&uLocal_979, 7, 0, 4294967295, 4294967295);
			if (Function_473(Local_4.f_472))
			{
				iLocal_980 = 2;
				iLocal_981 = 1;
			}
			else if (Function_473(Local_4.f_504) || Function_473(Local_4.f_536))
			{
				iLocal_980 = 4;
				iLocal_981 = 1;
			}
			break;
		
		case 0x00000002:
			Function_316(&uLocal_979, 36, 0, 4294967295, 4294967295);
			if (Function_475(Local_4.f_472) < 0)
			{
				iLocal_980 = 3;
				iLocal_981 = 2;
			}
			else if (Function_473(Local_4.f_504) || Function_473(Local_4.f_536))
			{
				iLocal_980 = 4;
				iLocal_981 = 2;
			}
			else if (!Function_473(Local_4.f_472))
			{
				iLocal_980 = 1;
			}
			break;
		
		case 0x00000003:
			Function_316(&uLocal_979, 7, 0, 4294967295, 4294967295);
			if (Function_473(Local_4.f_504) || Function_473(Local_4.f_536))
			{
				iLocal_980 = 4;
				iLocal_981 = 3;
			}
			break;
		
		case 0x00000004:
			Function_316(&uLocal_979, 35, 0, 4294967295, 4294967295);
			if (Function_475(Local_4.f_504) >= 0 && Function_475(Local_4.f_536) >= 0)
			{
				iLocal_980 = 5;
			}
			else if (!Function_473(Local_4.f_504) && !Function_473(Local_4.f_536))
			{
				if (iLocal_981 <= 3)
				{
					iLocal_980 = iLocal_981;
				}
			}
			break;
		
		case 0x00000005:
			Function_316(&uLocal_979, 20, 0, 4294967295, 4294967295);
			if (Function_473(Local_4.f_560) || Function_473(Local_4.f_584))
			{
				iLocal_980 = 6;
			}
			break;
		
		case 0x00000006:
			Function_316(&uLocal_979, 35, 0, 4294967295, 4294967295);
			if (Function_475(Local_4.f_560) >= 0 && Function_475(Local_4.f_584) >= 0)
			{
				iLocal_980 = 7;
			}
			break;
		
		case 0x00000007:
			Function_316(&uLocal_979, 20, 0, 4294967295, 4294967295);
			if (Function_473(Local_4.f_560) || Function_473(Local_4.f_584))
			{
				iLocal_980 = 6;
			}
			break;
	}
	return;
}

bool Function_473(bool bParam0) //Position: 0x16C9D / 93341
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (Function_474(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_474(bool bParam0) //Position: 0x16CD6 / 93398
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_442(bParam0, 0x3f800000, 0x42960000, 1, 1, 0) || IS_ACTOR_SHOOTING(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_475(bool bParam0) //Position: 0x16D0A / 93450
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	return SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0);
}

bool Function_476() //Position: 0x16D20 / 93472
{
	if (Function_482())
	{
		Function_478();
		Function_477();
		if (!ACTOR_HAS_WEAPON(Global_34573, 2))
		{
			SET_WEAPONENUM_LOCKED(2, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 0, 1);
			_ADD_AMMO_OF_TYPE(Global_34573, 6, 80.0f, 1, 0);
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 0, 1);
			_ADD_AMMO_OF_TYPE(Global_34573, 6, 80.0f, 1, 0);
		}
		Function_229(bLocal_729);
		MEMORY_ALLOW_SHOOTING(bLocal_728, true);
		return 1;
	}
	return 0;
}

void Function_477() //Position: 0x16D85 / 93573
{
	bool bVar0;
	
	Function_236((*&Local_4 + 424)[02], (*&Local_4 + 1760)[0], 1, 1, 1);
	Function_256((*&Local_4 + 1760)[0]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1760)[0]) };
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vLocal_804, 2,5f, GET_OBJECT_HEADING((*&Local_4 + 1760)[0]), 90.0f, 7);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 424)[02], bVar0, -1.0f, 1086324736);
	TASK_PRIORITY_SET((*&Local_4 + 424)[02], true);
	Function_236((*&Local_4 + 424)[12], (*&Local_4 + 1760)[1], 1, 1, 1);
	Function_256((*&Local_4 + 1760)[1]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1760)[1]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_4 + 424)[12], &vLocal_804, GET_OBJECT_HEADING((*&Local_4 + 1760)[1]), -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 424)[12], true);
	Function_236((*&Local_4 + 424)[22], (*&Local_4 + 1760)[2], 1, 1, 1);
	Function_256((*&Local_4 + 1760)[2]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1760)[2]) };
	TASK_SHOOT_ENEMIES_FROM_POSITION((*&Local_4 + 424)[22], &vLocal_804, GET_OBJECT_HEADING((*&Local_4 + 1760)[2]), -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 424)[22], true);
	return;
}

void Function_478() //Position: 0x16E86 / 93830
{
	if (!SQUAD_IS_VALID(Local_4.f_452))
	{
		Function_481();
		Function_480(Local_4.f_452, 0);
		Function_388(Local_4.f_452, 0);
		Function_387(Local_4.f_452, 1);
		Function_385(Local_4.f_452, 45.0f, 1,5f, 0,1f);
		Function_354(Local_4.f_452, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_479(Local_4.f_452, 0);
	}
	MEMORY_CONSIDER_AS((*&Local_4 + 424)[12], bLocal_728, 2);
	MEMORY_CONSIDER_AS((*&Local_4 + 424)[22], bLocal_728, 2);
	return;
}

void Function_479(bool bParam0, bool bParam1) //Position: 0x16F0F / 93967
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
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar1, bParam1);
		bVar0++;
	}
	return;
}

void Function_480(bool bParam0, bool bParam1) //Position: 0x16F47 / 94023
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

void Function_481() //Position: 0x16F8F / 94095
{
	Local_4.f_452 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "FirstAmbushGang"));
	(*&Local_4 + 424)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "AGuy_0", 476, 376,2169f, 76,21661f, 2002,05f, 0.0f, 47,27765f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 424)[02], Local_4.f_452);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 424)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 424)[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 424)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 424)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 424)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 424)[02], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 424)[02], 39, 1);
	TASK_STAND_STILL((*&Local_4 + 424)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 424)[02], 19);
	(*&Local_4 + 424)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "AGuy_1", 471, 378,0813f, 74,56078f, 2003,699f, 0,01527617f, 47,46367f, 0,01125623f);
	SQUAD_JOIN((*&Local_4 + 424)[12], Local_4.f_452);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 424)[12], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 424)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 424)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 424)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 424)[12], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 424)[12], 39, 1);
	TASK_STAND_STILL((*&Local_4 + 424)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 424)[12], 19);
	(*&Local_4 + 424)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "AGuy_2", 472, 378,928f, 73,27663f, 2004,546f, 0,0167746f, 51,99961f, 0,0132185f);
	SQUAD_JOIN((*&Local_4 + 424)[22], Local_4.f_452);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 424)[22], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 424)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 424)[22], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 424)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 424)[22], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 424)[22], 39, 1);
	TASK_STAND_STILL((*&Local_4 + 424)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 424)[22], 19);
	return;
}

bool Function_482() //Position: 0x171D3 / 94675
{
	vector3 vVar0;
	
	switch (iLocal_1006)
	{
		case 0x00000000:
			if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_729, 1))
			{
				Function_236(Global_34573, (*&Local_4 + 1060)[4], 1, 1, 1);
				DECOR_SET_BOOL(bLocal_729, "Carry_Nastas", true);
				Function_241(&iLocal_1007);
				iLocal_1006 = 1;
				return 0;
			}
			break;
		
		case 0x00000001:
			HOGTIE_ACTOR(bLocal_729);
			Function_241(&iLocal_1007);
			iLocal_1006 = 2;
			return 0;
			break;
		
		case 0x00000002:
			Function_315(bLocal_729);
			vVar0 = { StackVal, StackVal, Function_315(bLocal_729) };
			if (IS_GRINGO_VALID(LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &vVar0, 0,2f, 0)) && IS_ACTOR_HOGTIED(bLocal_729))
			{
				if (HAS_ANIM_SET_LOADED("gent_hog") || Function_295(&iLocal_1007) <= 7.0f)
				{
					if (Function_295(&iLocal_1007) <= 1.0f)
					{
						Function_483(&bLocal_729, &Global_34573);
						iLocal_1006 = 3;
					}
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			Function_315(Global_34573);
			vLocal_804 = { StackVal, StackVal, Function_315(Global_34573) };
			GRINGO_SET_AVAILABILITY_EXT(LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &vLocal_804, 2.0f, 1), "nDrop_Body", 0);
			SET_ALLOW_MELEE_SPECIAL_MOVE(Global_34573, 0);
			SET_ALLOW_MELEE_SPECIAL_MOVE(bLocal_729, 0);
			DELETE_ACCESSORY("WRIST_BIND", bLocal_729);
			DELETE_ACCESSORY("ANKLE_BIND", bLocal_729);
			bLocal_964 = true;
			iLocal_1006 = 4;
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

void Function_483(var uParam0, var uParam1) //Position: 0x17339 / 95033
{
	vector3 vVar0;
	bool bVar3;
	
	Function_315(*uParam0);
	vVar0 = { StackVal, StackVal, Function_315(*uParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &vVar0, 0,2f, 1);
	GRINGO_UPDATE_OBJECT_REF(bVar3, "GlobalSettings", "Owner", *uParam1);
	GRINGO_UPDATE_INT(bVar3, "GlobalSettings", "CurrentState", 1);
	MAKE_ACTOR_READY_FOR_ACTION(*uParam1, 1);
	SET_ANIM_SET_FOR_ACTOR(*uParam1, "gent_hog", 0);
	SET_ACTION_NODE_FOR_ACTOR(*uParam1, "default_character_main/lassoed/carry_hogtied/carry/carrying/carrying_stn");
	SET_LINKED_ANIM_TARGET(*uParam1, *uParam0);
	SET_INTENDED_HOGTIE_MASTER(GET_HOGTIED_MASTER(*uParam0), *uParam1);
	ATTACH_HOGTIE_ACTOR_TO_ACTOR(*uParam0, *uParam1);
	SET_ACTOR_GRINGO_RESTRICTION(*uParam1, bVar3);
	return;
}

void Function_484() //Position: 0x17445 / 95301
{
	Function_485();
	Function_354(Local_4.f_536, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_387(Local_4.f_536, 1);
	Function_385(Local_4.f_536, 25.0f, 2,5f, 0,5f);
	Function_445(Local_4.f_536, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 508)[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 508)[12], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 508)[22], 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 508)[02], *(&Local_4 + 2004[06]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 508)[12], *(&Local_4 + 2004[16]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 508)[22], *(&Local_4 + 2004[26]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_536, 0);
	return;
}

void Function_485() //Position: 0x17524 / 95524
{
	Local_4.f_536 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "PierGang_1"));
	(*&Local_4 + 508)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_1_0", 469, 333,5726f, 74,59541f, 1940,94f, -5,190157f, -112,5166f, -1,143134f);
	SQUAD_JOIN((*&Local_4 + 508)[02], Local_4.f_536);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 508)[02], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 508)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 508)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 508)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 508)[02], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 508)[02], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 508)[02], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 508)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 508)[02], 19);
	(*&Local_4 + 508)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_1_1", 467, 332,7298f, 74,59519f, 1941,54f, 179,9799f, -59,01641f, -179,9828f);
	SQUAD_JOIN((*&Local_4 + 508)[12], Local_4.f_536);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 508)[12], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 508)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 508)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 508)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 508)[12], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 508)[12], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 508)[12], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 508)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 508)[12], 19);
	(*&Local_4 + 508)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_1_2", 471, 334,4574f, 74,59512f, 1941,919f, 179,9799f, -59,01641f, -179,9828f);
	SQUAD_JOIN((*&Local_4 + 508)[22], Local_4.f_536);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 508)[22], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 508)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 508)[22], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 508)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 508)[22], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 508)[22], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 508)[22], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 508)[22], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 508)[22], 19);
	return;
}

void Function_486() //Position: 0x1779F / 96159
{
	Function_487();
	Function_354(Local_4.f_504, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_387(Local_4.f_504, 1);
	Function_385(Local_4.f_504, 45.0f, 1,5f, 0,1f);
	Function_445(Local_4.f_504, "AICoverExpose", 1);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 476)[02], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 476)[12], 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_4 + 476)[22], 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 476)[02], *(&Local_4 + 1852[06]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 476)[12], *(&Local_4 + 1852[16]), 1, 2, -1.0f, 1, 0, 1, 0);
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, (*&Local_4 + 476)[22], *(&Local_4 + 1852[26]), 1, 2, -1.0f, 1, 0, 1, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_504, 0);
	return;
}

void Function_487() //Position: 0x1787E / 96382
{
	Local_4.f_504 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "PierGang_0"));
	(*&Local_4 + 476)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_0_0", 475, 371,9979f, 73,48914f, 1937,554f, 175,8898f, 134,7409f, 175,0229f);
	SQUAD_JOIN((*&Local_4 + 476)[02], Local_4.f_504);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 476)[02], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 476)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 476)[02], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 476)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[02], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 476)[02], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 476)[02], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 476)[02], 19);
	(*&Local_4 + 476)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_0_1", 470, 372,4517f, 73,49878f, 1936,651f, 0,02391203f, 64,4119f, 0,02156679f);
	SQUAD_JOIN((*&Local_4 + 476)[12], Local_4.f_504);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 476)[12], false);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 476)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 476)[12], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 476)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[12], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 476)[12], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 476)[12], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 476)[12], 19);
	(*&Local_4 + 476)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PierGang_0_2", 468, 380,7206f, 73,31953f, 1919,853f, 179,9804f, 58,20943f, 179,9833f);
	SQUAD_JOIN((*&Local_4 + 476)[22], Local_4.f_504);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 476)[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 476)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[22], 9, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT((*&Local_4 + 476)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 476)[22], 19);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 476)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[22], 39, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND((*&Local_4 + 476)[22], 39, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_4 + 476)[22], 0);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 476)[22], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 476)[22], 19);
	return;
}

int Function_488() //Position: 0x17B18 / 97048
{
	Function_477();
	iLocal_968 = 1;
	return 1;
}

int Function_489() //Position: 0x17B26 / 97062
{
	if (Function_490())
	{
		Function_305(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
		return 1;
	}
	return 0;
}

bool Function_490() //Position: 0x17B42 / 97090
{
	if (iLocal_968)
	{
		if (Function_482())
		{
			return 1;
		}
	}
	switch (iLocal_970)
	{
		case 0x00000000:
			Function_482();
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			if (IS_OBJECT_VALID(Local_716.f_16))
			{
				DESTROY_OBJECT(Local_716.f_16);
			}
			Local_716.f_16 = Function_492(Local_4, 0, 1, 0, 0);
			Function_491();
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 424)[02], 4);
			AI_ACTOR_FORCE_SPEED((*&Local_4 + 424)[12], 4);
			iLocal_970 = 7;
			Function_241(&iLocal_739);
			return 0;
			break;
		
		case 0x00000007:
			Function_482();
			if (!iLocal_976[1])
			{
				if (!iLocal_976[0])
				{
					if (Function_295(&iLocal_739) <= 0,5f)
					{
						SAY_SINGLE_LINE_STRING((*&Local_4 + 424)[02], "FIGHT_EXPLETIVE", true, true, 3, 0, true, false);
						iLocal_976[0] = 1;
					}
				}
				else if (Function_295(&iLocal_739) <= 0,7f)
				{
					SAY_SINGLE_LINE_STRING((*&Local_4 + 424)[12], "FIGHT_EXPLETIVE", false, false, 2, 0, true, false);
					iLocal_976[1] = 1;
				}
			}
			if (Function_295(&iLocal_739) <= 2,5f)
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				if (IS_OBJECT_VALID(Local_716.f_16))
				{
					DESTROY_OBJECT(Local_716.f_16);
				}
				iLocal_970 = 106;
				Function_241(&iLocal_739);
				return 1;
			}
			break;
		
		case 0x0000006A:
			return 1;
			break;
	}
	return 0;
}

void Function_491() //Position: 0x17C99 / 97433
{
	bool bVar0;
	
	Function_256((*&Local_4 + 1760)[0]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1760)[0]) };
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vLocal_804, 2,5f, GET_OBJECT_HEADING((*&Local_4 + 1760)[0]), 90.0f, 7);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2492, 2, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar0, -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 424)[02]);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 424)[02], bLocal_780);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 424)[02], 0,25f);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	Function_256((*&Local_4 + 1760)[1]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1760)[1]) };
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vLocal_804, 2,5f, GET_OBJECT_HEADING((*&Local_4 + 1760)[1]), 90.0f, 7);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2492, 2, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_804, GET_OBJECT_HEADING((*&Local_4 + 1760)[1]), -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 424)[12]);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 424)[12], bLocal_780);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 424)[12], 0,25f);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 2,5f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2496, 2, 1, 0, 1, false);
	Function_256((*&Local_4 + 1760)[2]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1760)[2]) };
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2456), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 424)[22]);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 424)[22], bLocal_780);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 424)[22], 0,25f);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	return;
}

var Function_492(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x17E1C / 97820
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "FBI05_AmbushOutro", 2, 1);
	}
	Function_493(&bVar0);
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

void Function_493(int iParam0) //Position: 0x17E99 / 97945
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_495(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_494(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 2,5f, 0, 0);
	return;
}

void Function_494(int iParam0) //Position: 0x17ED2 / 98002
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 368,4387f, 78,23247f, 2003,596f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,100339f, -1,49528f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_495(var uParam0) //Position: 0x17F3C / 98108
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 369,9613f, 78,08808f, 2004,713f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,100339f, -1,49528f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_496() //Position: 0x17FA6 / 98214
{
	return 1;
}

int Function_497() //Position: 0x17FAD / 98221
{
	Function_256((*&Local_4 + 1664)[2]);
	Function_498(StackVal, StackVal, "chair", Function_256((*&Local_4 + 1664)[2]));
	iLocal_960 = 1;
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
	return 1;
}

int Function_498(bool bParam0, vector3 vParam1) //Position: 0x17FD4 / 98260
{
	bool bVar0;
	
	bVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 10.0f, bParam0, 1));
	if (IS_OBJECT_VALID(bVar0))
	{
		HIDE_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 2.0f, bParam0, 1));
		return 1;
	}
	PRINTSTRING("Could not remove ");
	PRINTSTRING(bParam0);
	PRINTNL();
	return 0;
}

int Function_499() //Position: 0x18030 / 98352
{
	float fVar0;
	
	Function_312(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_652, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_478();
	Function_310(StackVal, StackVal, bLocal_652, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_500() //Position: 0x1808E / 98446
{
	Function_255(iLocal_723);
	Function_397(StackVal, StackVal, Function_255(iLocal_723), iLocal_723, Global_30637[0], Function_258(iLocal_723), 0);
	if (IS_ACTOR_VALID(bLocal_729))
	{
		SET_ACTOR_MAX_HEALTH(bLocal_729, 300.0f);
	}
	Function_229(bLocal_727);
	Function_229(bLocal_728);
	Function_229(bLocal_729);
	ACTOR_RESET_ANIMS(bLocal_728, 1);
	SET_MOVER_FROZEN(bLocal_728, false);
	bLocal_782 = Function_383();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_782);
	PRINTNL();
	return;
}

int Function_501() //Position: 0x1810E / 98574
{
	if (!iLocal_969)
	{
		Function_490();
		AI_QUICK_EXIT_GRINGO(bLocal_729, 1);
		DESTROY_OBJECT(Local_4.f_2408);
		TASK_CLEAR(bLocal_729);
		if (iLocal_960)
		{
			Function_256((*&Local_4 + 1664)[2]);
			Function_502(StackVal, StackVal, "chair", Function_256((*&Local_4 + 1664)[2]));
		}
		Function_239((*&Local_4 + 1664)[0]);
		Function_236(Global_34573, (*&Local_4 + 1060)[4], 1, 1, 0);
		Function_236(bLocal_728, (*&Local_4 + 1060)[6], 1, 1, 1);
		TASK_CLEAR(bLocal_728);
		MEMORY_ALLOW_SHOOTING(bLocal_728, false);
		TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_728, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_2452), -1.0f, 1086324736);
		Function_491();
		SET_PLAYER_POSTURE(0, 0, 0);
		if (!IS_ACTOR_VALID(bLocal_730))
		{
			Function_333((*&Local_4 + 1120)[2]);
		}
		else
		{
			Function_236(bLocal_730, (*&Local_4 + 1120)[2], 1, 1, 1);
		}
		TASK_CLEAR(bLocal_727);
		MAKE_ACTOR_READY_FOR_ACTION(bLocal_727, 1);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 0);
		SNAP_ACTOR_TO_GRINGO(bLocal_727, Local_4.f_2404, "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bLocal_727, GET_GRINGO_FROM_OBJECT(Local_4.f_2404), "USeCase1", 4294967295, 1);
		DECOR_SET_BOOL(Local_4.f_2404, "ForceAllowRain", true);
		TASK_PRIORITY_SET(bLocal_727, true);
		DECOR_SET_BOOL(Global_34573, "Player_DisablePutOnHorse", true);
		ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 4, 1);
		ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 6, 1);
		ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 5, 1);
		iLocal_969 = 1;
	}
	iLocal_792 = 1;
	return 1;
}

int Function_502(bool bParam0, vector3 vParam1) //Position: 0x18281 / 98945
{
	bool bVar0;
	
	bVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 10.0f, bParam0, 1));
	if (IS_OBJECT_VALID(bVar0))
	{
		SHOW_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, 10.0f, bParam0, 1));
		return 1;
	}
	PRINTSTRING("Could not remove ");
	PRINTSTRING(bParam0);
	PRINTNL();
	return 0;
}

void Function_503() //Position: 0x182DE / 99038
{
	DECOR_SET_BOOL(Global_34573, "corpse_loot_gringo", false);
	Function_236(Global_34573, (*&Local_4 + 1060)[4], 1, 1, 1);
	Function_236(bLocal_728, (*&Local_4 + 1060)[1], 1, 1, 1);
	Function_236(bLocal_727, (*&Local_4 + 1096)[3], 1, 1, 1);
	if (!IS_ACTOR_VALID(bLocal_729))
	{
		Function_220(1);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_728, 0);
	TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_728);
	Function_234(bLocal_730, 4);
	TASK_CLEAR(bLocal_727);
	MAKE_ACTOR_READY_FOR_ACTION(bLocal_727, 1);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_727, 0);
	return;
}

int Function_504() //Position: 0x1838B / 99211
{
	Function_412(&Local_4 + 236, 475, 2, 0);
	Function_412(&Local_4 + 236, 468, 2, 0);
	Function_412(&Local_4 + 236, 469, 2, 0);
	Function_412(&Local_4 + 236, 467, 2, 0);
	Function_412(&Local_4 + 236, 474, 2, 0);
	if (Function_407(&Local_4 + 236))
	{
		return 1;
	}
	return 0;
}

void Function_505() //Position: 0x183DF / 99295
{
	if (Function_613())
	{
		Function_256((*&Local_4 + 1120)[2]);
		Function_415(StackVal, StackVal, "$/cutscene/FBI_05_CS04/FBI_05_CS04", &uLocal_937, Function_256((*&Local_4 + 1120)[2]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	if (Function_297(&iLocal_751))
	{
		if (Function_295(&iLocal_751) <= 1,6f || Function_509(Local_4.f_452, Global_34573))
		{
			Function_480(Local_4.f_452, 1);
			Function_508(&iLocal_751);
		}
	}
	if (!iLocal_983)
	{
		if (Function_506(bLocal_728, (*&Local_4 + 1640)[0], 10.0f))
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_728, 1);
			iLocal_983 = 1;
		}
	}
	return;
}

bool Function_506(bool bParam0, bool bParam1, float fParam2) //Position: 0x1848E / 99470
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_353(bParam0);
			Function_507(bParam1);
			if (VDIST(Function_353(bParam0), Function_507(bParam1)) >= fParam2)
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

vector3 Function_507(bool bParam0) //Position: 0x185A8 / 99752
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

void Function_508(int iParam0) //Position: 0x18614 / 99860
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_509(bool bParam0, bool bParam1) //Position: 0x18628 / 99880
{
	bool bVar0;
	bool bVar1;
	int iVar2;
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
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					bVar0 = true;
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_510() //Position: 0x18691 / 99985
{
	Function_528();
	switch (bLocal_724)
	{
		case 0x00000000:
			Function_324(0);
			Function_322(9);
			Function_229(bLocal_729);
			Function_229(bLocal_728);
			HUD_ENABLE(true);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(20);
			Function_160(81920);
			if (IS_ACTOR_VALID(bLocal_727))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_727);
			}
			if (IS_ACTOR_VALID(bLocal_728))
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_728);
			}
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[6]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[7]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[8]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[9]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[10]);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_728, (*&Local_4 + 972)[11]);
			SET_ACTOR_VOLUME_PARAMETERS(bLocal_728, true, 1);
			iLocal_984 = 1;
			if (iLocal_783[0] == 0)
			{
				Function_244(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				if (IS_VEHICLE_CINEMATIC_CAMERA_FORCED_ON())
				{
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
					HUD_ENABLE(true);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				CLEAR_AMBIENT_OBJECTS_VOLUME(StackVal, 15);
				Function_527();
				iLocal_725 = Global_30637[0];
				if (!Function_321(iLocal_725))
				{
					Function_320(&Local_653);
				}
				Function_240(1);
			}
			else
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_725) || iLocal_725 != 4294967295))
			{
				if (Function_295(&iLocal_739) <= 1,5f)
				{
					Function_240(2);
				}
			}
			break;
		
		case 0x00000002:
			Function_292(1.0f);
			Function_526();
			Function_525();
			Function_504();
			Function_240(6);
			iLocal_984 = 0;
			break;
		
		case 0x00000006:
			if (Function_515())
			{
				if (IS_ACTOR_VALID(bLocal_727))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_727);
				}
				if (IS_ACTOR_VALID(bLocal_728))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_728);
				}
				Function_240(7);
			}
			break;
		
		case 0x00000007:
			Function_422(0, 0);
			if (Function_512())
			{
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			Function_511();
			iLocal_783[1] = 1;
			iLocal_723 = 2;
			Function_240(0);
			break;
	}
	return;
}

void Function_511() //Position: 0x18866 / 100454
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_728);
	return;
}

bool Function_512() //Position: 0x18872 / 100466
{
	Function_256((*&Local_4 + 1060)[4]);
	Function_415(StackVal, StackVal, "$/cutscene/FBI_05_CS03/FBI_05_CS03", &uLocal_937, Function_256((*&Local_4 + 1060)[4]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	if (IS_VOLUME_VALID((*&Local_4 + 880)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[5]))
		{
			if (!IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 972)[0]))
			{
				Function_236(bLocal_728, (*&Local_4 + 1664)[1], 1, 1, 1);
				TASK_CLEAR(bLocal_728);
				ACTOR_RESET_ANIMS(bLocal_728, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_728, "FBI05_gaurd_companion", 1);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_728, "FBI05_gaurd_companion/pre");
				DESTROY_VOLUME((*&Local_4 + 880)[5]);
			}
		}
	}
	if (bLocal_938)
	{
		if (!Function_297(&iLocal_955))
		{
			Function_423(&iLocal_955);
		}
		else if (Function_348(Global_34573, bLocal_728, 25.0f) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[9]))
		{
			if (iLocal_973)
			{
				iLocal_973 = 0;
				Function_241(&iLocal_955);
			}
			if (IS_VOLUME_VALID((*&Local_4 + 880)[5]))
			{
				if (!iLocal_975)
				{
					if (Function_295(&iLocal_955) <= 10.0f)
					{
						Function_514();
						Function_241(&iLocal_955);
						iLocal_975 = 1;
					}
				}
			}
		}
		else if (!iLocal_973)
		{
			if (Function_295(&iLocal_955) <= 10.0f)
			{
				Function_513();
				Function_241(&iLocal_955);
				iLocal_973 = 1;
			}
		}
	}
	Function_315(bLocal_729);
	vLocal_804 = { StackVal, StackVal, Function_315(bLocal_729) };
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[1]))
	{
		Function_239((*&Local_4 + 1664)[0]);
		return 1;
	}
	return 0;
}

void Function_513() //Position: 0x18A29 / 100905
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_JonRunsAwayBoat", "FBI05_JonRunsAwayBoat", false, 2, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x18A7C / 100988
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_JonLoitering", "FBI05_JonLoitering", false, 1, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_515() //Position: 0x18AC9 / 101065
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_988 <= 6)
	{
		Function_364(&iLocal_742, 30.0f, 65.0f, bLocal_728, "FBI_Fordham_return", "FBI_Fordham_abandoned", &bLocal_790, 0, 0, 0, 325, 1);
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 840)[7]))
	{
		if (Function_587())
		{
			Function_249("FBI05_carFail");
			Function_254(iLocal_723);
			Function_250(StackVal, StackVal, 5, &bLocal_790, &iLocal_723, Function_257(iLocal_723), Function_254(iLocal_723), 0);
			return 1;
		}
	}
	if (!iLocal_807)
	{
		if (Function_418(Global_34573, 351,89f, 74,59f, 1963,09f, 200.0f))
		{
			Function_160(1);
			bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_652, Function_53(), 2, 351,89f, 74,59f, 1963,09f, 0.0f, 0.0f, 0.0f, 150.0f, 150.0f, 150.0f);
			CLEAR_AMBIENT_OBJECTS_VOLUME(bVar1, 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar1);
			iLocal_807 = 1;
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 840)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 840)[5]))
		{
			Function_524();
			DESTROY_VOLUME((*&Local_4 + 840)[5]);
		}
	}
	else if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 972)[1]))
	{
		if (!bLocal_925)
		{
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_728, 0);
			bLocal_780 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(bLocal_728, 1);
			TASK_GO_TO_OBJECT(0, (*&Local_4 + 1780)[0], 1, 1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
			TASK_SEQUENCE_RELEASE(bLocal_780, 1);
			TASK_PRIORITY_SET(bLocal_728, true);
			Function_523();
			bLocal_925 = true;
		}
	}
	if (iLocal_988 < 0 && iLocal_988 > 4)
	{
		Function_522();
	}
	if ((IS_ACTOR_RIDING_VEHICLE(Global_34573) || Function_349(bLocal_727, Global_34573) >= 3.0f) && iLocal_988 <= 1)
	{
		Function_520();
	}
	if (bLocal_925)
	{
		if (Function_348(Global_34573, bLocal_727, 15.0f))
		{
			if (!iLocal_958)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ReturnsNoNastas", "FBI05_ReturnsNoNastas", 1, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
				iLocal_958 = 1;
			}
		}
	}
	Function_519();
	switch (iLocal_988)
	{
		case 0x00000000:
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 1,5f, 0, 0);
			TASK_VEHICLE_LEAVE(false);
			TASK_GO_TO_OBJECT(0, (*&Local_4 + 1780)[0], 1, 1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, true);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bLocal_728, 1);
			Function_518();
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_728)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_728, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_728), "FBI05_FordhamBlip");
			}
			Function_201(bLocal_727);
			Function_238(10, 0, 1);
			Function_201(bLocal_730);
			iLocal_793 = 0;
			Function_508(&iLocal_742);
			Function_241(&iLocal_739);
			iLocal_988 = 1;
			return 0;
			break;
		
		case 0x00000001:
			if (Function_295(&iLocal_739) <= 5.0f)
			{
				Function_345("FBI05_obj01c", 0x40f00000, 1, 2, 0, 0, 0);
				Function_241(&iLocal_739);
				iLocal_988 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 972)[0]))
			{
				Function_260();
				SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(bLocal_729, "Nastas_AGONY", 0, 1, 3, 0);
				STOP_FORCE_LOOK_AT_COORD(bLocal_728);
				Function_256((*&Local_4 + 1664)[0]);
				vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[0]) };
				FORCE_LOOK_AT_COORD(bLocal_728, &vLocal_804, 2,5f);
				Function_241(&iLocal_739);
				iLocal_988 = 4;
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Function_295(&iLocal_739) <= 0,35f)
			{
				if (Function_517())
				{
					Function_241(&iLocal_739);
					iLocal_988 = 5;
				}
				else
				{
					Function_201(bLocal_728);
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1664)[0])))
					{
						Function_316(&uLocal_979, 3, 0, 4294967295, 4294967295);
						ADD_BLIP_FOR_OBJECT((*&Local_4 + 1664)[0], 330, 0f, 2, 0);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
						SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1664)[0]), "FBI05_Investigate_Blip");
					}
					SAY_SINGLE_LINE_STRING_THROUGH_BLOCKED_SPEECH(bLocal_729, "Nastas_AGONY", 0, 1, 3, 0);
					Function_242(&iLocal_739, 3.0f);
					iLocal_988 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_295(&iLocal_739) <= 1,2f)
			{
				if (Function_348(Global_34573, bLocal_728, 30.0f))
				{
					Function_516();
					bLocal_938 = true;
				}
				Function_241(&iLocal_739);
				iLocal_988 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_295(&iLocal_739) <= 5.0f)
			{
				Function_260();
				Function_345("FBI05_obj01d", 0x40f00000, 1, 2, 0, 0, 0);
				Function_201(bLocal_728);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1664)[0])))
				{
					Function_316(&uLocal_979, 3, 0, 4294967295, 4294967295);
					ADD_BLIP_FOR_OBJECT((*&Local_4 + 1664)[0], 330, 0f, 2, 0);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1664)[0]), "FBI05_Investigate_Blip");
				}
				iLocal_988 = 7;
			}
			break;
		
		case 0x00000007:
			if (bLocal_928)
			{
				if (!bLocal_938)
				{
					Function_516();
					bLocal_938 = true;
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_516() //Position: 0x18FEC / 102380
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_HeardShouts", "FBI05_HeardShouts", false, 1, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_517() //Position: 0x19037 / 102455
{
	vector3 vVar0;
	
	if (bLocal_799)
	{
		Function_256((*&Local_4 + 1664)[0]);
		vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[0]) };
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
		bLocal_780 = TASK_SEQUENCE_OPEN();
		TASK_FACE_COORD(false, &vLocal_804, 0);
		TASK_STAND_STILL(false, 1,25f, 0, 0);
		Function_256((*&Local_4 + 1664)[1]);
		vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[1]) };
		TASK_GO_TO_COORD(false, &vLocal_804, 2);
		vVar0 = { StackVal, StackVal, Vector(*(&Local_4 + 2212[16]), StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
		TASK_FACE_COORD(false, &vVar0, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
		TASK_SEQUENCE_RELEASE(bLocal_780, 1);
		return 1;
	}
	if (Function_349(Global_34573, bLocal_728) >= 25.0f)
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
		bLocal_780 = TASK_SEQUENCE_OPEN();
		Function_256((*&Local_4 + 1664)[1]);
		vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[1]) };
		TASK_GO_TO_COORD(false, &vLocal_804, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
		TASK_SEQUENCE_RELEASE(bLocal_780, 1);
		return 1;
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
	bLocal_780 = TASK_SEQUENCE_OPEN();
	Function_256((*&Local_4 + 1664)[1]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[1]) };
	TASK_GO_TO_COORD(false, &vLocal_804, 4);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
	TASK_SEQUENCE_RELEASE(bLocal_780, 1);
	return 0;
	return 0;
}

void Function_518() //Position: 0x19143 / 102723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_ArriveWrek", "FBI05_ArriveWrek", false, 1, 1, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1918C / 102796
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(*(&Local_4 + 2212[16]), StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (!Function_506(bLocal_728, (*&Local_4 + 1664)[1], 2.0f) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 928)[4]))
	{
		Function_236(bLocal_728, (*&Local_4 + 1664)[1], 1, 1, 1);
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 880)[6]))
	{
		Function_236(bLocal_728, (*&Local_4 + 1664)[1], 1, 1, 1);
		TASK_CLEAR(bLocal_728);
		ACTOR_RESET_ANIMS(bLocal_728, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_728, "FBI05_gaurd_companion", 1);
		SET_ACTION_NODE_FOR_ACTOR(bLocal_728, "FBI05_gaurd_companion/pre");
		TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
		SET_MOVER_FROZEN(bLocal_728, true);
		bLocal_928 = true;
	}
	if (!bLocal_799)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_728, (*&Local_4 + 972)[0]))
		{
			TASK_CLEAR(bLocal_728);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
			SET_ACTOR_FACE_STYLE(bLocal_728, 0);
			Function_256((*&Local_4 + 1664)[1]);
			vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[1]) };
			bLocal_780 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &vLocal_804, 1);
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_ACTION_PERFORM(false, "wave/forward");
			TASK_FACE_COORD(false, &vVar0, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
			TASK_SEQUENCE_RELEASE(bLocal_780, 1);
			bLocal_799 = true;
		}
	}
	if (!bLocal_928)
	{
		if (Function_506(bLocal_728, (*&Local_4 + 1664)[1], 1.0f))
		{
			TASK_CLEAR(bLocal_728);
			ACTOR_RESET_ANIMS(bLocal_728, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_728, "FBI05_gaurd_companion", 1);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_728, "FBI05_gaurd_companion/pre");
			TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
			SET_MOVER_FROZEN(bLocal_728, true);
			bLocal_928 = true;
		}
	}
	return;
}

void Function_520() //Position: 0x19363 / 103267
{
	if (!Function_297(&iLocal_742))
	{
		Function_521(&iLocal_742, 0.0f);
	}
	else if (Function_295(&iLocal_742) <= 12.0f)
	{
		switch (RAND_INT_RANGE(false, true))
		{
			case 0x00000000:
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_RossWaitJonGetOut", "FBI05_RossWaitJonGetOut", 1, 1, 0, 1, 1, 0, 0, 1000, 0, 0);
				break;
			
			case 0x00000001:
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_JonNoFollowWrek", "FBI05_JonNoFollowWrek", 1, 1, 0, 2, 1, 0, 0, 1000, 0, 0);
				break;
		}
		Function_241(&iLocal_742);
	}
	return;
}

void Function_521(int iParam0, float fParam1) //Position: 0x19438 / 103480
{
	if (!Function_297(iParam0))
	{
		Function_242(iParam0, fParam1);
	}
	return;
}

void Function_522() //Position: 0x1944E / 103502
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	var uVar8;
	
	if (bLocal_799)
	{
		return;
	}
	Function_315(Global_34573);
	vVar0 = { StackVal, StackVal, Function_315(Global_34573) };
	Function_315(bLocal_728);
	vVar3 = { StackVal, StackVal, Function_315(bLocal_728) };
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2468, &vVar0, &vVar3, &fVar6, &fVar7, &uVar8);
	if ((fVar7 - fVar6) <= 15.0f)
	{
		if (!Function_297(&iLocal_948))
		{
			Function_521(&iLocal_948, 15.0f);
		}
		else if (Function_295(&iLocal_948) <= 15.0f)
		{
			switch (RAND_INT_RANGE(false, 2))
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_2FarBehindWrek", "FBI05_2FarBehindWrek", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000001:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonNoFollowWrek2", "FBI05_JonNoFollowWrek2", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					break;
			}
			Function_241(&iLocal_948);
		}
		if (!iLocal_793)
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_728, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_728, "wave", 0);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
			bLocal_780 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_ACTION_PERFORM(false, "wave/forward");
			TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
			TASK_SEQUENCE_RELEASE(bLocal_780, 1);
			FORCE_LOOK_AT_ACTOR(bLocal_728, Global_34573, 3212836864);
			iLocal_793 = 1;
		}
	}
	if ((fVar6 - fVar7) <= 15.0f && !iLocal_793)
	{
		if (!Function_297(&iLocal_948))
		{
			Function_521(&iLocal_948, 15.0f);
		}
		else if (Function_295(&iLocal_948) <= 15.0f)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_2FarAheadWrek", "FBI05_2FarAheadWrek", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
			iLocal_793 = 1;
			Function_241(&iLocal_948);
		}
	}
	if (iLocal_793 && (fVar7 - fVar6) > 10.0f)
	{
		if (Function_295(&iLocal_948) <= 5.0f)
		{
			Function_241(&iLocal_948);
		}
		TASK_CLEAR(bLocal_728);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
		bLocal_780 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_OBJECT(0, (*&Local_4 + 1780)[0], 1, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_728, bLocal_780);
		TASK_SEQUENCE_RELEASE(bLocal_780, 1);
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_728, true);
		STOP_FORCE_LOOK_AT_COORD(bLocal_728);
		iLocal_793 = 0;
	}
	return;
}

void Function_523() //Position: 0x196C4 / 104132
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AA", "FBI05_WrekWalkBanter_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_WrekWalkBanter_v2_AB", "FBI05_WrekWalkBanter_v2_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AC1", "FBI05_WrekWalkBanter_v2_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AC2", "FBI05_WrekWalkBanter_v2_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_WrekWalkBanter_v2_AD", "FBI05_WrekWalkBanter_v2_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v2_AE", "FBI05_WrekWalkBanter_v2_AE", false, 1, 0, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x19874 / 104564
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AA", "FBI05_WrekWalkBanter_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_WrekWalkBanter_v1_AB", "FBI05_WrekWalkBanter_v1_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AC1", "FBI05_WrekWalkBanter_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AC2", "FBI05_WrekWalkBanter_v1_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_WrekWalkBanter_v1_AD", "FBI05_WrekWalkBanter_v1_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_WrekWalkBanter_v1_AE", "FBI05_WrekWalkBanter_v1_AE", false, 1, 0, 0, 1);
		Function_342(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x19A24 / 104996
{
	Function_255(iLocal_723);
	Function_397(StackVal, StackVal, Function_255(iLocal_723), iLocal_723, Global_30637[0], Function_258(iLocal_723), 5);
	CLEAR_AMBIENT_OBJECTS_VOLUME(StackVal, 15);
	SET_ACTOR_MAX_HEALTH(bLocal_727, (GET_ACTOR_MAX_HEALTH(bLocal_727) * 2.0f));
	SET_ACTOR_MAX_HEALTH(bLocal_728, GET_ACTOR_MAX_HEALTH(bLocal_727));
	SET_ACTOR_MAX_HEALTH(bLocal_729, GET_ACTOR_MAX_HEALTH(bLocal_727));
	Function_220(0);
	SNAP_ACTOR_TO_GRINGO(bLocal_729, Local_4.f_2408, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(bLocal_729, GET_GRINGO_FROM_OBJECT(Local_4.f_2408), "USeCase1", 4294967295, 1);
	ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
	ENABLE_VEHICLE_SEAT(bLocal_730, 3, 1);
	Function_229(bLocal_727);
	Function_229(bLocal_728);
	Function_229(bLocal_729);
	bLocal_782 = Function_383();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_782);
	PRINTNL();
	Function_316(&uLocal_979, 1, 0, 4294967295, 4294967295);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_526() //Position: 0x19B27 / 105255
{
	TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_728);
	Function_234(bLocal_730, 4);
	return;
}

void Function_527() //Position: 0x19B4C / 105292
{
	Function_160(2);
	Function_160(1);
	Function_160(4);
	Function_236(Global_34573, (*&Local_4 + 1224)[0], 1, 1, 1);
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[1]);
	}
	else
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[1], 1, 1, 1);
	}
	ENABLE_VEHICLE_SEAT(bLocal_730, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_730, 3, 1);
	ENABLE_VEHICLE_SEAT(bLocal_730, 2, 1);
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 3);
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_728);
	Function_234(bLocal_730, 4);
	return;
}

void Function_528() //Position: 0x19C0A / 105482
{
	bool bVar0;
	
	Function_529();
	if (!Function_613())
	{
		return;
	}
	Function_256((*&Local_4 + 1664)[2]);
	vLocal_804 = { StackVal, StackVal, Function_256((*&Local_4 + 1664)[2]) };
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vLocal_804, 1.0f, "chair", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		if (IS_PROP_STREAMED_IN(GET_OBJECT_FROM_PHYSINST(bVar0)))
		{
			if (!IS_PROP_FIXED(bVar0))
			{
				SET_PROP_FIXED(bVar0, 1);
			}
		}
	}
	return;
}

void Function_529() //Position: 0x19C61 / 105569
{
	if (IS_ACTOR_VALID(bLocal_729))
	{
		if (GET_LAST_ATTACKER(bLocal_729) == Global_34573)
		{
			Function_249("FBI05_informAttacked");
			bLocal_790 = true;
		}
	}
	return;
}

void Function_530() //Position: 0x19C9A / 105626
{
	Function_542();
	switch (bLocal_724)
	{
		case 0x00000000:
			Function_324(0);
			Function_160(1163268);
			Function_322(9);
			Function_185(32);
			iLocal_984 = 1;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(4);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 776)[0], 4294967295);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 776)[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 776)[0]);
			iLocal_725 = Global_30717[0];
			if (Function_300(&Local_653))
			{
				if (!Function_321(iLocal_725))
				{
					Function_320(&Local_653);
				}
			}
			Function_541();
			iLocal_946 = 1;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (!bLocal_972)
			{
				Function_240(1);
			}
			else
			{
				Function_240(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_321(iLocal_725) || iLocal_725 != 4294967295))
			{
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				Function_540();
				Function_240(2);
			}
			break;
		
		case 0x00000002:
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2460, 4, 0, 0, 1, false);
			AI_ACTOR_FORCE_SPEED(bLocal_728, 4);
			Function_292(1.0f);
			Function_255(iLocal_723);
			Function_397(StackVal, StackVal, Function_255(iLocal_723), iLocal_723, Global_30637[0], Function_258(iLocal_723), 5);
			Function_316(&uLocal_979, 1, 0, 4294967295, 4294967295);
			Function_240(8);
			iLocal_984 = 0;
			break;
		
		case 0x00000008:
			if (Function_532())
			{
				Function_241(&iLocal_739);
				Function_240(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_531();
				iLocal_783[0] = 1;
				iLocal_723 = 1;
				Function_240(0);
			}
			break;
	}
	return;
}

void Function_531() //Position: 0x19DEF / 105967
{
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_728);
	TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	return;
}

bool Function_532() //Position: 0x19E13 / 106003
{
	Function_587();
	if (iLocal_986 < 1 && !iLocal_795)
	{
		Function_372(0);
	}
	if (!Function_297(&iLocal_766))
	{
		Function_521(&iLocal_766, 5.0f);
	}
	if ((((((((iLocal_986 <= 3 && iLocal_986 == 5) && !iLocal_802) && (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))) && !Function_131()) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !iLocal_803) && !iLocal_795) && !iLocal_794)
	{
		if (!iLocal_936)
		{
			if (Function_295(&iLocal_766) <= 5.0f)
			{
				Function_535();
				iLocal_936 = 1;
			}
		}
		else
		{
			Function_241(&iLocal_766);
			iLocal_936 = 0;
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 700)[5]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_727, (*&Local_4 + 700)[5]))
		{
			DESTROY_VOLUME((*&Local_4 + 700)[5]);
			ABORT_SCRIPTED_CONVERSATION(1);
			Function_534();
			iLocal_803 = 1;
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			HUD_ENABLE(true);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
	}
	switch (iLocal_986)
	{
		case 0x00000000:
			if (Function_614(bLocal_728, bLocal_730, 0) && Function_614(bLocal_727, bLocal_730, 1))
			{
				if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
				{
					Function_201(bLocal_730);
					Function_241(&iLocal_739);
					if (GET_TASK_STATUS(bLocal_728, 43) != 1)
					{
						TASK_CLEAR(bLocal_728);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2460, 4, 0, 0, 1, false);
						AI_ACTOR_FORCE_SPEED(bLocal_728, 4);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1168)[0])))
					{
						ADD_BLIP_FOR_OBJECT((*&Local_4 + 1168)[0], 330, 0f, 2, 0);
					}
					iLocal_986 = 1;
					return 0;
				}
			}
			if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
			{
				Function_201(bLocal_730);
				HUD_CLEAR_OBJECTIVE();
				Function_345("FBI05_obj01a_0", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_798 = 1;
				Function_241(&iLocal_739);
				iLocal_986 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_614(bLocal_728, bLocal_730, 0) && Function_614(bLocal_727, bLocal_730, 1))
			{
				if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
				{
					Function_201(bLocal_730);
					HUD_CLEAR_OBJECTIVE();
					Function_533();
					if (GET_TASK_STATUS(bLocal_728, 43) != 1)
					{
						TASK_CLEAR(bLocal_728);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2460, 4, 0, 0, 1, false);
						AI_ACTOR_FORCE_SPEED(bLocal_728, 4);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 1168)[0])))
					{
						ADD_BLIP_FOR_OBJECT((*&Local_4 + 1168)[0], 330, 0f, 2, 0);
					}
					if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
					{
						bLocal_738 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
					}
					Function_241(&iLocal_739);
					iLocal_986 = 2;
				}
			}
			else if (iLocal_798)
			{
				if (!Function_614(Global_34573, bLocal_730, 2) && !Function_614(Global_34573, bLocal_730, 3))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_345("FBI05_obj01a", 0x40f00000, 1, 2, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_730)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_730, 325, 0, 2, 0);
						SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_730), "FBI05_CarBlip");
					}
					iLocal_798 = 0;
					Function_241(&iLocal_739);
					iLocal_986 = 0;
				}
			}
			break;
		
		case 0x00000002:
			Function_358(0);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_295(&iLocal_739) <= 8.0f)
			{
				Function_260();
				Function_345("FBI05_obj01b", 0x40f00000, 1, 2, 0, 0, 0);
				Function_241(&iLocal_739);
				iLocal_986 = 3;
				return 0;
			}
			break;
		
		case 0x00000003:
			Function_358(0);
			if (!iLocal_795)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 732)[2]))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					iLocal_795 = 1;
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_730, (*&Local_4 + 840)[0]))
			{
				Function_239((*&Local_4 + 1168)[0]);
				Function_241(&iLocal_739);
				iLocal_986 = 7;
				return 0;
			}
			return 0;
			break;
		
		case 0x00000004:
			ABORT_SCRIPTED_CONVERSATION(1);
			HUD_CLEAR_OBJECTIVE();
			Function_345("FBI05_carOutObj", 0x40f00000, 1, 2, 0, 0, 0);
			if (!Function_297(&iLocal_757))
			{
				Function_423(&iLocal_757);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_WalksAwayFromCar", "FBI05_WalksAwayFromCar", 0, 1, 1, 2, 1, 0, 0, 1000, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_730)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_730, 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_730), "FBI05_CarBlip");
			}
			Function_239((*&Local_4 + 1168)[0]);
			Function_241(&iLocal_739);
			Function_241(&iLocal_757);
			iLocal_986 = 5;
			return 0;
			break;
		
		case 0x00000005:
			if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
			{
				iLocal_797 = 0;
				Function_201(bLocal_730);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1168)[0], 330, 0f, 2, 0);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
				TASK_CLEAR(bLocal_728);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_728, Local_4.f_2460, 4, 0, 0, 1, false);
				TASK_PRIORITY_SET(bLocal_728, true);
				HUD_CLEAR_OBJECTIVE();
				Function_345("FBI05_obj01b", 0x40f00000, 1, 2, 0, 0, 0);
				Function_241(&iLocal_757);
				Function_241(&iLocal_739);
				iLocal_986 = 3;
				return 0;
			}
			if (Function_295(&iLocal_739) >= 1,5f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_728, (6,4f - (Function_295(&iLocal_739) * (6,4f / 1,5f))));
			}
			else if (Function_295(&iLocal_739) <= 1,5f && Function_295(&iLocal_739) >= 1,6f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_728, 0.0f);
				TASK_CLEAR(bLocal_728);
				TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				if (Function_339(0))
				{
					return 0;
				}
			}
			break;
		
		case 0x00000007:
			iLocal_946 = 0;
			if (Function_295(&iLocal_739) >= 3,2f)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_728, (6,4f - (Function_295(&iLocal_739) * (6,4f / 3.0f))));
			}
			else if (Function_295(&iLocal_739) <= 3,2f && Function_295(&iLocal_739) >= 3,3f)
			{
				Function_239((*&Local_4 + 1168)[0]);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_728);
				TASK_CLEAR(bLocal_728);
				TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
				STOP_VEHICLE(bLocal_730);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void Function_533() //Position: 0x1A450 / 107600
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_JonGetsInCar", "FBI05_JonGetsInCar", false, 1, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_534() //Position: 0x1A49D / 107677
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DrawNearWrek_v1_AA1", "FBI05_DrawNearWrek_v1_AA1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DrawNearWrek_v1_AA2", "FBI05_DrawNearWrek_v1_AA2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DrawNearWrek_v1_AA3", "FBI05_DrawNearWrek_v1_AA3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DrawNearWrek_v1_AA4", "FBI05_DrawNearWrek_v1_AA4", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_DrawNearWrek_v1_AB", "FBI05_DrawNearWrek_v1_AB", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_DrawNearWrek_v1_AC", "FBI05_DrawNearWrek_v1_AC", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_DrawNearWrek_v1_AD", "FBI05_DrawNearWrek_v1_AD", true, 4, 0, 0, 1);
		Function_342(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535() //Position: 0x1A678 / 108152
{
	if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_Banter2wardsWrek_v1_AA"))
	{
		Function_539();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_Banter2wardsWrek_v2_AA"))
	{
		Function_538();
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI05_Banter2wardsWrek_v3_AA1"))
	{
		Function_537();
	}
	else
	{
		Function_536();
		iLocal_802 = 1;
	}
	return;
}

void Function_536() //Position: 0x1A70A / 108298
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_NoTalkRide", "FBI05_NoTalkRide", false, 4, 1, 0, 1);
		Function_342(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x1A753 / 108371
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AA1", "FBI05_Banter2wardsWrek_v3_AA1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AA2", "FBI05_Banter2wardsWrek_v3_AA2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AA3", "FBI05_Banter2wardsWrek_v3_AA3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v3_AB", "FBI05_Banter2wardsWrek_v3_AB", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AC1", "FBI05_Banter2wardsWrek_v3_AC1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AC2", "FBI05_Banter2wardsWrek_v3_AC2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v3_AD", "FBI05_Banter2wardsWrek_v3_AD", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v3_AE", "FBI05_Banter2wardsWrek_v3_AE", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v3_AF", "FBI05_Banter2wardsWrek_v3_AF", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v3_AG", "FBI05_Banter2wardsWrek_v3_AG", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v3_AH", "FBI05_Banter2wardsWrek_v3_AH", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AI", "FBI05_Banter2wardsWrek_v3_AI", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v3_AJ", "FBI05_Banter2wardsWrek_v3_AJ", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AK1", "FBI05_Banter2wardsWrek_v3_AK1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AK2", "FBI05_Banter2wardsWrek_v3_AK2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AK3", "FBI05_Banter2wardsWrek_v3_AK3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AK4", "FBI05_Banter2wardsWrek_v3_AK4", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AK5", "FBI05_Banter2wardsWrek_v3_AK5", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v3_AL", "FBI05_Banter2wardsWrek_v3_AL", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v3_AM", "FBI05_Banter2wardsWrek_v3_AM", false, 4, 0, 0, 1);
		Function_342(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1AD0D / 109837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AA", "FBI05_Banter2wardsWrek_v2_AA", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AB", "FBI05_Banter2wardsWrek_v2_AB", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AC", "FBI05_Banter2wardsWrek_v2_AC", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AD", "FBI05_Banter2wardsWrek_v2_AD", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AE", "FBI05_Banter2wardsWrek_v2_AE", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AF1", "FBI05_Banter2wardsWrek_v2_AF1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AF2", "FBI05_Banter2wardsWrek_v2_AF2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AF3", "FBI05_Banter2wardsWrek_v2_AF3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AG", "FBI05_Banter2wardsWrek_v2_AG", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AH", "FBI05_Banter2wardsWrek_v2_AH", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AI", "FBI05_Banter2wardsWrek_v2_AI", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AJ", "FBI05_Banter2wardsWrek_v2_AJ", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AK", "FBI05_Banter2wardsWrek_v2_AK", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AL1", "FBI05_Banter2wardsWrek_v2_AL1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AL2", "FBI05_Banter2wardsWrek_v2_AL2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AM", "FBI05_Banter2wardsWrek_v2_AM", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AN1", "FBI05_Banter2wardsWrek_v2_AN1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AN2", "FBI05_Banter2wardsWrek_v2_AN2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v2_AN3", "FBI05_Banter2wardsWrek_v2_AN3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AO1", "FBI05_Banter2wardsWrek_v2_AO1", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v2_AO2", "FBI05_Banter2wardsWrek_v2_AO2", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AP1", "FBI05_Banter2wardsWrek_v2_AP1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AP2", "FBI05_Banter2wardsWrek_v2_AP2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v2_AP3", "FBI05_Banter2wardsWrek_v2_AP3", false, 4, 0, 0, 1);
		Function_342(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x1B3E9 / 111593
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AA", "FBI05_Banter2wardsWrek_v1_AA", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AB", "FBI05_Banter2wardsWrek_v1_AB", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AC1", "FBI05_Banter2wardsWrek_v1_AC1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AC2", "FBI05_Banter2wardsWrek_v1_AC2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AD1", "FBI05_Banter2wardsWrek_v1_AD1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AD2", "FBI05_Banter2wardsWrek_v1_AD2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v1_AE", "FBI05_Banter2wardsWrek_v1_AE", 2, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_900", "", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AF", "FBI05_Banter2wardsWrek_v1_AF", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AG1", "FBI05_Banter2wardsWrek_v1_AG1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AG2", "FBI05_Banter2wardsWrek_v1_AG2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AG3", "FBI05_Banter2wardsWrek_v1_AG3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v1_AH", "FBI05_Banter2wardsWrek_v1_AH", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AI", "FBI05_Banter2wardsWrek_v1_AI", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1740", "", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v1_AJ", "FBI05_Banter2wardsWrek_v1_AJ", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AK1", "FBI05_Banter2wardsWrek_v1_AK1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AK2", "FBI05_Banter2wardsWrek_v1_AK2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AK3", "FBI05_Banter2wardsWrek_v1_AK3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AK4", "FBI05_Banter2wardsWrek_v1_AK4", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "FBI05_Banter2wardsWrek_v1_AL", "FBI05_Banter2wardsWrek_v1_AL", true, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI05_Banter2wardsWrek_v1_AM", "FBI05_Banter2wardsWrek_v1_AM", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AN1", "FBI05_Banter2wardsWrek_v1_AN1", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AN2", "FBI05_Banter2wardsWrek_v1_AN2", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AN3", "FBI05_Banter2wardsWrek_v1_AN3", false, 4, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "FBI05_Banter2wardsWrek_v1_AN4", "FBI05_Banter2wardsWrek_v1_AN4", false, 4, 0, 0, 1);
		Function_342(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_540() //Position: 0x1BB06 / 113414
{
	var uVar0;
	
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(bLocal_728);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, false) != bLocal_728)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	}
	TASK_CLEAR(bLocal_727);
	GET_POSITION(Global_34573, &uVar0);
	TELEPORT_ACTOR(bLocal_727, &uVar0, 1, 1, 1);
	SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != Global_34573)
	{
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 3);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	}
	Function_330(bLocal_730, bLocal_728);
	return;
}

void Function_541() //Position: 0x1BB7D / 113533
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_738))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_738);
	}
	return;
}

void Function_542() //Position: 0x1BB92 / 113554
{
	Function_544();
	Function_543();
	if (!Function_613() || bLocal_724 != 4)
	{
		return;
	}
	if (!iLocal_794)
	{
		if (IS_ACTOR_VALID(bLocal_730))
		{
			Function_364(&iLocal_742, 45.0f, 100.0f, bLocal_730, "FBI05_carDistObj", "FBI05_fbiAbandoned", &bLocal_790, 0, 0, 0, 325, 1);
		}
	}
	if ((bLocal_724 > 8 || bLocal_724 != 55) || iLocal_986 != 1)
	{
		return;
	}
	return;
}

void Function_543() //Position: 0x1BC19 / 113689
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID((*&Local_4 + 392)[02]))
	{
		if (!bLocal_929)
		{
			if (Function_348(Global_34573, (*&Local_4 + 392)[02], 50.0f))
			{
				if (IS_LAYOUTREF_VALID(bLocal_652))
				{
					bVar0 = CREATE_OBJECT_ITERATOR(bLocal_652);
					ITERATE_IN_LAYOUT(bVar0, GET_EVENT_LAYOUT());
					bVar1 = START_OBJECT_ITERATOR(bVar0);
					while (IS_OBJECT_VALID(bVar1))
					{
						bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
						if (IS_EVENT_VALID(bVar2))
						{
							if (GET_EVENT_TYPE(bVar2) != 7 || GET_EVENT_TYPE(bVar2) != 8)
							{
								if (GET_EVENT_PERPETRATOR(bVar2) != GET_OBJECT_FROM_ACTOR(Global_34573) && GET_EVENT_TARGET_AS_OBJECT(bVar2) != GET_OBJECT_FROM_ACTOR((*&Local_4 + 392)[02]))
								{
									MEMORY_CLEAR_ALL((*&Local_4 + 392)[02]);
									TASK_CLEAR((*&Local_4 + 392)[02]);
									TASK_FLEE_ACTOR((*&Local_4 + 392)[02], Global_34573, 200.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET((*&Local_4 + 392)[02], true);
									DESTROY_ITERATOR(bVar0);
								}
							}
						}
						bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
					}
					DESTROY_ITERATOR(bVar0);
				}
			}
		}
	}
	return;
}

void Function_544() //Position: 0x1BD02 / 113922
{
	bool bVar0;
	vector3 vVar1;
	
	Function_315(Global_34573);
	vVar1 = { StackVal, StackVal, Function_315(Global_34573) };
	bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/player_lockpick_safe", &vVar1, 1,5f, 0);
	if (IS_GRINGO_VALID(bVar0))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bVar0));
	}
	return;
}

void Function_545() //Position: 0x1BD6E / 114030
{
	switch (bLocal_724)
	{
		case 0x00000000:
		case 0x00000006:
			Function_578(&Local_653, 1);
			bLocal_652 = CREATE_LAYOUT(Function_53());
			Function_577();
			Function_160(1163268);
			Function_185(32);
			Function_322(9);
			Function_576();
			Function_128(&(Global_29008[Global_30717[3]]), 384);
			CLEAR_AMBIENT_OBJECTS_VOLUME(StackVal, 15);
			Function_128(&(Global_29008[Global_30717[0]]), 256);
			SET_POP_DENSITY_MULTIPLIER(0,25f);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_724 = 7;
			break;
		
		case 0x00000007:
			if (Function_562())
			{
				if (!Function_300(&Local_653))
				{
					Function_558();
					bLocal_972 = true;
					bLocal_724 = 8;
				}
				else
				{
					Function_558();
					Function_557();
					bLocal_724 = 9;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_288("$/cutscene/FBI_05/FBI_05", &Local_716, &Local_653, &iLocal_723, 117790, 117680, 117324, 116763, 116734, 54800, 0, 1, 1, 2, 2, 0, 1))
			{
				bLocal_724 = 9;
				Function_330(bLocal_730, bLocal_728);
			}
			break;
		
		case 0x00000009:
			Function_155(Global_30717[3]);
			Function_549(&uLocal_811, bLocal_652);
			Function_221(&(Local_851[017]), bLocal_727, "FBI_Ross", 0, 0x5f5e100, 1);
			Function_221(&(Local_851[117]), bLocal_728, "FBI_Fordham", 0, 0x5f5e100, 1);
			Function_423(&iLocal_739);
			Function_423(&iLocal_742);
			Function_423(&iLocal_745);
			iLocal_723 = 0;
			bLocal_724 = false;
			Function_547(&Local_653, &iLocal_723, &bLocal_724);
			Function_546(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_653);
			switch (iLocal_723)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_243();
					break;
				
				case 0x00000002:
					Function_237();
					break;
				
				case 0x00000003:
					Function_233();
					break;
				
				case 0x00000004:
					Function_219();
					break;
				
				case 0x00000065:
					Function_218();
					break;
			}
			break;
	}
	return;
}

void Function_546(struct<25> Param0) //Position: 0x1BF80 / 114560
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_723 = 0;
			break;
		
		case 0x00000002:
			iLocal_723 = 1;
			break;
		
		case 0x00000003:
			iLocal_723 = 2;
			break;
		
		case 0x00000004:
			iLocal_723 = 3;
			break;
		
		case 0x00000005:
			iLocal_723 = 4;
			break;
		
		case 0x00000006:
			iLocal_723 = 5;
			break;
		
		case 0x00000007:
			iLocal_723 = 6;
			break;
		
		case 0x00000008:
			iLocal_723 = 7;
			break;
		
		case 0x00000009:
			iLocal_723 = 8;
			break;
		
		case 0x0000000A:
			iLocal_723 = 101;
			break;
	}
}

void Function_547(int iParam0, var uParam1, int iParam2) //Position: 0x1C016 / 114710
{
	if (Function_300(iParam0))
	{
		*uParam1 = Function_404(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_548();
	}
	return;
}

void Function_548() //Position: 0x1C04A / 114762
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

int Function_549(var uParam0, bool bParam1) //Position: 0x1C09B / 114843
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_550(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_550(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_550(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_550(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_550(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1C73B / 116539
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

int Function_551() //Position: 0x1C7FE / 116734
{
	Function_305(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	Function_330(bLocal_730, bLocal_728);
	return 1;
}

int Function_552() //Position: 0x1C81B / 116763
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_LAYOUTREF_VALID(bLocal_652))
	{
		cLocal_726 = CREATE_OBJECT_ITERATOR(bLocal_652);
	}
	FORCE_VEHICLE_CINEMATIC_CAMERA(1);
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 700)[4], 15);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 700)[4]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 700)[4]);
	Function_238(10, 0, 1);
	RESET_ACTOR_GAITS(bLocal_727, 0);
	SET_CRIPPLE_ENABLE(bLocal_727, 0);
	SET_ACTOR_FACTION(bLocal_727, 20);
	TASK_PRIORITY_SET(bLocal_727, true);
	TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bLocal_727, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_727, 50.0f);
	SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_727, true);
	Function_553();
	GET_VOLUME_CENTER((*&Local_4 + 732)[8], &vVar0);
	GET_VOLUME_SCALE((*&Local_4 + 732)[8], &vVar3);
	Function_336((*&Local_4 + 732)[8]);
	CREATE_OBSTACLE_ON_OBJECT(Local_4.f_2584, Function_53(), vVar0, Function_336((*&Local_4 + 732)[8]), vVar3);
	Function_236(Global_34573, (*&Local_4 + 1184)[1], 1, 1, 0);
	Function_236(bLocal_727, (*&Local_4 + 1184)[3], 1, 1, 1);
	Function_236(bLocal_728, (*&Local_4 + 1184)[5], 1, 1, 1);
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[0]);
	}
	else if (iLocal_965)
	{
		CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_730);
	}
	else
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[0], 1, 1, 1);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	if (!ACTOR_HAS_WEAPON(Global_34573, 2))
	{
		SET_WEAPONENUM_LOCKED(2, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 0.0f, 1, 1);
		_ADD_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 1, 0);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(bLocal_728);
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, false) != bLocal_728)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_728, bLocal_730, false);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	TASK_CLEAR(bLocal_727);
	if (GET_VEHICLE(bLocal_727) != bLocal_730)
	{
		SET_ACTOR_IN_VEHICLE(bLocal_727, bLocal_730, true);
	}
	if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_730, 3) != Global_34573)
	{
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_730, 3);
		SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 0.0f);
	}
	SET_ACTOR_MAX_HEALTH(bLocal_728, GET_ACTOR_MAX_HEALTH(bLocal_727));
	Function_229(bLocal_728);
	bLocal_782 = Function_383();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_782);
	PRINTNL();
	Function_330(bLocal_730, bLocal_728);
	return 1;
}

int Function_553() //Position: 0x1CA4C / 117324
{
	if (!IS_ACTOR_VALID(bLocal_728))
	{
		Function_554();
		bLocal_728 = (*&Local_4 + 376)[02];
		Function_231(bLocal_728);
		RESET_ACTOR_GAITS(bLocal_728, 0);
		SET_CRIPPLE_ENABLE(bLocal_728, 0);
		TASK_PRIORITY_SET(bLocal_728, true);
		TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(bLocal_728, 0, 0);
		UNK_0x99AFD2D1(bLocal_728, 1, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_728, 0);
		SET_ACTOR_FACTION(bLocal_728, 20);
		SET_ACTOR_MAX_HEALTH(bLocal_728, 300.0f);
		SET_ACTOR_HEALTH(bLocal_728, 300.0f);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bLocal_728, 1);
		Function_386(bLocal_728, 85.0f, -1.0f, -1.0f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_728, true);
		SET_ACTOR_VISION_MAX_RANGE(bLocal_728, 80.0f, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bLocal_728, 80.0f);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bLocal_728, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bLocal_728, 80.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_728, 17, false);
	}
	else if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(bLocal_728))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_728);
	}
	return 1;
}

void Function_554() //Position: 0x1CB2A / 117546
{
	Local_4.f_388 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "DeputyGroup"));
	(*&Local_4 + 376)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Deputy", 641, 774,6809f, 83,65965f, 1241,539f, 0.0f, -29,42593f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 376)[02], Local_4.f_388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 376)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 376)[02], 20);
	SET_ACTOR_FACTION((*&Local_4 + 376)[02], 20);
	return;
}

int Function_555() //Position: 0x1CBB0 / 117680
{
	if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(Global_12976.f_36);
	}
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[0]);
	}
	else
	{
		Function_236(bLocal_730, (*&Local_4 + 1120)[0], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_730))
	{
		CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_730);
		iLocal_965 = 1;
	}
	return 1;
}

int Function_556() //Position: 0x1CC1E / 117790
{
	Function_312(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_256((*&Local_4 + 1120)[0]);
	Function_310(StackVal, StackVal, bLocal_652, Function_256((*&Local_4 + 1120)[0]), &Local_4 + 776[0], 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_557() //Position: 0x1CC53 / 117843
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_LAYOUTREF_VALID(bLocal_652))
	{
		cLocal_726 = CREATE_OBJECT_ITERATOR(bLocal_652);
	}
	CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 700)[4], 15);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 700)[4]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 700)[4]);
	Function_238(10, 0, 1);
	RESET_ACTOR_GAITS(bLocal_727, 0);
	SET_CRIPPLE_ENABLE(bLocal_727, 0);
	SET_ACTOR_FACTION(bLocal_727, 20);
	TASK_PRIORITY_SET(bLocal_727, true);
	TASK_STAND_STILL(bLocal_727, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bLocal_727, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_727, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_727, 50.0f);
	SET_ACTOR_HEALTH(bLocal_727, GET_ACTOR_MAX_HEALTH(bLocal_727));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_727, true);
	GET_VOLUME_CENTER((*&Local_4 + 732)[8], &vVar0);
	GET_VOLUME_SCALE((*&Local_4 + 732)[8], &vVar3);
	Function_336((*&Local_4 + 732)[8]);
	CREATE_OBSTACLE_ON_OBJECT(Local_4.f_2584, Function_53(), vVar0, Function_336((*&Local_4 + 732)[8]), vVar3);
	if (!IS_ACTOR_VALID(bLocal_730))
	{
		Function_333((*&Local_4 + 1120)[0]);
	}
	Function_319(bLocal_730, 1);
	Function_234(bLocal_730, 4);
	START_VEHICLE(bLocal_730);
	if (!IS_ACTOR_VALID(bLocal_728))
	{
		Function_554();
		bLocal_728 = (*&Local_4 + 376)[02];
		Function_231(bLocal_728);
		RESET_ACTOR_GAITS(bLocal_728, 0);
		SET_CRIPPLE_ENABLE(bLocal_728, 0);
		TASK_PRIORITY_SET(bLocal_728, true);
		TASK_STAND_STILL(bLocal_728, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(bLocal_728, 0, 0);
		UNK_0x99AFD2D1(bLocal_728, 1, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_728, 0);
		SET_ACTOR_FACTION(bLocal_728, 20);
		SET_ACTOR_MAX_HEALTH(bLocal_728, 300.0f);
		SET_ACTOR_HEALTH(bLocal_728, 300.0f);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bLocal_728, 1);
		Function_386(bLocal_728, 85.0f, -1.0f, -1.0f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_728, true);
		SET_ACTOR_VISION_MAX_RANGE(bLocal_728, 80.0f, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bLocal_728, 80.0f);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bLocal_728, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bLocal_728, 80.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_728, 17, false);
	}
	SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bLocal_727, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_728, GET_ACTOR_MAX_HEALTH(bLocal_727));
	Function_229(bLocal_728);
	bLocal_782 = Function_383();
	PRINTSTRING("OUR NUM OF STAGE RUNS: ");
	PRINTINT(bLocal_782);
	PRINTNL();
	return;
}

void Function_558() //Position: 0x1CE55 / 118357
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
	
	Function_561(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("FBI05_layout");
	Local_4.f_728 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage1Vols_set");
	(*&Local_4 + 700)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutsideStation", 2, 754,7042f, 78,52522f, 1236,073f, 0.0f, 0.0f, 0.0f, 10,48061f, 10.0f, 39,15748f);
	ADD_TO_VOLUME_SET(Local_4.f_728, (*&Local_4 + 700)[0]);
	(*&Local_4 + 700)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerOutside", 2, 747,3852f, 78,52522f, 1238,061f, 0.0f, -90,2158f, 0.0f, 29,95928f, 10.0f, 21,13177f);
	ADD_TO_VOLUME_SET(Local_4.f_728, (*&Local_4 + 700)[1]);
	(*&Local_4 + 700)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FordDontMove", 2, 770,7709f, 79,65591f, 1227,848f, 0.0f, 0.0f, 0.0f, 3,711047f, 8,903046f, 2,738106f);
	ADD_TO_VOLUME_SET(Local_4.f_728, (*&Local_4 + 700)[2]);
	(*&Local_4 + 700)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nRossStart", 2, 763,5057f, 80,34832f, 1235,046f, 0.0f, 0.0f, 0.0f, 4,798811f, 5,851085f, 8,461024f);
	ADD_TO_VOLUME_SET(Local_4.f_728, (*&Local_4 + 700)[3]);
	(*&Local_4 + 700)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StationVol", 2, 769,5136f, 78,42754f, 1235,129f, 0.0f, 0.0f, 0.0f, 16,49199f, 25,54374f, 17,29126f);
	ADD_TO_VOLUME_SET(Local_4.f_728, (*&Local_4 + 700)[4]);
	(*&Local_4 + 700)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ArrivalConv", 2, 398,0691f, 96,25044f, 1839,669f, 0.0f, -185,3164f, 0.0f, 25,68781f, 53,03576f, 117,8972f);
	ADD_TO_VOLUME_SET(Local_4.f_728, (*&Local_4 + 700)[5]);
	Local_4.f_772 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "General_Volumes_set");
	(*&Local_4 + 732)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "See_Baddies", 2, 514,6799f, 98,30594f, 1826,612f, 0.0f, -88,12146f, 0.0f, 119,3891f, 99,99772f, 10,06492f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[0]);
	(*&Local_4 + 732)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nCav_Shoot", 2, 573,3358f, 99,56177f, 1816,982f, 0.0f, 0.0f, 0.0f, 58,11268f, 66,3402f, 137,0674f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[1]);
	(*&Local_4 + 732)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "No_Skip", 2, 398,0691f, 96,25044f, 1839,669f, 0.0f, -185,3164f, 0.0f, 21,30032f, 115,3502f, 154,9037f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[2]);
	(*&Local_4 + 732)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "No_Skip_Back", 2, 766,3774f, 78,41332f, 1396,973f, 0.0f, -88,61633f, 0.0f, 8,212883f, 44,4762f, 59,72706f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[3]);
	(*&Local_4 + 732)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Start_Slow", 2, 591,3914f, 98,55841f, 1814,943f, 0.0f, -186,3047f, 0.0f, 7,419566f, 53,03576f, 63,50355f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[4]);
	(*&Local_4 + 732)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nCar_Break", 2, 633,6897f, 97,94424f, 1815,653f, 0.0f, -185,4115f, 0.0f, 5,017893f, 53,03576f, 63,50355f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[5]);
	(*&Local_4 + 732)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BWArrival_Vol", 2, 775,0907f, 78,35129f, 1336,407f, 0.0f, -0,1092f, 0.0f, 8,212883f, 44,4762f, 59,72706f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[6]);
	(*&Local_4 + 732)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BreakdownCutsceneVol", 2, 582,5807f, 98,55841f, 1819,866f, 0.0f, -186,3047f, 0.0f, 162,4072f, 53,03576f, 91,18114f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[7]);
	(*&Local_4 + 732)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WagonObstacleVolume", 2, 587,5677f, 101,093f, 1804,184f, 0.0f, -214,6675f, 0.0f, 1,593893f, 5,071055f, 4,023077f);
	ADD_TO_VOLUME_SET(Local_4.f_772, (*&Local_4 + 732)[8]);
	Local_4.f_792 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVolumes_set");
	(*&Local_4 + 776)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, 763,4524f, 80,16332f, 1245,605f, 0.0f, 0,1493859f, 0.0f, 40,54383f, 18,04197f, 41,51529f);
	ADD_TO_VOLUME_SET(Local_4.f_792, (*&Local_4 + 776)[0]);
	(*&Local_4 + 776)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, 357,4796f, 78,61549f, 1986,664f, 0.0f, -40,72097f, 0.0f, 10,3444f, 6,32224f, 13,42867f);
	ADD_TO_VOLUME_SET(Local_4.f_792, (*&Local_4 + 776)[1]);
	(*&Local_4 + 776)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneFinalEndingVol", 2, 735,738f, 78,35129f, 1263,614f, 0.0f, 0,1493859f, 0.0f, 29,84087f, 6,32224f, 39,76952f);
	ADD_TO_VOLUME_SET(Local_4.f_792, (*&Local_4 + 776)[2]);
	Local_4.f_836 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BlackwaterVolumes_set");
	(*&Local_4 + 796)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BWGatewayVol", 2, 740,0529f, 81,25661f, 1275,365f, 0.0f, 0.0f, 0.0f, 31,52874f, 8,256212f, 28,00852f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[0]);
	(*&Local_4 + 796)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nBW_NoStop", 2, 740,0529f, 81,64233f, 1277,16f, 0.0f, 0.0f, 0.0f, 18,97453f, 8,256212f, 30,12789f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[1]);
	(*&Local_4 + 796)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient1", 2, 734,5236f, 81,64233f, 1325,519f, 0.0f, 0.0f, 0.0f, 7,074151f, 8,256212f, 145,0459f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[2]);
	(*&Local_4 + 796)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient2", 2, 749,3684f, 81,64233f, 1396,213f, 0.0f, 93,24652f, 0.0f, 7,26117f, 8,256212f, 34,7606f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[3]);
	(*&Local_4 + 796)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient3", 2, 762,0547f, 81,64233f, 1434,514f, 0.0f, -3,028033f, 0.0f, 7,26117f, 21,47442f, 81,18225f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[4]);
	(*&Local_4 + 796)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient0", 2, 747,7328f, 81,64233f, 1251,699f, 0.0f, 90,03266f, 0.0f, 7,26117f, 8,256212f, 33,97383f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[5]);
	(*&Local_4 + 796)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient4", 2, 776,4197f, 81,64233f, 1385,994f, 0.0f, 122,7549f, 0.0f, 7,26117f, 8,256212f, 34,7606f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[6]);
	(*&Local_4 + 796)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient5", 2, 787,9889f, 82,92458f, 1359,048f, 0.0f, 181,7395f, 0.0f, 7,26117f, 8,256212f, 39,71492f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[7]);
	(*&Local_4 + 796)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BW_BlockAmbient6", 2, 763,787f, 82,92458f, 1337,726f, 0.0f, 271,1258f, 0.0f, 7,26117f, 8,256212f, 53,42484f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 796)[8]);
	Local_4.f_876 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CliffVolumes_set");
	(*&Local_4 + 840)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CarParkVol", 2, 287,3313f, 90,38573f, 1888,373f, 0.0f, -97,80096f, 0.0f, 16,16906f, 7,577355f, 16,05389f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[0]);
	(*&Local_4 + 840)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Near_Car", 2, 301,0072f, 89,02029f, 1910,099f, 0.0f, -5,32147f, 0.0f, 32,45829f, 16,98229f, 20,69118f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[1]);
	(*&Local_4 + 840)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AI_Near_Help", 2, 282,1396f, 90,41109f, 1861,376f, 0.0f, -76,61446f, 0.0f, 138,3332f, 16,98229f, 43,77419f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[2]);
	(*&Local_4 + 840)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Start_Next_Path", 2, 337,8277f, 78,40516f, 1909,692f, 0.0f, -93,67036f, 0.0f, 6,298777f, 16,98229f, 13,41166f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[3]);
	(*&Local_4 + 840)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NoStop", 2, 286,8474f, 90,98055f, 1885,959f, 0.0f, -83,55318f, 0.0f, 67,99723f, 35,36f, 54,41192f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[4]);
	(*&Local_4 + 840)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartDialogue", 2, 316,2639f, 83,09325f, 1910,313f, 0.0f, -79,11249f, 0.0f, 25,44245f, 33,30291f, 13,41166f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[5]);
	(*&Local_4 + 840)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AtCar", 2, 296,6946f, 91,4112f, 1909,93f, 0.0f, -50,00353f, 0.0f, 9,072896f, 16,71001f, 32,57975f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[6]);
	(*&Local_4 + 840)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CheckCarCrash", 2, 292,4238f, 90,41109f, 1904,593f, 0.0f, -33,29477f, 0.0f, 112,2552f, 53,16642f, 88,32642f);
	ADD_TO_VOLUME_SET(Local_4.f_876, (*&Local_4 + 840)[7]);
	Local_4.f_924 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "WreckVolumes_set");
	(*&Local_4 + 880)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BoardWreckVol", 2, 358,6295f, 74,73365f, 1974,667f, 0.0f, -30,41525f, 0.0f, 7,351048f, 10,16397f, 7,375453f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[0]);
	(*&Local_4 + 880)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Spot_Nastas", 2, 359,9365f, 80,46455f, 1988,535f, 5,37787f, 50,03459f, 0.0f, 11,37762f, 4,666167f, 14,58543f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[1]);
	(*&Local_4 + 880)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wait_For_Player", 2, 362,6865f, 80,37463f, 1990,839f, 7,02528f, 50,03459f, 0.0f, 10,83126f, 4,666167f, 23,70712f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[2]);
	(*&Local_4 + 880)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "UpperDeckVol", 2, 368,4425f, 79,31108f, 1995,576f, 6,264449f, 50,20226f, 0.0f, 11,40671f, 4,879772f, 39,90004f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[3]);
	(*&Local_4 + 880)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerOnBoard", 2, 353,3559f, 74,73365f, 1982,994f, 0.0f, -40,96615f, 0.0f, 19,41523f, 10,13245f, 12,12306f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[4]);
	(*&Local_4 + 880)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SafetyTele", 2, 355,8362f, 73,68557f, 1991,182f, 0.0f, -44,56898f, 0.0f, 10.0f, 10,164f, 2,938993f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[5]);
	(*&Local_4 + 880)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SpawnGangBelow", 2, 371,4429f, 78,95001f, 1998,178f, 5,37787f, 50,03459f, 0.0f, 15,46286f, 4,666167f, 1,997874f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[6]);
	(*&Local_4 + 880)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GangB_0_Out", 2, 376,9176f, 73,98427f, 2006,741f, 5,37787f, 50,03459f, 0.0f, 4,288333f, 2,793503f, 1,997874f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[7]);
	(*&Local_4 + 880)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GangB_1_Out", 2, 370,7362f, 74,90338f, 2001,56f, 5,37787f, 50,03459f, 0.0f, 4,288333f, 2,793503f, 1,997874f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[8]);
	(*&Local_4 + 880)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BoatVolume", 2, 364,5475f, 74,73365f, 1992,702f, 0.0f, -38,77573f, 0.0f, 53,32754f, 23,06214f, 15,17032f);
	ADD_TO_VOLUME_SET(Local_4.f_924, (*&Local_4 + 880)[9]);
	Local_4.f_968 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "FordEsc_set");
	(*&Local_4 + 928)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Steps", 2, 372,6065f, 78,02693f, 2003,463f, 5,37787f, 50,03459f, 0.0f, 3,653121f, 3,714921f, 4,692063f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[0]);
	(*&Local_4 + 928)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OnSteps", 2, 377,5315f, 76,00803f, 2003,12f, 5,37787f, 50,03459f, 0.0f, 2,273019f, 4,346757f, 5,204105f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[1]);
	(*&Local_4 + 928)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BottomSteps", 2, 372,0271f, 74,71802f, 2004,098f, 3,719638f, -36,64946f, -7,476742f, 1,765317f, 3,225487f, 2,047752f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[2]);
	(*&Local_4 + 928)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MidHall", 2, 365,5279f, 75,54311f, 1997,195f, 5,37787f, 50,03459f, 0.0f, 4,288333f, 2,793503f, 3,470452f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[3]);
	(*&Local_4 + 928)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nRearCover", 2, 351,9631f, 74,47399f, 1987,669f, 5,37787f, 50,03459f, 0.0f, 3,074852f, 3,079168f, 3,470452f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[4]);
	(*&Local_4 + 928)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AgentDownSteps", 2, 375,5296f, 76,25392f, 2001,442f, 5,37787f, 50,03459f, 0.0f, 5,729691f, 7,852986f, 17,02078f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[5]);
	(*&Local_4 + 928)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AgentDownSteps1", 2, 372,5011f, 78,69061f, 1999,274f, 5,37787f, 50,03459f, 0.0f, 11,70761f, 4,480997f, 10,33408f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[6]);
	(*&Local_4 + 928)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFallWater", 2, 359,8587f, 68,39693f, 1971,119f, 0,1682787f, -29,50935f, 0,1597698f, 115,4594f, 8,792746f, 82,88964f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[7]);
	(*&Local_4 + 928)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarrelSafety", 2, 373,9458f, 71,0646f, 2009,309f, 5,37787f, 50,03459f, 0.0f, 13,03147f, 3,079168f, 10,76506f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 928)[8]);
	Local_4.f_1028 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Pier_Ally_Vols_set");
	(*&Local_4 + 972)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "On_Pier", 2, 359,8351f, 73,94907f, 1971,133f, 0,1682787f, -29,50935f, 0,1597698f, 9,115654f, 8,206367f, 11,79591f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[0]);
	(*&Local_4 + 972)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Shore_0", 2, 318,9435f, 75,56539f, 1904,599f, 0.0f, -26,25985f, 0.0f, 59,28301f, 49,2747f, 104,0935f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[1]);
	(*&Local_4 + 972)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Shore_1", 2, 379,2657f, 75,49315f, 1913,94f, 0.0f, -117,2156f, 0.0f, 30,20152f, 18,89278f, 62,96634f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[2]);
	(*&Local_4 + 972)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ToMid", 2, 354,6881f, 73,84238f, 1956,387f, 0.0f, 62,736f, 0.0f, 7,173547f, 8,511875f, 6,7237f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[3]);
	(*&Local_4 + 972)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AtMid", 2, 340,3851f, 74,13269f, 1948,462f, 0.0f, 62,736f, 0.0f, 10,24725f, 8,511875f, 6,7237f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[4]);
	(*&Local_4 + 972)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nSpawnLast", 2, 354,2288f, 74,13269f, 1955,168f, 0.0f, 62,736f, 0.0f, 13,58986f, 8,511875f, 6,7237f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[5]);
	(*&Local_4 + 972)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff", 2, 359,2821f, 74,95352f, 1949,019f, 0,1682787f, -29,50935f, 0,1597698f, 9,115654f, 8,206367f, 11,79591f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[6]);
	(*&Local_4 + 972)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff1", 2, 328,1286f, 74,2966f, 1950,978f, 0,1682787f, -29,50935f, 0,1597698f, 21,18171f, 8,206367f, 11,79591f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[7]);
	(*&Local_4 + 972)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff2", 2, 319,47f, 73,87955f, 1931,449f, -0,2808623f, -121,428f, 0,4823175f, 17,43037f, 19,73222f, 9,818571f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[8]);
	(*&Local_4 + 972)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff3", 2, 323,6973f, 74,9405f, 1944,738f, 0,1662699f, -28,26226f, 0,1639279f, 21,18171f, 8,206367f, 11,79591f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[9]);
	(*&Local_4 + 972)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff4", 2, 322,6597f, 73,9119f, 1924,077f, -0,1768236f, -145,9163f, 0,341751f, 13,4954f, 19,73222f, 10,2591f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[10]);
	(*&Local_4 + 972)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff5", 2, 319,9195f, 73,90608f, 1921,814f, -0,1531273f, -163,0158f, 0,287388f, 25,47f, 27,98685f, 9,840277f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[11]);
	(*&Local_4 + 972)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreventWalkingOff6", 2, 330,7509f, 73,96165f, 1918,019f, -0,1531273f, -163,0158f, 0,287388f, 9,531181f, 27,98685f, 6,522169f);
	ADD_TO_VOLUME_SET(Local_4.f_1028, (*&Local_4 + 972)[12]);
	Local_4.f_1052 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Pier_Enemy_Vols_set");
	(*&Local_4 + 1032)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Enemy_Vol_0", 2, 329,8887f, 74,51599f, 1960,252f, 0.0f, -117,7701f, 0.0f, 16,46113f, 7,577355f, 7,450965f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[0]);
	(*&Local_4 + 1032)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Enemy_Vol_1", 2, 338,4716f, 74,60163f, 1944,4f, 0.0f, -117,7701f, 0.0f, 11,89671f, 7,577355f, 7,450965f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[1]);
	(*&Local_4 + 1032)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Enemy_Vol_2", 2, 346,5766f, 74,02631f, 1951,795f, 0.0f, -117,7701f, 0.0f, 11,89671f, 7,577355f, 11,84802f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[2]);
	(*&Local_4 + 1032)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Enemy_Vol_3", 2, 362,7803f, 75,66077f, 1944,153f, 0.0f, -117,7701f, 0.0f, 17,45442f, 7,577355f, 15,366f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1032)[3]);
	Local_4.f_1056 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 1060)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Player_CS_02", 358,5899f, 78,35647f, 1993,617f, -2,929729f, -2,190774f, -0,2666136f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[0], Local_4.f_1056);
	(*&Local_4 + 1060)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Ford_CS_02", 361,7963f, 77,90121f, 1995,74f, 0.0f, 30,49666f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[1], Local_4.f_1056);
	(*&Local_4 + 1060)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "p_go_0", 358,8781f, 78,87623f, 1986,543f, 0.0f, 68,63623f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[2], Local_4.f_1056);
	(*&Local_4 + 1060)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "f_go_0", 357,6982f, 78,73158f, 1988,257f, 0.0f, 12,42976f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[3], Local_4.f_1056);
	(*&Local_4 + 1060)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "p_tele_0", 356,8644f, 78,89484f, 1985,791f, 0.0f, 235,8053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[4], Local_4.f_1056);
	(*&Local_4 + 1060)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "p_end_0", 357,562f, 78,92635f, 1986,079f, 0.0f, 220,7636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[5], Local_4.f_1056);
	(*&Local_4 + 1060)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "FordAfterCut", 358,3359f, 78,77361f, 1987,387f, 0,7276216f, -146,4759f, -0,5617104f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1060)[6], Local_4.f_1056);
	Local_4.f_1092 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1096)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Player_CS_03", 290,4321f, 90,40784f, 1905,325f, -4,581825f, -50,25592f, 3,147366f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1096)[0], Local_4.f_1092);
	(*&Local_4 + 1096)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Ford_CS_03", 289,9471f, 90,42127f, 1904,431f, 0.0f, -56,67218f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1096)[1], Local_4.f_1092);
	(*&Local_4 + 1096)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nNas_CS_03", 293,9555f, 90,50394f, 1903,294f, 8,512562f, 110,1837f, 7,618086f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1096)[2], Local_4.f_1092);
	(*&Local_4 + 1096)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Ross_CS_03", 293,1549f, 90,56281f, 1902,381f, 5,87681f, 119,9217f, 4,719213f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1096)[3], Local_4.f_1092);
	Local_4.f_1116 = CREATE_OBJECTSET_IN_LAYOUT("CarSpawnSet", Local_4, 8, 0);
	(*&Local_4 + 1120)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CarPos01", 757,208f, 78,32298f, 1249,515f, 0.0f, 447,5527f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1120)[0], Local_4.f_1116);
	(*&Local_4 + 1120)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CarPos08", 290,2566f, 90,41211f, 1901,074f, 0.0f, -143,9556f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1120)[1], Local_4.f_1116);
	(*&Local_4 + 1120)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CarPos02", 291,7609f, 90,41638f, 1903,362f, 0.0f, 30,63107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1120)[2], Local_4.f_1116);
	(*&Local_4 + 1120)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CarPos04", 631,7386f, 98,195f, 1816,009f, 0.0f, -88,8962f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1120)[3], Local_4.f_1116);
	(*&Local_4 + 1120)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CarPosFinal", 738,9096f, 78,40118f, 1276,92f, 0.0f, -0,1127934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1120)[4], Local_4.f_1116);
	Local_4.f_1144 = CREATE_OBJECTSET_IN_LAYOUT("PostIntroSet", Local_4, 8, 0);
	(*&Local_4 + 1148)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CompMove", 776,7404f, 81,65591f, 1226,746f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1148)[0], Local_4.f_1144);
	(*&Local_4 + 1148)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayMove", 776,741f, 81,65591f, 1227,666f, 0.0f, 0,04750083f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1148)[1], Local_4.f_1144);
	(*&Local_4 + 1148)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "DepMove", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1148)[2], Local_4.f_1144);
	Local_4.f_1164 = CREATE_OBJECTSET_IN_LAYOUT("BlipSet", Local_4, 8, 0);
	(*&Local_4 + 1168)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Wreck_Dest", 291,1565f, 90,3827f, 1902,015f, 0.0f, -138,1969f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1168)[0], Local_4.f_1164);
	(*&Local_4 + 1168)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "BW_Dest", 740,361f, 78,35129f, 1276,814f, 0.0f, 102,4612f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1168)[1], Local_4.f_1164);
	Local_4.f_1180 = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", Local_4, 8, 0);
	(*&Local_4 + 1184)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPos01", 776,4817f, 83,95077f, 1231,419f, 0.0f, -2,18978f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[0], Local_4.f_1180);
	(*&Local_4 + 1184)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPos01_End", 759,6575f, 78,4659f, 1246,748f, 0.0f, 91,03735f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[1], Local_4.f_1180);
	(*&Local_4 + 1184)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nCompPos01", 776,6899f, 82,25591f, 1228,862f, 0.0f, 6,435434f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[2], Local_4.f_1180);
	(*&Local_4 + 1184)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompPos01_End", 762,3955f, 78,30585f, 1248,678f, 0.0f, -231,7037f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[3], Local_4.f_1180);
	(*&Local_4 + 1184)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DepPos01_Start", 776,6744f, 83,67574f, 1232,686f, 0.0f, 360,448f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[4], Local_4.f_1180);
	(*&Local_4 + 1184)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "DepPos01_End", 760,8069f, 78,30585f, 1248,679f, 0.0f, 455,8587f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[5], Local_4.f_1180);
	(*&Local_4 + 1184)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionWarp_pos", 760,506f, 79,70472f, 1235,111f, 0.0f, 455,8587f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[6], Local_4.f_1180);
	(*&Local_4 + 1184)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "DeputyWarp_pos", 763,7825f, 79,72314f, 1235,543f, 0.0f, 455,8587f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[7], Local_4.f_1180);
	Local_4.f_1220 = CREATE_OBJECTSET_IN_LAYOUT("Stage_EightSet", Local_4, 8, 0);
	(*&Local_4 + 1224)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_08", 284,9533f, 91,16349f, 1893,736f, 0.0f, 221,2897f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[0], Local_4.f_1220);
	(*&Local_4 + 1224)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "DeputyStart_08", 286,9816f, 90,57594f, 1895,597f, 0.0f, 201,4434f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[1], Local_4.f_1220);
	(*&Local_4 + 1224)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_08", 288,019f, 90,61343f, 1895,229f, 0.0f, 195,7252f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[2], Local_4.f_1220);
	*(&Local_4 + 1240[06]) = { 355,8554f, 78,85863f, 1985,73f };
	*(&Local_4 + 1240[06] + 12) = { 0.0f, -218,4987f, 0.0f };
	*(&Local_4 + 1240[16]) = { 284,961f, 90,45762f, 1900,683f };
	*(&Local_4 + 1240[16] + 12) = { 0.0f, -17,05782f, 0.0f };
	*(&Local_4 + 1240[26]) = { 629,2828f, 98,30627f, 1813,489f };
	*(&Local_4 + 1240[26] + 12) = { 0.0f, 80,561f, 0.0f };
	*(&Local_4 + 1240[36]) = { 743,439f, 78,48866f, 1278,094f };
	*(&Local_4 + 1240[36] + 12) = { 0.0f, -339,9262f, 0.0f };
	*(&Local_4 + 1240[46]) = { 358,7332f, 73,51207f, 1973,776f };
	*(&Local_4 + 1240[46] + 12) = { 0.0f, -203,8235f, 0.0f };
	*(&Local_4 + 1240[56]) = { 358,3191f, 73,51224f, 1973,591f };
	*(&Local_4 + 1240[56] + 12) = { 0.0f, -203,8235f, 0.0f };
	*(&Local_4 + 1240[66]) = { 743,7215f, 78,48866f, 1264,157f };
	*(&Local_4 + 1240[66] + 12) = { 0.0f, -1,041323f, 0.0f };
	*(&Local_4 + 1240[76]) = { 372,7627f, 76,89716f, 1998,079f };
	*(&Local_4 + 1240[76] + 12) = { 0.0f, 233,1662f, 0.0f };
	*(&Local_4 + 1240[86]) = { 444,7391f, 95,94712f, 1837,053f };
	*(&Local_4 + 1240[86] + 12) = { 0.0f, 80,6893f, 0.0f };
	*(&Local_4 + 1240[96]) = { 754,4494f, 78,4863f, 1271,653f };
	*(&Local_4 + 1240[96] + 12) = { 0.0f, 102,4612f, 0.0f };
	*(&Local_4 + 1240[106]) = { 625,7407f, 98,55563f, 1817,464f };
	*(&Local_4 + 1240[106] + 12) = { 0.0f, -268,7516f, 0.0f };
	*(&Local_4 + 1240[116]) = { 632,3598f, 98,3733f, 1816,386f };
	*(&Local_4 + 1240[116] + 12) = { 0.0f, -290,8852f, 0.0f };
	*(&Local_4 + 1240[126]) = { 744,9272f, 78,35129f, 1278,734f };
	*(&Local_4 + 1240[126] + 12) = { 0.0f, 166,0616f, 0.0f };
	*(&Local_4 + 1240[136]) = { 744,3211f, 78,35129f, 1276,001f };
	*(&Local_4 + 1240[136] + 12) = { 0.0f, 82,89465f, 0.0f };
	Local_4.f_1580 = CREATE_OBJECTSET_IN_LAYOUT("GunGiveSet", Local_4, 8, 0);
	*(&Local_4 + 1584[06]) = { 758,0623f, 78,52522f, 1245,056f };
	*(&Local_4 + 1584[06] + 12) = { 0.0f, 21,9018f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "FordWait", 758,0623f, 78,52522f, 1245,056f, 0.0f, 21,9018f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1580);
	Local_4.f_1612 = CREATE_OBJECTSET_IN_LAYOUT("SkipPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1616)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Car_Skip", 431,6627f, 98,25089f, 1838,886f, 0.0f, 92,39217f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[0], Local_4.f_1612);
	(*&Local_4 + 1616)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Player_Skip", 436,3005f, 98,0575f, 1841,915f, 0.0f, 71,81484f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[1], Local_4.f_1612);
	(*&Local_4 + 1616)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Car_Skip_Back", 779,0988f, 78,22346f, 1336,481f, 0.0f, 92,06625f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[2], Local_4.f_1612);
	(*&Local_4 + 1616)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Player_Skip_Back", 781,6895f, 78,49155f, 1341,429f, 0.0f, 0,3132282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[3], Local_4.f_1612);
	Local_4.f_1636 = CREATE_OBJECTSET_IN_LAYOUT("Near_Car_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1640)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nAgent_Pos", 296,41f, 90,41638f, 1911,363f, 0.0f, 249,2162f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1640)[0], Local_4.f_1636);
	Local_4.f_1648 = CREATE_OBJECTSET_IN_LAYOUT("TriggerForCarSet", Local_4, 8, 0);
	(*&Local_4 + 1652)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Gateway", 297,3809f, 90,41638f, 1909,888f, 0.0f, 38,97933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1652)[0], Local_4.f_1648);
	Local_4.f_1660 = CREATE_OBJECTSET_IN_LAYOUT("RescueNasPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1664)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Nas_Pos", 356,7759f, 78,86572f, 1986,653f, 0.0f, -223,9438f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[0], Local_4.f_1660);
	(*&Local_4 + 1664)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Fordham_Wait", 360,1846f, 73,46813f, 1975,533f, 0.0f, 11,89991f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[1], Local_4.f_1660);
	(*&Local_4 + 1664)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerAfterCut", 357,3657f, 78,71796f, 1985,477f, 0.0f, -134,2303f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[2], Local_4.f_1660);
	(*&Local_4 + 1664)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Fordahm_Decide", 381,9911f, 72,53961f, 2007,199f, 0.0f, -297,0239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[3], Local_4.f_1660);
	(*&Local_4 + 1664)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Check_Shore_0", 329,5219f, 74,30811f, 1939,566f, 0.0f, -297,0239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[4], Local_4.f_1660);
	(*&Local_4 + 1664)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Check_Shore_1", 378,748f, 73,50656f, 1920,397f, 0.0f, -297,0239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[5], Local_4.f_1660);
	(*&Local_4 + 1664)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Nas_END", 355,1098f, 78,8945f, 1987,904f, 0.0f, -131,8703f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[6], Local_4.f_1660);
	(*&Local_4 + 1664)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "FE_Land", 332,8846f, 74,46652f, 1945,462f, 0.0f, -320,8971f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[7], Local_4.f_1660);
	(*&Local_4 + 1664)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "FE_Pier", 358,8564f, 73,12016f, 1981,384f, 0.0f, -306,4684f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[8], Local_4.f_1660);
	(*&Local_4 + 1664)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "FE_Side", 377,0568f, 76,38771f, 1997,764f, 0.0f, -235,9191f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[9], Local_4.f_1660);
	Local_4.f_1708 = CREATE_OBJECTSET_IN_LAYOUT("FordCoverFlagsSet", Local_4, 8, 0);
	*(&Local_4 + 1712[06]) = { 358,9081f, 78,6151f, 1988,845f };
	*(&Local_4 + 1712[06] + 12) = { 0.0f, -129,0809f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "Boat", 358,9081f, 78,6151f, 1988,845f, 0.0f, -129,0809f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1708);
	Local_4.f_1740 = CREATE_OBJECTSET_IN_LAYOUT("FirstBattleShootPosSet", Local_4, 8, 0);
	(*&Local_4 + 1744)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "First_Shoot_1", 367,64f, 76,93506f, 2000,419f, 0.0f, 38,91269f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[0], Local_4.f_1740);
	(*&Local_4 + 1744)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "First_Shoot_2", 373,3473f, 77,17651f, 1994,178f, 0.0f, 49,39155f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[1], Local_4.f_1740);
	Local_4.f_1756 = CREATE_OBJECTSET_IN_LAYOUT("FirstBattleCovPosSet", Local_4, 8, 0);
	(*&Local_4 + 1760)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "First_Cover_1", 366,8344f, 77,34793f, 1994,961f, 0.0f, 47,20131f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1760)[0], Local_4.f_1756);
	(*&Local_4 + 1760)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "First_Cover_2", 365,2261f, 77,64458f, 1997,99f, 0.0f, 38,80924f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1760)[1], Local_4.f_1756);
	(*&Local_4 + 1760)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "First_Cover_3", 377,4592f, 76,31553f, 1999,692f, 0.0f, 137,867f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1760)[2], Local_4.f_1756);
	Local_4.f_1776 = CREATE_OBJECTSET_IN_LAYOUT("WreckPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1780)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints0", 360,9767f, 73,29867f, 1970,138f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[0], Local_4.f_1776);
	(*&Local_4 + 1780)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints1", 352,067f, 73,39433f, 1963,218f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[1], Local_4.f_1776);
	(*&Local_4 + 1780)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints2", 354,4543f, 73,52461f, 1956,098f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[2], Local_4.f_1776);
	(*&Local_4 + 1780)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints3", 338,4532f, 74,6709f, 1947,297f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[3], Local_4.f_1776);
	(*&Local_4 + 1780)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints4", 335,9276f, 74,50193f, 1942,931f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[4], Local_4.f_1776);
	(*&Local_4 + 1780)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints5", 331,4687f, 77,13346f, 1937,273f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[5], Local_4.f_1776);
	(*&Local_4 + 1780)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints6", 328,5948f, 75,16387f, 1930,82f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[6], Local_4.f_1776);
	(*&Local_4 + 1780)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints7", 336,7494f, 75,68338f, 1920,666f, 0.0f, -31,38804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[7], Local_4.f_1776);
	(*&Local_4 + 1780)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints8", 337,2968f, 77,36737f, 1914,578f, 0.0f, 62,3465f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[8], Local_4.f_1776);
	(*&Local_4 + 1780)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints9", 333,6085f, 79,98409f, 1911,666f, 0.0f, 106,4341f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[9], Local_4.f_1776);
	(*&Local_4 + 1780)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints10", 311,5718f, 86,69505f, 1915,661f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[10], Local_4.f_1776);
	(*&Local_4 + 1780)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "PierMovementPoints11", 299,4878f, 89,64005f, 1913,224f, 0.0f, 142,8677f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1780)[11], Local_4.f_1776);
	Local_4.f_1832 = CREATE_OBJECTSET_IN_LAYOUT("WreckShootPosSet", Local_4, 8, 0);
	(*&Local_4 + 1836)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Mid_0", 363,0242f, 74,71596f, 1996,385f, -6,259943f, -129,1588f, 1,016743f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1836)[0], Local_4.f_1832);
	(*&Local_4 + 1836)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Mid_1", 353,6245f, 76,08221f, 1988,754f, -6,259943f, -129,1588f, 1,016743f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1836)[1], Local_4.f_1832);
	Local_4.f_1848 = CREATE_OBJECTSET_IN_LAYOUT("Pier_0_CoverSet", Local_4, 8, 0);
	*(&Local_4 + 1852[06]) = { 351,5586f, 73,63214f, 1954,373f };
	*(&Local_4 + 1852[06] + 12) = { 0.0f, 151,0867f, 0.0f };
	(*&Local_4 + 1976)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_0_Cover_0", 351,5586f, 73,63214f, 1954,373f, 0.0f, 151,0867f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1976)[0], Local_4.f_1848);
	*(&Local_4 + 1852[16]) = { 350,3836f, 73,49984f, 1963,944f };
	*(&Local_4 + 1852[16] + 12) = { 0.0f, 151,0867f, 0.0f };
	(*&Local_4 + 1976)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_0_Cover_1", 350,3836f, 73,49984f, 1963,944f, 0.0f, 151,0867f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1976)[1], Local_4.f_1848);
	*(&Local_4 + 1852[26]) = { 355,9615f, 73,48211f, 1952,021f };
	*(&Local_4 + 1852[26] + 12) = { 0.0f, 151,0867f, 0.0f };
	(*&Local_4 + 1976)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_0_Cover_2", 355,9615f, 73,48211f, 1952,021f, 0.0f, 151,0867f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1976)[2], Local_4.f_1848);
	*(&Local_4 + 1852[36]) = { 346,1752f, 74,21378f, 1949,871f };
	*(&Local_4 + 1852[36] + 12) = { 0.0f, 237,16f, 0.0f };
	(*&Local_4 + 1976)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_0_Cover_3", 346,1752f, 74,21378f, 1949,871f, 0.0f, 237,16f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1976)[3], Local_4.f_1848);
	*(&Local_4 + 1852[46]) = { 336,3139f, 74,59268f, 1949,009f };
	*(&Local_4 + 1852[46] + 12) = { 0.0f, 237,16f, 0.0f };
	(*&Local_4 + 1976)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_0_Cover_4", 336,3139f, 74,59268f, 1949,009f, 0.0f, 237,16f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1976)[4], Local_4.f_1848);
	Local_4.f_2000 = CREATE_OBJECTSET_IN_LAYOUT("Pier_1_CoverSet", Local_4, 8, 0);
	*(&Local_4 + 2004[06]) = { 329,4001f, 73,46249f, 1962,424f };
	*(&Local_4 + 2004[06] + 12) = { 0.0f, 231,0523f, 0.0f };
	(*&Local_4 + 2080)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_1_Cover_0", 329,4001f, 73,46249f, 1962,424f, 0.0f, 231,0523f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[0], Local_4.f_2000);
	*(&Local_4 + 2004[16]) = { 333,2519f, 74,64883f, 1956,18f };
	*(&Local_4 + 2004[16] + 12) = { 0.0f, 237,16f, 0.0f };
	(*&Local_4 + 2080)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_1_Cover_1", 333,2519f, 74,64883f, 1956,18f, 0.0f, 237,16f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[1], Local_4.f_2000);
	*(&Local_4 + 2004[26]) = { 335,0535f, 74,5982f, 1952,298f };
	*(&Local_4 + 2004[26] + 12) = { 0.0f, 242,9946f, 0.0f };
	(*&Local_4 + 2080)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_1_Cover_2", 335,0535f, 74,5982f, 1952,298f, 0.0f, 242,9946f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[2], Local_4.f_2000);
	Local_4.f_2096 = CREATE_OBJECTSET_IN_LAYOUT("Pier_2_CoverSet", Local_4, 8, 0);
	*(&Local_4 + 2100[06]) = { 363,3915f, 73,49775f, 1942,363f };
	*(&Local_4 + 2100[06] + 12) = { 0.0f, 152,1349f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_2_Cover_0", 363,3915f, 73,49775f, 1942,363f, 0.0f, 152,1349f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_2096);
	*(&Local_4 + 2100[16]) = { 359,9022f, 73,49165f, 1943,997f };
	*(&Local_4 + 2100[16] + 12) = { 0.0f, 153,8218f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_2_Cover_1", 359,9022f, 73,49165f, 1943,997f, 0.0f, 153,8218f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_2096);
	Local_4.f_2152 = CREATE_OBJECTSET_IN_LAYOUT("Pier_3_CoverSet", Local_4, 8, 0);
	*(&Local_4 + 2156[06]) = { 336,8723f, 74,60868f, 1946,807f };
	*(&Local_4 + 2156[06] + 12) = { 0.0f, 242,7932f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_3_Cover_0", 336,8723f, 74,60868f, 1946,807f, 0.0f, 242,7932f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_2152);
	*(&Local_4 + 2156[16]) = { 338,4293f, 74,60164f, 1944,171f };
	*(&Local_4 + 2156[16] + 12) = { 0.0f, 242,7932f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "Pier_3_Cover_1", 338,4293f, 74,60164f, 1944,171f, 0.0f, 242,7932f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_2152);
	Local_4.f_2208 = CREATE_OBJECTSET_IN_LAYOUT("FordCovSet", Local_4, 8, 0);
	*(&Local_4 + 2212[06]) = { 346,3132f, 75,12444f, 1976,055f };
	*(&Local_4 + 2212[06] + 12) = { -174,8537f, -219,8595f, -180,5414f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "nFordCov_0", 346,3132f, 75,12444f, 1976,055f, -174,8537f, -219,8595f, -180,5414f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_2208);
	*(&Local_4 + 2212[16]) = { 359,1889f, 73,46447f, 1971,398f };
	*(&Local_4 + 2212[16] + 12) = { -172,6135f, -237,6166f, -177,5972f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "nFordCov_1", 359,1889f, 73,46447f, 1971,398f, -172,6135f, -237,6166f, -177,5972f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_2208);
	*(&Local_4 + 2212[26]) = { 360,5503f, 73,47237f, 1967,333f };
	*(&Local_4 + 2212[26] + 12) = { -175,5306f, -152,0789f, -185,941f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "nFordCov_2", 360,5503f, 73,47237f, 1967,333f, -175,5306f, -152,0789f, -185,941f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_2208);
	*(&Local_4 + 2212[36]) = { 348,9974f, 74,01839f, 1951,432f };
	*(&Local_4 + 2212[36] + 12) = { -173,719f, -241,6295f, -176,429f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "nFordCov_3", 348,9974f, 74,01839f, 1951,432f, -173,719f, -241,6295f, -176,429f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_2208);
	Local_4.f_2312 = CREATE_OBJECTSET_IN_LAYOUT("Drive_BackSet", Local_4, 8, 0);
	(*&Local_4 + 2316)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Slow_Pos", 551,4546f, 99,28046f, 1821,368f, 0.0f, 3,451324f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[0], Local_4.f_2312);
	(*&Local_4 + 2316)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nOn_Foot_0", 489,0941f, 95,20405f, 1845,159f, 0.0f, -84,46474f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[1], Local_4.f_2312);
	(*&Local_4 + 2316)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nOn_Foot_1", 487,2572f, 95,42502f, 1846,701f, 0.0f, -83,9371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[2], Local_4.f_2312);
	(*&Local_4 + 2316)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nOn_Foot_2", 488,7928f, 95,19826f, 1849,304f, 0.0f, -93,72128f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[3], Local_4.f_2312);
	(*&Local_4 + 2316)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nOn_Foot_3", 485,7691f, 95,34159f, 1848,682f, 0.0f, -93,19532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[4], Local_4.f_2312);
	(*&Local_4 + 2316)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "DB_Cover_L_0", 607,9122f, 98,96656f, 1804,79f, 0.0f, -103,1153f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[5], Local_4.f_2312);
	(*&Local_4 + 2316)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "DB_Cover_L_1a", 588,0336f, 100,1575f, 1801,064f, 0.0f, -128,5475f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[6], Local_4.f_2312);
	(*&Local_4 + 2316)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "DB_Cover_L_1b", 584,3115f, 100,0892f, 1804,786f, 0.0f, -118,3171f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[7], Local_4.f_2312);
	(*&Local_4 + 2316)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "DB_Cover_R_0", 609,6806f, 97,63907f, 1820,774f, 0.0f, -93,19532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[8], Local_4.f_2312);
	(*&Local_4 + 2316)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "DB_Cover_R_2", 623,9122f, 99,6832f, 1805,005f, 0.0f, -171,3609f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[9], Local_4.f_2312);
	(*&Local_4 + 2316)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "DB_Ross_Cov_0", 613,9749f, 97,29226f, 1822,804f, 0.0f, -291,4095f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2316)[10], Local_4.f_2312);
	Local_4.f_2364 = CREATE_POINT_IN_LAYOUT(Local_4, "debug_0", 327,6187f, 74,18602f, 1937,095f, 0.0f, -115,7008f, 0.0f);
	Local_4.f_2368 = CREATE_POINT_IN_LAYOUT(Local_4, "debug_1", 326,3043f, 81,63046f, 1911,847f, 0.0f, -270,215f, 0.0f);
	Local_4.f_2372 = CREATE_OBJECTSET_IN_LAYOUT("GoToCarSet", Local_4, 8, 0);
	(*&Local_4 + 2376)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "OutOfStation0", 757,7805f, 78,52522f, 1235,374f, 0.0f, 21,9018f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2376)[0], Local_4.f_2372);
	(*&Local_4 + 2376)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "OutOfStation1", 757,511f, 78,52522f, 1246,237f, 0.0f, 21,9018f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2376)[1], Local_4.f_2372);
	(*&Local_4 + 2376)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "OutOfStation2", 754,0998f, 78,52522f, 1248,99f, 0.0f, 21,9018f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2376)[2], Local_4.f_2372);
	(*&Local_4 + 2376)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "OutOfStation3", 755,9207f, 78,52522f, 1251,2f, 0.0f, 21,9018f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2376)[3], Local_4.f_2372);
	Local_4.f_2396 = CREATE_GRINGO_IN_LAYOUT(Local_4, "gun_giveaway_high_power_pistol", "gun_giveaway_high_power_pistol", 769,4281f, 79,45399f, 1227,72f, 0.0f, -90,53369f, 0.0f);
	Local_4.f_2400 = CREATE_GRINGO_IN_LAYOUT(Local_4, "rand_idle_stand", "rand_idle_stand", 757,6581f, 78,50735f, 1233,298f, 0.0f, 110,6839f, 0.0f);
	Local_4.f_2404 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nross_wait", "rand_idle_stand", 304,0934f, 88,45897f, 1913,705f, 0.0f, -94,77738f, 0.0f);
	Local_4.f_2408 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nastas_sack", "nastas_sack", 356,7869f, 79,18803f, 1985,151f, 0.0f, -129,575f, 0.0f);
	Local_4.f_2412 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Gang_Mid_Left_Rear", 353,8927f, 75,91576f, 1988,918f, 0.0f, -129,7482f, 0.0f, 4);
	Local_4.f_2416 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Gang_Mid_Right", 368,8922f, 74,5469f, 1990,655f, 0.0f, -33,97771f, 0.0f, 1);
	Local_4.f_2420 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Gang_Mid_Right_Rear", 364,0461f, 75,27626f, 1986,572f, 0.0f, -37,77921f, 0.0f, 1);
	Local_4.f_2424 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "ncover_low", 588,1406f, 100,0242f, 1801,142f, 0.0f, -124,4042f, 0.0f, 4);
	Local_4.f_2428 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low1", 607,3815f, 98,9688f, 1805,134f, 0.0f, -89,75309f, 0.0f, 4);
	Local_4.f_2432 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low2", 584,3474f, 99,93148f, 1804,78f, 0.0f, -112,6753f, 0.0f, 4);
	Local_4.f_2436 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low3", 609,2438f, 97,68916f, 1821,275f, 0.0f, -94,10509f, 0.0f, 4);
	Local_4.f_2440 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low4", 614,3157f, 97,48988f, 1822,397f, 0.0f, 72,13945f, 0.0f, 4);
	Local_4.f_2444 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "FordhamCoverUpTo", 370,1209f, 77,02693f, 2001,354f, 0.0f, 137,7516f, 0.0f, 1);
	Local_4.f_2448 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "FordhamMidShipLow", 375,9652f, 72,78875f, 2007,827f, 0.0f, 47,4344f, 0.0f, 4);
	Local_4.f_2452 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low5", 358,9084f, 78,73647f, 1988,86f, 0.0f, -131,8568f, 0.0f, 4);
	Local_4.f_2456 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_low6", 377,4194f, 76,26875f, 1999,757f, 0.0f, -223,194f, 0.0f, 4);
}

vector3 DBÄcùDãD y BÄtJDãwD"mFBÅo¯DâüJD$IâBÆ=DâªªD&¶ÒBÇ-DáÓD(w&BÈìDà£øD)tBÊ~|DßDkD)ÆþBË_DÝÏ×D(öBÏEpDÜfDD'¿BÒºDÛD&4BÖ*DÙÇED$dîBÜTDØ£D#£BÝ©°D×æ°D -ÞBÜ·DÖcDmBÚcïDÕFD BÖñDÓÕ×DJ"BÔÔðDÒ5üD'¼BÓ5öDÐfD×gBÐCDÎê§DeiBÏÀDÍDSrBÏÙ"D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x227DF / 141279
{
	var uVar10750;
	var uVar17536;
	var uVar57342;
	
}

void CïBÀDåÍCó9ÁBÀ÷Då_Cø¶&BÁÃ)Dåâ*Cý¸´BÃ9Dæ,¢DBÂ_SDæ¡fDABÃ®)DæÐDmBÂÂÀDæIsD
·BÂ¥µDå D!BÂ³Dä±pDNÌBÂjDä§gD  BÁtDä¥,Ý:D	ä;oS4_On_Horse_Mid    p   Cè
B¿K¿DåkâCï&CB¿ Då¶3Cô{ðB¿Õ¬DæeD Y¿BÄ¢¾DåÊÙDÙBÄJPDåÑDòUBÄ¶ÏDäê"DÅBÄzñ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x22F43 / 143171
{
	float fVar38142;
	
	StackVal->f_58422 = StackVal;
	StackVal->f_2623 = StackVal;
	(2 - 15154)->f_58275 = StackVal;
	2.0f->f_3065 = StackVal;
	return;
	(StackVal >= StackVal - 14858)->f_58147 = StackVal;
	StackVal->f_3774 = StackVal;
}

void Function_561(int iParam0, int iParam1) //Position: 0x23631 / 144945
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

bool Function_562() //Position: 0x2367A / 145018
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_575(0))
	{
		return 0;
	}
	if (!Function_574("MINI_GAMES_AND_JOBS\\CAR"))
	{
		return 0;
	}
	if (!Function_571())
	{
		return 0;
	}
	if (!Function_407(&bLocal_660))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_727))
	{
		bLocal_727 = Function_563(10, 0, 1, 0, 0, 0, 0, 0, 0);
		Function_231(bLocal_727);
		return 0;
	}
	return 1;
}

bool Function_563(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x236ED / 145133
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
		if (!Function_157(&(Global_29008[Global_30621[3]]), 4))
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
		Function_238(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_570(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_566(StackVal, uParam7);
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
		Function_565(bVar1, 0, 0, 0, 0);
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
		Function_564(bVar1, 0);
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

void Function_564(bool bParam0, bool bParam1) //Position: 0x23BD7 / 146391
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_565(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x23BF7 / 146423
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

bool Function_566(int iParam0, bool bParam1) //Position: 0x23C4B / 146507
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_392(iParam0))
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
						Function_567(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_567(bool bParam0, bool bParam1) //Position: 0x23CCB / 146635
{
	Function_569(bParam0);
	Function_568(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_568(bool bParam0) //Position: 0x23CF1 / 146673
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_569(bool bParam0) //Position: 0x23D15 / 146709
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

bool Function_570(int iParam0, bool bParam1) //Position: 0x23DE4 / 146916
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

bool Function_571() //Position: 0x23E77 / 147063
{
	Function_412(&Local_4 + 4, 1194, 2, 0);
	Function_412(&Local_4 + 4, 641, 2, 0);
	Function_412(&Local_4 + 4, 701, 2, 0);
	Function_412(&Local_4 + 4, 563, 2, 0);
	Function_412(&Local_4 + 4, 476, 2, 0);
	Function_412(&Local_4 + 4, 471, 2, 0);
	Function_412(&Local_4 + 4, 472, 2, 0);
	Function_412(&Local_4 + 4, 470, 2, 0);
	Function_572(&Local_4 + 4, "p_gen_barrel04x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_lantern05x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_crate19x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_crate01x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_barrel01x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_wagonWheel01x", 0, 0);
	Function_572(&Local_4 + 4, "p_gen_wagonExplode01ax", 0, 0);
	Function_572(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/gun_giveaway_high_power_pistol", 1, 0);
	Function_572(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_572(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/nastas_sack", 1, 0);
	if (Function_407(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_572(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x240E1 / 147681
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_573(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_410(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_573(var uParam0, int iParam1, int iParam2) //Position: 0x24119 / 147737
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_410(uParam0[iVar03], 4);
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

bool Function_574(bool bParam0) //Position: 0x241DD / 147933
{
	if (REQUEST_MISSION_AUDIO_BANK(bParam0))
	{
		return 1;
	}
	return 0;
}

bool Function_575(bool bParam0) //Position: 0x241EE / 147950
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

void Function_576() //Position: 0x2421C / 147996
{
	ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
	ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	return;
}

void Function_577() //Position: 0x242D1 / 148177
{
	Function_572(&bLocal_660, "knl_hostage", 5, 0);
	Function_572(&bLocal_660, "custom/knl_hostage", 8, 0);
	Function_572(&bLocal_660, "gent_hog", 5, 0);
	Function_572(&bLocal_660, "custom/vehicle_duck", 8, 0);
	Function_572(&bLocal_660, "custom/wave", 8, 0);
	Function_572(&bLocal_660, "FBI05_injured_guy_in_car", 5, 0);
	Function_572(&bLocal_660, "custom/FBI05_injured_guy_in_car", 8, 0);
	Function_412(&bLocal_660, 1194, 2, 0);
	Function_572(&bLocal_660, "FBI05_Nastas_Backseat", 5, 0);
	Function_572(&bLocal_660, "custom/FBI05_Nastas_Backseat", 8, 0);
	Function_572(&bLocal_660, "FBI05_gaurd_companion", 5, 0);
	Function_572(&bLocal_660, "custom/FBI05_gaurd_companion", 8, 0);
	Function_572(&bLocal_660, "FBI05", 10, 0);
	Function_572(&bLocal_660, "fix_car", 1, 0);
	Function_572(&bLocal_660, "gent_car", 5, 0);
	return;
}

void Function_578(int iParam0, bool bParam1) //Position: 0x24482 / 148610
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_584(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_300(iParam0))
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
	if (!Function_300(iParam0))
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
	Function_260();
	Function_291();
	Function_249("");
	Function_583(0);
	Function_582();
	Function_194();
	Function_193();
	ENABLE_JOURNAL_REPLAY(0);
	Function_581();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_325(0, 0x40400000);
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
	Function_580(13);
	Function_580(14);
	Function_580(25);
	Function_580(24);
	Function_580(12);
	Function_580(27);
	Function_580(26);
	Function_580(15);
	Function_579();
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

void Function_579() //Position: 0x248A6 / 149670
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

void Function_580(int iParam0) //Position: 0x2491A / 149786
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_581() //Position: 0x2493A / 149818
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

void Function_582() //Position: 0x24977 / 149879
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_583(int iParam0) //Position: 0x2498B / 149899
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

void Function_584(int iParam0, int iParam1) //Position: 0x249C0 / 149952
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
			Function_585(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_585(int iParam0) //Position: 0x24A42 / 150082
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

void Function_586() //Position: 0x24A90 / 150160
{
	return;
}

bool Function_587() //Position: 0x24A96 / 150166
{
	struct<5> Var0;
	
	if (IS_ACTOR_DEAD(bLocal_730))
	{
		return 1;
	}
	if (iLocal_794)
	{
		return 0;
	}
	GET_OBJECT_AXIS(bLocal_730, &Var0, 1);
	if (StackVal < 0,2f)
	{
		fLocal_779 = -1.0f;
		return 0;
	}
	if (fLocal_779 > 0.0f)
	{
		fLocal_779 = GET_CURRENT_GAME_TIME();
	}
	return (GET_CURRENT_GAME_TIME() - fLocal_779) <= 1.0f;
}

int Function_588(bool bParam0, int iParam1) //Position: 0x24AE3 / 150243
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_589(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(bVar3) != bParam0 && Global_26998[GET_CRIME_TYPE(bVar3)18].f_24 <= iParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

void Function_589(bool bParam0, bool bParam1) //Position: 0x24B66 / 150374
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_590(int iParam0) //Position: 0x24B95 / 150421
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_591(int iParam0) //Position: 0x24BB3 / 150451
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
			Function_592(iParam0, 1);
			return 1;
		}
	}
	Function_592(iParam0, 0);
	return 0;
}

void Function_592(int iParam0, bool bParam1) //Position: 0x24C3A / 150586
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

bool Function_593(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x24C5E / 150622
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
		Function_592(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_612(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_611(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_611(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_597(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_151(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_592(iParam2, 0);
														return 0;
													}
													if (Function_151(bVar17, 2))
													{
														Function_596(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_595(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_151(bVar17, 4))
													{
														Function_596(&bVar17);
														strcpy(&Var18, "", 64);
														Function_594(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_249(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_595(StackVal, iParam2, bVar17);
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
	Function_592(iParam2, 0);
	return 0;
}

void Function_594(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x24FF7 / 151543
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

void Function_595(var uParam0, int iParam1, bool bParam2) //Position: 0x250E2 / 151778
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

void Function_596(bool bParam0) //Position: 0x25158 / 151896
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_597(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2517A / 151930
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
			return Function_608(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_601(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_608(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_598(iParam0, bVar2);
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
						bVar2 = Function_608(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_598(iParam0, bVar2);
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

var Function_598(int iParam0, bool bParam1) //Position: 0x252C4 / 152260
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_151(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_600(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_599(16);
			}
		}
	}
	else if (Function_151(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_600(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_599(256);
			}
		}
	}
	return bParam1;
}

bool Function_599(int iParam0) //Position: 0x253F7 / 152567
{
	return 2 | iParam0;
}

int Function_600(int iParam0) //Position: 0x25401 / 152577
{
	return 4 | iParam0;
}

int Function_601(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2540B / 152587
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
				iParam3 = Function_607(iParam0, iParam1, bParam4);
				if (Function_151(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_599(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_602(iParam0, iParam1, 0, bParam4);
				if (Function_151(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_599(16);
		}
	}
	return 0;
}

int Function_602(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x254BD / 152765
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_606(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_605(iVar0, 3, 1, bParam3))
			{
				if (!Function_611(iParam0, 8, 1))
				{
					return Function_604(64, 1024, bParam2);
				}
			}
			return Function_603(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_605(iVar0, 2, 1, bParam3))
			{
				if (!Function_611(iParam0, 32, 1))
				{
					return Function_604(64, 1024, bParam2);
				}
			}
			return Function_603(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_605(iVar0, 1, 1, bParam3))
			{
				if (!Function_611(iParam0, 64, 1))
				{
					return Function_604(64, 1024, bParam2);
				}
			}
			return Function_603(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_605(iVar0, 3, 1, bParam3))
			{
				if (!Function_611(iParam0, 128, 1))
				{
					return Function_604(64, 1024, bParam2);
				}
			}
			return Function_603(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_605(iVar0, 1, 1, bParam3))
			{
				if (!Function_611(iParam0, 1024, 1))
				{
					return Function_604(64, 1024, bParam2);
				}
			}
			return Function_603(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_605(iVar0, 1, 1, bParam3))
			{
				if (!Function_611(iParam0, 1024, 1))
				{
					return Function_604(64, 1024, bParam2);
				}
			}
			return Function_603(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_603(int iParam0, int iParam1, bool bParam2) //Position: 0x25677 / 153207
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_604(int iParam0, int iParam1, bool bParam2) //Position: 0x2568C / 153228
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_605(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x256A1 / 153249
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_606(int iParam0) //Position: 0x256BE / 153278
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

int Function_607(var uParam0, int iParam1, bool bParam2) //Position: 0x2572D / 153389
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_606(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_605(iVar0, 3, 1, bParam2))
			{
				if (!Function_611(uParam0, 8, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000009:
			if (Function_605(iVar0, 3, 1, bParam2))
			{
				if (!Function_611(uParam0, 8, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x0000006E:
			if (Function_605(iVar0, 2, 1, bParam2))
			{
				if (!Function_611(uParam0, 16, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x0000005B:
			if (Function_605(iVar0, 2, 1, bParam2))
			{
				if (!Function_611(uParam0, 32, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000031:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(uParam0, 64, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000007:
			if (Function_605(iVar0, 3, 1, bParam2))
			{
				if (!Function_611(uParam0, 128, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000008:
			if (Function_605(iVar0, 2, 1, bParam2))
			{
				if (!Function_611(uParam0, 256, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000014:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(uParam0, 512, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000018:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(uParam0, 512, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000057:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(uParam0, 1024, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000058:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(uParam0, 1024, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_608(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x25948 / 153928
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
						return Function_607(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_611(iParam0, 2, 1))
					{
						return Function_600(8);
					}
					return Function_599(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_611(iParam0, 4, 1))
					{
						return Function_600(16);
					}
					return Function_599(16);
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
							return Function_602(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_611(iParam0, 2, 1))
						{
							return Function_600(128);
						}
						return Function_599(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_611(iParam0, 4, 1))
						{
							return Function_600(256);
						}
						return Function_599(256);
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
						return Function_602(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_611(iParam0, 2, 1))
					{
						return Function_600(8);
					}
					return Function_599(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_611(iParam0, 4, 1))
					{
						return Function_600(16);
					}
					return Function_599(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_610(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_611(iParam0, 2, 1))
					{
						return Function_600(8);
					}
					return Function_599(8);
				}
				if (!Function_611(iParam0, 4, 1))
				{
					return Function_600(16);
				}
				return Function_599(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_602(iParam0, uParam1, 1, bParam5);
							if (Function_151(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_609(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_599(128);
							}
							if (!Function_611(iParam0, 2, 1))
							{
								return Function_600(8);
							}
							return Function_599(8);
						}
						if (iParam4 == 2)
						{
							if (Function_609(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_599(256);
							}
							if (!Function_611(iParam0, 4, 1))
							{
								return Function_600(16);
							}
							return Function_599(16);
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

bool Function_609(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x25C07 / 154631
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

int Function_610(int iParam0, var uParam1, bool bParam2) //Position: 0x25CC0 / 154816
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_606(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_605(iVar0, 2, 1, bParam2))
			{
				if (!Function_611(iParam0, 16, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x0000005B:
			if (Function_605(iVar0, 2, 1, bParam2))
			{
				if (!Function_611(iParam0, 32, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000057:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(iParam0, 1024, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		case 0x00000058:
			if (Function_605(iVar0, 1, 1, bParam2))
			{
				if (!Function_611(iParam0, 1024, 1))
				{
					return Function_600(64);
				}
			}
			return Function_599(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_611(int iParam0, bool bParam1, bool bParam2) //Position: 0x25DD4 / 155092
{
	if (bParam2)
	{
		if (!Function_151(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_151(iParam0->f_40, bParam1);
}

int Function_612(int iParam0) //Position: 0x25DFC / 155132
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

bool Function_613() //Position: 0x25E2D / 155181
{
	switch (bLocal_724)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

bool Function_614(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25E6B / 155243
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

void Function_615() //Position: 0x25E92 / 155282
{
	if (!iLocal_794 && !iLocal_984)
	{
		if (IS_ACTOR_VALID(bLocal_730))
		{
			if (Function_614(Global_34573, bLocal_730, 2) || Function_614(Global_34573, bLocal_730, 3))
			{
				if (!iLocal_959)
				{
					iLocal_959 = 1;
				}
				if (iLocal_927)
				{
					if (iLocal_947 == 3)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_JonGetsBakInCar", "FBI05_JonGetsBakInCar", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_JonGetsBakCar", "FBI05_JonGetsBakCar", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					}
					iLocal_927 = 0;
					iLocal_974 = 0;
				}
			}
			else if ((iLocal_723 != 0 || iLocal_723 != 3) || (iLocal_723 != 4 && bLocal_724 <= 9))
			{
				if (!Function_297(&iLocal_757))
				{
					Function_423(&iLocal_757);
				}
				else if (iLocal_959)
				{
					if (!iLocal_927)
					{
						if (iLocal_947 == 3)
						{
							switch (RAND_INT_RANGE(false, true))
							{
								case 0x00000000:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_JumpsOutCarBlakwtr", "FBI05_JumpsOutCarBlakwtr", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									iLocal_927 = 1;
									Function_241(&iLocal_757);
									break;
								
								case 0x00000001:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JumpsOutCarBlakwtr2", "FBI05_JumpsOutCarBlakwtr2", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									iLocal_927 = 1;
									Function_241(&iLocal_757);
									break;
							}
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_JumpsOutCar", "FBI05_JumpsOutCar", 1, 1, 0, 2, 1, 0, 0, 1000, 0, 0);
							iLocal_927 = 1;
							Function_241(&iLocal_757);
						}
					}
					else if (!iLocal_974)
					{
						if (Function_295(&iLocal_757) <= 10.0f)
						{
							if (Function_348(Global_34573, bLocal_730, 25.0f))
							{
								if (iLocal_947 == 3)
								{
									switch (RAND_INT_RANGE(false, true))
									{
										case 0x00000000:
											SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_WaitJonGetInCar2", "FBI05_WaitJonGetInCar2", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
											break;
										
										case 0x00000001:
											SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_GetBakInCarFoo", "FBI05_GetBakInCarFoo", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
											break;
									}
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_WaitGetBakOnCar", "FBI05_WaitGetBakOnCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
							}
							else if (iLocal_947 == 3)
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_WalksAwayFromCar", "FBI05_WalksAwayFromCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
							}
							else
							{
								switch (RAND_INT_RANGE(false, true))
								{
									case 0x00000000:
										SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_RunsAwayNoCar", "FBI05_RunsAwayNoCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
										break;
									
									case 0x00000001:
										SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_WalksAwayInsteadCar", "FBI05_WalksAwayInsteadCar", 1, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
										break;
									}
							}
							iLocal_974 = 1;
						}
					}
					else if (Function_295(&iLocal_757) <= 15.0f)
					{
						Function_241(&iLocal_757);
						iLocal_974 = 0;
					}
				}
			}
		}
	}
	return;
}

void Function_616() //Position: 0x262EC / 156396
{
	if (IS_ACTOR_VALID(bLocal_730))
	{
		if (IS_ACTOR_VALID(bLocal_728))
		{
			if (Function_614(bLocal_728, bLocal_730, 0))
			{
				if (!iLocal_961[0])
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_728, 2);
					AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_728, 0);
					iLocal_651 = 1;
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_728, false);
					iLocal_961[0] = 1;
				}
			}
			else if (iLocal_961[0])
			{
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_728, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(bLocal_728, 1);
				iLocal_651 = 0;
				iLocal_961[0] = 0;
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_730))
	{
		if (IS_ACTOR_VALID(bLocal_727))
		{
			if (Function_614(bLocal_727, bLocal_730, 1))
			{
				if (!iLocal_961[1])
				{
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_727, false);
					iLocal_961[1] = 1;
				}
			}
			else if (iLocal_961[1])
			{
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_727, true);
				iLocal_961[1] = 0;
			}
		}
	}
	return;
}

void Function_617() //Position: 0x263B1 / 156593
{
	if (IS_ACTOR_VALID(bLocal_730))
	{
		if (IS_ACTOR_VALID(bLocal_728))
		{
			if (IS_ACTOR_ALIVE(bLocal_728))
			{
				if (Function_614(bLocal_728, bLocal_730, 0))
				{
					if (!iLocal_943)
					{
						MEMORY_ALLOW_SHOOTING(bLocal_728, false);
						iLocal_943 = 1;
					}
				}
				else if (iLocal_943)
				{
					MEMORY_ALLOW_SHOOTING(bLocal_728, true);
					iLocal_943 = 0;
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_727))
		{
			if (IS_ACTOR_ALIVE(bLocal_727))
			{
				if (Function_614(bLocal_727, bLocal_730, 1))
				{
					if (!iLocal_944)
					{
						MEMORY_ALLOW_SHOOTING(bLocal_727, false);
						iLocal_944 = 1;
					}
				}
				else if (iLocal_944)
				{
					MEMORY_ALLOW_SHOOTING(bLocal_727, true);
					iLocal_944 = 0;
				}
			}
		}
	}
	return;
}

void Function_618() //Position: 0x2644A / 156746
{
	bool bVar0;
	
	Function_622();
	bLocal_966 = Function_620(&uLocal_967, &uLocal_778, 0, 7.0f, iLocal_792);
	if (IS_ACTOR_VALID(bLocal_966))
	{
		if (!IS_ACTOR_ANIMAL(bLocal_966))
		{
			if (bLocal_966 == bLocal_727)
			{
				if (MEMORY_GET_IS_VISIBLE(bLocal_727, Global_34573))
				{
					if (iLocal_792)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_GunOnRossCombat", "FBI05_GunOnRossCombat", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						bVar0 = RAND_INT_RANGE(false, true);
						switch (bVar0)
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_GunOnRossOutside", "FBI05_GunOnRossOutside", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_GunOnRossWrek", "FBI05_GunOnRossWrek", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							}
						}
				}
			}
			else if (bLocal_966 == bLocal_728)
			{
				if (MEMORY_GET_IS_VISIBLE(bLocal_728, Global_34573))
				{
					if (iLocal_723 != 3 && bLocal_724 > 8)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_GunOnFordCombat", "FBI05_GunOnFordCombat", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
					else if (!iLocal_792)
					{
						switch (RAND_INT_RANGE(false, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_GunOnFordWrek", "FBI05_GunOnFordWrek", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_GunOnFordOutside", "FBI05_GunOnFordOutside", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
						}
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonTargetsFordham", "FBI05_JonTargetsFordham", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
				}
			}
			else if (!GET_FACTIONS_STATUS(GET_ACTOR_FACTION(Global_34573), GET_ACTOR_FACTION(bLocal_966)) != 4)
			{
				if (MEMORY_GET_IS_VISIBLE(bLocal_728, bLocal_966) || MEMORY_GET_IS_VISIBLE(bLocal_727, bLocal_966))
				{
					switch (RAND_INT_RANGE(false, 2))
					{
						case 0x00000000:
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_GunOnAmbWrek", "FBI05_GunOnAmbWrek", 0, 1, 1, 1, 1, 0, 0, 1000, 0, 0);
							break;
						
						case 0x00000001:
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_GunOnAmbChar", "FBI05_GunOnAmbChar", 0, 1, 1, 1, 1, 0, 0, 1000, 0, 0);
							break;
						
						case 0x00000002:
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_GunOnAmbChar2", "FBI05_GunOnAmbChar2", 0, 1, 1, 1, 1, 0, 0, 1000, 0, 0);
							break;
						}
					}
				}
			}
	}
	if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
	{
		if (!iLocal_809)
		{
			if (!IS_ACTOR_ANIMAL(GET_LAST_ATTACK_TARGET(Global_34573)))
			{
				if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_727)
				{
					if (iLocal_792)
					{
						if (Function_619(bLocal_727))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_AssaultsRossCombat", "FBI05_AssaultsRossCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsRossCombat", "FBI05_ShootsRossCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (Function_619(bLocal_727))
					{
						switch (RAND_INT_RANGE(false, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsRossOutsideC", "FBI05_ShootsRossOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsRossWrek", "FBI05_ShootsRossWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
						}
					}
					else
					{
						switch (RAND_INT_RANGE(false, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_AssaultsRossOutsideC", "FBI05_AssaultsRossOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								if (Function_348(Global_34573, bLocal_728, 25.0f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsRossWrek", "FBI05_ShootsRossWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_AssaultsRossWrek", "FBI05_AssaultsRossWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								break;
							}
					}
					iLocal_809 = 1;
					CLEAR_LAST_ATTACK(Global_34573);
				}
				else if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_728)
				{
					if (iLocal_792)
					{
						if (Function_619(bLocal_728))
						{
							switch (RAND_INT_RANGE(false, true))
							{
								case 0x00000000:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_AssaultsFordCombat", "FBI05_AssaultsFordCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								
								case 0x00000001:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonAssaultsFord", "FBI05_JonAssaultsFord", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
							}
						}
						else
						{
							switch (RAND_INT_RANGE(false, true))
							{
								case 0x00000000:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsFordCombat", "FBI05_ShootsFordCombat", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								
								case 0x00000001:
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonShootsFord", "FBI05_JonShootsFord", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								}
						}
					}
					else if (Function_619(bLocal_728))
					{
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_AssaultsFordOutsideC", "FBI05_AssaultsFordOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								break;
							
							case 0x00000001:
								if (Function_348(Global_34573, bLocal_727, 25.0f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_AssaultsFordWrek", "FBI05_AssaultsFordWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_AssaultsFordOutsideC", "FBI05_AssaultsFordOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
								}
								break;
						}
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsFordWrek", "FBI05_ShootsFordWrek", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
					}
					iLocal_809 = 1;
					CLEAR_LAST_ATTACK(Global_34573);
				}
				else if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_729)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsFordOutsideC", "FBI05_ShootsFordOutsideC", 1, 1, 0, 2, 0, 0, 0, 1000, 0, 0);
					iLocal_809 = 1;
					CLEAR_LAST_ATTACK(Global_34573);
				}
				else if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_730)
				{
					if (Function_297(&iLocal_774))
					{
						Function_241(&iLocal_774);
					}
					else
					{
						Function_423(&iLocal_774);
					}
					CLEAR_LAST_ATTACK(Global_34573);
					iLocal_777++;
					if (!iLocal_773)
					{
						iLocal_773 = 1;
						switch (RAND_INT_RANGE(false, true))
						{
							case 0x00000000:
								if (iLocal_991 <= 6)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsCarWrek", "FBI05_ShootsCarWrek", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsCar", "FBI05_ShootsCar", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								break;
							
							case 0x00000001:
								if (iLocal_991 <= 6)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsCarWrek2", "FBI05_ShootsCarWrek2", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								else
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsCar2", "FBI05_ShootsCar2", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
								}
								break;
							}
					}
					if (iLocal_777 > 3)
					{
						bLocal_790 = true;
						Function_249("Car_Attacked");
						iLocal_809 = 1;
					}
				}
				else if (!GET_FACTIONS_STATUS(GET_ACTOR_FACTION(Global_34573), GET_ACTOR_FACTION(bLocal_966)) != 4)
				{
					if (iLocal_991 <= 6)
					{
						CLEAR_LAST_ATTACK(Global_34573);
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsAmbWrek", "FBI05_ShootsAmbWrek", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
						iLocal_809 = 1;
					}
					else
					{
						if (Function_619(GET_LAST_ATTACK_TARGET(Global_34573)))
						{
							CLEAR_LAST_ATTACK(Global_34573);
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_AssaultsAmbWrek", "FBI05_AssaultsAmbWrek", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
						}
						else
						{
							switch (RAND_INT_RANGE(false, true))
							{
								case 0x00000000:
									CLEAR_LAST_ATTACK(Global_34573);
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsAmbChar", "FBI05_ShootsAmbChar", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								
								case 0x00000001:
									CLEAR_LAST_ATTACK(Global_34573);
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsAmbChar2", "FBI05_ShootsAmbChar2", 1, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
									break;
								}
						}
						iLocal_809 = 1;
					}
				}
			}
		}
		if (Function_297(&iLocal_774))
		{
			if (Function_295(&iLocal_774) <= 10.0f)
			{
				CLEAR_LAST_ATTACK(Global_34573);
				Function_241(&iLocal_774);
				iLocal_773 = 0;
			}
		}
	}
	else
	{
		if (GET_LAST_ATTACK_TIME(Global_34573) == -1.0f)
		{
			if (!iLocal_926)
			{
				if (Function_297(&iLocal_763))
				{
					if (iLocal_991 > 6 && iLocal_991 == 3)
					{
						if (Function_348(Global_34573, bLocal_727, 25.0f) && iLocal_723 == 1)
						{
						}
						else if (Function_348(Global_34573, bLocal_728, 35.0f) && iLocal_723 != 1)
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_JonShootsWalkin", "FBI05_JonShootsWalkin", 0, 0, 1, 2, 0, 0, 0, 1000, 0, 0);
							iLocal_926 = 1;
						}
					}
					else if (iLocal_991 != 3)
					{
						switch (RAND_INT_RANGE(false, true))
						{
							case 0x00000000:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_727, "FBI05_ShootsGunRand", "FBI05_ShootsGunRand", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_926 = 1;
								break;
							
							case 0x00000001:
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_728, "FBI05_ShootsGunRand2", "FBI05_ShootsGunRand2", 0, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
								iLocal_926 = 1;
								break;
							}
					}
				}
				else
				{
					Function_423(&iLocal_763);
				}
			}
		}
		if (Function_297(&iLocal_763))
		{
			if (Function_295(&iLocal_763) <= 10.0f)
			{
				CLEAR_LAST_ATTACK(Global_34573);
				Function_241(&iLocal_763);
				iLocal_926 = 0;
			}
		}
	}
	return;
}

bool Function_619(bool bParam0) //Position: 0x27243 / 160323
{
	if (GET_LAST_HIT_WEAPON(bParam0) != 22 || GET_LAST_HIT_WEAPON(bParam0) != 4294967295)
	{
		return 1;
	}
	return 0;
}

var Function_620(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x2725F / 160351
{
	bool bVar0;
	
	if (Function_621(GET_WEAPON_IN_HAND(Global_34573)))
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
							if (Function_348(*uParam0, Global_34573, 50.0f))
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

bool Function_621(bool bParam0) //Position: 0x27327 / 160551
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

void Function_622() //Position: 0x2736D / 160621
{
	if (Function_297(&iLocal_774))
	{
		if (Function_295(&iLocal_774) <= 20.0f)
		{
			if (iLocal_777 > 1)
			{
				iLocal_777 = 0;
			}
		}
	}
	return;
}

void Function_623(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x27396 / 160662
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

