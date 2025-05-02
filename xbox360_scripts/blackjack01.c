//Decompiled with MagicRDR v1.0
//Function Count : 343
//Statics Count : 719
//Natives Count : 382
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
	bool bLocal_14 = false;
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
	fLocal_34 = 0,2f;
	iLocal_35 = 0;
	iLocal_71 = 0;
	Local_37 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_336();
	while (Function_214())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_37 };
		Function_190();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x47 / 71
{
	int iVar0;
	
	Function_188(&Local_80);
	if (Global_30616 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
	{
		Function_180(&Global_6614, &Global_7657, 11, 0);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
	{
		Function_180(&Global_6402, &Global_7343, 14, 0);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_180(&Global_6815, &Global_7954, 11, 0);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BlackWater_layout"))
	{
		Function_180(&Global_7035, &Global_8279, 34, 0);
	}
	SET_ANIMATION_OVERRIDE_SCALE(Local_80, 1.0f);
	if (Function_179(256))
	{
		Function_178(4, 1);
	}
	Function_188(&Local_80);
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
	SET_DRAW_ACTOR(Local_80, true);
	SET_DRAW_OBJECT(bLocal_70, 1);
	UI_EXIT("Scores");
	UI_EXIT("nBlackJack");
	UI_EXIT("BlackJackLabel");
	UI_EXIT("BetPanel");
	UI_EXIT("BJ_Help");
	Function_176();
	SET_HUD_MAP_DRAW_ENABLED(1);
	ENABLE_PIP(0, 0, 0);
	Function_172();
	Function_171(1);
	ACTOR_DISMOUNT_NOW(GET_PLAYER_ACTOR(0));
	Function_168();
	RELEASE_LAYOUT_REF(bLocal_12);
	if (iLocal_2)
	{
		Function_32(Local_37, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_28(Local_37);
		if (!Function_27(Global_76846, 512))
		{
			Function_20(Function_26(), 512, 1, 0);
		}
	}
	else
	{
		Function_2(Local_37);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1);
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
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

void Function_10(bool bParam0) //Position: 0x406 / 1030
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x459 / 1113
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

struct<16> Function_12(int iParam0) //Position: 0x57D / 1405
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5A2 / 1442
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5C2 / 1474
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x5D9 / 1497
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x5F4 / 1524
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x83B / 2107
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x864 / 2148
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

bool Function_19(int iParam0) //Position: 0x888 / 2184
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x89D / 2205
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_22(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_21(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_21(char* cParam0, int iParam1) //Position: 0x909 / 2313
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

bool Function_22(bool bParam0, var uParam1, int iParam2) //Position: 0x940 / 2368
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
		if (Function_24(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_23(uVar0))
		{
			case 0x00000002:
				if (!Function_27(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_23(char* cParam0) //Position: 0x9B8 / 2488
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

int Function_24(int iParam0) //Position: 0xA59 / 2649
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_25(&iVar1, 2147483648);
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

void Function_25(int iParam0, int iParam1) //Position: 0xA96 / 2710
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_26() //Position: 0xAA9 / 2729
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_27(var uParam0, int iParam1) //Position: 0xABE / 2750
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_28(int iParam0) //Position: 0xAD1 / 2769
{
	Function_29(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_29(bool bParam0) //Position: 0xAEF / 2799
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
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_30(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_30(int iParam0) //Position: 0xB95 / 2965
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_31(char* cParam0) //Position: 0xBBF / 3007
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

void Function_32(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xE15 / 3605
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
	Function_38(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_37(iVar2, bVar1);
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
	Function_33();
}

void Function_33() //Position: 0xF02 / 3842
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_34(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_34(int iParam0, bool bParam1) //Position: 0xF32 / 3890
{
	int iVar0;
	
	iVar0 = Function_35(iParam0);
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

int Function_35(int iParam0) //Position: 0xF6F / 3951
{
	if (!Function_36(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_36(int iParam0) //Position: 0xF89 / 3977
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_37(int iParam0, bool bParam1) //Position: 0xF9F / 3999
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
							Function_20(Global_34573, 0x1000000, 3, 0);
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
							Function_20(Global_34573, 0x1000000, 3, 0);
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
							Function_20(Global_34573, 0x1000000, 3, 0);
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
							Function_20(Global_34573, 0x1000000, 3, 0);
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
							Function_20(Global_34573, 0x1000000, 3, 0);
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
							Function_20(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_37(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_37(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_37(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_37(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_37(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_37(57, 0);
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

void Function_38(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1296 / 4758
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
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_30(Global_6269) };
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

void Function_39(int iParam0, int iParam1) //Position: 0x14A8 / 5288
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_40(bool bParam0, int iParam1) //Position: 0x14E2 / 5346
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

bool Function_41() //Position: 0x1524 / 5412
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_42(bool bParam0) //Position: 0x152D / 5421
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
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_25(&Global_63095, 1);
		Function_25(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_43() //Position: 0x157E / 5502
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

void Function_44() //Position: 0x15B1 / 5553
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

void Function_45() //Position: 0x16B7 / 5815
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

void Function_46() //Position: 0x16EA / 5866
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

void Function_47() //Position: 0x1878 / 6264
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

void Function_48() //Position: 0x1A2C / 6700
{
	Function_49(&Global_28260, 1, 0);
	return;
}

void Function_49(int iParam0, bool bParam1, var uParam2) //Position: 0x1A3A / 6714
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
	
	bVar0 = Function_26();
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

struct<8> Function_50() //Position: 0x1C2B / 7211
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CC6 / 7366
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F61 / 8033
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_53() //Position: 0x258E / 9614
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2596 / 9622
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25A7 / 9639
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x269C / 9884
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26B5 / 9909
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x271A / 10010
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x272C / 10028
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x273E / 10046
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

int Function_61(int iParam0) //Position: 0x286E / 10350
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x287D / 10365
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x28B6 / 10422
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x28F3 / 10483
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A8D / 10893
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

int Function_66(bool bParam0) //Position: 0x2CA7 / 11431
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2CE8 / 11496
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

struct<8> Function_68() //Position: 0x2D71 / 11633
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

struct<8> Function_69() //Position: 0x2E08 / 11784
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

void Function_70() //Position: 0x2E87 / 11911
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2EAD / 11949
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

void Function_72() //Position: 0x30B7 / 12471
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

bool Function_73(vector3 vParam0) //Position: 0x3158 / 12632
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3170 / 12656
{
	int iVar0;
	
	iVar0 = Function_78(uParam2, uParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_76(&Global_63095, 1);
			Function_25(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_76(&Global_63095, 2);
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
		Function_76(&Global_63095, 2);
		Function_25(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_75();
	return StackVal, StackVal, Function_75();
}

vector3 Function_75() //Position: 0x3257 / 12887
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(int iParam0, int iParam1) //Position: 0x3260 / 12896
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x326F / 12911
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3285 / 12933
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x334C / 13132
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3369 / 13161
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

bool Function_81(int iParam0) //Position: 0x3845 / 14405
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x385B / 14427
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x387A / 14458
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3894 / 14484
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x38FB / 14587
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

void Function_86() //Position: 0x3B1B / 15131
{
	int iVar0;
	int iVar1;
	
	if (!Function_36(Global_6269))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_35(Global_6269);
	if (!Function_36(iVar0) && Function_89(iVar1) < 0)
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_89(Function_35(iVar0)))
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B9B / 15259
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3EED / 16109
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_89(int iParam0) //Position: 0x3F70 / 16240
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3F8A / 16266
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3FB8 / 16312
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
	
	if (!Function_36(iParam0))
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
			Var16 = { StackVal, StackVal, StackVal, Function_30(iParam0) };
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4255 / 16981
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
			if (!Function_27(Global_76848, 4))
			{
				Function_20(Global_34573, 4, 3, 0);
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

void Function_93(int iParam0, int iParam1) //Position: 0x4418 / 17432
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4676 / 18038
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

int Function_95() //Position: 0x47FB / 18427
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

void Function_96() //Position: 0x489A / 18586
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

void Function_97(int iParam0) //Position: 0x4949 / 18761
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

var Function_98(int iParam0) //Position: 0x49A7 / 18855
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4A36 / 18998
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

var Function_100(int iParam0, int iParam1) //Position: 0x4BD3 / 19411
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

void Function_101() //Position: 0x4C14 / 19476
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C2A / 19498
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C6A / 19562
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_104(int iParam0) //Position: 0x4CAA / 19626
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4CB9 / 19641
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

int Function_106(int iParam0) //Position: 0x4E81 / 20097
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

var Function_107() //Position: 0x4F16 / 20246
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F3B / 20283
{
	if (!Function_36(iParam0))
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x53F6 / 21494
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
				if (!Function_27(Global_76848, 1))
				{
					Function_20(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_112(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_27(Global_76848, 2))
				{
					Function_20(Global_34573, 2, 3, 0);
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

var Function_110(int iParam0) //Position: 0x570B / 22283
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x57AE / 22446
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

int Function_112(int iParam0, bool bParam1) //Position: 0x59A9 / 22953
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B45 / 23365
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5C10 / 23568
{
	struct<4> Var0;
	
	if (!Function_36(iParam0))
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

void Function_115(int iParam0) //Position: 0x6500 / 25856
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x666F / 26223
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6775 / 26485
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x67A2 / 26530
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

var Function_119(vector3 vParam0) //Position: 0x67F9 / 26617
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6847 / 26695
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x689B / 26779
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
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
				Function_42(1);
				Function_40(1, 0);
			}
			else
			{
				Function_122();
			}
		}
	}
	return;
}

void Function_122() //Position: 0x6A39 / 27193
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A3F / 27199
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6AE3 / 27363
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6B38 / 27448
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6B4E / 27470
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6B9F / 27551
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

void Function_128(var uParam0, int iParam1) //Position: 0x6BCC / 27596
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6BDB / 27611
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6BF2 / 27634
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6C01 / 27649
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
				Function_42(1);
				Function_40(1, 5);
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
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
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
		if (!Function_27(Global_76846, 2))
		{
			Function_20(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D4B / 27979
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

bool Function_133() //Position: 0x6D96 / 28054
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6DC3 / 28099
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

int Function_135(int iParam0) //Position: 0x6F73 / 28531
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6FCA / 28618
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

var Function_137(int iParam0) //Position: 0x6FEF / 28655
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

bool Function_138(bool bParam0, int iParam1) //Position: 0x7045 / 28741
{
	int iVar0;
	
	if (!Function_125(bParam0))
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

int Function_139(bool bParam0) //Position: 0x70A4 / 28836
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x70B0 / 28848
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x70CC / 28876
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

int Function_142(int iParam0, int iParam1) //Position: 0x711E / 28958
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_20(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7191 / 29073
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x71ED / 29165
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_145(iParam0, iParam1);
	Function_20(Global_34573, 1, 4, 1);
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x725E / 29278
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x72B8 / 29368
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
				Function_42(1);
				Function_40(1, 6);
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7564 / 30052
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
	if (!Function_140(3) || iParam3)
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
				Function_42(1);
				Function_40(1, 0);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		if (StackVal && !Function_153(((((!Function_133() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_153((((Function_133() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_27(Global_76846, 2))
		{
			Function_20(Global_34573, 2, 1, 0);
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

void Function_148(int iParam0, bool bParam1) //Position: 0x77F3 / 30707
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

void Function_149() //Position: 0x7852 / 30802
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

var Function_150(int iParam0, int iParam1) //Position: 0x78CD / 30925
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
					if (Function_34(6, 0) || Function_34(12, 0))
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
					else if (iVar16 && Function_34(5, 0))
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
					else if (iVar17 && Function_34(26, 0))
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
					else if (Function_34(17, 0) && iVar15)
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
					else if ((Function_34(6, 0) && Function_151(18)) && iVar19)
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
					else if ((Function_34(9, 0) && Function_151(16)) && iVar19)
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
					else if (Function_34(8, 0) && iVar19)
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

int Function_151(int iParam0) //Position: 0x84C1 / 33985
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x84D6 / 34006
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

bool Function_153(bool bParam0, int iParam1) //Position: 0x8525 / 34085
{
	return (bParam0 && iParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8532 / 34098
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8583 / 34179
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

bool Function_156(int iParam0, int iParam1) //Position: 0x85F1 / 34289
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8604 / 34308
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

var Function_158(int iParam0) //Position: 0x8703 / 34563
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

bool Function_159(var uParam0, int iParam1) //Position: 0x875B / 34651
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8777 / 34679
{
	if (!Function_161(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_26(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_26(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_26(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x87CE / 34766
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(int iParam0) //Position: 0x87E0 / 34784
{
	int iVar0;
	
	if (Function_153(iParam0, 1) && Function_153(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_163(int iParam0) //Position: 0x8814 / 34836
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x887B / 34939
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8958 / 35160
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

void Function_166() //Position: 0x8AD1 / 35537
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8ADD / 35549
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

void Function_168() //Position: 0x8B23 / 35619
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<5> Var6;
	
	REMOVE_STRING_TABLE("nminigames");
	REMOVE_ANIM_SET("blackjack_hillb");
	REMOVE_ANIM_SET("blackjack_gped");
	REMOVE_ANIM_SET("nblackjack");
	bVar0 = GET_ASSET_ID("$/fragments/p_gen_cards02x", 0);
	STREAMING_EVICT_PROP(bVar0);
	bVar1 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	STREAMING_EVICT_PROP(bVar1);
	bVar2 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	STREAMING_EVICT_PROP(bVar2);
	bVar3 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	STREAMING_EVICT_PROP(bVar3);
	bVar4 = false;
	while (bVar4 <= 13)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			Var6 = bVar4;
			Var6.f_4 = iVar5;
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var6) };
			STREAMING_EVICT_PROP(GET_ASSET_ID(&cVar8, 0));
			iVar5++;
		}
		bVar4++;
	}
	bVar4 = false;
	while (bVar4 < 25)
	{
		strcpy(&cVar8, Function_169(bVar4), 32);
		STREAMING_EVICT_PROP(GET_ASSET_ID(&cVar8, 0));
		bVar4++;
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

var Function_169(bool bParam0) //Position: 0x8C83 / 35971
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

struct<32> Function_170(var uParam0) //Position: 0x8F8C / 36748
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

void Function_171(var uParam0) //Position: 0x90FE / 37118
{
	if (Function_153(uParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || uParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_172() //Position: 0x912B / 37163
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_26(), true);
	Function_175(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_26()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_174();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	Function_173();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_173() //Position: 0x91AD / 37293
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_174() //Position: 0x91C2 / 37314
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_175(var uParam0) //Position: 0x91D6 / 37334
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_176() //Position: 0x91E9 / 37353
{
	Function_177(0);
	Function_177(1);
	Function_177(2);
	Function_177(3);
	Function_177(4);
	Function_177(5);
	Function_177(6);
	Function_177(7);
	Function_177(8);
	return;
}

int Function_177(bool bParam0) //Position: 0x921D / 37405
{
	UI_HIDE_PROMPT(bParam0);
	return 1;
}

void Function_178(int iParam0, bool bParam1) //Position: 0x9229 / 37417
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

bool Function_179(int iParam0) //Position: 0x939C / 37788
{
	return Function_153(uLocal_32, iParam0);
}

void Function_180(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x93A9 / 37801
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_187(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_187(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_187(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_186(uParam0[iVar02], 8);
	}
	Function_186(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_185(StackVal);
	if (bParam3)
	{
		Function_181(uParam0, uParam1, iParam2, 0);
	}
}

void Function_181(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9443 / 37955
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_184(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_183(Global_29007), Function_182(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_187(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_187(uParam0[iParam22], 1) && !bParam3)
	{
		Function_184(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_183(Global_29007), Function_182(Global_29007), false, 0);
	}
}

int Function_182(int iParam0) //Position: 0x9592 / 38290
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

int Function_183(int iParam0) //Position: 0x95BD / 38333
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

void Function_184(var uParam0, int iParam1) //Position: 0x95F1 / 38385
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_185(bool bParam0) //Position: 0x9600 / 38400
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

void Function_186(var uParam0, int iParam1) //Position: 0x969A / 38554
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_187(var uParam0, int iParam1) //Position: 0x96B1 / 38577
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_188(bool bParam0) //Position: 0x96CD / 38605
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	vVar0 = { StackVal, StackVal, *(&Local_37 + 64) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &vVar0, 3.0f, 1);
	if (IS_GRINGO_VALID(bVar3))
	{
		Function_189(bVar3);
	}
	iVar4 = 0;
	while (iVar4 <= bParam0->f_1848)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			Function_189(GET_GRINGO_FROM_OBJECT(StackVal));
		}
		iVar4++;
	}
	return;
}

void Function_189(bool bParam0) //Position: 0x9743 / 38723
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (bVar1 >= 4294967295)
		{
			bVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
			bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar2, bParam0);
			if (IS_PHYSINST_VALID(bVar3))
			{
				SHOW_PHYSINST(bVar3);
			}
			bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
		}
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (bVar1 >= 4294967295)
		{
			bVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
			bVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar4, bParam0);
			if (IS_PHYSINST_VALID(bVar5))
			{
				SHOW_PHYSINST(bVar5);
			}
			bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
		}
	}
	return;
}

void Function_190() //Position: 0x982B / 38955
{
	int iVar0[3];
	int iVar4;
	
	if (Function_212(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_198(&uLocal_4, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_191();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_36 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_191();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_36 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_191();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_36 = 2;
		}
	}
	return;
}

void Function_191() //Position: 0x98BF / 39103
{
	Function_193();
	Function_192(10, 3);
	return;
}

void Function_192(int iParam0, int iParam1) //Position: 0x98CE / 39118
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

void Function_193() //Position: 0x9A05 / 39429
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_197())
	{
		Function_196(10, 3);
	}
	else
	{
		Function_194();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_26(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_26());
	UI_POP("nDebugMenu");
	return;
}

void Function_194() //Position: 0x9A50 / 39504
{
	Function_195(25, 2);
	return;
}

void Function_195(int iParam0, int iParam1) //Position: 0x9A5C / 39516
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

void Function_196(int iParam0, int iParam1) //Position: 0x9C5A / 40026
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

bool Function_197() //Position: 0x9D91 / 40337
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

var Function_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9DF8 / 40440
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_211(&Var15, &Var0);
	uVar20 = Function_210(*uParam1, &Var15);
	Function_209(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_208(uParam0, uVar20);
	Function_206(StackVal, uParam0, Var15.f_12);
	Function_204(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_203(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_200(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_199(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_199(int iParam0, int iParam1, int iParam2) //Position: 0x9EBF / 40639
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

bool Function_200(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x9F1B / 40731
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
				Function_202(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_202(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_199(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_201(bParam1->f_32);
	}
	else
	{
		Function_201(bParam1->f_32);
	}
	return 0;
}

void Function_201(bool bParam0) //Position: 0xA0A1 / 41121
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

void Function_202(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xA0DB / 41179
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

var Function_203(int iParam0, var uParam1, int iParam2) //Position: 0xA189 / 41353
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_204(var uParam0, int iParam1, int iParam2) //Position: 0xA1AD / 41389
{
	switch (Function_205())
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

int Function_205() //Position: 0xA249 / 41545
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

void Function_206(var uParam0, int iParam1, int iParam2) //Position: 0xA285 / 41605
{
	switch (Function_207(uParam0))
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

int Function_207(int iParam0) //Position: 0xA31D / 41757
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_26()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
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
	Function_25(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_26()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
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
	Function_25(iParam0, 0x20000000);
	return 0;
}

var Function_208(var uParam0, int iParam1) //Position: 0xA468 / 42088
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

void Function_209(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA5B7 / 42423
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

var Function_210(int iParam0, int iParam1) //Position: 0xA64A / 42570
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_211(var uParam0, int iParam1) //Position: 0xA664 / 42596
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1,6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_212(int iParam0) //Position: 0xA6B2 / 42674
{
	if (!Function_213(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_213(int iParam0) //Position: 0xA6C6 / 42694
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

bool Function_214() //Position: 0xA6EA / 42730
{
	int iVar0;
	bool bVar1;
	char* cVar2[32];
	
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_335(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_27));
	}
	fLocal_16 = (GET_CURRENT_GAME_TIME() - fLocal_17);
	if (fLocal_16 < 0,033333f)
	{
		fLocal_16 = 0,0333333f;
	}
	fLocal_17 = GET_CURRENT_GAME_TIME();
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_334();
		return 0;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_37 + 8)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_37 + 8)[iVar0]) == Function_26())
			{
				Function_334();
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
					Function_333(&cVar2, 4.0f, 1, 2, 0, 0, 0);
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_36 = 1;
					Function_334();
					return 0;
				}
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_334();
		return 0;
	}
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			if (Function_332())
			{
				Function_331();
				Function_328(&Local_80);
				iLocal_0 = 0;
			}
			break;
		
		case 0x00000000:
			Function_311();
			break;
		
		case 0x00000001:
			Function_224();
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			Function_217();
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
		Function_215();
		return 0;
	}
	if (bLocal_3)
	{
		Function_334();
		return 0;
	}
	return 1;
}

void Function_215() //Position: 0xA8A6 / 43174
{
	if (Global_29006 == Global_30658[1])
	{
		Function_216(2, Global_30658[1]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_216(int iParam0, int iParam1) //Position: 0xA8C8 / 43208
{
	if (!Function_140(3))
	{
		return;
	}
	if (Function_41())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3())
				{
					Function_147(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_147(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_147(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_147(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_147(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_147(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_147(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_141(2) && !Function_126(2))
				{
					Function_147(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_217() //Position: 0xA9D6 / 43478
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
			if (Function_179(1024))
			{
				EQUIP_ACCESSORY(Function_26(), 1, 1);
			}
			UI_EXIT("BJ_Help");
			UI_EXIT("Scores");
			UI_EXIT("BetPanel");
			Function_176();
			Function_173();
			if (iLocal_36 != 0 && !Function_222(Function_15(Local_37), Function_13(Local_37)))
			{
				Function_85(410, 1, 0, 0);
				Function_84(6, 11);
			}
			iLocal_1 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_80 + 1848)[Local_80.f_19689])
			{
				bVar1 = (((&Local_80 + 488[Function_221()113])->f_380 / 10) - ((*&Local_37 + 76)[Function_221()] / 10));
				if (bVar1 <= 0)
				{
					Function_111(445, ABS(bVar1), 0);
					Function_111(450, ABS(bVar1), 0);
					SAY_SINGLE_LINE_CONTEXT((*&Local_80 + 488)[Function_221()113], 452, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					Function_85(445, bVar1, 0, 0);
					Function_85(450, bVar1, 0, 0);
					if ((Function_66(597) + Function_66(450)) >= 10000)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
						{
							AWARD_ACHIEVEMENT(24);
						}
					}
					SAY_SINGLE_LINE_CONTEXT((*&Local_80 + 488)[Function_221()113], 453, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (bVar1 >= Function_66(446))
				{
					Function_51(446, bVar1, 0);
				}
				SET_DRAW_ACTOR(Local_80, false);
				SET_DRAW_OBJECT(bLocal_70, 0);
				Function_335(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_27));
				Function_219(&Local_80, Function_221());
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
						WAIT(false);
					}
					SET_ACTION_NODE_FOR_ACTOR((*&Local_80 + 488)[StackVal113], "blackjack/Fake/idle");
					TASK_PRIORITY_SET((*&Local_80 + 488)[StackVal113], 2);
				}
				iVar0++;
			}
			MAKE_ACTOR_READY_FOR_ACTION(Local_80, 1);
			Function_218(&Local_80);
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Local_80)))
			{
				RESET_ANIM_SET_FOR_ACTOR(Local_80, 1);
				SET_ANIM_SET_FOR_ACTOR(Local_80, "fake_blackjack_dealer", 0);
				while (!ACTOR_HAS_ANIM_SET(Local_80, "fake_blackjack_dealer") && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
				SNAP_ACTOR_TO_GRINGO(StackVal, Local_80, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(Local_80), "UseCase1", true, 1);
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

void Function_218(int iParam0) //Position: 0xAE0C / 44556
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

void Function_219(int iParam0, int iParam1) //Position: 0xAEFB / 44795
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
	Function_220(iParam0 + 488[iParam1113] + 68, 2);
	(iParam0 + 488[iParam1113])->f_380 = 1000;
	strcpy(iParam0 + 488[iParam1113] + 4, "", 64);
	iParam0->f_1960 = (iParam0->f_1960 - 1);
	return;
}

void Function_220(var uParam0, int iParam1) //Position: 0xB074 / 45172
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

int Function_221() //Position: 0xB110 / 45328
{
	return StackVal;
}

bool Function_222(int iParam0, int iParam1) //Position: 0xB124 / 45348
{
	int iVar0;
	
	if (!Function_223(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_15(iVar0) != iParam0 && Function_13(iVar0) != iParam1)
		{
			if (Function_83(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_223(int iParam0) //Position: 0xB169 / 45417
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_224() //Position: 0xB17E / 45438
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
	bool bVar18;
	struct<369> Var19;
	
	Function_307(&Local_80, 0, 0);
	Function_306(&Local_80);
	if (HUD_IS_SHOWING_HELP_TEXT() && !iLocal_76 != 8)
	{
		if (IS_BUTTON_PRESSED(Function_305(), 6, 1, 0))
		{
			Function_173();
			HUD_CLEAR_HELP_QUEUE();
			Function_304(&uLocal_30);
		}
	}
	if (((((((((IS_BUTTON_RELEASED(Function_305(), 8, 1, 0) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && iLocal_76 == 38) && iLocal_76 == 39) && iLocal_76 == 2) && iLocal_76 == 10) && iLocal_76 == 11) && iLocal_76 == 23) && iLocal_76 == 24)
	{
		Function_173();
		Function_303();
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
			if (IS_BUTTON_PRESSED(Function_305(), 3, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_77 = iLocal_76;
				iLocal_76 = 0;
				SET_ANIMATION_OVERRIDE_SCALE(Local_80, 0.0f);
				Function_302(16);
			}
		}
	}
	switch (iLocal_76)
	{
		case 0x00000000:
			if (HUD_IS_FADED())
			{
				SET_ANIMATION_OVERRIDE_SCALE(Local_80, 1.0f);
				Function_173();
				Function_303();
				Function_302(512);
				iLocal_76 = iLocal_77;
			}
			break;
		
		case 0x00000001:
			if (!HUD_IS_FADED() || Function_179(16))
			{
				iLocal_33 = 1;
				Function_300(&iLocal_24);
				switch (Local_80.f_2400)
				{
					case 0x00000000:
						SAY_SINGLE_LINE_CONTEXT(Local_80, 243, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						iLocal_76 = 4;
						break;
					
					case 0x00000002:
						SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Dealer/cards_idle/idle");
						Function_299(&bLocal_27, Local_80);
						if (Function_294(&uLocal_30, 9) && !Function_179(16))
						{
							Function_132("BJ_DealHelp", 10.0f, 1, 0, 2, 1, 0);
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
			if (((!HUD_IS_FADING() && !HUD_IS_FADED()) && Function_293(&Local_80) < 1) && Local_80.f_1972 == Local_80.f_1968)
			{
				if (IS_BUTTON_PRESSED(Function_305(), 2, 1, 0))
				{
					iLocal_33 = 1;
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			if (Function_288(&Local_80) && !HUD_IS_FADING())
			{
				if (HUD_IS_FADED() || Function_179(16))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Dealer/cards_idle/idle");
					Function_287(&Local_80);
					Function_284(&Local_80);
					if (!Function_179(16))
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				Function_71(448, 1.0f, 0);
				Function_173();
				Function_300(&iLocal_24);
				iLocal_76 = 3;
			}
			break;
		
		case 0x00000003:
			if (HUD_IS_FADING())
			{
				Function_300(&iLocal_24);
			}
			if (((Function_281(&iLocal_24) < 0,5f && !HUD_IS_FADING()) && !HUD_IS_SHOWING_HELP_TEXT()) || Function_179(16))
			{
				if ((*&Local_80 + 68[037])[12] == 12)
				{
					Local_80.f_2400 = 1;
				}
				iLocal_76 = 4;
			}
			break;
		
		case 0x00000004:
			Function_176();
			switch (Local_80.f_2400)
			{
				case 0x00000000:
					if ((*&Local_80 + 1848)[Local_80.f_19649])
					{
						if ((&Local_80 + 488[StackVal113])->f_380 >= 0)
						{
							if (*&Local_80 + 488)[StackVal113] == GET_PLAYER_ACTOR(0)
							{
								Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
								Function_300(&iLocal_24);
								iLocal_76 = 7;
							}
							else
							{
								Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
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
					if (Function_278(&Local_80 + 488[StackVal113]))
					{
						if (*&Local_80 + 488)[StackVal113] == GET_PLAYER_ACTOR(0)
						{
							Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
							Function_300(&iLocal_24);
							iLocal_76 = 7;
						}
						else
						{
							Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
							iLocal_76 = 9;
						}
					}
					else
					{
						iLocal_76 = 25;
					}
					break;
				
				case 0x00000002:
					Function_275(&Local_80);
					if (Function_278(&Local_80 + 488[StackVal113]) && !(&Local_80 + 488[Function_273()113] + 68[Function_274()37])->f_144)
					{
						if (*&Local_80 + 488)[StackVal113] == GET_PLAYER_ACTOR(0)
						{
							Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
							Function_300(&iLocal_24);
							iLocal_76 = 7;
						}
						else
						{
							Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
							iLocal_76 = 9;
						}
					}
					else
					{
						iLocal_76 = 25;
					}
					break;
				
				case 0x00000003:
					if (Function_281(&iLocal_24) < 0,5f || Function_179(16))
					{
						iLocal_76 = 5;
					}
					break;
				
				case 0x00000004:
					if (Function_281(&iLocal_24) < 0,5f || Function_179(16))
					{
						iLocal_76 = 6;
					}
					break;
			}
			break;
		
		case 0x00000005:
			Function_300(&iLocal_24);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			bVar0 = Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_80 + 68[Local_80.f_37237]), 0);
		}
	}
}
}

int Function_225(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1079A / 67482
{
	if (!Function_228(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_227(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_226(uParam0, iParam2);
}

int Function_226(var uParam0, int iParam1) //Position: 0x107D4 / 67540
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x107E2 / 67554
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_228(var uParam0, int iParam1) //Position: 0x1081C / 67612
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_229(int iParam0, int iParam1) //Position: 0x1082A / 67626
{
	if (iParam1 >= 4294967295)
	{
		UI_LABEL_SET_VALUE("nScores.s0", (iParam0 + 488[iParam1113])->f_380);
	}
	return;
}

void Function_230(bool bParam0) //Position: 0x10851 / 67665
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

void Function_231(int iParam0) //Position: 0x1091D / 67869
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
			Function_220(iParam0 + 488[StackVal113] + 68, 2);
			(iParam0 + 488[0113])->f_372 = StackVal;
			(iParam0 + 488[0113])->f_368 = StackVal;
		}
		iVar0++;
	}
	Function_233(iParam0 + 1976);
	Function_232(iParam0 + 1976);
	Function_230(iParam0);
	return;
}

void Function_232(int iParam0) //Position: 0x109BB / 68027
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		bVar1 = RAND_INT_RANGE(false, 51);
		Var2 = { StackVal, *iParam0[bVar12] };
		*iParam0[bVar12] = { StackVal, *iParam0[iVar02] };
		*iParam0[iVar02] = { StackVal, Var2 };
		iVar0++;
	}
	if (Function_179(1))
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
	else if (Function_179(2))
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
	else if (Function_179(4))
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
	else if (Function_179(8))
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

void Function_233(int iParam0) //Position: 0x10D44 / 68932
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

void Function_234(int iParam0) //Position: 0x10D90 / 69008
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16++;
	return;
}

void Function_235(int iParam0) //Position: 0x10DB4 / 69044
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

void Function_236(int iParam0) //Position: 0x10E3A / 69178
{
	struct<113> Var0;
	
}

void Function_237(bool bParam0) //Position: 0x10E8F / 69263
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	if (IS_ATTACHMENT_VALID((*bParam0 + 440)[0]))
	{
		REMOVE_OBJECT_ATTACHMENT((*bParam0 + 440)[0]);
	}
	iVar6 = ((bParam0 + 68[bParam0->f_37237])->f_128 - 2);
	Function_238(bParam0 + 68[bParam0->f_37237] + 84[iVar6]);
	vVar0 = { StackVal, StackVal, Function_238(bParam0 + 68[bParam0->f_37237] + 84[iVar6]) };
	GET_OBJECT_ORIENTATION((*bParam0 + 68[bParam0->f_37237] + 84)[iVar6], &vVar3);
	SET_OBJECT_POSITION((*bParam0 + 68[bParam0->f_37237] + 84)[iVar6 + 1], vVar0);
	SET_OBJECT_ORIENTATION((*bParam0 + 68[bParam0->f_37237] + 84)[iVar6 + 1], vVar3);
	return;
}

vector3 Function_238(int iParam0) //Position: 0x10F24 / 69412
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_POSITION(*iParam0, &vVar3);
	GET_OBJECT_AXIS(*iParam0, &vVar0, 0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vVar3, StackVal) * Vector(0,02f, 0,02f, 0,02f), StackVal, StackVal) };
	vVar3.f_4 = (vVar3.y + 0,001f);
	return StackVal, StackVal, vVar3;
}

void Function_239(var uParam0, bool bParam1) //Position: 0x10F63 / 69475
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	
	SET_DRAW_ACTOR(bParam1, true);
	SET_DRAW_OBJECT(bLocal_70, 1);
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	GET_ACTOR_AXIS(bParam1, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(-1,5f, -1,5f, -1,5f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1,25f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	fVar12 = 0,22f;
	fVar13 = 0,54f;
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
	Function_302(512);
	return;
}

void Function_240(bool bParam0) //Position: 0x1104D / 69709
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	vector3 vVar6;
	struct<8> Var9;
	
	iVar0 = (bParam0 + 68[bParam0->f_37237])->f_128;
	Function_242(bParam0 + 1976);
	Var1 = { StackVal, Function_242(bParam0 + 1976) };
	Function_241(StackVal, bParam0 + 68[bParam0->f_37237], Var1);
	Function_238(bParam0 + 68[bParam0->f_37237] + 84[(iVar0 - 1)]);
	vVar3 = { StackVal, StackVal, Function_238(bParam0 + 68[bParam0->f_37237] + 84[(iVar0 - 1)]) };
	GET_OBJECT_ORIENTATION((*bParam0 + 68[bParam0->f_37237] + 84)[(iVar0 - 1)], &vVar6);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var1) };
	(*bParam0 + 68[bParam0->f_37237] + 84)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), &Var9, vVar3, vVar6, 1);
	(*bParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*bParam0 + 68[bParam0->f_37237] + 84)[iVar0], *bParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

void Function_241(var uParam0, struct<2> Param1) //Position: 0x1111D / 69917
{
	*uParam0[uParam0->f_1282] = { StackVal, Param1 };
	uParam0->f_128++;
	return;
}

struct<8> Function_242(int iParam0) //Position: 0x1113B / 69947
{
	iParam0->f_420++;
	return StackVal, *(iParam0[(iParam0->f_420 - 1)2]);
}

var Function_243(int iParam0, int iParam1) //Position: 0x1115A / 69978
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

void Function_244(var uParam0, var uParam1, int iParam2) //Position: 0x111C3 / 70083
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *uParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0,032f, 0,801f, -0,683f };
		vVar4 = { 180.0f, 0.0f, 180.0f };
	}
}

void Function_245(var uParam0, var uParam1, int iParam2) //Position: 0x11210 / 70160
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *uParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0,055f, 0,802f, -0,552f };
		vVar4 = { 0,009f, 0.0f, 360.0f };
	}
}

void Function_246(bool bParam0) //Position: 0x1125D / 70237
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
	Function_247(bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84[iVar7]);
	vVar0 = { StackVal, StackVal, Function_247(bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84[iVar7]) };
	GET_OBJECT_ORIENTATION((*bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84)[iVar7], &vVar3);
	SET_OBJECT_POSITION((*bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84)[iVar7 + 1], vVar0);
	SET_OBJECT_ORIENTATION((*bParam0 + 488[iVar6113] + 68[(bParam0 + 488[iVar6113])->f_37237] + 84)[iVar7 + 1], vVar3);
	return;
}

vector3 Function_247(int iParam0) //Position: 0x11348 / 70472
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_OBJECT_POSITION(*iParam0, &vVar3);
	GET_OBJECT_AXIS(*iParam0, &vVar0, 0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar3, StackVal) * Vector(0,015f, 0,015f, 0,015f), StackVal, StackVal) };
	GET_OBJECT_AXIS(*iParam0, &vVar6, 2);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar3, StackVal) * Vector(0,03f, 0,03f, 0,03f), StackVal, StackVal) };
	vVar3.f_4 = (vVar3.y + 0,001f);
	return StackVal, StackVal, vVar3;
}

void Function_248(int iParam0, bool bParam1) //Position: 0x113A5 / 70565
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	vector3 vVar6;
	struct<8> Var9;
	
	iVar0 = (iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_128;
	Function_242(iParam0 + 1976);
	Var1 = { StackVal, Function_242(iParam0 + 1976) };
	Function_241(StackVal, iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237], Var1);
	Function_238(iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84[(iVar0 - 1)]);
	vVar3 = { StackVal, StackVal, Function_238(iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84[(iVar0 - 1)]) };
	GET_OBJECT_ORIENTATION((*iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84)[(iVar0 - 1)], &vVar6);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var1) };
	(*iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), &Var9, vVar3, vVar6, 1);
	(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237] + 84)[iVar0], *iParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

void Function_249(bool bParam0) //Position: 0x114C9 / 70857
{
	UI_LABEL_SET_VALUE(StackVal, Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, "nScores.s2", *(bParam0 + 68[bParam0->f_37237]), 0));
	return;
}

void Function_250(int iParam0) //Position: 0x114F0 / 70896
{
	(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 68[iParam0->f_37237] + 84)[0], *iParam0, "neck_attachment", "grab", 4294967295);
	(*iParam0 + 440)[1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 68[iParam0->f_37237] + 84)[1], *iParam0, "head_attachment", "grab", 4294967295);
	return;
}

var Function_251(var uParam0, int iParam1) //Position: 0x11566 / 71014
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

int Function_252(int iParam0, int iParam1) //Position: 0x115B1 / 71089
{
	int iVar0;
	bool bVar1;
	
	bVar1 = Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237]), 0);
	if ((iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])->f_128 == 2)
	{
		if (StackVal != Function_257(Function_257(StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237][02])), *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237][12])) && (iParam0 + 488[iParam1113])->f_368 > 2)
		{
			iVar0 = Function_253(bVar1, (*iParam0 + 68[iParam0->f_37237])[12], 1);
			if ((*iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])[02] != 12 && (*iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])[12] != 12)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = Function_253(bVar1, (*iParam0 + 68[iParam0->f_37237])[12], 0);
		}
	}
	else
	{
		iVar0 = Function_253(bVar1, (*iParam0 + 68[iParam0->f_37237])[12], 0);
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

int Function_253(bool bParam0, int iParam1, bool bParam2) //Position: 0x1171B / 71451
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

bool Function_254(int iParam0) //Position: 0x1316C / 78188
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
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
	bVar5 = RAND_INT_RANGE(false, (100 - bVar0 * 5));
	if (bVar5 <= 50)
	{
		return 0;
	}
	return 1;
}

void Function_255(int iParam0, int iParam1) //Position: 0x13288 / 78472
{
	(iParam0 + 488[iParam1113])->f_368++;
	Function_241(StackVal, iParam0 + 488[iParam1113] + 68[137], *(iParam0 + 488[iParam1113] + 68[037][12]));
	(*iParam0 + 488[iParam1113] + 68[137] + 84)[0] = (*iParam0 + 488[iParam1113] + 68[037] + 84)[1];
	(*iParam0 + 488[iParam1113] + 68[037] + 84)[1] = "";
	Function_256(iParam0 + 488[iParam1113] + 68[037]);
	(iParam0 + 488[iParam1113])->f_372 = 0;
	(*iParam0 + 488[iParam1113] + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[iParam1113] + 68[((iParam0 + 488[iParam1113])->f_368 - 2)37] + 84)[0], (*iParam0 + 488)[iParam1113], "elbow_l_attachment", "grab", 4294967295);
	(*iParam0 + 488[iParam1113] + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[iParam1113] + 68[((iParam0 + 488[iParam1113])->f_368 - 1)37] + 84)[0], (*iParam0 + 488)[iParam1113], "wrist_l_attachment", "grab", 4294967295);
	return;
}

void Function_256(int iParam0) //Position: 0x133D5 / 78805
{
	iParam0->f_128 = (iParam0->f_128 - 1);
	(*iParam0)[iParam0->f_1282] = 4294967295;
	iParam0[iParam0->f_1282]->f_4 = 4294967295;
	return;
}

int Function_257(int iParam0, int iParam1) //Position: 0x133F9 / 78841
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

void Function_258(int iParam0) //Position: 0x1349D / 79005
{
	if (IS_BUTTON_DOWN(Function_305(), 1, 1, 0) && !Function_179(64))
	{
		Function_262(StackVal, &bLocal_27, iParam0);
		Function_260(StackVal, iParam0);
		Function_302(64);
	}
	if (!IS_BUTTON_DOWN(Function_305(), 1, 1, 0) && Function_179(64))
	{
		if (Function_179(128))
		{
			Function_259(&bLocal_27, iParam0);
		}
		else
		{
			Function_279(&bLocal_27, iParam0, iParam0->f_1964);
		}
		UI_EXIT("nScores.s2");
		UI_EXIT("nBlackJack");
		Function_270(64);
	}
	if (IS_BUTTON_DOWN(Function_305(), 0, 1, 0) && !Function_179(128))
	{
		Function_259(&bLocal_27, iParam0);
		Function_302(128);
	}
	if (!IS_BUTTON_DOWN(Function_305(), 0, 1, 0) && Function_179(128))
	{
		if (Function_179(64))
		{
			Function_262(StackVal, &bLocal_27, iParam0);
		}
		else
		{
			Function_279(&bLocal_27, iParam0, iParam0->f_1964);
		}
		Function_270(128);
	}
	if (!Function_179(128) && !Function_179(64))
	{
		Function_263(&bLocal_27, iParam0, iParam0->f_1964);
	}
	return;
}

void Function_259(bool bParam0, int iParam1) //Position: 0x135B6 / 79286
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
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar0, StackVal) * Vector(0,7f, 0,7f, 0,7f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(-0,06f, -0,06f, -0,06f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar12, StackVal) * Vector(-0,2f, -0,2f, -0,2f), StackVal, StackVal) };
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
	vVar16 = { StackVal, StackVal, Vector(vVar16, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
	vVar16.f_4 = (vVar16.y - 0,1f);
	vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar6, vVar16, StackVal) * Vector(-0,045f, -0,045f, -0,045f), StackVal, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
	vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar16, StackVal) * Vector(0,2f, 0,2f, 0,2f), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_CAMERA_POSITION(*bParam0, vVar12);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar16, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(*bParam0, 0,2f);
	SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	Function_302(512);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0x13753 / 79699
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 >= 4294967295)
	{
		bVar0 = Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237]), 0);
		bVar1 = Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237]), 1);
		if (Function_261(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237])) < 0 && bVar1 == bVar0)
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

int Function_261(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) //Position: 0x138C0 / 80064
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_128)
	{
		iVar2 = Function_257(StackVal, Param0[iVar02]);
		if (iVar2 == 11)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_262(var uParam0, bool bParam1, int iParam2) //Position: 0x138FC / 80124
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
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar12, StackVal) * Vector(0,35f, 0,35f, 0,35f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 0,5f);
	vVar15 = { StackVal, StackVal, vVar0 };
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar15, StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar12);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar15, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(*uParam0, 0,3f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	Function_302(512);
	return;
}

void Function_263(bool bParam0, int iParam1, int iParam2) //Position: 0x13A3D / 80445
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
		SET_DRAW_ACTOR(*iParam1, false);
		SET_DRAW_OBJECT(bLocal_70, 0);
		GET_ACTOR_AXIS(*iParam1, &vVar0, 0);
		GET_ACTOR_AXIS(*iParam1, &vVar3, 1);
		GET_ACTOR_AXIS(*iParam1, &vVar6, 2);
		GET_POSITION(*iParam1, &vVar9);
		fVar12 = 0.0f;
		fVar13 = 1,3f;
		fVar14 = 0,49f;
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
		fVar24 = GET_STICK_X(Function_305(), 1, 1);
		if (fVar24 < -0,2f && fVar24 > 0,2f)
		{
			fVar24 = 0.0f;
		}
		fVar25 = GET_STICK_Y(Function_305(), 1, 1);
		if (fVar25 < -0,2f && fVar25 > 0,2f)
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
		if (fVar36 > -0,375f)
		{
			fVar34 = 0.0f;
			fVar36 = -0,375f;
		}
		else if (fVar36 < 0,375f)
		{
			fVar34 = 0.0f;
			fVar36 = 0,375f;
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
		Function_270(512);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	return;
}

void Function_264(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x13CB3 / 81075
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
			if (Function_179(32))
			{
				if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_All_In_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_All_In_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
				}
			}
			else if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_All_In", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_All_In", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/allin");
			(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS((iParam0 + 488[iParam1113])->f_416, (*iParam0 + 488)[iParam1113], "elbow_r_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		}
		else
		{
			if (Function_179(32))
			{
				if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_DoubleDown", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
				}
			}
			else if (*iParam0 + 488)[iParam1113] == GET_PLAYER_ACTOR(0)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets", iParam0 + 488[iParam1113] + 4, Function_268(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			if ((iParam0 + 488[iParam1113])->f_372 != 0)
			{
				if (Function_179(32))
				{
					if (bParam2 > 25)
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/dd");
						if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_424))
						{
							(iParam0 + 488[iParam1113])->f_424 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_424, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
						}
					}
					else if (bParam2 > 10)
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/dd");
						if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_424))
						{
							(iParam0 + 488[iParam1113])->f_424 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_424, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
						}
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/dd");
						if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_424))
						{
							(iParam0 + 488[iParam1113])->f_424 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_424, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
						}
					}
				}
				else if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/bet");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_420))
					{
						(iParam0 + 488[iParam1113])->f_420 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_420, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
					}
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/bet");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_420))
					{
						(iParam0 + 488[iParam1113])->f_420 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_420, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
					}
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/bet");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_420))
					{
						(iParam0 + 488[iParam1113])->f_420 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_420, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
					}
				}
			}
			else if (Function_179(32))
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/sdd");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_432))
					{
						(iParam0 + 488[iParam1113])->f_432 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_432, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
					}
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/sdd");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_432))
					{
						(iParam0 + 488[iParam1113])->f_432 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_432, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
					}
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/sdd");
					if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_432))
					{
						(iParam0 + 488[iParam1113])->f_432 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
						(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_432, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
					}
				}
			}
			else if (bParam2 > 25)
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/R/spb");
				if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_428))
				{
					(iParam0 + 488[iParam1113])->f_428 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipRed01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_428, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "elbow_r_attachment", "grab", 4294967295);
				}
			}
			else if (bParam2 > 10)
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/B/spb");
				if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_428))
				{
					(iParam0 + 488[iParam1113])->f_428 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipBlue01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_428, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "spine00_attachment", "grab", 4294967295);
				}
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 488)[iParam1113], "blackjack/Player/bet/G/spb");
				if (!IS_OBJECT_VALID((iParam0 + 488[iParam1113])->f_428))
				{
					(iParam0 + 488[iParam1113])->f_428 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_crd_chipGreen01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					(iParam0 + 488[iParam1113])->f_436 = ATTACH_OBJECTS_USING_LOCATOR((iParam0 + 488[iParam1113])->f_428, GET_OBJECT_FROM_ACTOR((*iParam0 + 488)[iParam1113]), "pelvis_attachment", "grab", 4294967295);
				}
			}
		}
	}
}

int Function_265(int iParam0, bool bParam1, bool bParam2) //Position: 0x14938 / 84280
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

void Function_266(int iParam0) //Position: 0x149F6 / 84470
{
	fLocal_18 = 0.0f;
	fLocal_19 = 0.0f;
	if (iParam0 == 0)
	{
		fLocal_20 = -0,375f;
	}
	else if (iParam0 == 1)
	{
		fLocal_20 = 0.0f;
	}
	else if (iParam0 == 2)
	{
		fLocal_20 = 0,375f;
	}
	fLocal_21 = 0.0f;
	return;
}

bool Function_267() //Position: 0x14A2E / 84526
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

var Function_268(bool bParam0) //Position: 0x14A49 / 84553
{
	bool bVar0;
	
	bVar0 = Function_269();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_269() //Position: 0x14A60 / 84576
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

void Function_270(int iParam0) //Position: 0x14B1C / 84764
{
	Function_25(&uLocal_32, iParam0);
	return;
}

bool Function_271(int iParam0, bool bParam1, int iParam2) //Position: 0x14B29 / 84777
{
	int iVar0;
	
	switch (iParam2)
	{
		case 0x00000000:
			iVar0 = (iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_136 * 2;
			break;
		
		case 0x00000001:
			iVar0 = (iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_136;
			break;
		
		case 0x00000002:
			iVar0 = ((iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_136 * 2 + FLOOR((IntToFloat((iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_136) * 0,5f)));
			break;
		
		case 0x00000003:
			iVar0 = (iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_140 * 2;
			break;
	}
	if (StackVal == bParam1)
	{
		PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
	}
	(iParam0 + 488[bParam1113])->f_380 = ((iParam0 + 488[bParam1113])->f_380 + iVar0);
	if (iParam2 == 3)
	{
		(iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_140 = 0;
	}
	else
	{
		(iParam0 + 488[bParam1113] + 68[(iParam0 + 488[bParam1113])->f_37237])->f_136 = 0;
	}
	return iVar0;
}

bool Function_272(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, bool bParam37) //Position: 0x14C87 / 85127
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
		iVar3 = Function_257(StackVal, Param0[iVar12]);
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

int Function_273() //Position: 0x14D08 / 85256
{
	return StackVal;
}

int Function_274() //Position: 0x14D1C / 85276
{
	return (&Local_80 + 488[Function_273()113])->f_372;
}

void Function_275(int iParam0) //Position: 0x14D2F / 85295
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
						Function_277(StackVal, iParam0, &vVar2, &vVar5);
						SET_OBJECT_POSITION((*iParam0 + 488[(iParam0 + 488[iVar1113])->f_372113] + 68[StackVal37] + 84)[StackVal], vVar2);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[(iParam0 + 488[iVar1113])->f_372113] + 68[StackVal37] + 84)[StackVal], vVar5);
					}
					else if (iVar1 == 1)
					{
						Function_276(StackVal, iParam0, &vVar2, &vVar5);
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

void Function_276(int iParam0, int iParam1, var uParam2, var uParam3) //Position: 0x14E9D / 85661
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
			*uParam2 = { 0,046f, 0,802f, -0,1505f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_gped"))
		{
			*uParam2 = { 0,046f, 0,802f, -0,1505f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else
		{
			*uParam2 = { 0,046f, 0,802f, -0,1505f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		UNK_0xF76F2BB3(uParam2, &vVar4, 0, 4);
		*uParam2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar1, *uParam2, StackVal) };
	}
}

void Function_277(int iParam0, int iParam1, var uParam2, var uParam3) //Position: 0x14F76 / 85878
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
			*uParam2 = { 0,027f, 0,8f, -0,13f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_gped"))
		{
			*uParam2 = { 0,027f, 0,8f, -0,13f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		else
		{
			*uParam2 = { 0,027f, 0,8f, -0,13f };
			*uParam3 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
		}
		UNK_0xF76F2BB3(uParam2, &vVar4, 0, 4);
		*uParam2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar1, *uParam2, StackVal) };
	}
}

bool Function_278(int iParam0) //Position: 0x1504F / 86095
{
	if ((iParam0 + 68[iParam0->f_37237])->f_128 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_279(bool bParam0, bool bParam1, int iParam2) //Position: 0x1506C / 86124
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
	
	SET_DRAW_ACTOR(*bParam1, false);
	SET_DRAW_OBJECT(bLocal_70, 0);
	GET_ACTOR_AXIS(*bParam1, &vVar0, 0);
	GET_ACTOR_AXIS(*bParam1, &vVar3, 1);
	GET_ACTOR_AXIS(*bParam1, &vVar6, 2);
	GET_POSITION(*bParam1, &vVar9);
	fVar12 = 0.0f;
	fVar13 = 1,3f;
	fVar14 = 0,49f;
	if (iParam2 == 0)
	{
		fVar15 = -0,375f;
	}
	else if (iParam2 == 1)
	{
		fVar15 = 0.0f;
	}
	else if (iParam2 == 2)
	{
		fVar15 = 0,375f;
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
	if (Function_179(512) || HUD_IS_FADED())
	{
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
		}
		SET_CAMERA_POSITION(*bParam0, vVar18);
		SET_CAMERA_TARGET_POSITION(*bParam0, vVar21, 0);
		SET_CAMERA_FOV(*bParam0, 31.0f);
		Function_270(512);
	}
	else
	{
		if (!IS_OBJECT_VALID(bLocal_28))
		{
			bLocal_28 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_12, Function_53());
		}
		if (!IS_OBJECT_VALID(bLocal_29))
		{
			bLocal_29 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_12, Function_53());
		}
		Function_280(bLocal_28);
		Function_280(bLocal_29);
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
		ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*bParam0, bLocal_28, bLocal_29, 1,25f, 4294967295, 0);
		ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*bParam0, bLocal_29, 4294967295);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_280(float fParam0) //Position: 0x1526F / 86639
{
	REMOVE_OBJECT_FROM_ATTACHMENT(fParam0);
	RESET_CAMERASHOT_TARGET(fParam0, 0);
	return;
}

float Function_281(int iParam0) //Position: 0x15280 / 86656
{
	if (Function_283(iParam0))
	{
		if (Function_282(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_282(int iParam0) //Position: 0x15348 / 86856
{
	return Function_153(*iParam0, 2);
}

bool Function_283(int iParam0) //Position: 0x15355 / 86869
{
	return Function_153(*iParam0, 1);
}

void Function_284(int iParam0) //Position: 0x15362 / 86882
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
					Function_277(iParam0, iVar8, &vVar0, &vVar3);
					REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7]);
					SET_OBJECT_POSITION((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7], vVar0);
					SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar8113] + 68[037] + 84)[iVar7], vVar3);
				}
				else
				{
					Function_276(iParam0, iVar8, &vVar0, &vVar3);
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
			Function_286(iParam0, &vVar0, &vVar3);
			REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 68[037] + 84)[iVar7]);
			SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[iVar7], vVar0);
			SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[iVar7], vVar3);
		}
		else
		{
			Function_285(iParam0, &vVar0, &vVar3);
			REMOVE_OBJECT_FROM_ATTACHMENT((*iParam0 + 68[037] + 84)[iVar7]);
			SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[iVar7], vVar0);
			SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[iVar7], vVar3);
		}
		iVar7++;
	}
	return;
}

void Function_285(int iParam0, var uParam1, int iParam2) //Position: 0x1551A / 87322
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *iParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0,014f, 0,803f, -0,684f };
		vVar4 = { 0.0f, 180.0f, 0.0f };
	}
}

void Function_286(int iParam0, var uParam1, int iParam2) //Position: 0x15563 / 87395
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	bVar0 = *iParam0;
	if (IS_ACTOR_VALID(bVar0))
	{
		vVar1 = { -0,039f, 0,801f, -0,552f };
		vVar4 = { 0.0f, 0.0f, 180.0f };
	}
}

void Function_287(bool bParam0) //Position: 0x155AC / 87468
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

int Function_288(int iParam0) //Position: 0x155E4 / 87524
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	switch (iLocal_71)
	{
		case 0x00000000:
			if (Function_292(iParam0, 0, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(*iParam0), "A", true);
			}
			if (Function_292(iParam0, 1, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(*iParam0), "B", true);
			}
			if (Function_292(iParam0, 2, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(*iParam0), "C", true);
			}
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "blackjack/Dealer/deal");
			iLocal_71 = 1;
			break;
		
		case 0x00000001:
			if (Function_292(iParam0, 0, 0) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/A1/deal_A_pre") || HUD_IS_FADED()))
			{
				Function_291(StackVal, iParam0);
			}
			else if (Function_292(iParam0, 1, 0) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/B1/deal_B_pre") || HUD_IS_FADED()))
			{
				Function_291(StackVal, iParam0);
			}
			else if (Function_292(iParam0, 2, 0) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/C1/deal_C_pre") || HUD_IS_FADED()))
			{
				Function_291(StackVal, iParam0);
			}
			else if ((iParam0 + 68[037])->f_128 != 0 && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/D1/deal_self_pre") || HUD_IS_FADED()))
			{
				Function_289(iParam0);
			}
			else if (Function_292(iParam0, 0, 1) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/A2/deal_A_pre") || HUD_IS_FADED()))
			{
				Function_248(StackVal, iParam0);
			}
			else if (Function_292(iParam0, 1, 1) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/B2/deal_B_pre") || HUD_IS_FADED()))
			{
				Function_248(StackVal, iParam0);
			}
			else if (Function_292(iParam0, 2, 1) && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/C2/deal_C_pre") || HUD_IS_FADED()))
			{
				Function_248(StackVal, iParam0);
			}
			else if ((iParam0 + 68[037])->f_128 != 1 && (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/D2/deal_self_pre") || HUD_IS_FADED()))
			{
				Function_240(iParam0);
			}
			if ((((((((IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/A1/deal_A_pst") || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/B1/deal_B_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/C1/deal_C_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/D1/deal_self_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/A2/deal_A_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/B2/deal_B_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/C2/deal_C_pst")) || IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/D2/deal_self_pst")) || HUD_IS_FADED())
			{
				Function_287(iParam0);
				if (!HUD_IS_FADED())
				{
					if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/A1/deal_A_pst"))
					{
						iVar0 = StackVal;
						Function_277(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/B1/deal_B_pst"))
					{
						iVar0 = StackVal;
						Function_277(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/C1/deal_C_pst"))
					{
						iVar0 = StackVal;
						Function_277(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal/D1/deal_self_pst"))
					{
						Function_286(iParam0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[0], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[0], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/A2/deal_A_pst"))
					{
						iVar0 = StackVal;
						Function_276(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/B2/deal_B_pst"))
					{
						iVar0 = StackVal;
						Function_276(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 488[iVar0113] + 68[037] + 84)[1], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/C2/deal_C_pst"))
					{
						iVar0 = StackVal;
						Function_276(iParam0, iVar0, &vVar1, &vVar4);
						SET_OBJECT_POSITION((*iParam0 + 68[037] + 84)[1], vVar1);
						SET_OBJECT_ORIENTATION((*iParam0 + 68[037] + 84)[1], vVar4);
					}
					else if (IS_ACTION_NODE_PLAYING(*iParam0, "blackjack/Dealer/deal2/D2/deal_self_pst"))
					{
						Function_285(iParam0, &vVar1, &vVar4);
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

void Function_289(int iParam0) //Position: 0x15E65 / 89701
{
	int iVar0;
	struct<8> Var1;
	vector3 vVar9;
	vector3 vVar12;
	struct<2> Var15;
	
	vVar9 = { 0.0f, 0.0f, 0.0f };
	vVar12 = { 0.0f, 0.0f, 0.0f };
	iVar0 = 0;
	Function_242(iParam0 + 1976);
	Var15 = { StackVal, Function_242(iParam0 + 1976) };
	Function_241(StackVal, iParam0 + 68[iParam0->f_37237], Var15);
	iParam0->f_368 = 1;
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var15) };
	if (iVar0 == 0)
	{
		vVar9 = { StackVal, StackVal, *(iParam0 + 452 + 12) };
		vVar12 = { StackVal, StackVal, *(iParam0 + 452 + 24) };
		vVar12.x = 180.0f;
	}
	else
	{
		Function_290(iParam0 + 68[iParam0->f_37237] + 84[0]);
		vVar9 = { StackVal, StackVal, Function_290(iParam0 + 68[iParam0->f_37237] + 84[0]) };
		GET_OBJECT_ORIENTATION((*iParam0 + 68[iParam0->f_37237] + 84)[0], &vVar12);
		vVar12.x = 0.0f;
	}
	(*iParam0 + 68[iParam0->f_37237] + 84)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), &Var1, vVar9, vVar12, 1);
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

vector3 Function_290(int iParam0) //Position: 0x15FAC / 90028
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_OBJECT_POSITION(*iParam0, &vVar6);
	GET_OBJECT_AXIS(*iParam0, &vVar0, 0);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vVar6, StackVal) * Vector(0,02f, 0,02f, 0,02f), StackVal, StackVal) };
	GET_OBJECT_AXIS(*iParam0, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar6, StackVal) * Vector(0,11f, 0,11f, 0,11f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 0,002f);
	return StackVal, StackVal, vVar6;
}

void Function_291(int iParam0, int iParam1) //Position: 0x16009 / 90121
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
	Function_242(iParam0 + 1976);
	Var22 = { StackVal, Function_242(iParam0 + 1976) };
	Function_241(StackVal, iParam0 + 488[iParam1113] + 68[(iParam0 + 488[iParam1113])->f_37237], Var22);
	(iParam0 + 488[1113])->f_368 = StackVal;
	Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var22) };
	if (iVar0 == 0)
	{
		GET_OBJECT_POSITION(StackVal, &vVar2);
		GET_OBJECT_AXIS(StackVal, &vVar8, 0);
		vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar2, StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal) };
		GET_OBJECT_AXIS(StackVal, &vVar11, 2);
		vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar2, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
		vVar2.f_4 = StackVal;
		GET_OBJECT_ORIENTATION(StackVal, &vVar5);
		vVar5.f_4 = (vVar5.y + 180.0f);
	}
	else
	{
		Function_238(iParam0 + 488[(iParam0 + 488[0113])->f_372113] + 68[StackVal37] + 84[StackVal]);
		vVar2 = { StackVal, StackVal, Function_238(iParam0 + 488[(iParam0 + 488[0113])->f_372113] + 68[StackVal37] + 84[StackVal]) };
		GET_OBJECT_ORIENTATION((*iParam0 + 488[(iParam0 + 488[0113])->f_372113] + 68[StackVal37] + 84)[StackVal], &vVar5);
	}
	(*iParam0 + 488[(iParam0 + 488[iVar0113])->f_372113] + 68[CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), &Var14, vVar2, vVar5, 1)37] + 84)[StackVal] = StackVal;
	(*iParam0 + 440)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 488[(iParam0 + 488[iVar0113])->f_372113] + 68[StackVal37] + 84)[StackVal], *iParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

bool Function_292(int iParam0, int iParam1, int iParam2) //Position: 0x16216 / 90646
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

int Function_293(int iParam0) //Position: 0x16252 / 90706
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

int Function_294(var uParam0, int iParam1) //Position: 0x16285 / 90757
{
	if (!Function_298(uParam0, iParam1))
	{
		Function_295(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_295(var uParam0, int iParam1) //Position: 0x162A0 / 90784
{
	Function_76(uParam0[Function_297(iParam1)], Function_296(iParam1));
	return;
}

int Function_296(int iParam0) //Position: 0x162B7 / 90807
{
	return Function_139((iParam0 % 32));
}

int Function_297(int iParam0) //Position: 0x162C5 / 90821
{
	return (iParam0 / 32);
}

bool Function_298(var uParam0, int iParam1) //Position: 0x162D0 / 90832
{
	return Function_153((*uParam0)[Function_297(iParam1)], Function_296(iParam1));
}

void Function_299(bool bParam0, bool bParam1) //Position: 0x162E7 / 90855
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
	
	SET_DRAW_ACTOR(bParam1, true);
	SET_DRAW_OBJECT(bLocal_70, 1);
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar6, 0);
	GET_ACTOR_AXIS(bParam1, &vVar9, 1);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	fVar12 = -1,23f;
	fVar13 = 1,38f;
	fVar14 = -2,12f;
	fVar15 = 0,11f;
	fVar16 = 1,1f;
	fVar17 = -0,58f;
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
	Function_302(512);
	return;
}

void Function_300(int iParam0) //Position: 0x16412 / 91154
{
	Function_301(iParam0, 0.0f);
	return;
}

void Function_301(var uParam0, float fParam1) //Position: 0x1641E / 91166
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(uParam0, 1);
	Function_25(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_302(int iParam0) //Position: 0x1643F / 91199
{
	Function_76(&uLocal_32, iParam0);
	return;
}

void Function_303() //Position: 0x1644C / 91212
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_304(var uParam0) //Position: 0x1645E / 91230
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

int Function_305() //Position: 0x1647D / 91261
{
	bool bVar0;
	
	bVar0 = Function_26();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_306(int iParam0) //Position: 0x16497 / 91287
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

void Function_307(bool bParam0, int iParam1, int iParam2) //Position: 0x1682C / 92204
{
	int iVar0;
	vector3 vVar1;
	struct<8> Var4;
	
	iVar0 = 0;
	while (iVar0 <= bParam0->f_1848)
	{
		if ((*bParam0 + 1848)[iVar09])
		{
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_310((bParam0 + 488[StackVal113])->f_380) };
			if (!STRINGS_ARE_EQUAL(StackVal, bParam0 + 488[&Var4113] + 384))
			{
				GET_OBJECT_POSITION((bParam0 + 488[StackVal113])->f_416, &vVar1);
				if ((!CAMERA_IS_VISIBLE_POINT(bLocal_27, vVar1, 1065353216, 1117126656, 1, 1, 0) || HUD_IS_FADED()) || iParam1)
				{
					Function_308(StackVal, bParam0, iParam2);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_308(int iParam0, bool bParam1, int iParam2) //Position: 0x168DD / 92381
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
		*(iParam0 + 488[bParam1113] + 384) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_310((iParam0 + 488[bParam1113])->f_380) };
		if (StackVal != bParam1 && iParam2)
		{
			Function_309(iParam0, bParam1, &vVar0, &vVar3, 1);
		}
		else
		{
			Function_309(iParam0, bParam1, &vVar0, &vVar3, 0);
		}
		(iParam0 + 488[bParam1113])->f_416 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), iParam0 + 488[bParam1113] + 384, vVar0, vVar3, 0);
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

void Function_309(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x16A6B / 92779
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
			vVar1 = { 0.0f, 0,8f, -0,0649f };
			vVar4 = { 0.0f, 180.0f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bVar0, "blackjack_gped"))
		{
			vVar1 = { 0,269f, 0,8f, -0,175f };
			vVar4 = { 0.0f, 180.0f, 0.0f };
		}
		else if (bParam4)
		{
			vVar1 = { 0,3958f, 0,8f, -0,3682f };
			vVar4 = { 0.0f, -169,867f, 0.0f };
		}
		else
		{
			vVar1 = { 0,268f, 0,8f, -0,181f };
			vVar4 = { 0.0f, -169,867f, 0.0f };
		}
		if (bParam4)
		{
			bVar7 = StackVal;
			GET_OBJECT_RELATIVE_ORIENTATION(bVar7, vVar4, uParam3);
			GET_OBJECT_RELATIVE_POSITION(bVar7, vVar1, uParam2);
		}
		else
		{
			GET_OBJECT_RELATIVE_ORIENTATION(bVar0, vVar4, uParam3);
			GET_OBJECT_RELATIVE_POSITION(bVar0, vVar1, uParam2);
		}
	}
}

struct<32> Function_310(int iParam0) //Position: 0x16B8A / 93066
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
	strcpy(&cVar1, Function_169(bVar0), 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

void Function_311() //Position: 0x16BBE / 93118
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_312())
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_80, "blackjack/Dealer/cards_idle");
				Function_307(&Local_80, 0, 0);
				if (!IS_OBJECT_VALID(bLocal_70))
				{
					bLocal_70 = CREATE_PROP_IN_LAYOUT(bLocal_12, Function_53(), "$/fragments/p_gen_cards02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					ATTACH_OBJECTS_USING_LOCATOR(bLocal_70, GET_OBJECT_FROM_ACTOR(Local_80), "elbow_l_attachment", "grab", 4294967295);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_70, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_70, GET_OBJECT_FROM_ACTOR(Local_80), false);
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
				Function_302(512);
				Function_279(&bLocal_27, &Local_80, Local_80.f_1964);
				Function_300(&iLocal_24);
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

bool Function_312() //Position: 0x16DA3 / 93603
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
				if (IS_OBJECTSET_VALID(bLocal_14))
				{
					Function_327(bLocal_14);
				}
				else
				{
					bLocal_14 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_12, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_13, bLocal_14, 0, 1);
				bVar0 = false;
				while (bVar0 <= iVar1)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_14));
					if (!Function_326(bVar2))
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
					if (IS_OBJECTSET_VALID(bLocal_14))
					{
						Function_327(bLocal_14);
					}
					else
					{
						bLocal_14 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_12, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(bLocal_13, bLocal_14, 0, 1);
					bVar0 = false;
					while (bVar0 <= iVar1)
					{
						bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_14));
						if (!Function_326(bVar2))
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
			if (!Function_325(&Local_22))
			{
				if (Global_30616 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
				{
					Function_322(&Global_6614, &Global_7657, 12, 0, 0, 1);
				}
				else if (Global_30616 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
				{
					Function_322(&Global_6402, &Global_7343, 14, 0, 0, 1);
				}
				else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
				{
					Function_322(&Global_6815, &Global_7954, 11, 0, 0, 1);
				}
				else if (Global_30616 == FIND_NAMED_LAYOUT("BlackWater_layout"))
				{
					Function_322(&Global_7035, &Global_8279, 34, 0, 0, 1);
				}
			}
			if (Function_325(&Local_22))
			{
				bVar0 = false;
				while (StackVal <= bVar0)
				{
					if (IS_ACTOR_VALID((*&Local_37 + 8)[bVar0]))
					{
						Function_318((*&Local_37 + 8)[bVar0], &Local_80, bVar0, (*&Local_37 + 76)[bVar0], GET_ACTOR_ENUM_STRING((*&Local_37 + 8)[bVar0]));
					}
					bVar0++;
				}
				SET_DRAW_ACTOR(StackVal, false);
				SET_DRAW_OBJECT(bLocal_70, 0);
				bVar0 = false;
				while (bVar0 <= 3)
				{
					Function_317(GET_GRINGO_FROM_OBJECT(StackVal));
					bVar0++;
				}
				Function_307(&Local_80, 1, 1);
				Function_316();
				SAY_SINGLE_LINE_CONTEXT((*&Local_80 + 488)[StackVal113], 454, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MAKE_ACTOR_READY_FOR_ACTION(StackVal, 1);
				iLocal_11 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_26(), "blackjack/Player/idle") && Function_315())
			{
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(StackVal)))
			{
				Function_313(StackVal, &Local_80);
			}
			break;
	}
	return 0;
}

void Function_313(bool bParam0, int iParam1) //Position: 0x1716A / 94570
{
	if (!iParam1->f_452)
	{
		iParam1->f_452 = 1;
		Function_314(iParam1, bParam0);
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, "nblackjack", 0);
		while (!ACTOR_HAS_ANIM_SET(bParam0, "nblackjack") && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
		SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", true, 0, 0);
		TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", true, 1);
	}
	return;
}

void Function_314(int iParam0, char* cParam1) //Position: 0x171F7 / 94711
{
	*iParam0 = cParam1;
	iParam0->f_376 = 0;
	Function_220(iParam0 + 68, 2);
	iParam0->f_380 = 1000;
	strcpy(iParam0 + 4, "Dealer", 64);
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
	return;
}

int Function_315() //Position: 0x1722F / 94767
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<5> Var6;
	
	bVar2 = GET_ASSET_ID("$/fragments/p_gen_cards02x", 0);
	bVar3 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	bVar4 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	bVar5 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
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
	if (!STREAMING_IS_PROP_LOADED(bVar2))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(bVar5))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(bVar4))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(bVar3))
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
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var6) };
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

void Function_316() //Position: 0x173A8 / 95144
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(4))
	{
		Function_302(256);
		Function_178(4, 0);
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
	Function_270(1024);
	if (UNK_0xE094DB31(Function_26(), 1))
	{
		Function_302(1024);
		DEEQUIP_ACCESSORY(Function_26(), 1);
	}
	return;
}

void Function_317(bool bParam0) //Position: 0x1746F / 95343
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (bVar1 >= 4294967295)
		{
			bVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
			bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar2, bParam0);
			if (IS_PHYSINST_VALID(bVar3))
			{
				HIDE_PHYSINST(bVar3);
			}
			bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
		}
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (bVar1 >= 4294967295)
		{
			bVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
			bVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar4, bParam0);
			if (IS_PHYSINST_VALID(bVar5))
			{
				HIDE_PHYSINST(bVar5);
			}
			bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
		}
	}
	return;
}

void Function_318(bool bParam0, int iParam1, bool bParam2, var uParam3, var uParam4) //Position: 0x17557 / 95575
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam2 != 4294967295 && !(*iParam1 + 1848)[bParam29])
	{
		PRINTSTRING("Adding player at specific seat ");
		PRINTINT(bParam2);
		PRINTNL();
		Function_320(iParam1 + 488[iParam1->f_1960113], bParam0, bParam2, uParam3, uParam4);
		(*iParam1 + 1848)[bParam29] = 1;
		(iParam1 + 1848[bParam29])->f_4 = iParam1->f_1960;
		iParam1->f_1960++;
		if (bParam0 == GET_PLAYER_ACTOR(0))
		{
			iParam1->f_1968 = bParam2;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			bVar0 = GET_OBJECT_FROM_ACTOR(bParam0);
			Function_319(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_27));
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "nblackjack", 0);
			while (!ACTOR_HAS_ANIM_SET(bParam0, "nblackjack") && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
			SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", false, 0, 1);
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 4294967295, 1);
		}
		else
		{
			bVar1 = RAND_INT_RANGE(false, 2);
			switch (bVar1)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "nblackjack", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "nblackjack") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "blackjack_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "blackjack_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "blackjack_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "blackjack_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
			}
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", true, 1);
			TASK_PRIORITY_SET(bParam0, true);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "blackjack/Player/idle");
		}
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_319(var uParam0, bool bParam1) //Position: 0x177ED / 96237
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
		fVar12 = -0,2f;
		fVar13 = 1.0f;
		fVar14 = -1,5f;
		fVar15 = -0,05f;
		fVar16 = 1,11f;
		fVar17 = -0,4f;
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

void Function_320(int iParam0, bool bParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x17960 / 96608
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
		Function_321((iParam3 / 10), 0);
		strcpy(iParam0 + 4, "BJ_Player_Name", 64);
	}
	else
	{
		strcpy(iParam0 + 4, cParam4, 64);
	}
	Function_220(iParam0 + 68, 2);
	iParam0->f_368 = 0;
	iParam0->f_372 = 0;
	iParam0->f_380 = iParam3;
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
}

int Function_321(bool bParam0, bool bParam1) //Position: 0x179F8 / 96760
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_111(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	return 1;
}

var Function_322(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x17A88 / 96904
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_187(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_187(uParam0[iVar02], 2))
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
			if (!Function_187(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_184(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_324(StackVal, StackVal, StackVal, Global_6289, Function_53(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_187(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_184(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_184(uParam0[iVar02], 1);
	Function_323(StackVal, 1);
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

int Function_323(bool bParam0, bool bParam1) //Position: 0x17C1E / 97310
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

var Function_324(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x17CC0 / 97472
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

bool Function_325(int iParam0) //Position: 0x17DD9 / 97753
{
	return Function_187(iParam0, 1);
}

bool Function_326(bool bParam0) //Position: 0x17DE5 / 97765
{
	int iVar0;
	
	if (bParam0 == Function_26())
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

void Function_327(bool bParam0) //Position: 0x17E33 / 97843
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
	}
	return;
}

void Function_328(int iParam0) //Position: 0x17E6B / 97899
{
	iParam0->f_1960 = 0;
	iParam0->f_1964 = 0;
	iParam0->f_1972 = 0;
	iParam0->f_2400 = 0;
	Function_233(iParam0 + 1976);
	Function_232(iParam0 + 1976);
	Function_330(iParam0 + 1848);
	Function_329(iParam0 + 452);
	return;
}

void Function_329(int iParam0) //Position: 0x17EA9 / 97961
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
		WAIT(false);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		Function_317(GET_GRINGO_FROM_OBJECT(StackVal));
	}
	iParam0->f_4 = 4294967295;
	*(iParam0 + 12) = { StackVal, StackVal, *(&Local_37 + 92) };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	iVar6 = 3;
	UNK_0x44986367(StackVal, (&vVar3 + (-90.0f * IntToFloat(iVar6))));
	*(iParam0 + 12) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, *(iParam0 + 12), StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal) };
	*(iParam0 + 24) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 12), *(&Local_37 + 92), StackVal) };
	(iParam0 + 24)->f_4 = UNK_0x9C40E671(iParam0 + 24);
	UNK_0x44986367(StackVal, &vVar3);
	*(iParam0 + 12) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, *(iParam0 + 12), StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal) };
	return;
}

void Function_330(var uParam0) //Position: 0x17FC6 / 98246
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
		uParam0[iVar09]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar10, 0,5f, 0));
		while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
		{
			uParam0[iVar09]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar10, 0,5f, 0));
			WAIT(false);
		}
		uParam0[iVar09]->f_4 = 4294967295;
		GET_OBJECT_POSITION(StackVal, &vVar1);
		GET_OBJECT_AXIS(StackVal, &vVar4, 0);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal) };
		GET_OBJECT_AXIS(StackVal, &vVar7, 2);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, vVar1, StackVal) * Vector(0,4f, 0,4f, 0,4f), StackVal, StackVal) };
		*(uParam0[iVar09] + 12) = { StackVal, StackVal, vVar1 };
		(uParam0[iVar09] + 12)->f_4 = StackVal;
		GET_OBJECT_ORIENTATION(StackVal, uParam0[iVar09] + 24);
		(uParam0[iVar09] + 24)->f_4 = (StackVal + 180.0f);
		iVar0++;
	}
	return;
}

void Function_331() //Position: 0x1816C / 98668
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	
	UI_EXIT("BJ_Help");
	UI_PUSH("Minigame");
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	bVar0 = GET_ASSET_ID("$/fragments/p_gen_cards02x", 0);
	STREAMING_REQUEST_PROP(bVar0, true);
	bVar1 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	STREAMING_REQUEST_PROP(bVar1, true);
	bVar2 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	STREAMING_REQUEST_PROP(bVar2, true);
	bVar3 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	STREAMING_REQUEST_PROP(bVar3, true);
	iVar4 = 0;
	while (iVar4 <= 13)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			Var6 = iVar4;
			Var6.f_4 = iVar5;
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var6) };
			STREAMING_REQUEST_PROP(GET_ASSET_ID(&Var8, 0), true);
			iVar5++;
		}
		iVar4++;
	}
	return;
}

bool Function_332() //Position: 0x182B6 / 98998
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
		strcpy(&cVar1, Function_169(bVar0), 32);
		if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar1, 0)))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void Function_333(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x18338 / 99128
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, iVar0, iParam5, iParam6);
	}
}

void Function_334() //Position: 0x1838B / 99211
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_335(var uParam0, bool bParam1) //Position: 0x18397 / 99223
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
		fVar12 = -0,2f;
		fVar13 = 1.0f;
		fVar14 = -1,75f;
		fVar15 = -0,05f;
		fVar16 = 1,14f;
		fVar17 = -0,4f;
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

void Function_336() //Position: 0x1850A / 99594
{
	int iVar0;
	
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(1);
	Function_341();
	bLocal_12 = CREATE_LAYOUT(Function_53());
	Function_340();
	Function_270(513);
	Function_338(&uLocal_30);
	if (Function_222(4, 2))
	{
		Function_304(&uLocal_30);
	}
	Function_337(&iLocal_24);
	Function_337(&iLocal_72);
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

void Function_337(int iParam0) //Position: 0x185FD / 99837
{
	if (!Function_283(iParam0))
	{
		Function_301(iParam0, 0.0f);
	}
	return;
}

void Function_338(int iParam0) //Position: 0x18612 / 99858
{
	Function_339(iParam0);
	return;
}

void Function_339(var uParam0) //Position: 0x1861D / 99869
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

void Function_340() //Position: 0x1863C / 99900
{
	int iVar0;
	char* cVar1[32];
	
	REQUEST_ANIM_SET("blackjack_hillb", 0);
	REQUEST_ANIM_SET("blackjack_gped", 0);
	REQUEST_ANIM_SET("nblackjack", 0);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&cVar1, Function_169(iVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar1, 0), true);
		iVar0++;
	}
	return;
}

void Function_341() //Position: 0x186A4 / 100004
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_173();
	Function_342();
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

void Function_342() //Position: 0x186D4 / 100052
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

