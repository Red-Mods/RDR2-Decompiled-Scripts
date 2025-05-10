//Decompiled with MagicRDR v1.0
//Function Count : 350
//Statics Count : 719
//Natives Count : 389
//Parameters Count : 33

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	float fLocal_16 = 0.0f;
	float fLocal_17 = 0.0f;
	float fLocal_18 = 0.0f;
	float fLocal_19 = 0.0f;
	float fLocal_20 = 0.0f;
	float fLocal_21 = 0.0f;
	struct<2> Local_22 = { 0, 0 } ;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	var uLocal_30 = 1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	float fLocal_34 = 0.0f;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<33> Local_37 = { 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_70 = false;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<2421> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_11 = 1000;
	iLocal_33 = 7;
	fLocal_34 = 0.2f;
	iLocal_35 = 0;
	iLocal_71 = 0;
	Local_37 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_343();
	while (Function_221())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_37 };
		Function_197();
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x47 / 71
{
	int iVar0;
	
	Function_195(&Local_80);
	if (Global_30616 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
	{
		Function_187(&Global_6614, &Global_7657, 11, 0);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
	{
		Function_187(&Global_6402, &Global_7343, 14, 0);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_187(&Global_6815, &Global_7954, 11, 0);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BlackWater_layout"))
	{
		Function_187(&Global_7035, &Global_8279, 34, 0);
	}
	SET_ANIMATION_OVERRIDE_SCALE(Local_80, 1.0f);
	if (Function_186(256))
	{
		Function_185(4, 1);
	}
	Function_195(&Local_80);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_37 + 8)[iVar0]))
		{
			DEREFERENCE_ACTOR((*&Local_37 + 8)[iVar0]);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_37 + 8)[iVar0]);
		}
		iVar0++;
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_12, "BlackJack_StayOutvol"));
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_12, "BlackJack_StayOutvol"));
	SET_DRAW_ACTOR(Local_80, 1);
	SET_DRAW_OBJECT(bLocal_70, 1);
	UI_EXIT("Scores");
	UI_EXIT("nBlackJack");
	UI_EXIT("BlackJackLabel");
	UI_EXIT("BetPanel");
	UI_EXIT("BJ_Help");
	Function_183();
	SET_HUD_MAP_DRAW_ENABLED(1);
	ENABLE_PIP(0, 0, 0);
	Function_179();
	Function_178(1);
	ACTOR_DISMOUNT_NOW(GET_PLAYER_ACTOR(0));
	Function_175();
	RELEASE_LAYOUT_REF(bLocal_12);
	if (iLocal_2)
	{
		Function_34(Local_37, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_30(Local_37);
		if (!Function_29(Global_76846, 512))
		{
			Function_22(Function_28(), 512, 1, 0);
		}
	}
	else
	{
		Function_2(Local_37);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1);
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x277 / 631
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x298 / 664
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2B3 / 691
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2D4 / 724
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x2EA / 746
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

void Function_7(int iParam0) //Position: 0x386 / 902
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3A7 / 935
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

void Function_9() //Position: 0x3ED / 1005
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x406 / 1030
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, int iParam1) //Position: 0x459 / 1113
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x57D / 1405
{
	char* cVar0[16];
	
	if (!Function_13())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_13() //Position: 0x5B7 / 1463
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x5D2 / 1490
{
	return (bParam0 && iParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x5DF / 1503
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x5FF / 1535
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x616 / 1558
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_18() //Position: 0x631 / 1585
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
			Function_19(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x878 / 2168
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8A1 / 2209
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x8C5 / 2245
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8DA / 2266
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_24(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_23(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_23(char* cParam0, int iParam1) //Position: 0x946 / 2374
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

bool Function_24(bool bParam0, var uParam1, int iParam2) //Position: 0x97D / 2429
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
		if (Function_26(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_25(uVar0))
		{
			case 0x00000002:
				if (!Function_29(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_25(char* cParam0) //Position: 0x9F5 / 2549
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

int Function_26(int iParam0) //Position: 0xA96 / 2710
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_27(&iVar1, 2147483648);
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

void Function_27(int iParam0, int iParam1) //Position: 0xAD3 / 2771
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_28() //Position: 0xAE6 / 2790
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_29(var uParam0, int iParam1) //Position: 0xAFB / 2811
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_30(int iParam0) //Position: 0xB0E / 2830
{
	Function_31(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_31(int iParam0) //Position: 0xB2C / 2860
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_32(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_32(int iParam0) //Position: 0xBD2 / 3026
{
	char* cVar0[16];
	
	if (!Function_13())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_33(char* cParam0) //Position: 0xC11 / 3089
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

void Function_34(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xE67 / 3687
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_170(&(Global_3422[iVar240]));
		Function_169(4194304);
		if (bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_115(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_40(iParam0, bParam1, uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_39(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
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
	Function_35();
}

void Function_35() //Position: 0xF54 / 3924
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_36(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_36(int iParam0, bool bParam1) //Position: 0xF84 / 3972
{
	int iVar0;
	
	iVar0 = Function_37(iParam0);
	if (!Function_16(iVar0))
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

int Function_37(int iParam0) //Position: 0xFC1 / 4033
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_38(int iParam0) //Position: 0xFDB / 4059
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_39(int iParam0, bool bParam1) //Position: 0xFF1 / 4081
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
							Function_22(Global_34573, 0x1000000, 3, 0);
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
							Function_22(Global_34573, 0x1000000, 3, 0);
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
							Function_22(Global_34573, 0x1000000, 3, 0);
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
							Function_22(Global_34573, 0x1000000, 3, 0);
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
							Function_22(Global_34573, 0x1000000, 3, 0);
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
							Function_22(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_39(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_39(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_39(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_39(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_39(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_39(57, 0);
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

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12E8 / 4840
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_32(Global_6269) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_85(iParam0);
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
						switch (Function_15(iParam0))
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
			Function_41(iParam0, &Var14);
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

void Function_41(int iParam0, int iParam1) //Position: 0x153C / 5436
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1576 / 5494
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

bool Function_43() //Position: 0x15B8 / 5560
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_44(bool bParam0) //Position: 0x15C1 / 5569
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_74();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_45();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_27(&Global_63095, 1);
		Function_27(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_45() //Position: 0x1612 / 5650
{
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_52(0);
	Function_52(0);
	if (!Function_43())
	{
		Function_50();
		Function_49();
		Function_48();
		Function_47();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_46();
	return;
}

void Function_46() //Position: 0x1664 / 5732
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

void Function_47() //Position: 0x176A / 5994
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

void Function_48() //Position: 0x179D / 6045
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_49() //Position: 0x192B / 6443
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_50() //Position: 0x1ADF / 6879
{
	Function_51(&Global_28260, 1, 0);
	return;
}

void Function_51(int iParam0, bool bParam1, int iParam2) //Position: 0x1AED / 6893
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_28();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

struct<8> Function_52(int iParam0) //Position: 0x1CDE / 7390
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_68((50 + iVar4)) + Function_68((183 + iVar4))) + Function_68((90 + iVar4)));
				}
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
	Function_53(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D84 / 7556
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
		Function_67(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_66(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x201F / 8223
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_65(390))), 32);
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
					bVar19 = (Function_64(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_64(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_62(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_59(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_56(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_55(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_55() //Position: 0x264C / 9804
{
	int iVar0;
	
	return iVar0;
}

var Function_56(int iParam0) //Position: 0x2654 / 9812
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2665 / 9829
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_58(char* cParam0, bool bParam1) //Position: 0x275A / 10074
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2773 / 10099
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_61(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_60(Function_61(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x27D8 / 10200
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_61(int iParam0, int iParam1) //Position: 0x27EA / 10218
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_62(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x27FC / 10236
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
	if (((Function_63(iParam0) != 19 || Function_63(iParam0) != 17) || Function_63(iParam0) != 10) || Function_63(iParam0) != 9)
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

int Function_63(int iParam0) //Position: 0x292C / 10540
{
	return Global_35278[iParam020].f_48;
}

float Function_64(int iParam0) //Position: 0x293B / 10555
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_65(int iParam0) //Position: 0x2974 / 10612
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_66(int iParam0) //Position: 0x29B1 / 10673
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

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B4B / 11083
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

int Function_68(int iParam0) //Position: 0x2D8F / 11663
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_69() //Position: 0x2DD0 / 11728
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
		iVar2 = ((Function_68((50 + iVar3) + 15) + Function_68((183 + iVar3) + 15)) + Function_68((90 + iVar3) + 15));
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
	Function_53(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2E59 / 11865
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
			iVar2 = ((Function_68((50 + iVar3) + 8) + Function_68((183 + iVar3) + 8)) + Function_68((90 + iVar3) + 8));
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
	Function_53(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_71() //Position: 0x2EF0 / 12016
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
		iVar2 = ((Function_68((50 + iVar3)) + Function_68((183 + iVar3))) + Function_68((90 + iVar3)));
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
	Function_53(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_72() //Position: 0x2F6F / 12143
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_73(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_53(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_73(int iParam0, bool bParam1, int iParam2) //Position: 0x2FA8 / 12200
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
	Function_67(iParam0, bParam1, 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_54(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_74() //Position: 0x31B2 / 12722
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_82(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_82(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_76(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_76(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_75(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_75(vector3 vParam0) //Position: 0x326D / 12909
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_76(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3285 / 12933
{
	int iVar0;
	
	iVar0 = Function_80(uParam2, uParam3);
	if (Function_79(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_78(&Global_63095, 1);
			Function_27(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_78(&Global_63095, 2);
			Function_27(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_78(&Global_63095, 2);
		Function_27(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_77();
	return StackVal, StackVal, Function_77();
}

vector3 Function_77() //Position: 0x336C / 13164
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_78(int iParam0, int iParam1) //Position: 0x3375 / 13173
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_79(int iParam0) //Position: 0x3384 / 13188
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x339A / 13210
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
				fVar2 = Function_81(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_81(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_79(bVar0) && !bParam1)
	{
		bVar0 = Function_80(bParam0, 1);
	}
	return bVar0;
}

float Function_81(vector3 vParam0, vector3 vParam3) //Position: 0x3461 / 13409
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_82(var uParam0, int iParam1) //Position: 0x347E / 13438
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_84(Global_34573, &vVar4);
	if (!Function_83(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_78(&Global_63095, 2);
	Function_27(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_75(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_83(int iParam0) //Position: 0x3CA3 / 15523
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_14(uVar0, 0x1000000) || Function_14(uVar0, 0x2000000)) || Function_14(uVar0, 0x4000000)) || !Function_14(uVar0, 0x10000000));
}

void Function_84(bool bParam0, int iParam1) //Position: 0x3CDE / 15582
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_85(int iParam0) //Position: 0x3CEB / 15595
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
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
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_88(iParam0) == 1)
					{
						iVar0 = Function_87(iParam0);
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
			if (Function_87(iParam0) == 0)
			{
				if (Function_88(iParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
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
			if (Function_88(iParam0) == 1)
			{
				Function_90(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
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

bool Function_86(int iParam0) //Position: 0x41C8 / 16840
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(int iParam0) //Position: 0x41DE / 16862
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_88(int iParam0) //Position: 0x41FD / 16893
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_89(int iParam0, bool bParam1) //Position: 0x4217 / 16919
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(1, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x427E / 17022
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
	Function_67(iParam0, TO_FLOAT(bParam1), 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_91() //Position: 0x449E / 17566
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_68(0));
	PLAYSTAT_INT("HC_FAME", Function_68(3));
	PLAYSTAT_INT("HC_HONOR", Function_68(1));
	return;
}

void Function_92() //Position: 0x45F6 / 17910
{
	int iVar0;
	int iVar1;
	
	if (!Function_38(Global_6269))
	{
		return;
	}
	iVar0 = Function_68(24);
	iVar1 = Function_37(Global_6269);
	if (!Function_38(iVar0) && Function_95(iVar1) < 0)
	{
		Function_53(24, Global_6269, 0);
		Function_93(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_95(Function_37(iVar0)))
	{
		Function_53(24, Global_6269, 0);
		Function_93(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_93(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4676 / 18038
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x49C8 / 18888
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_95(int iParam0) //Position: 0x4A4B / 19019
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A65 / 19045
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A90 / 19088
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4ABE / 19134
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
	
	if (!Function_38(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
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
				bVar0 = (Function_68(42) - Global_34165.f_116);
				bVar1 = (Function_68(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_65(49)) - Global_34165.f_124);
				bVar3 = (Function_68(49) - Global_34165.f_128);
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
				bVar4 = (Function_68(355) - Global_34165.f_116);
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
		iVar15 = Function_112(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_32(iParam0) };
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D5A / 19802
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_68(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_106(3, bVar1);
		if (!bParam2)
		{
			if (!Function_29(Global_76848, 4))
			{
				Function_22(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_90(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_64(3));
	iVar0 = Function_68(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F29 / 20265
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1, bool bParam2) //Position: 0x5187 / 20871
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
	Function_93(iParam0, cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x530C / 21260
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x53AB / 21419
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x545A / 21594
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

var Function_105(int iParam0) //Position: 0x54B8 / 21688
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5547 / 21831
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x56E4 / 22244
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

void Function_108() //Position: 0x5725 / 22309
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x573B / 22331
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x577B / 22395
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_111(int iParam0) //Position: 0x57BB / 22459
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x57CA / 22474
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

int Function_113(int iParam0) //Position: 0x5992 / 22930
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

var Function_114() //Position: 0x5A27 / 23079
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5A4C / 23116
{
	if (!Function_38(iParam0))
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
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F07 / 24327
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_68(1);
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
			Function_106(1, bVar1);
			if (!bParam2)
			{
				if (!Function_29(Global_76848, 1))
				{
					Function_22(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_29(Global_76848, 2))
				{
					Function_22(Global_34573, 2, 3, 0);
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
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_68(1) <= 4294962296)
	{
		Function_53(1, 4294962296, 0);
	}
	else if (Function_68(1) >= 5000)
	{
		Function_53(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_64(1));
	iVar0 = Function_68(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_101(2, Function_117(Global_12976.f_152), 0);
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
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_101(2, Function_117(Global_12976.f_152), 1);
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
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_101(2, Function_117(Global_12976.f_152), 1);
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
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			break;
	}
	Function_100(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_117(int iParam0) //Position: 0x6228 / 25128
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x62CB / 25291
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
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x64C6 / 25798
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1) //Position: 0x6662 / 26210
{
	bool bVar0;
	
	bVar0 = Function_68(0);
	if ((Function_68(0) + bParam0) >= 999999)
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
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_68(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_90(597, bParam0, 0, 0);
	}
	if ((Function_68(597) + Function_68(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x672D / 26413
{
	struct<4> Var0;
	
	if (!Function_38(iParam0))
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
			Function_167(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_30640[0]);
			Function_164(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_164(Global_30668[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_30668[0]);
			Function_164(Global_30640[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_162(21, bParam2, 4);
			Function_164(Global_30668[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_30640[0]);
			Function_164(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_30640[0]);
			Function_164(Global_30668[2]);
			Function_137(&(Global_29008[Global_30668[2]]), 32768);
			Function_136(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, bParam2, 4);
			Function_164(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_30640[0]);
			Function_164(Global_30658[0]);
			Function_137(&(Global_29008[Global_30658[0]]), 32768);
			Function_136(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_30640[0]);
			Function_164(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_30640[1]);
			Function_164(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_30679[0]);
			Function_164(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_30658[5]);
			Function_164(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, bParam2, 4);
			Function_164(Global_30640[4]);
			Function_164(Global_30658[4]);
			Function_135(&Global_76847, 0x2000000);
			Function_135(&Global_76847, 0x4000000);
			Function_135(&Global_76847, 4096);
			Function_135(&Global_76847, 8);
			Function_135(&Global_76847, 8388608);
			Function_135(&Global_76847, 524288);
			Function_135(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_30640[4]);
			Function_164(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_29008[Global_30640[4]]), 256);
			Function_164(Global_30640[4]);
			Function_164(Global_30658[0]);
			Function_137(&(Global_29008[Global_30658[0]]), 32768);
			Function_136(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_30640[0]);
			Function_164(Global_30640[5]);
			Function_162(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_30658[3]);
			Function_137(&(Global_29008[Global_30658[3]]), 32768);
			Function_136(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, bParam2, 4);
			Function_164(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_29008[Global_30679[1]]), 32768);
			Function_164(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_162(12, bParam2, 4);
			Function_136(&(Global_29008[Global_30679[1]]), 256);
			Function_164(Global_30668[3]);
			Function_164(Global_30693[0]);
			Function_164(Global_30685[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_30693[0]);
			Function_164(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_30685[0]);
			Function_164(Global_30693[0]);
			Function_164(Global_30693[1]);
			Function_164(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_30685[0]);
			Function_164(Global_30685[2]);
			Function_137(&(Global_29008[Global_30685[2]]), 32768);
			Function_136(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, bParam2, 4);
			Function_164(Global_30685[0]);
			Function_164(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_30685[0]);
			Function_164(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_30693[12]);
			Function_164(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_30693[12]);
			Function_164(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_162(25, bParam2, 10);
			Function_164(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_162(13, bParam2, 4);
			Function_164(Global_30693[2]);
			Function_164(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_30685[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, bParam2, 4);
			Function_164(Global_30717[0]);
			Function_164(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_30717[0]);
			Function_164(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_162(17, bParam2, 4);
			Function_164(Global_30723[0]);
			Function_164(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_89(2, 26);
			Function_136(&(Global_29008[Global_30717[1]]), 256);
			Function_154(11);
			Function_164(Global_30717[1]);
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_30717[1]);
			Function_164(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_30717[1]);
			Function_122(11);
			Function_154(12);
			Global_16537[1121].f_40 = 0;
			Function_152(56, 1);
			if (!bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
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

void Function_122(int iParam0) //Position: 0x702B / 28715
{
	bool bVar0;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_127(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_127(Global_16537[iParam021].f_72, 0);
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
			Function_123(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x719A / 29082
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
		Function_125(Function_126(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_125(Function_126(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				vVar1 = { StackVal, StackVal, Function_125(StackVal) };
				if (Function_124(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_124(vector3 vParam0, vector3 vParam3) //Position: 0x72A0 / 29344
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_125(int iParam0) //Position: 0x72CD / 29389
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

var Function_126(vector3 vParam0) //Position: 0x7324 / 29476
{
	bool bVar0;
	
	bVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
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

void Function_127(bool bParam0, bool bParam1) //Position: 0x7372 / 29554
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x73C6 / 29638
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_90(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x7565 / 30053
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x756B / 30059
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

void Function_131(bool bParam0, int iParam1) //Position: 0x760F / 30223
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7664 / 30308
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x767A / 30330
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x76CB / 30411
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x76F8 / 30456
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7707 / 30471
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x771E / 30494
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x772D / 30509
{
	struct<8> Var0;
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_90(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_140() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_139(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_29(Global_76846, 2))
			{
				Function_22(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7882 / 30850
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_140() //Position: 0x78FD / 30973
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x792A / 31018
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_143(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7ADA / 31450
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(var uParam0, int iParam1) //Position: 0x7B31 / 31537
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7B56 / 31574
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, int iParam1) //Position: 0x7BAC / 31660
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

int Function_146(bool bParam0) //Position: 0x7C0B / 31755
{
	return SHIFT_LEFT(1, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7C17 / 31767
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7C33 / 31795
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7C85 / 31877
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7CB5 / 31925
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_151(iParam0, iParam1);
	Function_22(Global_34573, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7D28 / 32040
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7D84 / 32132
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_153(iParam0, iParam1);
	Function_22(Global_34573, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7DF5 / 32245
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7E4F / 32335
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_161(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_161(Global_16537[iParam021].f_72, 0);
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
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 6);
			}
			else
			{
				Function_129();
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
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_90(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_89(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x80FD / 33021
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_90(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_139(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_145(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_131(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_29(Global_76846, 2))
			{
				Function_22(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_157();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, iParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(iParam1, 18));
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

void Function_156(int iParam0, bool bParam1) //Position: 0x8393 / 33683
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_157() //Position: 0x83FE / 33790
{
	if (Function_132(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_158(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_158(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_158(int iParam0, int iParam1) //Position: 0x8479 / 33913
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
					if (Function_36(6, 0) || Function_36(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_159(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_36(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_159(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_159(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_159(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_159(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_36(26, 0))
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
					if (Function_159(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_159(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_159(27) && iVar18)
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
					if (Function_159(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_159(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_159(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_159(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_36(17, 0) && iVar15)
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
					if (Function_159(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_36(6, 0) && Function_159(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_159(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_36(9, 0) && Function_159(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_159(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_36(8, 0) && iVar19)
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
	if (Function_75(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_75(StackVal, StackVal, vVar3))
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
	if (!Function_75(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_159(int iParam0) //Position: 0x906A / 36970
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x907F / 36991
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

void Function_161(bool bParam0, bool bParam1) //Position: 0x90CE / 37070
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x911F / 37151
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_167(bParam0, 0, 0);
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

bool Function_163(int iParam0, int iParam1) //Position: 0x918D / 37261
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x91A0 / 37280
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_166(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_90(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
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
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_89(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_89(7, 30);
	}
	if (Function_64(473) <= Function_65(473))
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

var Function_165(int iParam0) //Position: 0x929F / 37535
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

bool Function_166(var uParam0, int iParam1) //Position: 0x92F7 / 37623
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9313 / 37651
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_28(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_28(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_28(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x936A / 37738
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(int iParam0) //Position: 0x937C / 37756
{
	int iVar0;
	
	if (Function_14(iParam0, 1) && Function_14(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_170(int iParam0) //Position: 0x93B0 / 37808
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, int iParam1, int iParam2) //Position: 0x9417 / 37911
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_172(Global_16524, iVar0, 1);
	}
	return;
}

void Function_172(int iParam0, bool bParam1, bool bParam2) //Position: 0x94FD / 38141
{
	int iVar0;
	
	Function_174(iParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_173();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_173() //Position: 0x9676 / 38518
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9682 / 38530
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

void Function_175() //Position: 0x96C8 / 38600
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	struct<5> Var6;
	
	REMOVE_STRING_TABLE("nminigames");
	REMOVE_ANIM_SET("blackjack_hillb");
	REMOVE_ANIM_SET("blackjack_gped");
	REMOVE_ANIM_SET("nblackjack");
	uVar0 = GET_ASSET_ID("$/fragments/p_gen_cards02x", 0);
	STREAMING_EVICT_PROP(uVar0);
	uVar1 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	STREAMING_EVICT_PROP(uVar1);
	uVar2 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	STREAMING_EVICT_PROP(uVar2);
	uVar3 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	STREAMING_EVICT_PROP(uVar3);
	bVar4 = false;
	while (bVar4 <= 13)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			Var6 = bVar4;
			Var6.f_4 = iVar5;
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var6) };
			STREAMING_EVICT_PROP(GET_ASSET_ID(&cVar8, 0));
			iVar5++;
		}
		bVar4++;
	}
	bVar4 = false;
	while (bVar4 < 25)
	{
		strcpy(&cVar8, Function_176(bVar4), 32);
		STREAMING_EVICT_PROP(GET_ASSET_ID(&cVar8, 0));
		bVar4++;
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

var Function_176(bool bParam0) //Position: 0x9828 / 38952
{
	switch (bParam0)
	{
		case 0x00000000:
			return "p_crd_chips004x";
			break;
		
		case 0x00000001:
			return "p_crd_chips009x";
			break;
		
		case 0x00000002:
			return "p_crd_chips040x";
			break;
		
		case 0x00000003:
			return "p_crd_chips044x";
			break;
		
		case 0x00000004:
			return "p_crd_chips049x";
			break;
		
		case 0x00000005:
			return "p_crd_chips090x";
			break;
		
		case 0x00000006:
			return "p_crd_chips094x";
			break;
		
		case 0x00000007:
			return "p_crd_chips099x";
			break;
		
		case 0x00000008:
			return "p_crd_chips400x";
			break;
		
		case 0x00000009:
			return "p_crd_chips404x";
			break;
		
		case 0x0000000A:
			return "p_crd_chips409x";
			break;
		
		case 0x0000000B:
			return "p_crd_chips440x";
			break;
		
		case 0x0000000C:
			return "p_crd_chips444x";
			break;
		
		case 0x0000000D:
			return "p_crd_chips449x";
			break;
		
		case 0x0000000E:
			return "p_crd_chips490x";
			break;
		
		case 0x0000000F:
			return "p_crd_chips494x";
			break;
		
		case 0x00000010:
			return "p_crd_chips499x";
			break;
		
		case 0x00000011:
			return "p_crd_chips900x";
			break;
		
		case 0x00000012:
			return "p_crd_chips904x";
			break;
		
		case 0x00000013:
			return "p_crd_chips909x";
			break;
		
		case 0x00000014:
			return "p_crd_chips940x";
			break;
		
		case 0x00000015:
			return "p_crd_chips944x";
			break;
		
		case 0x00000016:
			return "p_crd_chips949x";
			break;
		
		case 0x00000017:
			return "p_crd_chips990x";
			break;
		
		case 0x00000018:
			return "p_crd_chips994x";
			break;
		
		case 0x00000019:
			return "p_crd_chips999x";
			break;
	}
	LOG_ERROR("Returning invalid chip name");
	return "";
}

struct<32> Function_177(var uParam0) //Position: 0x9B31 / 39729
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_crd_", 32);
	switch (*uParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "2_", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "3_", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "4_", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "5_", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "6_", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "7_", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "8_", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "9_", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "10_", 32);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "j_", 32);
			break;
		
		case 0x0000000A:
			stradd(&cVar0, "q_", 32);
			break;
		
		case 0x0000000B:
			stradd(&cVar0, "k_", 32);
			break;
		
		case 0x0000000C:
			stradd(&cVar0, "a_", 32);
			break;
	}
	switch (StackVal)
	{
		case 0x00000000:
			stradd(&cVar0, "c01x", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "d01x", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "h01x", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "s01x", 32);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_178(var uParam0) //Position: 0x9CA3 / 40099
{
	if (Function_14(uParam0, 1) && !Function_14(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || uParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_179() //Position: 0x9CD0 / 40144
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_28(), true);
	Function_182(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_28()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_181();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(1);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_180();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_180() //Position: 0x9D52 / 40274
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_181() //Position: 0x9D67 / 40295
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_182(var uParam0) //Position: 0x9D7B / 40315
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_183() //Position: 0x9D8E / 40334
{
	Function_184(0);
	Function_184(1);
	Function_184(2);
	Function_184(3);
	Function_184(4);
	Function_184(5);
	Function_184(6);
	Function_184(7);
	Function_184(8);
	return;
}

int Function_184(int iParam0) //Position: 0x9DC2 / 40386
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_185(int iParam0, bool bParam1) //Position: 0x9DCE / 40398
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, true);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, false);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, false);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, false);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, true);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, false);
			}
			break;
	}
	return;
}

bool Function_186(int iParam0) //Position: 0x9F41 / 40769
{
	return Function_14(uLocal_32, iParam0);
}

void Function_187(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9F4E / 40782
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_194(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_194(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_194(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_193(uParam0[iVar02], 8);
	}
	Function_193(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_192(StackVal);
	if (bParam3)
	{
		Function_188(uParam0, uParam1, iParam2, 0);
	}
}

void Function_188(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9FE8 / 40936
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_191(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_190(Global_29007), Function_189(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_194(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_194(uParam0[iParam22], 1) && !bParam3)
	{
		Function_191(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_190(Global_29007), Function_189(Global_29007), false, 0);
	}
}

int Function_189(int iParam0) //Position: 0xA137 / 41271
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

int Function_190(int iParam0) //Position: 0xA162 / 41314
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

void Function_191(var uParam0, int iParam1) //Position: 0xA196 / 41366
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_192(bool bParam0) //Position: 0xA1A5 / 41381
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_193(var uParam0, int iParam1) //Position: 0xA23F / 41535
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_194(var uParam0, int iParam1) //Position: 0xA256 / 41558
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_195(int iParam0) //Position: 0xA272 / 41586
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	vVar0 = { StackVal, StackVal, *(&Local_37 + 64) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &vVar0, 3.0f, 1);
	if (IS_GRINGO_VALID(bVar3))
	{
		Function_196(bVar3);
	}
	iVar4 = 0;
	while (iVar4 <= iParam0->f_1848)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			Function_196(GET_GRINGO_FROM_OBJECT(StackVal));
		}
		iVar4++;
	}
	return;
}

void Function_196(bool bParam0) //Position: 0xA2E8 / 41704
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
			if (IS_PHYSINST_VALID(bVar3))
			{
				SHOW_PHYSINST(bVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			bVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar4, bParam0);
			if (IS_PHYSINST_VALID(bVar5))
			{
				SHOW_PHYSINST(bVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_197() //Position: 0xA3D0 / 41936
{
	int iVar0[3];
	int iVar4;
	
	if (Function_219(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_205(&uLocal_4, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_198();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_36 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_198();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_36 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_198();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_36 = 2;
		}
	}
	return;
}

void Function_198() //Position: 0xA464 / 42084
{
	Function_200();
	Function_199(10, 3);
	return;
}

void Function_199(int iParam0, int iParam1) //Position: 0xA473 / 42099
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_200() //Position: 0xA5AA / 42410
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_204())
	{
		Function_203(10, 3);
	}
	else
	{
		Function_201();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_28(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_28());
	UI_POP("nDebugMenu");
	return;
}

void Function_201() //Position: 0xA5F5 / 42485
{
	Function_202(25, 2);
	return;
}

void Function_202(int iParam0, int iParam1) //Position: 0xA601 / 42497
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_203(int iParam0, int iParam1) //Position: 0xA7FF / 43007
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_204() //Position: 0xA936 / 43318
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
				if (!Function_14(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA99D / 43421
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_218(&Var15, &Var0);
	uVar20 = Function_217(*uParam1, &Var15);
	Function_216(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_215(uParam0, uVar20);
	Function_213(StackVal, uParam0, Var15.f_12);
	Function_211(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_210(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_207(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_206(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_206(int iParam0, int iParam1, int iParam2) //Position: 0xAA64 / 43620
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_207(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAAC0 / 43712
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
				Function_209(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_209(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
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
				Function_206(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_208(bParam1->f_32);
	}
	else
	{
		Function_208(bParam1->f_32);
	}
	return 0;
}

void Function_208(bool bParam0) //Position: 0xAC46 / 44102
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_209(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xAC80 / 44160
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_210(int iParam0, var uParam1, int iParam2) //Position: 0xAD2E / 44334
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_211(var uParam0, int iParam1, int iParam2) //Position: 0xAD52 / 44370
{
	switch (Function_212())
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

int Function_212() //Position: 0xADEE / 44526
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

void Function_213(var uParam0, int iParam1, int iParam2) //Position: 0xAE2A / 44586
{
	switch (Function_214(uParam0))
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

int Function_214(int iParam0) //Position: 0xAEC2 / 44738
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_28()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_14(*iParam0, 0x40000000))
		{
			Function_78(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_14(*iParam0, 0x40000000))
		{
			Function_78(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_27(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_28()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_14(*iParam0, 0x20000000))
		{
			Function_78(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_14(*iParam0, 0x20000000))
		{
			Function_78(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_27(iParam0, 0x20000000);
	return 0;
}

var Function_215(var uParam0, int iParam1) //Position: 0xB00D / 45069
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

void Function_216(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB15C / 45404
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_217(int iParam0, int iParam1) //Position: 0xB1EF / 45551
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_218(var uParam0, int iParam1) //Position: 0xB209 / 45577
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_219(int iParam0) //Position: 0xB257 / 45655
{
	if (!Function_220(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_220(int iParam0) //Position: 0xB26B / 45675
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_221() //Position: 0xB28F / 45711
{
	int iVar0;
	bool bVar1;
	char* cVar2[32];
	
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_342(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_27));
	}
	fLocal_16 = (GET_CURRENT_GAME_TIME() - fLocal_17);
	if (fLocal_16 < 0.033333f)
	{
		fLocal_16 = 0.0333333f;
	}
	fLocal_17 = GET_CURRENT_GAME_TIME();
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_341();
		return 0;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_37 + 8)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_37 + 8)[iVar0]) == Function_28())
			{
				Function_341();
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_80.f_1848)
	{
		if ((*&Local_80 + 1848)[iVar09])
		{
			bVar1 = (*&Local_80 + 488)[StackVal113];
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1)) > 1.0f && GET_LAST_ATTACKER(bVar1) != GET_PLAYER_ACTOR(0))
				{
					strcpy(&cVar2, "", 32);
					stradd(&cVar2, "Player attacked ", 32);
					stradd(&cVar2, &Local_80 + 488[StackVal113] + 4, 32);
					Function_340(&cVar2, 4.0f, 1, 2, 0, 0, 0, 0);
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_36 = 1;
					Function_341();
					return 0;
				}
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_341();
		return 0;
	}
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			if (Function_339())
			{
				Function_338();
				Function_335(&Local_80);
				iLocal_0 = 0;
			}
			break;
		
		case 0x00000000:
			Function_318();
			break;
		
		case 0x00000001:
			Function_231();
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			Function_224();
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000065:
			iLocal_2 = 1;
			break;
		
		default:
			return 0;
	}
	if (iLocal_2)
	{
		Function_222();
		return 0;
	}
	if (bLocal_3)
	{
		Function_341();
		return 0;
	}
	return 1;
}

void Function_222() //Position: 0xB44C / 46156
{
	if (Global_29006 == Global_30658[1])
	{
		Function_223(2, Global_30658[1]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0xB46E / 46190
{
	if (!Function_147(3))
	{
		return;
	}
	if (Function_43())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3() || Function_149())
				{
					Function_155(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_155(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_155(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_155(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_155(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_155(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_155(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_148(2) && !Function_133(2))
				{
					Function_155(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_224() //Position: 0xB580 / 46464
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (iLocal_36 == 1)
			{
				if (Global_29004 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 2)
				{
					AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
			}
			if (Function_186(1024))
			{
				EQUIP_ACCESSORY(Function_28(), 1, 1);
			}
			UI_EXIT("BJ_Help");
			UI_EXIT("Scores");
			UI_EXIT("BetPanel");
			Function_183();
			Function_180();
			if (iLocal_36 != 0 && !Function_229(Function_17(Local_37), Function_15(Local_37)))
			{
				Function_90(410, 1, 0, 0);
				Function_89(6, 11);
			}
			iLocal_1 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_80 + 1848)[Local_80.f_19689])
			{
				bVar1 = (((&Local_80 + 488[Function_228()113])->f_380 / 10) - ((*&Local_37 + 76)[Function_228()] / 10));
				if (bVar1 <= 0)
				{
					Function_118(445, ABS(bVar1), 0);
					Function_118(450, ABS(bVar1), 0);
					SAY_SINGLE_LINE_CONTEXT((*&Local_80 + 488)[Function_228()113], 452, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					Function_90(445, bVar1, 0, 0);
					Function_90(450, bVar1, 0, 0);
					if ((Function_68(597) + Function_68(450)) >= 10000)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
						{
							AWARD_ACHIEVEMENT(24);
						}
					}
					SAY_SINGLE_LINE_CONTEXT((*&Local_80 + 488)[Function_228()113], 453, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (bVar1 >= Function_68(446))
				{
					Function_53(446, bVar1, 0);
				}
				SET_DRAW_ACTOR(Local_80, 0);
				SET_DRAW_OBJECT(bLocal_70, 0);
				Function_342(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_27));
				Function_226(&Local_80, Function_228());
			}
			DESTROY_OBJECT(bLocal_70);
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_80.f_1848)
			{
				if ((*&Local_80 + 1848)[iVar09])
				{
					RESET_ANIM_SET_FOR_ACTOR((*&Local_80 + 488)[StackVal113], 1);
					SET_ANIM_SET_FOR_ACTOR((*&Local_80 + 488)[StackVal113], "blackjack_ambient", 0);
					while (!ACTOR_HAS_ANIM_SET((*&Local_80 + 488)[StackVal113], "blackjack_ambient") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					SET_ACTION_NODE_FOR_ACTOR((*&Local_80 + 488)[StackVal113], "blackjack/Fake/idle");
					TASK_PRIORITY_SET((*&Local_80 + 488)[StackVal113], 2);
				}
				iVar0++;
			}
			MAKE_ACTOR_READY_FOR_ACTION(Local_80, 1);
			Function_225(&Local_80);
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Local_80)))
			{
				RESET_ANIM_SET_FOR_ACTOR(Local_80, 1);
				SET_ANIM_SET_FOR_ACTOR(Local_80, "fake_blackjack_dealer", 0);
				while (!ACTOR_HAS_ANIM_SET(Local_80, "fake_blackjack_dealer") && !IS_EXITFLAG_SET())
				{
					WAIT(0);
				}
				SNAP_ACTOR_TO_GRINGO(StackVal, Local_80, "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(Local_80), "UseCase1", 1, 1);
				SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Fake/Dealer/start/random");
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "blackjack/Player/leave_game/stand"))
			{
				if (iLocal_36 == 0)
				{
					iLocal_2 = 1;
				}
				else if (iLocal_36 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_36 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_225(int iParam0) //Position: 0xB9B6 / 47542
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*iParam0 + 1848)[iVar09])
		{
			iVar3 = StackVal;
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iVar2 = 0;
				while (iVar2 <= 10)
				{
					DESTROY_OBJECT((*iParam0 + 488[iVar3113] + 68[iVar137] + 84)[iVar2]);
					iVar2++;
				}
				iVar1++;
			}
			DESTROY_OBJECT((iParam0 + 488[iVar3113])->f_416);
			DESTROY_OBJECT((iParam0 + 488[iVar3113])->f_420);
			DESTROY_OBJECT((iParam0 + 488[iVar3113])->f_424);
			DESTROY_OBJECT((iParam0 + 488[iVar3113])->f_428);
			DESTROY_OBJECT((iParam0 + 488[iVar3113])->f_432);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar2 = 0;
		while (iVar2 <= 10)
		{
			DESTROY_OBJECT((*iParam0 + 68[iVar137] + 84)[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	return;
}

void Function_226(int iParam0, int iParam1) //Position: 0xBAA5 / 47781
{
	int iVar0;
	int iVar1;
	
	(*iParam0 + 1848)[(iParam0 + 488[iParam1113])->f_3769] = 0;
	(iParam0 + 1848[(iParam0 + 488[iParam1113])->f_3769])->f_4 = 4294967295;
	TASK_CLEAR((*iParam0 + 488)[iParam1113]);
	if (!(*iParam0 + 488)[iParam1113] != GET_PLAYER_ACTOR(0))
	{
		TASK_FLEE_ACTOR((*iParam0 + 488)[iParam1113], GET_PLAYER_ACTOR(0), 100.0f, -1.0f, 0, 0, 0);
	}
	GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(StackVal));
	ACTOR_END_FORCE_HOLSTER((*iParam0 + 488)[iParam1113]);
	REMOVE_ALL_OBJECT_ATTACHMENTS(GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			DESTROY_OBJECT((*iParam0 + 488[iParam1113] + 68[iVar037] + 84)[iVar1]);
			iVar1++;
		}
		iVar0++;
	}
	DESTROY_OBJECT((iParam0 + 488[iParam1113])->f_416);
	DESTROY_OBJECT((iParam0 + 488[iParam1113])->f_420);
	DESTROY_OBJECT((iParam0 + 488[iParam1113])->f_424);
	DESTROY_OBJECT((iParam0 + 488[iParam1113])->f_428);
	DESTROY_OBJECT((iParam0 + 488[iParam1113])->f_432);
	(*iParam0 + 488)[iParam1113] = "";
	(iParam0 + 488[iParam1113])->f_376 = 4294967295;
	Function_227(iParam0 + 488[iParam1113] + 68, 2);
	(iParam0 + 488[iParam1113])->f_380 = 1000;
	strcpy(iParam0 + 488[iParam1113] + 4, "", 64);
	iParam0->f_1960 = (iParam0->f_1960 - 1);
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xBC1E / 48158
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			(*uParam0[iVar037])[iVar12] = 4294967295;
			uParam0[iVar037][iVar12]->f_4 = 4294967295;
			iVar1++;
		}
		uParam0[iVar037]->f_128 = 0;
		uParam0[iVar037]->f_132 = 0;
		uParam0[iVar037]->f_136 = 0;
		uParam0[iVar037]->f_144 = 0;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (IS_OBJECT_VALID((*uParam0[iVar037] + 84)[iVar1]))
			{
				DESTROY_OBJECT((*uParam0[iVar037] + 84)[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
	return;
}

int Function_228() //Position: 0xBCBA / 48314
{
	return StackVal;
}

bool Function_229(int iParam0, int iParam1) //Position: 0xBCCE / 48334
{
	int iVar0;
	
	if (!Function_230(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_17(iVar0) != iParam0 && Function_15(iVar0) != iParam1)
		{
			if (Function_88(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_230(int iParam0) //Position: 0xBD13 / 48403
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_231() //Position: 0xBD28 / 48424
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	var uVar17;
	int iVar18;
	struct<369> Var19;
	
	Function_314(&Local_80, 0, 0);
	Function_313(&Local_80);
	if (HUD_IS_SHOWING_HELP_TEXT() && !iLocal_76 != 8)
	{
		if (IS_BUTTON_PRESSED(Function_312(), 6, 1, 0))
		{
			Function_180();
			HUD_CLEAR_HELP_QUEUE();
			Function_311(&uLocal_30);
		}
	}
	if (((((((((IS_BUTTON_RELEASED(Function_312(), 8, 1, 0) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && iLocal_76 == 38) && iLocal_76 == 39) && iLocal_76 == 2) && iLocal_76 == 10) && iLocal_76 == 11) && iLocal_76 == 23) && iLocal_76 == 24)
	{
		Function_180();
		Function_310();
		UI_ENTER("BJ_Help");
		iLocal_78 = iLocal_76;
		iLocal_76 = 38;
		iLocal_79 = iLocal_33;
		iLocal_33 = 0;
	}
	if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !UI_ISACTIVE("BJ_Help"))
	{
		if (((iLocal_76 == 7 && iLocal_76 == 8) && iLocal_76 == 38) && iLocal_76 == 39)
		{
			if (IS_BUTTON_PRESSED(Function_312(), 3, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_77 = iLocal_76;
				iLocal_76 = 0;
				SET_ANIMATION_OVERRIDE_SCALE(Local_80, 0.0f);
				Function_309(16);
			}
		}
	}
	switch (iLocal_76)
	{
		case 0x00000000:
			if (HUD_IS_FADED())
			{
				SET_ANIMATION_OVERRIDE_SCALE(Local_80, 1.0f);
				Function_180();
				Function_310();
				Function_309(512);
				iLocal_76 = iLocal_77;
			}
			break;
		
		case 0x00000001:
			if (!HUD_IS_FADED() || Function_186(16))
			{
				iLocal_33 = 1;
				Function_307(&iLocal_24);
				switch (Local_80.f_2400)
				{
					case 0x00000000:
						SAY_SINGLE_LINE_CONTEXT(Local_80, 243, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						iLocal_76 = 4;
						break;
					
					case 0x00000002:
						SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Dealer/cards_idle/idle");
						Function_306(&bLocal_27, Local_80);
						if (Function_301(&uLocal_30, 9) && !Function_186(16))
						{
							Function_139("BJ_DealHelp", 10.0f, 1, 0, 2, 1, 0);
						}
						iLocal_33 = 4;
						iLocal_71 = 0;
						iLocal_76 = 2;
						break;
				}
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			break;
		
		case 0x00000002:
			if (((!HUD_IS_FADING() && !HUD_IS_FADED()) && Function_300(&Local_80) < 1) && Local_80.f_1972 == Local_80.f_1968)
			{
				if (IS_BUTTON_PRESSED(Function_312(), 2, 1, 0))
				{
					iLocal_33 = 1;
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			if (Function_295(&Local_80) && !HUD_IS_FADING())
			{
				if (HUD_IS_FADED() || Function_186(16))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Dealer/cards_idle/idle");
					Function_294(&Local_80);
					Function_291(&Local_80);
					if (!Function_186(16))
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				Function_73(448, 1.0f, 0);
				Function_180();
				Function_307(&iLocal_24);
				iLocal_76 = 3;
			}
			break;
		
		case 0x00000003:
			if (HUD_IS_FADING())
			{
				Function_307(&iLocal_24);
			}
			if (((Function_288(&iLocal_24) < 0.5f && !HUD_IS_FADING()) && !HUD_IS_SHOWING_HELP_TEXT()) || Function_186(16))
			{
				if ((*&Local_80 + 68[037])[12] == 12)
				{
					Local_80.f_2400 = 1;
				}
				iLocal_76 = 4;
			}
			break;
		
		case 0x00000004:
			Function_183();
			switch (Local_80.f_2400)
			{
				case 0x00000000:
					if ((*&Local_80 + 1848)[Local_80.f_19649])
					{
						if ((&Local_80 + 488[StackVal113])->f_380 >= 0)
						{
							if (*&Local_80 + 488)[StackVal113] == GET_PLAYER_ACTOR(0)
							{
								Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
								Function_307(&iLocal_24);
								iLocal_76 = 7;
							}
							else
							{
								Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
								iLocal_76 = 9;
							}
						}
					}
					else
					{
						iLocal_76 = 25;
					}
					break;
				
				case 0x00000001:
					if (Function_285(&Local_80 + 488[StackVal113]))
					{
						if (*&Local_80 + 488)[StackVal113] == GET_PLAYER_ACTOR(0)
						{
							Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
							Function_307(&iLocal_24);
							iLocal_76 = 7;
						}
						else
						{
							Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
							iLocal_76 = 9;
						}
					}
					else
					{
						iLocal_76 = 25;
					}
					break;
				
				case 0x00000002:
					Function_282(&Local_80);
					if (Function_285(&Local_80 + 488[StackVal113]) && !(&Local_80 + 488[Function_280()113] + 68[Function_281()37])->f_144)
					{
						if (*&Local_80 + 488)[StackVal113] == GET_PLAYER_ACTOR(0)
						{
							Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
							Function_307(&iLocal_24);
							iLocal_76 = 7;
						}
						else
						{
							Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
							iLocal_76 = 9;
						}
					}
					else
					{
						iLocal_76 = 25;
					}
					break;
				
				case 0x00000003:
					if (Function_288(&iLocal_24) < 0.5f || Function_186(16))
					{
						iLocal_76 = 5;
					}
					break;
				
				case 0x00000004:
					if (Function_288(&iLocal_24) < 0.5f || Function_186(16))
					{
						iLocal_76 = 6;
					}
					break;
			}
			break;
		
		case 0x00000005:
			Function_307(&iLocal_24);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			bVar0 = Function_279(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_80 + 68[Local_80.f_37237]), 0);
		}
	}
}
}

int Function_232(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1134F / 70479
{
	if (!Function_235(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_234(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_233(uParam0, iParam2);
}

int Function_233(var uParam0, int iParam1) //Position: 0x11389 / 70537
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_234(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11397 / 70551
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_235(var uParam0, int iParam1) //Position: 0x113D1 / 70609
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_236(int iParam0, int iParam1) //Position: 0x113DF / 70623
{
	if (iParam1 >= 4294967295)
	{
		UI_LABEL_SET_VALUE("nScores.s0", (iParam0 + 488[iParam1113])->f_380);
	}
	return;
}

void Function_237(bool bParam0) //Position: 0x11406 / 70662
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*bParam0 + 1848)[iVar09])
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				(bParam0 + 488[iVar1113] + 68[037])->f_136 = StackVal;
				(bParam0 + 488[iVar1113] + 68[037])->f_140 = StackVal;
				iVar1++;
			}
			DESTROY_OBJECT((bParam0 + 488[StackVal113])->f_420);
			DESTROY_OBJECT((bParam0 + 488[StackVal113])->f_424);
			DESTROY_OBJECT((bParam0 + 488[StackVal113])->f_428);
			DESTROY_OBJECT((bParam0 + 488[StackVal113])->f_432);
		}
		iVar0++;
	}
	return;
}

void Function_238(int iParam0) //Position: 0x114D2 / 70866
{
	int iVar0;
	
	iParam0->f_1972 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1848)
	{
		if ((*iParam0 + 1848)[iVar09])
		{
			if (iParam0->f_1972 == 4294967295)
			{
				iParam0->f_1972 = iVar0;
				iParam0->f_1964 = iVar0;
			}
			Function_227(iParam0 + 488[StackVal113] + 68, 2);
			(iParam0 + 488[0113])->f_372 = StackVal;
			(iParam0 + 488[0113])->f_368 = StackVal;
		}
		iVar0++;
	}
	Function_240(iParam0 + 1976);
	Function_239(iParam0 + 1976);
	Function_237(iParam0);
	return;
}

void Function_239(int iParam0) //Position: 0x11570 / 71024
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		iVar1 = RAND_INT_RANGE(0, 51);
		Var2 = { StackVal, *iParam0[iVar12] };
		*iParam0[iVar12] = { StackVal, *iParam0[iVar02] };
		*iParam0[iVar02] = { StackVal, Var2 };
		iVar0++;
	}
	if (Function_186(1))
	{
		(*iParam0)[02] = 5;
		iParam0[02]->f_4 = 1;
		(*iParam0)[12] = 5;
		iParam0[12]->f_4 = 2;
		(*iParam0)[22] = 5;
		iParam0[22]->f_4 = 0;
		(*iParam0)[32] = 3;
		iParam0[32]->f_4 = 3;
		(*iParam0)[42] = 3;
		iParam0[42]->f_4 = 1;
		(*iParam0)[52] = 3;
		iParam0[52]->f_4 = 2;
		(*iParam0)[62] = 3;
		iParam0[62]->f_4 = 0;
		(*iParam0)[72] = 1;
		iParam0[72]->f_4 = 2;
		(*iParam0)[82] = 9;
		iParam0[82]->f_4 = 3;
		(*iParam0)[92] = 9;
		iParam0[92]->f_4 = 1;
		(*iParam0)[102] = 9;
		iParam0[102]->f_4 = 2;
		(*iParam0)[112] = 10;
		iParam0[112]->f_4 = 3;
		(*iParam0)[122] = 9;
		iParam0[122]->f_4 = 3;
		(*iParam0)[132] = 8;
		iParam0[132]->f_4 = 3;
		(*iParam0)[142] = 5;
		iParam0[142]->f_4 = 2;
	}
	else if (Function_186(2))
	{
		(*iParam0)[02] = 0;
		iParam0[02]->f_4 = 1;
		(*iParam0)[12] = 5;
		iParam0[12]->f_4 = 2;
		(*iParam0)[22] = 1;
		iParam0[22]->f_4 = 0;
		(*iParam0)[32] = 3;
		iParam0[32]->f_4 = 3;
		(*iParam0)[42] = 0;
		iParam0[42]->f_4 = 1;
		(*iParam0)[52] = 5;
		iParam0[52]->f_4 = 2;
		(*iParam0)[62] = 3;
		iParam0[62]->f_4 = 0;
		(*iParam0)[72] = 0;
		iParam0[72]->f_4 = 2;
		(*iParam0)[82] = 0;
		iParam0[82]->f_4 = 3;
		(*iParam0)[92] = 9;
		iParam0[92]->f_4 = 1;
		(*iParam0)[102] = 9;
		iParam0[102]->f_4 = 2;
		(*iParam0)[112] = 10;
		iParam0[112]->f_4 = 3;
		(*iParam0)[122] = 9;
		iParam0[122]->f_4 = 3;
		(*iParam0)[132] = 8;
		iParam0[132]->f_4 = 3;
		(*iParam0)[142] = 5;
		iParam0[142]->f_4 = 2;
	}
	else if (Function_186(4))
	{
		(*iParam0)[02] = 8;
		iParam0[02]->f_4 = 1;
		(*iParam0)[12] = 10;
		iParam0[12]->f_4 = 2;
		(*iParam0)[22] = 11;
		iParam0[22]->f_4 = 0;
		(*iParam0)[32] = 9;
		iParam0[32]->f_4 = 3;
		(*iParam0)[42] = 9;
		iParam0[42]->f_4 = 1;
		(*iParam0)[52] = 12;
		iParam0[52]->f_4 = 2;
		(*iParam0)[62] = 11;
		iParam0[62]->f_4 = 0;
		(*iParam0)[72] = 11;
		iParam0[72]->f_4 = 2;
	}
	else if (Function_186(8))
	{
		(*iParam0)[02] = 12;
		iParam0[02]->f_4 = 1;
		(*iParam0)[12] = 0;
		iParam0[12]->f_4 = 2;
		(*iParam0)[22] = 5;
		iParam0[22]->f_4 = 0;
		(*iParam0)[32] = 3;
		iParam0[32]->f_4 = 3;
		(*iParam0)[42] = 8;
		iParam0[42]->f_4 = 1;
		(*iParam0)[52] = 0;
		iParam0[52]->f_4 = 2;
		(*iParam0)[62] = 3;
		iParam0[62]->f_4 = 0;
		(*iParam0)[72] = 1;
		iParam0[72]->f_4 = 2;
		(*iParam0)[82] = 1;
		iParam0[82]->f_4 = 3;
		(*iParam0)[92] = 0;
		iParam0[92]->f_4 = 1;
		(*iParam0)[102] = 0;
		iParam0[102]->f_4 = 2;
		(*iParam0)[112] = 1;
		iParam0[112]->f_4 = 3;
		(*iParam0)[122] = 1;
		iParam0[122]->f_4 = 3;
		(*iParam0)[132] = 2;
		iParam0[132]->f_4 = 3;
		(*iParam0)[142] = 2;
		iParam0[142]->f_4 = 2;
	}
	return;
}

void Function_240(int iParam0) //Position: 0x118F9 / 71929
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			iParam0[iVar22]->f_4 = iVar0;
			(*iParam0)[iVar22] = iVar1;
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	iParam0->f_420 = 0;
	return;
}

void Function_241(int iParam0) //Position: 0x11945 / 72005
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16++;
	return;
}

void Function_242(int iParam0) //Position: 0x11969 / 72041
{
	int iVar0;
	
	iParam0->f_2420 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1848)
	{
		if ((*iParam0 + 1848)[iVar09])
		{
			if (StackVal || (iParam0 + 488[(iParam0 + 488[StackVal113])->f_380 >= 0113])->f_380 > Local_37.f_124)
			{
				(*iParam0 + 2404)[iParam0->f_2420] = StackVal;
				iParam0->f_2420++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_243(int iParam0) //Position: 0x119EF / 72175
{
	struct<113> Var0;
	
}

void Function_244(bool bParam0) //Position: 0x11A44 / 72260
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	if (IS_ATTACHMENT_VALID((*bParam0 + 440)[0]))
	{
		REMOVE_OBJECT_ATTACHMENT((*bParam0 + 440)[0]);
	}
	iVar6 = ((bParam0 + 68[bParam0->f_37237])->f_128 - 2);
	Function_245(bParam0 + 68[bParam0->f_37237] + 84[iVar6]);
	vVar0 = { StackVal, StackVal, Function_245(bParam0 + 68[bParam0->f_37237] + 84[iVar6]) };
	GET_OBJECT_ORIENTATION((*bParam0 + 68[bParam0->f_37237] + 84)[iVar6], &vVar3);
	SET_OBJECT_POSITION((*bParam0 + 68[bParam0->f_37237] + 84)[iVar6 + 1], vVar0);
	SET_OBJECT_ORIENTATION((*bParam0 + 68[bParam0->f_37237] + 84)[iVar6 + 1], vVar3);
	return;
}

vector3 Function_245(int iParam0) //Position: 0x11AD9 / 72409
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_POSITION(*iParam0, &vVar3);
	GET_OBJECT_AXIS(*iParam0, &vVar0, 0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vVar3, StackVal) * Vector(0.02f, 0.02f, 0.02f), StackVal, StackVal) };
	vVar3.f_4 = (vVar3.y + 0.001f);
	return StackVal, StackVal, vVar3;
}

void Function_246(var uParam0, bool bParam1) //Position: 0x11B18 / 72472
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	
	SET_DRAW_ACTOR(bParam1, 1);
	SET_DRAW_OBJECT(bLocal_70, 1);
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	GET_ACTOR_AXIS(bParam1, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(-1.5f, -1.5f, -1.5f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1.25f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	fVar12 = 0.22f;
	fVar13 = 0.54f;
	vVar14 = { StackVal, StackVal, vVar0 };
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar14, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
	vVar14.f_4 = (vVar14.y + fVar13);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar9);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar14, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	Function_309(512);
	return;
}

void Function_247(bool bParam0) //Position: 0x11C02 / 72706
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	vector3 vVar6;
	struct<8> Var9;
	
	iVar0 = (bParam0 + 68[bParam0->f_37237])->f_128;
	Function_249(bParam0 + 1976);
	Var1 = { StackVal, Function_249(bParam0 + 1976) };
	Function_248(StackVal, bParam0 + 68[bParam0->f_37237], Var1);
	Function_245(bParam0 + 68[bParam0->f_37237] + 84[(iVar0 - 1)]);
	vVar3 = { StackVal, StackVal, Function_245(bParam0 + 68[bParam0->f_37237] + 84[(iVar0 - 1)]) };
	GET_OBJECT_ORIENTATION((*bParam0 + 68[bParam0->f_37237] + 84)[(iVar0 - 1)], &vVar6);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var1) };
	(*bParam0 + 68[bParam0->f_37237] + 84)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), &Var9, vVar3, vVar6, 1);
	(*bParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*bParam0 + 68[bParam0->f_37237] + 84)[iVar0], *bParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

void Function_248(var uParam0, struct<2> Param1) //Position: 0x11CD2 / 72914
{
	*uParam0[uParam0->f_1282] = { StackVal, Param1 };
	uParam0->f_128++;
	return;
}

struct<8> Function_249(int iParam0) //Position: 0x11CF0 / 72944
{
	iParam0->f_420++;
	return StackVal, *(iParam0[(iParam0->f_420 - 1)2]);
}

var Function_250(int iParam0, int iParam1) //Position: 0x11D0F / 72975
{
	int iVar0;
	int iVar1;
	struct<373> Var2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1848)
	{
		if ((*iParam0 + 1848)[iVar09])
		{
		}
	}
}

void Function_251(var uParam0, var uParam1, bool bParam2) //Position: 0x11D78 / 73080
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *uParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0.032f, 0.801f, -0.683f };
		vVar4 = { 180.0f, 0.0f, 180.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar4, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bVar0, vVar1, uParam1);
	}
	return;
}

void Function_252(var uParam0, var uParam1, bool bParam2) //Position: 0x11DC5 / 73157
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *uParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0.055f, 0.802f, -0.552f };
		vVar4 = { 0.009f, 0.0f, 360.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar4, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bVar0, vVar1, uParam1);
	}
	return;
}

void Function_253(bool bParam0) //Position: 0x11E12 / 73234
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	
	if (IS_ATTACHMENT_VALID((*bParam0 + 440)[0]))
	{
		REMOVE_OBJECT_ATTACHMENT((*bParam0 + 440)[0]);
	}
	iVar6 = StackVal;
	iVar7 = ((bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237])->f_128 - 2);
	Function_254(bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84[iVar7]);
	vVar0 = { StackVal, StackVal, Function_254(bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84[iVar7]) };
	GET_OBJECT_ORIENTATION((*bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84)[iVar7], &vVar3);
	SET_OBJECT_POSITION((*bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84)[iVar7 + 1], vVar0);
	SET_OBJECT_ORIENTATION((*bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84)[iVar7 + 1], vVar3);
	return;
}

vector3 Function_254(int iParam0) //Position: 0x11EFD / 73469
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_OBJECT_POSITION(*iParam0, &vVar3);
	GET_OBJECT_AXIS(*iParam0, &vVar0, 0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar3, StackVal) * Vector(0.015f, 0.015f, 0.015f), StackVal, StackVal) };
	GET_OBJECT_AXIS(*iParam0, &vVar6, 2);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar3, StackVal) * Vector(0.03f, 0.03f, 0.03f), StackVal, StackVal) };
	vVar3.f_4 = (vVar3.y + 0.001f);
	return StackVal, StackVal, vVar3;
}

void Function_255(int iParam0, bool bParam1) //Position: 0x11F5A / 73562
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	vector3 vVar6;
	struct<8> Var9;
	
	iVar0 = (iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_128;
	Function_249(iParam0 + 1976);
	Var1 = { StackVal, Function_249(iParam0 + 1976) };
	Function_248(StackVal, iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237], Var1);
	Function_245(iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84[(iVar0 - 1)]);
	vVar3 = { StackVal, StackVal, Function_245(iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84[(iVar0 - 1)]) };
	GET_OBJECT_ORIENTATION((*iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84)[(iVar0 - 1)], &vVar6);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var1) };
	(*iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), &Var9, vVar3, vVar6, 1);
	(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84)[iVar0], *iParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

void Function_256(bool bParam0) //Position: 0x1207E / 73854
{
	UI_LABEL_SET_VALUE(StackVal, Function_279(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, "nScores.s2", *(bParam0 + 68[bParam0->f_37237]), 0));
	return;
}

void Function_257(int iParam0) //Position: 0x120A5 / 73893
{
	(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 68[iParam0->f_37237] + 84)[0], *iParam0, "neck_attachment", "grab", 4294967295);
	(*iParam0 + 440)[1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 68[iParam0->f_37237] + 84)[1], *iParam0, "head_attachment", "grab", 4294967295);
	return;
}

var Function_258(var uParam0, int iParam1) //Position: 0x1211B / 74011
{
	int iVar0;
	
	iVar0 = iParam1 + 1;
	while (iVar0 < (*uParam0 - 1))
	{
		if ((*uParam0)[iVar09])
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*uParam0)[iVar09])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_259(int iParam0, int iParam1) //Position: 0x12166 / 74086
{
	int iVar0;
	bool bVar1;
	
	bVar1 = Function_279(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237]), 0);
	if ((iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_128 == 2)
	{
		if (StackVal != Function_264(Function_264(StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237][02])), *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237][12])) && (iParam0 + 488[iParam1113])->f_368 > 2)
		{
			iVar0 = Function_260(bVar1, (*iParam0 + 68[iParam0->f_37237])[12], 1);
			if ((*iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])[02] != 12 && (*iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])[12] != 12)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = Function_260(bVar1, (*iParam0 + 68[iParam0->f_37237])[12], 0);
		}
	}
	else
	{
		iVar0 = Function_260(bVar1, (*iParam0 + 68[iParam0->f_37237])[12], 0);
	}
	if (iVar0 == 2)
	{
		if ((iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_128 >= 2 && (iParam0 + 488[iParam1113])->f_380 < 0)
		{
			return 2;
		}
		return 0;
	}
	return iVar0;
}

int Function_260(bool bParam0, int iParam1, bool bParam2) //Position: 0x122D0 / 74448
{
	if (bParam2)
	{
		switch (iParam1)
		{
			case 0x0000000C:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x0000000B:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x0000000A:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000009:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000008:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000007:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000006:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000005:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 1;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 1;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000004:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 1;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 1;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 1;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 1;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000003:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 1;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 1;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 1;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 1;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000002:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 1;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 1;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 1;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000001:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 1;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 1;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 1;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
			
			case 0x00000000:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 1;
						break;
					
					case 0x00000005:
						return 4294967295;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 4294967295;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 4294967295;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 4294967295;
						break;
					
					case 0x0000000C:
						return 1;
						break;
					
					case 0x0000000D:
						return 4294967295;
						break;
					
					case 0x0000000E:
						return 1;
						break;
					
					case 0x0000000F:
						return 4294967295;
						break;
					
					case 0x00000010:
						return 1;
						break;
					
					case 0x00000011:
						return 4294967295;
						break;
					
					case 0x00000012:
						return 1;
						break;
					
					case 0x00000013:
						return 4294967295;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 4294967295;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 3;
						break;
					
					case 0x0000000E:
						return 3;
						break;
					
					case 0x0000000F:
						return 3;
						break;
					
					case 0x00000010:
						return 3;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000001:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 2;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 3;
						break;
					
					case 0x0000000E:
						return 3;
						break;
					
					case 0x0000000F:
						return 3;
						break;
					
					case 0x00000010:
						return 3;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000002:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 2;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 3;
						break;
					
					case 0x0000000D:
						return 3;
						break;
					
					case 0x0000000E:
						return 3;
						break;
					
					case 0x0000000F:
						return 3;
						break;
					
					case 0x00000010:
						return 3;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000003:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 2;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 3;
						break;
					
					case 0x0000000D:
						return 3;
						break;
					
					case 0x0000000E:
						return 3;
						break;
					
					case 0x0000000F:
						return 3;
						break;
					
					case 0x00000010:
						return 3;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000004:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 2;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 3;
						break;
					
					case 0x0000000D:
						return 3;
						break;
					
					case 0x0000000E:
						return 3;
						break;
					
					case 0x0000000F:
						return 3;
						break;
					
					case 0x00000010:
						return 3;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000005:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000006:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000007:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 2;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000008:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x00000009:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x0000000A:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x0000000B:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 2;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			
			case 0x0000000C:
				switch (bParam0)
				{
					case 0x00000000:
						return 4294967295;
						break;
					
					case 0x00000001:
						return 4294967295;
						break;
					
					case 0x00000002:
						return 4294967295;
						break;
					
					case 0x00000003:
						return 4294967295;
						break;
					
					case 0x00000004:
						return 0;
						break;
					
					case 0x00000005:
						return 0;
						break;
					
					case 0x00000006:
						return 0;
						break;
					
					case 0x00000007:
						return 0;
						break;
					
					case 0x00000008:
						return 0;
						break;
					
					case 0x00000009:
						return 0;
						break;
					
					case 0x0000000A:
						return 0;
						break;
					
					case 0x0000000B:
						return 0;
						break;
					
					case 0x0000000C:
						return 0;
						break;
					
					case 0x0000000D:
						return 0;
						break;
					
					case 0x0000000E:
						return 0;
						break;
					
					case 0x0000000F:
						return 0;
						break;
					
					case 0x00000010:
						return 0;
						break;
					
					case 0x00000011:
						return 3;
						break;
					
					case 0x00000012:
						return 3;
						break;
					
					case 0x00000013:
						return 3;
						break;
					
					case 0x00000014:
						return 3;
						break;
					
					case 0x00000015:
						return 3;
						break;
				}
				break;
			}
	}
	return 4294967295;
}

bool Function_261(int iParam0) //Position: 0x13D21 / 81185
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if ((*iParam0 + 1848)[iVar19])
		{
			iVar4 = StackVal;
			iVar2 = 0;
			while (iVar2 <= (iParam0 + 488[iVar4113])->f_368)
			{
				iVar3 = 0;
				while (iVar3 <= 2)
				{
					if ((((*iParam0 + 488[iVar4113] + 68[iVar237])[iVar32] != 8 || (*iParam0 + 488[iVar4113] + 68[iVar237])[iVar32] != 9) || (*iParam0 + 488[iVar4113] + 68[iVar237])[iVar32] != 10) || (*iParam0 + 488[iVar4113] + 68[iVar237])[iVar32] != 11)
					{
						bVar0++;
					}
					iVar3++;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	PRINTSTRING("AI_CHOOSE_INSURANCE_OR_NOT found ");
	PRINTINT(bVar0);
	PRINTSTRING(" tens.");
	PRINTNL();
	iVar5 = RAND_INT_RANGE(0, (100 - bVar0 * 5));
	if (iVar5 <= 50)
	{
		return 0;
	}
	return 1;
}

void Function_262(int iParam0, int iParam1) //Position: 0x13E3D / 81469
{
	(iParam0 + 488[iParam1113])->f_368++;
	Function_248(StackVal, iParam0 + 488[iParam1113] + 68[137], *(iParam0 + 488[iParam1113] + 68[037][12]));
	(*iParam0 + 488[iParam1113] + 68[137] + 84)[0] = (*iParam0 + 488[iParam1113] + 68[037] + 84)[1];
	(*iParam0 + 488[iParam1113] + 68[037] + 84)[1] = "";
	Function_263(iParam0 + 488[iParam1113] + 68[037]);
	(iParam0 + 488[iParam1113])->f_372 = 0;
	(*iParam0 + 488[iParam1113] + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[iParam1113] + 68[((iParam0 + 488[iParam1113])->f_368 - 2)37] + 84)[0], (*iParam0 + 488)[iParam1113], "elbow_l_attachment", "grab", 4294967295);
	(*iParam0 + 488[iParam1113] + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[iParam1113] + 68[((iParam0 + 488[iParam1113])->f_368 - 1)37] + 84)[0], (*iParam0 + 488)[iParam1113], "wrist_l_attachment", "grab", 4294967295);
	return;
}

void Function_263(int iParam0) //Position: 0x13F8A / 81802
{
	iParam0->f_128 = (iParam0->f_128 - 1);
	(*iParam0)[iParam0->f_1282] = 4294967295;
	iParam0[iParam0->f_1282]->f_4 = 4294967295;
	return;
}

int Function_264(int iParam0, int iParam1) //Position: 0x13FAE / 81838
{
	switch (iParam0)
	{
		case 0x00000000:
			return 2;
			break;
		
		case 0x00000001:
			return 3;
			break;
		
		case 0x00000002:
			return 4;
			break;
		
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 6;
			break;
		
		case 0x00000005:
			return 7;
			break;
		
		case 0x00000006:
			return 8;
			break;
		
		case 0x00000007:
			return 9;
			break;
		
		case 0x00000008:
			return 10;
			break;
		
		case 0x00000009:
			return 10;
			break;
		
		case 0x0000000A:
			return 10;
			break;
		
		case 0x0000000B:
			return 10;
			break;
		
		case 0x0000000C:
			return 11;
			break;
	}
	return 0;
}

void Function_265(int iParam0) //Position: 0x1409D / 82077
{
	if (IS_BUTTON_DOWN(Function_312(), 1, 1, 0) && !Function_186(64))
	{
		Function_269(StackVal, &bLocal_27, iParam0);
		Function_267(StackVal, iParam0);
		Function_309(64);
	}
	if (!IS_BUTTON_DOWN(Function_312(), 1, 1, 0) && Function_186(64))
	{
		if (Function_186(128))
		{
			Function_266(&bLocal_27, iParam0);
		}
		else
		{
			Function_286(&bLocal_27, iParam0, iParam0->f_1964);
		}
		UI_EXIT("nScores.s2");
		UI_EXIT("nBlackJack");
		Function_277(64);
	}
	if (IS_BUTTON_DOWN(Function_312(), 0, 1, 0) && !Function_186(128))
	{
		Function_266(&bLocal_27, iParam0);
		Function_309(128);
	}
	if (!IS_BUTTON_DOWN(Function_312(), 0, 1, 0) && Function_186(128))
	{
		if (Function_186(64))
		{
			Function_269(StackVal, &bLocal_27, iParam0);
		}
		else
		{
			Function_286(&bLocal_27, iParam0, iParam0->f_1964);
		}
		Function_277(128);
	}
	if (!Function_186(128) && !Function_186(64))
	{
		Function_270(&bLocal_27, iParam0, iParam0->f_1964);
	}
	return;
}

void Function_266(bool bParam0, int iParam1) //Position: 0x141B6 / 82358
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	
	GET_OBJECT_POSITION((*iParam1 + 68[iParam1->f_37237] + 84)[0], &vVar0);
	GET_OBJECT_AXIS((*iParam1 + 68[iParam1->f_37237] + 84)[1], &vVar3, 2);
	GET_OBJECT_AXIS((*iParam1 + 68[iParam1->f_37237] + 84)[1], &vVar6, 0);
	GET_OBJECT_AXIS((*iParam1 + 68[iParam1->f_37237] + 84)[1], &vVar9, 1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar0, StackVal) * Vector(0.7f, 0.7f, 0.7f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(-0.06f, -0.06f, -0.06f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar12, StackVal) * Vector(-0.2f, -0.2f, -0.2f), StackVal, StackVal) };
	fVar15 = 1.0f;
	switch (iParam1->f_1968)
	{
		case 0x00000000:
			fVar15 = -3.0f;
			break;
		
		case 0x00000001:
			fVar15 = 1.0f;
			break;
		
		case 0x00000002:
			fVar15 = 5.0f;
			break;
	}
	vVar19 = { StackVal, StackVal, vVar0 };
	GET_OBJECT_POSITION((*iParam1 + 68[iParam1->f_37237] + 84)[1], &vVar22);
	vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar22, vVar19, StackVal) };
	vVar16 = { StackVal, StackVal, Vector(vVar16, StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
	vVar16.f_4 = (vVar16.y - 0.1f);
	vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar6, vVar16, StackVal) * Vector(-0.045f, -0.045f, -0.045f), StackVal, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
	vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar16, StackVal) * Vector(0.2f, 0.2f, 0.2f), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_CAMERA_POSITION(*bParam0, vVar12);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar16, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(*bParam0, 0.2f);
	SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	Function_309(512);
	return;
}

void Function_267(int iParam0, int iParam1) //Position: 0x14353 / 82771
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 >= 4294967295)
	{
		bVar0 = Function_279(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237]), 0);
		bVar1 = Function_279(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237]), 1);
		if (Function_268(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])) < 0 && bVar1 == bVar0)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", "%s/%s", I2STR(bVar1), I2STR(bVar0), "");
			UI_EXIT("nScores.s2");
			UI_ENTER("nBlackJack");
			UI_LABEL_SET_TEXT("nBlackJack", "GENERIC_DBUFFER10_0");
			UI_ENTER("BlackJackLabel");
			UI_LABEL_SET_TEXT("BlackJackLabel", "BJ_PotLabel");
		}
		else
		{
			UI_ENTER("nScores.s2");
			UI_LABEL_SET_VALUE("nScores.s2", bVar0);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", "%s", I2STR(bVar0), "", "");
		}
	}
	return;
}

int Function_268(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) //Position: 0x144C0 / 83136
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_128)
	{
		iVar2 = Function_264(StackVal, Param0[iVar02]);
		if (iVar2 == 11)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_269(var uParam0, bool bParam1, int iParam2) //Position: 0x144FC / 83196
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	GET_OBJECT_POSITION((*bParam1 + 488[iParam2113] + 68[(bParam1 + 488[iParam2113])->f_37237] + 84)[0], &vVar0);
	GET_OBJECT_AXIS((*bParam1 + 488[iParam2113] + 68[(bParam1 + 488[iParam2113])->f_37237] + 84)[0], &vVar3, 2);
	GET_OBJECT_AXIS((*bParam1 + 488[iParam2113] + 68[(bParam1 + 488[iParam2113])->f_37237] + 84)[0], &uVar6, 0);
	GET_OBJECT_AXIS((*bParam1 + 488[iParam2113] + 68[(bParam1 + 488[iParam2113])->f_37237] + 84)[0], &uVar9, 1);
	vVar12 = { StackVal, StackVal, vVar0 };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar12, StackVal) * Vector(0.35f, 0.35f, 0.35f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 0.5f);
	vVar15 = { StackVal, StackVal, vVar0 };
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar15, StackVal) * Vector(0.1f, 0.1f, 0.1f), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar12);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar15, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(*uParam0, 0.3f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	Function_309(512);
	return;
}

void Function_270(bool bParam0, int iParam1, int iParam2) //Position: 0x1463D / 83517
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(*bParam0) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0))
	{
		SET_DRAW_ACTOR(*iParam1, 0);
		SET_DRAW_OBJECT(bLocal_70, 0);
		GET_ACTOR_AXIS(*iParam1, &vVar0, 0);
		GET_ACTOR_AXIS(*iParam1, &vVar3, 1);
		GET_ACTOR_AXIS(*iParam1, &vVar6, 2);
		GET_POSITION(*iParam1, &vVar9);
		fVar12 = 0.0f;
		fVar13 = 1.3f;
		fVar14 = 0.49f;
		fVar15 = 0.0f;
		fVar16 = 1.0f;
		fVar17 = -1.0f;
		vVar18 = { StackVal, StackVal, vVar9 };
		vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar18, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar18, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar18, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar21 = { StackVal, StackVal, vVar9 };
		vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar21, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar21, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar21, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		fVar24 = GET_STICK_X(Function_312(), 1, 1);
		if (fVar24 < -0.2f && fVar24 > 0.2f)
		{
			fVar24 = 0.0f;
		}
		fVar25 = GET_STICK_Y(Function_312(), 1, 1);
		if (fVar25 < -0.2f && fVar25 > 0.2f)
		{
			fVar25 = 0.0f;
		}
		fVar26 = (fVar24 * 2.0f);
		fVar27 = (fVar25 * 2.0f);
		if (iParam2 == 0)
		{
			fVar28 = (-1.0f * (1.0f - fLocal_20));
		}
		else if (iParam2 == 1)
		{
			fVar28 = (-1.0f * fLocal_20);
		}
		else if (iParam2 == 2)
		{
			fVar28 = (-1.0f * (fLocal_20 - 1.0f));
		}
		fVar29 = (fVar28 + fVar26);
		fVar30 = (-1.0f * fLocal_21);
		fVar31 = (fVar30 + fVar27);
		fVar32 = ((-fLocal_18 * 10.0f) * fLocal_16);
		fVar33 = ((-fLocal_19 * 10.0f) * fLocal_16);
		fVar34 = ((fLocal_18 + (fVar29 / 1.0f)) + fVar32);
		fVar35 = ((fLocal_19 + (fVar31 / 1.0f)) + fVar33);
		fVar36 = (fLocal_20 + (fVar34 * fLocal_16));
		fVar37 = (fLocal_21 + (fVar35 * fLocal_16));
		if (fVar36 > -0.375f)
		{
			fVar34 = 0.0f;
			fVar36 = -0.375f;
		}
		else if (fVar36 < 0.375f)
		{
			fVar34 = 0.0f;
			fVar36 = 0.375f;
		}
		if (fVar37 > -1.0f)
		{
			fVar35 = 0.0f;
			fVar37 = -1.0f;
		}
		else if (fVar37 < 1.0f)
		{
			fVar35 = 0.0f;
			fVar37 = 1.0f;
		}
		fLocal_18 = fVar34;
		fLocal_20 = fVar36;
		fLocal_19 = fVar35;
		fLocal_21 = fVar37;
		vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar21, StackVal) * Vector(fVar36, fVar36, fVar36), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
		}
		SET_CAMERA_POSITION(*bParam0, vVar18);
		SET_CAMERA_TARGET_POSITION(*bParam0, vVar21, 0);
		SET_CAMERA_FOV(*bParam0, 31.0f);
		Function_277(512);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	return;
}

void Function_271(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x148B3 / 84147
{
	if (bParam2 <= Local_37.f_124 || bParam3)
	{
		(iParam0 + 488[iParam1113])->f_380 = ((iParam0 + 488[iParam1113])->f_380 - bParam2);
		if (bParam3)
		{
			(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_140 = bParam2;
		}
		else
		{
			(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136 = ((iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136 + bParam2);
		}
		if ((iParam0 + 488[iParam1113])->f_380 == 0)
		{
			if (Function_186(32))
			{
				if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_All_In_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_All_In_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
				}
			}
			else if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_All_In", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_All_In", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/allin");
			(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS((iParam0 + 488[iParam1113])->f_416, (*iParam0 + 488)[iParam1113], "elbow_r_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		}
		else
		{
			if (Function_186(32))
			{
				if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
				}
			}
			else if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets", iParam0 + 488[iParam1113] + 4, Function_275(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			if ((iParam0 + 488[iParam1113])->f_372 == 0)
			{
				if (Function_186(32))
				{
					if (bParam2 > 25)
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/dd");
						if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_424))
						{
							(iParam0 + 488[iParam1113])->f_424 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_424, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
						}
					}
					else if (bParam2 > 10)
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/dd");
						if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_424))
						{
							(iParam0 + 488[iParam1113])->f_424 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_424, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
						}
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/dd");
						if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_424))
						{
							(iParam0 + 488[iParam1113])->f_424 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_424, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
						}
					}
				}
				else if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/bet");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_420))
					{
						(iParam0 + 488[iParam1113])->f_420 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_420, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
					}
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/bet");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_420))
					{
						(iParam0 + 488[iParam1113])->f_420 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_420, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
					}
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/bet");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_420))
					{
						(iParam0 + 488[iParam1113])->f_420 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_420, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
					}
				}
			}
			else if (Function_186(32))
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/sdd");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_432))
					{
						(iParam0 + 488[iParam1113])->f_432 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_432, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
					}
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/sdd");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_432))
					{
						(iParam0 + 488[iParam1113])->f_432 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_432, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
					}
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/sdd");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_432))
					{
						(iParam0 + 488[iParam1113])->f_432 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_432, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
					}
				}
			}
			else if (bParam2 > 25)
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/spb");
				if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_428))
				{
					(iParam0 + 488[iParam1113])->f_428 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_428, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
				}
			}
			else if (bParam2 > 10)
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/spb");
				if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_428))
				{
					(iParam0 + 488[iParam1113])->f_428 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_428, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
				}
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/spb");
				if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_428))
				{
					(iParam0 + 488[iParam1113])->f_428 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_428, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
				}
			}
		}
	}
}

int Function_272(int iParam0, bool bParam1, bool bParam2) //Position: 0x15536 / 87350
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (bParam1 < 0)
		{
			bParam1 = false;
		}
	}
	else if (bParam1 < Local_37.f_124)
	{
		bParam1 = Local_37.f_124;
	}
	if (bParam2)
	{
		iVar0 = StackVal;
		iVar1 = (iParam0 + 488[iVar0113])->f_372;
		if (bParam1 > ((iParam0 + 488[iVar0113] + 68[iVar137])->f_136 / 2))
		{
			bParam1 = ((iParam0 + 488[iVar0113] + 68[iVar137])->f_136 / 2);
		}
	}
	if (bParam1 > Local_37.f_120)
	{
		bParam1 = Local_37.f_120;
	}
	if (StackVal > (iParam0 + 488[bParam1113])->f_380)
	{
		bParam1 = (iParam0 + 488[StackVal113])->f_380;
	}
	return bParam1;
}

void Function_273(int iParam0) //Position: 0x155F4 / 87540
{
	fLocal_18 = 0.0f;
	fLocal_19 = 0.0f;
	if (iParam0 == 0)
	{
		fLocal_20 = -0.375f;
	}
	else if (iParam0 == 1)
	{
		fLocal_20 = 0.0f;
	}
	else if (iParam0 == 2)
	{
		fLocal_20 = 0.375f;
	}
	fLocal_21 = 0.0f;
	return;
}

bool Function_274() //Position: 0x1562C / 87596
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 100);
	if (iVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

var Function_275(bool bParam0) //Position: 0x15647 / 87623
{
	bool bVar0;
	
	bVar0 = Function_276();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_276() //Position: 0x1565E / 87646
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

void Function_277(int iParam0) //Position: 0x1571A / 87834
{
	Function_27(&uLocal_32, iParam0);
	return;
}

bool Function_278(int iParam0, int iParam1, int iParam2) //Position: 0x15727 / 87847
{
	int iVar0;
	
	switch (iParam2)
	{
		case 0x00000000:
			iVar0 = (iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136 * 2;
			break;
		
		case 0x00000001:
			iVar0 = (iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136;
			break;
		
		case 0x00000002:
			iVar0 = ((iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136 * 2 + FLOOR((IntToFloat((iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136) * 0.5f)));
			break;
		
		case 0x00000003:
			iVar0 = (iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_140 * 2;
			break;
	}
	if (StackVal == iParam1)
	{
		PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
	}
	(iParam0 + 488[iParam1113])->f_380 = ((iParam0 + 488[iParam1113])->f_380 + iVar0);
	if (iParam2 == 3)
	{
		(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_140 = 0;
	}
	else
	{
		(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_136 = 0;
	}
	return iVar0;
}

bool Function_279(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, bool bParam37) //Position: 0x15885 / 88197
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Param0.f_128)
	{
		iVar3 = Function_264(StackVal, Param0[iVar12]);
		if (iVar3 == 11)
		{
			iVar2++;
		}
		else
		{
			iVar0 = (iVar0 + iVar3);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= iVar2)
	{
		if ((iVar0 + 11 + ((iVar2 - iVar1) - 1)) >= 21 && !bParam37)
		{
			iVar0 += 11;
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int Function_280() //Position: 0x15906 / 88326
{
	return StackVal;
}

int Function_281() //Position: 0x1591A / 88346
{
	return (&Local_80 + 488[Function_280()113])->f_372;
}

void Function_282(int iParam0) //Position: 0x1592D / 88365
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= iParam0->f_1848)
		{
			if ((*iParam0 + 1848)[iVar09])
			{
				if ((iParam0 + 488[StackVal113])->f_368 == 1)
				{
					if (iVar1 == 0)
					{
						Function_284(StackVal, iParam0, &vVar2, &vVar5);
						SET_OBJECT_POSITION((*iParam0 + 488[(iParam0 + 488[iVar1113])->f_372113] + 68[StackVal37] + 84)[StackVal], vVar2);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[(iParam0 + 488[iVar1113])->f_372113] + 68[StackVal37] + 84)[StackVal], vVar5);
					}
					else if (iVar1 == 1)
					{
						Function_283(StackVal, iParam0, &vVar2, &vVar5);
						SET_OBJECT_POSITION((*iParam0 + 488[(iParam0 + 488[iVar1113])->f_372113] + 68[StackVal37] + 84)[StackVal], vVar2);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[(iParam0 + 488[iVar1113])->f_372113] + 68[StackVal37] + 84)[StackVal], vVar5);
					}
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	return;
}

void Function_283(int iParam0, int iParam1, var uParam2, var uParam3) //Position: 0x15A9B / 88731
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = (*iParam0 + 488)[iParam1113];
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, &vVar1);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar0), &vVar4);
		if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_hillb"))
		{
			*uParam2 = { 0.046f, 0.802f, -0.1505f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_gped"))
		{
			*uParam2 = { 0.046f, 0.802f, -0.1505f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else
		{
			*uParam2 = { 0.046f, 0.802f, -0.1505f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		UNK_0xF76F2BB3(uParam2, &vVar4, 0, 4);
		*uParam2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar1, *uParam2, StackVal) };
	}
}

void Function_284(int iParam0, int iParam1, var uParam2, var uParam3) //Position: 0x15B74 / 88948
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = (*iParam0 + 488)[iParam1113];
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, &vVar1);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar0), &vVar4);
		if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_hillb"))
		{
			*uParam2 = { 0.027f, 0.8f, -0.13f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_gped"))
		{
			*uParam2 = { 0.027f, 0.8f, -0.13f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else
		{
			*uParam2 = { 0.027f, 0.8f, -0.13f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		UNK_0xF76F2BB3(uParam2, &vVar4, 0, 4);
		*uParam2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar1, *uParam2, StackVal) };
	}
}

bool Function_285(int iParam0) //Position: 0x15C4D / 89165
{
	if ((iParam0 + 68[iParam0->f_37237])->f_128 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_286(bool bParam0, bool bParam1, int iParam2) //Position: 0x15C6A / 89194
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	
	SET_DRAW_ACTOR(*bParam1, 0);
	SET_DRAW_OBJECT(bLocal_70, 0);
	GET_ACTOR_AXIS(*bParam1, &vVar0, 0);
	GET_ACTOR_AXIS(*bParam1, &vVar3, 1);
	GET_ACTOR_AXIS(*bParam1, &vVar6, 2);
	GET_POSITION(*bParam1, &vVar9);
	fVar12 = 0.0f;
	fVar13 = 1.3f;
	fVar14 = 0.49f;
	if (iParam2 == 0)
	{
		fVar15 = -0.375f;
	}
	else if (iParam2 == 1)
	{
		fVar15 = 0.0f;
	}
	else if (iParam2 == 2)
	{
		fVar15 = 0.375f;
	}
	fVar16 = 1.0f;
	fVar17 = -1.0f;
	vVar18 = { StackVal, StackVal, vVar9 };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar18, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar18, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar18, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
	vVar21 = { StackVal, StackVal, vVar9 };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar21, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar21, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar21, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
	if (Function_186(512) || HUD_IS_FADED())
	{
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
		}
		SET_CAMERA_POSITION(*bParam0, vVar18);
		SET_CAMERA_TARGET_POSITION(*bParam0, vVar21, 0);
		SET_CAMERA_FOV(*bParam0, 31.0f);
		Function_277(512);
	}
	else
	{
		if (!IS_OBJECT_VALID(bLocal_28))
		{
			bLocal_28 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_12, Function_55());
		}
		if (!IS_OBJECT_VALID(bLocal_29))
		{
			bLocal_29 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_12, Function_55());
		}
		Function_287(bLocal_28);
		Function_287(bLocal_29);
		GET_CAMERA_POSITION(*bParam0, &vVar24);
		GET_CAMERA_DIRECTION(*bParam0, &vVar27);
		SET_CAMERASHOT_POSITION(bLocal_28, vVar24);
		SET_CAMERASHOT_DIRECTION(bLocal_28, vVar27, 0);
		SET_CAMERASHOT_FOV(bLocal_28, 31.0f);
		SET_CAMERASHOT_POSITION(bLocal_29, vVar18);
		SET_CAMERASHOT_TARGET_POSITION(bLocal_29, vVar21, 0);
		SET_CAMERASHOT_FOV(bLocal_29, 31.0f);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
		}
		ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*bParam0, bLocal_28, bLocal_29, 1.25f, 4294967295, 0);
		ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*bParam0, bLocal_29, 4294967295);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_287(bool bParam0) //Position: 0x15E6D / 89709
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

float Function_288(int iParam0) //Position: 0x15E7E / 89726
{
	if (Function_290(iParam0))
	{
		if (Function_289(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_289(int iParam0) //Position: 0x15F46 / 89926
{
	return Function_14(*iParam0, 2);
}

bool Function_290(int iParam0) //Position: 0x15F53 / 89939
{
	return Function_14(*iParam0, 1);
}

void Function_291(int iParam0) //Position: 0x15F60 / 89952
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		if ((*iParam0 + 1848)[iVar69])
		{
			iVar8 = StackVal;
			iVar7 = 0;
			while (iVar7 <= (iParam0 + 488[iVar8113] + 68[037])->f_128)
			{
				if (iVar7 == 0)
				{
					Function_284(iParam0, iVar8, &vVar0, &vVar3);
					REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7]);
					SET_OBJECT_POSITION((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7], vVar0);
					SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7], vVar3);
				}
				else
				{
					Function_283(iParam0, iVar8, &vVar0, &vVar3);
					REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7]);
					SET_OBJECT_POSITION((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7], vVar0);
					SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7], vVar3);
				}
				iVar7++;
			}
		}
		iVar6++;
	}
	iVar7 = 0;
	while (iVar7 <= (iParam0 + 68[037])->f_128)
	{
		if (iVar7 == 0)
		{
			Function_293(iParam0, &vVar0, &vVar3);
			REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 68[037] + 84)[iVar7]);
			SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[iVar7], vVar0);
			SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[iVar7], vVar3);
		}
		else
		{
			Function_292(iParam0, &vVar0, &vVar3);
			REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 68[037] + 84)[iVar7]);
			SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[iVar7], vVar0);
			SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[iVar7], vVar3);
		}
		iVar7++;
	}
	return;
}

void Function_292(int iParam0, var uParam1, bool bParam2) //Position: 0x16118 / 90392
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *iParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0.014f, 0.803f, -0.684f };
		vVar4 = { 0.0f, 180.0f, 0.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar4, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bVar0, vVar1, uParam1);
	}
	return;
}

void Function_293(int iParam0, var uParam1, bool bParam2) //Position: 0x16161 / 90465
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *iParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0.039f, 0.801f, -0.552f };
		vVar4 = { 0.0f, 0.0f, 180.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar4, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bVar0, vVar1, uParam1);
	}
	return;
}

void Function_294(bool bParam0) //Position: 0x161AA / 90538
{
	if (IS_ATTACHMENT_VALID((*bParam0 + 440)[0]))
	{
		REMOVE_OBJECT_ATTACHMENT((*bParam0 + 440)[0]);
	}
	if (IS_ATTACHMENT_VALID((*bParam0 + 440)[1]))
	{
		REMOVE_OBJECT_ATTACHMENT((*bParam0 + 440)[1]);
	}
	return;
}

int Function_295(int iParam0) //Position: 0x161E2 / 90594
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	switch (iLocal_71)
	{
		case 0x00000000:
			if (Function_299(iParam0, 0, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(*iParam0), "A", true);
			}
			if (Function_299(iParam0, 1, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(*iParam0), "B", true);
			}
			if (Function_299(iParam0, 2, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(*iParam0), "C", true);
			}
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "blackjack/Dealer/deal");
			iLocal_71 = 1;
			break;
		
		case 0x00000001:
			if (Function_299(iParam0, 0, 0) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/A1/deal_A_pre") || HUD_IS_FADED()))
			{
				Function_298(StackVal, iParam0);
			}
			else if (Function_299(iParam0, 1, 0) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/B1/deal_B_pre") || HUD_IS_FADED()))
			{
				Function_298(StackVal, iParam0);
			}
			else if (Function_299(iParam0, 2, 0) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/C1/deal_C_pre") || HUD_IS_FADED()))
			{
				Function_298(StackVal, iParam0);
			}
			else if ((iParam0 + 68[037])->f_128 != 0 && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/D1/deal_self_pre") || HUD_IS_FADED()))
			{
				Function_296(iParam0);
			}
			else if (Function_299(iParam0, 0, 1) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/A2/deal_A_pre") || HUD_IS_FADED()))
			{
				Function_255(StackVal, iParam0);
			}
			else if (Function_299(iParam0, 1, 1) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/B2/deal_B_pre") || HUD_IS_FADED()))
			{
				Function_255(StackVal, iParam0);
			}
			else if (Function_299(iParam0, 2, 1) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/C2/deal_C_pre") || HUD_IS_FADED()))
			{
				Function_255(StackVal, iParam0);
			}
			else if ((iParam0 + 68[037])->f_128 != 1 && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/D2/deal_self_pre") || HUD_IS_FADED()))
			{
				Function_247(iParam0);
			}
			if ((((((((IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/A1/deal_A_pst") || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/B1/deal_B_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/C1/deal_C_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/D1/deal_self_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/A2/deal_A_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/B2/deal_B_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/C2/deal_C_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/D2/deal_self_pst")) || HUD_IS_FADED())
			{
				Function_294(iParam0);
				if (!HUD_IS_FADED())
				{
					if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/A1/deal_A_pst"))
					{
						iVar0 = StackVal;
						Function_284(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/B1/deal_B_pst"))
					{
						iVar0 = StackVal;
						Function_284(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/C1/deal_C_pst"))
					{
						iVar0 = StackVal;
						Function_284(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/D1/deal_self_pst"))
					{
						Function_293(iParam0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/A2/deal_A_pst"))
					{
						iVar0 = StackVal;
						Function_283(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/B2/deal_B_pst"))
					{
						iVar0 = StackVal;
						Function_283(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/C2/deal_C_pst"))
					{
						iVar0 = StackVal;
						Function_283(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[1], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/D2/deal_self_pst"))
					{
						Function_292(iParam0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[1], vVar4);
					}
				}
				if (((iParam0 + 68[037])->f_128 != 2 && !IS_ATTACHMENT_VALID((*iParam0 + 440)[0])) && !IS_ATTACHMENT_VALID((*iParam0 + 440)[1]))
				{
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(*iParam0), "A");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(*iParam0), "B");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(*iParam0), "C");
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_296(int iParam0) //Position: 0x16A63 / 92771
{
	int iVar0;
	struct<8> Var1;
	vector3 vVar9;
	vector3 vVar12;
	struct<2> Var15;
	
	vVar9 = { 0.0f, 0.0f, 0.0f };
	vVar12 = { 0.0f, 0.0f, 0.0f };
	iVar0 = 0;
	Function_249(iParam0 + 1976);
	Var15 = { StackVal, Function_249(iParam0 + 1976) };
	Function_248(StackVal, iParam0 + 68[iParam0->f_37237], Var15);
	iParam0->f_368 = 1;
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var15) };
	if (iVar0 == 0)
	{
		vVar9 = { StackVal, StackVal, *(iParam0 + 452 + 12) };
		vVar12 = { StackVal, StackVal, *(iParam0 + 452 + 24) };
		vVar12.x = 180.0f;
	}
	else
	{
		Function_297(iParam0 + 68[iParam0->f_37237] + 84[0]);
		vVar9 = { StackVal, StackVal, Function_297(iParam0 + 68[iParam0->f_37237] + 84[0]) };
		GET_OBJECT_ORIENTATION((*iParam0 + 68[iParam0->f_37237] + 84)[0], &vVar12);
		vVar12.x = 0.0f;
	}
	(*iParam0 + 68[iParam0->f_37237] + 84)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), &Var1, vVar9, vVar12, 1);
	if (iVar0 == 0)
	{
		(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 68[iParam0->f_37237] + 84)[iVar0], *iParam0, "wrist_r_attachment", "grab", 4294967295);
	}
	else if (iVar0 == 1)
	{
		(*iParam0 + 440)[1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 68[iParam0->f_37237] + 84)[iVar0], *iParam0, "head_attachment", "grab", 4294967295);
	}
	return;
}

vector3 Function_297(int iParam0) //Position: 0x16BAA / 93098
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_OBJECT_POSITION(*iParam0, &vVar6);
	GET_OBJECT_AXIS(*iParam0, &vVar0, 0);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vVar6, StackVal) * Vector(0.02f, 0.02f, 0.02f), StackVal, StackVal) };
	GET_OBJECT_AXIS(*iParam0, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar6, StackVal) * Vector(0.11f, 0.11f, 0.11f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 0.002f);
	return StackVal, StackVal, vVar6;
}

void Function_298(int iParam0, int iParam1) //Position: 0x16C07 / 93191
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	struct<8> Var14;
	struct<2> Var22;
	
	iVar1 = (iParam0 + 488[iParam1113])->f_376;
	vVar2 = { 0.0f, 0.0f, 0.0f };
	vVar5 = { 0.0f, 0.0f, 0.0f };
	iVar0 = 0;
	Function_249(iParam0 + 1976);
	Var22 = { StackVal, Function_249(iParam0 + 1976) };
	Function_248(StackVal, iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237], Var22);
	(iParam0 + 488[1113])->f_368 = StackVal;
	Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var22) };
	if (iVar0 == 0)
	{
		GET_OBJECT_POSITION(StackVal, &vVar2);
		GET_OBJECT_AXIS(StackVal, &vVar8, 0);
		vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar2, StackVal) * Vector(0.1f, 0.1f, 0.1f), StackVal, StackVal) };
		GET_OBJECT_AXIS(StackVal, &vVar11, 2);
		vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar2, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
		vVar2.f_4 = StackVal;
		GET_OBJECT_ORIENTATION(StackVal, &vVar5);
		vVar5.f_4 = (vVar5.y + 180.0f);
	}
	else
	{
		Function_245(iParam0 + 488[(iParam0 + 488[0113])->f_372113] + 68[StackVal37] + 84[StackVal]);
		vVar2 = { StackVal, StackVal, Function_245(iParam0 + 488[(iParam0 + 488[0113])->f_372113] + 68[StackVal37] + 84[StackVal]) };
		GET_OBJECT_ORIENTATION((*iParam0 + 488[(iParam0 + 488[0113])->f_372113] + 68[StackVal37] + 84)[StackVal], &vVar5);
	}
	(*iParam0 + 488[(iParam0 + 488[iVar0113])->f_372113] + 68[CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), &Var14, vVar2, vVar5, 1)37] + 84)[StackVal] = StackVal;
	(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[(iParam0 + 488[iVar0113])->f_372113] + 68[StackVal37] + 84)[StackVal], *iParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

bool Function_299(int iParam0, int iParam1, int iParam2) //Position: 0x16E14 / 93716
{
	if (!(*iParam0 + 1848)[iParam19])
	{
		return 0;
	}
	if ((iParam0 + 488[0113] + 68[StackVal37])->f_128 == iParam2)
	{
		return 1;
	}
	return 0;
}

int Function_300(int iParam0) //Position: 0x16E50 / 93776
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1848)
	{
		if ((*iParam0 + 1848)[iVar09])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_301(var uParam0, int iParam1) //Position: 0x16E83 / 93827
{
	if (!Function_305(uParam0, iParam1))
	{
		Function_302(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_302(var uParam0, int iParam1) //Position: 0x16E9E / 93854
{
	Function_78(uParam0[Function_304(iParam1)], Function_303(iParam1));
	return;
}

int Function_303(int iParam0) //Position: 0x16EB5 / 93877
{
	return Function_146((iParam0 % 32));
}

int Function_304(int iParam0) //Position: 0x16EC3 / 93891
{
	return (iParam0 / 32);
}

bool Function_305(var uParam0, int iParam1) //Position: 0x16ECE / 93902
{
	return Function_14((*uParam0)[Function_304(iParam1)], Function_303(iParam1));
}

void Function_306(bool bParam0, bool bParam1) //Position: 0x16EE5 / 93925
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	vector3 vVar21;
	
	SET_DRAW_ACTOR(bParam1, 1);
	SET_DRAW_OBJECT(bLocal_70, 1);
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar6, 0);
	GET_ACTOR_AXIS(bParam1, &vVar9, 1);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	fVar12 = -1.23f;
	fVar13 = 1.38f;
	fVar14 = -2.12f;
	fVar15 = 0.11f;
	fVar16 = 1.1f;
	fVar17 = -0.58f;
	vVar18 = { StackVal, StackVal, vVar0 };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar18, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar18, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar18, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
	vVar21 = { StackVal, StackVal, vVar0 };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar21, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar21, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar21, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_CAMERA_POSITION(*bParam0, vVar18);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar21, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	Function_309(512);
	return;
}

void Function_307(int iParam0) //Position: 0x17010 / 94224
{
	Function_308(iParam0, 0.0f);
	return;
}

void Function_308(var uParam0, float fParam1) //Position: 0x1701C / 94236
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_78(uParam0, 1);
	Function_27(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_309(int iParam0) //Position: 0x1703D / 94269
{
	Function_78(&uLocal_32, iParam0);
	return;
}

void Function_310() //Position: 0x1704A / 94282
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_311(var uParam0) //Position: 0x1705C / 94300
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*uParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

int Function_312() //Position: 0x1707B / 94331
{
	bool bVar0;
	
	bVar0 = Function_28();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_313(int iParam0) //Position: 0x17095 / 94357
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1848)
	{
		if ((*iParam0 + 1848)[iVar09])
		{
			if (IS_ATTACHMENT_VALID((iParam0 + 488[StackVal113])->f_436))
			{
				if (StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[(StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 488)[IS_ACTION_NODE_PLAYING((*iParam0 + 488)[StackVal113], "blackjack/Player/bet/small_pst")113], "blackjack/Player/bet/allin_pst"))113], "blackjack/Player/bet/allin_B_pst"))113], "blackjack/Player/bet/B/bet_pst"))113], "blackjack/Player/bet/B/dd_pst"))113], "blackjack/Player/bet/B/sdd_pst"))113], "blackjack/Player/bet/B/spb_pst"))113], "blackjack/Player/bet/G/bet_pst"))113], "blackjack/Player/bet/G/dd_pst"))113], "blackjack/Player/bet/G/sdd_pst"))113], "blackjack/Player/bet/G/spb_pst"))113], "blackjack/Player/bet/R/bet_pst"))113], "blackjack/Player/bet/R/dd_pst"))113], "blackjack/Player/bet/R/sdd_pst"))113], "blackjack/Player/bet/R/spb_pst"))
				{
					REMOVE_OBJECT_ATTACHMENT((iParam0 + 488[StackVal113])->f_436);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_314(bool bParam0, int iParam1, int iParam2) //Position: 0x1742A / 95274
{
	int iVar0;
	vector3 vVar1;
	struct<8> Var4;
	
	iVar0 = 0;
	while (iVar0 <= bParam0->f_1848)
	{
		if ((*bParam0 + 1848)[iVar09])
		{
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_317((bParam0 + 488[StackVal113])->f_380) };
			if (!STRINGS_ARE_EQUAL(StackVal, bParam0 + 488[&Var4113] + 384))
			{
				GET_OBJECT_POSITION((bParam0 + 488[StackVal113])->f_416, &vVar1);
				if ((!CAMERA_IS_VISIBLE_POINT(bLocal_27, vVar1, 1065353216, 1117126656, 1, 1, 0) || HUD_IS_FADED()) || iParam1)
				{
					Function_315(StackVal, bParam0, iParam2);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_315(int iParam0, bool bParam1, int iParam2) //Position: 0x174DB / 95451
{
	vector3 vVar0;
	vector3 vVar3;
	
	PRINTSTRING("Updating Chip Stack for Player # ");
	PRINTINT(bParam1);
	PRINTNL();
	if (IS_OBJECT_VALID((iParam0 + 488[bParam1113])->f_416))
	{
		PRINTSTRING("Destroying Existing ChipStack");
		PRINTNL();
		DESTROY_OBJECT((iParam0 + 488[bParam1113])->f_416);
		while (IS_OBJECT_VALID((iParam0 + 488[bParam1113])->f_416) && !IS_EXITFLAG_SET())
		{
			PRINTSTRING("Waiting for ChipStack to be Destroyed...");
			PRINTNL();
		}
	}
	if ((iParam0 + 488[bParam1113])->f_380 >= 0)
	{
		*(iParam0 + 488[bParam1113] + 384) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_317((iParam0 + 488[bParam1113])->f_380) };
		if (StackVal != bParam1 && iParam2)
		{
			Function_316(iParam0, bParam1, &vVar0, &vVar3, 1);
		}
		else
		{
			Function_316(iParam0, bParam1, &vVar0, &vVar3, 0);
		}
		(iParam0 + 488[bParam1113])->f_416 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), iParam0 + 488[bParam1113] + 384, vVar0, vVar3, 0);
		PRINTSTRING("Spawning New ChipStack at ");
		PRINTVECTOR(vVar0);
		PRINTNL();
	}
	else
	{
		strcpy(iParam0 + 488[bParam1113] + 384, "", 32);
	}
	return;
}

void Function_316(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x17669 / 95849
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	bVar0 = (*iParam0 + 488)[bParam1113];
	if (IS_ACTOR_VALID(bVar0))
	{
		if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_hillb"))
		{
			vVar1 = { 0.0f, 0.8f, -0.0649f };
			vVar4 = { 0.0f, 180.0f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_gped"))
		{
			vVar1 = { 0.269f, 0.8f, -0.175f };
			vVar4 = { 0.0f, 180.0f, 0.0f };
		}
		else if (bParam4)
		{
			vVar1 = { 0.3958f, 0.8f, -0.3682f };
			vVar4 = { 0.0f, -169.867f, 0.0f };
		}
		else
		{
			vVar1 = { 0.268f, 0.8f, -0.181f };
			vVar4 = { 0.0f, -169.867f, 0.0f };
		}
		if (bParam4)
		{
			bVar7 = StackVal;
			GET_OBJECT_RELATIVE_ORIENTATION(bVar7, vVar4, bParam3);
			GET_OBJECT_RELATIVE_POSITION(bVar7, vVar1, uParam2);
		}
		else
		{
			GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar4, bParam3);
			GET_OBJECT_RELATIVE_POSITION(bVar0, vVar1, uParam2);
		}
	}
}

struct<32> Function_317(int iParam0) //Position: 0x17788 / 96136
{
	bool bVar0;
	char* cVar1[32];
	
	bVar0 = (iParam0 / 50);
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	else if (bVar0 >= 25)
	{
		bVar0 = 25;
	}
	strcpy(&cVar1, Function_176(bVar0), 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

void Function_318() //Position: 0x177BC / 96188
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_319())
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Dealer/cards_idle");
				Function_314(&Local_80, 0, 0);
				if (!IS_OBJECT_VALID(bLocal_70))
				{
					bLocal_70 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_55(), "$/fragments/p_gen_cards02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					ATTACH_OBJECTS_USING_LOCATOR(bLocal_70, GET_OBJECT_FROM_ACTOR(Local_80), "elbow_l_attachment", "grab", 4294967295);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_70, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_70, GET_OBJECT_FROM_ACTOR(Local_80), 0);
				}
				if ((*&Local_80 + 1848)[09])
				{
					Local_80.f_1972 = 0;
					Local_80.f_1964 = 0;
				}
				else if ((*&Local_80 + 1848)[19])
				{
					Local_80.f_1972 = 1;
					Local_80.f_1964 = 1;
				}
				else
				{
					Local_80.f_1972 = 2;
					Local_80.f_1964 = 2;
				}
				Function_309(512);
				Function_286(&bLocal_27, &Local_80, Local_80.f_1964);
				Function_307(&iLocal_24);
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			UI_ENTER("Scores");
			UI_ENTER("nScores.s0");
			UI_ENTER("nScores.s1");
			UI_EXIT("nScores.s2");
			UI_EXIT("nBlackJack");
			UI_EXIT("BlackJackLabel");
			UI_LABEL_SET_TEXT("nScores.s0", "BJ_CashLabel");
			UI_LABEL_SET_TEXT("nScores.s1", "BJ_BetLabel");
			UI_LABEL_SET_TEXT("nScores.s2", "BJ_PotLabel");
			UI_LABEL_SET_VALUE("nScores.s1", false);
			iLocal_0 = 1;
			iLocal_76 = 1;
			break;
	}
	return;
}

bool Function_319() //Position: 0x179A1 / 96673
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	switch (iLocal_11)
	{
		case 0x000003E8:
			iLocal_11 = 1005;
			if (IS_VOLUME_VALID(bLocal_13))
			{
				if (IS_OBJECTSET_VALID(iLocal_14))
				{
					Function_334(iLocal_14);
				}
				else
				{
					iLocal_14 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), bLocal_12, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_13, iLocal_14, 0, 1);
				bVar0 = false;
				while (bVar0 <= iVar1)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iLocal_14));
					if (!Function_333(bVar2))
					{
						if (((IS_ACTOR_HOGTIED(bVar2) || IS_ACTOR_CRIPPLED(bVar2, 5)) || IS_ACTOR_VEHICLE(bVar2)) || IS_ACTOR_HORSE(bVar2))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_11 = 1004;
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(bLocal_13))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(bLocal_13);
					if (IS_OBJECTSET_VALID(iLocal_14))
					{
						Function_334(iLocal_14);
					}
					else
					{
						iLocal_14 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), bLocal_12, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_13, iLocal_14, 0, 1);
					bVar0 = false;
					while (bVar0 <= iVar1)
					{
						bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iLocal_14));
						if (!Function_333(bVar2))
						{
							if (((IS_ACTOR_HOGTIED(bVar2) || IS_ACTOR_CRIPPLED(bVar2, 5)) || IS_ACTOR_VEHICLE(bVar2)) || IS_ACTOR_HORSE(bVar2))
							{
								DESTROY_ACTOR(bVar2);
							}
						}
						bVar0++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_11 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (Global_30616 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
			{
				Local_22 = { StackVal, Global_6614[122] };
			}
			else if (Global_30616 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
			{
				Local_22 = { StackVal, Global_6402[142] };
			}
			else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
			{
				Local_22 = { StackVal, Global_6815[112] };
			}
			else if (Global_30616 == FIND_NAMED_LAYOUT("BlackWater_layout"))
			{
				Local_22 = { StackVal, Global_7035[342] };
			}
			if (!Function_332(&Local_22))
			{
				if (Global_30616 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
				{
					Function_329(&Global_6614, &Global_7657, 12, 0, 0, 1);
				}
				else if (Global_30616 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
				{
					Function_329(&Global_6402, &Global_7343, 14, 0, 0, 1);
				}
				else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
				{
					Function_329(&Global_6815, &Global_7954, 11, 0, 0, 1);
				}
				else if (Global_30616 == FIND_NAMED_LAYOUT("BlackWater_layout"))
				{
					Function_329(&Global_7035, &Global_8279, 34, 0, 0, 1);
				}
			}
			if (Function_332(&Local_22))
			{
				bVar0 = false;
				while (StackVal <= bVar0)
				{
					if (IS_ACTOR_VALID((*&Local_37 + 8)[bVar0]))
					{
						Function_325((*&Local_37 + 8)[bVar0], &Local_80, bVar0, (*&Local_37 + 76)[bVar0], GET_ACTOR_ENUM_STRING((*&Local_37 + 8)[bVar0]));
					}
					bVar0++;
				}
				SET_DRAW_ACTOR(StackVal, 0);
				SET_DRAW_OBJECT(bLocal_70, 0);
				bVar0 = false;
				while (bVar0 <= 3)
				{
					Function_324(GET_GRINGO_FROM_OBJECT(StackVal));
					bVar0++;
				}
				Function_314(&Local_80, 1, 1);
				Function_323();
				SAY_SINGLE_LINE_CONTEXT((*&Local_80 + 488)[StackVal113], 454, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MAKE_ACTOR_READY_FOR_ACTION(StackVal, 1);
				iLocal_11 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_28(), "blackjack/Player/idle") && Function_322())
			{
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(StackVal)))
			{
				Function_320(StackVal, &Local_80);
			}
			break;
	}
	return 0;
}

void Function_320(bool bParam0, int iParam1) //Position: 0x17D68 / 97640
{
	if (!iParam1->f_452)
	{
		iParam1->f_452 = 1;
		Function_321(iParam1, bParam0);
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, "nblackjack", 0);
		while (!ACTOR_HAS_ANIM_SET(bParam0, "nblackjack") && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
		SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 1, 0, 0);
		TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 1, 1);
	}
	return;
}

void Function_321(int iParam0, char* cParam1) //Position: 0x17DF5 / 97781
{
	*iParam0 = cParam1;
	iParam0->f_376 = 0;
	Function_227(iParam0 + 68, 2);
	iParam0->f_380 = 1000;
	strcpy(iParam0 + 4, "Dealer", 64);
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
	return;
}

int Function_322() //Position: 0x17E2D / 97837
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<5> Var6;
	
	uVar2 = GET_ASSET_ID("$/fragments/p_gen_cards02x", 0);
	uVar3 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	uVar4 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	uVar5 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	if (!UNK_0x9D20BDC4("numberSystem"))
	{
		return 0;
	}
	if (!HAS_STRING_TABLE_LOADED("nminigames"))
	{
		return 0;
	}
	if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK"))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(uVar2))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(uVar5))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(uVar4))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(uVar3))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var6 = iVar0;
			Var6.f_4 = iVar1;
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var6) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&Var8, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

void Function_323() //Position: 0x17FA6 / 98214
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(4))
	{
		Function_309(256);
		Function_185(4, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_ACTOR_VALID((*&Local_37 + 8)[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_37 + 8)[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_37 + 8)[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_37 + 8)[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_37 + 8)[iVar0], 4, true);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_37 + 8)[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		bVar1 = (*&Local_37 + 8)[iVar0];
		if (IS_ACTOR_VALID(bVar1) && !IS_ACTOR_HUMAN(bVar1))
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar1, 26, false);
		}
		iVar0++;
	}
	Function_277(1024);
	if (UNK_0xE094DB31(Function_28(), 1))
	{
		Function_309(1024);
		DEEQUIP_ACCESSORY(Function_28(), 1);
	}
	return;
}

void Function_324(bool bParam0) //Position: 0x1806E / 98414
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
			if (IS_PHYSINST_VALID(bVar3))
			{
				HIDE_PHYSINST(bVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			bVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar4, bParam0);
			if (IS_PHYSINST_VALID(bVar5))
			{
				HIDE_PHYSINST(bVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_325(bool bParam0, int iParam1, bool bParam2, var uParam3, var uParam4) //Position: 0x18156 / 98646
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam2 != 4294967295 && !(*iParam1 + 1848)[bParam29])
	{
		PRINTSTRING("Adding player at specific seat ");
		PRINTINT(bParam2);
		PRINTNL();
		Function_327(iParam1 + 488[iParam1->f_1960113], bParam0, bParam2, uParam3, uParam4);
		(*iParam1 + 1848)[bParam29] = 1;
		(iParam1 + 1848[bParam29])->f_4 = iParam1->f_1960;
		iParam1->f_1960++;
		if (bParam0 == GET_PLAYER_ACTOR(0))
		{
			iParam1->f_1968 = bParam2;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			bVar0 = GET_OBJECT_FROM_ACTOR(bParam0);
			Function_326(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_27));
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "nblackjack", 0);
			while (!ACTOR_HAS_ANIM_SET(bParam0, "nblackjack") && !IS_EXITFLAG_SET())
			{
				WAIT(0);
			}
			SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 0, 0, 1);
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 4294967295, 1);
		}
		else
		{
			bVar1 = RAND_INT_RANGE(0, 2);
			switch (bVar1)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "nblackjack", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "nblackjack") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "blackjack_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "blackjack_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "blackjack_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "blackjack_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
			}
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 1, 1);
			TASK_PRIORITY_SET(bParam0, 1);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "blackjack/Player/idle");
		}
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_326(var uParam0, bool bParam1) //Position: 0x183EC / 99308
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = -0.2f;
		fVar13 = 1.0f;
		fVar14 = -1.5f;
		fVar15 = -0.05f;
		fVar16 = 1.11f;
		fVar17 = -0.4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_327(int iParam0, bool bParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x1855F / 99679
{
	if (!AI_IGNORE_ACTOR(bParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(bParam1, 1);
	*iParam0 = bParam1;
	iParam0->f_376 = uParam2;
	if (*iParam0 == GET_PLAYER_ACTOR(0))
	{
		Function_328((iParam3 / 10), 0);
		strcpy(iParam0 + 4, "BJ_Player_Name", 64);
	}
	else
	{
		strcpy(iParam0 + 4, cParam4, 64);
	}
	Function_227(iParam0 + 68, 2);
	iParam0->f_368 = 0;
	iParam0->f_372 = 0;
	iParam0->f_380 = iParam3;
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
}

int Function_328(bool bParam0, bool bParam1) //Position: 0x185F7 / 99831
{
	bool bVar0;
	
	bVar0 = Function_68(0);
	if ((Function_68(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_118(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_68(0));
	return 1;
}

var Function_329(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x18687 / 99975
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_194(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_194(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_194(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_191(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_331(StackVal, StackVal, StackVal, Global_6289, Function_55(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_194(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_191(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_191(uParam0[iVar02], 1);
	Function_330(StackVal, 1);
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

int Function_330(bool bParam0, bool bParam1) //Position: 0x1881D / 100381
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
			TASK_PRIORITY_SET(bVar0, 1);
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

var Function_331(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x188BF / 100543
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_55(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

bool Function_332(int iParam0) //Position: 0x189D8 / 100824
{
	return Function_194(iParam0, 1);
}

bool Function_333(bool bParam0) //Position: 0x189E4 / 100836
{
	int iVar0;
	
	if (bParam0 == Function_28())
	{
		return 1;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_37 + 8)[iVar0]))
		{
			if (bParam0 == (*&Local_37 + 8)[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (StackVal == bParam0)
	{
		return 1;
	}
	return 0;
}

void Function_334(int iParam0) //Position: 0x18A32 / 100914
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(iParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0);
		}
		CLEAN_OBJECTSET(iParam0);
	}
	return;
}

void Function_335(int iParam0) //Position: 0x18A6A / 100970
{
	iParam0->f_1960 = 0;
	iParam0->f_1964 = 0;
	iParam0->f_1972 = 0;
	iParam0->f_2400 = 0;
	Function_240(iParam0 + 1976);
	Function_239(iParam0 + 1976);
	Function_337(iParam0 + 1848);
	Function_336(iParam0 + 452);
	return;
}

void Function_336(int iParam0) //Position: 0x18AA8 / 101032
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	*iParam0 = 0;
	vVar0 = { StackVal, StackVal, *(&Local_37 + 64) };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	iParam0->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &vVar0, 3.0f, 1));
	while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
	{
		iParam0->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &vVar0, 3.0f, 1));
		WAIT(0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		Function_324(GET_GRINGO_FROM_OBJECT(StackVal));
	}
	iParam0->f_4 = 4294967295;
	*(iParam0 + 12) = { StackVal, StackVal, *(&Local_37 + 92) };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	iVar6 = 3;
	UNK_0x44986367(StackVal, (&vVar3 + (-90.0f * IntToFloat(iVar6))));
	*(iParam0 + 12) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, *(iParam0 + 12), StackVal) * Vector(0.1f, 0.1f, 0.1f), StackVal, StackVal) };
	*(iParam0 + 24) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 12), *(&Local_37 + 92), StackVal) };
	(iParam0 + 24)->f_4 = UNK_0x9C40E671(iParam0 + 24);
	UNK_0x44986367(StackVal, &vVar3);
	*(iParam0 + 12) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, *(iParam0 + 12), StackVal) * Vector(0.1f, 0.1f, 0.1f), StackVal, StackVal) };
	return;
}

void Function_337(var uParam0) //Position: 0x18BC5 / 101317
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		(*uParam0)[iVar09] = 0;
		vVar10 = { StackVal, StackVal, *(&Local_37 + 24[iVar03]) };
		uParam0[iVar09]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar10, 0.5f, 0));
		while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
		{
			uParam0[iVar09]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar10, 0.5f, 0));
			WAIT(0);
		}
		uParam0[iVar09]->f_4 = 4294967295;
		GET_OBJECT_POSITION(StackVal, &vVar1);
		GET_OBJECT_AXIS(StackVal, &vVar4, 0);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(0.1f, 0.1f, 0.1f), StackVal, StackVal) };
		GET_OBJECT_AXIS(StackVal, &vVar7, 2);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, vVar1, StackVal) * Vector(0.4f, 0.4f, 0.4f), StackVal, StackVal) };
		*(uParam0[iVar09] + 12) = { StackVal, StackVal, vVar1 };
		(uParam0[iVar09] + 12)->f_4 = StackVal;
		GET_OBJECT_ORIENTATION(StackVal, uParam0[iVar09] + 24);
		(uParam0[iVar09] + 24)->f_4 = (StackVal + 180.0f);
		iVar0++;
	}
	return;
}

void Function_338() //Position: 0x18D56 / 101718
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	
	UI_EXIT("BJ_Help");
	UI_PUSH("Minigame");
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	uVar0 = GET_ASSET_ID("$/fragments/p_gen_cards02x", 0);
	STREAMING_REQUEST_PROP(uVar0, true);
	uVar1 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	STREAMING_REQUEST_PROP(uVar1, true);
	uVar2 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	STREAMING_REQUEST_PROP(uVar2, true);
	uVar3 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	STREAMING_REQUEST_PROP(uVar3, true);
	iVar4 = 0;
	while (iVar4 <= 13)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			Var6 = iVar4;
			Var6.f_4 = iVar5;
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var6) };
			STREAMING_REQUEST_PROP(GET_ASSET_ID(&Var8, 0), true);
			iVar5++;
		}
		iVar4++;
	}
	return;
}

bool Function_339() //Position: 0x18EA0 / 102048
{
	bool bVar0;
	char* cVar1[32];
	
	if (!HAS_ANIM_SET_LOADED("blackjack_hillb"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("blackjack_gped"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("nblackjack"))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar1, Function_176(bVar0), 32);
		if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar1, 0)))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void Function_340(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x18F22 / 102178
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_341() //Position: 0x18FA7 / 102311
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_342(var uParam0, bool bParam1) //Position: 0x18FB3 / 102323
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = -0.2f;
		fVar13 = 1.0f;
		fVar14 = -1.75f;
		fVar15 = -0.05f;
		fVar16 = 1.14f;
		fVar17 = -0.4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_343() //Position: 0x19126 / 102694
{
	int iVar0;
	
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(1);
	Function_348();
	bLocal_12 = CREATE_LAYOUT(Function_55());
	Function_347();
	Function_277(513);
	Function_345(&uLocal_30);
	if (Function_229(4, 2))
	{
		Function_311(&uLocal_30);
	}
	Function_344(&iLocal_24);
	Function_344(&iLocal_72);
	bLocal_27 = CREATE_CAMERA_IN_LAYOUT(bLocal_12, "blackJackCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(bLocal_27, "nblackjack");
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_27);
	bLocal_13 = CREATE_VOLUME_IN_LAYOUT(bLocal_12, "BlackJack_StayOutvol", 2, *(&Local_37 + 92), 0.0f, 0.0f, 0.0f, 3.0f, 5.0f, 3.0f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_ACTOR_VALID((*&Local_37 + 8)[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_37 + 8)[iVar0], 1);
			REFERENCE_ACTOR((*&Local_37 + 8)[iVar0]);
			CLEAR_LAST_HIT((*&Local_37 + 8)[iVar0]);
		}
		iVar0++;
	}
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(StackVal, 1);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_13);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_13);
	iLocal_0 = 99;
	return;
}

void Function_344(int iParam0) //Position: 0x19219 / 102937
{
	if (!Function_290(iParam0))
	{
		Function_308(iParam0, 0.0f);
	}
	return;
}

void Function_345(int iParam0) //Position: 0x1922E / 102958
{
	Function_346(iParam0);
	return;
}

void Function_346(var uParam0) //Position: 0x19239 / 102969
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_347() //Position: 0x19258 / 103000
{
	int iVar0;
	char* cVar1[32];
	
	REQUEST_ANIM_SET("blackjack_hillb", 0);
	REQUEST_ANIM_SET("blackjack_gped", 0);
	REQUEST_ANIM_SET("nblackjack", 0);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&cVar1, Function_176(iVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar1, 0), true);
		iVar0++;
	}
	return;
}

void Function_348() //Position: 0x192C0 / 103104
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_180();
	Function_349();
	if (!Global_3384)
	{
		Global_3384 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_349() //Position: 0x192F0 / 103152
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

