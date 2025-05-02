//Decompiled with MagicRDR v1.0
//Function Count : 601
//Statics Count : 1176
//Natives Count : 702
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2457> Local_4 = { 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_622 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_992 = 99;
	bLocal_993 = 6;
	iLocal_985 = 1000;
	while (Function_269())
	{
		Function_213();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	if (bLocal_1127 != 4294967295)
	{
		if (GET_TASK_STATUS(bLocal_1054, 0) == 1)
		{
			TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(bLocal_1127, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bLocal_1054, 0);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bLocal_1054, 0);
	}
	if (bLocal_1128 != 4294967295)
	{
		if (GET_TASK_STATUS(bLocal_1055, 0) == 1)
		{
			TASK_STAND_STILL(bLocal_1055, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(bLocal_1128, 0);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[6]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[6]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[6]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[6]);
	}
	STREAMING_UNLOAD_BOUNDS();
	Function_212(bLocal_1097);
	SET_AMBIENT_ANIMALS_AGRESSIVENESS(1);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1095);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1096);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1097);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1098);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1099);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1100);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1101);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1102);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1103);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1104);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1105);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1068);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1069);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1070);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1071);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1072);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1054);
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_1054, 0);
	if (IS_ACTOR_ALIVE(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "CutTheCamera"))
		{
			DECOR_REMOVE(Global_34573, "CutTheCamera");
		}
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
	}
	Function_209(9, 1, 0, 1, 1);
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	DISABLE_CHILD_SECTOR("sp_anthro01x");
	Function_208(16384);
	Function_207(bLocal_621);
	Function_207(Local_4);
	Function_206();
	Function_205();
	Function_179(bLocal_1139, 1, 0, 1, 1, 1, 1, 1);
	Function_175(&bLocal_778);
	Function_175(&bLocal_782);
	Function_175(&bLocal_789);
	Function_175(&bLocal_796);
	Function_175(&bLocal_800);
	Function_175(&bLocal_804);
	Function_175(&bLocal_862);
	Function_175(&bLocal_920);
	Function_174();
	Function_173();
	Function_172();
	Function_171();
	Function_170();
	Function_168();
	RELEASE_LAYOUT_REF(bLocal_621);
	if (bLocal_1138)
	{
		Function_24(Local_622, 1, 1, 1, 0);
	}
	else if (bLocal_1139)
	{
		Function_20(Local_622);
	}
	else
	{
		Function_2(Local_622);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x260 / 608
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x281 / 641
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x29C / 668
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2BD / 701
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x2D3 / 723
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

void Function_7(int iParam0) //Position: 0x36F / 879
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x390 / 912
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

void Function_9() //Position: 0x3D6 / 982
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3EF / 1007
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x442 / 1090
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

struct<16> Function_12(int iParam0) //Position: 0x566 / 1382
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x58B / 1419
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5AB / 1451
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x5C2 / 1474
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x5DD / 1501
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x824 / 2084
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x84D / 2125
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

bool Function_19(int iParam0) //Position: 0x871 / 2161
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x886 / 2182
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x8A4 / 2212
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

struct<16> Function_22(int iParam0) //Position: 0x94A / 2378
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x974 / 2420
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xBCA / 3018
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

void Function_25() //Position: 0xCB7 / 3255
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

int Function_26(int iParam0, bool bParam1) //Position: 0xCE7 / 3303
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

int Function_27(int iParam0) //Position: 0xD24 / 3364
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD3E / 3390
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD54 / 3412
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x104B / 4171
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

void Function_31(char* cParam0, int iParam1) //Position: 0x10B7 / 4279
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x10EE / 4334
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

bool Function_33(var uParam0, int iParam1) //Position: 0x1166 / 4454
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1179 / 4473
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

int Function_35(int iParam0) //Position: 0x121A / 4634
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

void Function_36(int iParam0, bool bParam1) //Position: 0x1257 / 4695
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x126A / 4714
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

void Function_38(int iParam0, int iParam1) //Position: 0x147C / 5244
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x14B6 / 5302
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

bool Function_40() //Position: 0x14F8 / 5368
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1501 / 5377
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

void Function_42() //Position: 0x1552 / 5458
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

void Function_43() //Position: 0x1585 / 5509
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

void Function_44() //Position: 0x168B / 5771
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

void Function_45() //Position: 0x16BE / 5822
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

void Function_46() //Position: 0x184C / 6220
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

void Function_47() //Position: 0x1A00 / 6656
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1A0E / 6670
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

var Function_49() //Position: 0x1BFF / 7167
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1C14 / 7188
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CAF / 7343
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F4A / 8010
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

bool Function_53() //Position: 0x2577 / 9591
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x257F / 9599
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2590 / 9616
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2685 / 9861
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x269E / 9886
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2703 / 9987
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2715 / 10005
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2727 / 10023
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

int Function_61(int iParam0) //Position: 0x2857 / 10327
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2866 / 10342
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x289F / 10399
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x28DC / 10460
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A76 / 10870
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

int Function_66(bool bParam0) //Position: 0x2C90 / 11408
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2CD1 / 11473
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

struct<8> Function_68() //Position: 0x2D5A / 11610
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

struct<8> Function_69() //Position: 0x2DF1 / 11761
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

void Function_70() //Position: 0x2E70 / 11888
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2E96 / 11926
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

void Function_72() //Position: 0x30A0 / 12448
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

bool Function_73(vector3 vParam0) //Position: 0x3141 / 12609
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3159 / 12633
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

vector3 Function_75() //Position: 0x3240 / 12864
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(int iParam0, bool bParam1) //Position: 0x3249 / 12873
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3258 / 12888
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x326E / 12910
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3335 / 13109
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3352 / 13138
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

bool Function_81(int iParam0) //Position: 0x382E / 14382
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3844 / 14404
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3863 / 14435
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x387D / 14461
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x38E4 / 14564
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

void Function_86() //Position: 0x3B04 / 15108
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B84 / 15236
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3ED6 / 16086
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

int Function_89(int iParam0) //Position: 0x3F59 / 16217
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3F73 / 16243
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3FA1 / 16289
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x423E / 16958
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

void Function_93(int iParam0, int iParam1) //Position: 0x4401 / 17409
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x465F / 18015
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

int Function_95() //Position: 0x47E4 / 18404
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

void Function_96() //Position: 0x4883 / 18563
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

void Function_97(int iParam0) //Position: 0x4932 / 18738
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

var Function_98(int iParam0) //Position: 0x4990 / 18832
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4A1F / 18975
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

var Function_100(int iParam0, int iParam1) //Position: 0x4BBC / 19388
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

void Function_101() //Position: 0x4BFD / 19453
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C13 / 19475
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C53 / 19539
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4C93 / 19603
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4CA2 / 19618
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

int Function_106(int iParam0) //Position: 0x4E6A / 20074
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

var Function_107() //Position: 0x4EFF / 20223
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F24 / 20260
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x53DF / 21471
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

var Function_110(int iParam0) //Position: 0x56F4 / 22260
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5797 / 22423
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5992 / 22930
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B2E / 23342
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5BF9 / 23545
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

void Function_115(int iParam0) //Position: 0x64E9 / 25833
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6658 / 26200
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x675E / 26462
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x678B / 26507
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

var Function_119(vector3 vParam0) //Position: 0x67E2 / 26594
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6830 / 26672
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6884 / 26756
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

void Function_122() //Position: 0x6A22 / 27170
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A28 / 27176
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6ACC / 27340
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6B21 / 27425
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6B37 / 27447
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6B88 / 27528
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

void Function_128(var uParam0, int iParam1) //Position: 0x6BB5 / 27573
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6BC4 / 27588
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6BDB / 27611
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6BEA / 27626
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
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D34 / 27956
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

bool Function_133() //Position: 0x6D7F / 28031
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6DAC / 28076
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

int Function_135(int iParam0) //Position: 0x6F5C / 28508
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6FB3 / 28595
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

var Function_137(int iParam0) //Position: 0x6FD8 / 28632
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x702E / 28718
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

bool Function_139(bool bParam0) //Position: 0x708D / 28813
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x7099 / 28825
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x70B5 / 28853
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

int Function_142(int iParam0, int iParam1) //Position: 0x7107 / 28935
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

int Function_143(int iParam0, int iParam1) //Position: 0x717A / 29050
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x71D6 / 29142
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

int Function_145(int iParam0, int iParam1) //Position: 0x7247 / 29255
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x72A1 / 29345
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x754D / 30029
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
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
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

void Function_148(int iParam0, bool bParam1) //Position: 0x77DC / 30684
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

void Function_149() //Position: 0x783B / 30779
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

var Function_150(int iParam0, int iParam1) //Position: 0x78B6 / 30902
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

int Function_151(int iParam0) //Position: 0x84A8 / 33960
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x84BD / 33981
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x850C / 34060
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8519 / 34073
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x856A / 34154
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

bool Function_156(int iParam0, int iParam1) //Position: 0x85D8 / 34264
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x85EB / 34283
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

var Function_158(int iParam0) //Position: 0x86EA / 34538
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

bool Function_159(var uParam0, int iParam1) //Position: 0x8742 / 34626
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x875E / 34654
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

bool Function_161(int iParam0) //Position: 0x87B5 / 34741
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x87C7 / 34759
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

void Function_163(int iParam0) //Position: 0x87FB / 34811
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8862 / 34914
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x893F / 35135
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

void Function_166() //Position: 0x8AB8 / 35512
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8AC4 / 35524
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

void Function_168() //Position: 0x8B0A / 35594
{
	Function_169();
	return;
}

void Function_169() //Position: 0x8B13 / 35603
{
	Function_175(&Local_4 + 4);
	Function_175(&Local_4 + 260);
	Function_175(&Local_4 + 288);
	Function_175(&Local_4 + 316);
	Function_175(&Local_4 + 344);
	Function_175(&Local_4 + 372);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170() //Position: 0x8B4D / 35661
{
	Function_175(&Local_4 + 372);
	return;
}

void Function_171() //Position: 0x8B5B / 35675
{
	Function_175(&Local_4 + 344);
	return;
}

void Function_172() //Position: 0x8B69 / 35689
{
	Function_175(&Local_4 + 316);
	return;
}

void Function_173() //Position: 0x8B77 / 35703
{
	Function_175(&Local_4 + 288);
	return;
}

void Function_174() //Position: 0x8B85 / 35717
{
	Function_175(&Local_4 + 260);
	return;
}

void Function_175(bool bParam0) //Position: 0x8B93 / 35731
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

void Function_176(var uParam0, int iParam1) //Position: 0x8BB9 / 35769
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

void Function_177(var uParam0, int iParam1) //Position: 0x8CE7 / 36071
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_178(var uParam0, bool bParam1) //Position: 0x8D01 / 36097
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_179(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8D1E / 36126
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_204());
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
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_30842[2] = 0;
	if (bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_203();
	CLEAR_PRINTED_OBJECTIVE();
	Function_202();
	Function_200(0);
	Function_199();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_198();
	Function_197();
	Function_203();
	ENABLE_JOURNAL_REPLAY(1);
	Function_196(1);
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
		Function_195(Global_34573);
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
	Function_194(Global_28178);
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
	Function_208(1178687);
	Function_192(33039);
	Function_191(0x218003f);
	Function_190(4194560);
	Function_189();
	Function_188();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_185(0, 1, 1);
	}
	else
	{
		Function_185(0, 1, 1);
	}
	Function_184();
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
	Function_180();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_180() //Position: 0x8F0F / 36623
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
		if (Function_183() > 3)
		{
			bVar0 *= 2;
		}
		Function_181(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_181(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8F65 / 36709
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_182((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_182(bool bParam0) //Position: 0x8FAB / 36779
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_183() //Position: 0x8FD0 / 36816
{
	return Global_12976.f_156;
}

void Function_184() //Position: 0x8FDB / 36827
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

void Function_185(int iParam0, bool bParam1, int iParam2) //Position: 0x9005 / 36869
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
			Function_186(Global_29006);
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

void Function_186(int iParam0) //Position: 0x9110 / 37136
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_187())
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

bool Function_187() //Position: 0x918F / 37263
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

void Function_188() //Position: 0x91EC / 37356
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

void Function_189() //Position: 0x9212 / 37394
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

void Function_190(int iParam0) //Position: 0x9238 / 37432
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_191(int iParam0) //Position: 0x9255 / 37461
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_192(int iParam0) //Position: 0x9268 / 37480
{
	Function_193(&Global_28842, iParam0);
	return;
}

void Function_193(var uParam0, int iParam1) //Position: 0x9276 / 37494
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_194(int iParam0) //Position: 0x9291 / 37521
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

void Function_195(bool bParam0) //Position: 0x9358 / 37720
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

void Function_196(bool bParam0) //Position: 0x93D4 / 37844
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

void Function_197() //Position: 0x9448 / 37960
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

void Function_198() //Position: 0x9489 / 38025
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

void Function_199() //Position: 0x94CA / 38090
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_200(int iParam0) //Position: 0x94DE / 38110
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_201())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_201() //Position: 0x951A / 38170
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

void Function_202() //Position: 0x953F / 38207
{
	Global_8722 = 0.0f;
	return;
}

void Function_203() //Position: 0x9549 / 38217
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

int Function_204() //Position: 0x9574 / 38260
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_205() //Position: 0x958E / 38286
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

void Function_206() //Position: 0x96A8 / 38568
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_207(bool bParam0) //Position: 0x96B1 / 38577
{
	char* cVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(cVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(cVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
		}
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

void Function_208(bool bParam0) //Position: 0x9709 / 38665
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

int Function_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9736 / 38710
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
		Function_211(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_210(StackVal);
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

void Function_210(bool bParam0) //Position: 0x9A54 / 39508
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

void Function_211(bool bParam0) //Position: 0x9A80 / 39552
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_212(bool bParam0) //Position: 0x9A95 / 39573
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_213() //Position: 0x9AA8 / 39592
{
	var uVar0[15];
	char* cVar16;
	
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "S02: Bear Fight";
	uVar0[4] = "S03: To Bear Claw";
	uVar0[5] = "S04: Gang Fight";
	uVar0[6] = "S05: Back to Horses";
	uVar0[7] = "S06: Pursuers 1";
	uVar0[8] = "S07: Pursuers 2";
	uVar0[9] = "S08: To Blackwater";
	uVar0[10] = "End Cutscene";
	uVar0[11] = "Kill cabin gang";
	uVar0[12] = "Attach player to cover";
	uVar0[13] = "Report Speed";
	uVar0[14] = "Buck MacDougal";
	if (!Function_268())
	{
		return;
	}
	cVar16 = Function_254(&uLocal_978, &uVar0, "RDR MISSION MENU", 1, 0);
	if (Function_253(&cVar16, &iLocal_992, &bLocal_993, &iLocal_985))
	{
		Function_246();
		Function_245();
	}
	switch (cVar16)
	{
		case 0x00000000:
			Function_246();
			Function_245();
			Function_244(&bLocal_1138, 8);
			break;
		
		case 0x00000001:
			Function_246();
			Function_245();
			Function_243("Failed from debug menu.");
			Function_239(iLocal_992);
			Function_235(StackVal, StackVal, 5, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
			break;
		
		case 0x00000002:
			Function_246();
			Function_245();
			Function_231(&bLocal_1140, 4);
			break;
		
		case 0x00000003:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_229();
			iLocal_992 = 1;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x00000004:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_225();
			iLocal_992 = 2;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x00000005:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_224();
			iLocal_992 = 3;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x00000006:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_223();
			iLocal_992 = 4;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x00000007:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_222();
			iLocal_992 = 5;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x00000008:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_221();
			iLocal_992 = 6;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x00000009:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_217();
			iLocal_992 = 7;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x0000000A:
			Function_246();
			Function_245();
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_215();
			iLocal_992 = 101;
			iLocal_985 = 1000;
			Function_226(0);
			break;
		
		case 0x0000000B:
			Function_246();
			Function_214(&Local_4 + 460);
			break;
		
		case 0x0000000C:
			Function_246();
			SET_FORCE_PLAYER_AIM_MODE(0, 1);
			SET_PLAYER_POSTURE(0, 1, 1);
			ATTACH_PLAYER_TO_COVER(0, 1, 1);
			ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
			SET_FORCE_PLAYER_AIM_MODE(0, 0);
			break;
		
		case 0x0000000D:
			Function_246();
			LOG_ERROR(FLOAT_TO_STRING_VERBOSE(bLocal_1125));
			break;
		
		case 0x0000000E:
			Function_246();
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1054, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1054, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
			break;
	}
	return;
}

void Function_214(var uParam0) //Position: 0x9EC0 / 40640
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= *uParam0)
	{
		bVar0 = (*uParam0)[iVar12];
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				KILL_ACTOR(bVar0);
			}
		}
		iVar1++;
	}
	return;
}

void Function_215() //Position: 0x9EF7 / 40695
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	AI_STOP_IGNORING_ACTORS();
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1054);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1056);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1057);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 1);
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1058);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	Function_216(bLocal_1055);
	iLocal_1141 = 0;
	SET_ACTOR_INVULNERABILITY(bLocal_1054, false);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	return;
}

void Function_216(bool bParam0) //Position: 0x9FCE / 40910
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DESTROY_ACTOR(bParam0);
	}
	return;
}

void Function_217() //Position: 0x9FE1 / 40929
{
	Function_219(9, 0, 1);
	Function_210(bLocal_1056);
	Function_212(bLocal_1097);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1056);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1057);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 1);
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1058);
	}
	Function_218(&Local_4 + 400, 1);
	Function_218(&Local_4 + 412, 1);
	Function_218(&Local_4 + 448, 1);
	Function_218(&Local_4 + 460, 1);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
	if (SQUAD_GOAL_IS_VALID(iLocal_777))
	{
		SQUAD_GOAL_REMOVE(bLocal_1051, iLocal_777);
	}
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	AI_STOP_IGNORING_ACTORS();
	TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
	iLocal_1141 = 0;
	SET_ACTOR_INVULNERABILITY(bLocal_1054, false);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1143 = 0;
	return;
}

void Function_218(var uParam0, int iParam1) //Position: 0xA0FA / 41210
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar02]))
		{
			bVar1 = GET_MOUNT((*uParam0)[iVar02]);
			if (IS_ACTOR_VALID(bVar1) && iParam1)
			{
				DESTROY_ACTOR(bVar1);
			}
			DESTROY_ACTOR((*uParam0)[iVar02]);
		}
		iVar0++;
	}
	return;
}

void Function_219(int iParam0, bool bParam1, bool bParam2) //Position: 0xA149 / 41289
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
						Function_210(bVar1);
					}
				}
				Function_220(bVar0);
			}
		}
	}
	return;
}

void Function_220(bool bParam0) //Position: 0xA240 / 41536
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

void Function_221() //Position: 0xA26C / 41580
{
	Function_219(9, 0, 1);
	Function_210(bLocal_1056);
	Function_212(bLocal_1097);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1056);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1057);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 1);
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1058);
	}
	Function_218(&Local_4 + 400, 1);
	Function_218(&Local_4 + 412, 1);
	Function_218(&Local_4 + 448, 1);
	Function_218(&Local_4 + 460, 1);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
	if (SQUAD_GOAL_IS_VALID(iLocal_777))
	{
		SQUAD_GOAL_REMOVE(bLocal_1051, iLocal_777);
	}
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
	iLocal_1141 = 0;
	SET_ACTOR_INVULNERABILITY(bLocal_1054, false);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1143 = 0;
	return;
}

void Function_222() //Position: 0xA382 / 41858
{
	Function_219(9, 0, 1);
	Function_210(bLocal_1056);
	Function_212(bLocal_1097);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1056);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1057);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 1);
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1058);
	}
	Function_218(&Local_4 + 400, 1);
	Function_218(&Local_4 + 412, 1);
	Function_218(&Local_4 + 448, 1);
	Function_218(&Local_4 + 460, 1);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
	if (SQUAD_GOAL_IS_VALID(iLocal_777))
	{
		SQUAD_GOAL_REMOVE(bLocal_1051, iLocal_777);
	}
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
	iLocal_1141 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1143 = 0;
	return;
}

void Function_223() //Position: 0xA491 / 42129
{
	Function_219(9, 0, 1);
	Function_210(bLocal_1056);
	Function_212(bLocal_1097);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1056);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1057);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1058);
	}
	Function_218(&Local_4 + 448, 1);
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
	if (SQUAD_GOAL_IS_VALID(iLocal_777))
	{
		SQUAD_GOAL_REMOVE(bLocal_1051, iLocal_777);
	}
	iLocal_1141 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1143 = 0;
	return;
}

void Function_224() //Position: 0xA575 / 42357
{
	Function_219(9, 0, 1);
	Function_210(bLocal_1056);
	Function_212(bLocal_1097);
	Function_219(9, 0, 1);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
	}
	Function_218(&Local_4 + 448, 1);
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	CLEAR_ACTOR_MAX_SPEED(bLocal_1055);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1055);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1054);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1055);
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 692)[0]);
	REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 692)[0]);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	iLocal_1143 = 0;
	return;
}

void Function_225() //Position: 0xA64B / 42571
{
	SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1055, 16.0f);
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1055);
	TASK_PRIORITY_SET(bLocal_1054, true);
	TASK_PRIORITY_SET(bLocal_1055, true);
	Function_219(9, 0, 1);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1058, 16.0f);
	}
	if (IS_ACTOR_VALID(bLocal_1059))
	{
		Function_210(bLocal_1059);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	iLocal_1141 = 0;
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	iLocal_1143 = 0;
	return;
}

void Function_226(int iParam0) //Position: 0xA712 / 42770
{
	char* cVar0[32];
	
	Function_227(&iLocal_1098);
	bLocal_993 = iParam0;
	iLocal_1126 = 0;
	iLocal_1145 = 0;
	iLocal_1143 = 0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_992)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "02", 32);
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
		
		case 0x00000005:
			stradd(&cVar0, "06", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "07", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "08", 32);
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

void Function_227(int iParam0) //Position: 0xA91D / 43293
{
	Function_228(iParam0, 0.0f);
	return;
}

void Function_228(int iParam0, float fParam1) //Position: 0xA929 / 43305
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_229() //Position: 0xA94A / 43338
{
	SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1055, 16.0f);
	CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	Function_219(9, 0, 1);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
		SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1058, 16.0f);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	iLocal_1143 = 0;
	return;
}

void Function_230(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xA9DF / 43487
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

void Function_231(bool bParam0, int iParam1) //Position: 0xAA08 / 43528
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_232(iParam1);
	*bParam0 = 1;
	return;
}

void Function_232(int iParam0) //Position: 0xAA2B / 43563
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_243("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_234(2) || Function_234(8)) || Function_234(9)) || Function_234(10))
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
		Function_243("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_243("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_243("");
	}
	else if (iParam0 == 8)
	{
		Function_233();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_233();
	}
	return;
}

void Function_233() //Position: 0xAB22 / 43810
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_234(bool bParam0) //Position: 0xAB2E / 43822
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

void Function_235(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xAB64 / 43876
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_236(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_232(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_236(vector3 vParam0, var uParam3, var uParam4) //Position: 0xABA1 / 43937
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

var Function_237(int iParam0) //Position: 0xAC24 / 44068
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

var Function_238(vector3 vParam0, bool bParam3) //Position: 0xB0D2 / 45266
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

vector3 Function_239(int iParam0) //Position: 0xB13D / 45373
{
	Function_240(iParam0 + 1);
	return StackVal, StackVal, Function_240(iParam0 + 1);
}

vector3 Function_240(int iParam0) //Position: 0xB14A / 45386
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_4 + 840[06]);
			break;
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_4 + 840[16]);
			break;
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_4 + 840[26]);
			break;
		
		case 0x00000003:
			return StackVal, StackVal, *(&Local_4 + 840[36]);
			break;
		
		case 0x00000004:
			return StackVal, StackVal, *(&Local_4 + 840[46]);
			break;
		
		case 0x00000005:
			return StackVal, StackVal, *(&Local_4 + 840[56]);
			break;
		
		case 0x00000006:
			return StackVal, StackVal, *(&Local_4 + 840[66]);
			break;
		
		case 0x00000007:
			return StackVal, StackVal, *(&Local_4 + 840[76]);
			break;
		
		default:
			return StackVal, StackVal, *(&Local_4 + 840[86]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GetPlayerPosByStage, returning first stage start position.");
	return StackVal, StackVal, *(&Local_4 + 840[06]);
}

int Function_241(int iParam0) //Position: 0xB26A / 45674
{
	return Function_242(iParam0 + 1);
}

int Function_242(bool bParam0) //Position: 0xB277 / 45687
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
		
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000006:
			return StackVal;
			break;
		
		case 0x00000007:
			return StackVal;
			break;
		
		default:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GetPlayerPosByStage, returning first stage start position.");
	return StackVal;
}

void Function_243(bool bParam0) //Position: 0xB3AB / 45995
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_244(bool bParam0, int iParam1) //Position: 0xB415 / 46101
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_232(iParam1);
	*bParam0 = 1;
	return;
}

void Function_245() //Position: 0xB438 / 46136
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_246() //Position: 0xB44D / 46157
{
	Function_248();
	Function_247(10, 3);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xB45C / 46172
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

void Function_248() //Position: 0xB593 / 46483
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_252())
	{
		Function_251(10, 3);
	}
	else
	{
		Function_249();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_249() //Position: 0xB5DE / 46558
{
	Function_250(25, 2);
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xB5EA / 46570
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

void Function_251(int iParam0, int iParam1) //Position: 0xB7E8 / 47080
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

bool Function_252() //Position: 0xB91F / 47391
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

bool Function_253(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB986 / 47494
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_246();
			Function_245();
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
		Function_243("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBA2C / 47660
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_267(&Var15, &Var0);
	uVar20 = Function_266(*uParam1, &Var15);
	Function_265(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_264(uParam0, uVar20);
	Function_262(StackVal, uParam0, Var15.f_12);
	Function_260(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_259(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_256(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_255(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_255(int iParam0, int iParam1, int iParam2) //Position: 0xBAF3 / 47859
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

bool Function_256(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xBB4F / 47951
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
				Function_258(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_258(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_255(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_257(bParam1->f_32);
	}
	else
	{
		Function_257(bParam1->f_32);
	}
	return 0;
}

void Function_257(bool bParam0) //Position: 0xBCD5 / 48341
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

void Function_258(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xBD0F / 48399
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

var Function_259(int iParam0, var uParam1, int iParam2) //Position: 0xBDBD / 48573
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_260(var uParam0, int iParam1, int iParam2) //Position: 0xBDE1 / 48609
{
	switch (Function_261())
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

int Function_261() //Position: 0xBE7D / 48765
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

void Function_262(var uParam0, int iParam1, int iParam2) //Position: 0xBEB9 / 48825
{
	switch (Function_263(uParam0))
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

int Function_263(int iParam0) //Position: 0xBF51 / 48977
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

var Function_264(var uParam0, int iParam1) //Position: 0xC09D / 49309
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

void Function_265(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC1EC / 49644
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
	GUI_SET_TEXT(bVar4, cParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_266(int iParam0, int iParam1) //Position: 0xC27F / 49791
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_267(var uParam0, var uParam1) //Position: 0xC299 / 49817
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

bool Function_268() //Position: 0xC2E7 / 49895
{
	return Global_30920;
}

bool Function_269() //Position: 0xC2F0 / 49904
{
	if (IS_EXITFLAG_SET())
	{
		Function_239(iLocal_992);
		Function_235(StackVal, StackVal, 4, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
		return 0;
	}
	Function_600(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_622, iLocal_992, bLocal_993, &bLocal_1140, &bLocal_1138, &bLocal_1139);
	if (iLocal_992 == 99 && iLocal_992 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_239(iLocal_992);
			Function_235(StackVal, StackVal, 1, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
			return 1;
		}
		if (Function_580(&Local_669, &uLocal_629, &uLocal_772, cLocal_1050, iLocal_1141))
		{
			if (Function_578(&uLocal_772))
			{
				Function_239(iLocal_992);
				Function_235(StackVal, StackVal, 5, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
				return 1;
			}
		}
		if (Function_577(2048))
		{
			Function_239(iLocal_992);
			Function_235(StackVal, StackVal, 3, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
			return 1;
		}
		if (Global_3403)
		{
			Function_239(iLocal_992);
			Function_235(StackVal, StackVal, 2, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
			return 1;
		}
		Function_576();
	}
	switch (iLocal_992)
	{
		case 0x00000063:
			Function_542();
			break;
		
		case 0x00000000:
			Function_526();
			break;
		
		case 0x00000001:
			Function_509();
			break;
		
		case 0x00000002:
			Function_475();
			break;
		
		case 0x00000003:
			Function_439();
			break;
		
		case 0x00000004:
			Function_428();
			break;
		
		case 0x00000005:
			Function_418();
			break;
		
		case 0x00000006:
			Function_395();
			break;
		
		case 0x00000007:
			Function_341();
			break;
		
		case 0x00000065:
			Function_272();
			break;
		
		case 0x00000064:
			if (Function_271(&bLocal_1139))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_270(&iLocal_992, &bLocal_993, &iLocal_985))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1138)
	{
		Function_244(&bLocal_1138, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1139 && iLocal_992 == 100)
	{
		Function_239(iLocal_992);
		Function_235(StackVal, StackVal, 5, &bLocal_1139, &iLocal_992, Function_241(iLocal_992), Function_239(iLocal_992), 0);
	}
	if (bLocal_1140)
	{
		Function_231(&bLocal_1140, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_270(var uParam0, var uParam1, int iParam2) //Position: 0xC4D2 / 50386
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

bool Function_271(int iParam0) //Position: 0xC512 / 50450
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_272() //Position: 0xC525 / 50469
{
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_334();
			if (!iLocal_1129[7])
			{
				if (!Function_333(Global_30717[0]))
				{
					Function_332(&Local_622);
				}
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Function_331();
				Function_226(1);
			}
			else
			{
				Function_330();
				Function_226(3);
			}
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_333(Global_30717[0])) && Function_326(&bLocal_778))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1054, *(&Local_4 + 840[176]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
				Function_216(bLocal_1057);
				if (IS_ACTOR_VALID(bLocal_1056))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[306]), 1, true, 1);
					TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
				}
				Function_330();
				Function_226(3);
			}
			else if (Function_323(&iLocal_1098) < 2.0f)
			{
				Function_227(&iLocal_1098);
			}
			break;
		
		case 0x00000003:
			if (Function_273("$/cutscene/ANTHRO01_END/ANTHRO01_END", &iLocal_985, &Local_622, &iLocal_992, 58537, 53884, 53800, 53753, 53493, 53482, 1, 2, 1, 2, 2, 0, 1))
			{
				TASK_CLEAR(Global_34573);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(106);
				bLocal_1138 = true;
			}
			break;
		
		case 0x0000006A:
			bLocal_1138 = true;
			break;
	}
	return;
}

bool Function_273(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC6B8 / 50872
{
	if (!bParam15)
	{
		Function_283(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_282(iParam2) || iParam2->f_24 < 1))
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
				Function_227(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_281())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_280(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(iParam1 + 4);
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
					Function_280(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_323(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_323(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_278(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_63097 = 0;
						Function_280(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_227(iParam1 + 4);
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
						Function_277(1.0f);
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
						Function_275();
						if (!IS_OBJECT_VALID(iParam1->f_16))
						{
							HUD_ENABLE(1);
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
					Function_274(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_282(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_274(int iParam0) //Position: 0xCCCC / 52428
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
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

void Function_275() //Position: 0xCD71 / 52593
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_276();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_276() //Position: 0xCDB6 / 52662
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_277(bool bParam0) //Position: 0xCDC8 / 52680
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

void Function_278(bool bParam0, bool bParam1) //Position: 0xCDE5 / 52709
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
			if ((bVar3 == Global_34573 && !Function_279(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_279(bool bParam0) //Position: 0xCE65 / 52837
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

int Function_280(bool bParam0) //Position: 0xCE94 / 52884
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

bool Function_281() //Position: 0xCF4C / 53068
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

bool Function_282(int iParam0) //Position: 0xCF86 / 53126
{
	return iParam0->f_20;
}

void Function_283(var uParam0, int iParam1) //Position: 0xCF90 / 53136
{
	Function_284(uParam0, iParam1, 0);
	return;
}

void Function_284(var uParam0, bool bParam1, bool bParam2) //Position: 0xCF9E / 53150
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
			Function_230(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_230(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_285() //Position: 0xD0EA / 53482
{
	iLocal_1142 = 1;
	return 1;
}

int Function_286() //Position: 0xD0F5 / 53493
{
	Function_287(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_287(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xD109 / 53513
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
		Function_245();
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
	Function_274(iParam9);
}

int Function_288() //Position: 0xD1F9 / 53753
{
	Function_289();
	return 1;
}

void Function_289() //Position: 0xD203 / 53763
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 2004[06]), 1, true, 1);
	return;
}

int Function_290() //Position: 0xD228 / 53800
{
	if (!iLocal_1168)
	{
		if (iLocal_1129[7])
		{
			Function_216(bLocal_1057);
			if (IS_ACTOR_VALID(bLocal_1056))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[306]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
			}
		}
		iLocal_1168 = 1;
	}
	return 1;
}

int Function_291() //Position: 0xD27C / 53884
{
	if (Function_292() && Function_333(Global_30717[0]))
	{
		Function_227(&iLocal_1098);
		return 1;
	}
	if (Function_323(&iLocal_1098) < 2.0f)
	{
		Function_227(&iLocal_1098);
	}
	return 0;
}

bool Function_292() //Position: 0xD2AF / 53935
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 1;
	if (Function_323(&iLocal_1098) < 1.0f)
	{
		bVar1 = true;
		Function_227(&iLocal_1098);
	}
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_315(0))
	{
		if (bVar1)
		{
		}
		iVar0 = 0;
	}
	if (!Function_310())
	{
		if (bVar1)
		{
		}
		iVar0 = 0;
	}
	if (!IS_ACTOR_VALID(bLocal_1054))
	{
		if (bVar1)
		{
		}
		bLocal_1054 = Function_301(9, 0, 1, 0, 0, 0, 0, 0, 0);
		iVar0 = 0;
	}
	if (!Function_300())
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_1056))
	{
		if (bVar1)
		{
		}
		bLocal_1056 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
		iVar0 = 0;
	}
	else if (!IS_ACTOR_READY_FOR_ACTION(bLocal_1056))
	{
		if (bVar1)
		{
		}
		MAKE_ACTOR_READY_FOR_ACTION(bLocal_1056, 1);
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_293(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xD362 / 54114
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
	if (Global_3381 || Function_234(1))
	{
		Function_299(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_300())
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

void Function_294(bool bParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, var uParam5, int iParam6) //Position: 0xD6BA / 54970
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, uParam4);
	}
}

var Function_295(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD6F7 / 55031
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

vector3 Function_296(bool bParam0) //Position: 0xD792 / 55186
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

bool Function_297() //Position: 0xD7B9 / 55225
{
	if (Function_298() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_298() //Position: 0xD7CF / 55247
{
	return Global_12976.f_152;
}

void Function_299(var uParam0, bool bParam1, bool bParam2) //Position: 0xD7DA / 55258
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

bool Function_300() //Position: 0xD807 / 55303
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_301(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0xD827 / 55335
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
		Function_219(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_309(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_304(StackVal, uParam7);
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
		Function_303(bVar1, 0, 0, 0, 0);
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
		Function_302(bVar1, 0);
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

void Function_302(bool bParam0, bool bParam1) //Position: 0xDD11 / 56593
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_303(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xDD31 / 56625
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

bool Function_304(int iParam0, bool bParam1) //Position: 0xDD85 / 56709
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_308(iParam0))
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
						Function_305(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_305(bool bParam0, bool bParam1) //Position: 0xDE05 / 56837
{
	Function_307(bParam0);
	Function_306(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_306(bool bParam0) //Position: 0xDE2B / 56875
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_307(bool bParam0) //Position: 0xDE4F / 56911
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

bool Function_308(int iParam0) //Position: 0xDF1E / 57118
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_309(int iParam0, bool bParam1) //Position: 0xDF35 / 57141
{
	char* cVar0;
	bool bVar1;
	bool bVar2;
	
	cVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(cVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(cVar0);
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
					DESTROY_ITERATOR(cVar0);
					LOG_ERROR("found actor in GC!");
					return bVar2;
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return "";
}

bool Function_310() //Position: 0xDFC8 / 57288
{
	Function_314(&Local_4 + 4, 980, 2, 0);
	Function_314(&Local_4 + 4, 1102, 2, 0);
	Function_314(&Local_4 + 4, 476, 2, 0);
	Function_314(&Local_4 + 4, 475, 2, 0);
	Function_314(&Local_4 + 4, 470, 2, 0);
	Function_314(&Local_4 + 4, 468, 2, 0);
	Function_314(&Local_4 + 4, 469, 2, 0);
	Function_314(&Local_4 + 4, 467, 2, 0);
	Function_314(&Local_4 + 4, 471, 2, 0);
	Function_314(&Local_4 + 4, 472, 2, 0);
	Function_314(&Local_4 + 4, 474, 2, 0);
	Function_314(&Local_4 + 4, 977, 2, 0);
	Function_314(&Local_4 + 4, 984, 2, 0);
	Function_314(&Local_4 + 4, 976, 2, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle_loop", 1, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_311(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stool_sit_attach_indef", 1, 0);
	if (Function_326(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_311(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE29E / 58014
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_313(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_312(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_312(var uParam0, int iParam1) //Position: 0xE2D6 / 58070
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_313(var uParam0, int iParam1, int iParam2) //Position: 0xE2E7 / 58087
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_178(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_312(uParam0[iVar03], 4);
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

var Function_314(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE3AB / 58283
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
			Function_312(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_312(uParam0[iVar03], 8);
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

bool Function_315(bool bParam0) //Position: 0xE47B / 58491
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

int Function_316() //Position: 0xE4A9 / 58537
{
	iLocal_1142 = 0;
	Function_319(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_317(StackVal, StackVal, bLocal_621, Global_34574, &Local_4 + 672[2], 0, 0, 0, 0, 1, 1);
	Function_227(&iLocal_1098);
	return 1;
}

void Function_317(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xE4E2 / 58594
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
				Function_318(bVar1, bParam0);
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

void Function_318(bool bParam0, bool bParam1) //Position: 0xE750 / 59216
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

void Function_319(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE7C5 / 59333
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
	HUD_ENABLE(0);
	Function_245();
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
				Function_322(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_322(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_321()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_321()));
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
	if (Function_320(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_320(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_320(int iParam0) //Position: 0xEA6E / 60014
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_321() //Position: 0xEA8A / 60042
{
	bool bVar0;
	char* cVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		cVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(cVar1);
		ITERATE_ON_OBJECT_TYPE(cVar1, 42);
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
				bVar2 = OBJECT_ITERATOR_NEXT(cVar1);
			}
		}
		DESTROY_ITERATOR(cVar1);
	}
	return "";
}

vector3 Function_322(bool bParam0) //Position: 0xEB09 / 60169
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_323(int iParam0) //Position: 0xEB1A / 60186
{
	if (Function_325(iParam0))
	{
		if (Function_324(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_324(int iParam0) //Position: 0xEBE2 / 60386
{
	return Function_153(*iParam0, 2);
}

bool Function_325(int iParam0) //Position: 0xEBEF / 60399
{
	return Function_153(*iParam0, 1);
}

bool Function_326(bool bParam0) //Position: 0xEBFC / 60412
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_329();
	iVar1 = 0;
	if (!Function_178(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_312(bParam0[iVar03], 8);
		}
		else if (Function_328())
		{
			iVar1 = 1;
			Function_312(bParam0[iVar03], 8);
		}
		Function_312(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_178(bParam0[iVar03], 4))
		{
			if (!Function_178(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_178(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_178(bParam0[03], 8) || iVar1));
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
				Function_312(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_178(bParam0[iVar03], 4))
		{
			if (!Function_178(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
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
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
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
	Function_327();
	return 1;
}

void Function_327() //Position: 0xEF77 / 61303
{
	if (!Function_320(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_328() //Position: 0xEFB7 / 61367
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

void Function_329() //Position: 0xEFE2 / 61410
{
	if (!Function_320(128))
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

void Function_330() //Position: 0xF024 / 61476
{
	return;
}

void Function_331() //Position: 0xF02A / 61482
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[86]), 1, true, 1);
	return;
}

void Function_332(int iParam0) //Position: 0xF051 / 61521
{
	if (!Function_282(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_185(1, 0, 1);
		}
	}
	return;
}

bool Function_333(bool bParam0) //Position: 0xF06C / 61548
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_334() //Position: 0xF088 / 61576
{
	Function_162(12);
	Function_335(32776);
	return;
}

void Function_335(int iParam0) //Position: 0xF09A / 61594
{
	Function_336(&Global_28842, iParam0);
	return;
}

void Function_336(var uParam0, int iParam1) //Position: 0xF0A8 / 61608
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_337(bool bParam0) //Position: 0xF0CB / 61643
{
	Function_338(0, 0x40400000);
	Function_198();
	Function_197();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_338(bool bParam0, float fParam1) //Position: 0xF0FF / 61695
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
	Function_340();
	Function_339();
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

void Function_339() //Position: 0xF1FD / 61949
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_340() //Position: 0xF22F / 61999
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

void Function_341() //Position: 0xF32C / 62252
{
	float fVar0;
	
	Function_375();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1129[6])
			{
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				Function_332(&Local_622);
				Function_374();
				Function_226(1);
			}
			else
			{
				Function_373();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_326(&bLocal_920)) && Function_326(&bLocal_778))
			{
				Function_373();
				Function_226(2);
			}
			break;
		
		case 0x00000002:
			if (Function_323(&iLocal_1098) < 4.0f || (!HUD_IS_FADED() && Function_323(&iLocal_1098) < 2,5f))
			{
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[1], Function_242(iLocal_992), 2);
				Function_277(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_366())
			{
				fVar0 = Function_365(Global_34573, bLocal_1054);
				if (fVar0 < 200.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar0 < 60.0f)
				{
					if (Function_364(bLocal_1054, Global_34573, 0.0f))
					{
						if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
						{
							if (iLocal_1126 != 0)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
							}
						}
					}
					else if (GET_TASK_STATUS(bLocal_1054, 6) != 1)
					{
						TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
					}
					if (!iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
					{
						if (iLocal_1126 != 0)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
						}
					}
					if (iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro01_obj08a", 7,5f, 1, 2, 0, 0, 0);
						iLocal_1143 = 0;
					}
					if (iLocal_1126 == 0)
					{
						if (bLocal_1166)
						{
							iLocal_1126 = 11;
						}
						else if (Function_323(&iLocal_1098) < 1.0f)
						{
							Function_362();
							iLocal_1126 = 91;
						}
					}
					else if (iLocal_1126 == 11)
					{
						if (Function_323(&iLocal_1098) < 1.0f)
						{
							Function_361();
							Function_227(&iLocal_1098);
							iLocal_1126 = 12;
						}
					}
					else if (iLocal_1126 == 12)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_360();
							Function_227(&iLocal_1098);
							iLocal_1126 = 91;
						}
					}
					else if (iLocal_1126 == 91)
					{
						if (iLocal_1164)
						{
							iLocal_1126 = 92;
						}
						else if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_363("Anthro01_obj08a", 7,5f, 1, 2, 0, 0, 0);
							iLocal_1164 = 1;
							Function_227(&iLocal_1098);
							if (!bLocal_1160)
							{
								iLocal_1126 = 92;
							}
							else
							{
								iLocal_1126 = 95;
							}
						}
					}
					else if (iLocal_1126 == 95)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 1.0f)
						{
							AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
							Function_349();
							iLocal_1126 = 100;
						}
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!Function_344())
			{
				fVar0 = Function_365(Global_34573, bLocal_1054);
				if (fVar0 < 200.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar0 < 60.0f)
				{
					if (!iLocal_1143)
					{
						Function_219(9, 1, 1);
						if (IS_OBJECT_VALID(bLocal_1097))
						{
							GATEWAY_DISABLE(bLocal_1097, 1);
							Function_220(bLocal_1097);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						if (IS_OBJECT_VALID(bLocal_1097))
						{
							Function_219(9, 0, 1);
							GATEWAY_DISABLE(bLocal_1097, 0);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1097)))
							{
								ADD_BLIP_FOR_OBJECT(bLocal_1097, 330, 0f, 2, 0);
							}
							if (IS_ACTOR_RIDING(Global_34573))
							{
								Function_363("Anthro01_obj08b", 7,5f, 1, 2, 0, 0, 0);
							}
							else
							{
								Function_363("Anthro01_obj08c", 7,5f, 1, 2, 0, 0, 0);
							}
						}
						else
						{
							Function_363("Anthro01_obj08a", 0x40f00000, 1, 2, 0, 0, 0);
						}
						iLocal_1143 = 0;
					}
					if (iLocal_1126 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_212(bLocal_1097);
							bLocal_1097 = Function_343(bLocal_621, "AlleyGateway", (*&Local_4 + 692)[8], Global_34573, 1, 330, 4294967295, 0, 0, 1);
							Function_219(9, 0, 1);
							HUD_CLEAR_OBJECTIVE();
							if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 692)[8]))
							{
								if (IS_ACTOR_RIDING(Global_34573))
								{
									Function_363("Anthro01_obj08b", 7,5f, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_363("Anthro01_obj08c", 7,5f, 1, 2, 0, 0, 0);
								}
							}
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_342();
			iLocal_1129[7] = 1;
			iLocal_992 = 101;
			Function_226(0);
			break;
	}
	return;
}

void Function_342() //Position: 0xF849 / 63561
{
	Function_175(&bLocal_920);
	return;
}

bool Function_343(int iParam0, char* cParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0xF855 / 63573
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(iParam0, cParam1, bParam2, uParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
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

bool Function_344() //Position: 0xF8D2 / 63698
{
	if (iLocal_1126 == 0)
	{
		if (!IS_ACTOR_RIDING(bLocal_1054))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054);
			iLocal_1126 = 1;
		}
	}
	else if (Function_345(bLocal_1097, 0, 1, 0, 0, 0))
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
		Function_226(106);
		return 1;
	}
	return 0;
}

bool Function_345(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xF91C / 63772
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	
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
				Function_348(bVar1, bParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_347(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_347(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_346(&uVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_346(&uVar6, &vVar3);
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

int Function_346(var uParam0, int iParam1) //Position: 0xFB2E / 64302
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_73(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0,01f);
	uParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_73(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_347(bool bParam0, bool bParam1) //Position: 0xFB99 / 64409
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_348(bool bParam0, bool bParam1) //Position: 0xFBB8 / 64440
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
	else if (!bParam1 || Function_347(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_349() //Position: 0xFC15 / 64533
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_BakBlkwtr_v1_AA", "Anthro01_BakBlkwtr_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_BakBlkwtr_v1_AB", "Anthro01_BakBlkwtr_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_BakBlkwtr_v1_AC", "Anthro01_BakBlkwtr_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_BakBlkwtr_v1_AD", "Anthro01_BakBlkwtr_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_BakBlkwtr_v1_AE1", "Anthro01_BakBlkwtr_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_BakBlkwtr_v1_AE2", "Anthro01_BakBlkwtr_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_BakBlkwtr_v1_AF", "Anthro01_BakBlkwtr_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_BakBlkwtr_v1_AG", "Anthro01_BakBlkwtr_v1_AG", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_350(int iParam0) //Position: 0xFE2B / 65067
{
	Function_358(0, Global_34573, iParam0, 0);
	Function_358(1, bLocal_1054, iParam0, 0);
	Function_358(2, bLocal_1055, iParam0, 0);
	Function_358(4, Function_357(), iParam0, 0);
	Function_358(5, Function_356(), iParam0, 0);
	Function_358(6, Function_351(), iParam0, 0);
	return;
}

bool Function_351() //Position: 0xFE6D / 65133
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar2 = 999999.0f;
	if (iLocal_992 != 8)
	{
		return "";
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		bVar0 = (*&Local_4 + 600)[iVar42];
		if (Function_352(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_365(Global_34573, bVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		bVar0 = (*&Local_4 + 632)[iVar42];
		if (Function_352(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_365(Global_34573, bVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		iVar4++;
	}
	return bVar1;
}

bool Function_352(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xFF15 / 65301
{
	int iVar0;
	
	if (bParam1)
	{
		Function_355(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_355(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_355(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_355(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_355(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_355(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_355(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_355(&iVar0, 1048576);
	}
	return Function_353(bParam0, iVar0);
}

int Function_353(bool bParam0, int iParam1) //Position: 0xFF84 / 65412
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_354(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_354(iParam1, 64))
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

bool Function_354(var uParam0, int iParam1) //Position: 0x1005E / 65630
{
	return (uParam0 && iParam1) == 0;
}

void Function_355(int iParam0, bool bParam1) //Position: 0x1006B / 65643
{
	Function_76(iParam0, bParam1);
	return;
}

bool Function_356() //Position: 0x10078 / 65656
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar2 = 999999.0f;
	if (iLocal_992 != 8)
	{
		return "";
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		bVar0 = (*&Local_4 + 632)[iVar42];
		if (Function_352(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_365(Global_34573, bVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		iVar4++;
	}
	return bVar1;
}

bool Function_357() //Position: 0x100D9 / 65753
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar2 = 999999.0f;
	if (iLocal_992 != 8)
	{
		return "";
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		bVar0 = (*&Local_4 + 600)[iVar42];
		if (Function_352(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			fVar3 = Function_365(Global_34573, bVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		iVar4++;
	}
	return bVar1;
}

void Function_358(bool bParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1013A / 65850
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_359() //Position: 0x1015F / 65887
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_360() //Position: 0x1016C / 65900
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_AttkrsRetreating", "Anthro01_AttkrsRetreating", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_361() //Position: 0x101C7 / 65991
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Anthro01_2Close2Blkwtr", "Anthro01_2Close2Blkwtr", false, 2, 1, 0, 1);
		Function_350(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362() //Position: 0x1021D / 66077
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_2ndWaveDef_v1_AA", "Anthro01_2ndWaveDef_v1_AA", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_2ndWaveDef_v1_AB", "Anthro01_2ndWaveDef_v1_AB", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_363(char* cParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x102B9 / 66233
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(cParam0, fParam1, 0, iParam3, iParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(cParam0, fParam1, 0, iParam3, iParam2, iVar0, iParam5, iParam6);
	}
}

bool Function_364(bool bParam0, bool bParam1, float fParam2) //Position: 0x1030C / 66316
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

float Function_365(bool bParam0, bool bParam1) //Position: 0x103A6 / 66470
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

bool Function_366() //Position: 0x10497 / 66711
{
	bool bVar0;
	
	if (!IS_ACTOR_IN_VOLUME(bLocal_1054, (*&Local_4 + 692)[5]))
	{
		return 0;
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2456, 1, 0, 0, 1, false);
	TASK_DISMOUNT(false, 0);
	TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_4 + 1780[16], 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1054, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1054);
	Function_226(16);
	return 1;
}

void Function_367(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x104FF / 66815
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
	if (iParam3 != Global_34165.f_48 && !Function_372())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_371(0);
	Function_370();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_369(uParam4, iVar0, iVar1);
	Function_368();
}

void Function_368() //Position: 0x1059C / 66972
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

void Function_369(int iParam0, bool bParam1, bool bParam2) //Position: 0x105DD / 67037
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

void Function_370() //Position: 0x10743 / 67395
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_371(bool bParam0) //Position: 0x10767 / 67431
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

bool Function_372() //Position: 0x10796 / 67478
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_373() //Position: 0x107B1 / 67505
{
	Function_216(bLocal_1055);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[6]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[6]);
	bLocal_1160 = false;
	STREAMING_UNLOAD_BOUNDS();
	DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
	MEMORY_PREFER_RIDING(bLocal_1054, true);
	if (!iLocal_1129[6])
	{
		Function_219(9, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[296]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_1056)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1056);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[166]), 1, true, 1);
		if (GET_MOUNT(bLocal_1054) != bLocal_1057)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1054, bLocal_1057);
		}
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054, 3212836864, 3212836864, 4, 1, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_1054, true);
	}
	iLocal_994 = 0;
	return;
}

void Function_374() //Position: 0x1089B / 67739
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[76]), 1, true, 1);
	return;
}

void Function_375() //Position: 0x108C0 / 67776
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	if (IS_VOLUME_VALID((*&Local_4 + 692)[7]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_1054, (*&Local_4 + 692)[7]))
		{
			SET_ACTOR_MAX_SPEED(bLocal_1054, 4);
			if (iLocal_1126 == 92)
			{
				iLocal_1126 = 95;
			}
			DESTROY_VOLUME((*&Local_4 + 692)[7]);
		}
	}
	Function_383(1);
	Function_382();
	Function_376(StackVal, StackVal, "$/cutscene/ANTHRO01_END/ANTHRO01_END", &iLocal_994, *(&Local_4 + 1780[26]), 0, 150.0f, 300.0f, 2, 1, 2, 2, 0, 1);
	return;
}

int Function_376(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, var uParam13) //Position: 0x1095F / 67935
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_379(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_381()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_377();
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
	else if ((!Function_379(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_381()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_379(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_377() //Position: 0x10BA5 / 68517
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
			Function_378(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_378(char* cParam0, vector3 vParam1) //Position: 0x10BF9 / 68601
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

bool Function_379(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x10D21 / 68897
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_380(bParam0);
		if (VDIST(Function_380(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_380(bool bParam0) //Position: 0x10DAB / 69035
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

int Function_381() //Position: 0x10E15 / 69141
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_382() //Position: 0x10E24 / 69156
{
	bool bVar0;
	
	if (IS_ACTOR_RIDING(Global_34573))
	{
		iLocal_1167 = 0;
	}
	if (Function_323(&iLocal_1119) > 8.0f)
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
				if ((bVar0 == bLocal_1054 && bVar0 == bLocal_1055) && !IS_ACTOR_IN_ACTORSET(Local_4.f_544, bVar0))
				{
					if (iLocal_992 <= 0 && iLocal_992 >= 2)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1054, "Anthro01_GunOnAmbChar", "", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
						Function_227(&iLocal_1119);
						return;
					}
				}
			}
		}
	}
	if (IS_ACTOR_SHOOTING(Global_34573))
	{
		if (!IS_ACTOR_VALID(bVar0))
		{
			if (!iLocal_1141)
			{
				if (iLocal_992 <= 0 && iLocal_992 >= 2)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1054, "Anthro01_ShootsGunRand", "", 0, 0, 0, 2, 0, 0, 0, 1000, 0, 0);
					Function_227(&iLocal_1119);
					return;
				}
			}
		}
	}
	if (!iLocal_1167)
	{
		if ((((iLocal_992 != 0 && bLocal_993 != 16) || (iLocal_992 != 1 && iLocal_1126 > 3)) || (iLocal_992 != 2 && bLocal_993 != 16)) || (iLocal_992 <= 5 && !(iLocal_992 != 7 && bLocal_993 != 16)))
		{
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				if (IS_ACTOR_ALIVE(bLocal_1056))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1054, "Anthro01_GetsOffHorsMcd", "", 0, 0, 0, 2, 1, 0, 0, 1000, 0, 0);
					Function_227(&iLocal_1119);
					iLocal_1167 = 1;
					return;
				}
			}
		}
	}
	return;
}

void Function_383(bool bParam0) //Position: 0x10FC1 / 69569
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0)
	{
		bVar1 = GET_MOUNT(bLocal_1054);
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (bVar1 != bLocal_1057)
			{
				if (bVar1 == bLocal_1056)
				{
					if (IS_ACTOR_ALIVE(bLocal_1057))
					{
						bLocal_1056 = bLocal_1057;
						SET_ACTORS_HORSE(Global_34573, bLocal_1056);
						Function_392(bLocal_1056, 3.0f);
						SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
					}
					else
					{
						Function_391();
						bLocal_1056 = "";
					}
				}
				bLocal_1057 = bVar1;
				SET_ACTORS_HORSE(bLocal_1054, bLocal_1057);
				DECOR_SET_BOOL(bLocal_1057, "bInjuryNoEjection", true);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1057, 0.0f);
				Function_384(&(Local_669[117]), bLocal_1057, "Anthro_horse", 0, 0x5f5e100, 1);
			}
		}
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_ALIVE(bVar0))
		{
			if (bVar0 != bLocal_1056)
			{
				if (IS_ACTOR_VALID(bLocal_1056))
				{
					SET_ALLOW_RIDE_BY_AI(bLocal_1056, 1);
					Function_210(bLocal_1056);
					TASK_CLEAR(bLocal_1056);
					DECOR_REMOVE(bLocal_1056, "bInjuryNoEjection");
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 1.0f);
				}
				bLocal_1056 = bVar0;
				SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
				SET_ACTORS_HORSE(Global_34573, bLocal_1056);
				Function_392(bLocal_1056, 3.0f);
				TASK_STAND_STILL(bLocal_1056, -1.0f, 0, 0);
				DECOR_SET_BOOL(bLocal_1056, "bInjuryNoEjection", true);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
			}
		}
	}
	if (!IS_ACTOR_ALIVE(bLocal_1056))
	{
		if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_1057))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_1057, 0);
		}
		if (iLocal_992 < 2)
		{
			if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_1058))
			{
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 0);
			}
		}
	}
	return;
}

int Function_384(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11140 / 69952
{
	if (!Function_390(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_389(uParam0, bParam2))
	{
		return 0;
	}
	Function_388(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_385(uParam0, iParam4, iParam5);
	return 1;
}

void Function_385(var uParam0, int iParam1, int iParam2) //Position: 0x1117C / 70012
{
	if (iParam1 != 100000000)
	{
		Function_387(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_386(uParam0, iParam2);
	}
	return;
}

void Function_386(int iParam0, bool bParam1) //Position: 0x1119F / 70047
{
	iParam0->f_40 = 0;
	Function_387(iParam0, 2, bParam1);
	Function_387(iParam0, 4, bParam1);
	Function_387(iParam0, 8, bParam1);
	Function_387(iParam0, 16, bParam1);
	Function_387(iParam0, 32, bParam1);
	Function_387(iParam0, 64, bParam1);
	Function_387(iParam0, 128, bParam1);
	Function_387(iParam0, 256, bParam1);
	Function_387(iParam0, 512, bParam1);
	Function_387(iParam0, 1024, bParam1);
	return;
}

void Function_387(int iParam0, int iParam1, bool bParam2) //Position: 0x11205 / 70149
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

void Function_388(var uParam0, int iParam1) //Position: 0x11241 / 70209
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_389(int iParam0, bool bParam1) //Position: 0x1124D / 70221
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

bool Function_390(int iParam0, bool bParam1) //Position: 0x112D6 / 70358
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

void Function_391() //Position: 0x11462 / 70754
{
	Global_12976.f_72 = "";
	return;
}

void Function_392(bool bParam0, int iParam1) //Position: 0x1146F / 70767
{
	Function_393(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_393(bool bParam0) //Position: 0x11481 / 70785
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

bool Function_394(bool bParam0) //Position: 0x11637 / 71223
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

void Function_395() //Position: 0x1166E / 71278
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	
	Function_417();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1129[5])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				Function_332(&Local_622);
				Function_416();
				Function_226(1);
			}
			else
			{
				Function_413();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_326(&bLocal_862)) && Function_326(&bLocal_778))
			{
				Function_413();
				Function_226(2);
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADED() || Function_323(&iLocal_1098) < 2,5f)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[1], Function_242(iLocal_992), 2);
				Function_277(1.0f);
				if (!bLocal_1165)
				{
					Function_226(6);
				}
				else
				{
					Function_226(16);
				}
			}
			break;
		
		case 0x00000006:
			if (!Function_409())
			{
				fVar6 = Function_365(Global_34573, bLocal_1054);
				if (fVar6 < 200.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar6 < 60.0f)
				{
					if (Function_364(bLocal_1054, Global_34573, 0.0f))
					{
						if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
						}
					}
					else if (GET_TASK_STATUS(bLocal_1054, 6) != 1)
					{
						TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
					}
					if (!iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
					}
					iLocal_1143 = 0;
					if (iLocal_1126 == 0)
					{
						Function_408();
						Function_227(&iLocal_1098);
						iLocal_1126 = 1;
					}
					else if (iLocal_1126 == 1)
					{
						if (iLocal_1164)
						{
							iLocal_1126 = 2;
						}
						else if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_363("Anthro01_obj07a", 7,5f, 1, 2, 0, 0, 0);
							iLocal_1164 = 1;
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
					else if (iLocal_1126 == 2)
					{
						if (!Function_359() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_407();
							Function_227(&iLocal_1098);
							iLocal_1126 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!Function_406())
			{
				Function_405(bLocal_1054, &uVar0);
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2444, &Global_34574, &uVar0, &uVar3, &uVar4, &uVar5);
				if (!Function_402(&bLocal_1163))
				{
					fVar6 = Function_365(Global_34573, bLocal_1054);
					if (fVar6 < 200.0f)
					{
						Function_243("Anthro_abandoned");
						bLocal_1139 = true;
					}
					else if (fVar6 < 70.0f)
					{
						if (!iLocal_1145)
						{
							Function_401();
							iLocal_1145 = 1;
						}
						else if (!iLocal_1143)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (GET_TASK_STATUS(bLocal_1054, 6) != 1)
								{
									TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
								}
								Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
								iLocal_1143 = 1;
							}
						}
					}
					else
					{
						if (iLocal_1145 || iLocal_1143)
						{
							if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
							}
							Function_400();
							iLocal_1143 = 0;
							iLocal_1145 = 0;
						}
						if (iLocal_1126 == 1)
						{
							Function_399();
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
						else if (iLocal_1126 == 2)
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							Function_398();
							Function_227(&iLocal_1098);
							iLocal_1126 = 3;
						}
						else if (iLocal_1126 == 3)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
							{
								Function_363("Anthro01_obj07b", 7,5f, 1, 2, 0, 0, 0);
								iLocal_1164 = 0;
								Function_227(&iLocal_1098);
								iLocal_1126 = 4;
							}
						}
						else if (iLocal_1126 == 4)
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
							{
								Function_227(&iLocal_1098);
							}
							else if (Function_323(&iLocal_1098) < 20.0f)
							{
								Function_397();
								Function_227(&iLocal_1098);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_396();
				iLocal_1129[6] = 1;
				iLocal_992 = 7;
				Function_226(0);
			}
			break;
	}
	return;
}

void Function_396() //Position: 0x11A74 / 72308
{
	Function_175(&bLocal_862);
	return;
}

void Function_397() //Position: 0x11A80 / 72320
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_AttkShouts", "Anthro01_AttkShouts", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_398() //Position: 0x11ACF / 72399
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_McdSpotsAmb", "Anthro01_McdSpotsAmb", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_399() //Position: 0x11B20 / 72480
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Anthro01_AmbsMoreGangs", "Anthro01_AmbsMoreGangs", false, 1, 1, 0, 1);
		Function_350(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_400() //Position: 0x11B76 / 72566
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_401() //Position: 0x11B82 / 72578
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_FallsBehindMcd", "Anthro01_FallsBehindMcd", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_402(bool bParam0) //Position: 0x11BD9 / 72665
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2[8];
	float fVar27;
	bool bVar28;
	bool bVar29;
	
	vVar2[03] = { 4.0f, 0.0f, -4.0f };
	vVar2[13] = { 4.0f, 0.0f, -4.0f };
	vVar2[23] = { -4.0f, 0.0f, -4.0f };
	vVar2[33] = { -4.0f, 0.0f, -4.0f };
	vVar2[43] = { 4.0f, 0.0f, 4.0f };
	vVar2[53] = { 4.0f, 0.0f, 4.0f };
	vVar2[63] = { -4.0f, 0.0f, 4.0f };
	vVar2[73] = { -4.0f, 0.0f, 4.0f };
	if (Function_323(&iLocal_1104) < 3.0f)
	{
		bVar28 = false;
		while (bVar28 <= GET_ACTORSET_SIZE(bLocal_1053))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_1053, bVar28);
			if (Function_352(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				if (Function_352(bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
				{
					if (!IS_ACTOR_VALID(bVar1))
					{
						bVar1 = bVar0;
					}
				}
				if (DECOR_CHECK_EXIST(bVar0, "ignoreDist"))
				{
					if (ACTORS_IN_RANGE(Global_34573, bVar0, 100.0f) || ACTORS_IN_RANGE(bLocal_1054, bVar0, 100.0f))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
						{
							STREAMING_UNLOAD_BOUNDS();
							bVar29 = true;
						}
					}
					if ((ACTORS_IN_RANGE(Global_34573, bVar0, 55.0f) || ACTORS_IN_RANGE(bLocal_1054, bVar0, 55.0f)) || IS_ACTOR_SHOOTING(bVar0))
					{
						if (Function_153(bVar28, 1))
						{
							TASK_FOLLOW_AND_ATTACK_OBJECT(bVar0, Global_34573, &(vVar2[bVar283]), 0, 0, 0, 0, 0, 1);
						}
						else
						{
							TASK_FOLLOW_AND_ATTACK_OBJECT(bVar0, bLocal_1054, &(vVar2[bVar283]), 0, 0, 0, 0, 0, 1);
						}
						DECOR_REMOVE(bVar0, "ignoreDist");
						SAY_SINGLE_LINE_CONTEXT(bVar0, 27, Global_34573, 1, 1, 3, 4294967295, 4294967295, 0, 1);
						if (!*bParam0)
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							iLocal_1126 = 1;
							*bParam0 = 1;
						}
					}
				}
				else
				{
					fVar27 = Function_404(Function_365(bVar0, Global_34573), Function_365(bVar0, bLocal_1054));
					if (fVar27 < 100.0f)
					{
						Function_210(bVar0);
						KILL_ACTOR(bVar0);
					}
				}
			}
			bVar28++;
		}
		Function_227(&iLocal_1104);
	}
	if (Function_403(bLocal_1053, 0, 1, 1, 1, 0))
	{
		if (bVar29)
		{
			AUDIO_MUSIC_SET_MOOD("CHASE_GUNFIGHT", 0, 4294967295, 4294967295);
			SET_ACTOR_INVULNERABILITY(bLocal_1054, true);
			bVar28 = false;
			while (bVar28 <= GET_ACTORSET_SIZE(bLocal_1053))
			{
				bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_1053, bVar28);
				if (IS_ACTOR_ALIVE(bVar0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
					{
						ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
					}
				}
				bVar28++;
			}
		}
		return 0;
	}
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	iLocal_1141 = 0;
	SET_ACTOR_INVULNERABILITY(bLocal_1054, false);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	ACTOR_START_FORCE_HOLSTER(bLocal_1054, 1, 0);
	Function_226(106);
	return 1;
}

bool Function_403(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11E5A / 73306
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ACTORSET_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		bVar2 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
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

var Function_404(int iParam0, int iParam1) //Position: 0x11F0E / 73486
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_405(bool bParam0, var uParam1) //Position: 0x11F21 / 73505
{
	GET_POSITION(bParam0, uParam1);
	return;
}

bool Function_406() //Position: 0x11F2E / 73518
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 692)[4]))
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_1054, (*&Local_4 + 692)[4]))
		{
			return 0;
		}
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(bLocal_1053))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(bLocal_1053, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_210(bVar0);
			if (Function_352(bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
			{
				TASK_FLEE_ACTOR(bVar0, Global_34573, 1000.0f, -1.0f, 0, 0, 0);
			}
		}
		bVar1++;
	}
	bLocal_1166 = true;
	iLocal_1141 = 0;
	SET_ACTOR_INVULNERABILITY(bLocal_1054, false);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	Function_226(106);
	return 1;
}

void Function_407() //Position: 0x11FD4 / 73684
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v3_AA1", "Anthro01_GuysBanterBlkwt_v3_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v3_AA2", "Anthro01_GuysBanterBlkwt_v3_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuysBanterBlkwt_v3_AB", "Anthro01_GuysBanterBlkwt_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v3_AC1", "Anthro01_GuysBanterBlkwt_v3_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v3_AC2", "Anthro01_GuysBanterBlkwt_v3_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuysBanterBlkwt_v3_AD", "Anthro01_GuysBanterBlkwt_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v3_AE1", "Anthro01_GuysBanterBlkwt_v3_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v3_AE2", "Anthro01_GuysBanterBlkwt_v3_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuysBanterBlkwt_v3_AF", "Anthro01_GuysBanterBlkwt_v3_AF", true, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x1229D / 74397
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_1stGroupAttkrDef", "Anthro01_1stGroupAttkrDef", true, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_409() //Position: 0x122F8 / 74488
{
	bool bVar0;
	int iVar1;
	
	if (!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_836))
	{
		return 0;
	}
	if (!IS_ACTORSET_VALID(bLocal_1053))
	{
		bLocal_1053 = CREATE_ACTORSET_IN_LAYOUT(bLocal_621, "nAmbushSet", 0);
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		bVar0 = (*&Local_4 + 632)[iVar12];
		if (Function_412(bVar0, 1))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			MEMORY_PREFER_RIDING(bVar0, false);
			SET_ACTOR_MIN_SPEED(bVar0, 2);
			SET_ACTOR_ALLOW_DISARM(bVar0, false);
			SET_CRIPPLE_ENABLE(bVar0, 0);
			AI_RIDING_SET_ENABLED(bVar0, 0);
			Function_411(bVar0, Global_34573);
			Function_411(bVar0, bLocal_1054);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 359,5f);
			DECOR_SET_BOOL(bVar0, "ignoreDist", true);
			ADD_ACTORSET_MEMBER(bLocal_1053, bVar0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar0, Local_4.f_2452, 3, 0, 0, 0, false);
		}
		iVar1++;
	}
	ACTOR_END_FORCE_HOLSTER(bLocal_1054);
	iLocal_1141 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	if (iLocal_992 == 5)
	{
		bLocal_1165 = true;
		Function_226(106);
	}
	else if (iLocal_1143)
	{
		Function_226(16);
		iLocal_1143 = 1;
		iLocal_1145 = 1;
	}
	else
	{
		Function_226(16);
	}
	Function_410(&iLocal_1104);
	return 1;
}

void Function_410(int iParam0) //Position: 0x12411 / 74769
{
	if (!Function_325(iParam0))
	{
		Function_228(iParam0, 0.0f);
	}
	return;
}

void Function_411(bool bParam0, bool bParam1) //Position: 0x12426 / 74790
{
	var uVar0;
	
	MEMORY_CONSIDER_AS_ENEMY(bParam0, bParam1);
	MEMORY_IDENTIFY(bParam0, bParam1);
	GET_POSITION(bParam1, &uVar0);
	MEMORY_REPORT_POSITION(bParam0, bParam1, &uVar0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
	return;
}

bool Function_412(bool bParam0, bool bParam1) //Position: 0x12450 / 74832
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

void Function_413() //Position: 0x12491 / 74897
{
	if (!iLocal_1129[5])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[286]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_1056)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1056);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[156]), 1, true, 1);
		if (GET_MOUNT(bLocal_1054) != bLocal_1057)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1054, bLocal_1057);
		}
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054, 3212836864, 3212836864, 4, 1, 0);
		Function_414();
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_1054, true);
	}
	STREAMING_LOAD_BOUNDS(*(&Local_4 + 1856[56]), 15.0f, 1);
	DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
	MEMORY_PREFER_RIDING(bLocal_1054, true);
	Function_219(9, 1, 1);
	return;
}

void Function_414() //Position: 0x1256A / 75114
{
	Local_4.f_668 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Ambush02set", 0);
	(*&Local_4 + 632)[02] = Function_415(Local_4, "Ambush02Gang01", 468, Function_53(), 976, 141,32f, 122,02f, 1663,75f, 0.0f, 225,4097f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_668, (*&Local_4 + 632)[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 632)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 632)[02], 9, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 632)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[02], 19);
	(*&Local_4 + 632)[12] = Function_415(Local_4, "Ambush02Gang02", 472, Function_53(), 977, 141,25f, 122,474f, 1657.0f, 0.0f, 223,047f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_668, (*&Local_4 + 632)[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 632)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 632)[12], 9, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 632)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[12], 19);
	(*&Local_4 + 632)[22] = Function_415(Local_4, "Ambush02Gang03", 474, Function_53(), 980, 124,79f, 123,4774f, 1666,01f, 0.0f, 234,322f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_668, (*&Local_4 + 632)[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 632)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 632)[22], 16, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 632)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[22], 19);
	(*&Local_4 + 632)[32] = Function_415(Local_4, "Ambush02Gang04", 467, Function_53(), 976, 119,05f, 123,5087f, 1656,52f, 0.0f, 244,7376f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_668, (*&Local_4 + 632)[32]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 632)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 632)[32], 16, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 632)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 632)[32], 19);
	return;
}

var Function_415(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x127A9 / 75689
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_308(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_308(bParam4))
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

void Function_416() //Position: 0x128CE / 75982
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[66]), 1, true, 1);
	return;
}

void Function_417() //Position: 0x128F3 / 76019
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	Function_383(1);
	Function_382();
	return;
}

void Function_418() //Position: 0x1290B / 76043
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	float fVar6;
	
	Function_427();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1129[4])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				Function_332(&Local_622);
				Function_426();
				Function_226(1);
			}
			else
			{
				Function_422();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_326(&bLocal_804)) && Function_326(&bLocal_778))
			{
				Function_422();
				Function_226(2);
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADED() || Function_323(&iLocal_1098) < 2,5f)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[1], Function_242(iLocal_992), 2);
				Function_277(1.0f);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_421())
			{
				fVar6 = Function_365(Global_34573, bLocal_1054);
				if (fVar6 < 200.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar6 < 60.0f)
				{
					if (Function_364(bLocal_1054, Global_34573, 0.0f))
					{
						if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
						{
							if (iLocal_1126 != 0)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
							}
						}
					}
					else if (GET_TASK_STATUS(bLocal_1054, 6) != 1)
					{
						TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
					}
					if (!iLocal_1143)
					{
						Function_400();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
					{
						if (iLocal_1126 != 0)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
						}
					}
					iLocal_1143 = 0;
					if (iLocal_1126 == 0)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 3.0f)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054, 3212836864, 3212836864, 4, 1, 0);
							Function_363("Anthro01_obj06a", 7,5f, 1, 2, 0, 0, 0);
							iLocal_1164 = 1;
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
					}
					else if (iLocal_1126 == 1)
					{
						if (!Function_359() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_420();
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000010:
			if (!Function_409())
			{
				Function_405(bLocal_1054, &uVar0);
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2444, &Global_34574, &uVar0, &uVar3, &uVar4, &uVar5);
				if (!Function_402(&uLocal_1162))
				{
					fVar6 = Function_365(Global_34573, bLocal_1054);
					if (fVar6 < 200.0f)
					{
						Function_243("Anthro_abandoned");
						bLocal_1139 = true;
					}
					else if (fVar6 < 70.0f)
					{
						if (Function_364(bLocal_1054, Global_34573, 0.0f))
						{
							if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
							{
								if (iLocal_1126 != 0)
								{
									TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
								}
							}
						}
						else if (GET_TASK_STATUS(bLocal_1054, 6) != 1)
						{
							TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
						}
						if (!iLocal_1145)
						{
							Function_401();
							iLocal_1145 = 1;
						}
						else if (!iLocal_1143)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
								iLocal_1143 = 1;
							}
						}
					}
					else
					{
						if (iLocal_1145)
						{
							if (GET_TASK_STATUS(bLocal_1054, 43) != 1)
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1054, Local_4.f_2444, 3, 0, 0, 1, false);
							}
							Function_400();
							iLocal_1143 = 0;
							iLocal_1145 = 0;
						}
						if (iLocal_1126 == 1)
						{
							Function_399();
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
						else if (iLocal_1126 == 2)
						{
							ABORT_SCRIPTED_CONVERSATION(0);
							Function_398();
							Function_227(&iLocal_1098);
							iLocal_1126 = 3;
						}
						else if (iLocal_1126 == 3)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
							{
								Function_363("Anthro01_obj06b", 7,5f, 1, 2, 0, 0, 0);
								iLocal_1164 = 0;
								Function_227(&iLocal_1098);
								iLocal_1126 = 4;
							}
						}
						else if (iLocal_1126 == 4)
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
							{
								Function_227(&iLocal_1098);
							}
							else if (Function_323(&iLocal_1098) < 20.0f)
							{
								Function_397();
								Function_227(&iLocal_1098);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_419();
				iLocal_1129[5] = 1;
				iLocal_992 = 6;
				Function_226(0);
			}
			break;
	}
	return;
}

void Function_419() //Position: 0x12D3B / 77115
{
	Function_175(&bLocal_804);
	return;
}

void Function_420() //Position: 0x12D47 / 77127
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuysBanterBlkwt_v1_AA", "Anthro01_GuysBanterBlkwt_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2720", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v1_AB", "Anthro01_GuysBanterBlkwt_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuysBanterBlkwt_v1_AC", "Anthro01_GuysBanterBlkwt_v1_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1690", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v1_AD", "Anthro01_GuysBanterBlkwt_v1_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuysBanterBlkwt_v1_AE", "Anthro01_GuysBanterBlkwt_v1_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v1_AF1", "Anthro01_GuysBanterBlkwt_v1_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysBanterBlkwt_v1_AF2", "Anthro01_GuysBanterBlkwt_v1_AF2", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_421() //Position: 0x12FB0 / 77744
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_824))
	{
		return 0;
	}
	if (!IS_ACTORSET_VALID(bLocal_1053))
	{
		bLocal_1053 = CREATE_ACTORSET_IN_LAYOUT(bLocal_621, "nAmbushSet", 0);
	}
	if (Function_347(Global_34573, 1) < 17.0f)
	{
		bLocal_1161 = true;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		bVar0 = (*&Local_4 + 600)[iVar22];
		if (Function_412(bVar0, 1))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			MEMORY_PREFER_RIDING(bVar0, false);
			SET_ACTOR_MIN_SPEED(bVar0, 2);
			SET_ACTOR_ALLOW_DISARM(bVar0, false);
			SET_CRIPPLE_ENABLE(bVar0, 0);
			AI_RIDING_SET_ENABLED(bVar0, 0);
			Function_411(bVar0, Global_34573);
			Function_411(bVar0, bLocal_1054);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 359,5f);
			DECOR_SET_BOOL(bVar0, "ignoreDist", true);
			ADD_ACTORSET_MEMBER(bLocal_1053, bVar0);
			TASK_PRIORITY_SET(bVar0, false);
			bVar1 = TASK_SEQUENCE_OPEN();
			if (!bLocal_1161)
			{
				TASK_STAND_STILL(false, 1,5f, 1, 0);
			}
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2448, 3, 0, 0, 0, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bVar0, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
		iVar2++;
	}
	ACTOR_END_FORCE_HOLSTER(bLocal_1054);
	iLocal_1141 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_226(16);
	Function_410(&iLocal_1104);
	return 1;
}

void Function_422() //Position: 0x130DA / 78042
{
	if (!iLocal_1129[4])
	{
		if (!iLocal_1129[3])
		{
			Function_216(bLocal_1055);
			Function_425();
			Function_216((*&Local_4 + 460)[02]);
			Function_216((*&Local_4 + 460)[12]);
			Function_216((*&Local_4 + 460)[22]);
			Function_424();
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[276]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_1056)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1056);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[146]), 1, true, 1);
		if (GET_MOUNT(bLocal_1054) != bLocal_1057)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1054, bLocal_1057);
		}
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[386]), 1, true, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_1054, true);
	}
	Function_423();
	Function_414();
	STREAMING_LOAD_BOUNDS(*(&Local_4 + 1856[46]), 15.0f, 1);
	MEMORY_PREFER_RIDING(bLocal_1054, true);
	DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
	Function_219(9, 1, 1);
	return;
}

void Function_423() //Position: 0x131FA / 78330
{
	Local_4.f_628 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Ambush01set", 0);
	(*&Local_4 + 600)[02] = Function_415(Local_4, "Ambush01Gang01", 467, Function_53(), 976, -161,1162f, 124,9928f, 1818,253f, 0.0f, 208,3472f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_628, (*&Local_4 + 600)[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 600)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 600)[02], 9, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 600)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 600)[02], 19);
	(*&Local_4 + 600)[12] = Function_415(Local_4, "Ambush01Gang02", 470, Function_53(), 977, -163,8144f, 125,7232f, 1814,086f, 0.0f, 202,0648f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_628, (*&Local_4 + 600)[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 600)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 600)[12], 9, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 600)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 600)[12], 19);
	(*&Local_4 + 600)[22] = Function_415(Local_4, "Ambush01Gang03", 474, Function_53(), 980, -165,6541f, 126,0441f, 1811,583f, 0.0f, 207,3007f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_628, (*&Local_4 + 600)[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 600)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 600)[22], 16, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 600)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 600)[22], 19);
	return;
}

void Function_424() //Position: 0x133B1 / 78769
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "DeadBearClawGang01", 6,670181E-43f, -456,2732f, 140,1866f, 1929,085f, 0.0f, 266,9756f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 548)[02]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "DeadBearClawGang02", 6,656168E-43f, -456,397f, 140,1866f, 1930,787f, 0.0f, -100,8401f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 548)[12]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "DeadBearClawGang03", 6,586103E-43f, -456,3075f, 140,1866f, 1929,836f, 0.0f, -93,96955f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 548)[22]);
	return;
}

void Function_425() //Position: 0x134AD / 79021
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "DeadNastas", 7,875297E-43f, -460,0001f, 140,1866f, 1928,999f, 0.0f, -190,0555f, 0.0f, "dead_ground_male");
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 412)[02], 43, 0,5f, 1, 1);
	return;
}

void Function_426() //Position: 0x13506 / 79110
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[56]), 1, true, 1);
	return;
}

void Function_427() //Position: 0x1352B / 79147
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	Function_383(1);
	Function_382();
	return;
}

void Function_428() //Position: 0x13543 / 79171
{
	float fVar0;
	bool bVar1;
	
	Function_438();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1129[3])
			{
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				if (!Function_333(Global_30723[6]))
				{
					Function_332(&Local_622);
				}
				Function_437();
				Function_226(1);
			}
			else
			{
				Function_436();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_333(Global_30723[6])) && Function_435()) && Function_326(&bLocal_800)) && Function_326(&bLocal_778))
			{
				Function_436();
				Function_226(2);
			}
			break;
		
		case 0x00000002:
			if (Function_323(&iLocal_1098) < 2,5f || !HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[1], Function_242(iLocal_992), 0);
				Function_277(1.0f);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_434())
			{
				fVar0 = Function_365(Global_34573, bLocal_1054);
				if (fVar0 < 90.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar0 < 50.0f)
				{
					if (!iLocal_1143)
					{
						Function_210(bLocal_1056);
						Function_219(9, 1, 1);
						Function_400();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					Function_219(5, 0, 1);
					if (!IS_ACTOR_RIDING(Global_34573))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1056)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0, 2, 0);
						}
					}
					iLocal_1143 = 0;
					if (iLocal_1126 == 0)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							SET_ACTOR_POSTURE(bLocal_1054, 0);
							bVar1 = TASK_SEQUENCE_OPEN();
							TASK_MOUNT(false, bLocal_1057, 0, 1, 2, 2147483647);
							TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_4 + 1856[36], 2);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_1054, bVar1);
							TASK_SEQUENCE_RELEASE(bVar1, 1);
							Function_433();
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
					}
					else if (iLocal_1126 == 1)
					{
						if (IS_ACTOR_RIDING(Global_34573))
						{
							iLocal_1126 = 2;
						}
						else if (Function_323(&iLocal_1098) < 3.0f)
						{
							Function_363("Anthro01_obj05a", 7,5f, 1, 2, 0, 0, 0);
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
					else if (iLocal_1126 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 5.0f)
						{
							Function_432();
							Function_227(&iLocal_1098);
							iLocal_1126 = 3;
						}
					}
					else if (iLocal_1126 == 3)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_431();
							Function_227(&iLocal_1098);
							iLocal_1126 = 4;
						}
					}
					else if (iLocal_1126 == 4)
					{
						if ((IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359()) || !IS_ACTOR_RIDING(bLocal_1054))
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 15.0f)
						{
							if (!IS_ACTOR_RIDING(Global_34573))
							{
								Function_430();
								Function_227(&iLocal_1098);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_429();
				iLocal_1129[4] = 1;
				iLocal_992 = 5;
				Function_226(0);
			}
			break;
	}
	return;
}

void Function_429() //Position: 0x1384B / 79947
{
	Function_170();
	Function_175(&bLocal_800);
	return;
}

void Function_430() //Position: 0x1385A / 79962
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_JonMessCamp", "Anthro01_JonMessCamp", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x138AB / 80043
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_McdMakesRunHors", "Anthro01_McdMakesRunHors", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x13904 / 80132
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_WeShouldLeave", "Anthro01_WeShouldLeave", true, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433() //Position: 0x13959 / 80217
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_LeaveCabin", "Anthro01_LeaveCabin", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_434() //Position: 0x139A8 / 80296
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (IS_ACTOR_RIDING(bLocal_1054))
	{
		MEMORY_PREFER_RIDING(bLocal_1054, true);
		CLEAR_ACTOR_MIN_SPEED(bLocal_1054);
		bVar4 = true;
	}
	if (!IS_ACTOR_ALIVE(bLocal_1056))
	{
		if (IS_ACTOR_ALIVE(bLocal_1058))
		{
			bLocal_1056 = bLocal_1058;
			bLocal_1058 = "";
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bInjuryNoEjection", true);
			if (!IS_ACTOR_MOUNTED(bLocal_1056))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0, 2, 0);
			}
		}
		else
		{
			iVar5 = 1;
		}
	}
	if (IS_ACTOR_RIDING(Global_34573) || iVar5)
	{
		Function_210(bLocal_1056);
		if (iVar0 == bLocal_1057)
		{
			if (!bVar4)
			{
				if (IS_ACTOR_ALIVE(bLocal_1058) && !IS_ACTOR_MOUNTED(bLocal_1058))
				{
					bVar1 = bLocal_1058;
				}
				else if (IS_ACTOR_ALIVE(bLocal_1056) && !IS_ACTOR_MOUNTED(bLocal_1056))
				{
					bVar1 = bLocal_1056;
				}
				else
				{
					LOG_ERROR("Failed to find a horse for the companion in CheckHorsesMountedBearClaw!");
				}
				bVar2 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, bVar1, 0, 1, 2, 2147483647);
				TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_4 + 1856[36], 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1054, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
			}
			bLocal_1057 = bVar1;
			bLocal_1056 = iVar0;
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_ACTORS_HORSE(bLocal_1054, bLocal_1057);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 1.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1057, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
			DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
			Function_384(&(Local_669[117]), bLocal_1057, "Anthro_horse", 0, 0x5f5e100, 1);
		}
		iVar3 = 1;
	}
	if (iVar3 && bVar4)
	{
		MEMORY_PREFER_RIDING(bLocal_1054, true);
		Function_219(9, 1, 1);
		Function_226(106);
		return 1;
	}
	return 0;
}

int Function_435() //Position: 0x13BCC / 80844
{
	Function_314(&Local_4 + 372, 562, 2, 0);
	Function_314(&Local_4 + 372, 976, 2, 0);
	if (Function_326(&Local_4 + 372))
	{
		return 1;
	}
	return 0;
}

void Function_436() //Position: 0x13BFC / 80892
{
	if (!iLocal_1129[3])
	{
		Function_216(bLocal_1055);
		Function_425();
		Function_216((*&Local_4 + 460)[02]);
		Function_216((*&Local_4 + 460)[12]);
		Function_216((*&Local_4 + 460)[22]);
		Function_424();
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1054, *(&Local_4 + 840[136]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[266]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[336]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[376]), 1, true, 1);
	}
	if (IS_ACTOR_ALIVE(bLocal_1058))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 1);
	}
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_1054, true);
	ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0, 2, 0);
	return;
}

void Function_437() //Position: 0x13CE1 / 81121
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[46]), 1, true, 1);
	return;
}

void Function_438() //Position: 0x13D06 / 81158
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	Function_383(0);
	Function_382();
	return;
}

void Function_439() //Position: 0x13D1E / 81182
{
	float fVar0;
	
	Function_473();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (!iLocal_1129[2])
			{
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				if (!Function_333(Global_30723[6]))
				{
					Function_332(&Local_622);
				}
				Function_334();
				Function_472();
				Function_226(1);
			}
			else
			{
				Function_471();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_333(Global_30723[6])) && Function_470()) && Function_326(&bLocal_796)) && Function_326(&bLocal_778))
			{
				if (!IS_ACTORSET_VALID(Local_4.f_544))
				{
					Function_469();
					Function_468();
					Function_467();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1054, *(&Local_4 + 840[126]), 1, true, 1);
				if (IS_ACTOR_VALID(bLocal_1056))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[256]), 1, true, 1);
					TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
				}
				if (IS_ACTOR_VALID(bLocal_1057))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[326]), 1, true, 1);
					TASK_STAND_STILL(bLocal_1057, -1.0f, 1, 0);
				}
				if (IS_ACTOR_VALID(bLocal_1058))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[366]), 1, true, 1);
					TASK_STAND_STILL(bLocal_1058, -1.0f, 1, 0);
				}
				Function_471();
				Function_226(2);
			}
			else if (Function_323(&iLocal_1098) < 2.0f)
			{
				Function_227(&iLocal_1098);
			}
			break;
		
		case 0x00000002:
			if (Function_465(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_622, iLocal_992))
			{
				Function_226(3);
			}
			else
			{
				Function_463();
				Function_226(4);
			}
			break;
		
		case 0x00000003:
			if (Function_273("$/cutscene/ANTHRO01_CS02/ANTHRO01_CS02", &iLocal_985, &Local_622, &iLocal_992, 85518, 85186, 85071, 84041, 84021, 84010, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_463();
				Function_226(4);
			}
			break;
		
		case 0x00000004:
			if (Function_323(&iLocal_1098) < 2,5f || !HUD_IS_FADED())
			{
				if (!IS_ACTOR_ALIVE(bLocal_1056))
				{
					if (!Function_300())
					{
						LOG_ERROR("We need to spawn the player horse after the mid cutscene, but it's not streamed in!");
					}
					else
					{
						bLocal_1056 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
						if (Function_412(bLocal_1056, 1))
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[256]), 1, true, 1);
							TASK_STAND_STILL(bLocal_1056, -1.0f, 0, 0);
						}
					}
				}
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[0], Function_242(iLocal_992), 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_277(1.0f);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_448())
			{
				fVar0 = Function_365(Global_34573, bLocal_1054);
				if (fVar0 < 50.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 768)[3]))
				{
					if (!iLocal_1145)
					{
						Function_447(1);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_446();
						iLocal_1145 = 1;
					}
					else if (!iLocal_1143)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_219(9, 1, 1);
							Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
							iLocal_1143 = 1;
						}
					}
				}
				else
				{
					if (iLocal_1145)
					{
						Function_447(0);
						Function_219(9, 0, 1);
						Function_400();
						iLocal_1145 = 0;
						iLocal_1143 = 0;
					}
					if (iLocal_1126 == 0)
					{
						if (!HUD_IS_FADING())
						{
							Function_445();
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
					}
					else if (iLocal_1126 == 1)
					{
						if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_1054) || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_444();
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
					else if (iLocal_1126 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_443();
							Function_227(&iLocal_1098);
							iLocal_1126 = 3;
						}
					}
					else if (iLocal_1126 == 3)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_363("Anthro01_obj04a", 7,5f, 1, 2, 0, 0, 0);
							Function_227(&iLocal_1098);
							iLocal_1126 = 4;
						}
					}
					else if (iLocal_1126 == 4)
					{
						if (!Function_359() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_442();
							Function_227(&iLocal_1098);
							iLocal_1126 = 5;
						}
					}
					else if (iLocal_1126 == 5)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 20.0f)
						{
							Function_441();
							Function_227(&iLocal_1098);
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_440();
			iLocal_1129[3] = 1;
			iLocal_992 = 4;
			Function_226(0);
			break;
	}
	return;
}

void Function_440() //Position: 0x14226 / 82470
{
	SET_FORCE_PLAYER_AIM_MODE(0, 0);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	Function_171();
	Function_175(&bLocal_796);
	iLocal_1141 = 0;
	return;
}

void Function_441() //Position: 0x14244 / 82500
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_CriesOutShootOut", "Anthro01_CriesOutShootOut", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_442() //Position: 0x1429F / 82591
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_NoLeaveCab", "Anthro01_NoLeaveCab", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443() //Position: 0x142EE / 82670
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_KeepHeadDown", "Anthro01_KeepHeadDown", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_444() //Position: 0x14341 / 82753
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_TakesCoverInCab", "Anthro01_TakesCoverInCab", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x1439A / 82842
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_CriesOutShootOut1", "Anthro01_CriesOutShootOut1", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x143F7 / 82935
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_TriesLeaveCab", "Anthro01_TriesLeaveCab", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_447(bool bParam0) //Position: 0x1444C / 83020
{
	bool bVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!iLocal_1159)
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				bVar0 = (*&Local_4 + 460)[iVar12];
				if (Function_352(bVar0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 12, 6.0f);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
				}
				iVar1++;
			}
			iLocal_1159 = 1;
		}
	}
	else if (iLocal_1159)
	{
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 12, 3.0f);
		iLocal_1159 = 0;
	}
	return;
}

bool Function_448() //Position: 0x144B3 / 83123
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bLocal_1061 = "";
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		bVar0 = (*&Local_4 + 460)[iVar12];
		if (Function_352(bVar0, 0, 1, 1, 1, 0, 0, 0, 0))
		{
			if (iVar1 < 5)
			{
				iVar2++;
				bLocal_1061 = bVar0;
			}
			bVar3 = true;
		}
		iVar1++;
	}
	if (!bVar3)
	{
		iLocal_1141 = 0;
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
		AI_STOP_IGNORING_ACTORS();
		Function_219(9, 0, 1);
		Function_226(106);
		return 1;
	}
	if (!iLocal_1153)
	{
		if (iVar2 < 1)
		{
			if (bLocal_1061 == (*&Local_4 + 460)[32])
			{
				bLocal_1062 = (*&Local_4 + 460)[82];
				bLocal_1063 = (*&Local_4 + 460)[62];
				bLocal_1064 = (*&Local_4 + 460)[72];
				bLocal_1066 = (*&Local_4 + 460)[92];
				Local_1067 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[16]) };
				Local_1073 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[26]) };
				Local_1079 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[76]) };
				Local_1091 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[06]) };
			}
			else if (bLocal_1061 == (*&Local_4 + 460)[42])
			{
				bLocal_1062 = (*&Local_4 + 460)[62];
				bLocal_1064 = (*&Local_4 + 460)[92];
				bLocal_1065 = (*&Local_4 + 460)[72];
				bLocal_1066 = (*&Local_4 + 460)[82];
				Local_1067 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[26]) };
				Local_1079 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[06]) };
				Local_1085 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[76]) };
				Local_1091 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[16]) };
			}
			else
			{
				bLocal_1062 = (*&Local_4 + 460)[82];
				bLocal_1064 = (*&Local_4 + 460)[62];
				bLocal_1065 = (*&Local_4 + 460)[72];
				bLocal_1066 = (*&Local_4 + 460)[92];
				Local_1067 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[16]) };
				Local_1079 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[26]) };
				Local_1085 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[76]) };
				Local_1091 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_4 + 2156[06]) };
			}
			Function_410(&iLocal_1113);
			iLocal_1153 = 1;
		}
	}
	else
	{
		if (!iLocal_1154)
		{
			if (Function_323(&iLocal_1113) < 2.0f)
			{
				if (Function_352(bLocal_1062, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_449(bLocal_1062, &Local_1067, iLocal_1159);
					iLocal_1154 = 1;
				}
			}
		}
		if (!iLocal_1155)
		{
			if (Function_323(&iLocal_1113) < 4.0f)
			{
				if (Function_352(bLocal_1063, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_449(bLocal_1063, &Local_1073, iLocal_1159);
					iLocal_1155 = 1;
				}
			}
		}
		if (!iLocal_1156)
		{
			if (Function_323(&iLocal_1113) < 5,5f)
			{
				if (Function_352(bLocal_1064, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_449(bLocal_1064, &Local_1079, iLocal_1159);
					iLocal_1156 = 1;
				}
			}
		}
		if (!iLocal_1157)
		{
			if (Function_323(&iLocal_1113) < 7.0f)
			{
				if (Function_352(bLocal_1065, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					Function_449(bLocal_1065, &Local_1085, iLocal_1159);
					iLocal_1157 = 1;
				}
			}
		}
		if (!iLocal_1158)
		{
			if (Function_325(&iLocal_1116))
			{
				if (Function_323(&iLocal_1116) < 2.0f)
				{
					if (Function_352(bLocal_1066, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Function_449(bLocal_1066, &Local_1091, iLocal_1159);
						iLocal_1158 = 1;
					}
				}
			}
			else if (iVar2 < 0)
			{
				Function_410(&iLocal_1116);
			}
		}
	}
	return 0;
}

void Function_449(bool bParam0, bool bParam1, bool bParam2) //Position: 0x147C7 / 83911
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(false, bParam1, 3);
	if (bParam2)
	{
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	}
	else
	{
		bVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, bParam1, 1.0f, 90.0f, 7);
		if (IS_COVER_LOCATION_VALID(bVar0))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar0, -1.0f, 2.0f);
		}
		else
		{
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, bParam1, -1.0f);
		}
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	return;
}

int Function_450() //Position: 0x1482A / 84010
{
	iLocal_1142 = 1;
	return 1;
}

int Function_451() //Position: 0x14835 / 84021
{
	Function_287(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_452() //Position: 0x14849 / 84041
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[36]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1054, *(&Local_4 + 840[126]), 1, true, 1);
	Function_453();
	return 1;
}

void Function_453() //Position: 0x14893 / 84115
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[36]), 0, true, 0);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1054, *(&Local_4 + 840[126]), 1, true, 1);
	TASK_CLEAR(Global_34573);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 5, 0);
	SET_PLAYER_POSTURE(0, 1, 0);
	SET_PLAYER_POSTURE(0, 0, 1);
	ATTACH_PLAYER_TO_COVER(0, 1, 1);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
	Function_410(&iLocal_1122);
	SET_ACTOR_POSTURE(bLocal_1054, 1);
	TASK_CROUCH(bLocal_1054, -1.0f);
	Function_216((*&Local_4 + 460)[02]);
	Function_216((*&Local_4 + 460)[12]);
	Function_216((*&Local_4 + 460)[22]);
	Function_424();
	Function_216(bLocal_1055);
	Function_425();
	Function_454();
	return;
}

void Function_454() //Position: 0x1494D / 84301
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	
	Function_458(&(Local_669[417]));
	Function_458(&(Local_669[517]));
	Function_457(Local_4.f_544, 322, 4294967295, 0.0f, 1, 2048);
	AI_IGNORE_ACTOR(bLocal_1054);
	AI_IGNORE_ACTOR(bLocal_1056);
	AI_IGNORE_ACTOR(bLocal_1057);
	AI_IGNORE_ACTOR(bLocal_1058);
	iVar7 = 0;
	while (iVar7 <= 10)
	{
		if (iVar7 < 2)
		{
			if (IS_ACTOR_ALIVE((*&Local_4 + 460)[iVar72]))
			{
				KILL_ACTOR((*&Local_4 + 460)[iVar72]);
			}
		}
		else
		{
			bVar2 = (*&Local_4 + 460)[iVar72];
			if (Function_352(bVar2, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				TASK_PRIORITY_SET(bVar2, true);
				SET_ACTOR_FACTION(bVar2, 19);
				Function_456(bVar2, Global_34573);
				Function_456(bVar2, bLocal_1054);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 15, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 16, true);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar2, 12, 3.0f);
				SET_ACTOR_VISION_XRAY(bVar2, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar2, 0);
				Function_455(bVar2, 50.0f, 0x40400000, 0x40000000);
				bVar1 = GET_CURRENT_GRINGO(bVar2);
				if (IS_GRINGO_VALID(bVar1))
				{
					GRINGO_DEACTIVATE_AND_RESET_ACTORS(bVar1);
				}
				MAKE_ACTOR_READY_FOR_ACTION(bVar2, 1);
				vVar3 = { StackVal, StackVal, *(&Local_4 + 2156[(iVar7 - 3)6]) };
				bVar6 = StackVal;
				bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar3, 1.0f, bVar6, 90.0f, 7);
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
				if (IS_COVER_LOCATION_VALID(bVar0))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(bVar2, bVar0, -1.0f, 2.0f);
				}
				else
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(bVar2, &vVar3, bVar6, -1.0f);
				}
			}
		}
		iVar7++;
	}
	return;
}

void Function_455(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x14AB0 / 84656
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

void Function_456(bool bParam0, bool bParam1) //Position: 0x14AF7 / 84727
{
	MEMORY_CONSIDER_AS_ENEMY(bParam0, bParam1);
	MEMORY_IDENTIFY(bParam0, bParam1);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	return;
}

void Function_457(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, var uParam5) //Position: 0x14B19 / 84761
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < (GET_ACTORSET_SIZE(uParam0) - 1))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam4)
			{
				bVar1 = GET_BLIP_ON_ACTOR(bVar0);
				if (IS_BLIP_VALID(bVar1))
				{
					REMOVE_BLIP(bVar1);
				}
			}
			ADD_BLIP_FOR_ACTOR(bVar0, bParam1, iParam3, 2, 0);
			if (iParam2 != 4294967295)
			{
				HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar0, iParam2);
			}
			if (bParam1 == 322)
			{
				bVar3 = GET_BLIP_ON_OBJECT(bVar0);
				SET_BLIP_IMPAIRMENT_MASK(bVar3, (GET_BLIP_IMPAIRMENT_MASK(bVar3) || uParam5));
			}
		}
		bVar2++;
	}
}

void Function_458(int iParam0) //Position: 0x14B9B / 84891
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

int Function_459() //Position: 0x14C4F / 85071
{
	if (!IS_ACTOR_VALID(bLocal_1056))
	{
		if (Function_300())
		{
			bLocal_1056 = Function_293(1, 1, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(bLocal_1056))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[256]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1056, -1.0f, 0, 0);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_1056, 1);
			}
		}
	}
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 1);
	Function_470();
	Function_326(&bLocal_796);
	return 1;
}

int Function_460() //Position: 0x14CC2 / 85186
{
	if (Function_292() && Function_470())
	{
		if (iLocal_1129[2])
		{
			if (!IS_ACTORSET_VALID(Local_4.f_544))
			{
				Function_469();
				Function_468();
				Function_467();
			}
			if (!IS_ACTOR_VALID(bLocal_1055))
			{
				Function_461();
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[326]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[366]), 1, true, 1);
			TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_1057, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_1055, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
			if (IS_ACTOR_VALID(bLocal_1056))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[256]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1056, -1.0f, 1, 0);
			}
		}
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
		Function_227(&iLocal_1098);
		return 1;
	}
	if (Function_323(&iLocal_1098) < 2.0f)
	{
		Function_227(&iLocal_1098);
	}
	return 0;
}

void Function_461() //Position: 0x14DB8 / 85432
{
	(*&Local_4 + 400)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Nastas", 562, 748,3133f, 78,49289f, 1309,272f, 0.0f, 89,60399f, 0.0f);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 400)[02], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 400)[02], 20);
	return;
}

int Function_462() //Position: 0x14E0E / 85518
{
	iLocal_1142 = 0;
	Function_319(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_317(StackVal, StackVal, bLocal_621, Global_34574, &Local_4 + 672[1], 0, 0, 0, 0, 1, 1);
	Function_227(&iLocal_1098);
	return 1;
}

void Function_463() //Position: 0x14E47 / 85575
{
	if (Function_464() != 16 || Function_464() != 32)
	{
		AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("ANTHRO_01_GUNF_ALT", 0, 4294967295, 4294967295);
	}
	return;
}

int Function_464() //Position: 0x14E8C / 85644
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(bVar0, Global_63400, Global_63401))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63401, Global_63402))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63402, Global_63403))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63403, Global_63404))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63404, Global_63405))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63405, Global_63400))
	{
		return 32;
	}
	return 32;
}

bool Function_465(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x14F0B / 85771
{
	if (Function_466(&iParam0) == iParam7 || Function_372())
	{
		return 1;
	}
	return 0;
}

int Function_466(int iParam0) //Position: 0x14F2A / 85802
{
	if (Function_282(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_467() //Position: 0x14F42 / 85826
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= 10)
	{
		bVar0 = (*&Local_4 + 460)[iVar22];
		if (Function_412(bVar0, 1))
		{
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			SET_ACTOR_FACTION(bVar0, 21);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
			if (iVar2 == 0)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2352, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2352), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 1)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2364, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2364), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 2)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2384, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2384), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 3)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2360, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2360), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 4)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2368, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2368), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 5)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2380, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2380), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 6)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2372, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2372), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 7)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2356, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2356), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 8)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2376, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2376), "UseCase1", 4294967295, 1);
			}
			else if (iVar2 == 9)
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_4.f_2388, "UseCase1", true, 0, 1);
				TASK_USE_GRINGO(bVar0, GET_GRINGO_FROM_OBJECT(Local_4.f_2388), "UseCase1", 4294967295, 1);
			}
			else
			{
				LOG_ERROR("Cabin gang member unaccounted for!");
				SET_ACTOR_FACE_STYLE(bVar0, 2);
				TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
			}
		}
		iVar2++;
	}
	bLocal_1052 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_621, "CampHorseSquad"));
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		bVar1 = (*&Local_4 + 576)[iVar22];
		if (Function_412(bVar1, 1))
		{
			TASK_PRIORITY_SET(bVar1, true);
			TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar1, 21);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar1, 0.0f);
			DECOR_SET_BOOL(bVar1, "bNoInjuryEjection", true);
			SQUAD_JOIN(bVar1, bLocal_1052);
		}
		iVar2++;
	}
	Function_384(&(Local_669[417]), Local_4.f_544, "BearClawGang", 0, 0x5f5e100, 1);
	Function_384(&(Local_669[517]), bLocal_1052, "BearClawHorse", 0, 0x5f5e100, 1);
	Function_385(&(Local_669[517]), 1024, 1);
	return;
}

void Function_468() //Position: 0x152FB / 86779
{
	Local_4.f_596 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "BearClawHorsesset", 0);
	(*&Local_4 + 576)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawHorse01", 977, -470,2043f, 140,9914f, 1918,489f, 0.0f, 22,24222f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_596, (*&Local_4 + 576)[02]);
	(*&Local_4 + 576)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawHorse02", 984, -471,5648f, 140,5343f, 1925,672f, -0,2158842f, -70,15314f, -0,0790031f);
	ADD_ACTORSET_MEMBER(Local_4.f_596, (*&Local_4 + 576)[12]);
	return;
}

void Function_469() //Position: 0x153BA / 86970
{
	Local_4.f_544 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "BearClawGangset", 0);
	(*&Local_4 + 460)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang01", 476, -456,2365f, 140,1866f, 1927,653f, 0.0f, 466,1592f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[02]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 460)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 460)[02], 23);
	(*&Local_4 + 460)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang02", 475, -458,2017f, 140,1866f, 1931,152f, 0.0f, -6,000259f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 460)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 460)[12], 23);
	(*&Local_4 + 460)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang03", 470, -456,2991f, 140,1866f, 1929,427f, 0.0f, 88,81544f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 460)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[22], 23);
	(*&Local_4 + 460)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang04", 468, -459,0197f, 139,864f, 1911,736f, 0.0f, -84,83068f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[32], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[32], 23);
	(*&Local_4 + 460)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang05", 469, -461,9029f, 140,133f, 1921,038f, 0.0f, -117,9464f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[42], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[42], 23);
	(*&Local_4 + 460)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang06", 467, -455,6622f, 139,545f, 1919,1f, 0.0f, -48,19163f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[52]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[52], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[52], 23);
	(*&Local_4 + 460)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang07", 471, -466,1379f, 142,6784f, 1900,161f, 0.0f, 180,2181f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[62]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[62], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[62], 23);
	(*&Local_4 + 460)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang08", 469, -471,7697f, 142,5741f, 1898,144f, 0.0f, 214,0517f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[72]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[72], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[72], 23);
	(*&Local_4 + 460)[82] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang09", 472, -480,5651f, 142,9046f, 1918,003f, 0.0f, 675,2524f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[82]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[82], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[82], 23);
	(*&Local_4 + 460)[92] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BearClawGang10", 474, -474,5387f, 142,5983f, 1904,128f, 0.0f, 243,0905f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_544, (*&Local_4 + 460)[92]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 460)[92], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 460)[92], 23);
	return;
}

int Function_470() //Position: 0x157F8 / 88056
{
	Function_314(&Local_4 + 344, 562, 2, 0);
	Function_314(&Local_4 + 344, 976, 2, 0);
	if (Function_326(&Local_4 + 344))
	{
		return 1;
	}
	return 0;
}

void Function_471() //Position: 0x15828 / 88104
{
	if (SQUAD_GOAL_IS_VALID(iLocal_777))
	{
		SQUAD_GOAL_REMOVE(bLocal_1051, iLocal_777);
	}
	SET_ALLOW_RIDE_BY_PLAYER(bLocal_1058, 1);
	iLocal_1141 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 1);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (!Function_465(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_622, iLocal_992))
	{
		Function_453();
	}
	return;
}

void Function_472() //Position: 0x15873 / 88179
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[36]), 1, true, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 1);
	return;
}

void Function_473() //Position: 0x158A1 / 88225
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	if (Function_325(&iLocal_1122))
	{
		if (Function_323(&iLocal_1122) < 4.0f)
		{
			SET_FORCE_PLAYER_AIM_MODE(0, 0);
			Function_474(&iLocal_1122);
		}
	}
	Function_383(1);
	Function_382();
	return;
}

void Function_474(int iParam0) //Position: 0x158D8 / 88280
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_475() //Position: 0x158EC / 88300
{
	float fVar0;
	bool bVar1;
	
	Function_503();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1129[1])
			{
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				if (!Function_333(Global_30637[1]))
				{
					Function_332(&Local_622);
				}
				Function_502();
				Function_226(1);
			}
			else
			{
				Function_494();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_493()) && Function_326(&bLocal_778)) && Function_326(&bLocal_789))
			{
				Function_494();
				Function_226(2);
			}
			break;
		
		case 0x00000002:
			if (Function_323(&iLocal_1098) < 2,5f || !iLocal_1129[1])
			{
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[1], Function_242(iLocal_992), 2);
				Function_277(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_492(7))
			{
				fVar0 = Function_365(Global_34573, bLocal_1055);
				if (fVar0 < 80.0f)
				{
					Function_243("Nastas_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar0 < 40.0f)
				{
					if (!iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_363("Nastas_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					iLocal_1143 = 0;
					if (iLocal_1126 == 0)
					{
						if (!HUD_IS_FADING())
						{
							if (!HUD_IS_FADED())
							{
								bVar1 = TASK_SEQUENCE_OPEN();
								TASK_MOUNT(false, bLocal_1057, 0, 1, 2, 2147483647);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_1054, bVar1);
								TASK_SEQUENCE_RELEASE(bVar1, 1);
								bVar1 = TASK_SEQUENCE_OPEN();
								TASK_MOUNT(false, bLocal_1058, 0, 1, 2, 2147483647);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_1055, bVar1);
								TASK_SEQUENCE_RELEASE(bVar1, 1);
								REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
								REMOVE_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
								if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1056)))
								{
									ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0.0f, 2, 0);
								}
								Function_210(bLocal_1055);
								Function_491();
								bLocal_1152 = true;
								Function_227(&iLocal_1098);
								iLocal_1126 = 1;
							}
						}
					}
					else if (iLocal_1126 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_400();
							Function_363("Anthro01_obj03a", 7,5f, 1, 2, 0, 0, 0);
							iLocal_1126 = 2;
							Function_227(&iLocal_1098);
						}
					}
					else if (iLocal_1126 == 2)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 20.0f)
						{
							Function_490();
							Function_227(&iLocal_1098);
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			fVar0 = Function_365(Global_34573, bLocal_1055);
			if (fVar0 < 80.0f)
			{
				Function_243("Nastas_abandoned");
				bLocal_1139 = true;
			}
			else if (fVar0 < 40.0f)
			{
				if (!iLocal_1143)
				{
					Function_400();
					Function_363("Nastas_return", 7,5f, 0, 2, 0, 0, 0);
					iLocal_1143 = 1;
				}
			}
			else if (!Function_489(16, 0))
			{
				if (GET_MOUNT(Global_34573) != bLocal_1056)
				{
					if (!iLocal_1144)
					{
						Function_400();
						Function_363("Horse_return", 7,5f, 0, 2, 0, 0, 0);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1056)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0, 2, 0);
						}
						iLocal_1144 = 1;
					}
				}
				else
				{
					iLocal_1143 = 0;
					iLocal_1144 = 0;
					Function_210(bLocal_1056);
				}
			}
			break;
		
		case 0x00000010:
			fVar0 = Function_365(Global_34573, bLocal_1055);
			if (fVar0 < 80.0f)
			{
				Function_243("Nastas_abandoned");
				bLocal_1139 = true;
			}
			else if (!Function_488())
			{
				if (!Function_487())
				{
					if (fVar0 < 40.0f)
					{
						if (Function_364(bLocal_1055, Global_34573, 0.0f))
						{
							if (GET_TASK_STATUS(bLocal_1055, 43) != 1)
							{
								SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
							}
						}
						else if (GET_TASK_STATUS(bLocal_1055, 6) != 1)
						{
							Function_486();
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 5);
						}
						if (!iLocal_1143)
						{
							Function_400();
							Function_363("Nastas_return", 7,5f, 0, 2, 0, 0, 0);
							iLocal_1143 = 1;
						}
					}
					else
					{
						iLocal_1143 = 0;
						if (!IS_ACTOR_IN_VOLUME(bLocal_1055, (*&Local_4 + 768)[0]))
						{
							if (GET_TASK_STATUS(bLocal_1055, 43) != 1)
							{
								SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
							}
						}
						if (iLocal_1126 == 0)
						{
							if (Function_323(&iLocal_1098) < 0,5f || !iLocal_1129[0])
							{
								if (bLocal_1152)
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1055, 16.0f);
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1058, 16.0f);
									if (!SQUAD_GOAL_IS_VALID(iLocal_777))
									{
										iLocal_777 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_1051, 0, 4294967295, Local_4.f_2432, 3, 0, 0);
									}
									else
									{
										SQUAD_FOLLOW_PATH_IN_FORMATION_SET_PATH(bLocal_1051, iLocal_777, Local_4.f_2432);
									}
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_1051, iLocal_777, 1, 0);
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_1051, iLocal_777, 8, 1);
									TASK_CLEAR(bLocal_1055);
									TASK_CLEAR(bLocal_1054);
									iLocal_1126 = 1;
								}
								else if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1055, 16.0f);
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1058, 16.0f);
									if (!SQUAD_GOAL_IS_VALID(iLocal_777))
									{
										iLocal_777 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_1051, 0, 4294967295, Local_4.f_2432, 3, 0, 0);
									}
									else
									{
										SQUAD_FOLLOW_PATH_IN_FORMATION_SET_PATH(bLocal_1051, iLocal_777, Local_4.f_2432);
									}
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_1051, iLocal_777, 1, 0);
									SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_1051, iLocal_777, 8, 1);
									TASK_CLEAR(bLocal_1055);
									TASK_CLEAR(bLocal_1054);
									Function_491();
									Function_227(&iLocal_1098);
									iLocal_1126 = 1;
								}
							}
						}
						else if (iLocal_1126 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 2,5f)
							{
								Function_400();
								if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1055)))
								{
									ADD_BLIP_FOR_ACTOR(bLocal_1055, 325, 0, 2, 0);
								}
								Function_363("Anthro01_obj03b", 7,5f, 1, 2, 0, 0, 0);
								Function_228(&iLocal_1098, (5.0f - 8.0f));
								iLocal_1126 = 2;
							}
						}
						else if (iLocal_1126 == 2)
						{
							if (!Function_359() || Function_323(&iLocal_1098) < 3.0f)
							{
								Function_485();
								Function_227(&iLocal_1098);
								iLocal_1126 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000001A:
			if (!Function_488())
			{
				if (!Function_484())
				{
					fVar0 = Function_365(Global_34573, bLocal_1055);
					if (fVar0 < 80.0f)
					{
						Function_243("Nastas_abandoned");
						bLocal_1139 = true;
					}
					else if (fVar0 < 40.0f)
					{
						if (!iLocal_1143)
						{
							Function_400();
							Function_363("Nastas_return", 7,5f, 0, 2, 0, 0, 0);
							iLocal_1143 = 1;
						}
					}
					else
					{
						Function_219(9, 0, 1);
						iLocal_1143 = 0;
						if (iLocal_1126 == 0)
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
						else if (iLocal_1126 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 3.0f)
							{
								Function_483();
								Function_227(&iLocal_1098);
								iLocal_1126 = 2;
							}
						}
						else if (iLocal_1126 == 2)
						{
							if (Function_323(&iLocal_1098) < 4.0f)
							{
								Function_210(bLocal_1055);
								Function_219(9, 0, 1);
								Function_212(bLocal_1097);
								bLocal_1097 = Function_482(StackVal, StackVal, StackVal, StackVal, bLocal_621, "DismountGateway", *(&Local_4 + 2032[06]), *(&Local_4 + 2032[06] + 12), Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
								Function_363("Anthro01_obj03c", 7,5f, 1, 2, 0, 0, 0);
								Function_227(&iLocal_1098);
								iLocal_1126 = 3;
							}
						}
						else if (iLocal_1126 == 3)
						{
							if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_323(&iLocal_1098) < 3.0f) || Function_323(&iLocal_1098) < 10.0f)
							{
								Function_481();
								Function_227(&iLocal_1098);
								iLocal_1126 = 4;
							}
						}
						else if (iLocal_1126 == 4)
						{
							if (StackVal || !Function_379(StackVal, (IS_SCRIPTED_CONVERSATION_ONGOING() || HUD_IS_SHOWING_OBJECTIVE()), bLocal_1054, *(&Local_4 + 2032[16]), 2.0f))
							{
								Function_227(&iLocal_1098);
							}
							else if (Function_323(&iLocal_1098) < 20.0f)
							{
								SET_ANIM_SET_FOR_ACTOR(bLocal_1054, "comp_waiting", 0);
								bVar1 = TASK_SEQUENCE_OPEN();
								TASK_ACTION_PERFORM(false, "comp_waiting");
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_1054, bVar1);
								TASK_SEQUENCE_RELEASE(bVar1, 1);
								Function_480();
								Function_227(&iLocal_1098);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000024:
			if (!Function_478())
			{
				if (!Function_488())
				{
					fVar0 = Function_365(Global_34573, bLocal_1054);
					if (fVar0 < 110.0f)
					{
						Function_243("Anthro_abandoned");
						bLocal_1139 = true;
					}
					else if (fVar0 < 75.0f)
					{
						if (!iLocal_1143)
						{
							if (IS_OBJECT_VALID(bLocal_1097))
							{
								GATEWAY_DISABLE(bLocal_1097, 1);
								Function_220(bLocal_1097);
							}
							Function_219(9, 1, 1);
							HUD_CLEAR_OBJECTIVE();
							Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
							iLocal_1143 = 1;
						}
					}
					else
					{
						if (IS_OBJECT_VALID(bLocal_1097))
						{
							GATEWAY_DISABLE(bLocal_1097, 0);
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1097)))
							{
								ADD_BLIP_FOR_OBJECT(bLocal_1097, 330, 0f, 2, 0);
							}
						}
						Function_219(9, 0, 1);
						iLocal_1143 = 0;
						if (iLocal_1126 == 0)
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_477();
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
						else if (iLocal_1126 == 1)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
							{
								bLocal_1097 = Function_343(bLocal_621, "CabinGateway", (*&Local_4 + 768)[1], Global_34573, 1, 330, 1, 0, 0, 1);
								if (!GATEWAY_UPDATE(bLocal_1097))
								{
									Function_363("Anthro01_obj03d", 7,5f, 1, 2, 0, 0, 0);
								}
								Function_227(&iLocal_1098);
								iLocal_1126 = 2;
							}
						}
						else if (iLocal_1126 == 2)
						{
							if (StackVal || !Function_379(StackVal, (IS_SCRIPTED_CONVERSATION_ONGOING() || HUD_IS_SHOWING_OBJECTIVE()), bLocal_1054, *(&Local_4 + 2032[16]), 2.0f))
							{
								Function_227(&iLocal_1098);
							}
							else if (Function_323(&iLocal_1098) < 20.0f)
							{
								SET_ANIM_SET_FOR_ACTOR(bLocal_1054, "comp_waiting", 0);
								bVar1 = TASK_SEQUENCE_OPEN();
								TASK_ACTION_PERFORM(false, "comp_waiting");
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_1054, bVar1);
								TASK_SEQUENCE_RELEASE(bVar1, 1);
								Function_480();
								Function_227(&iLocal_1098);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_476();
			iLocal_1129[2] = 1;
			iLocal_992 = 3;
			Function_226(0);
			break;
	}
	return;
}

void Function_476() //Position: 0x16331 / 90929
{
	Function_172();
	Function_175(&bLocal_789);
	if (bLocal_1127 != 4294967295)
	{
		if (GET_TASK_STATUS(bLocal_1054, 0) == 1)
		{
			TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(bLocal_1127, 0);
	}
	if (bLocal_1128 != 4294967295)
	{
		if (GET_TASK_STATUS(bLocal_1055, 0) == 1)
		{
			TASK_STAND_STILL(bLocal_1055, -1.0f, 0, 0);
		}
		TASK_SEQUENCE_RELEASE(bLocal_1128, 0);
	}
	return;
}

void Function_477() //Position: 0x16384 / 91012
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_Dismounted", "Anthro01_Dismounted", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_478() //Position: 0x163D3 / 91091
{
	if (IS_ACTOR_RIDING(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 768)[1]))
	{
		if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 768)[2]))
		{
			return 0;
		}
	}
	Function_479(bLocal_1097);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_226(106);
	return 1;
}

void Function_479(bool bParam0) //Position: 0x16424 / 91172
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

void Function_480() //Position: 0x164AE / 91310
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_NoFollowMcdCab", "Anthro01_NoFollowMcdCab", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x16505 / 91397
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuysArriveBearClaw", "Anthro01_GuysArriveBearClaw", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_482(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x16564 / 91492
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

void Function_483() //Position: 0x1662F / 91695
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_ArriveBearClaw", "Anthro01_ArriveBearClaw", false, 1, 1, 0, 1);
		Function_350(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_484() //Position: 0x16686 / 91782
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_PLAYER_IN_HORSE_FOLLOW(0) && (Function_347(Global_34573, 1) > 0,3f || !IS_ACTOR_RIDING(bLocal_1054)))
		{
			Function_348(Global_34573, 0);
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054);
		}
		return 0;
	}
	Function_212(bLocal_1097);
	Function_210(bLocal_1055);
	Function_226(36);
	return 1;
}

void Function_485() //Position: 0x166D4 / 91860
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AA", "Anthro01_MoreGuyTalk_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_MoreGuyTalk_v1_AB1", "Anthro01_MoreGuyTalk_v1_AB1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_MoreGuyTalk_v1_AB2", "Anthro01_MoreGuyTalk_v1_AB2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AC1", "Anthro01_MoreGuyTalk_v1_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AC2", "Anthro01_MoreGuyTalk_v1_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_MoreGuyTalk_v1_AD", "Anthro01_MoreGuyTalk_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AE1", "Anthro01_MoreGuyTalk_v1_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AE2", "Anthro01_MoreGuyTalk_v1_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AE3", "Anthro01_MoreGuyTalk_v1_AE3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_MoreGuyTalk_v1_AF", "Anthro01_MoreGuyTalk_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1330", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_MoreGuyTalk_v1_AG", "Anthro01_MoreGuyTalk_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MoreGuyTalk_v1_AH", "Anthro01_MoreGuyTalk_v1_AH", false, 1, 0, 0, 1);
		Function_350(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x16A3F / 92735
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_2FarBehindMcd", "Anthro01_2FarBehindMcd", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_487() //Position: 0x16A94 / 92820
{
	if (!IS_ACTOR_IN_VOLUME(bLocal_1055, (*&Local_4 + 768)[0]))
	{
		return 0;
	}
	if (bLocal_1127 == 4294967295)
	{
		bLocal_1127 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2436, 4, 0, 0, 1, false);
		TASK_DISMOUNT(false, 1);
		TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &Local_4 + 2032[16], true, 0, 0, 0, 1);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1054, bLocal_1127);
		MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1054);
	}
	if (bLocal_1128 == 4294967295)
	{
		bLocal_1128 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2440, 4, 0, 0, 1, false);
		TASK_DISMOUNT(false, 1);
		TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &Local_4 + 2032[26], true, 0, 0, 0, 1);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1055, bLocal_1128);
		MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1055);
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 768)[0]))
	{
		return 0;
	}
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	Function_219(9, 0, 1);
	Function_226(26);
	return 1;
}

bool Function_488() //Position: 0x16B8C / 93068
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_325(&iLocal_1110))
	{
		bLocal_1060 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
		if (IS_ACTOR_VALID(bLocal_1060) && GET_WEAPON_IN_HAND(Global_34573) == 4294967295)
		{
			iVar2 = 0;
			while (iVar2 <= 10)
			{
				bVar1 = (*&Local_4 + 460)[iVar22];
				if (bVar1 == bLocal_1060)
				{
					Function_410(&iLocal_1110);
				}
				iVar2++;
			}
		}
		else
		{
			bLocal_1060 = "";
		}
	}
	else
	{
		bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
		if (bVar0 == bLocal_1060 || GET_WEAPON_IN_HAND(Global_34573) != 4294967295)
		{
			bLocal_1060 = "";
			Function_227(&iLocal_1110);
			Function_474(&iLocal_1110);
		}
		else if (Function_323(&iLocal_1110) < 2.0f)
		{
			TASK_PRIORITY_SET(bVar1, 2);
			TASK_CLEAR(bLocal_1060);
			Function_227(&iLocal_1110);
			Function_243("Anthro01_threatFail");
			bLocal_1139 = true;
			return 1;
		}
	}
	return 0;
}

bool Function_489(int iParam0, bool bParam1) //Position: 0x16C5B / 93275
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(bLocal_1056))
	{
		HUD_CLEAR_OBJECTIVE();
	}
	else if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_ACTOR_ALIVE(bLocal_1056))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1056)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0, 2, 0);
			}
		}
		return 0;
	}
	bVar0 = GET_MOUNT(Global_34573);
	if (bVar0 == bLocal_1057)
	{
		if (IS_ACTOR_RIDING(bLocal_1054))
		{
			LOG_ERROR("Player is on MacDougal's horse, but MacDougal is also on a horse! WTF!!!");
		}
		else
		{
			bLocal_1057 = bLocal_1056;
			bLocal_1056 = bVar0;
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ALLOW_RIDE_BY_AI(bLocal_1057, 1);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_ACTORS_HORSE(bLocal_1054, bLocal_1057);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1057, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
			DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
			Function_384(&(Local_669[117]), bLocal_1057, "Anthro_horse", 0, 0x5f5e100, 1);
			TASK_MOUNT(bLocal_1054, bLocal_1057, 0, 1, 2, 2147483647);
		}
	}
	else if (bVar0 == bLocal_1058)
	{
		if (IS_ACTOR_RIDING(bLocal_1055))
		{
			LOG_ERROR("Player is on Nastas's horse, but Nastas is also on a horse! WTF!!!");
		}
		else
		{
			bLocal_1058 = bLocal_1056;
			bLocal_1056 = bVar0;
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ALLOW_RIDE_BY_AI(bLocal_1058, 1);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_ACTORS_HORSE(bLocal_1055, bLocal_1058);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 1.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
			DECOR_SET_BOOL(bLocal_1058, "bNoInjuryEjection", true);
			Function_384(&(Local_669[317]), bLocal_1058, "Nastas_horse", 0, 0x5f5e100, 1);
			TASK_MOUNT(bLocal_1055, bLocal_1058, 0, 1, 2, 2147483647);
		}
	}
	else if (IS_ACTOR_VALID(bVar0) && bVar0 == bLocal_1056)
	{
		Function_210(bLocal_1056);
		bLocal_1056 = bVar0;
		Function_392(bLocal_1056, 3.0f);
		SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
		SET_ACTORS_HORSE(Global_34573, bLocal_1056);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
		DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
	}
	if (!IS_ACTOR_RIDING(bLocal_1054))
	{
		return 0;
	}
	if (!IS_ACTOR_RIDING(bLocal_1055))
	{
		return 0;
	}
	MEMORY_PREFER_RIDING(bLocal_1054, true);
	MEMORY_PREFER_RIDING(bLocal_1055, true);
	if (IS_ACTOR_VALID(bLocal_1056))
	{
		TASK_STAND_STILL(bLocal_1056, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1057))
	{
		TASK_STAND_STILL(bLocal_1057, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1058))
	{
		TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
	}
	if (bParam1)
	{
		SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 4);
		SET_ACTOR_MAX_SPEED(bLocal_1055, 4);
		CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
	}
	if (iLocal_992 == 0)
	{
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
	}
	HUD_CLEAR_OBJECTIVE();
	Function_219(9, 0, 1);
	Function_226(iParam0);
	return 1;
}

void Function_490() //Position: 0x16FB8 / 94136
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_WaitJonBakMount", "Anthro01_WaitJonBakMount", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x17011 / 94225
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MountBakUp", "Anthro01_MountBakUp", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_492(int iParam0) //Position: 0x17060 / 94304
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_1126 == 0)
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bLocal_1056))
	{
		HUD_CLEAR_OBJECTIVE();
		Function_226(iParam0);
		return 1;
	}
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		return 0;
	}
	Function_210(bLocal_1056);
	bVar0 = GET_MOUNT(Global_34573);
	if (bVar0 == bLocal_1057)
	{
		if (IS_ACTOR_RIDING(bLocal_1054))
		{
			LOG_ERROR("Player is on MacDougal's horse, but MacDougal is also on a horse! WTF!!!");
		}
		else
		{
			bLocal_1057 = bLocal_1056;
			bLocal_1056 = bVar0;
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ALLOW_RIDE_BY_AI(bLocal_1057, 1);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_ACTORS_HORSE(bLocal_1054, bLocal_1057);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1057, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
			DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
			Function_384(&(Local_669[117]), bLocal_1057, "Anthro_Horse", 0, 0x5f5e100, 1);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_MOUNT(false, bLocal_1057, 0, 1, 2, 2147483647);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1054, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
	}
	else if (bVar0 == bLocal_1058)
	{
		if (IS_ACTOR_RIDING(bLocal_1055))
		{
			LOG_ERROR("Player is on Nastas's horse, but Nastas is also on a horse! WTF!!!");
		}
		else
		{
			bLocal_1058 = bLocal_1056;
			bLocal_1056 = bVar0;
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ALLOW_RIDE_BY_AI(bLocal_1058, 1);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_ACTORS_HORSE(bLocal_1055, bLocal_1058);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
			DECOR_SET_BOOL(bLocal_1058, "bNoInjuryEjection", true);
			Function_384(&(Local_669[317]), bLocal_1058, "Nastas_Horse", 0, 0x5f5e100, 1);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_MOUNT(false, bLocal_1058, 0, 1, 2, 2147483647);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1055, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
	}
	else if (bVar0 != bLocal_1056)
	{
		bLocal_1056 = bVar0;
		Function_392(bLocal_1056, 3.0f);
		SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
		SET_ACTORS_HORSE(Global_34573, bLocal_1056);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
		DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
	}
	HUD_CLEAR_OBJECTIVE();
	Function_226(iParam0);
	return 1;
}

int Function_493() //Position: 0x17331 / 95025
{
	Function_314(&Local_4 + 316, 562, 2, 0);
	Function_314(&Local_4 + 316, 976, 2, 0);
	if (Function_326(&Local_4 + 316))
	{
		return 1;
	}
	return 0;
}

void Function_494() //Position: 0x17361 / 95073
{
	if (!IS_ACTOR_VALID(bLocal_1055))
	{
		Function_461();
		Function_501();
		Function_500(1);
		Function_498(1);
	}
	Function_469();
	Function_468();
	Function_467();
	TASK_PRIORITY_SET(bLocal_1054, true);
	TASK_PRIORITY_SET(bLocal_1055, true);
	if (!iLocal_1129[1])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[246]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[116]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[206]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_1056)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1056);
		}
		if (GET_MOUNT(bLocal_1054) != bLocal_1057)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1054, bLocal_1057);
		}
		if (GET_MOUNT(bLocal_1055) != bLocal_1058)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1055, bLocal_1058);
		}
	}
	Function_497(&iLocal_995);
	Function_495(Global_34573, &iLocal_995);
	Function_495(bLocal_1054, &iLocal_995);
	Function_495(bLocal_1055, &iLocal_995);
	Function_495((*&Local_4 + 460)[02], &iLocal_995);
	Function_495((*&Local_4 + 460)[12], &iLocal_995);
	Function_495((*&Local_4 + 460)[22], &iLocal_995);
	return;
}

void Function_495(bool bParam0, int iParam1) //Position: 0x17490 / 95376
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = Function_496(bParam0, iParam1);
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

int Function_496(int iParam0, int iParam1) //Position: 0x174D6 / 95446
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

void Function_497(int iParam0) //Position: 0x1750A / 95498
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

void Function_498(bool bParam0) //Position: 0x17558 / 95576
{
	bLocal_1058 = (*&Local_4 + 436)[02];
	if (Function_412(bLocal_1058, 1))
	{
		AI_BEHAVIOR_SET_ALLOW(bLocal_1058, 0, 0);
		AI_SET_NAV_ACTOR_WIDTH(bLocal_1058, 0,25f);
		Function_499(bLocal_1058);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
		DECOR_SET_BOOL(bLocal_1058, "bNoInjuryEjection", true);
		ACCESSORIZE_HORSE(bLocal_1058, 3);
		Function_384(&(Local_669[317]), bLocal_1058, "Nastas_horse", 0, 0x5f5e100, 1);
		if (bParam0)
		{
			TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_499(bool bParam0) //Position: 0x175E8 / 95720
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

void Function_500(bool bParam0) //Position: 0x17608 / 95752
{
	bLocal_1055 = (*&Local_4 + 400)[02];
	if (Function_412(bLocal_1055, 1))
	{
		SET_CRIPPLE_ENABLE(bLocal_1055, 0);
		SET_ACTOR_FACTION(bLocal_1055, 20);
		TASK_PRIORITY_SET(bLocal_1055, true);
		AI_BEHAVIOR_SET_ALLOW(bLocal_1055, 0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_1055, 0);
		SET_ACTOR_MAX_HEALTH(bLocal_1055, 50.0f);
		ACTOR_ENABLE_VARIABLE_MESH(bLocal_1055, 17, true);
		Function_499(bLocal_1055);
		SET_ACTOR_IS_COMPANION(bLocal_1055, 1);
		Function_384(&(Local_669[217]), bLocal_1055, "Nastas", 0, 0x5f5e100, 1);
		SQUAD_JOIN(bLocal_1055, bLocal_1051);
		SQUAD_JOIN(bLocal_1054, bLocal_1051);
		DECOR_SET_BOOL(bLocal_1055, "CanBeLasso", false);
		if (bParam0)
		{
			TASK_STAND_STILL(bLocal_1055, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_501() //Position: 0x176BB / 95931
{
	(*&Local_4 + 436)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "NastasHorse", 980, 753,2609f, 78,465f, 1309,05f, 0.0f, 92,48192f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 436)[02], 21);
	return;
}

void Function_502() //Position: 0x17702 / 96002
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[26]), 1, true, 1);
	return;
}

void Function_503() //Position: 0x17727 / 96039
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	if (IS_OBJECT_VALID(bLocal_1097))
	{
		if (GATEWAY_UPDATE(bLocal_1097))
		{
			if (!GATEWAY_IS_DISABLED(bLocal_1097))
			{
				GATEWAY_DISABLE(bLocal_1097, 1);
			}
		}
		else if (GATEWAY_IS_DISABLED(bLocal_1097))
		{
			GATEWAY_DISABLE(bLocal_1097, 0);
		}
	}
	Function_383(bLocal_993 <= 16);
	Function_507();
	Function_382();
	Function_470();
	Function_326(&bLocal_796);
	Function_504(StackVal, StackVal, "$/cutscene/ANTHRO01_CS02/ANTHRO01_CS02", &iLocal_994, &iLocal_995, *(&Local_4 + 840[46]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
	return;
}

int Function_504(bool bParam0, var uParam1, var uParam2, vector3 vParam3, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13) //Position: 0x177D5 / 96213
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_379(StackVal, StackVal, Global_34573, vParam3, (fParam7 + ((IntToFloat(Function_381()) * (fParam8 - fParam7)) * 0,5f))))
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
					Function_497(uParam2);
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_505(uParam2);
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
	else if (!Function_379(StackVal, StackVal, Global_34573, vParam3, (fParam8 + ((IntToFloat(Function_381()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_379(StackVal, StackVal, Global_34573, vParam3, fParam7))
	{
	}
	return 0;
}

void Function_505(int iParam0) //Position: 0x17B04 / 97028
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
			Function_506(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar7, &Var10);
			Function_378(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_506(bool bParam0, bool bParam1, var uParam2) //Position: 0x17B64 / 97124
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

void Function_507() //Position: 0x17BF5 / 97269
{
	if (IS_ACTOR_VALID(bLocal_1055))
	{
		bLocal_1125 = Function_508(bLocal_1125, Function_347(bLocal_1055, 1));
	}
	return;
}

var Function_508(float fParam0, float fParam1) //Position: 0x17C14 / 97300
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void Function_509() //Position: 0x17C27 / 97319
{
	bool bVar0;
	float fVar1;
	
	Function_525();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_1129[0])
			{
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				Function_332(&Local_622);
				Function_524();
				Function_226(1);
			}
			else
			{
				Function_521();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_520()) && Function_326(&bLocal_778))
			{
				Function_521();
				Function_226(2);
			}
			break;
		
		case 0x00000002:
			if (Function_323(&iLocal_1098) < 2,5f)
			{
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[0], Function_242(iLocal_992), 2);
				Function_277(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			fVar1 = Function_365(Global_34573, bLocal_1055);
			if (fVar1 < 80.0f)
			{
				Function_243("Nastas_abandoned");
				bLocal_1139 = true;
			}
			else if (!Function_517())
			{
				if (fVar1 < 40.0f)
				{
					if (!bLocal_1150 && !bLocal_1151)
					{
						if (Function_364(bLocal_1055, Global_34573, 0.0f))
						{
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
						}
						else if (GET_TASK_STATUS(bLocal_1055, 6) != 1)
						{
							Function_486();
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 5);
						}
					}
					if (!iLocal_1143)
					{
						if (bLocal_1150 || bLocal_1151)
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1055)))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_1055, 325, 0, 2, 0);
							}
						}
						HUD_CLEAR_OBJECTIVE();
						Function_363("Nastas_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						if (!bLocal_1150 && !bLocal_1151)
						{
							if (GET_TASK_STATUS(bLocal_1055, 43) != 1)
							{
								SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
							}
							Function_363("Anthro01_obj02a", 0x40f00000, 1, 2, 0, 0, 0);
						}
						else
						{
							HUD_CLEAR_OBJECTIVE();
							if (iLocal_1126 <= 6)
							{
								Function_363("Anthro01_obj02b", 0x40f00000, 1, 2, 0, 0, 0);
							}
						}
						iLocal_1143 = 0;
					}
					if (iLocal_1126 == 0)
					{
						if (iLocal_1129[0])
						{
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
						else if (!HUD_IS_FADING())
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1055, 16.0f);
							SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1058, 16.0f);
							if (!SQUAD_GOAL_IS_VALID(iLocal_777))
							{
								iLocal_777 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_1051, 0, 4294967295, Local_4.f_2428, 3, 0, 0);
							}
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_1051, iLocal_777, 1, 0);
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_1051, iLocal_777, 8, 1);
							TASK_CLEAR(bLocal_1055);
							TASK_CLEAR(bLocal_1054);
							Function_363("Anthro01_obj02a", 4.0f, 1, 2, 0, 0, 0);
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
					}
					else if (iLocal_1126 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 7.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v1_AA"))
							{
								Function_516();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v2_AA"))
							{
								Function_515();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v3_AA"))
							{
								Function_514();
							}
							Function_227(&iLocal_1098);
						}
					}
					else if (iLocal_1126 == 3)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_400();
						Function_513();
						Function_210(bLocal_1055);
						Function_227(&iLocal_1098);
						iLocal_1126 = 4;
					}
					else if (iLocal_1126 == 4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							ACTOR_END_FORCE_HOLSTER(bLocal_1055);
							Function_512();
							Function_227(&iLocal_1098);
							iLocal_1126 = 6;
						}
					}
					else if (iLocal_1126 == 5)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						ACTOR_END_FORCE_HOLSTER(bLocal_1055);
						HUD_CLEAR_SMALL_TEXT();
						Function_511();
						Function_227(&iLocal_1098);
						iLocal_1126 = 6;
					}
					else if (iLocal_1126 == 6)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_363("Anthro01_obj02b", 7,5f, 1, 2, 0, 0, 0);
							bVar0 = ADD_BLIP_FOR_ACTOR(bLocal_1059, 322, 0.0f, 2, 0);
							SET_BLIP_NAME(bVar0, "Anthro01_bearBlip");
							Function_227(&iLocal_1098);
							iLocal_1126 = 7;
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_510();
			iLocal_1129[1] = 1;
			iLocal_992 = 2;
			Function_226(0);
			break;
	}
	return;
}

void Function_510() //Position: 0x18076 / 98422
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1055);
	Function_173();
	return;
}

void Function_511() //Position: 0x1808B / 98443
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_JonShootsBear", "Anthro01_JonShootsBear", false, 2, 1, 0, 1);
		Function_350(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x180E0 / 98528
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_BearMad", "Anthro01_BearMad", false, 2, 1, 0, 1);
		Function_350(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x18129 / 98601
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_SpotsBear", "Anthro01_SpotsBear", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x18176 / 98678
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AA", "Anthro01_GuyTalk_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v3_AB", "Anthro01_GuyTalk_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AC", "Anthro01_GuyTalk_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v3_AD", "Anthro01_GuyTalk_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AE1", "Anthro01_GuyTalk_v3_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AE2", "Anthro01_GuyTalk_v3_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AE3", "Anthro01_GuyTalk_v3_AE3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v3_AF", "Anthro01_GuyTalk_v3_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AG", "Anthro01_GuyTalk_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v3_AH", "Anthro01_GuyTalk_v3_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AI1", "Anthro01_GuyTalk_v3_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AI2", "Anthro01_GuyTalk_v3_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v3_AJ", "Anthro01_GuyTalk_v3_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AK1", "Anthro01_GuyTalk_v3_AK1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v3_AK2", "Anthro01_GuyTalk_v3_AK2", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x18513 / 99603
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AA", "Anthro01_GuyTalk_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v2_AB", "Anthro01_GuyTalk_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AC1", "Anthro01_GuyTalk_v2_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AC2", "Anthro01_GuyTalk_v2_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AD", "Anthro01_GuyTalk_v2_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AE1", "Anthro01_GuyTalk_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AE2", "Anthro01_GuyTalk_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AF", "Anthro01_GuyTalk_v2_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AG1", "Anthro01_GuyTalk_v2_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AG2", "Anthro01_GuyTalk_v2_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AH", "Anthro01_GuyTalk_v2_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AI1", "Anthro01_GuyTalk_v2_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AI2", "Anthro01_GuyTalk_v2_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AI3", "Anthro01_GuyTalk_v2_AI3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v2_AJ", "Anthro01_GuyTalk_v2_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AK", "Anthro01_GuyTalk_v2_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v2_AL", "Anthro01_GuyTalk_v2_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v2_AM", "Anthro01_GuyTalk_v2_AM", false, 1, 0, 0, 1);
		Function_350(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x18965 / 100709
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v1_AA", "Anthro01_GuyTalk_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v1_AB", "Anthro01_GuyTalk_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v1_AC1", "Anthro01_GuyTalk_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v1_AC2", "Anthro01_GuyTalk_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v1_AD", "Anthro01_GuyTalk_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AE", "Anthro01_GuyTalk_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_GuyTalk_v1_AF", "Anthro01_GuyTalk_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AG1", "Anthro01_GuyTalk_v1_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AG2", "Anthro01_GuyTalk_v1_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AG3", "Anthro01_GuyTalk_v1_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_GuyTalk_v1_AH", "Anthro01_GuyTalk_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_GuyTalk_v1_AI", "Anthro01_GuyTalk_v1_AI", false, 1, 1, 0, 1);
		Function_350(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_517() //Position: 0x18C4D / 101453
{
	bool bVar0;
	
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (GET_LAST_ATTACKER(Global_34573) != bLocal_1059 || GET_LAST_ATTACKER(GET_MOUNT(Global_34573)) != bLocal_1059)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	if (IS_ACTOR_RIDING(bLocal_1054))
	{
		if (GET_LAST_ATTACKER(bLocal_1054) != bLocal_1059 || GET_LAST_ATTACKER(GET_MOUNT(bLocal_1054)) != bLocal_1059)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1054, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1054, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	if (IS_ACTOR_RIDING(bLocal_1055))
	{
		if (GET_LAST_ATTACKER(bLocal_1055) != bLocal_1059 || GET_LAST_ATTACKER(GET_MOUNT(bLocal_1055)) != bLocal_1059)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1055, "Buck_eject"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1055, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	if (Function_325(&iLocal_1107))
	{
		if (Function_323(&iLocal_1107) < 1,5f)
		{
			TASK_CLEAR(Global_34573);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			DISABLE_GAME_CAMERA_FOCUS();
			Function_385(&(Local_669[017]), 1024, 1);
			Function_385(&(Local_669[217]), 1024, 1);
			Function_474(&iLocal_1107);
		}
		else if (Function_323(&iLocal_1107) < 0,3f)
		{
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			if (!iLocal_1149)
			{
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				Function_518(&(Local_669[017]), 1024);
				Function_518(&(Local_669[217]), 1024);
				iLocal_1149 = 1;
			}
		}
	}
	if (!Function_352(bLocal_1059, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1055);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1054, 1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1055, 1);
		ACTOR_START_FORCE_HOLSTER(bLocal_1054, 1, 0);
		ACTOR_START_FORCE_HOLSTER(bLocal_1055, 1, 0);
		if (Function_325(&iLocal_1107))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			DISABLE_GAME_CAMERA_FOCUS();
		}
		MEMORY_PREFER_RIDING(bLocal_1054, false);
		MEMORY_PREFER_RIDING(bLocal_1055, false);
		AUDIO_MUSIC_SET_MOOD("DRAMATIC_2", 0, 4294967295, 4294967295);
		iLocal_1141 = 0;
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		Function_226(106);
		return 1;
	}
	if (!bLocal_1151)
	{
		if (bLocal_1150 || GET_LAST_ATTACKER(bLocal_1059) != Global_34573)
		{
			if (GET_LAST_ATTACKER(bLocal_1059) == Global_34573)
			{
				if (!bLocal_1150)
				{
					iLocal_1126 = 5;
				}
			}
			SET_ACTOR_FACTION(bLocal_1059, 19);
			SET_ACTOR_INVULNERABILITY(bLocal_1059, false);
			PLAY_SOUND_FROM_ACTOR(bLocal_1059, "BEAR_GROWL_LARGE_MASTER", 0);
			TASK_PRIORITY_SET(bLocal_1059, 2);
			TASK_KILL_CHAR(bLocal_1059, bLocal_1054);
			SET_MOTIVE_BY_ENUM(bLocal_1059, 0, 0.0f);
			Function_456(bLocal_1059, Global_34573);
			Function_456(bLocal_1059, bLocal_1054);
			Function_456(bLocal_1059, bLocal_1055);
			Function_455(bLocal_1054, 50.0f, 1.0f, 3.0f);
			Function_455(bLocal_1055, 50.0f, 1.0f, 3.0f);
			TASK_PRIORITY_SET(bLocal_1054, false);
			TASK_PRIORITY_SET(bLocal_1055, false);
			TASK_KILL_CHAR(bLocal_1054, bLocal_1059);
			TASK_KILL_CHAR(bLocal_1055, bLocal_1059);
			Function_219(9, 0, 1);
			Function_210(bLocal_1056);
			iLocal_1141 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			bLocal_1151 = true;
			return 0;
		}
	}
	if (!IS_PLAYER_IN_HORSE_FOLLOW(0))
	{
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054);
	}
	else if (Function_347(Global_34573, 1) > 0,3f || !IS_ACTOR_RIDING(bLocal_1054))
	{
		Function_348(Global_34573, 0);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054);
	}
	if (!iLocal_1147)
	{
		if (((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 736)[1]) || IS_ACTOR_IN_VOLUME(bLocal_1054, (*&Local_4 + 736)[1])) || IS_ACTOR_IN_VOLUME(bLocal_1055, (*&Local_4 + 736)[1])) || bLocal_1151)
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &Local_4 + 1856[06], 1);
			TASK_ACTION_PERFORM(false, "bear_Main/Warning/Stand/Stand_pre");
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1059, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			iLocal_1147 = 1;
		}
	}
	else if (!bLocal_1150)
	{
		if ((IS_ACTOR_IN_VOLUME(bLocal_1054, (*&Local_4 + 736)[2]) || bLocal_1151) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 736)[2]))
		{
			Function_456(bLocal_1054, bLocal_1059);
			TASK_GO_TO_COORD(bLocal_1054, &Local_4 + 1856[16], 2);
			TASK_GO_TO_COORD(bLocal_1055, &Local_4 + 1856[26], 2);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[4], 2, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_1055, (*&Local_4 + 736)[4], 2, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_1059, (*&Local_4 + 736)[4], 2, true);
			if (!bLocal_1151)
			{
				if (!iLocal_1148)
				{
					if (IS_PLAYER_IN_HORSE_FOLLOW(0))
					{
						REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_1054);
						MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1054);
						ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_1054, (*&Local_4 + 736)[3]);
						ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_1057, (*&Local_4 + 736)[3]);
						Function_410(&iLocal_1107);
						iLocal_1148 = 1;
					}
				}
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_1126 = 3;
			}
			bLocal_1150 = true;
		}
	}
	return 0;
}

void Function_518(int iParam0, int iParam1) //Position: 0x191A2 / 102818
{
	if (iParam1 != 100000000)
	{
		Function_519(iParam0, iParam1);
	}
	else
	{
		Function_386(iParam0, 1);
	}
	return;
}

void Function_519(int iParam0, bool bParam1) //Position: 0x191C2 / 102850
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_520() //Position: 0x191ED / 102893
{
	Function_314(&Local_4 + 288, 562, 2, 0);
	Function_314(&Local_4 + 288, 976, 2, 0);
	if (Function_326(&Local_4 + 288))
	{
		return 1;
	}
	return 0;
}

void Function_521() //Position: 0x1921D / 102941
{
	if (!IS_ACTOR_VALID(bLocal_1055))
	{
		Function_461();
		Function_501();
		Function_500(1);
		Function_498(1);
	}
	if (!iLocal_1129[0])
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[236]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[106]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[196]), 1, true, 1);
		if (GET_MOUNT(Global_34573) != bLocal_1056)
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_1056);
		}
		if (GET_MOUNT(bLocal_1054) != bLocal_1057)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1054, bLocal_1057);
		}
		if (GET_MOUNT(bLocal_1055) != bLocal_1058)
		{
			ACTOR_MOUNT_ACTOR(bLocal_1055, bLocal_1058);
		}
		ADD_BLIP_FOR_ACTOR(bLocal_1055, 325, 0, 2, 0);
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
	}
	MEMORY_PREFER_RIDING(bLocal_1054, true);
	MEMORY_PREFER_RIDING(bLocal_1055, true);
	ACTOR_START_FORCE_HOLSTER(bLocal_1055, 1, 0);
	Function_523();
	Function_522();
	return;
}

void Function_522() //Position: 0x19325 / 103205
{
	bLocal_1059 = (*&Local_4 + 448)[02];
	if (Function_412(bLocal_1059, 1))
	{
		SET_ACTOR_UPDATE_PRIORITY(bLocal_1059, false);
		AI_BEHAVIOR_SET_ALLOW(bLocal_1059, 0, 0);
		TASK_PRIORITY_SET(bLocal_1059, true);
		TASK_STAND_STILL(bLocal_1059, -1.0f, 0, 0);
		SET_ACTOR_INVULNERABILITY(bLocal_1059, true);
		SET_ACTOR_MAX_HEALTH(bLocal_1059, 350.0f);
		Function_499(bLocal_1059);
	}
	return;
}

void Function_523() //Position: 0x19377 / 103287
{
	(*&Local_4 + 448)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Bear", 1102, -111,428f, 119,4475f, 1842,006f, 0.0f, 11,845f, 0.0f);
	return;
}

void Function_524() //Position: 0x193AA / 103338
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[16]), 1, true, 1);
	return;
}

void Function_525() //Position: 0x193CF / 103375
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	Function_326(&bLocal_789);
	Function_383(1);
	Function_507();
	Function_382();
	return;
}

void Function_526() //Position: 0x193F1 / 103409
{
	float fVar0;
	var uVar1;
	
	uVar1 = uVar1;
	Function_540();
	switch (bLocal_993)
	{
		case 0x00000000:
			Function_337(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_334();
			if (!Function_333(Global_30717[0]))
			{
				Function_332(&Local_622);
			}
			if (Function_282(&Local_622) || iLocal_1142)
			{
				Function_230(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_539();
				Function_226(1);
			}
			else
			{
				Function_538();
				Function_226(2);
			}
			break;
		
		case 0x00000001:
			if ((((STREAMING_IS_WORLD_LOADED() && Function_333(Global_30717[0])) && Function_537()) && Function_326(&bLocal_778)) && Function_326(&bLocal_782))
			{
				Function_538();
				Function_536();
				Function_226(2);
			}
			else if (Function_323(&iLocal_1098) < 2.0f)
			{
				Function_227(&iLocal_1098);
			}
			break;
		
		case 0x00000002:
			if (Function_323(&iLocal_1098) < 2,5f || (!iLocal_1142 && !Function_282(&Local_622)))
			{
				Function_240(iLocal_992);
				Function_367(StackVal, StackVal, Function_240(iLocal_992), iLocal_992, Global_30637[0], Function_242(iLocal_992), 0);
				Function_277(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_410(&iLocal_1101);
				Function_226(6);
			}
			break;
		
		case 0x00000006:
			if (!Function_535())
			{
				if (Function_325(&iLocal_1101))
				{
					if (Function_323(&iLocal_1101) < 4.0f)
					{
						CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
						Function_474(&iLocal_1101);
					}
				}
				fVar0 = Function_365(Global_34573, bLocal_1054);
				if (fVar0 < 80.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar0 < 40.0f)
				{
					if (!iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						if (iLocal_1126 > 1)
						{
							Function_363("Anthro01_obj01a", 7,5f, 1, 2, 0, 0, 0);
						}
						iLocal_1143 = 0;
					}
					if (iLocal_1126 == 0)
					{
						if (!HUD_IS_FADING())
						{
							Function_157(Global_30717[0]);
							Function_534();
							Function_227(&iLocal_1098);
							iLocal_1126 = 1;
						}
					}
					else if (iLocal_1126 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_363("Anthro01_obj01a", 7,5f, 1, 2, 0, 0, 0);
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
					else if (iLocal_1126 == 2)
					{
						if (!Function_359() || Function_323(&iLocal_1098) < 3.0f)
						{
							Function_533();
							Function_227(&iLocal_1098);
							iLocal_1126 = 3;
						}
					}
					else if (iLocal_1126 == 3)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 20.0f)
						{
							Function_532();
							Function_227(&iLocal_1098);
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!Function_492(12))
			{
				fVar0 = Function_365(Global_34573, bLocal_1054);
				if (fVar0 < 80.0f)
				{
					Function_243("Anthro_abandoned");
					bLocal_1139 = true;
				}
				else if (fVar0 < 40.0f)
				{
					if (!iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (iLocal_1143)
					{
						HUD_CLEAR_OBJECTIVE();
						if (iLocal_1126 > 2)
						{
							Function_363("Anthro01_obj01b", 7,5f, 1, 2, 0, 0, 0);
						}
						iLocal_1143 = 0;
					}
					if (iLocal_1126 == 0)
					{
						Function_531();
						Function_227(&iLocal_1098);
						iLocal_1126 = 1;
					}
					else if (iLocal_1126 == 1)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_530();
							Function_227(&iLocal_1098);
							iLocal_1126 = 2;
						}
					}
					else if (iLocal_1126 == 2)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_323(&iLocal_1098) < 10.0f)
						{
							Function_363("Anthro01_obj01b", 7,5f, 1, 2, 0, 0, 0);
							iLocal_1126 = 3;
							Function_227(&iLocal_1098);
						}
					}
					else if (iLocal_1126 == 3)
					{
						if (!IS_ACTOR_RIDING(bLocal_1054))
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 5.0f)
						{
							SET_ANIM_SET_FOR_ACTOR(bLocal_1054, "waving_on_horse", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_1054, "waving_on_horse/back");
							Function_529();
							Function_227(&iLocal_1098);
							iLocal_1126 = 4;
						}
					}
					else if (iLocal_1126 == 4)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_227(&iLocal_1098);
						}
						else if (!IS_ACTOR_RIDING(bLocal_1054))
						{
							Function_228(&iLocal_1098, 15.0f);
						}
						else if (Function_323(&iLocal_1098) < 20.0f)
						{
							SET_ANIM_SET_FOR_ACTOR(bLocal_1054, "waving_on_horse", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_1054, "waving_on_horse/back");
							Function_529();
							Function_227(&iLocal_1098);
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			fVar0 = Function_365(Global_34573, bLocal_1054);
			if (fVar0 < 80.0f)
			{
				Function_243("Anthro_abandoned");
				bLocal_1139 = true;
			}
			else if (fVar0 < 40.0f)
			{
				if (!iLocal_1143)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_363("Anthro_return", 7,5f, 0, 2, 0, 0, 0);
					Function_219(9, 1, 1);
					iLocal_1143 = 1;
				}
			}
			else
			{
				if (iLocal_1143)
				{
					HUD_CLEAR_OBJECTIVE();
					iLocal_1143 = 0;
				}
				if (!Function_489(16, 1))
				{
					if (!IS_ACTOR_VALID(GET_MOUNT(Global_34573)) && IS_ACTOR_ALIVE(bLocal_1056))
					{
						if (!iLocal_1144)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_363("Horse_return", 7,5f, 0, 2, 0, 0, 0);
							Function_219(9, 0, 1);
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1056)))
							{
								ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0, 2, 0);
							}
							iLocal_1144 = 1;
						}
					}
					else if (iLocal_1144)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_210(bLocal_1056);
						Function_219(9, 0, 1);
						iLocal_1144 = 0;
					}
				}
			}
			break;
		
		case 0x00000010:
			fVar0 = Function_365(Global_34573, bLocal_1055);
			if (fVar0 < 80.0f)
			{
				Function_243("Nastas_abandoned");
				bLocal_1139 = true;
			}
			else if (!Function_528())
			{
				if (fVar0 < 40.0f)
				{
					if (Function_364(bLocal_1055, Global_34573, 0.0f))
					{
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
					}
					else if (GET_TASK_STATUS(bLocal_1055, 6) != 1)
					{
						Function_486();
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 5);
					}
					if (!iLocal_1143)
					{
						AUDIO_MUSIC_SET_MOOD("ANTHRO_01_FALL", 0, 4294967295, 4294967295);
						HUD_CLEAR_OBJECTIVE();
						Function_363("Nastas_return", 7,5f, 0, 2, 0, 0, 0);
						iLocal_1143 = 1;
					}
				}
				else
				{
					if (iLocal_1143)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro01_obj01c", 7,5f, 1, 2, 0, 0, 0);
						iLocal_1143 = 0;
					}
					if (iLocal_1126 != 0)
					{
						if (GET_TASK_STATUS(bLocal_1055, 43) != 1)
						{
							SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
						}
					}
					if (iLocal_1126 == 0)
					{
						iLocal_777 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_1051, 0, 4294967295, Local_4.f_2428, 3, 0, 0);
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_1051, iLocal_777, 1, 0);
						SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_1051, iLocal_777, 8, 1);
						TASK_CLEAR(bLocal_1055);
						TASK_CLEAR(bLocal_1054);
						ADD_BLIP_FOR_ACTOR(bLocal_1055, 325, 0, 2, 0);
						HUD_CLEAR_OBJECTIVE();
						Function_363("Anthro01_obj01c", 7,5f, 1, 2, 0, 0, 0);
						Function_227(&iLocal_1098);
						iLocal_1126 = 1;
					}
					else if (iLocal_1126 == 1)
					{
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_227(&iLocal_1098);
						}
						else if (Function_323(&iLocal_1098) < 7.0f)
						{
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v1_AA"))
							{
								Function_516();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v2_AA"))
							{
								Function_515();
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Anthro01_GuyTalk_v3_AA"))
							{
								Function_514();
							}
							Function_227(&iLocal_1098);
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_527();
			iLocal_1129[0] = 1;
			iLocal_992 = 1;
			Function_226(0);
			break;
	}
	return;
}

void Function_527() //Position: 0x19C0B / 105483
{
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 692)[0]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	}
	Function_175(&bLocal_782);
	Function_174();
	return;
}

bool Function_528() //Position: 0x19C4C / 105548
{
	if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 736)[0]))
	{
		return 0;
	}
	Function_226(106);
	return 1;
}

void Function_529() //Position: 0x19C6C / 105580
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_WaitJonMount", "Anthro01_WaitJonMount", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x19CBF / 105663
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_MeetwitHors", "Anthro01_MeetwitHors", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_531() //Position: 0x19D10 / 105744
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Anthro01_Ngreets", "Anthro01_Ngreets", false, 1, 1, 0, 1);
		Function_350(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_532() //Position: 0x19D59 / 105817
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_NoFollowMcdHors", "Anthro01_NoFollowMcdHors", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_533() //Position: 0x19DB2 / 105906
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_Jog2Horses_v1_AA", "Anthro01_Jog2Horses_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Anthro01_Jog2Horses_v1_AB", "Anthro01_Jog2Horses_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1030", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_Jog2Horses_v1_AC", "Anthro01_Jog2Horses_v1_AC", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_534() //Position: 0x19EAE / 106158
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Anthro01_Exit2Street", "Anthro01_Exit2Street", false, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_535() //Position: 0x19EFF / 106239
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bLocal_1054) || (IS_ACTOR_IN_VOLUME(bLocal_1054, (*&Local_4 + 692)[1]) && (GET_NTH_TASK_STATUS(bLocal_1057, 2) != 1 || IS_ACTOR_MOUNTED(bLocal_1057))))
	{
		if (GET_NTH_TASK_STATUS(bLocal_1055, 2) == 1)
		{
			TASK_STAND_STILL(bLocal_1055, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_1057, -1.0f, 0, 0);
			Function_219(9, 0, 1);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1056)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_1056, 334, 0.0f, 2, 0);
			}
			iLocal_1146 = 1;
			Function_226(10);
			return 1;
		}
	}
	if (!iLocal_1146)
	{
		if (GET_TASK_STATUS(bLocal_1055, 43) == 0)
		{
			iLocal_1146 = 1;
		}
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (bVar0 == bLocal_1057)
		{
			if (IS_ACTOR_RIDING(bLocal_1054))
			{
				LOG_ERROR("Player is on MacDougal's horse, but MacDougal is also on a horse! WTF!!!");
			}
			else
			{
				bLocal_1057 = bLocal_1056;
				bLocal_1056 = bVar0;
				Function_392(bLocal_1056, 3.0f);
				SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
				SET_ALLOW_RIDE_BY_AI(bLocal_1057, 1);
				SET_ACTORS_HORSE(Global_34573, bLocal_1056);
				SET_ACTORS_HORSE(bLocal_1054, bLocal_1057);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1057, 0.0f);
				DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
				DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
				Function_384(&(Local_669[117]), bLocal_1057, "Anthro_Horse", 0, 0x5f5e100, 1);
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(false, bLocal_1057, 0, 1, 2, 2147483647);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1054, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				TASK_STAND_STILL(bLocal_1057, -1.0f, 0, 0);
			}
		}
		else if (bVar0 != bLocal_1056)
		{
			if (IS_ACTOR_ALIVE(bLocal_1056))
			{
				SET_ALLOW_RIDE_BY_AI(bLocal_1056, 1);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 1.0f);
				DECOR_REMOVE(bLocal_1056, "bInjuryNoEjection");
			}
			bLocal_1056 = bVar0;
			Function_392(bLocal_1056, 3.0f);
			SET_ALLOW_RIDE_BY_AI(bLocal_1056, 0);
			SET_ACTORS_HORSE(Global_34573, bLocal_1056);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
			DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
		}
	}
	return 0;
}

void Function_536() //Position: 0x1A14A / 106826
{
	bool bVar0;
	
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[06]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1054, *(&Local_4 + 840[96]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1055, *(&Local_4 + 840[186]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1056, *(&Local_4 + 840[226]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1057, *(&Local_4 + 840[316]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_4 + 840[356]), 1, true, 1);
	ACTOR_MOUNT_ACTOR(bLocal_1055, bLocal_1058);
	SET_ACTOR_MAX_SPEED(bLocal_1054, true);
	SET_ACTOR_MAX_SPEED(bLocal_1055, 4);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,5f, 1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 9,3f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2416, 1, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1056, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 1.0f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2424, 1, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1055, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 1.0f, 0, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2420, 1, 0, 0, 1, false);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1057, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	ACTOR_POP_NEXT_GAIT(bLocal_1054, 1, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2408, 2, 1, 0, 1, false);
	TASK_MOUNT(false, bLocal_1057, 0, 1, 2, 2147483647);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1054, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

bool Function_537() //Position: 0x1A313 / 107283
{
	Function_314(&Local_4 + 260, 562, 2, 0);
	Function_314(&Local_4 + 260, 976, 2, 0);
	if (Function_326(&Local_4 + 260))
	{
		return 1;
	}
	return 0;
}

void Function_538() //Position: 0x1A343 / 107331
{
	if (!IS_ACTOR_VALID((*&Local_4 + 400)[02]))
	{
		Function_461();
		Function_500((iLocal_1142 || Function_282(&Local_622)));
	}
	if (!IS_ACTOR_VALID((*&Local_4 + 436)[02]))
	{
		Function_501();
		Function_498((iLocal_1142 || Function_282(&Local_622)));
	}
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 692)[0]);
	Function_219(9, 1, 1);
	return;
}

void Function_539() //Position: 0x1A3A4 / 107428
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 840[06]), 1, true, 1);
	return;
}

void Function_540() //Position: 0x1A3C9 / 107465
{
	if (!Function_394(bLocal_993))
	{
		return;
	}
	Function_537();
	Function_383(bLocal_993 <= 16);
	Function_507();
	Function_541();
	Function_382();
	return;
}

void Function_541() //Position: 0x1A3F0 / 107504
{
	if (IS_VOLUME_VALID((*&Local_4 + 692)[2]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_1055, (*&Local_4 + 692)[2]))
		{
			SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 4);
			SET_ACTOR_MAX_SPEED(bLocal_1055, 4);
			SET_ACTOR_MAX_SPEED(bLocal_1058, 4);
			CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
			DESTROY_VOLUME((*&Local_4 + 692)[2]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 692)[3]))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_1055, (*&Local_4 + 692)[3]))
		{
			SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_1051, iLocal_777, 3);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1055, 16.0f);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_1058, 16.0f);
			CLEAR_ACTOR_MAX_SPEED(bLocal_1054);
			DESTROY_VOLUME((*&Local_4 + 692)[3]);
		}
	}
	return;
}

void Function_542() //Position: 0x1A48E / 107662
{
	switch (bLocal_993)
	{
		case 0x00000006:
			Function_568(&Local_622, 1);
			bLocal_621 = CREATE_LAYOUT("Anthro01_DynamicLayout");
			Function_567();
			Function_162(16384);
			ENABLE_CHILD_SECTOR("blk_archeologist01Props01x");
			ENABLE_CHILD_SECTOR("sp_anthro01x");
			SET_AMBIENT_ANIMALS_AGRESSIVENESS(0);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1095);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1096);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1097);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1098);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1099);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1100);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1101);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1102);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1103);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1104);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1105);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1068);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1069);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1070);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1071);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1072);
			bLocal_1127 = 4294967295;
			bLocal_1128 = 4294967295;
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_04", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_410(&iLocal_1098);
			if ((!Function_282(&Local_622) && Local_622.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/ANTHRO_01/ANTHRO_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, 744,001f, 78,306f, 1276,718f, -242,289f, 1, true, 1);
				Global_63097 = 1;
				bLocal_993 = 7;
			}
			else
			{
				bLocal_993 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_227(&iLocal_1098);
				bLocal_993 = 8;
			}
			else if (Function_323(&iLocal_1098) < 2.0f)
			{
				Function_227(&iLocal_1098);
			}
			break;
		
		case 0x00000008:
			if (Function_273("$/cutscene/ANTHRO_01/ANTHRO_01", &iLocal_985, &Local_622, &iLocal_992, 124450, 124280, 124202, 124185, 124165, 124154, 1, 1, 1, 2, 2, 0, 1))
			{
				Function_227(&iLocal_1098);
				bLocal_993 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_292())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_553();
					bLocal_1051 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_621, "Anthro01Posse"));
				}
				Function_227(&iLocal_1098);
				bLocal_993 = 10;
			}
			else if (Function_323(&iLocal_1098) < 2.0f)
			{
				Function_227(&iLocal_1098);
			}
			break;
		
		case 0x0000000A:
			Function_546();
			iLocal_992 = 0;
			bLocal_993 = false;
			Function_544(&Local_622, &iLocal_992, &bLocal_993);
			Function_543(StackVal, StackVal, StackVal, StackVal, StackVal, Function_553(), Local_622);
			switch (iLocal_992)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_229();
					break;
				
				case 0x00000002:
					Function_225();
					break;
				
				case 0x00000003:
					Function_224();
					break;
				
				case 0x00000004:
					Function_223();
					break;
				
				case 0x00000005:
					Function_222();
					break;
				
				case 0x00000006:
					Function_221();
					break;
				
				case 0x00000007:
					Function_217();
					break;
				
				case 0x00000065:
					Function_215();
					break;
			}
			break;
	}
	return;
}

void Function_543(struct<25> Param0) //Position: 0x1A77F / 108415
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_992 = 0;
			break;
		
		case 0x00000002:
			iLocal_992 = 3;
			break;
	}
}

void Function_544(int iParam0, var uParam1, var uParam2) //Position: 0x1A7AA / 108458
{
	if (Function_282(iParam0))
	{
		*uParam1 = Function_466(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*uParam2 = 0;
		}
		Function_545();
	}
	return;
}

void Function_545() //Position: 0x1A7DE / 108510
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

void Function_546() //Position: 0x1A82F / 108591
{
	if (Function_412(bLocal_1054, 1))
	{
		SET_CRIPPLE_ENABLE(bLocal_1054, 0);
		SET_ACTOR_FACTION(bLocal_1054, 20);
		TASK_PRIORITY_SET(bLocal_1054, true);
		AI_BEHAVIOR_SET_ALLOW(bLocal_1054, 0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_1054, 0);
		SET_ACTOR_MAX_HEALTH(bLocal_1054, 50.0f);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_1054, 8, "FASTWALK");
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_1054, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bLocal_1054, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bLocal_1054, 1);
		Function_499(bLocal_1054);
	}
	if (Function_412(bLocal_1056, 1))
	{
		TASK_PRIORITY_SET(bLocal_1056, true);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1056, 0.0f);
		DECOR_SET_BOOL(bLocal_1056, "bNoInjuryEjection", true);
	}
	if (!IS_ACTOR_VALID(bLocal_1057))
	{
		Function_552();
	}
	Function_551((iLocal_1142 || Function_282(&Local_622)));
	Function_550(&Local_4 + 792, bLocal_621);
	Function_548(&uLocal_629, bLocal_621);
	Function_384(&(Local_669[017]), bLocal_1054, "Anthro", 0, 0x5f5e100, 1);
	cLocal_1050 = CREATE_OBJECT_ITERATOR(Local_4);
	SET_DISABLE_DEADEYE(0, 0);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
	Function_547(&iLocal_1119, 8.0f);
	return;
}

void Function_547(int iParam0, float fParam1) //Position: 0x1A93F / 108863
{
	if (!Function_325(iParam0))
	{
		Function_228(iParam0, fParam1);
	}
	return;
}

int Function_548(var uParam0, bool bParam1) //Position: 0x1A955 / 108885
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_549(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_549(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_549(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_549(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_549(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1AFF5 / 110581
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

void Function_550(var uParam0, float fParam1) //Position: 0x1B0B8 / 110776
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		vVar4 = { 0.0f, 0.0f, 0.0f };
		GET_VOLUME_CENTER((*uParam0)[iVar0], &vVar1);
		vVar4.f_4 = GET_VOLUME_HEADING((*uParam0)[iVar0]);
		GET_VOLUME_SCALE((*uParam0)[iVar0], &vVar7);
		DESTROY_VOLUME((*uParam0)[iVar0]);
		CREATE_OBSTACLE_IN_LAYOUT(fParam1, Function_53(), vVar1, vVar4, vVar7);
		iVar0++;
	}
	return;
}

void Function_551(bool bParam0) //Position: 0x1B11F / 110879
{
	bLocal_1057 = (*&Local_4 + 424)[02];
	if (Function_412(bLocal_1057, 1))
	{
		TASK_PRIORITY_SET(bLocal_1057, true);
		AI_BEHAVIOR_SET_ALLOW(bLocal_1057, 0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_1057, true);
		AI_SET_NAV_ACTOR_WIDTH(bLocal_1057, 0,25f);
		Function_499(bLocal_1057);
		SET_MOST_RECENT_MOUNT(bLocal_1054, bLocal_1057);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1057, 0.0f);
		DECOR_SET_BOOL(bLocal_1057, "bNoInjuryEjection", true);
		ACCESSORIZE_HORSE(bLocal_1057, 3);
		Function_384(&(Local_669[117]), bLocal_1057, "Anthro_horse", 0, 0x5f5e100, 1);
		if (bParam0)
		{
			TASK_STAND_STILL(bLocal_1057, -1.0f, 0, 0);
		}
	}
	return;
}

void Function_552() //Position: 0x1B1C6 / 111046
{
	(*&Local_4 + 424)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CompanionHorse", 976, 751,3065f, 78,48562f, 1308,549f, 0.0f, 89,65953f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 424)[02], 21);
	return;
}

vector3 Function_553() //Position: 0x1B210 / 111120
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Anthro01_layout");
	Local_4.f_688 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVolumes_set");
	(*&Local_4 + 672)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, 744,0618f, 79,49407f, 1276,893f, 0.0f, 0.0f, 0.0f, 3,392717f, 3,042261f, 4,933172f);
	ADD_TO_VOLUME_SET(Local_4.f_688, (*&Local_4 + 672)[0]);
	(*&Local_4 + 672)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -457,8939f, 141,0963f, 1928,671f, 0.0f, 2,36891f, 0.0f, 8,598868f, 3,042261f, 6,381806f);
	ADD_TO_VOLUME_SET(Local_4.f_688, (*&Local_4 + 672)[1]);
	(*&Local_4 + 672)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, 751,8854f, 79,54492f, 1308,549f, 0.0f, 0.0f, 0.0f, 22,74323f, 3,042261f, 4,933172f);
	ADD_TO_VOLUME_SET(Local_4.f_688, (*&Local_4 + 672)[2]);
	Local_4.f_732 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BlackwaterVolumes_set");
	(*&Local_4 + 692)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseClearVol", 2, 740,9988f, 80,41908f, 1309,679f, 0.0f, 89,97042f, 0.0f, 16,91546f, 4,999195f, 28,56349f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[0]);
	(*&Local_4 + 692)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseReadyVol", 2, 735,9467f, 81,23683f, 1313,012f, 0.0f, 89,97042f, 0.0f, 11,64371f, 6,343929f, 17,83032f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[1]);
	(*&Local_4 + 692)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AroundCornerVol", 2, 715,3559f, 83,76731f, 1401,57f, 0.0f, 7,679595f, 0.0f, 23,33653f, 13,69937f, 111,3896f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[2]);
	(*&Local_4 + 692)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutOfTownVol", 2, 641,504f, 83,76731f, 1411,528f, 0.0f, 7,679595f, 0.0f, 23,33653f, 13,69937f, 111,3896f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[3]);
	(*&Local_4 + 692)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RetreatVol", 2, 671,1348f, 84,39091f, 1328,416f, 0.0f, -0,1450579f, 0.0f, 279,8281f, 42,8358f, 380,5051f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[4]);
	(*&Local_4 + 692)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nOfficeVol", 2, 736,5592f, 81,14281f, 1292,631f, 0.0f, 89,97042f, 0.0f, 61,67595f, 8,459806f, 36,86041f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[5]);
	(*&Local_4 + 692)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AlleyVol", 2, 754,8005f, 80,29592f, 1303,452f, 0.0f, 89,97042f, 0.0f, 16,91546f, 4,999195f, 20,61042f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[6]);
	(*&Local_4 + 692)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ReturnSpeedLimitVol", 2, 604,7114f, 88,48258f, 1393,599f, 0.0f, 7,679595f, 0.0f, 149,6632f, 29,64467f, 197,5955f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[7]);
	(*&Local_4 + 692)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseAlleyVol", 3, 759,7517f, 79,50702f, 1303,911f, 0.0f, -362,0979f, 0.0f, 2.0f, 1,393461f, 2.0f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 692)[8]);
	Local_4.f_764 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RoadVolumes_set");
	(*&Local_4 + 736)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BearCheckpointVol", 2, 153,6577f, 115,156f, 1784,788f, 0.0f, 0.0f, 0.0f, 23,33653f, 22,60112f, 111,3896f);
	ADD_TO_VOLUME_SET(Local_4.f_764, (*&Local_4 + 736)[0]);
	(*&Local_4 + 736)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BearActivateVol", 2, -114,266f, 114,655f, 1835,459f, 0.0f, 33,05383f, 0.0f, 184,9794f, 52,30298f, 152,0536f);
	ADD_TO_VOLUME_SET(Local_4.f_764, (*&Local_4 + 736)[1]);
	(*&Local_4 + 736)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CompNervousVol", 2, -114,266f, 117,91f, 1837,672f, 0.0f, 33,05383f, 0.0f, 64,48537f, 22,6901f, 74,04273f);
	ADD_TO_VOLUME_SET(Local_4.f_764, (*&Local_4 + 736)[2]);
	(*&Local_4 + 736)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseFrightVol", 2, -112,8724f, 119,6669f, 1855,239f, 0.0f, 30,55747f, 0.0f, 12,70069f, 5,101852f, 7,023883f);
	ADD_TO_VOLUME_SET(Local_4.f_764, (*&Local_4 + 736)[3]);
	(*&Local_4 + 736)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BearCombatVol", 2, -108,651f, 120,5359f, 1830,166f, 0.0f, 30,55747f, 0.0f, 38,81591f, 10,02045f, 19,17914f);
	ADD_TO_VOLUME_SET(Local_4.f_764, (*&Local_4 + 736)[4]);
	(*&Local_4 + 736)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AmbushFallthroughVol", 2, 369,4358f, 114,6276f, 1659,696f, 0.0f, 30,55747f, 0.0f, 38,81591f, 18,62624f, 117,3168f);
	ADD_TO_VOLUME_SET(Local_4.f_764, (*&Local_4 + 736)[5]);
	Local_4.f_788 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BearClawVolumes_set");
	(*&Local_4 + 768)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BearClawArrivalVol", 2, -455,144f, 138,817f, 1904,624f, 0.0f, 0.0f, 0.0f, 111,6856f, 43,62344f, 111,3896f);
	ADD_TO_VOLUME_SET(Local_4.f_788, (*&Local_4 + 768)[0]);
	(*&Local_4 + 768)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CabinMeetingVolExt", 2, -463,421f, 141,4388f, 1928,798f, 0.0f, 0.0f, 0.0f, 2,408271f, 2,607149f, 3,020808f);
	ADD_TO_VOLUME_SET(Local_4.f_788, (*&Local_4 + 768)[1]);
	(*&Local_4 + 768)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CabinMeetingVolInt", 2, -458,121f, 141,3308f, 1928,899f, 0.0f, 2,265846f, 0.0f, 8,070343f, 2,906228f, 5,410399f);
	ADD_TO_VOLUME_SET(Local_4.f_788, (*&Local_4 + 768)[2]);
	(*&Local_4 + 768)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideCabinVol", 2, -457,7913f, 141,205f, 1928,816f, 0.0f, 2,904057f, 0.0f, 9,074657f, 2,369687f, 6,796483f);
	ADD_TO_VOLUME_SET(Local_4.f_788, (*&Local_4 + 768)[3]);
	Local_4.f_804 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ObstacleVolumes_set");
	(*&Local_4 + 792)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ObstacleVol01", 2, -453,2264f, 140,0128f, 1918,421f, 182,6068f, 30,28387f, -182,3563f, 1,399539f, 1,076446f, 1.0f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 792)[0]);
	(*&Local_4 + 792)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ObstacleVol02", 2, -461,002f, 140,6799f, 1916,715f, 0.0f, -174,2126f, -5,354607f, 3,564411f, 1,105733f, 1,458754f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 792)[1]);
	Local_4.f_824 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Ambush01Volumes_set");
	(*&Local_4 + 808)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush01Vol01", 2, -206,2111f, 119,9704f, 1935,23f, 0.0f, 27,39809f, 0.0f, 10.0f, 85,89933f, 1334,25f);
	ADD_TO_VOLUME_SET(Local_4.f_824, (*&Local_4 + 808)[0]);
	(*&Local_4 + 808)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush01Vol02", 2, -282,9688f, 140,2506f, 1810,05f, 0.0f, 27,39809f, 0.0f, 14,25151f, 29,64632f, 202,8296f);
	ADD_TO_VOLUME_SET(Local_4.f_824, (*&Local_4 + 808)[1]);
	(*&Local_4 + 808)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush01Vol03", 2, -291,7271f, 145,323f, 1824,043f, 0.0f, 27,39809f, 0.0f, 16,38741f, 11,24233f, 11,96249f);
	ADD_TO_VOLUME_SET(Local_4.f_824, (*&Local_4 + 808)[2]);
	Local_4.f_836 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Ambush02Volumes_set");
	(*&Local_4 + 828)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ambush02Vol", 2, 193,8398f, 100,748f, 1775,305f, 0.0f, 36,78686f, 0.0f, 214,7397f, 78,85862f, 1202,766f);
	ADD_TO_VOLUME_SET(Local_4.f_836, (*&Local_4 + 828)[0]);
	*(&Local_4 + 840[06]) = { 742,5313f, 78,431f, 1277,337f };
	*(&Local_4 + 840[06] + 12) = { 0.0f, -222,6241f, 0.0f };
	*(&Local_4 + 840[16]) = { 149,1507f, 113,9402f, 1785,728f };
	*(&Local_4 + 840[16] + 12) = { 0.0f, 67,33617f, 0.0f };
	*(&Local_4 + 840[26]) = { -129,1565f, 119,7652f, 1843,309f };
	*(&Local_4 + 840[26] + 12) = { 0.0f, -244,6643f, 0.0f };
	*(&Local_4 + 840[36]) = { -457,5713f, 140,1866f, 1926,11f };
	*(&Local_4 + 840[36] + 12) = { 0.0f, 1,572193f, 0.0f };
	*(&Local_4 + 840[46]) = { -457,8309f, 140,1866f, 1928f };
	*(&Local_4 + 840[46] + 12) = { 0.0f, 90,79178f, 0.0f };
	*(&Local_4 + 840[56]) = { -438,8214f, 136,3085f, 1900,314f };
	*(&Local_4 + 840[56] + 12) = { 0.0f, -101,5154f, 0.0f };
	*(&Local_4 + 840[66]) = { 43,86036f, 117,0359f, 1762,763f };
	*(&Local_4 + 840[66] + 12) = { 0.0f, -97,17687f, 0.0f };
	*(&Local_4 + 840[76]) = { 540,3629f, 91,9378f, 1419,947f };
	*(&Local_4 + 840[76] + 12) = { 0.0f, -17,82698f, 0.0f };
	*(&Local_4 + 840[86]) = { 752,0822f, 78,48963f, 1309,106f };
	*(&Local_4 + 840[86] + 12) = { 0.0f, 90,36974f, 0.0f };
	*(&Local_4 + 840[96]) = { 741,3875f, 78,421f, 1279,346f };
	*(&Local_4 + 840[96] + 12) = { 0.0f, 132,1094f, 0.0f };
	*(&Local_4 + 840[106]) = { 149,4261f, 114,0112f, 1782,812f };
	*(&Local_4 + 840[106] + 12) = { 0.0f, 79,70858f, 0.0f };
	*(&Local_4 + 840[116]) = { -130,3963f, 119,7289f, 1842,117f };
	*(&Local_4 + 840[116] + 12) = { 0.0f, 118,1996f, 0.0f };
	*(&Local_4 + 840[126]) = { -459,0957f, 140,1866f, 1926,113f };
	*(&Local_4 + 840[126] + 12) = { 0.0f, 0,3133644f, 0.0f };
	*(&Local_4 + 840[136]) = { -460,2027f, 140,1866f, 1928f };
	*(&Local_4 + 840[136] + 12) = { 0.0f, 90.0f, 0.0f };
	*(&Local_4 + 840[146]) = { -435,3463f, 135,7823f, 1899,602f };
	*(&Local_4 + 840[146] + 12) = { 0.0f, -157,53f, 0.0f };
	*(&Local_4 + 840[156]) = { 46,4267f, 117,3397f, 1765,32f };
	*(&Local_4 + 840[156] + 12) = { 0.0f, 264,6878f, 0.0f };
	*(&Local_4 + 840[166]) = { 539,3053f, 91,88498f, 1418,321f };
	*(&Local_4 + 840[166] + 12) = { 0.0f, 338,2472f, 0.0f };
	*(&Local_4 + 840[176]) = { 751,9808f, 78,50212f, 1308,084f };
	*(&Local_4 + 840[176] + 12) = { 0.0f, -271,6109f, 0.0f };
	*(&Local_4 + 840[186]) = { 748,3133f, 78,49289f, 1309,272f };
	*(&Local_4 + 840[186] + 12) = { 0.0f, 89,60399f, 0.0f };
	*(&Local_4 + 840[196]) = { 146,1238f, 114,478f, 1783,242f };
	*(&Local_4 + 840[196] + 12) = { 0.0f, 74,50773f, 0.0f };
	*(&Local_4 + 840[206]) = { -132,2028f, 119,7717f, 1844,569f };
	*(&Local_4 + 840[206] + 12) = { 0.0f, -242,71f, 0.0f };
	*(&Local_4 + 840[216]) = { -2180.0f, 16,56469f, 2612.0f };
	*(&Local_4 + 840[216] + 12) = { 0.0f, -90.0f, 0.0f };
	*(&Local_4 + 840[226]) = { 739,7628f, 78,35129f, 1305,33f };
	*(&Local_4 + 840[226] + 12) = { 0.0f, 177,9078f, 0.0f };
	*(&Local_4 + 840[236]) = { 149,5709f, 113,8711f, 1784,878f };
	*(&Local_4 + 840[236] + 12) = { 0.0f, 70,28059f, 0.0f };
	*(&Local_4 + 840[246]) = { -128,853f, 119,7614f, 1844,019f };
	*(&Local_4 + 840[246] + 12) = { 0.0f, 115,8308f, 0.0f };
	*(&Local_4 + 840[256]) = { -438,6676f, 136,3998f, 1899,444f };
	*(&Local_4 + 840[256] + 12) = { 0.0f, -168,7004f, 0.0f };
	*(&Local_4 + 840[266]) = { -438,6676f, 136,3998f, 1899,444f };
	*(&Local_4 + 840[266] + 12) = { 0.0f, -168,7004f, 0.0f };
	*(&Local_4 + 840[276]) = { -438,6676f, 136,3998f, 1899,444f };
	*(&Local_4 + 840[276] + 12) = { 0.0f, -168,7004f, 0.0f };
	*(&Local_4 + 840[286]) = { 43,77153f, 117,0268f, 1763,628f };
	*(&Local_4 + 840[286] + 12) = { 0.0f, -104,426f, 0.0f };
	*(&Local_4 + 840[296]) = { 538,5169f, 92,00337f, 1421,901f };
	*(&Local_4 + 840[296] + 12) = { 0.0f, -23,37519f, 0.0f };
	*(&Local_4 + 840[306]) = { 759,7517f, 78,30585f, 1303,911f };
	*(&Local_4 + 840[306] + 12) = { 0.0f, -362,0979f, 0.0f };
	*(&Local_4 + 840[316]) = { 751,4146f, 78,48562f, 1308,559f };
	*(&Local_4 + 840[316] + 12) = { 0.0f, 89,65953f, 0.0f };
	*(&Local_4 + 840[326]) = { -435,3463f, 135,7823f, 1899,602f };
	*(&Local_4 + 840[326] + 12) = { 0.0f, -157,53f, 0.0f };
	*(&Local_4 + 840[336]) = { -435,3463f, 135,7823f, 1899,602f };
	*(&Local_4 + 840[336] + 12) = { 0.0f, -157,53f, 0.0f };
	*(&Local_4 + 840[346]) = { 761,6635f, 78,30585f, 1303,134f };
	*(&Local_4 + 840[346] + 12) = { 0.0f, -3,751729f, 0.0f };
	*(&Local_4 + 840[356]) = { 753,2609f, 78,465f, 1309,05f };
	*(&Local_4 + 840[356] + 12) = { 0.0f, 92,48192f, 0.0f };
	*(&Local_4 + 840[366]) = { -436,8435f, 136,2956f, 1898,684f };
	*(&Local_4 + 840[366] + 12) = { 0.0f, -171,662f, 0.0f };
	*(&Local_4 + 840[376]) = { -436,8435f, 136,2956f, 1898,684f };
	*(&Local_4 + 840[376] + 12) = { 0.0f, -171,662f, 0.0f };
	*(&Local_4 + 840[386]) = { -436,8435f, 136,2956f, 1898,684f };
	*(&Local_4 + 840[386] + 12) = { 0.0f, -171,662f, 0.0f };
	*(&Local_4 + 1780[06]) = { 737,4933f, 78,35129f, 1312,366f };
	*(&Local_4 + 1780[06] + 12) = { 0.0f, -355,4207f, 0.0f };
	*(&Local_4 + 1780[16]) = { 758,0911f, 78,30585f, 1306,599f };
	*(&Local_4 + 1780[16] + 12) = { 0.0f, -141,106f, 0.0f };
	*(&Local_4 + 1780[26]) = { 736,9579f, 78,30585f, 1308,818f };
	*(&Local_4 + 1780[26] + 12) = { -117,756f, -89,81654f, 118,3795f };
	*(&Local_4 + 1856[06]) = { -114,3453f, 119,1434f, 1833,984f };
	*(&Local_4 + 1856[06] + 12) = { 0.0f, -364,6065f, 0.0f };
	*(&Local_4 + 1856[16]) = { -106,1994f, 118,6063f, 1828,322f };
	*(&Local_4 + 1856[16] + 12) = { 0.0f, -231,9153f, 0.0f };
	*(&Local_4 + 1856[26]) = { -105,8202f, 118,6805f, 1831,342f };
	*(&Local_4 + 1856[26] + 12) = { 0.0f, -248,1166f, 0.0f };
	*(&Local_4 + 1856[36]) = { -428,4029f, 134,5395f, 1906,003f };
	*(&Local_4 + 1856[36] + 12) = { 0.0f, -97,9579f, 0.0f };
	*(&Local_4 + 1856[46]) = { -131,5579f, 122,6644f, 1734,991f };
	*(&Local_4 + 1856[46] + 12) = { 0.0f, -192,0831f, 0.0f };
	*(&Local_4 + 1856[56]) = { 131,4178f, 123,1664f, 1660,582f };
	*(&Local_4 + 1856[56] + 12) = { 0.0f, -117,4556f, 0.0f };
	*(&Local_4 + 2004[06]) = { 743,1809f, 78,48635f, 1311,157f };
	*(&Local_4 + 2004[06] + 12) = { 0.0f, 179,3503f, 0.0f };
	*(&Local_4 + 2032[06]) = { -438,74f, 136,3568f, 1899,853f };
	*(&Local_4 + 2032[06] + 12) = { 0.0f, -259,7174f, 0.0f };
	*(&Local_4 + 2032[16]) = { -464f, 140,1866f, 1928,982f };
	*(&Local_4 + 2032[16] + 12) = { 0.0f, -405,8687f, 0.0f };
	*(&Local_4 + 2032[26]) = { -463,0306f, 140,1866f, 1929,796f };
	*(&Local_4 + 2032[26] + 12) = { 0.0f, -354,1654f, 0.0f };
	*(&Local_4 + 2032[36]) = { -452,4088f, 139,5166f, 1918,388f };
	*(&Local_4 + 2032[36] + 12) = { 182,6068f, 30,28387f, -182,3563f };
	*(&Local_4 + 2032[46]) = { -460,5089f, 140,217f, 1916,038f };
	*(&Local_4 + 2032[46] + 12) = { 0.0f, -174,2126f, -5,354607f };
	*(&Local_4 + 2156[06]) = { -461,5501f, 140,4309f, 1914,945f };
	*(&Local_4 + 2156[06] + 12) = { 0.0f, -525,551f, 0.0f };
	*(&Local_4 + 2156[16]) = { -464,4181f, 140,2895f, 1919,609f };
	*(&Local_4 + 2156[16] + 12) = { 0.0f, -500,3999f, 0.0f };
	*(&Local_4 + 2156[26]) = { -452,453f, 139,5909f, 1917,083f };
	*(&Local_4 + 2156[26] + 12) = { 0.0f, -572,7661f, 0.0f };
	*(&Local_4 + 2156[36]) = { -468,4375f, 142,6143f, 1901,379f };
	*(&Local_4 + 2156[36] + 12) = { 0.0f, -538,8961f, 0.0f };
	*(&Local_4 + 2156[46]) = { -462,6444f, 142,6551f, 1898,452f };
	*(&Local_4 + 2156[46] + 12) = { 0.0f, -543,0562f, 0.0f };
	*(&Local_4 + 2156[56]) = { -483,1919f, 143,5607f, 1918,001f };
	*(&Local_4 + 2156[56] + 12) = { 0.0f, -473,0313f, 0.0f };
	*(&Local_4 + 2156[66]) = { -481,2767f, 143,5607f, 1910,075f };
	*(&Local_4 + 2156[66] + 12) = { 0.0f, -485,0387f, 0.0f };
	*(&Local_4 + 2156[76]) = { -458,5962f, 139,8727f, 1918,713f };
	*(&Local_4 + 2156[76] + 12) = { 0.0f, -547,014f, 0.0f };
	Local_4.f_2352 = CREATE_GRINGO_IN_LAYOUT(Local_4, "RandStand01", "rand_idle_stand", -456,2365f, 140,1866f, 1927,653f, 0.0f, 466,1592f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2352, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2352, "ForceAllowRain", true);
	Local_4.f_2356 = CREATE_GRINGO_IN_LAYOUT(Local_4, "RandStand02", "rand_idle_stand", -471,7697f, 142,5741f, 1898,144f, 0.0f, 214,0517f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2356, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2356, "ForceAllowRain", true);
	Local_4.f_2360 = CREATE_GRINGO_IN_LAYOUT(Local_4, "RandStand03", "rand_idle_stand_nospawn", -459,0197f, 139,864f, 1911,736f, 0.0f, -84,83068f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2360, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2360, "ForceAllowRain", true);
	Local_4.f_2364 = CREATE_GRINGO_IN_LAYOUT(Local_4, "CabinLean01", "Rand_Idle_NearWall_nospawn", -458,0344f, 140,1605f, 1931,182f, 0.0f, 367,0306f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2364, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2364, "ForceAllowRain", true);
	Local_4.f_2368 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nRandSit01", "Rand_Idle_Sit_Ground_nospawn", -461,8961f, 140,1949f, 1921,04f, 0.0f, 242,0531f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2368, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2368, "ForceAllowRain", true);
	Local_4.f_2372 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nRandSit02", "Rand_Idle_Sit_Ground_nospawn", -466,1379f, 142,6784f, 1900,161f, 0.0f, -179,7819f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2372, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2372, "ForceAllowRain", true);
	Local_4.f_2376 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nRandSit03", "Rand_Idle_Sit_Ground_nospawn", -480,5651f, 142,9046f, 1918,003f, 0.0f, 675,2524f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2376, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2376, "ForceAllowRain", true);
	Local_4.f_2380 = CREATE_GRINGO_IN_LAYOUT(Local_4, "CleanRifle", "sit_cleanrifle_loop", -455,6622f, 139,545f, 1919,1f, 0.0f, -48,19163f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2380, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2380, "ForceAllowRain", true);
	Local_4.f_2384 = CREATE_GRINGO_IN_LAYOUT(Local_4, "StandGunTricks", "stand_guntricks_e_any", -456,2991f, 140,1866f, 1929,427f, 0.0f, 88,81544f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2384, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2384, "ForceAllowRain", true);
	Local_4.f_2388 = CREATE_GRINGO_IN_LAYOUT(Local_4, "SitStump", "stool_sit_attach_indef", -474,5387f, 142,5983f, 1904,128f, 0.0f, 243,0905f, 0.0f);
	DECOR_SET_BOOL(Local_4.f_2388, "ForceAllowSun", true);
	DECOR_SET_BOOL(Local_4.f_2388, "ForceAllowRain", true);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "PlayerCabinCover", -457,5578f, 140,2759f, 1926,835f, 0.0f, 0,6774886f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "CompanionCabinCover", -459,1304f, 140,2677f, 1926,851f, 0.0f, 0,7153695f, 0.0f, 4);
	Local_4.f_2392 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Cover01", -452,4309f, 139,6427f, 1917,039f, 0.0f, 149,7951f, 0.0f, 4);
	Local_4.f_2396 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Cover02", -461,5339f, 140,5394f, 1914,956f, 0.0f, -173,8902f, 0.0f, 4);
	Local_4.f_2400 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Cover03", -462,6774f, 142,6554f, 1898,57f, 0.0f, -181,6498f, 0.0f, 4);
	Local_4.f_2404 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "Cover04", -483,1657f, 143,5607f, 1918,008f, 0.0f, -111,2498f, 0.0f, 4);
}

var D "ËD8ÔBé4D aD8`LBÅPD ¨/D8&BÃzD ûD8B°¤D¡QD7â±B¹ÅD¡¨D7ÆB·OD¢ZD7°B»èD¢¡÷D7xB·ÀD£$D7ïB¼D£y¯,:D	h;oNastasAlleyPath    p   D;6ÌBúkD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x1CD47 / 118087
{
	PatchTrap6();
	PatchTrapA();
	StackVal->f_15061 = StackVal;
	(*StackVal)[StackVal66] = StackVal;
	PatchRet();
	*StackVal = StackVal;
	StackVal->f_41896 = StackVal;
	6.0f->f_14980 = StackVal;
	PatchRet();
	*(StackVal + 66) = StackVal;
	StackVal->f_41898 = StackVal;
	((StackVal / StackVal))->f_14883 = StackVal;
	*(StackVal - 25350) = StackVal;
	StackVal->f_41900 = StackVal;
}

struct<8> BÏPQD¾?CÙQBÑ.íD¿+dC×GBÓÚDÀòCÒÜKBØ±>DÂÄCÎñ/BÙ·qDÄ ¶CÊ§BÙe(DÅxCÈEúBÙFDÆP­CÆbBÙlDÇZCÅ¢,BÙåëDÈ³RCÅO¯BÚ:TDÉ³~CÄ­"BÚÀDË3LCÃBÚçDÌ,UCÁäØBÚFDÍ`C¿NZBÚhÖDÎqzC¼pBÚ;YDÏ2ÌC·VBÚvDÏë1C®fuBÛp0DÑ;C¤#BÞÅUDÒC¸Bâ FDÓùUCaBãµ(DÔê\CF¬Bä~ªDÕ¥QCå(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66) //Position: 0x1D38B / 119691
{
}

struct<8> 	DäbSÂÖÆÞBíTDäê¡ÂåkBîIjDå]ãÂú/QBïEÎDæïÃÉBïDæyÃNBðáDçî,:D	|;oToBearClaw p  ÂëÎÉBî¡Då¦òÃ,8BïNDçgÃ1BìúDèàÃ"é%BëDé±Ã,²QBë¶æDë;Ã7xïBê2óDì¶ÃFRBç¿cDîpÃSÁBæð¼DïqÃaÀaBçÔDðmdÃqNBéþkDðçýÃgBí ÔD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94) //Position: 0x1D63A / 120378
{
	return StackVal, StackVal * 115;
}

struct<8> D8BÃ£D¤.<D8BÂèD¤±D8¡BÂ%D¤]D8©ÚBÁD£þD8¾ÝB¼àD£âkD8Ù;B¼D£ÌD8(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x1E277 / 123511
{
	var uVar16983;
	var uVar17396;
	
	1->f_41917 = StackVal - 25407;
	StackVal->f_14636 = StackVal;
	*StackVal =  };
}

void D£D>iöB ]D¢Ñ,:D	;oPlayerPullUpPath   p   <D8B³ÜD¤ÀsD8B³ÜD¤®*D8$rB³ÜD¤<D8*TB³ÜD¤/D82B³ÜD¤r,:D	;(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x1E3CF / 123855
{
}

int Function_559() //Position: 0x1E4FA / 124154
{
	iLocal_1142 = 1;
	return 1;
}

int Function_560() //Position: 0x1E505 / 124165
{
	Function_287(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_561() //Position: 0x1E519 / 124185
{
	if (!iLocal_1142)
	{
		Function_536();
	}
	return 1;
}

int Function_562() //Position: 0x1E52A / 124202
{
	if (Function_537())
	{
		if (!IS_ACTOR_VALID(bLocal_1055))
		{
			Function_461();
			Function_500(0);
		}
		if (!IS_ACTOR_VALID(bLocal_1058))
		{
			Function_501();
			Function_498(0);
		}
		if (!IS_ACTOR_VALID(bLocal_1057))
		{
			Function_552();
			Function_551(0);
		}
	}
	Function_326(&bLocal_778);
	Function_326(&bLocal_782);
	return 1;
}

int Function_563() //Position: 0x1E578 / 124280
{
	if ((Function_292() && Function_564()) && Function_333(Global_30717[0]))
	{
		Function_553();
		bLocal_1051 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_621, "Anthro01Posse"));
		if (Function_412(bLocal_1054, 1))
		{
			TELEPORT_ACTOR_WITH_HEADING(Function_553(), bLocal_1054, *(&Local_4 + 840[96]), 1, 1, 1);
			TASK_STAND_STILL(bLocal_1054, -1.0f, 0, 0);
		}
		CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(*(&Local_4 + 840[06]), *(&Local_4 + 840[06] + 12));
		Function_227(&iLocal_1098);
		return 1;
	}
	if (Function_323(&iLocal_1098) < 2.0f)
	{
		Function_227(&iLocal_1098);
	}
	return 0;
}

int Function_564() //Position: 0x1E61B / 124443
{
	return 1;
}

int Function_565() //Position: 0x1E622 / 124450
{
	float fVar0;
	
	Function_566();
	iLocal_1142 = 0;
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, 744,001f, 78,306f, 1276,718f, -242,289f, 1, true, 1);
	Function_319(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_621, "Cutscene01Vol01", 2, 744,062f, 79,494f, 1276,893f, 0.0f, 0.0f, 0.0f, 3,393f, 3,042f, 4,933f);
	Function_317(StackVal, StackVal, bLocal_621, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	Function_227(&iLocal_1098);
	return 1;
}

void Function_566() //Position: 0x1E6B1 / 124593
{
	return;
}

void Function_567() //Position: 0x1E6B7 / 124599
{
	Function_311(&bLocal_778, "anthro01", 10, 0);
	Function_311(&bLocal_782, "waving_on_horse", 5, 0);
	Function_311(&bLocal_782, "custom/waving_on_horse", 8, 0);
	Function_311(&bLocal_789, "custom/comp_waiting", 8, 0);
	Function_311(&bLocal_789, "comp_waiting", 5, 0);
	Function_311(&bLocal_796, "dead_ground_male", 5, 0);
	Function_311(&bLocal_800, "dead_ground_male", 5, 0);
	Function_311(&bLocal_804, "p_bat_barrel04x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crate02x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crate03x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crate04x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crate05x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crate08x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crate09x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crateStack01x", 0, 0);
	Function_311(&bLocal_804, "p_bat_crateStack02x", 0, 0);
	Function_311(&bLocal_804, "p_bat_flourSack01x", 0, 0);
	Function_311(&bLocal_804, "p_bat_flourSack02x", 0, 0);
	Function_311(&bLocal_804, "p_bat_tent03x", 0, 0);
	Function_311(&bLocal_804, "p_bat_wagon03x", 0, 0);
	Function_311(&bLocal_804, "p_gen_campfire02x", 0, 0);
	Function_311(&bLocal_804, "p_gen_campfire03x", 0, 0);
	Function_311(&bLocal_804, "p_gen_campfire04x", 0, 0);
	Function_311(&bLocal_804, "p_gen_campfireCombined01x", 0, 0);
	Function_311(&bLocal_804, "p_gen_tent01x", 0, 0);
	Function_311(&bLocal_804, "dead_ground_male", 5, 0);
	Function_311(&bLocal_862, "p_bat_barrel04x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crate02x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crate03x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crate04x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crate05x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crate08x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crate09x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crateStack01x", 0, 0);
	Function_311(&bLocal_862, "p_bat_crateStack02x", 0, 0);
	Function_311(&bLocal_862, "p_bat_flourSack01x", 0, 0);
	Function_311(&bLocal_862, "p_bat_flourSack02x", 0, 0);
	Function_311(&bLocal_862, "p_bat_tent03x", 0, 0);
	Function_311(&bLocal_862, "p_bat_wagon03x", 0, 0);
	Function_311(&bLocal_862, "p_gen_campfire02x", 0, 0);
	Function_311(&bLocal_862, "p_gen_campfire03x", 0, 0);
	Function_311(&bLocal_862, "p_gen_campfire04x", 0, 0);
	Function_311(&bLocal_862, "p_gen_campfireCombined01x", 0, 0);
	Function_311(&bLocal_862, "p_gen_tent01x", 0, 0);
	Function_311(&bLocal_862, "dead_ground_male", 5, 0);
	Function_311(&bLocal_920, "p_bat_barrel04x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crate02x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crate03x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crate04x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crate05x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crate08x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crate09x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crateStack01x", 0, 0);
	Function_311(&bLocal_920, "p_bat_crateStack02x", 0, 0);
	Function_311(&bLocal_920, "p_bat_flourSack01x", 0, 0);
	Function_311(&bLocal_920, "p_bat_flourSack02x", 0, 0);
	Function_311(&bLocal_920, "p_bat_tent03x", 0, 0);
	Function_311(&bLocal_920, "p_bat_wagon03x", 0, 0);
	Function_311(&bLocal_920, "p_gen_campfire02x", 0, 0);
	Function_311(&bLocal_920, "p_gen_campfire03x", 0, 0);
	Function_311(&bLocal_920, "p_gen_campfire04x", 0, 0);
	Function_311(&bLocal_920, "p_gen_campfireCombined01x", 0, 0);
	Function_311(&bLocal_920, "p_gen_tent01x", 0, 0);
	Function_311(&bLocal_920, "dead_ground_male", 5, 0);
	return;
}

void Function_568(int iParam0, bool bParam1) //Position: 0x1EDBF / 126399
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_574(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_282(iParam0))
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
	if (!Function_282(iParam0))
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
	Function_245();
	Function_276();
	Function_243("");
	Function_573(0);
	Function_572();
	Function_198();
	Function_197();
	ENABLE_JOURNAL_REPLAY(0);
	Function_571();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_338(0, 0x40400000);
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
	Function_570(13);
	Function_570(14);
	Function_570(25);
	Function_570(24);
	Function_570(12);
	Function_570(27);
	Function_570(26);
	Function_570(15);
	Function_569();
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

void Function_569() //Position: 0x1F1E3 / 127459
{
	char* cVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(Global_6290);
	ITERATE_IN_LAYOUT(cVar0, Global_6290);
	bVar1 = START_OBJECT_ITERATOR(cVar0);
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
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

void Function_570(int iParam0) //Position: 0x1F257 / 127575
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_571() //Position: 0x1F277 / 127607
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

void Function_572() //Position: 0x1F2B4 / 127668
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_573(int iParam0) //Position: 0x1F2C8 / 127688
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_201())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_574(int iParam0, int iParam1) //Position: 0x1F2FD / 127741
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
			Function_575(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_575(int iParam0) //Position: 0x1F37F / 127871
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

void Function_576() //Position: 0x1F3CD / 127949
{
	return;
}

bool Function_577(int iParam0) //Position: 0x1F3D3 / 127955
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_578(int iParam0) //Position: 0x1F3F1 / 127985
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
			Function_579(iParam0, 1);
			return 1;
		}
	}
	Function_579(iParam0, 0);
	return 0;
}

void Function_579(int iParam0, bool bParam1) //Position: 0x1F478 / 128120
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

bool Function_580(var uParam0, var uParam1, int iParam2, char* cParam3, var uParam4) //Position: 0x1F49C / 128156
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
	if (!IS_ITERATOR_VALID(cParam3))
	{
		Function_579(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_599(&cParam3);
				ITERATE_IN_EVENT_TRAP(cParam3, (*uParam1)[iVar03]);
				bVar1 = START_OBJECT_ITERATOR(cParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_598(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_598(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_584(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_579(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_583(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_582(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_583(&bVar17);
														strcpy(&Var18, "", 64);
														Function_581(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_243(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_582(StackVal, iParam2, bVar17);
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
						bVar1 = OBJECT_ITERATOR_NEXT(cParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
				EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
			}
		}
		iVar0++;
	}
	Function_579(iParam2, 0);
	return 0;
}

void Function_581(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1F835 / 129077
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

void Function_582(var uParam0, int iParam1, bool bParam2) //Position: 0x1F920 / 129312
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

void Function_583(bool bParam0) //Position: 0x1F996 / 129430
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_584(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1F9B8 / 129464
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
			return Function_595(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_588(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_595(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_585(iParam0, bVar2);
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
						bVar2 = Function_595(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_585(iParam0, bVar2);
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

var Function_585(int iParam0, bool bParam1) //Position: 0x1FB02 / 129794
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
				bParam1 = Function_587(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_586(16);
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
				bParam1 = Function_587(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_586(256);
			}
		}
	}
	return bParam1;
}

bool Function_586(int iParam0) //Position: 0x1FC35 / 130101
{
	return 2 | iParam0;
}

int Function_587(int iParam0) //Position: 0x1FC3F / 130111
{
	return 4 | iParam0;
}

int Function_588(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1FC49 / 130121
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
				iParam3 = Function_594(iParam0, iParam1, bParam4);
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
			return Function_586(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_589(iParam0, iParam1, 0, bParam4);
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
			return Function_586(16);
		}
	}
	return 0;
}

int Function_589(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1FCFB / 130299
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_593(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_592(iVar0, 3, 1, bParam3))
			{
				if (!Function_598(iParam0, 8, 1))
				{
					return Function_591(64, 1024, bParam2);
				}
			}
			return Function_590(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_592(iVar0, 2, 1, bParam3))
			{
				if (!Function_598(iParam0, 32, 1))
				{
					return Function_591(64, 1024, bParam2);
				}
			}
			return Function_590(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_592(iVar0, 1, 1, bParam3))
			{
				if (!Function_598(iParam0, 64, 1))
				{
					return Function_591(64, 1024, bParam2);
				}
			}
			return Function_590(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_592(iVar0, 3, 1, bParam3))
			{
				if (!Function_598(iParam0, 128, 1))
				{
					return Function_591(64, 1024, bParam2);
				}
			}
			return Function_590(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_592(iVar0, 1, 1, bParam3))
			{
				if (!Function_598(iParam0, 1024, 1))
				{
					return Function_591(64, 1024, bParam2);
				}
			}
			return Function_590(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_592(iVar0, 1, 1, bParam3))
			{
				if (!Function_598(iParam0, 1024, 1))
				{
					return Function_591(64, 1024, bParam2);
				}
			}
			return Function_590(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_590(int iParam0, int iParam1, bool bParam2) //Position: 0x1FEB5 / 130741
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_591(int iParam0, int iParam1, bool bParam2) //Position: 0x1FECA / 130762
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_592(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1FEDF / 130783
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_593(int iParam0) //Position: 0x1FEFC / 130812
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

int Function_594(var uParam0, int iParam1, bool bParam2) //Position: 0x1FF6B / 130923
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_593(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_592(iVar0, 3, 1, bParam2))
			{
				if (!Function_598(uParam0, 8, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000009:
			if (Function_592(iVar0, 3, 1, bParam2))
			{
				if (!Function_598(uParam0, 8, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x0000006E:
			if (Function_592(iVar0, 2, 1, bParam2))
			{
				if (!Function_598(uParam0, 16, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x0000005B:
			if (Function_592(iVar0, 2, 1, bParam2))
			{
				if (!Function_598(uParam0, 32, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000031:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(uParam0, 64, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000007:
			if (Function_592(iVar0, 3, 1, bParam2))
			{
				if (!Function_598(uParam0, 128, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000008:
			if (Function_592(iVar0, 2, 1, bParam2))
			{
				if (!Function_598(uParam0, 256, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000014:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(uParam0, 512, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000018:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(uParam0, 512, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000057:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(uParam0, 1024, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000058:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(uParam0, 1024, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_595(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x20186 / 131462
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
						return Function_594(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_598(iParam0, 2, 1))
					{
						return Function_587(8);
					}
					return Function_586(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_598(iParam0, 4, 1))
					{
						return Function_587(16);
					}
					return Function_586(16);
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
							return Function_589(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_598(iParam0, 2, 1))
						{
							return Function_587(128);
						}
						return Function_586(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_598(iParam0, 4, 1))
						{
							return Function_587(256);
						}
						return Function_586(256);
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
						return Function_589(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_598(iParam0, 2, 1))
					{
						return Function_587(8);
					}
					return Function_586(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_598(iParam0, 4, 1))
					{
						return Function_587(16);
					}
					return Function_586(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_597(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_598(iParam0, 2, 1))
					{
						return Function_587(8);
					}
					return Function_586(8);
				}
				if (!Function_598(iParam0, 4, 1))
				{
					return Function_587(16);
				}
				return Function_586(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_589(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_596(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_586(128);
							}
							if (!Function_598(iParam0, 2, 1))
							{
								return Function_587(8);
							}
							return Function_586(8);
						}
						if (iParam4 == 2)
						{
							if (Function_596(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_586(256);
							}
							if (!Function_598(iParam0, 4, 1))
							{
								return Function_587(16);
							}
							return Function_586(16);
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

bool Function_596(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x20445 / 132165
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

int Function_597(int iParam0, var uParam1, bool bParam2) //Position: 0x204FE / 132350
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_593(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_592(iVar0, 2, 1, bParam2))
			{
				if (!Function_598(iParam0, 16, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x0000005B:
			if (Function_592(iVar0, 2, 1, bParam2))
			{
				if (!Function_598(iParam0, 32, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000057:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(iParam0, 1024, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		case 0x00000058:
			if (Function_592(iVar0, 1, 1, bParam2))
			{
				if (!Function_598(iParam0, 1024, 1))
				{
					return Function_587(64);
				}
			}
			return Function_586(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_598(int iParam0, bool bParam1, bool bParam2) //Position: 0x20612 / 132626
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

int Function_599(bool bParam0) //Position: 0x2063A / 132666
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_600(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x2066B / 132715
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

