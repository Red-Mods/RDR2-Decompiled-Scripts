//Decompiled with MagicRDR v1.0
//Function Count : 350
//Statics Count : 1020
//Natives Count : 389
//Parameters Count : 48

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
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	bool bLocal_19 = false;
	float fLocal_20 = 0.0f;
	float fLocal_21 = 0.0f;
	float fLocal_22 = 0.0f;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	float fLocal_25 = 0.0f;
	struct<2> Local_26 = { 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 1;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	float fLocal_46 = 0.0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<24> Local_49 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 3;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = false;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	struct<3445> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_12 = 1000;
	iLocal_45 = 7;
	fLocal_46 = 0,2f;
	iLocal_47 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	Local_49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_343();
	while (Function_223())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_49 };
		Function_197();
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x4A / 74
{
	int iVar0;
	
	Function_195(&Local_110);
	if (&Global_46715 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
	{
		Function_187(&Global_11646, &Global_13732, 11, 0);
	}
	else if (&Global_46715 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
	{
		Function_187(&Global_11222, &Global_13104, 14, 0);
	}
	else if (&Global_46715 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_187(&Global_12048, &Global_14326, 11, 0);
	}
	else if (&Global_46715 == FIND_NAMED_LAYOUT("BlackWater_layout"))
	{
		Function_187(&Global_12488, &Global_14976, 34, 0);
	}
	SET_ANIMATION_OVERRIDE_SCALE(&Local_110, 1.0f);
	if (Function_186(256))
	{
		Function_185(4, 1);
	}
	Function_195(&Local_110);
	iVar0 = 0;
	while (iVar0 <= Local_49.f_16)
	{
		if (IS_ACTOR_VALID(&Local_49 + 16[iVar0]))
		{
			DEREFERENCE_ACTOR(&Local_49 + 16[iVar0]);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_49 + 16[iVar0]);
		}
		iVar0++;
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_13, "BlackJack_StayOutvol"));
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_13, "BlackJack_StayOutvol"));
	SET_DRAW_ACTOR(&Local_110, 1);
	SET_DRAW_OBJECT(&uLocal_97, 1);
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
	RELEASE_LAYOUT_REF(&iLocal_13);
	if (iLocal_2)
	{
		Function_34(Local_49, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_30(Local_49);
		if (!Function_29(Global_119934, 512))
		{
			Function_22(Function_28(), 512, 1, 0);
		}
	}
	else
	{
		Function_2(Local_49);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 1);
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x287 / 647
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2A8 / 680
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2C5 / 709
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2E8 / 744
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2FF / 767
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x3A1 / 929
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x3C4 / 964
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_9() //Position: 0x40E / 1038
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x427 / 1063
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x47A / 1146
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
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x5A4 / 1444
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

bool Function_13() //Position: 0x5DE / 1502
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x5F9 / 1529
{
	return (bParam0 && iParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x606 / 1542
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x626 / 1574
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x63D / 1597
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x658 / 1624
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x89F / 2207
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8CB / 2251
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

bool Function_21(int iParam0) //Position: 0x8EF / 2287
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x904 / 2308
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_24(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_23(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_23(char* cParam0) //Position: 0x979 / 2425
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_24(int iParam0, var uParam1, int iParam2) //Position: 0x9B3 / 2483
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_26(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_25(uVar0))
		{
			case 0x00000002:
				if (!Function_29(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_25(char* cParam0) //Position: 0xA2F / 2607
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

int Function_26(int iParam0) //Position: 0xAD0 / 2768
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

void Function_27(int iParam0, int iParam1) //Position: 0xB0D / 2829
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

int Function_28() //Position: 0xB23 / 2851
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_29(var uParam0, int iParam1) //Position: 0xB38 / 2872
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_30(int iParam0) //Position: 0xB4B / 2891
{
	Function_31(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_31(int iParam0) //Position: 0xB69 / 2921
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
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_32(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_32(int iParam0) //Position: 0xC0F / 3087
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

struct<24> Function_33(char* cParam0) //Position: 0xC4E / 3150
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

void Function_34(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xEA4 / 3748
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
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_40(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
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
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_35();
}

void Function_35() //Position: 0xF98 / 3992
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_36(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_36(int iParam0, bool bParam1) //Position: 0xFCA / 4042
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
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_37(int iParam0) //Position: 0x1008 / 4104
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_38(int iParam0) //Position: 0x1022 / 4130
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_39(int iParam0, bool bParam1) //Position: 0x1038 / 4152
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
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_22(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_22(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_22(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_22(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_22(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_22(&Global_54076, 0x1000000, 3, 0);
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

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1335 / 4917
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
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_32(Global_10966) };
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
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_84(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
			Function_43(1);
			Function_42(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_41(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_41(int iParam0, struct<41> Param1) //Position: 0x1593 / 5523
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x15D1 / 5585
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_43(bool bParam0) //Position: 0x1610 / 5648
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_44();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_27(&Global_99144, 1);
		Function_27(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_44() //Position: 0x1665 / 5733
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
	Function_49();
	Function_48();
	Function_47();
	Function_46();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_45();
	return;
}

void Function_45() //Position: 0x16B0 / 5808
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_46() //Position: 0x17B6 / 6070
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_47() //Position: 0x17E9 / 6121
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_48() //Position: 0x197C / 6524
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_49() //Position: 0x1B35 / 6965
{
	Function_50(&Global_42918, 1, 0);
	return;
}

void Function_50(struct<2317> Param0) //Position: 0x1B43 / 6979
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_28();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_51(int iParam0) //Position: 0x1D60 / 7520
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E07 / 7687
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20A3 / 8355
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_63(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_63(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_54() //Position: 0x26E1 / 9953
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26EA / 9962
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26FB / 9979
{
	char* cVar0[32];
	
	if (&bParam3)
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x27F2 / 10226
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x280D / 10253
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2874 / 10356
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, int iParam1) //Position: 0x2886 / 10374
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2898 / 10392
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_62(int iParam0) //Position: 0x29CC / 10700
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x29DB / 10715
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A14 / 10772
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A51 / 10833
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_66(int iParam0, float fParam1, bool bParam2) //Position: 0x2BEB / 11243
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_67(int iParam0) //Position: 0x2E2F / 11823
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<8> Function_68() //Position: 0x2E70 / 11888
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

struct<8> Function_69() //Position: 0x2EF9 / 12025
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

struct<8> Function_70() //Position: 0x2F90 / 12176
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

void Function_71() //Position: 0x300F / 12303
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, float fParam1, int iParam2) //Position: 0x304C / 12364
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_66(iParam0, fParam1, 1);
	Function_65(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_53(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_73() //Position: 0x3258 / 12888
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_74(char* cParam0) //Position: 0x330F / 13071
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3327 / 13095
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_27(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_27(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_77(&Global_99144, 2);
		Function_27(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x341F / 13343
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(int iParam0, int iParam1) //Position: 0x3429 / 13353
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x343A / 13370
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3450 / 13392
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x351C / 13596
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3539 / 13625
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_77(&Global_99144, 2);
	Function_27(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3D65 / 15717
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_14(uVar0, 0x1000000) || Function_14(uVar0, 0x2000000)) || Function_14(uVar0, 0x4000000)) || !Function_14(uVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3DA0 / 15776
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3DAF / 15791
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
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 != Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x428E / 17038
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x42A4 / 17060
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x42C3 / 17091
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x42DD / 17117
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iVar0);
	return;
	return;
}

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4347 / 17223
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x456F / 17775
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_91() //Position: 0x460D / 17933
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x476F / 18287
{
	int iVar0;
	int iVar1;
	
	if (!Function_38(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_37(Global_10966);
	if (!Function_38(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_37(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x47EF / 18415
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B46 / 19270
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_95(int iParam0) //Position: 0x4BCE / 19406
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BE8 / 19432
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4C13 / 19475
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C41 / 19521
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
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
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
				fVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (fVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = fVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				fVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (fVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = fVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar9, 1);
				}
				fVar8 = fVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, fVar8, bVar0);
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
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_32(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4EDD / 20189
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_29(Global_119936, 4))
			{
				Function_22(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_100(int iParam0, int iParam1) //Position: 0x50B1 / 20657
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1) //Position: 0x531B / 21275
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_102() //Position: 0x54AB / 21675
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_103();
	return 0;
}

void Function_103() //Position: 0x554C / 21836
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x560A / 22026
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_105(int iParam0) //Position: 0x5670 / 22128
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

int Function_106(int iParam0, bool bParam1) //Position: 0x56FF / 22271
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x58AB / 22699
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_108() //Position: 0x58F0 / 22768
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5906 / 22790
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5946 / 22854
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_111(int iParam0) //Position: 0x5986 / 22918
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5995 / 22933
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
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
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
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
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
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

int Function_113(int iParam0) //Position: 0x5B5D / 23389
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

var Function_114() //Position: 0x5BF2 / 23538
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5C17 / 23575
{
	if (!Function_38(iParam0))
	{
		return;
	}
	if (Global_6624)
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
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
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
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
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
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
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
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
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
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
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
			Function_120(100, 1, 1);
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
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60E6 / 24806
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
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
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_29(Global_119936, 1))
				{
					Function_22(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_29(Global_119936, 2))
				{
					Function_22(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
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
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x640D / 25613
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x64B0 / 25776
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_119(int iParam0, bool bParam1) //Position: 0x66AD / 26285
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
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6858 / 26712
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x692A / 26922
{
	struct<4> Var0;
	
	if (!Function_38(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_167(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_164(Global_46816[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_46816[0]);
			Function_164(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46816[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_46760[0]);
			Function_164(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_46760[1]);
			Function_164(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_46838[0]);
			Function_164(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_46796[5]);
			Function_164(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_164(Global_46816[3]);
			Function_164(Global_46866[0]);
			Function_164(Global_46850[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_46866[0]);
			Function_164(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_46850[0]);
			Function_164(Global_46866[0]);
			Function_164(Global_46866[1]);
			Function_164(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_46850[0]);
			Function_164(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_164(Global_46850[0]);
			Function_164(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_46850[0]);
			Function_164(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_46866[12]);
			Function_164(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_46866[12]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_164(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_164(Global_46866[2]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_46850[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_164(Global_46914[0]);
			Function_164(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_46914[0]);
			Function_164(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_164(Global_46926[0]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_136(&(Global_43791[Global_46914[1]]), 256);
			Function_154(11);
			Function_164(Global_46914[1]);
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_46914[1]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_46914[1]);
			Function_122(11);
			Function_154(12);
			Global_26200[1114].f_40 = 0;
			Function_152(56, 1);
			if (!&bParam2)
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

void Function_122(int iParam0) //Position: 0x7245 / 29253
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_127(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_127(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73C2 / 29634
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x74CD / 29901
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x74F9 / 29945
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_126(vector3 vParam0) //Position: 0x7550 / 30032
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

void Function_127(var uParam0, int iParam1) //Position: 0x759E / 30110
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x75F9 / 30201
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
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
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
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

void Function_129() //Position: 0x779A / 30618
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77A0 / 30624
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_131(bool bParam0, int iParam1) //Position: 0x784F / 30799
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x78A4 / 30884
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x78BA / 30906
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

bool Function_134(int iParam0, int iParam1) //Position: 0x790B / 30987
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

void Function_135(var uParam0, int iParam1) //Position: 0x7938 / 31032
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7949 / 31049
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7963 / 31075
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7974 / 31092
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_29(Global_119934, 2))
			{
				Function_22(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7AD0 / 31440
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7B5B / 31579
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7B88 / 31624
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_145(bParam0, Function_146(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, 0);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, 0);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_145(bParam0, Function_146(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7D38 / 32056
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_143(var uParam0, int iParam1) //Position: 0x7D8F / 32143
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

var Function_144(int iParam0) //Position: 0x7DB4 / 32180
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_145(bool bParam0, int iParam1) //Position: 0x7E0A / 32266
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

int Function_146(bool bParam0) //Position: 0x7E69 / 32361
{
	return SHIFT_LEFT(1, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7E75 / 32373
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7E91 / 32401
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

bool Function_149() //Position: 0x7EE3 / 32483
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7F13 / 32531
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_22(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7F88 / 32648
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7FE5 / 32741
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_22(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x8068 / 32872
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x80C3 / 32963
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 6);
			}
			else
			{
				Function_129();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8383 / 33667
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, iParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || iParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_29(Global_119934, 2))
			{
				Function_22(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_157();
		}
		Global_42827.f_16 = 1;
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
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, int iParam1) //Position: 0x8622 / 34338
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&iParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_157() //Position: 0x8691 / 34449
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x8711 / 34577
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_36(6, 0) || Function_36(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_159(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_36(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_159(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_36(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_159(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_159(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_36(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_159(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_36(6, 0) && Function_159(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_36(9, 0) && Function_159(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_36(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_74(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_159(int iParam0) //Position: 0x9374 / 37748
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x9389 / 37769
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_161(var uParam0, int iParam1) //Position: 0x93D8 / 37848
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9430 / 37936
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_167(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x94A3 / 38051
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x94B7 / 38071
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_166(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x95A8 / 38312
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_166(var uParam0, int iParam1) //Position: 0x9600 / 38400
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x961D / 38429
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
		GIVE_WEAPON_TO_ACTOR(Function_28(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_28(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x9677 / 38519
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(int iParam0) //Position: 0x9689 / 38537
{
	int iVar0;
	
	if (Function_14(iParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_170(struct<185> Param0) //Position: 0x96BD / 38589
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9728 / 38696
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x9812 / 38930
{
	int iVar0;
	
	Function_174(iParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_173();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_173() //Position: 0x9991 / 39313
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x999D / 39325
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

void Function_175() //Position: 0x99E3 / 39395
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
	STREAMING_EVICT_PROP(&uVar0);
	uVar1 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	STREAMING_EVICT_PROP(&uVar1);
	uVar2 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	STREAMING_EVICT_PROP(&uVar2);
	uVar3 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	STREAMING_EVICT_PROP(&uVar3);
	bVar4 = false;
	while (bVar4 <= 13)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			Var6 = bVar4;
			Var6.f_4 = iVar5;
			cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var6) };
			STREAMING_EVICT_PROP(GET_ASSET_ID(&cVar7, 0));
			iVar5++;
		}
		bVar4++;
	}
	bVar4 = false;
	while (bVar4 < 25)
	{
		strcpy(&cVar7, Function_176(bVar4), 32);
		STREAMING_EVICT_PROP(GET_ASSET_ID(&cVar7, 0));
		bVar4++;
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

var Function_176(bool bParam0) //Position: 0x9B4B / 39755
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

struct<32> Function_177(struct<5> Param0) //Position: 0x9E54 / 40532
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_crd_", 32);
	switch (Param0)
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

void Function_178(var uParam0) //Position: 0x9FC8 / 40904
{
	if (Function_14(uParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || uParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_179() //Position: 0x9FF5 / 40949
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_28(), true);
	Function_182(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
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

void Function_180() //Position: 0xA078 / 41080
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_181() //Position: 0xA08D / 41101
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_182(var uParam0) //Position: 0xA0A3 / 41123
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

void Function_183() //Position: 0xA0B6 / 41142
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

int Function_184(int iParam0) //Position: 0xA0EA / 41194
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_185(int iParam0, bool bParam1) //Position: 0xA0F6 / 41206
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_21369 + 168)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, true);
			}
			else
			{
				(*&Global_21369 + 168)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 9, 200.0f);
				(*&Global_21369 + 168)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, false);
				(*&Global_21369 + 168)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 10, 200.0f);
				(*&Global_21369 + 168)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, false);
				(*&Global_21369 + 168)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, false);
				(*&Global_21369 + 168)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, true);
				(*&Global_21369 + 168)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_21369 + 168)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
			}
			else
			{
				(*&Global_21369 + 168)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, false);
			}
			break;
	}
	return;
}

bool Function_186(int iParam0) //Position: 0xA27C / 41596
{
	return Function_14(uLocal_44, iParam0);
}

void Function_187(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xA289 / 41609
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_194(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_194(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_194(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_193(&(Param0[iVar02]), 8);
	}
	Function_193(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_192(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_188(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_188(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xA331 / 41777
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_191(&(Param0[iParam22]), 4);
				(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_190(Global_43790), Function_189(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_194(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_194(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_191(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_190(Global_43790), Function_189(Global_43790), false, 0);
	}
}

int Function_189(int iParam0) //Position: 0xA497 / 42135
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

int Function_190(int iParam0) //Position: 0xA4C2 / 42178
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

void Function_191(var uParam0, int iParam1) //Position: 0xA4F6 / 42230
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_192(int iParam0) //Position: 0xA507 / 42247
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_193(var uParam0, int iParam1) //Position: 0xA5B0 / 42416
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_194(var uParam0, int iParam1) //Position: 0xA5CA / 42442
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_195(struct<2833> Param0) //Position: 0xA5E7 / 42471
{
	var uVar0;
	var uVar2;
	int iVar3;
	
	uVar0 = *(&Local_49 + 104);
	uVar2 = LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &uVar0, 3.0f, 1);
	if (IS_GRINGO_VALID(&uVar2))
	{
		Function_196(&uVar2);
	}
	iVar3 = 0;
	while (iVar3 <= Param0.f_2832)
	{
		if (IS_OBJECT_VALID(&Param0 + 2832[iVar35] + 8))
		{
			Function_196(GET_GRINGO_FROM_OBJECT(&Param0 + 2832[iVar35] + 8));
		}
		iVar3++;
	}
	return;
}

void Function_196(int iParam0) //Position: 0xA664 / 42596
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&iParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar2, &iParam0);
			if (IS_PHYSINST_VALID(&uVar3))
			{
				SHOW_PHYSINST(&uVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&iParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			uVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar4, &iParam0);
			if (IS_PHYSINST_VALID(&uVar5))
			{
				SHOW_PHYSINST(&uVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_197() //Position: 0xA764 / 42852
{
	var uVar0[7];
	int iVar8;
	
	if (Function_221(0))
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "AllBust";
		uVar0[4] = "Split";
		uVar0[5] = "nBlackJack";
		uVar0[6] = "EqualMoney";
		iVar8 = Function_207(&uLocal_4, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar8 == 0)
		{
			Function_200();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_48 = 0;
		}
		else if (iVar8 == 1)
		{
			Function_200();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_48 = 1;
		}
		else if (iVar8 == 2)
		{
			Function_200();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_48 = 2;
		}
		else if (iVar8 == 3)
		{
			Function_200();
			Function_199(1);
			Function_199(2);
			Function_199(4);
			Function_199(8);
			Function_198(1);
		}
		else if (iVar8 == 4)
		{
			Function_200();
			Function_199(1);
			Function_199(2);
			Function_199(4);
			Function_199(8);
			Function_198(2);
		}
		else if (iVar8 == 5)
		{
			Function_200();
			Function_199(1);
			Function_199(2);
			Function_199(4);
			Function_199(8);
			Function_198(4);
		}
		else if (iVar8 == 6)
		{
			Function_200();
			Function_199(1);
			Function_199(2);
			Function_199(4);
			Function_199(8);
			Function_198(8);
		}
	}
	return;
}

void Function_198(int iParam0) //Position: 0xA8C3 / 43203
{
	Function_77(&uLocal_44, iParam0);
	return;
}

void Function_199(int iParam0) //Position: 0xA8D0 / 43216
{
	Function_27(&uLocal_44, iParam0);
	return;
}

void Function_200() //Position: 0xA8DD / 43229
{
	Function_202();
	Function_201(10, 3);
	return;
}

void Function_201(int iParam0, int iParam1) //Position: 0xA8EC / 43244
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_202() //Position: 0xAA39 / 43577
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_206())
	{
		Function_205(10, 3);
	}
	else
	{
		Function_203();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_28(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_28());
	UI_POP("nDebugMenu");
	return;
}

void Function_203() //Position: 0xAA84 / 43652
{
	Function_204(25, 2);
	return;
}

void Function_204(int iParam0, int iParam1) //Position: 0xAA90 / 43664
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_205(int iParam0, int iParam1) //Position: 0xACBC / 44220
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_206() //Position: 0xAE09 / 44553
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_207(struct<17> Param0) //Position: 0xAE71 / 44657
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_220(&Var12, &Var0);
	uVar15 = Function_219(uParam1, &Var12);
	Function_218(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_217(&Param0, uVar15);
	Function_215(StackVal, &Param0, Var12.f_12);
	Function_213(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_212(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_209(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_208(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_208(int iParam0, int iParam1, int iParam2) //Position: 0xAF65 / 44901
{
	var uVar0;
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
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_209(struct<17> Param0) //Position: 0xAFC5 / 44997
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_211(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_211(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_208(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_210(Param1.f_64);
	}
	else
	{
		Function_210(Param1.f_64);
	}
	return 0;
}

void Function_210(bool bParam0) //Position: 0xB158 / 45400
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_211(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xB196 / 45462
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_212(int iParam0, struct<21> Param1) //Position: 0xB24C / 45644
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_213(vector3 vParam0) //Position: 0xB273 / 45683
{
	switch (Function_214())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_214() //Position: 0xB31F / 45855
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

void Function_215(vector3 vParam0) //Position: 0xB35B / 45915
{
	switch (Function_216(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_216(int iParam0) //Position: 0xB404 / 46084
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_77(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_77(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_27(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_77(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_77(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_27(&iParam0, 0x20000000);
	return 0;
}

var Function_217(struct<21> Param0) //Position: 0xB524 / 46372
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_218(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xB6DE / 46814
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_219(int iParam0, struct<13> Param1) //Position: 0xB77A / 46970
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_220(struct<17> Param0) //Position: 0xB796 / 46998
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_221(int iParam0) //Position: 0xB7F0 / 47088
{
	if (!Function_222(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_222(int iParam0) //Position: 0xB805 / 47109
{
	if (iParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

bool Function_223() //Position: 0xB82C / 47148
{
	int iVar0;
	char* cVar1[32];
	
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_342(&iLocal_34, GET_GRINGO_FROM_OBJECT(&Local_110 + 2832[Local_110.f_29685] + 8));
	}
	fLocal_20 = (GET_CURRENT_GAME_TIME() - fLocal_21);
	if (fLocal_20 < 0,033333f)
	{
		fLocal_20 = 0,0333333f;
	}
	fLocal_21 = GET_CURRENT_GAME_TIME();
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_341();
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Local_49.f_16)
	{
		if (IS_ACTOR_VALID(&Local_49 + 16[iVar0]))
		{
			if (GET_LAST_ATTACKER(&Local_49 + 16[iVar0]) == Function_28())
			{
				Function_341();
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_110.f_2832)
	{
		if ((*&Local_110 + 2832)[iVar05])
		{
			cVar1 = &Local_110 + 736[StackVal87];
			if (IS_ACTOR_VALID(&cVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&cVar1)) > 1.0f && GET_LAST_ATTACKER(&cVar1) != GET_PLAYER_ACTOR(0))
				{
					strcpy(&cVar2, "", 32);
					stradd(&cVar2, "Player attacked ", 32);
					stradd(&cVar2, &Local_110 + 736[StackVal87] + 8, 32);
					Function_340(&cVar2, 4.0f, 1, 2, 0, 0, 0, 0);
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_48 = 1;
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
				Function_335(&Local_110);
				CAMERA_MANUAL_CUT();
				iLocal_0 = 0;
			}
			break;
		
		case 0x00000000:
			Function_318();
			break;
		
		case 0x00000001:
			Function_233();
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			Function_226();
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
		Function_224();
		return 0;
	}
	if (bLocal_3)
	{
		Function_341();
		return 0;
	}
	return 1;
}

void Function_224() //Position: 0xB9F4 / 47604
{
	if (Global_43789 == Global_46796[1])
	{
		Function_225(2, Global_46796[1]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_225(int iParam0, int iParam1) //Position: 0xBA16 / 47638
{
	if (!Function_147(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_149())
				{
					Function_155(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_155(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_155(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_155(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_155(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_155(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_155(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
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

void Function_226() //Position: 0xBB21 / 47905
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (iLocal_48 == 1)
			{
				if (Global_43787 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_43787 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_43787 == 2)
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
			if (iLocal_48 != 0 && !Function_231(Function_17(Local_49), Function_15(Local_49)))
			{
				Function_89(410, 1, 0, 0);
				Function_88(6, 11);
			}
			iLocal_1 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_110 + 2832)[Local_110.f_29685])
			{
				bVar1 = (((&Local_110 + 736[Function_230()87])->f_556 / 10) - ((*&Local_49 + 116)[Function_230()] / 10));
				if (bVar1 <= 0)
				{
					Function_118(445, ABS(bVar1), 0);
					Function_118(450, ABS(bVar1), 0);
					SAY_SINGLE_LINE_CONTEXT(&Local_110 + 736[Function_230()87], 452, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					Function_89(445, bVar1, 0, 0);
					Function_89(450, bVar1, 0, 0);
					if ((Function_67(597) + Function_67(450)) < 10000 && bVar1 < 0)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
						{
							AWARD_ACHIEVEMENT(24);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(&Local_110 + 736[Function_230()87], 453, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (bVar1 >= Function_67(446))
				{
					Function_52(446, bVar1, 0);
				}
				SET_DRAW_ACTOR(&Local_110, 0);
				SET_DRAW_OBJECT(&uLocal_97, 0);
				Function_342(&iLocal_34, GET_GRINGO_FROM_OBJECT(&Local_110 + 2832[Local_110.f_29685] + 8));
				Function_228(&Local_110, Function_230());
			}
			DESTROY_OBJECT(&uLocal_97);
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_110.f_2832)
			{
				if ((*&Local_110 + 2832)[iVar05])
				{
					RESET_ANIM_SET_FOR_ACTOR(&Local_110 + 736[StackVal87], 1);
					SET_ANIM_SET_FOR_ACTOR(&Local_110 + 736[StackVal87], "blackjack_ambient", 0);
					while (!ACTOR_HAS_ANIM_SET(&Local_110 + 736[StackVal87], "blackjack_ambient") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					SET_ACTION_NODE_FOR_ACTOR(&Local_110 + 736[StackVal87], "blackjack/Fake/idle");
					TASK_PRIORITY_SET(&Local_110 + 736[StackVal87], 2);
				}
				iVar0++;
			}
			MAKE_ACTOR_READY_FOR_ACTION(&Local_110, 1);
			Function_227(&Local_110);
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Local_110)))
			{
				RESET_ANIM_SET_FOR_ACTOR(&Local_110, 1);
				SET_ANIM_SET_FOR_ACTOR(&Local_110, "fake_blackjack_dealer", 0);
				while (!ACTOR_HAS_ANIM_SET(&Local_110, "fake_blackjack_dealer") && !IS_EXITFLAG_SET())
				{
					WAIT(0);
				}
				SNAP_ACTOR_TO_GRINGO(&Local_110, &Local_110 + 696 + 8, "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO(&Local_110, GET_GRINGO_FROM_OBJECT(&Local_110 + 696 + 8), "UseCase1", 1, 1);
				SET_ACTION_NODE_FOR_ACTOR(&Local_110, "blackjack/Fake/Dealer/start/random");
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "blackjack/Player/leave_game/stand"))
			{
				if (iLocal_48 == 0)
				{
					iLocal_2 = 1;
				}
				else if (iLocal_48 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_48 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_227(int iParam0) //Position: 0xBF72 / 49010
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*&iParam0 + 2832)[iVar05])
		{
			iVar3 = StackVal;
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iVar2 = 0;
				while (iVar2 <= 10)
				{
					DESTROY_OBJECT(&iParam0 + 736[iVar387] + 136[iVar125] + 88[iVar2]);
					iVar2++;
				}
				iVar1++;
			}
			DESTROY_OBJECT(&iParam0 + 736[iVar387] + 624);
			DESTROY_OBJECT(&iParam0 + 736[iVar387] + 632);
			DESTROY_OBJECT(&iParam0 + 736[iVar387] + 640);
			DESTROY_OBJECT(&iParam0 + 736[iVar387] + 648);
			DESTROY_OBJECT(&iParam0 + 736[iVar387] + 656);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar2 = 0;
		while (iVar2 <= 10)
		{
			DESTROY_OBJECT(&iParam0 + 136[iVar125] + 88[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	return;
}

void Function_228(struct<2961> Param0) //Position: 0xC073 / 49267
{
	int iVar0;
	int iVar1;
	
	(*&Param0 + 2832)[(&Param0 + 736[iParam187])->f_5525] = 0;
	(&Param0 + 2832[(&Param0 + 736[iParam187])->f_5525])->f_4 = 4294967295;
	TASK_CLEAR(&Param0 + 736[iParam187]);
	if (!&Param0 + 736[iParam187] != GET_PLAYER_ACTOR(0))
	{
		TASK_FLEE_ACTOR(&Param0 + 736[iParam187], GET_PLAYER_ACTOR(0), 100.0f, -1.0f, 0, 0, 0);
	}
	GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&Param0 + 2832[(&Param0 + 736[iParam187])->f_5525] + 8));
	ACTOR_END_FORCE_HOLSTER(&Param0 + 736[iParam187]);
	REMOVE_ALL_OBJECT_ATTACHMENTS(GET_OBJECT_FROM_ACTOR(&Param0 + 736[iParam187]));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			DESTROY_OBJECT(&Param0 + 736[iParam187] + 136[iVar025] + 88[iVar1]);
			iVar1++;
		}
		iVar0++;
	}
	DESTROY_OBJECT(&Param0 + 736[iParam187] + 624);
	DESTROY_OBJECT(&Param0 + 736[iParam187] + 632);
	DESTROY_OBJECT(&Param0 + 736[iParam187] + 640);
	DESTROY_OBJECT(&Param0 + 736[iParam187] + 648);
	DESTROY_OBJECT(&Param0 + 736[iParam187] + 656);
	(&Param0 + 736[iParam187]) = "";
	(&Param0 + 736[iParam187])->f_552 = 4294967295;
	Function_229(&Param0 + 736[iParam187] + 136, 2);
	(&Param0 + 736[iParam187])->f_556 = 1000;
	strcpy(&Param0 + 736[iParam187] + 8, "", 64);
	Param0.f_2960 = (Param0.f_2960 - 1);
	return;
}

void Function_229(struct<25>[] Param0, int iParam1) //Position: 0xC211 / 49681
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			Param0[iVar025][iVar1] = 4294967295;
			Param0[iVar025][iVar1].f_4 = 4294967295;
			iVar1++;
		}
		Param0[iVar025].f_176 = 0;
		Param0[iVar025].f_180 = 0;
		Param0[iVar025].f_184 = 0;
		Param0[iVar025].f_192 = 0;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (IS_OBJECT_VALID(&Param0[iVar025] + 88[iVar1]))
			{
				DESTROY_OBJECT(&Param0[iVar025] + 88[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
	return;
}

int Function_230() //Position: 0xC2B7 / 49847
{
	return StackVal;
}

bool Function_231(int iParam0, int iParam1) //Position: 0xC2CB / 49867
{
	int iVar0;
	
	if (!Function_232(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (Function_17(iVar0) != iParam0 && Function_15(iVar0) != iParam1)
		{
			if (Function_87(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_232(int iParam0) //Position: 0xC310 / 49936
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_233() //Position: 0xC325 / 49957
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	struct<2> Var10;
	struct<2> Var12;
	int iVar14;
	var uVar15;
	int iVar16;
	struct<545> Var17;
	
	Function_314(&Local_110, 0, 0);
	Function_313(&Local_110);
	if (HUD_IS_SHOWING_HELP_TEXT() && !iLocal_106 != 8)
	{
		if (UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0))
		{
			Function_180();
			HUD_CLEAR_HELP_QUEUE();
			Function_312(&iLocal_40);
		}
	}
	if (((((((((UNK_0x973F30EE("@MINIGAME.SHOW_HELP", 1, 0) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && iLocal_106 == 38) && iLocal_106 == 39) && iLocal_106 == 2) && iLocal_106 == 10) && iLocal_106 == 11) && iLocal_106 == 23) && iLocal_106 == 24)
	{
		Function_180();
		Function_311();
		UI_ENTER("BJ_Help");
		iLocal_108 = iLocal_106;
		iLocal_106 = 38;
		iLocal_109 = iLocal_45;
		iLocal_45 = 0;
	}
	if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !UI_ISACTIVE("BJ_Help"))
	{
		if (((iLocal_106 == 7 && iLocal_106 == 8) && iLocal_106 == 38) && iLocal_106 == 39)
		{
			if (UNK_0xDA674AE0("@MINIGAME.SKIP_TO_PLAYER", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_107 = iLocal_106;
				iLocal_106 = 0;
				SET_ANIMATION_OVERRIDE_SCALE(&Local_110, 0.0f);
				Function_198(16);
			}
		}
	}
	switch (iLocal_106)
	{
		case 0x00000000:
			if (HUD_IS_FADED())
			{
				SET_ANIMATION_OVERRIDE_SCALE(&Local_110, 1.0f);
				Function_180();
				Function_311();
				Function_198(512);
				iLocal_106 = iLocal_107;
			}
			break;
		
		case 0x00000001:
			if (!HUD_IS_FADED() || Function_186(16))
			{
				iLocal_45 = 1;
				Function_309(&iLocal_30);
				switch (Local_110.f_3408)
				{
					case 0x00000000:
						SAY_SINGLE_LINE_CONTEXT(&Local_110, 243, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						iLocal_106 = 4;
						break;
					
					case 0x00000002:
						SET_ACTION_NODE_FOR_ACTOR(&Local_110, "blackjack/Dealer/cards_idle/idle");
						Function_308(&iLocal_34, &Local_110);
						if (Function_303(&iLocal_40, 9) && !Function_186(16))
						{
							Function_139("BJ_DealHelpBox", 10.0f, 1, 0, 2, 1, 0);
						}
						iLocal_45 = 4;
						iLocal_99 = 0;
						iLocal_106 = 2;
						break;
				}
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			break;
		
		case 0x00000002:
			if (((!HUD_IS_FADING() && !HUD_IS_FADED()) && Function_302(&Local_110) < 1) && Local_110.f_2972 == Local_110.f_2968)
			{
				if (UNK_0xDA674AE0("@BLACKJACK.SKIP_DEAL", 1, 0))
				{
					iLocal_45 = 1;
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			if (Function_297(&Local_110) && !HUD_IS_FADING())
			{
				if (HUD_IS_FADED() || Function_186(16))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Local_110, "blackjack/Dealer/cards_idle/idle");
					Function_296(&Local_110);
					Function_293(&Local_110);
					if (!Function_186(16))
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				Function_72(448, 1.0f, 0);
				Function_180();
				Function_309(&iLocal_30);
				iLocal_106 = 3;
			}
			break;
		
		case 0x00000003:
			if (HUD_IS_FADING())
			{
				Function_309(&iLocal_30);
			}
			if (((Function_290(&iLocal_30) < 0,5f && !HUD_IS_FADING()) && !HUD_IS_SHOWING_HELP_TEXT()) || Function_186(16))
			{
				if ((*&Local_110 + 136[025])[1] == 12)
				{
					Local_110.f_3408 = 1;
				}
				iLocal_106 = 4;
			}
			break;
		
		case 0x00000004:
			Function_183();
			switch (Local_110.f_3408)
			{
				case 0x00000000:
					if ((*&Local_110 + 2832)[Local_110.f_29645])
					{
						if ((&Local_110 + 736[StackVal87])->f_556 >= 0)
						{
							if (&Local_110 + 736[StackVal87] == GET_PLAYER_ACTOR(0))
							{
								Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
								Function_309(&iLocal_30);
								iLocal_106 = 7;
							}
							else
							{
								Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
								iLocal_106 = 9;
							}
						}
					}
					else
					{
						iLocal_106 = 25;
					}
					break;
				
				case 0x00000001:
					if (Function_287(&Local_110 + 736[StackVal87]))
					{
						if (&Local_110 + 736[StackVal87] == GET_PLAYER_ACTOR(0))
						{
							Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
							Function_309(&iLocal_30);
							iLocal_106 = 7;
						}
						else
						{
							Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
							iLocal_106 = 9;
						}
					}
					else
					{
						iLocal_106 = 25;
					}
					break;
				
				case 0x00000002:
					Function_284(&Local_110);
					if (Function_287(&Local_110 + 736[StackVal87]) && !(&Local_110 + 736[Function_282()87] + 136[Function_283()25])->f_192)
					{
						if (&Local_110 + 736[StackVal87] == GET_PLAYER_ACTOR(0))
						{
							Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
							Function_309(&iLocal_30);
							iLocal_106 = 7;
						}
						else
						{
							Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
							iLocal_106 = 9;
						}
					}
					else
					{
						iLocal_106 = 25;
					}
					break;
				
				case 0x00000003:
					if (Function_290(&iLocal_30) < 0,5f || Function_186(16))
					{
						iLocal_106 = 5;
					}
					break;
				
				case 0x00000004:
					if (Function_290(&iLocal_30) < 0,5f || Function_186(16))
					{
						iLocal_106 = 6;
					}
					break;
			}
			break;
		
		case 0x00000005:
			Function_309(&iLocal_30);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			bVar0 = Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_110 + 136[Local_110.f_54825]), 0);
		}
	}
}
}

int Function_234(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11F6B / 73579
{
	if (!Function_237(uParam0, &uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_236(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_235(uParam0, &iParam2);
}

int Function_235(var uParam0, int iParam1) //Position: 0x11FAE / 73646
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11FBD / 73661
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_237(var uParam0, int iParam1) //Position: 0x11FFC / 73724
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

void Function_238(int iParam0, int iParam1) //Position: 0x1200B / 73739
{
	if (iParam1 >= 4294967295)
	{
		UI_LABEL_SET_VALUE("nScores.s0", (&iParam0 + 736[iParam187])->f_556);
	}
	return;
}

void Function_239(int iParam0) //Position: 0x12033 / 73779
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*&iParam0 + 2832)[iVar05])
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				(&iParam0 + 736[iVar187] + 136[025])->f_184 = StackVal;
				(&iParam0 + 736[iVar187] + 136[025])->f_188 = StackVal;
				iVar1++;
			}
			DESTROY_OBJECT(&iParam0 + 736[StackVal87] + 632);
			DESTROY_OBJECT(&iParam0 + 736[StackVal87] + 640);
			DESTROY_OBJECT(&iParam0 + 736[StackVal87] + 648);
			DESTROY_OBJECT(&iParam0 + 736[StackVal87] + 656);
		}
		iVar0++;
	}
	return;
}

void Function_240(struct<2973> Param0) //Position: 0x12110 / 74000
{
	int iVar0;
	
	Param0.f_2972 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Param0.f_2832)
	{
		if ((*&Param0 + 2832)[iVar05])
		{
			if (Param0.f_2972 == 4294967295)
			{
				Param0.f_2972 = iVar0;
				Param0.f_2964 = iVar0;
			}
			Function_229(&Param0 + 736[StackVal87] + 136, 2);
			(&Param0 + 736[087])->f_548 = StackVal;
			(&Param0 + 736[087])->f_544 = StackVal;
		}
		iVar0++;
	}
	Function_242(&Param0 + 2976);
	Function_241(&Param0 + 2976);
	Function_239(&Param0);
	return;
}

void Function_241(int[] iParam0) //Position: 0x121BD / 74173
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		iVar1 = RAND_INT_RANGE(0, 51);
		iVar2 = &iParam0[iVar1];
		iParam0[iVar1] = &iParam0[iVar0];
		iParam0[iVar0] = &iVar2;
		iVar0++;
	}
	if (Function_186(1))
	{
		iParam0[0] = 5;
		iParam0[0].f_4 = 1;
		iParam0[1] = 5;
		iParam0[1].f_4 = 2;
		iParam0[2] = 5;
		iParam0[2].f_4 = 0;
		iParam0[3] = 3;
		iParam0[3].f_4 = 3;
		iParam0[4] = 3;
		iParam0[4].f_4 = 1;
		iParam0[5] = 3;
		iParam0[5].f_4 = 2;
		iParam0[6] = 3;
		iParam0[6].f_4 = 0;
		iParam0[7] = 1;
		iParam0[7].f_4 = 2;
		iParam0[8] = 9;
		iParam0[8].f_4 = 3;
		iParam0[9] = 9;
		iParam0[9].f_4 = 1;
		iParam0[10] = 9;
		iParam0[10].f_4 = 2;
		iParam0[11] = 10;
		iParam0[11].f_4 = 3;
		iParam0[12] = 9;
		iParam0[12].f_4 = 3;
		iParam0[13] = 8;
		iParam0[13].f_4 = 3;
		iParam0[14] = 5;
		iParam0[14].f_4 = 2;
	}
	else if (Function_186(2))
	{
		iParam0[0] = 0;
		iParam0[0].f_4 = 1;
		iParam0[1] = 5;
		iParam0[1].f_4 = 2;
		iParam0[2] = 1;
		iParam0[2].f_4 = 0;
		iParam0[3] = 3;
		iParam0[3].f_4 = 3;
		iParam0[4] = 0;
		iParam0[4].f_4 = 1;
		iParam0[5] = 5;
		iParam0[5].f_4 = 2;
		iParam0[6] = 3;
		iParam0[6].f_4 = 0;
		iParam0[7] = 0;
		iParam0[7].f_4 = 2;
		iParam0[8] = 0;
		iParam0[8].f_4 = 3;
		iParam0[9] = 9;
		iParam0[9].f_4 = 1;
		iParam0[10] = 9;
		iParam0[10].f_4 = 2;
		iParam0[11] = 10;
		iParam0[11].f_4 = 3;
		iParam0[12] = 9;
		iParam0[12].f_4 = 3;
		iParam0[13] = 8;
		iParam0[13].f_4 = 3;
		iParam0[14] = 5;
		iParam0[14].f_4 = 2;
	}
	else if (Function_186(4))
	{
		iParam0[0] = 8;
		iParam0[0].f_4 = 1;
		iParam0[1] = 10;
		iParam0[1].f_4 = 2;
		iParam0[2] = 11;
		iParam0[2].f_4 = 0;
		iParam0[3] = 9;
		iParam0[3].f_4 = 3;
		iParam0[4] = 9;
		iParam0[4].f_4 = 1;
		iParam0[5] = 12;
		iParam0[5].f_4 = 2;
		iParam0[6] = 11;
		iParam0[6].f_4 = 0;
		iParam0[7] = 11;
		iParam0[7].f_4 = 2;
	}
	else if (Function_186(8))
	{
		iParam0[0] = 12;
		iParam0[0].f_4 = 1;
		iParam0[1] = 11;
		iParam0[1].f_4 = 2;
		iParam0[2] = 11;
		iParam0[2].f_4 = 0;
		iParam0[3] = 11;
		iParam0[3].f_4 = 3;
		iParam0[4] = 12;
		iParam0[4].f_4 = 1;
		iParam0[5] = 12;
		iParam0[5].f_4 = 2;
		iParam0[6] = 12;
		iParam0[6].f_4 = 0;
		iParam0[7] = 1;
		iParam0[7].f_4 = 2;
		iParam0[8] = 1;
		iParam0[8].f_4 = 3;
		iParam0[9] = 0;
		iParam0[9].f_4 = 1;
		iParam0[10] = 0;
		iParam0[10].f_4 = 2;
		iParam0[11] = 1;
		iParam0[11].f_4 = 3;
		iParam0[12] = 1;
		iParam0[12].f_4 = 3;
		iParam0[13] = 2;
		iParam0[13].f_4 = 3;
		iParam0[14] = 2;
		iParam0[14].f_4 = 2;
	}
	return;
}

void Function_242(struct<425> Param0) //Position: 0x125B3 / 75187
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
			Param0[iVar2].f_4 = iVar0;
			Param0[iVar2] = iVar1;
			iVar2++;
			iVar1++;
		}
		iVar0++;
	}
	Param0.f_424 = 0;
	return;
}

void Function_243(int iParam0) //Position: 0x12602 / 75266
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16++;
	return;
}

void Function_244(struct<3445> Param0) //Position: 0x12626 / 75302
{
	int iVar0;
	
	Param0.f_3444 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_2832)
	{
		if ((*&Param0 + 2832)[iVar05])
		{
			if (StackVal || (&Param0 + 736[(&Param0 + 736[StackVal87])->f_556 >= 087])->f_556 > Local_49.f_180)
			{
				(*&Param0 + 3412)[Param0.f_3444] = StackVal;
				Param0.f_3444++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_245(struct<2965> Param0) //Position: 0x126B8 / 75448
{
	struct<87> Var0;
	
}

void Function_246(struct<549> Param0) //Position: 0x12714 / 75540
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	if (IS_ATTACHMENT_VALID(&Param0 + 672[0]))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 672[0]);
	}
	iVar4 = ((&Param0 + 136[Param0.f_54825])->f_176 - 2);
	Function_247(&Param0 + 136[Param0.f_54825] + 88[iVar4]);
	Var0 = Function_247(&Param0 + 136[Param0.f_54825] + 88[iVar4]);
	GET_OBJECT_ORIENTATION(&Param0 + 136[Param0.f_54825] + 88[iVar4], &Var2);
	SET_OBJECT_POSITION(&Param0 + 136[Param0.f_54825] + 88[iVar4 + 1], Var0);
	SET_OBJECT_ORIENTATION(&Param0 + 136[Param0.f_54825] + 88[iVar4 + 1], Var2);
	return;
}

struct<8> Function_247(int iParam0) //Position: 0x127B9 / 75705
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_OBJECT_POSITION(&iParam0, &Var2);
	GET_OBJECT_AXIS(&iParam0, &Var0, 0);
	Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var0, Var2, StackVal) * Vector(0,02f, 0,02f, 0,02f), StackVal, StackVal);
	Var2.f_4 = (StackVal + 0,001f);
	return StackVal, Var2;
}

void Function_248(var uParam0, int iParam1) //Position: 0x127F9 / 75769
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	struct<2> Var10;
	
	SET_DRAW_ACTOR(&iParam1, 1);
	SET_DRAW_OBJECT(&uLocal_97, 1);
	GET_POSITION(&iParam1, &Var0);
	GET_ACTOR_AXIS(&iParam1, &Var2, 2);
	GET_ACTOR_AXIS(&iParam1, &Var4, 0);
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(-1,5f, -1,5f, -1,5f), StackVal, StackVal);
	Var6.f_4 = (StackVal + 1,25f);
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var6, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	fVar8 = 0,22f;
	fVar9 = 0,54f;
	Var10 = Var0;
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var10, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
	Var10.f_4 = (StackVal + fVar9);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var6);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var10, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	if (!Function_186(512))
	{
		CAMERA_MANUAL_CUT();
	}
	Function_198(512);
	return;
}

void Function_249(struct<549> Param0) //Position: 0x128F8 / 76024
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	
	iVar0 = (&Param0 + 136[Param0.f_54825])->f_176;
	iVar1 = Function_251(&Param0 + 2976);
	Function_250(&Param0 + 136[Param0.f_54825], &iVar1);
	Function_247(&Param0 + 136[Param0.f_54825] + 88[(iVar0 - 1)]);
	Var2 = Function_247(&Param0 + 136[Param0.f_54825] + 88[(iVar0 - 1)]);
	GET_OBJECT_ORIENTATION(&Param0 + 136[Param0.f_54825] + 88[(iVar0 - 1)], &Var4);
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&iVar1) };
	*(&Param0 + 136[Param0.f_54825] + 88[iVar0]) = CREATE_PROP_IN_LAYOUT(&iLocal_13, Function_54(), &Var6, Var2, Var4, 1);
	*(&Param0 + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 136[Param0.f_54825] + 88[iVar0], &Param0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

void Function_250(struct<177> Param0) //Position: 0x129D9 / 76249
{
	Param0[Param0.f_176] = &iParam1;
	Param0.f_176++;
	return;
}

var Function_251(var uParam0) //Position: 0x129F9 / 76281
{
	uParam0.f_424++;
	return &(uParam0[(uParam0.f_424 - 1)]);
}

var Function_252(struct<2833> Param0) //Position: 0x12A1B / 76315
{
	int iVar0;
	int iVar1;
	struct<549> Var2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_2832)
	{
		if ((*&Param0 + 2832)[iVar05])
		{
		}
	}
}

void Function_253(float fParam0, float fParam1, int iParam2) //Position: 0x12A89 / 76425
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = &fParam0;
	if (IS_ACTOR_VALID(&uVar0))
	{
		Var1 = Vector(-0,032f, 0,801f, -0,683f);
		Var3 = Vector(180.0f, 0.0f, 180.0f);
		GET_OBJECT_RELATIVE_ORIENTATION(&uVar0, Var3, &iParam2);
		GET_OBJECT_RELATIVE_POSITION(&uVar0, Var1, &fParam1);
	}
	return;
}

void Function_254(float fParam0, float fParam1, var uParam2) //Position: 0x12ADD / 76509
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = &fParam0;
	if (IS_ACTOR_VALID(&uVar0))
	{
		Var1 = Vector(-0,055f, 0,802f, -0,552f);
		Var3 = Vector(0,009f, 0.0f, 360.0f);
		GET_OBJECT_RELATIVE_ORIENTATION(&uVar0, Var3, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&uVar0, Var1, &fParam1);
	}
	return;
}

void Function_255(struct<2965> Param0) //Position: 0x12B31 / 76593
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	
	if (IS_ATTACHMENT_VALID(&Param0 + 672[0]))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 672[0]);
	}
	iVar4 = StackVal;
	iVar5 = ((&Param0 + 736[iVar487] + 136[(&Param0 + 736[iVar487])->f_54825])->f_176 - 2);
	Function_256(&Param0 + 736[iVar487] + 136[(&Param0 + 736[iVar487])->f_54825] + 88[iVar5]);
	Var0 = Function_256(&Param0 + 736[iVar487] + 136[(&Param0 + 736[iVar487])->f_54825] + 88[iVar5]);
	GET_OBJECT_ORIENTATION(&Param0 + 736[iVar487] + 136[(&Param0 + 736[iVar487])->f_54825] + 88[iVar5], &Var2);
	SET_OBJECT_POSITION(&Param0 + 736[iVar487] + 136[(&Param0 + 736[iVar487])->f_54825] + 88[iVar5 + 1], Var0);
	SET_OBJECT_ORIENTATION(&Param0 + 736[iVar487] + 136[(&Param0 + 736[iVar487])->f_54825] + 88[iVar5 + 1], Var2);
	return;
}

struct<8> Function_256(int iParam0) //Position: 0x12C2E / 76846
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	GET_OBJECT_POSITION(&iParam0, &Var2);
	GET_OBJECT_AXIS(&iParam0, &Var0, 0);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var2, StackVal) * Vector(0,015f, 0,015f, 0,015f), StackVal, StackVal);
	GET_OBJECT_AXIS(&iParam0, &Var4, 2);
	Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var2, StackVal) * Vector(0,03f, 0,03f, 0,03f), StackVal, StackVal);
	Var2.f_4 = (StackVal + 0,001f);
	return StackVal, Var2;
}

void Function_257(int iParam0, int iParam1) //Position: 0x12C8C / 76940
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	
	iVar0 = (&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825])->f_176;
	iVar1 = Function_251(&iParam0 + 2976);
	Function_250(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825], &iVar1);
	Function_247(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825] + 88[(iVar0 - 1)]);
	Var2 = Function_247(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825] + 88[(iVar0 - 1)]);
	GET_OBJECT_ORIENTATION(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825] + 88[(iVar0 - 1)], &Var4);
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&iVar1) };
	*(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825] + 88[iVar0]) = CREATE_PROP_IN_LAYOUT(&iLocal_13, Function_54(), &Var6, Var2, Var4, 1);
	*(&iParam0 + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825] + 88[iVar0], &iParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

void Function_258(struct<549> Param0) //Position: 0x12DC1 / 77249
{
	UI_LABEL_SET_VALUE(StackVal, Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, "nScores.s2", *(&Param0 + 136[Param0.f_54825]), 0));
	return;
}

void Function_259(struct<549> Param0) //Position: 0x12DEA / 77290
{
	*(&Param0 + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 136[Param0.f_54825] + 88[0], &Param0, "neck_attachment", "grab", 4294967295);
	*(&Param0 + 672[1]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 136[Param0.f_54825] + 88[1], &Param0, "head_attachment", "grab", 4294967295);
	return;
}

var Function_260(struct<5>[] Param0, int iParam1) //Position: 0x12E6C / 77420
{
	int iVar0;
	
	iVar0 = iParam1 + 1;
	while (iVar0 < (Param0 - 1))
	{
		if (Param0[iVar05])
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (Param0[iVar05])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_261(struct<549> Param0) //Position: 0x12EBA / 77498
{
	int iVar0;
	bool bVar1;
	
	bVar1 = Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825]), 0);
	if ((&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_176 == 2)
	{
		if (Function_266(&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825][0]) != Function_266(&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825][1]) && (&Param0 + 736[iParam187])->f_544 > 2)
		{
			iVar0 = Function_262(bVar1, (*&Param0 + 136[Param0.f_54825])[1], 1);
			if ((*&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])[0] != 12 && (*&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])[1] != 12)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = Function_262(bVar1, (*&Param0 + 136[Param0.f_54825])[1], 0);
		}
	}
	else
	{
		iVar0 = Function_262(bVar1, (*&Param0 + 136[Param0.f_54825])[1], 0);
	}
	if (iVar0 == 2)
	{
		if ((&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_176 >= 2 && (&Param0 + 736[iParam187])->f_556 < 0)
		{
			return 2;
		}
		return 0;
	}
	return iVar0;
}

int Function_262(bool bParam0, int iParam1, bool bParam2) //Position: 0x13038 / 77880
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

bool Function_263(int iParam0) //Position: 0x14AD4 / 84692
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
		if ((*&iParam0 + 2832)[iVar15])
		{
			iVar4 = StackVal;
			iVar2 = 0;
			while (iVar2 <= (&iParam0 + 736[iVar487])->f_544)
			{
				iVar3 = 0;
				while (iVar3 <= 2)
				{
					if ((((*&iParam0 + 736[iVar487] + 136[iVar225])[iVar3] != 8 || (*&iParam0 + 736[iVar487] + 136[iVar225])[iVar3] != 9) || (*&iParam0 + 736[iVar487] + 136[iVar225])[iVar3] != 10) || (*&iParam0 + 736[iVar487] + 136[iVar225])[iVar3] != 11)
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

void Function_264(int iParam0, int iParam1) //Position: 0x14BF7 / 84983
{
	(&iParam0 + 736[iParam187])->f_544++;
	Function_250(&iParam0 + 736[iParam187] + 136[125], &iParam0 + 736[iParam187] + 136[025][1]);
	*(&iParam0 + 736[iParam187] + 136[125] + 88[0]) = &iParam0 + 736[iParam187] + 136[025] + 88[1];
	(&iParam0 + 736[iParam187] + 136[025] + 88[1]) = "";
	Function_265(&iParam0 + 736[iParam187] + 136[025]);
	(&iParam0 + 736[iParam187])->f_548 = 0;
	*(&iParam0 + 736[iParam187] + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 136[((&iParam0 + 736[iParam187])->f_544 - 2)25] + 88[0], &iParam0 + 736[iParam187], "elbow_l_attachment", "grab", 4294967295);
	*(&iParam0 + 736[iParam187] + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 136[((&iParam0 + 736[iParam187])->f_544 - 1)25] + 88[0], &iParam0 + 736[iParam187], "wrist_l_attachment", "grab", 4294967295);
	return;
}

void Function_265(int iParam0) //Position: 0x14D5D / 85341
{
	iParam0.f_176 = (iParam0.f_176 - 1);
	iParam0[iParam0.f_176] = 4294967295;
	iParam0[iParam0.f_176].f_4 = 4294967295;
	return;
}

int Function_266(int iParam0) //Position: 0x14D87 / 85383
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

void Function_267(struct<2965> Param0) //Position: 0x14E2B / 85547
{
	if (UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && !Function_186(64))
	{
		Function_271(StackVal, &iLocal_34, &Param0);
		Function_269(StackVal, &Param0);
		Function_198(64);
	}
	if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && Function_186(64))
	{
		if (Function_186(128))
		{
			Function_268(&iLocal_34, &Param0);
		}
		else
		{
			Function_288(&iLocal_34, &Param0, Param0.f_2964);
		}
		UI_EXIT("nScores.s2");
		UI_EXIT("nBlackJack");
		Function_199(64);
	}
	if (UNK_0x062C5047("@MINIGAME.LOOK_AT_DEALER", 1, 0) && !Function_186(128))
	{
		Function_268(&iLocal_34, &Param0);
		Function_198(128);
	}
	if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_DEALER", 1, 0) && Function_186(128))
	{
		if (Function_186(64))
		{
			Function_271(StackVal, &iLocal_34, &Param0);
		}
		else
		{
			Function_288(&iLocal_34, &Param0, Param0.f_2964);
		}
		Function_199(128);
	}
	if (!Function_186(128) && !Function_186(64))
	{
		Function_272(&iLocal_34, &Param0, Param0.f_2964);
	}
	return;
}

void Function_268(var uParam0, struct<2969> Param1) //Position: 0x14FAD / 85933
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	float fVar10;
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	
	GET_OBJECT_POSITION(&Param1 + 136[Param1.f_54825] + 88[0], &Var0);
	GET_OBJECT_AXIS(&Param1 + 136[Param1.f_54825] + 88[1], &Var2, 2);
	GET_OBJECT_AXIS(&Param1 + 136[Param1.f_54825] + 88[1], &Var4, 0);
	GET_OBJECT_AXIS(&Param1 + 136[Param1.f_54825] + 88[1], &Var6, 1);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var0, StackVal) * Vector(0,7f, 0,7f, 0,7f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var8, StackVal) * Vector(-0,06f, -0,06f, -0,06f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var8, StackVal) * Vector(-0,2f, -0,2f, -0,2f), StackVal, StackVal);
	fVar10 = 1.0f;
	switch (Param1.f_2968)
	{
		case 0x00000000:
			fVar10 = -3.0f;
			break;
		
		case 0x00000001:
			fVar10 = 1.0f;
			break;
		
		case 0x00000002:
			fVar10 = 5.0f;
			break;
	}
	Var13 = Var0;
	GET_OBJECT_POSITION(&Param1 + 136[Param1.f_54825] + 88[1], &Var15);
	Var11 = Vector(StackVal, StackVal, StackVal) + Vector(Var15, Var13, StackVal);
	Var11 = Vector(Var11, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var11.f_4 = (StackVal - 0,1f);
	Var11 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(Var4, Var11, StackVal) * Vector(-0,045f, -0,045f, -0,045f), StackVal, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
	Var11 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var11, StackVal) * Vector(0,2f, 0,2f, 0,2f), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var8);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var11, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(&uParam0, 0,2f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	if (!Function_186(512))
	{
		CAMERA_MANUAL_CUT();
	}
	Function_198(512);
	return;
}

void Function_269(int iParam0, bool bParam1) //Position: 0x15172 / 86386
{
	bool bVar0;
	bool bVar1;
	
	if (bParam1 >= 4294967295)
	{
		bVar0 = Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 736[bParam187] + 136[(&iParam0 + 736[bParam187])->f_54825]), 0);
		bVar1 = Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 736[bParam187] + 136[(&iParam0 + 736[bParam187])->f_54825]), 1);
		if (Function_270(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 736[bParam187] + 136[(&iParam0 + 736[bParam187])->f_54825])) < 0 && bVar1 == bVar0)
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

int Function_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x152E5 / 86757
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0.f_176)
	{
		iVar2 = Function_266(&(uParam0[iVar0]));
		if (iVar2 == 11)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_271(var uParam0, int iParam1, int iParam2) //Position: 0x15320 / 86816
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	struct<2> Var8;
	struct<2> Var10;
	
	GET_OBJECT_POSITION(&iParam1 + 736[iParam287] + 136[(&iParam1 + 736[iParam287])->f_54825] + 88[0], &Var0);
	GET_OBJECT_AXIS(&iParam1 + 736[iParam287] + 136[(&iParam1 + 736[iParam287])->f_54825] + 88[0], &Var2, 2);
	GET_OBJECT_AXIS(&iParam1 + 736[iParam287] + 136[(&iParam1 + 736[iParam287])->f_54825] + 88[0], &uVar4, 0);
	GET_OBJECT_AXIS(&iParam1 + 736[iParam287] + 136[(&iParam1 + 736[iParam287])->f_54825] + 88[0], &uVar6, 1);
	Var8 = Var0;
	Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var8, StackVal) * Vector(0,35f, 0,35f, 0,35f), StackVal, StackVal);
	Var8.f_4 = (StackVal + 0,5f);
	Var10 = Var0;
	Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var10, StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var8);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var10, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(&uParam0, 0,3f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		CAMERA_MANUAL_CUT();
	}
	if (!Function_186(512))
	{
		CAMERA_MANUAL_CUT();
	}
	Function_198(512);
	return;
}

void Function_272(int iParam0, int iParam1, int iParam2) //Position: 0x15481 / 87169
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<2> Var14;
	struct<2> Var16;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(&iParam0) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam1, 0);
		SET_DRAW_OBJECT(&uLocal_97, 0);
		GET_ACTOR_AXIS(&iParam1, &Var0, 0);
		GET_ACTOR_AXIS(&iParam1, &Var2, 1);
		GET_ACTOR_AXIS(&iParam1, &Var4, 2);
		GET_POSITION(&iParam1, &Var6);
		fVar8 = 0.0f;
		fVar9 = 1,3f;
		fVar10 = 0,49f;
		fVar11 = 0.0f;
		fVar12 = 1.0f;
		fVar13 = -1.0f;
		Var14 = Var6;
		Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var14, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
		Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var14, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
		Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var14, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
		Var16 = Var6;
		Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var16, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
		Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var16, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
		Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var16, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
		fVar18 = 0.0f;
		if (UNK_0x062C5047("@MINIGAME.LOOK_AROUND", 1, 0))
		{
			if (UNK_0xDA674AE0("@MINIGAME.LOOK_AROUND", 1, 0))
			{
				Global_140720 = 0.0f;
			}
			Global_140720 = (Global_140720 + (GET_MOUSE_AXIS_X() * 0,1f));
			if (Global_140720 > -1.0f)
			{
				Global_140720 = 0.0f;
				Global_140720 = -1.0f;
			}
			else if (Global_140720 < 1.0f)
			{
				Global_140720 = 0.0f;
				Global_140720 = 1.0f;
			}
			fVar18 = Global_140720;
		}
		else
		{
			fVar18 = GET_ANALOGUE_ACTION("@CAMERA.MOVE_X", 1);
		}
		fVar19 = GET_ANALOGUE_ACTION("@CAMERA.MOVE_Y", 1);
		fVar20 = (fVar18 * 2.0f);
		fVar21 = (fVar19 * 2.0f);
		if (&iParam2 == 0)
		{
			fVar22 = (-1.0f * (1.0f - fLocal_24));
		}
		else if (&iParam2 == 1)
		{
			fVar22 = (-1.0f * fLocal_24);
		}
		else if (&iParam2 == 2)
		{
			fVar22 = (-1.0f * (fLocal_24 - 1.0f));
		}
		fVar23 = (fVar22 + fVar20);
		fVar24 = (-1.0f * fLocal_25);
		fVar25 = (fVar24 + fVar21);
		fVar26 = ((-fLocal_22 * 10.0f) * fLocal_20);
		fVar27 = ((-fLocal_23 * 10.0f) * fLocal_20);
		fVar28 = ((fLocal_22 + (fVar23 / 1.0f)) + fVar26);
		fVar29 = ((fLocal_23 + (fVar25 / 1.0f)) + fVar27);
		fVar30 = (fLocal_24 + (fVar28 * fLocal_20));
		fVar31 = (fLocal_25 + (fVar29 * fLocal_20));
		if (fVar30 > -0,375f)
		{
			fVar28 = 0.0f;
			fVar30 = -0,375f;
		}
		else if (fVar30 < 0,375f)
		{
			fVar28 = 0.0f;
			fVar30 = 0,375f;
		}
		if (fVar31 > -1.0f)
		{
			fVar29 = 0.0f;
			fVar31 = -1.0f;
		}
		else if (fVar31 < 1.0f)
		{
			fVar29 = 0.0f;
			fVar31 = 1.0f;
		}
		fLocal_22 = fVar28;
		fLocal_24 = fVar30;
		fLocal_23 = fVar29;
		fLocal_25 = fVar31;
		Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var16, StackVal) * Vector(fVar30, fVar30, fVar30), StackVal, StackVal);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&iParam0);
		}
		SET_CAMERA_POSITION(&iParam0, Var14);
		SET_CAMERA_TARGET_POSITION(&iParam0, Var16, 0);
		SET_CAMERA_FOV(&iParam0, 31.0f);
		Function_199(512);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&iParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	return;
}

void Function_273(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x15778 / 87928
{
	if (bParam2 <= Local_49.f_180 || bParam3)
	{
		(&iParam0 + 736[iParam187])->f_556 = ((&iParam0 + 736[iParam187])->f_556 - bParam2);
		if (&bParam3)
		{
			(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825])->f_188 = bParam2;
		}
		else
		{
			(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825])->f_184 = ((&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825])->f_184 + bParam2);
		}
		if ((&iParam0 + 736[iParam187])->f_556 == 0)
		{
			if (Function_186(32))
			{
				if (&iParam0 + 736[iParam187] == GET_PLAYER_ACTOR(0))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_All_In_DoubleDown", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_All_In_DoubleDown", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
				}
			}
			else if (&iParam0 + 736[iParam187] == GET_PLAYER_ACTOR(0))
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_All_In", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_All_In", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/allin");
			*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 736[iParam187] + 624, &iParam0 + 736[iParam187], "elbow_r_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
		else
		{
			if (Function_186(32))
			{
				if (&iParam0 + 736[iParam187] == GET_PLAYER_ACTOR(0))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou_DoubleDown", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets_DoubleDown", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
				}
			}
			else if (&iParam0 + 736[iParam187] == GET_PLAYER_ACTOR(0))
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_BetsYou", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "BJ_Player_Bets", &iParam0 + 736[iParam187] + 8, Function_278(bParam2), "", "", 0, 2, 0, 0, 0);
			}
			if ((&iParam0 + 736[iParam187])->f_548 == 0)
			{
				if (Function_186(32))
				{
					if (bParam2 > 25)
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/R/dd");
						if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 640))
						{
							*(&iParam0 + 736[iParam187] + 640) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipRed01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 640, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "elbow_r_attachment", "grab", 4294967295);
						}
					}
					else if (bParam2 > 10)
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/B/dd");
						if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 640))
						{
							*(&iParam0 + 736[iParam187] + 640) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipBlue01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 640, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "spine00_attachment", "grab", 4294967295);
						}
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/G/dd");
						if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 640))
						{
							*(&iParam0 + 736[iParam187] + 640) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipGreen01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 640, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "pelvis_attachment", "grab", 4294967295);
						}
					}
				}
				else if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/R/bet");
					if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 632))
					{
						*(&iParam0 + 736[iParam187] + 632) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipRed01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 632, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "elbow_r_attachment", "grab", 4294967295);
					}
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/B/bet");
					if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 632))
					{
						*(&iParam0 + 736[iParam187] + 632) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipBlue01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 632, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "spine00_attachment", "grab", 4294967295);
					}
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/G/bet");
					if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 632))
					{
						*(&iParam0 + 736[iParam187] + 632) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipGreen01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 632, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "pelvis_attachment", "grab", 4294967295);
					}
				}
			}
			else if (Function_186(32))
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/R/sdd");
					if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 656))
					{
						*(&iParam0 + 736[iParam187] + 656) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipRed01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 656, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "elbow_r_attachment", "grab", 4294967295);
					}
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/B/sdd");
					if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 656))
					{
						*(&iParam0 + 736[iParam187] + 656) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipBlue01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 656, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "spine00_attachment", "grab", 4294967295);
					}
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/G/sdd");
					if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 656))
					{
						*(&iParam0 + 736[iParam187] + 656) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipGreen01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
						*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 656, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "pelvis_attachment", "grab", 4294967295);
					}
				}
			}
			else if (bParam2 > 25)
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/R/spb");
				if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 648))
				{
					*(&iParam0 + 736[iParam187] + 648) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipRed01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 648, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "elbow_r_attachment", "grab", 4294967295);
				}
			}
			else if (bParam2 > 10)
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/B/spb");
				if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 648))
				{
					*(&iParam0 + 736[iParam187] + 648) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipBlue01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 648, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "spine00_attachment", "grab", 4294967295);
				}
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 736[iParam187], "blackjack/Player/bet/G/spb");
				if (!IS_OBJECT_VALID(&iParam0 + 736[iParam187] + 648))
				{
					*(&iParam0 + 736[iParam187] + 648) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_crd_chipGreen01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					*(&iParam0 + 736[iParam187] + 664) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[iParam187] + 648, GET_OBJECT_FROM_ACTOR(&iParam0 + 736[iParam187]), "pelvis_attachment", "grab", 4294967295);
				}
			}
		}
	}
}

float Function_274() //Position: 0x164D5 / 91349
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

int Function_275(struct<2965> Param0) //Position: 0x164E4 / 91364
{
	int iVar0;
	int iVar1;
	
	if (&bParam2)
	{
		if (iParam1 < 0)
		{
			iParam1 = 0;
		}
	}
	else if (iParam1 < Local_49.f_180)
	{
		iParam1 = Local_49.f_180;
	}
	if (&bParam2)
	{
		iVar0 = StackVal;
		iVar1 = (&Param0 + 736[iVar087])->f_548;
		if (iParam1 > ((&Param0 + 736[iVar087] + 136[iVar125])->f_184 / 2))
		{
			iParam1 = ((&Param0 + 736[iVar087] + 136[iVar125])->f_184 / 2);
		}
	}
	if (iParam1 > Local_49.f_176)
	{
		iParam1 = Local_49.f_176;
	}
	if (StackVal > (&Param0 + 736[iParam187])->f_556)
	{
		iParam1 = (&Param0 + 736[StackVal87])->f_556;
	}
	return iParam1;
}

void Function_276(int iParam0) //Position: 0x165AF / 91567
{
	fLocal_22 = 0.0f;
	fLocal_23 = 0.0f;
	if (iParam0 == 0)
	{
		fLocal_24 = -0,375f;
	}
	else if (iParam0 == 1)
	{
		fLocal_24 = 0.0f;
	}
	else if (iParam0 == 2)
	{
		fLocal_24 = 0,375f;
	}
	fLocal_25 = 0.0f;
	return;
}

bool Function_277() //Position: 0x165E7 / 91623
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 100);
	if (iVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

var Function_278(bool bParam0) //Position: 0x16602 / 91650
{
	bool bVar0;
	
	bVar0 = Function_279();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_279() //Position: 0x1661C / 91676
{
	Global_10990 = (Global_10990 + 1 % 10);
	switch (Global_10990)
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

bool Function_280(struct<2969> Param0) //Position: 0x166D8 / 91864
{
	int iVar0;
	
	switch (iParam2)
	{
		case 0x00000000:
			iVar0 = (&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_184 * 2;
			break;
		
		case 0x00000001:
			iVar0 = (&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_184;
			break;
		
		case 0x00000002:
			iVar0 = ((&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_184 * 2 + FLOOR((IntToFloat((&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_184) * 0,5f)));
			break;
		
		case 0x00000003:
			iVar0 = (&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_188 * 2;
			break;
	}
	if (StackVal == iParam1)
	{
		PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
	}
	(&Param0 + 736[iParam187])->f_556 = ((&Param0 + 736[iParam187])->f_556 + iVar0);
	if (iParam2 == 3)
	{
		(&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_188 = 0;
	}
	else
	{
		(&Param0 + 736[iParam187] + 136[(&Param0 + 736[iParam187])->f_54825])->f_184 = 0;
	}
	return iVar0;
}

bool Function_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, bool bParam25) //Position: 0x16848 / 92232
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= iParam0.f_176)
	{
		iVar3 = Function_266(&(iParam0[iVar1]));
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
		if ((iVar0 + 11 + ((iVar2 - iVar1) - 1)) >= 21 && !&bParam25)
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

int Function_282() //Position: 0x168C9 / 92361
{
	return StackVal;
}

int Function_283() //Position: 0x168DD / 92381
{
	return (&Local_110 + 736[Function_282()87])->f_548;
}

void Function_284(struct<2833> Param0) //Position: 0x168F0 / 92400
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= Param0.f_2832)
		{
			if ((*&Param0 + 2832)[iVar05])
			{
				if ((&Param0 + 736[StackVal87])->f_544 == 1)
				{
					if (iVar1 == 0)
					{
						Function_286(StackVal, &Param0, &Var2, &Var4);
						SET_OBJECT_POSITION(&Param0 + 736[(&Param0 + 736[iVar187])->f_54887] + 136[StackVal25] + 88[StackVal], Var2);
						SET_OBJECT_ORIENTATION(&Param0 + 736[(&Param0 + 736[iVar187])->f_54887] + 136[StackVal25] + 88[StackVal], Var4);
					}
					else if (iVar1 == 1)
					{
						Function_285(StackVal, &Param0, &Var2, &Var4);
						SET_OBJECT_POSITION(&Param0 + 736[(&Param0 + 736[iVar187])->f_54887] + 136[StackVal25] + 88[StackVal], Var2);
						SET_OBJECT_ORIENTATION(&Param0 + 736[(&Param0 + 736[iVar187])->f_54887] + 136[StackVal25] + 88[StackVal], Var4);
					}
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	return;
}

void Function_285(int iParam0, int iParam1, struct<2> Param2) //Position: 0x16A7A / 92794
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = &iParam0 + 736[iParam187];
	if (IS_ACTOR_VALID(&uVar0))
	{
		GET_POSITION(&uVar0, &Var1);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar0), &Var3);
		if (ACTOR_HAS_ANIM_SET(&uVar0, "blackjack_hillb"))
		{
			Param2 = Vector(0,046f, 0,802f, -0,1505f);
			iParam3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var3, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&uVar0, "blackjack_gped"))
		{
			Param2 = Vector(0,046f, 0,802f, -0,1505f);
			iParam3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var3, StackVal);
		}
		else
		{
			Param2 = Vector(0,046f, 0,802f, -0,1505f);
			iParam3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var3, StackVal);
		}
		UNK_0xF76F2BB3(&Param2, &Var3, 0, 4);
		Param2 = Vector(StackVal, StackVal, StackVal) + Vector(Var1, Param2, StackVal);
	}
}

void Function_286(int iParam0, int iParam1, struct<2> Param2) //Position: 0x16B63 / 93027
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = &iParam0 + 736[iParam187];
	if (IS_ACTOR_VALID(&uVar0))
	{
		GET_POSITION(&uVar0, &Var1);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar0), &Var3);
		if (ACTOR_HAS_ANIM_SET(&uVar0, "blackjack_hillb"))
		{
			Param2 = Vector(0,027f, 0,8f, -0,13f);
			iParam3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var3, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&uVar0, "blackjack_gped"))
		{
			Param2 = Vector(0,027f, 0,8f, -0,13f);
			iParam3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var3, StackVal);
		}
		else
		{
			Param2 = Vector(0,027f, 0,8f, -0,13f);
			iParam3 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var3, StackVal);
		}
		UNK_0xF76F2BB3(&Param2, &Var3, 0, 4);
		Param2 = Vector(StackVal, StackVal, StackVal) + Vector(Var1, Param2, StackVal);
	}
}

bool Function_287(struct<549> Param0) //Position: 0x16C4C / 93260
{
	if ((&Param0 + 136[Param0.f_54825])->f_176 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_288(int iParam0, int iParam1, int iParam2) //Position: 0x16C6B / 93291
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<2> Var14;
	struct<2> Var16;
	struct<2> Var18;
	struct<2> Var20;
	
	SET_DRAW_ACTOR(&iParam1, 0);
	SET_DRAW_OBJECT(&uLocal_97, 0);
	GET_ACTOR_AXIS(&iParam1, &Var0, 0);
	GET_ACTOR_AXIS(&iParam1, &Var2, 1);
	GET_ACTOR_AXIS(&iParam1, &Var4, 2);
	GET_POSITION(&iParam1, &Var6);
	fVar8 = 0.0f;
	fVar9 = 1,3f;
	fVar10 = 0,49f;
	if (&iParam2 == 0)
	{
		fVar11 = -0,375f;
	}
	else if (&iParam2 == 1)
	{
		fVar11 = 0.0f;
	}
	else if (&iParam2 == 2)
	{
		fVar11 = 0,375f;
	}
	fVar12 = 1.0f;
	fVar13 = -1.0f;
	Var14 = Var6;
	Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var14, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
	Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var14, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
	Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var14, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
	Var16 = Var6;
	Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var16, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
	Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var16, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
	Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var16, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
	if (Function_186(512))
	{
		CAMERA_MANUAL_CUT();
	}
	if (Function_186(512) || HUD_IS_FADED())
	{
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&iParam0);
		}
		SET_CAMERA_POSITION(&iParam0, Var14);
		SET_CAMERA_TARGET_POSITION(&iParam0, Var16, 0);
		SET_CAMERA_FOV(&iParam0, 31.0f);
		Function_199(512);
	}
	else
	{
		if (!IS_OBJECT_VALID(&uLocal_36))
		{
			uLocal_36 = CREATE_CAMERASHOT_IN_LAYOUT(&iLocal_13, Function_54());
		}
		if (!IS_OBJECT_VALID(&iLocal_38))
		{
			iLocal_38 = CREATE_CAMERASHOT_IN_LAYOUT(&iLocal_13, Function_54());
		}
		Function_289(&uLocal_36);
		Function_289(&iLocal_38);
		GET_CAMERA_POSITION(&iParam0, &Var18);
		GET_CAMERA_DIRECTION(&iParam0, &Var20);
		SET_CAMERASHOT_POSITION(&uLocal_36, Var18);
		SET_CAMERASHOT_DIRECTION(&uLocal_36, Var20, 0);
		SET_CAMERASHOT_FOV(&uLocal_36, 31.0f);
		SET_CAMERASHOT_POSITION(&iLocal_38, Var14);
		SET_CAMERASHOT_TARGET_POSITION(&iLocal_38, Var16, 0);
		SET_CAMERASHOT_FOV(&iLocal_38, 31.0f);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&iParam0);
		}
		ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(&iParam0, &uLocal_36, &iLocal_38, 1,25f, 4294967295, 0);
		ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(&iParam0, &iLocal_38, 4294967295);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		CAMERA_MANUAL_CUT();
	}
	return;
}

void Function_289(int iParam0) //Position: 0x16E9C / 93852
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	return;
}

float Function_290(vector3 vParam0) //Position: 0x16EAF / 93871
{
	if (Function_292(&vParam0))
	{
		if (Function_291(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_291(int iParam0) //Position: 0x16F7C / 94076
{
	return Function_14(iParam0, 2);
}

bool Function_292(int iParam0) //Position: 0x16F8A / 94090
{
	return Function_14(iParam0, 1);
}

void Function_293(int iParam0) //Position: 0x16F98 / 94104
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((*&iParam0 + 2832)[iVar45])
		{
			iVar6 = StackVal;
			iVar5 = 0;
			while (iVar5 <= (&iParam0 + 736[iVar687] + 136[025])->f_176)
			{
				if (iVar5 == 0)
				{
					Function_286(&iParam0, iVar6, &Var0, &Var2);
					REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0 + 736[iVar687] + 136[025] + 88[iVar5]);
					SET_OBJECT_POSITION(&iParam0 + 736[iVar687] + 136[025] + 88[iVar5], Var0);
					SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar687] + 136[025] + 88[iVar5], Var2);
				}
				else
				{
					Function_285(&iParam0, iVar6, &Var0, &Var2);
					REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0 + 736[iVar687] + 136[025] + 88[iVar5]);
					SET_OBJECT_POSITION(&iParam0 + 736[iVar687] + 136[025] + 88[iVar5], Var0);
					SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar687] + 136[025] + 88[iVar5], Var2);
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	iVar5 = 0;
	while (iVar5 <= (&iParam0 + 136[025])->f_176)
	{
		if (iVar5 == 0)
		{
			Function_295(&iParam0, &Var0, &Var2);
			REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0 + 136[025] + 88[iVar5]);
			SET_OBJECT_POSITION(&iParam0 + 136[025] + 88[iVar5], Var0);
			SET_OBJECT_ORIENTATION(&iParam0 + 136[025] + 88[iVar5], Var2);
		}
		else
		{
			Function_294(&iParam0, &Var0, &Var2);
			REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0 + 136[025] + 88[iVar5]);
			SET_OBJECT_POSITION(&iParam0 + 136[025] + 88[iVar5], Var0);
			SET_OBJECT_ORIENTATION(&iParam0 + 136[025] + 88[iVar5], Var2);
		}
		iVar5++;
	}
	return;
}

void Function_294(float fParam0, float fParam1, int iParam2) //Position: 0x17170 / 94576
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = &fParam0;
	if (IS_ACTOR_VALID(&uVar0))
	{
		Var1 = Vector(-0,014f, 0,803f, -0,684f);
		Var3 = Vector(0.0f, 180.0f, 0.0f);
		GET_OBJECT_RELATIVE_ORIENTATION(&uVar0, Var3, &iParam2);
		GET_OBJECT_RELATIVE_POSITION(&uVar0, Var1, &fParam1);
	}
	return;
}

void Function_295(float fParam0, float fParam1, var uParam2) //Position: 0x171C0 / 94656
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	uVar0 = &fParam0;
	if (IS_ACTOR_VALID(&uVar0))
	{
		Var1 = Vector(-0,039f, 0,801f, -0,552f);
		Var3 = Vector(0.0f, 0.0f, 180.0f);
		GET_OBJECT_RELATIVE_ORIENTATION(&uVar0, Var3, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&uVar0, Var1, &fParam1);
	}
	return;
}

void Function_296(int iParam0) //Position: 0x17210 / 94736
{
	if (IS_ATTACHMENT_VALID(&iParam0 + 672[0]))
	{
		REMOVE_OBJECT_ATTACHMENT(&iParam0 + 672[0]);
	}
	if (IS_ATTACHMENT_VALID(&iParam0 + 672[1]))
	{
		REMOVE_OBJECT_ATTACHMENT(&iParam0 + 672[1]);
	}
	return;
}

int Function_297(int iParam0) //Position: 0x17250 / 94800
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	switch (iLocal_99)
	{
		case 0x00000000:
			if (Function_301(&iParam0, 0, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "A", 1);
			}
			if (Function_301(&iParam0, 1, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "B", 1);
			}
			if (Function_301(&iParam0, 2, 0))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "C", 1);
			}
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "blackjack/Dealer/deal");
			iLocal_99 = 1;
			iLocal_100 = 0;
			break;
		
		case 0x00000001:
			if (Function_274() != 1.0f || (GET_CURR_ACTION_NODE_PLAY_TIME(&iParam0) < 0,17f && !iLocal_100))
			{
				if (Function_301(&iParam0, 0, 0) && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/A1/deal_A_pre") || HUD_IS_FADED()))
				{
					Function_300(StackVal, &iParam0);
					iLocal_100 = 1;
				}
				else if (Function_301(&iParam0, 1, 0) && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/B1/deal_B_pre") || HUD_IS_FADED()))
				{
					Function_300(StackVal, &iParam0);
					iLocal_100 = 1;
				}
				else if (Function_301(&iParam0, 2, 0) && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/C1/deal_C_pre") || HUD_IS_FADED()))
				{
					Function_300(StackVal, &iParam0);
					iLocal_100 = 1;
				}
				else if ((&iParam0 + 136[025])->f_176 != 0 && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/D1/deal_self_pre") || HUD_IS_FADED()))
				{
					Function_298(&iParam0);
					iLocal_100 = 1;
				}
				else if (Function_301(&iParam0, 0, 1) && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/A2/deal_A_pre") || HUD_IS_FADED()))
				{
					Function_257(StackVal, &iParam0);
					iLocal_100 = 1;
				}
				else if (Function_301(&iParam0, 1, 1) && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/B2/deal_B_pre") || HUD_IS_FADED()))
				{
					Function_257(StackVal, &iParam0);
					iLocal_100 = 1;
				}
				else if (Function_301(&iParam0, 2, 1) && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/C2/deal_C_pre") || HUD_IS_FADED()))
				{
					Function_257(StackVal, &iParam0);
					iLocal_100 = 1;
				}
				else if ((&iParam0 + 136[025])->f_176 != 1 && (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/D2/deal_self_pre") || HUD_IS_FADED()))
				{
					Function_249(&iParam0);
					iLocal_100 = 1;
				}
			}
			if ((((((((IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/A1/deal_A_pst") || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/B1/deal_B_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/C1/deal_C_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/D1/deal_self_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/A2/deal_A_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/B2/deal_B_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/C2/deal_C_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/D2/deal_self_pst")) || HUD_IS_FADED())
			{
				Function_296(&iParam0);
				iLocal_100 = 0;
				if (!HUD_IS_FADED())
				{
					if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/A1/deal_A_pst"))
					{
						iVar0 = StackVal;
						Function_286(&iParam0, iVar0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 736[iVar087] + 136[025] + 88[0], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar087] + 136[025] + 88[0], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/B1/deal_B_pst"))
					{
						iVar0 = StackVal;
						Function_286(&iParam0, iVar0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 736[iVar087] + 136[025] + 88[0], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar087] + 136[025] + 88[0], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/C1/deal_C_pst"))
					{
						iVar0 = StackVal;
						Function_286(&iParam0, iVar0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 736[iVar087] + 136[025] + 88[0], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar087] + 136[025] + 88[0], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal/D1/deal_self_pst"))
					{
						Function_295(&iParam0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 136[025] + 88[0], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 136[025] + 88[0], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/A2/deal_A_pst"))
					{
						iVar0 = StackVal;
						Function_285(&iParam0, iVar0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 736[iVar087] + 136[025] + 88[1], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar087] + 136[025] + 88[1], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/B2/deal_B_pst"))
					{
						iVar0 = StackVal;
						Function_285(&iParam0, iVar0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 736[iVar087] + 136[025] + 88[1], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 736[iVar087] + 136[025] + 88[1], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/C2/deal_C_pst"))
					{
						iVar0 = StackVal;
						Function_285(&iParam0, iVar0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 136[025] + 88[1], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 136[025] + 88[1], Var3);
					}
					else if (IS_ACTION_NODE_PLAYING(&iParam0, "blackjack/Dealer/deal2/D2/deal_self_pst"))
					{
						Function_294(&iParam0, &Var1, &Var3);
						SET_OBJECT_POSITION(&iParam0 + 136[025] + 88[1], Var1);
						SET_OBJECT_ORIENTATION(&iParam0 + 136[025] + 88[1], Var3);
					}
				}
				if (((&iParam0 + 136[025])->f_176 != 2 && !IS_ATTACHMENT_VALID(&iParam0 + 672[0])) && !IS_ATTACHMENT_VALID(&iParam0 + 672[1]))
				{
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "A");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "B");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "C");
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_298(struct<549> Param0) //Position: 0x17B75 / 97141
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var9;
	struct<2> Var11;
	int iVar13;
	
	Var9 = Vector(0.0f, 0.0f, 0.0f);
	Var11 = Vector(0.0f, 0.0f, 0.0f);
	iVar0 = 0;
	iVar13 = Function_251(&Param0 + 2976);
	Function_250(&Param0 + 136[Param0.f_54825], &iVar13);
	Param0.f_544 = 1;
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&iVar13) };
	if (iVar0 == 0)
	{
		Var9 = *(&Param0 + 696 + 16);
		Var11 = *(&Param0 + 696 + 28);
		Var11 = 180.0f;
	}
	else
	{
		Function_299(&Param0 + 136[Param0.f_54825] + 88[0]);
		Var9 = Function_299(&Param0 + 136[Param0.f_54825] + 88[0]);
		GET_OBJECT_ORIENTATION(&Param0 + 136[Param0.f_54825] + 88[0], &Var11);
		Var11 = 0.0f;
	}
	*(&Param0 + 136[Param0.f_54825] + 88[iVar0]) = CREATE_PROP_IN_LAYOUT(&iLocal_13, Function_54(), &Var1, Var9, Var11, 1);
	if (iVar0 == 0)
	{
		*(&Param0 + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 136[Param0.f_54825] + 88[iVar0], &Param0, "wrist_r_attachment", "grab", 4294967295);
	}
	else if (iVar0 == 1)
	{
		*(&Param0 + 672[1]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 136[Param0.f_54825] + 88[iVar0], &Param0, "head_attachment", "grab", 4294967295);
	}
	return;
}

struct<8> Function_299(int iParam0) //Position: 0x17CD2 / 97490
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	GET_OBJECT_POSITION(&iParam0, &Var4);
	GET_OBJECT_AXIS(&iParam0, &Var0, 0);
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var0, Var4, StackVal) * Vector(0,02f, 0,02f, 0,02f), StackVal, StackVal);
	GET_OBJECT_AXIS(&iParam0, &Var2, 2);
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var4, StackVal) * Vector(0,11f, 0,11f, 0,11f), StackVal, StackVal);
	Var4.f_4 = (StackVal + 0,002f);
	return StackVal, Var4;
}

void Function_300(int iParam0, int iParam1) //Position: 0x17D30 / 97584
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	struct<8> Var10;
	var uVar18;
	
	iVar1 = (&iParam0 + 736[iParam187])->f_552;
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	iVar0 = 0;
	uVar18 = Function_251(&iParam0 + 2976);
	Function_250(&iParam0 + 736[iParam187] + 136[(&iParam0 + 736[iParam187])->f_54825], &uVar18);
	(&iParam0 + 736[187])->f_544 = StackVal;
	Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&uVar18) };
	if (iVar0 == 0)
	{
		GET_OBJECT_POSITION(&iParam0 + 2832[iVar15] + 8, &Var2);
		GET_OBJECT_AXIS(&iParam0 + 2832[iVar15] + 8, &Var6, 0);
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var2, StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal);
		GET_OBJECT_AXIS(&iParam0 + 2832[iVar15] + 8, &Var8, 2);
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var8, Var2, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
		Var2.f_4 = StackVal;
		GET_OBJECT_ORIENTATION(&iParam0 + 2832[iVar15] + 8, &Var4);
		Var4.f_4 = (StackVal + 180.0f);
	}
	else
	{
		Function_247(&iParam0 + 736[(&iParam0 + 736[087])->f_54887] + 136[StackVal25] + 88[StackVal]);
		Var2 = Function_247(&iParam0 + 736[(&iParam0 + 736[087])->f_54887] + 136[StackVal25] + 88[StackVal]);
		GET_OBJECT_ORIENTATION(&iParam0 + 736[(&iParam0 + 736[087])->f_54887] + 136[StackVal25] + 88[StackVal], &Var4);
	}
	*(&iParam0 + 736[(&iParam0 + 736[iVar087])->f_54887] + 136[CREATE_PROP_IN_LAYOUT(&iLocal_13, Function_54(), &Var10, Var2, Var4, 1)25] + 88[StackVal]) = StackVal;
	*(&iParam0 + 672[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 736[(&iParam0 + 736[iVar087])->f_54887] + 136[StackVal25] + 88[StackVal], &iParam0, "wrist_r_attachment", "grab", 4294967295);
	return;
}

bool Function_301(int iParam0, int iParam1, int iParam2) //Position: 0x17F5D / 98141
{
	if (!(*&iParam0 + 2832)[iParam15])
	{
		return 0;
	}
	if ((&iParam0 + 736[087] + 136[StackVal25])->f_176 == iParam2)
	{
		return 1;
	}
	return 0;
}

int Function_302(struct<2833> Param0) //Position: 0x17F9C / 98204
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_2832)
	{
		if ((*&Param0 + 2832)[iVar05])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_303(int iParam0, int iParam1) //Position: 0x17FD1 / 98257
{
	if (!Function_307(&iParam0, iParam1))
	{
		Function_304(&iParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_304(var[] uParam0, int iParam1) //Position: 0x17FEE / 98286
{
	Function_77(&(uParam0[Function_306(iParam1)]), Function_305(iParam1));
	return;
}

int Function_305(int iParam0) //Position: 0x18007 / 98311
{
	return Function_146((iParam0 % 32));
}

int Function_306(int iParam0) //Position: 0x18015 / 98325
{
	return (iParam0 / 32);
}

bool Function_307(var[] uParam0, int iParam1) //Position: 0x18020 / 98336
{
	return Function_14(uParam0[Function_306(iParam1)], Function_305(iParam1));
}

void Function_308(int iParam0, int iParam1) //Position: 0x18038 / 98360
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<2> Var14;
	struct<2> Var16;
	
	SET_DRAW_ACTOR(&iParam1, 1);
	SET_DRAW_OBJECT(&uLocal_97, 1);
	GET_POSITION(&iParam1, &Var0);
	GET_ACTOR_AXIS(&iParam1, &Var4, 0);
	GET_ACTOR_AXIS(&iParam1, &Var6, 1);
	GET_ACTOR_AXIS(&iParam1, &Var2, 2);
	fVar8 = -1,23f;
	fVar9 = 1,38f;
	fVar10 = -2,12f;
	fVar11 = 0,11f;
	fVar12 = 1,1f;
	fVar13 = -0,58f;
	Var14 = Var0;
	Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var14, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
	Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var14, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
	Var14 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var14, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
	Var16 = Var0;
	Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var16, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
	Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var16, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
	Var16 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var16, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&iParam0);
	}
	SET_CAMERA_POSITION(&iParam0, Var14);
	SET_CAMERA_TARGET_POSITION(&iParam0, Var16, 0);
	SET_CAMERA_FOV(&iParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	if (!Function_186(512))
	{
		CAMERA_MANUAL_CUT();
	}
	Function_198(512);
	return;
}

void Function_309(int iParam0) //Position: 0x18175 / 98677
{
	Function_310(&iParam0, 0.0f);
	return;
}

void Function_310(vector3 vParam0) //Position: 0x18182 / 98690
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_27(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_311() //Position: 0x181A7 / 98727
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_312(int[] iParam0) //Position: 0x181B9 / 98745
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_313(struct<2833> Param0) //Position: 0x181D9 / 98777
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_2832)
	{
		if ((*&Param0 + 2832)[iVar05])
		{
			if (IS_ATTACHMENT_VALID(&Param0 + 736[StackVal87] + 664))
			{
				if (StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[(StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 736[IS_ACTION_NODE_PLAYING(&Param0 + 736[StackVal87], "blackjack/Player/bet/small_pst")87], "blackjack/Player/bet/allin_pst"))87], "blackjack/Player/bet/allin_B_pst"))87], "blackjack/Player/bet/B/bet_pst"))87], "blackjack/Player/bet/B/dd_pst"))87], "blackjack/Player/bet/B/sdd_pst"))87], "blackjack/Player/bet/B/spb_pst"))87], "blackjack/Player/bet/G/bet_pst"))87], "blackjack/Player/bet/G/dd_pst"))87], "blackjack/Player/bet/G/sdd_pst"))87], "blackjack/Player/bet/G/spb_pst"))87], "blackjack/Player/bet/R/bet_pst"))87], "blackjack/Player/bet/R/dd_pst"))87], "blackjack/Player/bet/R/sdd_pst"))87], "blackjack/Player/bet/R/spb_pst"))
				{
					REMOVE_OBJECT_ATTACHMENT(&Param0 + 736[StackVal87] + 664);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_314(struct<2833> Param0) //Position: 0x185A3 / 99747
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_2832)
	{
		if ((*&Param0 + 2832)[iVar05])
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_317((&Param0 + 736[StackVal87])->f_556) };
			if (!STRINGS_ARE_EQUAL(StackVal, &Param0 + 736[&Var387] + 560))
			{
				GET_OBJECT_POSITION(&Param0 + 736[StackVal87] + 624, &Var1);
				if ((!CAMERA_IS_VISIBLE_POINT(&iLocal_34, Var1, 1065353216, 1117126656, 1, 1, 0) || HUD_IS_FADED()) || fParam1)
				{
					Function_315(StackVal, &Param0, &iParam2);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_315(struct<2969> Param0) //Position: 0x18662 / 99938
{
	struct<2> Var0;
	struct<2> Var2;
	
	PRINTSTRING("Updating Chip Stack for Player # ");
	PRINTINT(bParam1);
	PRINTNL();
	if (IS_OBJECT_VALID(&Param0 + 736[bParam187] + 624))
	{
		PRINTSTRING("Destroying Existing ChipStack");
		PRINTNL();
		DESTROY_OBJECT(&Param0 + 736[bParam187] + 624);
		while (IS_OBJECT_VALID(&Param0 + 736[bParam187] + 624) && !IS_EXITFLAG_SET())
		{
			PRINTSTRING("Waiting for ChipStack to be Destroyed...");
			PRINTNL();
		}
	}
	if ((&Param0 + 736[bParam187])->f_556 >= 0)
	{
		*(&Param0 + 736[bParam187] + 560) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_317((&Param0 + 736[bParam187])->f_556) };
		if (StackVal != bParam1 && iParam2)
		{
			Function_316(&Param0, bParam1, &Var0, &Var2, 1);
		}
		else
		{
			Function_316(&Param0, bParam1, &Var0, &Var2, 0);
		}
		*(&Param0 + 736[bParam187] + 624) = CREATE_PROP_IN_LAYOUT(&iLocal_13, Function_54(), &Param0 + 736[bParam187] + 560, Var0, Var2, 0);
		PRINTSTRING("Spawning New ChipStack at ");
		PRINTVECTOR(Var0);
		PRINTNL();
	}
	else
	{
		strcpy(&Param0 + 736[bParam187] + 560, "", 32);
	}
	return;
}

void Function_316(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x18803 / 100355
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	bool bVar5;
	
	uVar0 = &iParam0 + 736[bParam187];
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (ACTOR_HAS_ANIM_SET(&uVar0, "blackjack_hillb"))
		{
			Var1 = Vector(0.0f, 0,8f, -0,0649f);
			Var3 = Vector(0.0f, 180.0f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&uVar0, "blackjack_gped"))
		{
			Var1 = Vector(0,269f, 0,8f, -0,175f);
			Var3 = Vector(0.0f, 180.0f, 0.0f);
		}
		else if (&bParam4)
		{
			Var1 = Vector(0,3958f, 0,8f, -0,3682f);
			Var3 = Vector(0.0f, -169,867f, 0.0f);
		}
		else
		{
			Var1 = Vector(0,268f, 0,8f, -0,181f);
			Var3 = Vector(0.0f, -169,867f, 0.0f);
		}
		if (&bParam4)
		{
			bVar5 = &iParam0 + 2832[(&iParam0 + 736[bParam187])->f_5525] + 8;
			GET_OBJECT_RELATIVE_ORIENTATION(&bVar5, Var3, &uParam3);
			GET_OBJECT_RELATIVE_POSITION(&bVar5, Var1, &uParam2);
		}
		else
		{
			GET_OBJECT_RELATIVE_ORIENTATION(&uVar0, Var3, &uParam3);
			GET_OBJECT_RELATIVE_POSITION(&uVar0, Var1, &uParam2);
		}
	}
}

struct<32> Function_317(int iParam0) //Position: 0x18936 / 100662
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

void Function_318() //Position: 0x1896A / 100714
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_319())
			{
				SET_ACTION_NODE_FOR_ACTOR(&Local_110, "blackjack/Dealer/cards_idle");
				Function_314(&Local_110, 0, 0);
				if (!IS_OBJECT_VALID(&uLocal_97))
				{
					uLocal_97 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_13, Function_54(), "$/fragments/p_gen_cards02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					ATTACH_OBJECTS_USING_LOCATOR(&uLocal_97, GET_OBJECT_FROM_ACTOR(&Local_110), "elbow_l_attachment", "grab", 4294967295);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(&uLocal_97, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_97, GET_OBJECT_FROM_ACTOR(&Local_110), 0);
				}
				if ((*&Local_110 + 2832)[05])
				{
					Local_110.f_2972 = 0;
					Local_110.f_2964 = 0;
				}
				else if ((*&Local_110 + 2832)[15])
				{
					Local_110.f_2972 = 1;
					Local_110.f_2964 = 1;
				}
				else
				{
					Local_110.f_2972 = 2;
					Local_110.f_2964 = 2;
				}
				Function_198(512);
				Function_288(&iLocal_34, &Local_110, Local_110.f_2964);
				CAMERA_MANUAL_CUT();
				Function_309(&iLocal_30);
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
			iLocal_106 = 1;
			break;
	}
	return;
}

bool Function_319() //Position: 0x18B5D / 101213
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_12)
	{
		case 0x000003E8:
			iLocal_12 = 1005;
			if (IS_VOLUME_VALID(&uLocal_15))
			{
				if (IS_OBJECTSET_VALID(&uLocal_17))
				{
					Function_334(&uLocal_17);
				}
				else
				{
					uLocal_17 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_13, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(&uLocal_15, &uLocal_17, 0, 1);
				iVar0 = 0;
				while (iVar0 <= iVar1)
				{
					iVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uLocal_17));
					if (!Function_333(&iVar2))
					{
						if (((IS_ACTOR_HOGTIED(&iVar2) || IS_ACTOR_CRIPPLED(&iVar2, 5)) || IS_ACTOR_VEHICLE(&iVar2)) || IS_ACTOR_HORSE(&iVar2))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							CAMERA_MANUAL_CUT();
							iLocal_12 = 1004;
						}
					}
					iVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(&uLocal_15))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(&uLocal_15);
					if (IS_OBJECTSET_VALID(&uLocal_17))
					{
						Function_334(&uLocal_17);
					}
					else
					{
						uLocal_17 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_13, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(&uLocal_15, &uLocal_17, 0, 1);
					iVar0 = 0;
					while (iVar0 <= iVar1)
					{
						iVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uLocal_17));
						if (!Function_333(&iVar2))
						{
							if (((IS_ACTOR_HOGTIED(&iVar2) || IS_ACTOR_CRIPPLED(&iVar2, 5)) || IS_ACTOR_VEHICLE(&iVar2)) || IS_ACTOR_HORSE(&iVar2))
							{
								DESTROY_ACTOR(&iVar2);
							}
						}
						iVar0++;
					}
				}
				CAMERA_MANUAL_CUT();
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_12 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (&Global_46715 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
			{
				Local_26 = { StackVal, Global_11646[122] };
			}
			else if (&Global_46715 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
			{
				Local_26 = { StackVal, Global_11222[142] };
			}
			else if (&Global_46715 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
			{
				Local_26 = { StackVal, Global_12048[112] };
			}
			else if (&Global_46715 == FIND_NAMED_LAYOUT("BlackWater_layout"))
			{
				Local_26 = { StackVal, Global_12488[342] };
			}
			if (!Function_332(&Local_26))
			{
				if (&Global_46715 == FIND_NAMED_LAYOUT("ThievesLanding_layout"))
				{
					Function_329(&Global_11646, &Global_13732, 12, 0, 0, 1);
				}
				else if (&Global_46715 == FIND_NAMED_LAYOUT("RathskellerFork_layout"))
				{
					Function_329(&Global_11222, &Global_13104, 14, 0, 0, 1);
				}
				else if (&Global_46715 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
				{
					Function_329(&Global_12048, &Global_14326, 11, 0, 0, 1);
				}
				else if (&Global_46715 == FIND_NAMED_LAYOUT("BlackWater_layout"))
				{
					Function_329(&Global_12488, &Global_14976, 34, 0, 0, 1);
				}
			}
			if (Function_332(&Local_26))
			{
				iVar0 = 0;
				while (iVar0 <= Local_49.f_16)
				{
					if (IS_ACTOR_VALID(&Local_49 + 16[iVar0]))
					{
						Function_325(&Local_49 + 16[iVar0], &Local_110, iVar0, (*&Local_49 + 116)[iVar0], GET_ACTOR_ENUM_STRING(&Local_49 + 16[iVar0]));
					}
					iVar0++;
				}
				SET_DRAW_ACTOR(&Local_49 + 8, 0);
				SET_DRAW_OBJECT(&uLocal_97, 0);
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					Function_324(GET_GRINGO_FROM_OBJECT(&Local_110 + 2832[iVar05] + 8));
					iVar0++;
				}
				Function_314(&Local_110, 1, 1);
				Function_323();
				SAY_SINGLE_LINE_CONTEXT(&Local_110 + 736[StackVal87], 454, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MAKE_ACTOR_READY_FOR_ACTION(&Local_49 + 8, 1);
				CAMERA_MANUAL_CUT();
				iLocal_12 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_28(), "blackjack/Player/idle") && Function_322())
			{
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Local_49 + 8)))
			{
				Function_320(&Local_49 + 8, &Local_110);
			}
			break;
	}
	return 0;
}

void Function_320(var uParam0, struct<697> Param1) //Position: 0x18F5D / 102237
{
	if (!Param1.f_696)
	{
		Param1.f_696 = 1;
		Function_321(&Param1, &uParam0);
		RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(&uParam0, "nblackjack", 0);
		while (!ACTOR_HAS_ANIM_SET(&uParam0, "nblackjack") && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
		SNAP_ACTOR_TO_GRINGO(&uParam0, &Param1 + 696 + 8, "UseCase2", 1, 0, 0);
		TASK_USE_GRINGO(&uParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 696 + 8), "UseCase2", 1, 1);
	}
	return;
}

void Function_321(struct<557> Param0) //Position: 0x18FF7 / 102391
{
	Param0 = &uParam1;
	Param0.f_552 = 0;
	Function_229(&Param0 + 136, 2);
	Param0.f_556 = 1000;
	strcpy(&Param0 + 8, "Dealer", 64);
	ACTOR_HOLSTER_WEAPON(&Param0, 1);
	return;
}

int Function_322() //Position: 0x19036 / 102454
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
	if (!STREAMING_IS_PROP_LOADED(&uVar2))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(&uVar5))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(&uVar4))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(&uVar3))
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
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var6) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&Var7, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

void Function_323() //Position: 0x191B7 / 102839
{
	int iVar0;
	var uVar1;
	
	if (Function_111(4))
	{
		Function_198(256);
		Function_185(4, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_ACTOR_VALID(&Local_49 + 16[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH(&Local_49 + 16[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_49 + 16[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_49 + 16[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_49 + 16[iVar0], 4, true);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_49 + 16[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uVar1 = &Local_49 + 16[iVar0];
		if (IS_ACTOR_VALID(&uVar1) && !IS_ACTOR_HUMAN(&uVar1))
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uVar1, 26, false);
		}
		iVar0++;
	}
	Function_199(1024);
	if (UNK_0xE094DB31(Function_28(), 1))
	{
		Function_198(1024);
		DEEQUIP_ACCESSORY(Function_28(), 1);
	}
	return;
}

void Function_324(int iParam0) //Position: 0x19289 / 103049
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&iParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar2, &iParam0);
			if (IS_PHYSINST_VALID(&uVar3))
			{
				HIDE_PHYSINST(&uVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&iParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar4, &iParam0);
			if (IS_PHYSINST_VALID(&uVar5))
			{
				HIDE_PHYSINST(&uVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_325(int iParam0, struct<2969> Param1) //Position: 0x19389 / 103305
{
	var uVar0;
	bool bVar1;
	
	if (!bParam2 != 4294967295 && !(*&Param1 + 2832)[bParam25])
	{
		PRINTSTRING("Adding player at specific seat ");
		PRINTINT(bParam2);
		PRINTNL();
		Function_327(&Param1 + 736[Param1.f_296087], &iParam0, bParam2, uParam3, &uParam4);
		(*&Param1 + 2832)[bParam25] = 1;
		(&Param1 + 2832[bParam25])->f_4 = Param1.f_2960;
		Param1.f_2960++;
		if (&iParam0 == GET_PLAYER_ACTOR(0))
		{
			Param1.f_2968 = bParam2;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			uVar0 = GET_OBJECT_FROM_ACTOR(&iParam0);
			Function_326(&iLocal_34, GET_GRINGO_FROM_OBJECT(&Param1 + 2832[Param1.f_29685] + 8));
			RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&iParam0, "nblackjack", 0);
			while (!ACTOR_HAS_ANIM_SET(&iParam0, "nblackjack") && !IS_EXITFLAG_SET())
			{
				WAIT(0);
			}
			SNAP_ACTOR_TO_GRINGO(&iParam0, &Param1 + 2832[bParam25] + 8, "UseCase2", 0, 0, 1);
			TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 2832[bParam25] + 8), "UseCase2", 4294967295, 1);
		}
		else
		{
			bVar1 = RAND_INT_RANGE(0, 2);
			switch (bVar1)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&iParam0, "nblackjack", 0);
					while (!ACTOR_HAS_ANIM_SET(&iParam0, "nblackjack") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&iParam0, "blackjack_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(&iParam0, "blackjack_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&iParam0, "blackjack_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(&iParam0, "blackjack_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
			}
			TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 2832[bParam25] + 8), "UseCase1", 1, 1);
			TASK_PRIORITY_SET(&iParam0, true);
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "blackjack/Player/idle");
		}
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_326(var uParam0, int iParam1) //Position: 0x19647 / 104007
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<2> Var15;
	struct<2> Var17;
	
	if (IS_GRINGO_VALID(&iParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iParam1), &Var0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var2, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var4, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var6, 2);
		fVar8 = -0,2f;
		fVar9 = 1.0f;
		fVar10 = -1,5f;
		fVar11 = -0,05f;
		fVar12 = 1,11f;
		fVar13 = -0,4f;
		fVar14 = 37.0f;
		Var15 = Var0;
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var15, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var15, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var15, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
		Var17 = Var0;
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var17, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var17, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var17, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
		}
		SET_CAMERA_POSITION(&uParam0, Var15);
		SET_CAMERA_TARGET_POSITION(&uParam0, Var17, 0);
		SET_CAMERA_FOV(&uParam0, fVar14);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_327(struct<557> Param0) //Position: 0x197BE / 104382
{
	if (!AI_IGNORE_ACTOR(&uParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(&uParam1, 1);
	Param0 = &uParam1;
	Param0.f_552 = uParam2;
	if (&Param0 == GET_PLAYER_ACTOR(0))
	{
		Function_328((iParam3 / 10), 0);
		strcpy(&Param0 + 8, "BJ_Player_Name", 64);
	}
	else
	{
		strcpy(&Param0 + 8, &cParam4, 64);
	}
	Function_229(&Param0 + 136, 2);
	Param0.f_544 = 0;
	Param0.f_548 = 0;
	Param0.f_556 = iParam3;
	ACTOR_HOLSTER_WEAPON(&Param0, 1);
}

int Function_328(bool bParam0, bool bParam1) //Position: 0x19864 / 104548
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) - bParam0) <= 0)
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
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	return 1;
}

var Function_329(struct<2>[] Param0, vector3[] vParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x198F5 / 104693
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_194(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_194(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_194(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_191(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_331(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_194(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_191(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_191(&(Param0[iVar02]), 1);
	Function_330(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_330(int iParam0, bool bParam1) //Position: 0x19ABC / 105148
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_331(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x19B6E / 105326
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_54(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

bool Function_332(int iParam0) //Position: 0x19C95 / 105621
{
	return Function_194(&iParam0, 1);
}

bool Function_333(int iParam0) //Position: 0x19CA2 / 105634
{
	int iVar0;
	
	if (&iParam0 == Function_28())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= Local_49.f_16)
	{
		if (IS_ACTOR_VALID(&Local_49 + 16[iVar0]))
		{
			if (&iParam0 == &Local_49 + 16[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (&iParam0 == &Local_49 + 8)
	{
		return 1;
	}
	return 0;
}

void Function_334(var uParam0) //Position: 0x19CF6 / 105718
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
	}
	return;
}

void Function_335(struct<3409> Param0) //Position: 0x19D36 / 105782
{
	Param0.f_2960 = 0;
	Param0.f_2964 = 0;
	Param0.f_2972 = 0;
	Param0.f_3408 = 0;
	Function_242(&Param0 + 2976);
	Function_241(&Param0 + 2976);
	Function_337(&Param0 + 2832);
	Function_336(&Param0 + 696);
	return;
}

void Function_336(struct<5> Param0) //Position: 0x19D7C / 105852
{
	var uVar0;
	struct<2> Var2;
	int iVar4;
	
	Param0 = 0;
	uVar0 = *(&Local_49 + 104);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &uVar0, 3.0f, 1));
	while (!IS_OBJECT_VALID(&Param0 + 8) && !IS_EXITFLAG_SET())
	{
		*(&Param0 + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("fake_blackjack_dealer", &uVar0, 3.0f, 1));
		WAIT(0);
	}
	if (IS_OBJECT_VALID(&Param0 + 8))
	{
		Function_324(GET_GRINGO_FROM_OBJECT(&Param0 + 8));
	}
	Param0.f_4 = 4294967295;
	*(&Param0 + 16) = *(&Local_49 + 148);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	iVar4 = 3;
	UNK_0x44986367(StackVal, (&Var2 + (-90.0f * IntToFloat(iVar4))));
	*(&Param0 + 16) = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, *(&Param0 + 16), StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal);
	*(&Param0 + 28) = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 16), *(&Local_49 + 148), StackVal);
	(&Param0 + 28)->f_4 = UNK_0x9C40E671(&Param0 + 28);
	UNK_0x44986367(StackVal, &Var2);
	*(&Param0 + 16) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, *(&Param0 + 16), StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal);
	return;
}

void Function_337(struct<5>[] Param0) //Position: 0x19EA9 / 106153
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	var uVar7;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar05] = 0;
		uVar7 = *(&Local_49 + 48[iVar02]);
		*(&Param0[iVar05] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &uVar7, 0,5f, 0));
		while (!IS_OBJECT_VALID(&Param0[iVar05] + 8) && !IS_EXITFLAG_SET())
		{
			*(&Param0[iVar05] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &uVar7, 0,5f, 0));
			WAIT(0);
		}
		Param0[iVar05].f_4 = 4294967295;
		GET_OBJECT_POSITION(&Param0[iVar05] + 8, &Var1);
		GET_OBJECT_AXIS(&Param0[iVar05] + 8, &Var3, 0);
		Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var1, StackVal) * Vector(0,1f, 0,1f, 0,1f), StackVal, StackVal);
		GET_OBJECT_AXIS(&Param0[iVar05] + 8, &Var5, 2);
		Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var5, Var1, StackVal) * Vector(0,4f, 0,4f, 0,4f), StackVal, StackVal);
		*(&Param0[iVar05] + 16) = Var1;
		(&Param0[iVar05] + 16)->f_4 = StackVal;
		GET_OBJECT_ORIENTATION(&Param0[iVar05] + 8, &Param0[iVar05] + 28);
		(&Param0[iVar05] + 28)->f_4 = (StackVal + 180.0f);
		iVar0++;
	}
	return;
}

void Function_338() //Position: 0x1A04C / 106572
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
	STREAMING_REQUEST_PROP(&uVar0, true);
	uVar1 = GET_ASSET_ID("$/fragments/p_crd_chipRed01x", 0);
	STREAMING_REQUEST_PROP(&uVar1, true);
	uVar2 = GET_ASSET_ID("$/fragments/p_crd_chipGreen01x", 0);
	STREAMING_REQUEST_PROP(&uVar2, true);
	uVar3 = GET_ASSET_ID("$/fragments/p_crd_chipBlue01x", 0);
	STREAMING_REQUEST_PROP(&uVar3, true);
	iVar4 = 0;
	while (iVar4 <= 13)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			Var6 = iVar4;
			Var6.f_4 = iVar5;
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177(&Var6) };
			STREAMING_REQUEST_PROP(GET_ASSET_ID(&Var7, 0), true);
			iVar5++;
		}
		iVar4++;
	}
	return;
}

bool Function_339() //Position: 0x1A19E / 106910
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

void Function_340(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1A220 / 107040
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_341() //Position: 0x1A2B5 / 107189
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_342(int iParam0, int iParam1) //Position: 0x1A2C1 / 107201
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<2> Var15;
	struct<2> Var17;
	
	if (IS_GRINGO_VALID(&iParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iParam1), &Var0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var2, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var4, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var6, 2);
		fVar8 = -0,2f;
		fVar9 = 1.0f;
		fVar10 = -1,75f;
		fVar11 = -0,05f;
		fVar12 = 1,14f;
		fVar13 = -0,4f;
		fVar14 = 37.0f;
		Var15 = Var0;
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var15, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var15, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var15, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
		Var17 = Var0;
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var17, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var17, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var17, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&iParam0);
		}
		SET_CAMERA_POSITION(&iParam0, Var15);
		SET_CAMERA_TARGET_POSITION(&iParam0, Var17, 0);
		SET_CAMERA_FOV(&iParam0, fVar14);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&iParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_343() //Position: 0x1A438 / 107576
{
	int iVar0;
	
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(1);
	Function_348();
	iLocal_13 = CREATE_LAYOUT(Function_54());
	Function_347();
	Function_199(513);
	Function_345(&iLocal_40);
	if (Function_231(4, 2))
	{
		Function_312(&iLocal_40);
	}
	Function_344(&iLocal_30);
	Function_344(&iLocal_101);
	iLocal_34 = CREATE_CAMERA_IN_LAYOUT(&iLocal_13, "blackJackCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(&iLocal_34, "nblackjack");
	INIT_CAMERA_FROM_GAME_CAMERA(&iLocal_34);
	uLocal_15 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_13, "BlackJack_StayOutvol", 2,802597E-45f, (&Local_49 + 148), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 5.0f, 3.0f));
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_ACTOR_VALID(&Local_49 + 16[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Local_49 + 16[iVar0], 1);
			REFERENCE_ACTOR(&Local_49 + 16[iVar0]);
			CLEAR_LAST_HIT(&Local_49 + 16[iVar0]);
		}
		iVar0++;
	}
	SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Local_49 + 8, 1);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_15);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_15);
	iLocal_0 = 99;
	return;
}

void Function_344(int iParam0) //Position: 0x1A53B / 107835
{
	if (!Function_292(&iParam0))
	{
		Function_310(&iParam0, 0.0f);
	}
	return;
}

void Function_345(int iParam0) //Position: 0x1A552 / 107858
{
	Function_346(&iParam0);
	return;
}

void Function_346(int[] iParam0) //Position: 0x1A55E / 107870
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_347() //Position: 0x1A57E / 107902
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

void Function_348() //Position: 0x1A5E6 / 108006
{
	Global_42259 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_180();
	Function_349();
	if (!Global_6627)
	{
		Global_6627 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_349() //Position: 0x1A616 / 108054
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

