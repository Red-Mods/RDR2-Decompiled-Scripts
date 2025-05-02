//Decompiled with MagicRDR v1.0
//Function Count : 623
//Statics Count : 979
//Natives Count : 789
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	struct<1957> Local_5 = { 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_497 = 2696;
	iLocal_525 = 0;
	iLocal_818 = 4294967295;
	iLocal_866 = 0;
	iLocal_868 = 4294967295;
	vLocal_869 = { -805,317f, 13,268f, 3709,162f };
	iLocal_901 = 17;
	iLocal_902 = 8;
	Local_499 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_506 = 99;
	iLocal_507 = 6;
	iLocal_508 = 1000;
	while (Function_277())
	{
		Function_237();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x74 / 116
{
	int iVar0;
	bool bVar1;
	
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_236(&(Global_29008[Global_30707[2]]), 256);
	STREAMING_UNLOAD_BOUNDS();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_235(1);
	if (IS_GRINGO_VALID(bLocal_893))
	{
		Function_234(GET_OBJECT_FROM_GRINGO(bLocal_893));
		Function_231(StackVal, StackVal, Function_234(GET_OBJECT_FROM_GRINGO(bLocal_893)), 1, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_ACTOR_VALID((*&Local_5 + 784)[iVar02]))
		{
			SET_CORPSE_PERMANENT((*&Local_5 + 784)[iVar02], 0);
		}
		iVar0++;
	}
	iLocal_802 = 0;
	iLocal_802 = 0;
	while (iLocal_802 <= 14)
	{
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Function_230(&Global_6933, &Global_8129, iLocal_802));
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_ALLOW_SHOOTING(bVar1, true);
			MEMORY_PREFER_MELEE(bVar1, 1);
			DEREFERENCE_ACTOR(bVar1);
		}
		iLocal_802++;
	}
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 1);
	Function_228();
	Function_226(1);
	Function_226(256);
	Function_225(1);
	SET_CURVE_WEIGHT(bLocal_895, 10);
	SET_CURVE_WEIGHT(bLocal_896, 10);
	SET_CURVE_WEIGHT(bLocal_897, 10);
	SET_CURVE_WEIGHT(bLocal_898, 10);
	iLocal_802 = 0;
	while (iLocal_802 <= 5)
	{
		if (Function_224(bLocal_822[iLocal_802]))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_822[iLocal_802]);
		}
		iLocal_802++;
	}
	if (IS_ACTOR_VALID(bLocal_815))
	{
		DEREFERENCE_ACTOR(bLocal_815);
	}
	Function_223(Local_5.f_436);
	Function_223(Local_5.f_484);
	Function_223(Local_5.f_540);
	Function_223(Local_5.f_556);
	Function_222(&Local_5 + 576, 1);
	Function_223(Local_5.f_668);
	Function_223(Local_5.f_748);
	Function_219(8, 1, 0, 1, 1);
	if (Function_218(7))
	{
		Function_219(7, 1, 0, 1, 1);
	}
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_610);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_814);
	if (bLocal_515 == 1)
	{
		Function_208(Global_30707[2], &Global_6933, &Global_8129, 7);
		if (IS_ACTOR_VALID(bLocal_820))
		{
			if (IS_ACTOR_ALIVE(bLocal_820))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_820)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_820));
				}
				Function_207(bLocal_820);
				TASK_WANDER(bLocal_820, -1.0f);
			}
			DEREFERENCE_ACTOR(bLocal_820);
		}
		Function_198((*&Local_5 + 768)[02], GET_GRINGO_FROM_OBJECT(bLocal_894), "UseCase1", 4294967295, 1, 2);
	}
	else
	{
		if (IS_ACTOR_VALID(bLocal_820))
		{
			DEREFERENCE_ACTOR(bLocal_820);
		}
		Function_222(&Local_5 + 768, 1);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_610);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_611);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_820);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(976);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(977);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(978);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(979);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(980);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(981);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(982);
	Function_197(bLocal_498);
	Function_197(Local_5);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_193(&bLocal_619);
	Function_191();
	if (IS_ITERATOR_VALID(bLocal_659))
	{
		DESTROY_ITERATOR(bLocal_659);
	}
	RELEASE_LAYOUT_REF(bLocal_498);
	if (bLocal_515)
	{
		Function_55(Local_499, 1, 1, 1, 0);
		Function_24(bLocal_516, 1, 0, 1, 0, 1, 1, 1);
	}
	else if (bLocal_516)
	{
		Function_20(Local_499);
		Function_24(bLocal_516, 1, 0, 1, 1, 1, 1, 1);
	}
	else
	{
		Function_2(Local_499);
		Function_24(bLocal_516, 1, 0, 1, 1, 1, 1, 1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x354 / 852
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x375 / 885
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x390 / 912
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(bool bParam0) //Position: 0x3B1 / 945
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x3C7 / 967
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

void Function_7(int iParam0) //Position: 0x463 / 1123
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x484 / 1156
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

void Function_9() //Position: 0x4CA / 1226
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x4E3 / 1251
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x536 / 1334
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

struct<16> Function_12(int iParam0) //Position: 0x65A / 1626
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x67F / 1663
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x69F / 1695
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x6B6 / 1718
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x6D1 / 1745
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x918 / 2328
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x941 / 2369
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

bool Function_19(int iParam0) //Position: 0x965 / 2405
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x97A / 2426
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x998 / 2456
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

struct<16> Function_22(int iParam0) //Position: 0xA3E / 2622
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0xA68 / 2664
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

void Function_24(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0xCBE / 3262
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_53());
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
	Function_52();
	CLEAR_PRINTED_OBJECTIVE();
	Function_51();
	Function_49(0);
	Function_48();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_47();
	Function_46();
	Function_52();
	ENABLE_JOURNAL_REPLAY(1);
	Function_45(1);
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
		Function_44(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && iParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_42(Global_28178);
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
	Function_225(1178687);
	Function_226(33039);
	Function_41(0x218003f);
	Function_40(4194560);
	Function_39();
	Function_38();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_31(0, 1, 1);
	}
	else
	{
		Function_31(0, 1, 1);
	}
	Function_30();
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
	Function_26();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_25(&Global_12976 + 36 + 20, 16);
}

void Function_25(bool bParam0, bool bParam1) //Position: 0xEAF / 3759
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_26() //Position: 0xEC2 / 3778
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
		if (Function_29() > 3)
		{
			bVar0 *= 2;
		}
		Function_27(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_27(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xF18 / 3864
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_28((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_28(bool bParam0) //Position: 0xF5E / 3934
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_29() //Position: 0xF83 / 3971
{
	return Global_12976.f_156;
}

void Function_30() //Position: 0xF8E / 3982
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_236(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_31(int iParam0, bool bParam1, int iParam2) //Position: 0xFB8 / 4024
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
		if (Function_37(Global_29006))
		{
			Function_36(&(Global_29008[Global_29006]), 131072);
			Function_236(&(Global_29008[Global_29006]), 2097152);
			Function_34(Global_29006);
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
				if (Function_33(&(Global_29008[iVar0]), 4) || Function_33(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_236(&(Global_29008[iVar0]), 2097155);
					Function_36(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_32())
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

bool Function_32() //Position: 0x10C3 / 4291
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_33(var uParam0, int iParam1) //Position: 0x10CC / 4300
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_34(int iParam0) //Position: 0x10E8 / 4328
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_35())
			{
				return;
			}
		}
		if (!Function_33(&(Global_29008[iParam0]), 2048))
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

bool Function_35() //Position: 0x1167 / 4455
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_33(&(Global_29008[iVar0]), 4) || Function_33(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_36(var uParam0, int iParam1) //Position: 0x11C4 / 4548
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_37(int iParam0) //Position: 0x11D3 / 4563
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_38() //Position: 0x11E9 / 4585
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

void Function_39() //Position: 0x120F / 4623
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

void Function_40(int iParam0) //Position: 0x1235 / 4661
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_41(int iParam0) //Position: 0x1252 / 4690
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_42(int iParam0) //Position: 0x1265 / 4709
{
	int iVar0;
	
	if (!Function_43(iParam0))
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

bool Function_43(int iParam0) //Position: 0x132C / 4908
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_44(bool bParam0) //Position: 0x1342 / 4930
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

void Function_45(bool bParam0) //Position: 0x13BE / 5054
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

void Function_46() //Position: 0x1432 / 5170
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

void Function_47() //Position: 0x1473 / 5235
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

void Function_48() //Position: 0x14B4 / 5300
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_49(int iParam0) //Position: 0x14C8 / 5320
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_50())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_50() //Position: 0x1504 / 5380
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

void Function_51() //Position: 0x1529 / 5417
{
	Global_8722 = 0.0f;
	return;
}

void Function_52() //Position: 0x1533 / 5427
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

int Function_53() //Position: 0x155E / 5470
{
	bool bVar0;
	
	bVar0 = Function_54();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_54() //Position: 0x1578 / 5496
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_55(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x158D / 5517
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
		Function_186(&(Global_3422[iVar240]));
		Function_185(4194304);
		if (bParam3)
		{
			Function_141(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_135(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_141(iVar2, &uVar0, 0);
		}
		bVar1 = Function_134();
		if (bParam1)
		{
			Function_118(iVar2, bParam0, bVar1);
			Function_117();
		}
	}
	Function_67(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_60(iVar2, bVar1);
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
	Function_56();
}

void Function_56() //Position: 0x167A / 5754
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_57(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_57(int iParam0, bool bParam1) //Position: 0x16AA / 5802
{
	int iVar0;
	
	iVar0 = Function_58(iParam0);
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

int Function_58(int iParam0) //Position: 0x16E7 / 5863
{
	if (!Function_59(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_59(int iParam0) //Position: 0x1701 / 5889
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_60(int iParam0, bool bParam1) //Position: 0x1717 / 5911
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
							Function_61(Global_34573, 0x1000000, 3, 0);
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
							Function_61(Global_34573, 0x1000000, 3, 0);
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
							Function_61(Global_34573, 0x1000000, 3, 0);
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
							Function_61(Global_34573, 0x1000000, 3, 0);
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
							Function_61(Global_34573, 0x1000000, 3, 0);
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
							Function_61(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_60(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_60(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_60(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_60(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_60(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_60(57, 0);
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

void Function_61(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1A0E / 6670
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_63(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_62(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_62(char* cParam0, int iParam1) //Position: 0x1A7A / 6778
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

bool Function_63(bool bParam0, var uParam1, int iParam2) //Position: 0x1AB1 / 6833
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
		if (Function_66(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_65(uVar0))
		{
			case 0x00000002:
				if (!Function_64(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_64(var uParam0, int iParam1) //Position: 0x1B29 / 6953
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_65(char* cParam0) //Position: 0x1B3C / 6972
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

int Function_66(int iParam0) //Position: 0x1BDD / 7133
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_25(&bVar1, 2147483648);
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

void Function_67(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1C1A / 7194
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
		Function_113();
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
			Function_108(bParam0);
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
			Function_70(1);
			Function_69(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_68(bParam0, &Var14);
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

void Function_68(int iParam0, int iParam1) //Position: 0x1E2C / 7724
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_69(bool bParam0, int iParam1) //Position: 0x1E66 / 7782
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_32())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_70(bool bParam0) //Position: 0x1EA8 / 7848
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_100();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_71();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_25(&Global_63095, 1);
		Function_25(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_71() //Position: 0x1EF9 / 7929
{
	Function_98();
	Function_97();
	Function_97();
	Function_96();
	Function_96();
	Function_95();
	Function_95();
	Function_78();
	Function_78();
	if (!Function_32())
	{
		Function_76();
		Function_75();
		Function_74();
		Function_73();
	}
	Function_72();
	return;
}

void Function_72() //Position: 0x1F2C / 7980
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

void Function_73() //Position: 0x2032 / 8242
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

void Function_74() //Position: 0x2065 / 8293
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

void Function_75() //Position: 0x21F3 / 8691
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

void Function_76() //Position: 0x23A7 / 9127
{
	Function_77(&Global_28260, 1, 0);
	return;
}

void Function_77(int iParam0, bool bParam1, var uParam2) //Position: 0x23B5 / 9141
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

struct<8> Function_78() //Position: 0x25A6 / 9638
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
				iVar2 = ((Function_94((50 + iVar4)) + Function_94((183 + iVar4))) + Function_94((90 + iVar4)));
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
	Function_79(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_79(int iParam0, bool bParam1, bool bParam2) //Position: 0x2641 / 9793
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
		Function_93(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_92(iParam0);
	if (bParam2)
	{
		Function_80(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x28DC / 10460
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_91(390))), 32);
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
					bVar19 = (Function_90(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_90(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_88(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_85(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_82(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_81(), &Var9);
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

bool Function_81() //Position: 0x2F09 / 12041
{
	int iVar0;
	
	return iVar0;
}

var Function_82(int iParam0) //Position: 0x2F11 / 12049
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_83(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2F22 / 12066
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_84("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_84("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_84("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_84(char* cParam0, char* cParam1) //Position: 0x3017 / 12311
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_85(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3030 / 12336
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_87(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_86(Function_87(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_86(int iParam0, int iParam1) //Position: 0x3095 / 12437
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_87(int iParam0, bool bParam1) //Position: 0x30A7 / 12455
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_88(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x30B9 / 12473
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
	if (((Function_89(iParam0) != 19 || Function_89(iParam0) != 17) || Function_89(iParam0) != 10) || Function_89(iParam0) != 9)
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

int Function_89(int iParam0) //Position: 0x31E9 / 12777
{
	return Global_35278[iParam020].f_48;
}

float Function_90(int iParam0) //Position: 0x31F8 / 12792
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_91(int iParam0) //Position: 0x3231 / 12849
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_92(int iParam0) //Position: 0x326E / 12910
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

int Function_93(int iParam0, bool bParam1, bool bParam2) //Position: 0x3408 / 13320
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

int Function_94(bool bParam0) //Position: 0x3622 / 13858
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_95() //Position: 0x3663 / 13923
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
		iVar2 = ((Function_94((50 + iVar3) + 15) + Function_94((183 + iVar3) + 15)) + Function_94((90 + iVar3) + 15));
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
	Function_79(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_96() //Position: 0x36EC / 14060
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
			iVar2 = ((Function_94((50 + iVar3) + 8) + Function_94((183 + iVar3) + 8)) + Function_94((90 + iVar3) + 8));
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
	Function_79(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_97() //Position: 0x3783 / 14211
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
		iVar2 = ((Function_94((50 + iVar3)) + Function_94((183 + iVar3))) + Function_94((90 + iVar3)));
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
	Function_79(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_98() //Position: 0x3802 / 14338
{
	Function_99(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_79(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_99(int iParam0, bool bParam1, int iParam2) //Position: 0x3828 / 14376
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
	Function_93(iParam0, bParam1, 1);
	Function_92(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_80(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_100() //Position: 0x3A32 / 14898
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_102(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_102(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_101(StackVal, StackVal, vVar0))
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

bool Function_101(vector3 vParam0) //Position: 0x3AD3 / 15059
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_102(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3AEB / 15083
{
	int iVar0;
	
	iVar0 = Function_106(uParam2, uParam3);
	if (Function_105(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_104(&Global_63095, 1);
			Function_25(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_104(&Global_63095, 2);
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
		Function_104(&Global_63095, 2);
		Function_25(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_103();
	return StackVal, StackVal, Function_103();
}

vector3 Function_103() //Position: 0x3BD2 / 15314
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x3BDB / 15323
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_105(int iParam0) //Position: 0x3BEA / 15338
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_106(bool bParam0, bool bParam1) //Position: 0x3C00 / 15360
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
				fVar2 = Function_107(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_107(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_105(bVar0) && !bParam1)
	{
		bVar0 = Function_106(bParam0, 1);
	}
	return bVar0;
}

float Function_107(vector3 vParam0, vector3 vParam3) //Position: 0x3CC7 / 15559
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_108(bool bParam0) //Position: 0x3CE4 / 15588
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
				Function_112(12, 1, 0, 0);
				Function_111(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_112(13, 1, 0, 0);
				Function_111(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_112(14, 1, 0, 0);
				Function_111(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_112(15, 1, 0, 0);
				Function_111(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_112(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_110(bParam0) == 1)
					{
						iVar0 = Function_109(bParam0);
						if (Function_37(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_111(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_111(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_111(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_111(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_111(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_111(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_111(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_111(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_111(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_111(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_111(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_111(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_111(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_111(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_111(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_111(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_111(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_111(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_111(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_111(4, 19);
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
								Function_112(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_112(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_112(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_109(bParam0) == 0)
			{
				if (Function_110(bParam0) == 1)
				{
					Function_112(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_37(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_111(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_111(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_111(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_111(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_111(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_111(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_111(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_111(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_110(bParam0) == 1)
			{
				Function_112(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_112(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_111(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_111(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_111(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_112(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_111(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_111(6, 9);
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

int Function_109(bool bParam0) //Position: 0x41C1 / 16833
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_110(bool bParam0) //Position: 0x41E0 / 16864
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_111(int iParam0, bool bParam1) //Position: 0x41FA / 16890
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

int Function_112(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4261 / 16993
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
	Function_93(iParam0, TO_FLOAT(bParam1), 1);
	Function_92(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_80(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_113() //Position: 0x4481 / 17537
{
	int iVar0;
	int iVar1;
	
	if (!Function_59(Global_6269))
	{
		return;
	}
	iVar0 = Function_94(24);
	iVar1 = Function_58(Global_6269);
	if (!Function_59(iVar0) && Function_116(iVar1) < 0)
	{
		Function_79(24, Global_6269, 0);
		Function_114(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_116(Function_58(iVar0)))
	{
		Function_79(24, Global_6269, 0);
		Function_114(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_114(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4501 / 17665
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
		Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_115(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4853 / 18515
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

int Function_116(int iParam0) //Position: 0x48D6 / 18646
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_117() //Position: 0x48F0 / 18672
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

void Function_118(int iParam0, int iParam1, bool bParam2) //Position: 0x491E / 18718
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
	
	if (!Function_59(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_133(iParam0);
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
				bVar0 = (Function_94(42) - Global_34165.f_116);
				bVar1 = (Function_94(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_91(49)) - Global_34165.f_124);
				bVar3 = (Function_94(49) - Global_34165.f_128);
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
				bVar4 = (Function_94(355) - Global_34165.f_116);
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
		iVar15 = Function_132(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_119(50, 1, 0);
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

void Function_119(int iParam0, bool bParam1, bool bParam2) //Position: 0x4BBA / 19386
{
	int iVar0;
	bool bVar1;
	
	if (Function_131(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_94(3);
	Function_128();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_126(3, bVar1);
		if (!bParam2)
		{
			if (!Function_64(Global_76848, 4))
			{
				Function_61(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_112(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_90(3));
	iVar0 = Function_94(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_121(4, Function_125(Global_12976.f_156), 1);
				Function_120(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_121(4, Function_125(Global_12976.f_156), 1);
				Function_120(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_121(4, Function_125(Global_12976.f_156), 1);
				Function_120(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_121(4, Function_125(Global_12976.f_156), 1);
				Function_120(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_121(4, Function_125(Global_12976.f_156), 1);
				Function_120(Global_12976.f_152, Global_12976.f_156);
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

void Function_120(int iParam0, int iParam1) //Position: 0x4D7D / 19837
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

int Function_121(int iParam0, char* cParam1, bool bParam2) //Position: 0x4FDB / 20443
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
	Function_114(iParam0, cParam1, 0, 1);
	iVar1 = Function_122();
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

int Function_122() //Position: 0x5160 / 20832
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
	Function_123();
	return 0;
}

void Function_123() //Position: 0x51FF / 20991
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
		Function_124(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_124(int iParam0) //Position: 0x52AE / 21166
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

var Function_125(int iParam0) //Position: 0x530C / 21260
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

int Function_126(int iParam0, bool bParam1) //Position: 0x539B / 21403
{
	bool bVar0;
	int iVar1;
	
	Function_112(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_127(iParam0, 4294967295);
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
	iVar1 = Function_122();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_127(int iParam0, int iParam1) //Position: 0x5538 / 21816
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

void Function_128() //Position: 0x5579 / 21881
{
	Function_130(3, 0.0f);
	Function_129(3, 10000.0f);
	return;
}

int Function_129(int iParam0, int iParam1) //Position: 0x558F / 21903
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_130(int iParam0, int iParam1) //Position: 0x55CF / 21967
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_131(int iParam0) //Position: 0x560F / 22031
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_132(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x561E / 22046
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

int Function_133(int iParam0) //Position: 0x57E6 / 22502
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

var Function_134() //Position: 0x587B / 22651
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_135(int iParam0) //Position: 0x58A0 / 22688
{
	if (!Function_59(iParam0))
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
			Function_119(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_119(25, 1, 0);
			Function_140(1, 1);
			break;
		
		case 0x00000015:
			Function_140(50, 1);
			Function_119(250, 1, 0);
			Function_136(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_119(75, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_140(50, 1);
			Function_119(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_140(5, 1);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_119(75, 1, 0);
			Function_136(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_140(5, 1);
			Function_119(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_136(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_140(25, 1);
			Function_119(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_140(10, 1);
			Function_119(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_119(50, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_119(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_136(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_140(20, 1);
			Function_119(75, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_140(25, 1);
			Function_119(150, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_140(10, 1);
			Function_119(150, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_119(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_136(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_136(100, 1, 0);
			Function_140(5, 1);
			break;
		
		case 0x0000000F:
			Function_140(3, 1);
			Function_119(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_136(125, 1, 0);
			Function_119(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_140(50, 1);
			Function_119(100, 1, 0);
			Function_136(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_140(50, 1);
			Function_119(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_140(75, 1);
			Function_119(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_119(75, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_119(250, 1, 0);
			Function_136(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_119(75, 1, 0);
			Function_136(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_119(200, 1, 0);
			Function_136(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_119(75, 1, 0);
			Function_136(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_119(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_140(50, 1);
			Function_119(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_140(100, 1);
			Function_119(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_119(200, 1, 0);
			Function_136(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_119(300, 1, 0);
			Function_136(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_119(300, 1, 0);
			Function_136(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_119(300, 1, 0);
			Function_136(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_119(500, 1, 0);
			Function_136(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_119(150, 1, 0);
			Function_136(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_136(25, 1, 0);
			Function_140(100, 1);
			break;
		
		case 0x0000002A:
			Function_119(150, 1, 0);
			Function_136(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_136(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_136(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_136(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_136(150, 1, 0);
			Function_140(100, 1);
			break;
		
		case 0x00000035:
			Function_136(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_136(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_136(150, 1, 0);
			Function_140(100, 1);
			break;
		
		case 0x00000032:
			Function_136(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_136(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_136(int iParam0, bool bParam1, bool bParam2) //Position: 0x5D5B / 23899
{
	int iVar0;
	bool bVar1;
	
	if (Function_131(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_94(1);
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
			Function_126(1, bVar1);
			if (!bParam2)
			{
				if (!Function_64(Global_76848, 1))
				{
					Function_61(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_139(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_64(Global_76848, 2))
				{
					Function_61(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_112(1, bVar1, 0, 0);
	}
	else
	{
		Function_138(1, (4294967295 * bVar1), 0);
	}
	if (Function_94(1) <= 4294962296)
	{
		Function_79(1, 4294962296, 0);
	}
	else if (Function_94(1) >= 5000)
	{
		Function_79(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_90(1));
	iVar0 = Function_94(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_121(2, Function_137(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_121(2, Function_137(Global_12976.f_152), 0);
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
				Function_121(2, Function_137(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_121(2, Function_137(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_121(2, Function_137(Global_12976.f_152), 1);
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
				Function_121(2, Function_137(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_121(2, Function_137(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_121(2, Function_137(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_121(2, Function_137(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_121(2, Function_137(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_121(2, Function_137(Global_12976.f_152), 1);
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
				Function_121(2, Function_137(Global_12976.f_152), 0);
			}
			break;
	}
	Function_120(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_137(int iParam0) //Position: 0x6070 / 24688
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

int Function_138(int iParam0, bool bParam1, int iParam2) //Position: 0x6113 / 24851
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
	Function_92(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_80(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_139(int iParam0, bool bParam1) //Position: 0x630E / 25358
{
	bool bVar0;
	int iVar1;
	
	Function_138(iParam0, bParam1, 0);
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
	iVar1 = Function_127(iParam0, 4294967295);
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
	iVar1 = Function_122();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_140(bool bParam0, bool bParam1) //Position: 0x64AA / 25770
{
	bool bVar0;
	
	bVar0 = Function_94(0);
	if ((Function_94(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_112(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_94(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_112(597, bParam0, 0, 0);
	}
	if ((Function_94(597) + Function_94(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_141(int iParam0, var uParam1, bool bParam2) //Position: 0x6575 / 25973
{
	struct<4> Var0;
	
	if (!Function_59(iParam0))
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
			Function_183(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_181(Global_30640[0]);
			Function_181(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_179(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_181(Global_30668[0]);
			Function_170(0);
			Function_168(2, 1);
			Function_168(0, 1);
			Function_168(1, 1);
			break;
		
		case 0x00000003:
			Function_181(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_181(Global_30668[0]);
			Function_181(Global_30640[0]);
			Function_166(0, 1);
			Function_166(15, 1);
			Function_166(9, 1);
			Function_166(12, 1);
			Function_166(16, 1);
			Function_168(3, 1);
			break;
		
		case 0x00000005:
			Function_181(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_179(21, bParam2, 4);
			Function_181(Global_30668[0]);
			Function_168(39, 1);
			break;
		
		case 0x00000007:
			Function_181(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_181(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_165(4))
					{
						Function_155(4, 0, 0, 1);
					}
				}
			}
			Function_181(Global_30640[0]);
			Function_181(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_181(Global_30640[0]);
			Function_181(Global_30668[2]);
			Function_36(&(Global_29008[Global_30668[2]]), 32768);
			Function_236(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_179(9, bParam2, 4);
			Function_181(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_181(Global_30640[0]);
			Function_181(Global_30658[0]);
			Function_36(&(Global_29008[Global_30658[0]]), 32768);
			Function_236(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_181(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_181(Global_30640[0]);
			Function_181(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_181(Global_30640[1]);
			Function_181(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_181(Global_30679[0]);
			Function_181(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_181(Global_30658[5]);
			Function_181(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_179(21, bParam2, 4);
			Function_181(Global_30640[4]);
			Function_181(Global_30658[4]);
			Function_154(&Global_76847, 0x2000000);
			Function_154(&Global_76847, 0x4000000);
			Function_154(&Global_76847, 4096);
			Function_154(&Global_76847, 8);
			Function_154(&Global_76847, 8388608);
			Function_154(&Global_76847, 524288);
			Function_154(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_181(Global_30640[4]);
			Function_181(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_236(&(Global_29008[Global_30640[4]]), 256);
			Function_181(Global_30640[4]);
			Function_181(Global_30658[0]);
			Function_36(&(Global_29008[Global_30658[0]]), 32768);
			Function_236(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_181(Global_30640[0]);
			Function_181(Global_30640[5]);
			Function_179(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_181(Global_30658[3]);
			Function_36(&(Global_29008[Global_30658[3]]), 32768);
			Function_236(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_179(9, bParam2, 4);
			Function_181(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_36(&(Global_29008[Global_30679[1]]), 32768);
			Function_181(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_179(12, bParam2, 4);
			Function_236(&(Global_29008[Global_30679[1]]), 256);
			Function_181(Global_30668[3]);
			Function_181(Global_30693[0]);
			Function_181(Global_30685[0]);
			Function_170(4);
			Function_166(13, 1);
			Function_166(1, 1);
			Function_166(18, 1);
			Function_168(34, 1);
			Function_168(44, 1);
			Function_168(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_179(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_181(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_181(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_181(Global_30693[0]);
			Function_181(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_181(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_181(Global_30685[0]);
			Function_181(Global_30693[0]);
			Function_181(Global_30693[1]);
			Function_181(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_179(23, bParam2, 3);
			Function_166(23, 1);
			Function_181(Global_30685[0]);
			Function_181(Global_30685[2]);
			Function_36(&(Global_29008[Global_30685[2]]), 32768);
			Function_236(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_179(19, bParam2, 4);
			Function_181(Global_30685[0]);
			Function_181(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_179(24, bParam2, 3);
			Function_166(24, 1);
			Function_181(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_181(Global_30685[0]);
			Function_181(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_181(Global_30693[12]);
			Function_181(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_181(Global_30693[12]);
			Function_181(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_179(25, bParam2, 10);
			Function_181(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_181(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_181(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_179(13, bParam2, 4);
			Function_181(Global_30693[2]);
			Function_181(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_165(8))
				{
					Function_155(8, 0, 0, 1);
				}
			}
			Function_181(Global_30685[0]);
			Function_170(9);
			Function_166(7, 1);
			Function_166(11, 1);
			Function_166(3, 1);
			Function_166(20, 1);
			Function_168(57, 1);
			break;
		
		case 0x0000002A:
			Function_179(2, bParam2, 4);
			Function_181(Global_30717[0]);
			Function_181(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_181(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_181(Global_30717[0]);
			Function_181(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_181(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_181(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_181(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_179(17, bParam2, 4);
			Function_181(Global_30723[0]);
			Function_181(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_152(15))
				{
					Function_148(15, 0, 1);
				}
			}
			Function_236(&(Global_29008[Global_30717[1]]), 256);
			Function_170(11);
			Function_181(Global_30717[1]);
			Function_181(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_181(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_181(Global_30717[1]);
			Function_181(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_181(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_181(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_181(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_181(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_181(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_181(Global_30717[1]);
			Function_142(11);
			Function_170(12);
			Global_16537[1121].f_40 = 0;
			Function_168(56, 1);
			if (!bParam2)
			{
				if (!Function_165(9))
				{
					Function_155(9, 0, 0, 0);
				}
				if (!Function_165(10))
				{
					Function_155(10, 0, 0, 1);
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

void Function_142(int iParam0) //Position: 0x6E65 / 28261
{
	bool bVar0;
	
	if (!Function_105(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_147(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_147(Global_16537[iParam021].f_72, 0);
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
			Function_143(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_143(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6FD4 / 28628
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
		Function_145(Function_146(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_145(Function_146(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_145(StackVal);
				vVar1 = { StackVal, StackVal, Function_145(StackVal) };
				if (Function_144(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_144(vector3 vParam0, vector3 vParam3) //Position: 0x70DA / 28890
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_145(bool bParam0) //Position: 0x7107 / 28935
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_146(vector3 vParam0) //Position: 0x715E / 29022
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

void Function_147(bool bParam0, bool bParam1) //Position: 0x71AC / 29100
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

void Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7200 / 29184
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_43(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_152(bParam0))
	{
		if (!Function_165(bParam0))
		{
			Function_155(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_112(457, 1, 0, 0);
		Function_151(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_150(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 0);
			}
			else
			{
				Function_149();
			}
		}
	}
	return;
}

void Function_149() //Position: 0x739E / 29598
{
	return;
}

bool Function_150(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73A4 / 29604
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

void Function_151(bool bParam0, int iParam1) //Position: 0x7448 / 29768
{
	if (!Function_43(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_152(int iParam0) //Position: 0x749D / 29853
{
	if (!Function_43(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_153(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_153(int iParam0, int iParam1) //Position: 0x74EE / 29934
{
	int iVar0;
	
	if (!Function_43(iParam0))
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

void Function_154(var uParam0, int iParam1) //Position: 0x751B / 29979
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x752A / 29994
{
	struct<8> Var0;
	
	if (!Function_43(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_164(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_165(bParam0))
	{
		Function_112(456, 1, 0, 0);
		Function_151(bParam0, 2);
		if (bParam2)
		{
			if (!Function_150(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 5);
			}
			else
			{
				Function_149();
			}
		}
		Function_158(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_157() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_157() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_156(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_64(Global_76846, 2))
		{
			Function_61(Global_34573, 2, 1, 0);
		}
	}
}

void Function_156(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7674 / 30324
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

bool Function_157() //Position: 0x76BF / 30399
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_158(bool bParam0) //Position: 0x76EC / 30444
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
			if (Function_162(bParam0, Function_163(bVar24)))
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
			if (Function_162(bParam0, Function_163(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_161(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_160(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_159(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_159(int iParam0) //Position: 0x789C / 30876
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_43(iParam0))
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

void Function_160(bool bParam0, bool bParam1) //Position: 0x78F3 / 30963
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

var Function_161(int iParam0) //Position: 0x7918 / 31000
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_43(iParam0))
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

bool Function_162(bool bParam0, bool bParam1) //Position: 0x796E / 31086
{
	int iVar0;
	
	if (!Function_43(bParam0))
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

bool Function_163(bool bParam0) //Position: 0x79CD / 31181
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_164(int iParam0) //Position: 0x79D9 / 31193
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_165(int iParam0) //Position: 0x79F5 / 31221
{
	if (!Function_43(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_153(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_166(int iParam0, int iParam1) //Position: 0x7A47 / 31303
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_167(iParam0, iParam1);
	Function_61(Global_34573, 1, 4, 1);
	return 1;
}

int Function_167(int iParam0, int iParam1) //Position: 0x7ABA / 31418
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_168(int iParam0, int iParam1) //Position: 0x7B16 / 31510
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_169(iParam0, iParam1);
	Function_61(Global_34573, 1, 4, 1);
	return 1;
}

int Function_169(int iParam0, int iParam1) //Position: 0x7B87 / 31623
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_170(int iParam0) //Position: 0x7BE1 / 31713
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_105(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_178(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_178(Global_16537[iParam021].f_72, 0);
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
			Function_112(468, 1, 0, 0);
			Function_111(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_156("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_143(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_155(14, 1, 0, 0);
				Function_171(14, 1, 0, 0, 0);
			}
			if (!Function_150(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 6);
			}
			else
			{
				Function_149();
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
			Function_156("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_112(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_111(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_171(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7E8D / 32397
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_43(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_164(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_153(bParam0, 2))
	{
		Function_112(456, 1, 0, 0);
		Function_151(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_156(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_162(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_151(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_150(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 0);
			}
			else
			{
				Function_149();
			}
		}
		Function_158(bParam0);
		if (StackVal && !Function_177(((((!Function_157() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_177((((Function_157() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_64(Global_76846, 2))
		{
			Function_61(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_173();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_172(3, bParam1);
				break;
			
			case 0x00000005:
				Function_172(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_172(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_172(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_172(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_172(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_111(2, 24);
				break;
			
			case 0x00000003:
				Function_111(2, 25);
				break;
			
			case 0x0000000F:
				Function_111(2, 26);
				break;
			
			case 0x0000000D:
				Function_111(2, 27);
				break;
			
			case 0x0000000E:
				Function_111(2, 28);
				break;
			}
	}
}

void Function_172(int iParam0, bool bParam1) //Position: 0x811F / 33055
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

void Function_173() //Position: 0x817E / 33150
{
	if (Function_43(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_176(Global_28180);
			Global_28180.f_8 = Function_174(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_176(Global_28180);
			Global_28180.f_8 = Function_174(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_174(int iParam0, int iParam1) //Position: 0x81F9 / 33273
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
					if (Function_57(6, 0) || Function_57(12, 0))
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
					if (Function_175(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_57(5, 0))
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
					if (Function_175(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_175(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_175(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_175(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_57(26, 0))
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
					if (Function_175(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_175(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_175(27) && iVar18)
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
					if (Function_175(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_175(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_175(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_175(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_57(17, 0) && iVar15)
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
					if (Function_175(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_57(6, 0) && Function_175(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_175(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_57(9, 0) && Function_175(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_175(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_57(8, 0) && iVar19)
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
	if (Function_101(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_101(StackVal, StackVal, vVar3))
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
	if (!Function_101(StackVal, StackVal, vVar3))
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

int Function_175(int iParam0) //Position: 0x8DEA / 36330
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x8DFF / 36351
{
	int iVar0;
	int iVar1;
	
	if (!Function_43(iParam0))
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

bool Function_177(bool bParam0, bool bParam1) //Position: 0x8E4E / 36430
{
	return (bParam0 && bParam1) == 0;
}

void Function_178(bool bParam0, bool bParam1) //Position: 0x8E5B / 36443
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

void Function_179(bool bParam0, bool bParam1, int iParam2) //Position: 0x8EAC / 36524
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_180(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_183(bParam0, 0, 0);
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

bool Function_180(int iParam0, int iParam1) //Position: 0x8F1A / 36634
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_181(int iParam0) //Position: 0x8F2D / 36653
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_33(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_36(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_112(473, 1, 0, 0);
		iVar0 = Function_182(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_112(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_112(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_112(476, 1, 0, 0);
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
		Function_111(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_111(7, 30);
	}
	if (Function_90(473) <= Function_91(473))
	{
		if (!Function_32())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_182(int iParam0) //Position: 0x902C / 36908
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_37(iParam0))
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

int Function_183(bool bParam0, bool bParam1, int iParam2) //Position: 0x9084 / 36996
{
	if (!Function_184(bParam0))
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

bool Function_184(int iParam0) //Position: 0x90DB / 37083
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_185(bool bParam0) //Position: 0x90ED / 37101
{
	bool bVar0;
	
	if (Function_177(bParam0, 1) && Function_177(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_186(int iParam0) //Position: 0x9121 / 37153
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
			Function_187(4, 0, 0);
		}
	}
	return;
}

void Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9188 / 37256
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
		Function_188(Global_16524, bVar0, 1);
	}
	return;
}

void Function_188(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9265 / 37477
{
	int iVar0;
	
	Function_190(bParam0);
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
	Function_189();
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

void Function_189() //Position: 0x93DE / 37854
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_190(int iParam0) //Position: 0x93EA / 37866
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

void Function_191() //Position: 0x9430 / 37936
{
	Function_192();
	return;
}

void Function_192() //Position: 0x9439 / 37945
{
	Function_193(&Local_5 + 4);
	RELEASE_LAYOUT_REF(Local_5);
	return;
}

void Function_193(int iParam0) //Position: 0x944B / 37963
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_194(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_194(var uParam0, int iParam1) //Position: 0x9471 / 38001
{
	if (Function_196(uParam0[iParam13], 4))
	{
		if (Function_196(uParam0[iParam13], 1))
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
			Function_195(uParam0[iParam13], 1);
			Function_195(uParam0[iParam13], 2);
			Function_195(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x959F / 38303
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_196(var uParam0, int iParam1) //Position: 0x95B9 / 38329
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_197(bool bParam0) //Position: 0x95D6 / 38358
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

int Function_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x962E / 38446
{
	if (!IS_GRINGO_VALID(bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam2) != 0 || STRINGS_ARE_EQUAL(bParam2, ""))
	{
		return 0;
	}
	if (bParam3 <= 0)
	{
		bParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(bParam1), Global_6290);
		if (!(GET_TASK_STATUS(bParam0, 19) != 1 || GET_TASK_STATUS(bParam0, 19) != 3))
		{
			TASK_USE_GRINGO(bParam0, bParam1, bParam2, bParam3, 1);
			TASK_PRIORITY_SET(bParam0, bParam5);
		}
		Function_199(bParam0, 5, GET_OBJECT_FROM_GRINGO(bParam1), uParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_199(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x96C6 / 38598
{
	char* cVar0[32];
	
	Function_206();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_205(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_204(bParam0, 0);
	Function_203(bParam0, uParam1);
	Function_202(bParam0, uParam2);
	Function_201(bParam0, uParam3);
	if (Function_200(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_200(bool bParam0) //Position: 0x9914 / 39188
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_201(bool bParam0, bool bParam1) //Position: 0x9937 / 39223
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_202(bool bParam0, bool bParam1) //Position: 0x995A / 39258
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_203(bool bParam0, bool bParam1) //Position: 0x997E / 39294
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_204(bool bParam0, bool bParam1) //Position: 0x99A4 / 39332
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_205(bool bParam0) //Position: 0x99C7 / 39367
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_206() //Position: 0x99E5 / 39397
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_207(bool bParam0) //Position: 0x9A2F / 39471
{
	TASK_CLEAR(bParam0);
	TASK_PRIORITY_SET(bParam0, true);
	return;
}

void Function_208(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x9A40 / 39488
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_32())
	{
		return;
	}
	Function_36(&(Global_29008[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		iVar1 = iVar0;
		if (Function_217(uParam1[iVar02], 1))
		{
			Function_214(uParam1, uParam2, iVar1, 0);
		}
		Function_212(uParam1, uParam2, iVar1, 0);
		Function_209(uParam1[iVar02], uParam2[iVar03], 0);
		bVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar2, iParam3, false, false, 0);
		uParam1[iVar02]->f_4 = bVar2;
		iVar0++;
	}
}

void Function_209(var uParam0, var uParam1, int iParam2) //Position: 0x9AC0 / 39616
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_211(Global_29007), false, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, false, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_210(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

void Function_210(var uParam0, int iParam1) //Position: 0x9B13 / 39699
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_211(int iParam0) //Position: 0x9B22 / 39714
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

void Function_212(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9B56 / 39766
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_210(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_211(Global_29007), Function_213(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_217(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_217(uParam0[iParam22], 1) && !bParam3)
	{
		Function_210(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_211(Global_29007), Function_213(Global_29007), false, 0);
	}
}

int Function_213(int iParam0) //Position: 0x9CA5 / 40101
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

void Function_214(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x9CD0 / 40144
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_217(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_217(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_217(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_216(uParam0[iVar02], 8);
	}
	Function_216(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_215(StackVal);
	if (bParam3)
	{
		Function_212(uParam0, uParam1, uParam2, 0);
	}
}

int Function_215(bool bParam0) //Position: 0x9D6A / 40298
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

void Function_216(var uParam0, int iParam1) //Position: 0x9E04 / 40452
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_217(var uParam0, int iParam1) //Position: 0x9E1B / 40475
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_218(int iParam0) //Position: 0x9E37 / 40503
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

int Function_219(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9EF6 / 40694
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
		Function_221(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_220(StackVal);
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

void Function_220(bool bParam0) //Position: 0xA214 / 41492
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

void Function_221(bool bParam0) //Position: 0xA240 / 41536
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_222(var uParam0, int iParam1) //Position: 0xA255 / 41557
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

void Function_223(bool bParam0) //Position: 0xA2A4 / 41636
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

bool Function_224(bool bParam0) //Position: 0xA2E8 / 41704
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	return 1;
}

void Function_225(bool bParam0) //Position: 0xA305 / 41733
{
	if (Function_177(bParam0, 1) && !Function_177(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_226(int iParam0) //Position: 0xA332 / 41778
{
	Function_227(&Global_28842, iParam0);
	return;
}

void Function_227(var uParam0, var uParam1) //Position: 0xA340 / 41792
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_228() //Position: 0xA35B / 41819
{
	if (IS_OBJECT_VALID(bLocal_804))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_804)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_804));
		}
		Function_229(bLocal_804);
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xA385 / 41861
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

var Function_230(var uParam0, var uParam1, int iParam2) //Position: 0xA40F / 41999
{
	int iVar0;
	
	iVar0 = iParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_217(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

int Function_231(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xA461 / 42081
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_233(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_232(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_232(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_232(bool bParam0, bool bParam1) //Position: 0xA5C2 / 42434
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_233(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA5CF / 42447
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

vector3 Function_234(bool bParam0) //Position: 0xA679 / 42617
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

void Function_235(bool bParam0) //Position: 0xA6A0 / 42656
{
	if (bParam0)
	{
		Function_104(&Global_12976 + 36 + 20, 4);
	}
	else
	{
		Function_25(&Global_12976 + 36 + 20, 4);
	}
	return;
}

void Function_236(var uParam0, int iParam1) //Position: 0xA6C4 / 42692
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_237() //Position: 0xA6DB / 42715
{
	var uVar0[9];
	int iVar10;
	
	if (Function_276())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "02 - Capture Officer @ Sepulcro";
		uVar0[4] = "03 - Ride to Casa M";
		uVar0[5] = "04 - Search Casa M";
		uVar0[6] = "Last Stage";
		uVar0[7] = "Kill all Enemies";
		uVar0[8] = "Teleport to objective";
		iVar10 = Function_262(&uLocal_518, &uVar0, &Local_499 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_261(&iVar10, &bLocal_506, &iLocal_507, &iLocal_508))
		{
			Function_254();
			Function_253();
		}
		if (iVar10 == 0)
		{
			Function_254();
			Function_253();
			Function_252(&bLocal_515, 8);
		}
		else if (iVar10 == 1)
		{
			Function_254();
			Function_253();
			Function_248(bLocal_506);
			Function_244(StackVal, StackVal, 5, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
		}
		else if (iVar10 == 2)
		{
			Function_254();
			Function_253();
			Function_239(&bLocal_517, 4);
		}
		else if (iVar10 == 3)
		{
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_506 = true;
			iLocal_507 = 0;
			iLocal_508 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_506 = 2;
			iLocal_507 = 0;
			iLocal_508 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_506 = 3;
			iLocal_507 = 0;
			iLocal_508 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_254();
			Function_253();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			bLocal_506 = 101;
			iLocal_507 = 0;
			iLocal_508 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_254();
			if (SQUAD_IS_VALID(Local_5.f_540))
			{
				iLocal_802 = 0;
				while (iLocal_802 <= 6)
				{
					if (Function_224(Local_909[iLocal_8024]))
					{
						KILL_ACTOR(Local_909[iLocal_8024]);
					}
					iLocal_802++;
				}
			}
			if (SQUAD_IS_VALID(Local_5.f_668))
			{
				iLocal_802 = 0;
				while (iLocal_802 <= 6)
				{
					if (Function_224(Local_934[iLocal_8024]))
					{
						KILL_ACTOR(Local_934[iLocal_8024]);
					}
					iLocal_802++;
				}
			}
			if (SQUAD_IS_VALID(Local_5.f_700))
			{
				iLocal_802 = 0;
				while (iLocal_802 <= 6)
				{
					if (Function_224(Local_959[iLocal_8024]))
					{
						KILL_ACTOR(Local_959[iLocal_8024]);
					}
					iLocal_802++;
				}
			}
		}
		else if (iVar10 == 8)
		{
			if (bLocal_506 == 0)
			{
				Function_254();
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_611);
				}
				Function_238(Global_34573, -1434,775f, 7,342f, 4388,509f, 299,227f, 1, 1, 1);
				Function_238(bLocal_820, -1442,054f, 6,024f, 4381,785f, 297,603f, 1, 1, 1);
			}
			else if (bLocal_506 == 2)
			{
				Function_254();
				Function_238(Global_34573, -749,038f, 14,535f, 3740,872f, 56,706f, 1, 1, 1);
				Function_238(bLocal_820, -753,955f, 14,399f, 3740,554f, 75,336f, 1, 1, 1);
			}
		}
	}
	return;
}

void Function_238(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xAA4D / 43597
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
		}
	}
}

void Function_239(bool bParam0, int iParam1) //Position: 0xAB06 / 43782
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(iParam1);
	*bParam0 = 1;
	return;
}

void Function_240(int iParam0) //Position: 0xAB29 / 43817
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_243("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_242(2) || Function_242(8)) || Function_242(9)) || Function_242(10))
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
		Function_241();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_241();
	}
	return;
}

void Function_241() //Position: 0xAC20 / 44064
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_242(int iParam0) //Position: 0xAC2C / 44076
{
	int iVar0;
	
	if (!Function_59(iParam0))
	{
		return 0;
	}
	iVar0 = Function_58(iParam0);
	if (!Function_18(Function_58(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_243(bool bParam0) //Position: 0xAC62 / 44130
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_244(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xACCC / 44236
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_245(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_240(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_245(vector3 vParam0, var uParam3, var uParam4) //Position: 0xAD09 / 44297
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_247(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_246(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_246(int iParam0) //Position: 0xAD8C / 44428
{
	if (!Function_37(iParam0))
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

var Function_247(vector3 vParam0, bool bParam3) //Position: 0xB23A / 45626
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

vector3 Function_248(int iParam0) //Position: 0xB2A5 / 45733
{
	Function_249(iParam0 + 1);
	return StackVal, StackVal, Function_249(iParam0 + 1);
}

vector3 Function_249(int iParam0) //Position: 0xB2B2 / 45746
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_234((*&Local_5 + 1136)[0]);
			return StackVal, StackVal, Function_234((*&Local_5 + 1136)[0]);
			break;
		
		case 0x00000001:
			Function_234((*&Local_5 + 1156)[0]);
			return StackVal, StackVal, Function_234((*&Local_5 + 1156)[0]);
			break;
		
		case 0x00000002:
			Function_234((*&Local_5 + 1296)[0]);
			return StackVal, StackVal, Function_234((*&Local_5 + 1296)[0]);
			break;
		
		case 0x00000003:
			Function_234((*&Local_5 + 1380)[0]);
			return StackVal, StackVal, Function_234((*&Local_5 + 1380)[0]);
			break;
		
		default:
			Function_234((*&Local_5 + 1400)[0]);
			return StackVal, StackVal, Function_234((*&Local_5 + 1400)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_234((*&Local_5 + 1136)[0]);
	return StackVal, StackVal, Function_234((*&Local_5 + 1136)[0]);
}

int Function_250(int iParam0) //Position: 0xB391 / 45969
{
	return Function_251(iParam0 + 1);
}

int Function_251(int iParam0) //Position: 0xB39E / 45982
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_5 + 1136)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_5 + 1156)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_5 + 1296)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_5 + 1380)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_5 + 1400)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_5 + 1136)[0]);
}

void Function_252(bool bParam0, int iParam1) //Position: 0xB47D / 46205
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(iParam1);
	*bParam0 = 1;
	return;
}

void Function_253() //Position: 0xB4A0 / 46240
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_254() //Position: 0xB4B5 / 46261
{
	Function_256();
	Function_255(10, 3);
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0xB4C4 / 46276
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

void Function_256() //Position: 0xB5FB / 46587
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_260())
	{
		Function_259(10, 3);
	}
	else
	{
		Function_257();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_54(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_54());
	UI_POP("nDebugMenu");
	return;
}

void Function_257() //Position: 0xB646 / 46662
{
	Function_258(25, 2);
	return;
}

void Function_258(int iParam0, int iParam1) //Position: 0xB652 / 46674
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

void Function_259(int iParam0, int iParam1) //Position: 0xB850 / 47184
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

bool Function_260() //Position: 0xB987 / 47495
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
				if (!Function_177(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_261(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB9EE / 47598
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_254();
			Function_253();
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

var Function_262(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBA94 / 47764
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_275(&Var15, &Var0);
	uVar20 = Function_274(*uParam1, &Var15);
	Function_273(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_272(uParam0, uVar20);
	Function_270(StackVal, uParam0, Var15.f_12);
	Function_268(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_267(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_264(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_263(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_263(int iParam0, int iParam1, int iParam2) //Position: 0xBB5B / 47963
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

bool Function_264(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xBBB7 / 48055
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
				Function_266(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_266(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_263(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_265(bParam1->f_32);
	}
	else
	{
		Function_265(bParam1->f_32);
	}
	return 0;
}

void Function_265(bool bParam0) //Position: 0xBD3D / 48445
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

void Function_266(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xBD77 / 48503
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

var Function_267(int iParam0, var uParam1, int iParam2) //Position: 0xBE25 / 48677
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_268(var uParam0, int iParam1, int iParam2) //Position: 0xBE49 / 48713
{
	switch (Function_269())
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

int Function_269() //Position: 0xBEE5 / 48869
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

void Function_270(var uParam0, int iParam1, int iParam2) //Position: 0xBF21 / 48929
{
	switch (Function_271(uParam0))
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

int Function_271(bool bParam0) //Position: 0xBFB9 / 49081
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_54()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_177(*bParam0, 0x40000000))
		{
			Function_104(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_177(*bParam0, 0x40000000))
		{
			Function_104(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_25(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_54()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_177(*bParam0, 0x20000000))
		{
			Function_104(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_177(*bParam0, 0x20000000))
		{
			Function_104(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_25(bParam0, 0x20000000);
	return 0;
}

var Function_272(var uParam0, int iParam1) //Position: 0xC105 / 49413
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

void Function_273(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC254 / 49748
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

var Function_274(int iParam0, int iParam1) //Position: 0xC2E7 / 49895
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_275(var uParam0, var uParam1) //Position: 0xC301 / 49921
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

bool Function_276() //Position: 0xC34F / 49999
{
	return Global_30920;
}

bool Function_277() //Position: 0xC358 / 50008
{
	if (IS_EXITFLAG_SET())
	{
		Function_248(bLocal_506);
		Function_244(StackVal, StackVal, 4, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
		return 0;
	}
	Function_622(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_499, bLocal_506, iLocal_507, &bLocal_517, &bLocal_515, &bLocal_516);
	if (bLocal_506 == 99 && bLocal_506 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_248(bLocal_506);
			Function_244(StackVal, StackVal, 1, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
			return 1;
		}
		if (Function_621(2048))
		{
			Function_248(bLocal_506);
			Function_244(StackVal, StackVal, 3, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
			return 1;
		}
		if (Function_602(&Local_744, &uLocal_704, &uLocal_796, bLocal_659, iLocal_703))
		{
			if (Function_598(&uLocal_796))
			{
				Function_248(bLocal_506);
				Function_244(StackVal, StackVal, 5, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
				return 1;
			}
		}
		if (IS_ACTOR_VALID(bLocal_610))
		{
			if (FIRE_IS_ACTOR_ON_FIRE(bLocal_610))
			{
				Function_243("MexGirl_attacked");
				Function_248(bLocal_506);
				Function_244(StackVal, StackVal, 5, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
				return 1;
			}
		}
		if ((Function_218(8) && bLocal_506 == 0) && bLocal_506 == 100)
		{
			Function_219(8, 1, 0, 1, 1);
		}
		Function_597();
	}
	switch (bLocal_506)
	{
		case 0x00000063:
			Function_557();
			break;
		
		case 0x00000000:
			Function_539();
			break;
		
		case 0x00000001:
			Function_481();
			break;
		
		case 0x00000002:
			Function_431();
			break;
		
		case 0x00000003:
			Function_333();
			break;
		
		case 0x00000065:
			Function_280();
			break;
		
		case 0x00000064:
			if (Function_279(&bLocal_516))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_278(&bLocal_506, &iLocal_507, &iLocal_508))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_517)
	{
		Function_239(&bLocal_517, 4);
		Function_1();
		return 0;
	}
	if (bLocal_515)
	{
		Function_252(&bLocal_515, 8);
		Function_1();
		return 0;
	}
	if (bLocal_516 && bLocal_506 == 100)
	{
		Function_248(bLocal_506);
		Function_244(StackVal, StackVal, 5, &bLocal_516, &bLocal_506, Function_250(bLocal_506), Function_248(bLocal_506), 0);
	}
	return 1;
}

bool Function_278(var uParam0, var uParam1, int iParam2) //Position: 0xC54B / 50507
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

bool Function_279(int iParam0) //Position: 0xC58B / 50571
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_280() //Position: 0xC59E / 50590
{
	switch (iLocal_507)
	{
		case 0x00000000:
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			iLocal_805 = Function_332();
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			FIRE_STOP_ALL_FIRES();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_234((*&Local_5 + 1400)[0]);
			bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1400)[0]), 0, 1, 1);
			if (!Function_330(bLocal_612))
			{
				Function_329(&Local_499);
			}
			if (Function_224(Global_34573))
			{
				Function_207(Global_34573);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				Function_328(Global_34573, (*&Local_5 + 1400)[0], 1, 1, 1);
			}
			if (Function_224(bLocal_611))
			{
				Function_207(bLocal_611);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
				Function_328(bLocal_611, (*&Local_5 + 1400)[2], 1, 1, 1);
			}
			if (Function_224(bLocal_820))
			{
				DESTROY_ACTOR(bLocal_820);
			}
			iLocal_507 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_330(bLocal_612) || bLocal_612 != 4294967295))
			{
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_507 = 3;
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/Rebel02_CS05/Rebel02_CS05", &iLocal_508, &Local_499, &bLocal_506, 57614, 57424, 57417, 54512, 54014, 54007, 0, 1, 1, 2, 2, 0, 1))
			{
				if (Function_224(Global_34573))
				{
					Function_207(Global_34573);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_507 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_515 = true;
			}
			break;
	}
	return;
}

bool Function_281(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC78D / 51085
{
	if (!bParam15)
	{
		Function_296(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_295(iParam2) || iParam2->f_24 < 1))
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
				Function_293(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_292())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_291(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(iParam1 + 4);
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
					Function_291(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_288(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_288(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_286(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_291(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(iParam1 + 4);
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
						Function_285(1.0f);
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
						Function_283();
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
					Function_282(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_295(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_282(bool bParam0) //Position: 0xCDA1 / 52641
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

void Function_283() //Position: 0xCE46 / 52806
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_284();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_284() //Position: 0xCE8B / 52875
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_285(bool bParam0) //Position: 0xCE9D / 52893
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

void Function_286(bool bParam0, bool bParam1) //Position: 0xCEBA / 52922
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_81(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_287(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_287(bool bParam0) //Position: 0xCF3A / 53050
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

float Function_288(int iParam0) //Position: 0xCF69 / 53097
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

bool Function_289(int iParam0) //Position: 0xD031 / 53297
{
	return Function_177(*iParam0, 2);
}

bool Function_290(int iParam0) //Position: 0xD03E / 53310
{
	return Function_177(*iParam0, 1);
}

int Function_291(bool bParam0) //Position: 0xD04B / 53323
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

bool Function_292() //Position: 0xD103 / 53507
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

void Function_293(int iParam0) //Position: 0xD13D / 53565
{
	Function_294(iParam0, 0.0f);
	return;
}

void Function_294(int iParam0, float fParam1) //Position: 0xD149 / 53577
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_104(iParam0, 1);
	Function_25(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_295(int iParam0) //Position: 0xD16A / 53610
{
	return iParam0->f_20;
}

void Function_296(var uParam0, int iParam1) //Position: 0xD174 / 53620
{
	Function_297(uParam0, iParam1, 0);
	return;
}

void Function_297(var uParam0, bool bParam1, bool bParam2) //Position: 0xD182 / 53634
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
			Function_298(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_112(20, 1, 0, 0);
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
						Function_298(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_112(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_298(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD2CE / 53966
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

int Function_299() //Position: 0xD2F7 / 54007
{
	return 1;
}

int Function_300() //Position: 0xD2FE / 54014
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	switch (bLocal_506)
	{
		case 0x00000063:
			bVar5 = false;
			Function_302(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			REMOVE_CORPSE_REMOVAL_VOLUME_OBJ((*&Local_5 + 860)[1]);
			Function_302(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			bVar5 = false;
			Function_302(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			REMOVE_CORPSE_RETAINMENT_VOLUME_OBJ((*&Local_5 + 860)[4]);
			bVar5 = false;
			Function_302(2, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_301();
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

int Function_301() //Position: 0xD3EC / 54252
{
	Function_302(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_302(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xD400 / 54272
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
			if (Function_32())
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
		Function_112(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_253();
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
	Function_282(bParam9);
}

int Function_303() //Position: 0xD4F0 / 54512
{
	bool bVar0;
	struct<9> Var1;
	vector3 vVar10;
	
	switch (bLocal_506)
	{
		case 0x00000063:
			if (Function_224(bLocal_822[0]) && Function_224(bLocal_828[0]))
			{
				if (GET_MOUNT(bLocal_822[0]) != bLocal_828[0])
				{
					ACTOR_MOUNT_ACTOR(bLocal_822[0], bLocal_828[0]);
					TASK_CLEAR(bLocal_822[0]);
				}
			}
			if (Function_224(bLocal_822[2]) && Function_224(bLocal_828[2]))
			{
				if (GET_MOUNT(bLocal_822[2]) != bLocal_828[2])
				{
					ACTOR_MOUNT_ACTOR(bLocal_822[2], bLocal_828[2]);
					TASK_CLEAR(bLocal_822[2]);
				}
			}
			if (Function_224(bLocal_822[3]) && Function_224(bLocal_828[3]))
			{
				if (GET_MOUNT(bLocal_822[3]) != bLocal_828[3])
				{
					ACTOR_MOUNT_ACTOR(bLocal_822[3], bLocal_828[3]);
					TASK_CLEAR(bLocal_822[3]);
				}
			}
			break;
		
		case 0x00000001:
			Function_328(Global_34573, (*&Local_5 + 1156)[1], 0, 0, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 2, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1.0f, 0);
			if (Function_224(bLocal_611))
			{
				Function_328(bLocal_611, (*&Local_5 + 1156)[2], 1, 1, 1);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
			}
			else
			{
				GET_OBJECT_POSITION((*&Local_5 + 1156)[2], &vVar1);
				GET_OBJECT_POSITION((*&Local_5 + 1156)[2], &Var4);
				bLocal_611 = Function_308(StackVal, 1, 1, vVar1.x, vVar1.y, vVar1.z, 1, 0);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
			}
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (Function_224(bLocal_822[bVar0]))
				{
					Function_207(bLocal_822[bVar0]);
					Function_328(bLocal_822[bVar0], (*&Local_5 + 1180)[bVar0], 1, 1, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_822[bVar0], true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_822[bVar0], Function_307(bVar0), 4, 0, 0, 1, false);
					AI_ACTOR_FORCE_SPEED(bLocal_822[bVar0], 4);
					iLocal_903[bVar0] = 3;
				}
				if (Function_224(bLocal_828[bVar0]))
				{
					Function_328(bLocal_828[bVar0], (*&Local_5 + 1208)[bVar0], 1, 1, 1);
					TASK_STAND_STILL(bLocal_828[bVar0], -1.0f, 0, 0);
				}
				bVar0++;
			}
			Function_328(bLocal_814, (*&Local_5 + 1156)[3], 1, 1, 1);
			TASK_STAND_STILL(bLocal_814, -1.0f, 0, 0);
			bVar0 = false;
			while (bVar0 <= 6)
			{
				if (Function_224(Local_909[bVar04]))
				{
					Function_207(Local_909[bVar04]);
					Function_328(Local_909[bVar04], (*&Local_5 + 1236)[bVar0], 1, 1, 1);
					TASK_STAND_STILL(Local_909[bVar04], -1.0f, 0, 0);
				}
				bVar0++;
			}
			Function_306();
			return 1;
			break;
		
		case 0x00000002:
			if (Function_224(Global_34573))
			{
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				Function_328(Global_34573, (*&Local_5 + 1296)[1], 0, 0, 0);
			}
			if (Function_224(bLocal_611))
			{
				Function_328(bLocal_611, (*&Local_5 + 1296)[3], 1, 1, 1);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
			}
			else
			{
				bLocal_611 = Function_308(1, 1, 0, 0, 0, 0, 1, 0);
				Function_328(bLocal_611, (*&Local_5 + 1296)[3], 1, 1, 1);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
			}
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (Function_224(bLocal_822[bVar0]))
				{
					Function_207(bLocal_822[bVar0]);
					Function_328(bLocal_822[bVar0], (*&Local_5 + 1324)[bVar0], 0, 1, 1);
					TASK_POINT_GUN_AT_OBJECT(bLocal_822[bVar0], bLocal_814, -1.0f, 1);
					TASK_PRIORITY_SET(bLocal_822[bVar0], true);
					if (Function_224(bLocal_828[bVar0]))
					{
						Function_328(bLocal_828[bVar0], (*&Local_5 + 1352)[bVar0], 1, 1, 1);
						TASK_STAND_STILL(bLocal_828[bVar0], -1.0f, 0, 0);
					}
				}
				bVar0++;
			}
			Function_328(bLocal_821, (*&Local_5 + 1352)[4], 1, 1, 1);
			TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
			Function_306();
			Function_305();
			return 1;
			break;
		
		case 0x00000065:
			Function_328(Global_34573, (*&Local_5 + 1400)[1], 1, 1, 1);
			Function_328(bLocal_611, (*&Local_5 + 1400)[2], 1, 1, 1);
			TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
			if (Function_224((*&Local_5 + 768)[02]))
			{
				Function_328((*&Local_5 + 768)[02], (*&Local_5 + 1400)[3], 1, 1, 1);
				SET_ACTOR_INVULNERABILITY((*&Local_5 + 768)[02], false);
				Function_207((*&Local_5 + 768)[02]);
				TASK_GO_TO_OBJECT((*&Local_5 + 768)[02], (*&Local_5 + 1400)[4], 1, 0, 1);
				GET_OBJECT_POSITION((*&Local_5 + 1400)[4], &vVar7);
				GET_OBJECT_ORIENTATION((*&Local_5 + 1400)[4], &vVar10);
				bLocal_894 = CREATE_GRINGO_IN_LAYOUT((*&Local_5 + 768)[02], "oOutroWhoreGringo", "stand_drunkdancing_woman", vVar7, vVar10);
			}
			return 1;
			break;
		
		default:
			LOG_ERROR("MISSING STAGE IN CUTSCENE_CUSTOM_SET_POSES");
			Function_304();
			break;
	}
	return 1;
}

int Function_304() //Position: 0xD9AE / 55726
{
	return 1;
}

void Function_305() //Position: 0xD9B5 / 55733
{
	if (Function_224(bLocal_814))
	{
		TASK_STAND_STILL(bLocal_814, -1.0f, 0, 0);
		AI_IGNORE_ACTOR(bLocal_814);
		SET_MOVER_FROZEN(bLocal_814, true);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_814, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_814, 0);
		Function_328(bLocal_814, (*&Local_5 + 1296)[2], 1, 1, 1);
		ACTOR_START_FORCE_HOLSTER(bLocal_814, 1, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_814, "reb02_santa_ground", 0);
		SET_ACTION_NODE_FOR_ACTOR(bLocal_814, "reb02_santa_ground");
		TASK_STAND_STILL(bLocal_814, -1.0f, 0, 0);
		DECOR_SET_BOOL(bLocal_814, "ActionArea_DisableHogtie", true);
	}
	Function_328(Global_34573, (*&Local_5 + 1296)[0], 1, 1, 1);
	return;
}

void Function_306() //Position: 0xDA79 / 55929
{
	vector3 vVar0;
	int iVar3;
	
	if (IS_ACTOR_VALID((*&Local_5 + 576)[02]))
	{
		GET_POSITION((*&Local_5 + 576)[02], &vVar0);
		DESTROY_ACTOR((*&Local_5 + 576)[02]);
		CREATE_CORPSE_IN_LAYOUT(bLocal_498, Function_81(), 518, vVar0, 0.0f, 0.0f, 0.0f, "dead_ground_male", "inj_deadpose_4");
	}
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (IS_ACTOR_VALID(bLocal_863[iVar3]))
		{
			GET_POSITION(bLocal_863[iVar3], &vVar0);
			DESTROY_ACTOR(bLocal_863[iVar3]);
			if (iVar3 == 0)
			{
				CREATE_CORPSE_IN_LAYOUT(bLocal_498, Function_81(), 520, vVar0, 0.0f, 0.0f, 0.0f, "dead_ground_male", "inj_deadpose_2");
			}
			else
			{
				CREATE_CORPSE_IN_LAYOUT(bLocal_498, Function_81(), 518, vVar0, 0.0f, 0.0f, 0.0f, "dead_ground_male", "inj_deadpose_1");
			}
		}
		iVar3++;
	}
	return;
}

var Function_307(bool bParam0) //Position: 0xDB8B / 56203
{
	if (bParam0 != 1 || bParam0 != 3)
	{
		return Local_5.f_1920;
	}
	return Local_5.f_1924;
}

bool Function_308(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xDBAB / 56235
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
	if (Global_3381 || Function_242(1))
	{
		Function_314(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_313())
		{
			return "";
		}
	}
	if (!Function_311())
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
		Function_234(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_234(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_234(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_234(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_310(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_310(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_32() || NET_IS_IN_SESSION())
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

void Function_309(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDF03 / 57091
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

var Function_310(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDF40 / 57152
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

bool Function_311() //Position: 0xDFDB / 57307
{
	if (Function_312() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_312() //Position: 0xDFF1 / 57329
{
	return Global_12976.f_152;
}

bool Function_313() //Position: 0xDFFC / 57340
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_314(var uParam0, bool bParam1, bool bParam2) //Position: 0xE01C / 57372
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_104(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_104(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_315() //Position: 0xE049 / 57417
{
	return 1;
}

int Function_316() //Position: 0xE050 / 57424
{
	switch (bLocal_506)
	{
		case 0x00000063:
			Function_234((*&Local_5 + 1136)[2]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_234((*&Local_5 + 1136)[2]), 0, 0);
			return 1;
			break;
		
		case 0x00000001:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000002:
			Function_234((*&Local_5 + 1296)[4]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_234((*&Local_5 + 1296)[4]), -3.0f, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000065:
			Function_234((*&Local_5 + 1400)[5]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_234((*&Local_5 + 1400)[5]), 0.0f, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		default:
			Function_317();
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

int Function_317() //Position: 0xE107 / 57607
{
	return 1;
}

int Function_318() //Position: 0xE10E / 57614
{
	int iVar0;
	
	switch (bLocal_506)
	{
		case 0x00000063:
			Function_324(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_322(StackVal, StackVal, bLocal_498, Global_34574, &Local_5 + 860[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_324(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_322(StackVal, StackVal, bLocal_498, Global_34574, &Local_5 + 860[1], 0, 0, 0, 0, 1, 1);
			ADD_CORPSE_REMOVAL_VOLUME_OBJ((*&Local_5 + 860)[1]);
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (Function_224(bLocal_822[iVar0]))
				{
					TASK_STAND_STILL(bLocal_822[iVar0], -1.0f, 0, 0);
				}
				iVar0++;
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_5 + 560)[02], true);
			SNAP_ACTOR_TO_GRINGO((*&Local_5 + 560)[02], Local_5.f_1872, "UseCase1", true, 0, 0);
			return 1;
			break;
		
		case 0x00000002:
			Function_324(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_322(StackVal, StackVal, bLocal_498, Global_34574, &Local_5 + 860[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_324(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			ADD_CORPSE_RETAINMENT_VOLUME_OBJ((*&Local_5 + 860)[4]);
			if (!IS_ACTOR_ALIVE((*&Local_5 + 768)[02]))
			{
				Function_321();
				SET_ACTOR_INVULNERABILITY((*&Local_5 + 768)[02], true);
				TASK_STAND_STILL((*&Local_5 + 768)[02], -1.0f, 0, 0);
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_5 + 768)[02], true);
			Function_320();
			return 1;
			break;
		
		default:
			LOG_ERROR("MISSING STAGE IN CUTSCENE_CUSTOM_SETUP");
			Function_319();
			break;
	}
	return 1;
}

int Function_319() //Position: 0xE2AB / 58027
{
	float fVar0;
	
	Function_324(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_322(StackVal, StackVal, Global_6289, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_320() //Position: 0xE306 / 58118
{
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyCorpse0", 392, -786,3391f, 13,05098f, 3716.0f, 0.0f, 102,1398f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[02], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[02]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyCorpse1", 383, -810,7024f, 13,05098f, 3721,298f, 0.0f, 176,6927f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[12], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[12]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyCorpse2", 394, -819,4138f, 16,66465f, 3710,385f, 0.0f, 24,56277f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[22], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[22]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyCorpse3", 385, -806,319f, 16,66464f, 3705,952f, 0.0f, 116,9639f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[32], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[32]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyCorpse4", 380, -806,6494f, 13,05098f, 3717,351f, 0.0f, 194,1287f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[42], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[42]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyCorpse5", 393, -805,9866f, 13,05098f, 3726,013f, 0.0f, 300,6884f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[52], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[52]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyTwoCorpse0", 379, -802,7205f, 13,05098f, 3713,28f, 0.0f, 137,4445f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[62], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[62]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyTwoCorpse1", 395, -797,174f, 13,05098f, 3714,826f, 0.0f, 97,22491f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[72], 1);
	CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_5 + 784)[72]);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_5, "CasaArmyTwoCorpse2", 396, -796.0f, 13,05098f, 3721,924f, 0.0f, 339,0005f, 0.0f, "dead_ground_male");
	SET_CORPSE_PERMANENT((*&Local_5 + 784)[82], 1);
	return;
}

void Function_321() //Position: 0xE646 / 58950
{
	Local_5.f_780 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "OutroWhore"));
	(*&Local_5 + 768)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "OutroWhore0", 687, -790,5936f, 13,16464f, 3703,144f, 0.0f, 377,5249f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 768)[02], Local_5.f_780);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 768)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 768)[02]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 768)[02], 0);
	return;
}

void Function_322(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xE6CD / 59085
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
				Function_323(bVar1, bParam0);
			}
		}
		if (!Function_101(StackVal, StackVal, vVar2))
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

void Function_323(bool bParam0, bool bParam1) //Position: 0xE93B / 59707
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

void Function_324(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE9B0 / 59824
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
	Function_253();
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
			if (Function_32())
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
				Function_327(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_81(), 2, Function_327(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_112(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_326()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_326()));
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
	if (Function_325(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_185(0x4000000);
	}
	if (Function_325(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_185(0x8000000);
	}
}

bool Function_325(int iParam0) //Position: 0xEC59 / 60505
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_326() //Position: 0xEC75 / 60533
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

vector3 Function_327(bool bParam0) //Position: 0xECF4 / 60660
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_328(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xED05 / 60677
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

void Function_329(int iParam0) //Position: 0xEE0C / 60940
{
	if (!Function_295(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_31(1, 0, 1);
		}
	}
	return;
}

bool Function_330(bool bParam0) //Position: 0xEE27 / 60967
{
	if (!Function_37(bParam0))
	{
		return 1;
	}
	return Function_33(&(Global_29008[bParam0]), 4);
}

bool Function_331(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0xEE43 / 60995
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

int Function_332() //Position: 0xEED3 / 61139
{
	return Global_34165.f_60;
}

void Function_333() //Position: 0xEEDE / 61150
{
	if (iLocal_507 < 4 && iLocal_507 > 13)
	{
		Function_424(&bLocal_700, (*&Local_5 + 968)[17], (*&Local_5 + 968)[18], "Rebel02_return_casa", "Rebel02_fail_casa", &bLocal_516, 0, 0, 0, 330, 1);
		if (iLocal_507 >= 7)
		{
			Function_423(19, 2, 15.0f, 1.0f, 0,8f, 0,2f, 0, 1);
		}
		Function_414();
		Function_401(4);
		Function_400();
		Function_234((*&Local_5 + 1400)[0]);
		Function_394(StackVal, StackVal, "$/cutscene/Rebel02_CS05/Rebel02_CS05", &uLocal_526, Function_234((*&Local_5 + 1400)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_507)
	{
		case 0x00000000:
			Function_390(0);
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			iLocal_805 = Function_332();
			Function_235(0);
			bLocal_893 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &vLocal_869, 5.0f, 0);
			Function_234(GET_OBJECT_FROM_GRINGO(bLocal_893));
			Function_231(StackVal, StackVal, Function_234(GET_OBJECT_FROM_GRINGO(bLocal_893)), 0, 0);
			SET_FACTIONS_STATUS_TWO_WAY(20, 19, 4);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(26);
			Function_234((*&Local_5 + 1380)[0]);
			bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1380)[0]), 0, 1, 1);
			if (iLocal_613[2] == 0)
			{
				if (!HUD_IS_FADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_185(3);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_234((*&Local_5 + 1380)[0]);
				bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1380)[0]), 0, 1, 1);
				if (!Function_330(bLocal_612))
				{
					Function_329(&Local_499);
				}
				Function_223(Local_5.f_436);
				Function_223(Local_5.f_484);
				if (!SQUAD_IS_VALID(Local_5.f_764))
				{
					Function_388();
				}
				if (Function_224(bLocal_820))
				{
					Function_207(bLocal_820);
					TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
					Function_328(bLocal_820, (*&Local_5 + 1380)[2], 1, 1, 1);
					MEMORY_PREFER_RIDING(bLocal_820, false);
				}
				if (Function_224(Global_34573))
				{
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					if (IS_ACTOR_RIDING(Global_34573))
					{
						if (Function_224(GET_MOUNT(Global_34573)))
						{
							TASK_STAND_STILL(GET_MOUNT(Global_34573), -1.0f, 0, 0);
							Function_328(GET_MOUNT(Global_34573), (*&Local_5 + 1400)[2], 1, 1, 1);
							ACTOR_DISMOUNT_NOW(Global_34573);
						}
					}
					Function_328(Global_34573, (*&Local_5 + 1380)[0], 1, 1, 1);
				}
				if (Function_224(bLocal_611))
				{
					Function_207(bLocal_611);
					TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
					Function_328(bLocal_611, (*&Local_5 + 1400)[2], 1, 1, 1);
				}
				iLocal_507 = 1;
			}
			else
			{
				Function_387();
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_330(bLocal_612) || bLocal_612 != 4294967295))
			{
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000002:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_507 = 4;
			Function_249(bLocal_506);
			Function_381(StackVal, StackVal, Function_249(bLocal_506), bLocal_506, Global_30633[1], Function_251(bLocal_506), 0);
			break;
		
		case 0x00000004:
			if (iLocal_613[2] == 0)
			{
				if (!IS_ACTOR_VALID(bLocal_822[4]))
				{
					bLocal_822[4] = bLocal_820;
				}
				Function_223(Local_5.f_436);
				Function_223(Local_5.f_484);
				if (!SQUAD_IS_VALID(Local_5.f_764))
				{
					Function_388();
				}
				if (Function_224(bLocal_820))
				{
					Function_207(bLocal_820);
					TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
					Function_328(bLocal_820, (*&Local_5 + 1380)[2], 1, 1, 1);
					MEMORY_PREFER_RIDING(bLocal_820, false);
				}
				if (Function_224(Global_34573))
				{
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					if (IS_ACTOR_RIDING(Global_34573))
					{
						if (Function_224(GET_MOUNT(Global_34573)))
						{
							TASK_STAND_STILL(GET_MOUNT(Global_34573), -1.0f, 0, 0);
							Function_328(GET_MOUNT(Global_34573), (*&Local_5 + 1400)[2], 1, 1, 1);
							ACTOR_DISMOUNT_NOW(Global_34573);
						}
					}
					Function_328(Global_34573, (*&Local_5 + 1380)[0], 1, 1, 1);
				}
				if (Function_224(bLocal_611))
				{
					Function_207(bLocal_611);
					TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
					Function_328(bLocal_611, (*&Local_5 + 1400)[2], 1, 1, 1);
				}
				if (Function_224(bLocal_820))
				{
					Function_380(4);
				}
				Function_377();
			}
			Function_376(&(Local_744[117]));
			Function_371(&(Local_744[117]), Local_5.f_436, "RebelSoldier", 0, 0x5f5e100, 1);
			Function_367(&(Local_744[117]), 2);
			Function_359();
			Function_357(&uLocal_527, 8, 0, 4294967295, 4294967295);
			iLocal_806 = 0;
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 5;
			break;
		
		case 0x00000005:
			if (Function_356(&iLocal_660, 1,3f))
			{
				Function_377();
				if (Function_224(Global_34573))
				{
					Function_207(Global_34573);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_808 = 0;
				iLocal_507 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_354("Rebel02_obj_search_casa");
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 7;
				iLocal_808 = 0;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_808)
			{
				if (Function_356(&iLocal_660, 5.0f))
				{
					Function_353();
					iLocal_808 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[7]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[8]))
			{
				Function_351();
			}
			else if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_872[4], 1.0f, 200.0f, 1, 1, 0))
			{
				Function_351();
			}
			iLocal_802 = 0;
			while (iLocal_802 <= 6)
			{
				if (IS_ACTOR_VALID(Local_934[iLocal_8024]))
				{
					if ((GET_LAST_ATTACKER(Local_934[iLocal_8024]) != Global_34573 || GET_LAST_ATTACKER(Local_934[iLocal_8024]) != bLocal_820) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), Local_934[iLocal_8024], 1.0f, 200.0f, 1, 1, 0))
					{
						Function_351();
					}
				}
				iLocal_802++;
			}
			break;
		
		case 0x00000008:
			if (Function_356(&iLocal_660, 2.0f))
			{
				Function_354("Rebel02_obj_fightCasa");
				iLocal_507 = 9;
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_806 = 0;
				iLocal_808 = 0;
			}
			break;
		
		case 0x00000009:
			if (Function_356(&iLocal_660, 4.0f))
			{
				Function_350();
				iLocal_507 = 10;
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_806 = 0;
				iLocal_808 = 0;
			}
			break;
		
		case 0x0000000A:
			if (Function_349())
			{
				iLocal_703 = 0;
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 105;
				Function_357(&uLocal_527, 1, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_340();
				if (iLocal_867)
				{
					Function_327(Global_34573);
					if (!IS_POSITION_INDOORS(Function_327(Global_34573)))
					{
						iLocal_867 = 0;
						Function_357(&uLocal_527, 40, 0, 4294967295, 4294967295);
					}
				}
				else
				{
					Function_327(Global_34573);
					if (IS_POSITION_INDOORS(Function_327(Global_34573)))
					{
						iLocal_867 = 1;
						Function_357(&uLocal_527, 38, 0, 4294967295, 4294967295);
					}
				}
				if (!iLocal_862)
				{
					if (Function_224(bLocal_820))
					{
						if (GET_ACTOR_HEALTH(bLocal_820) > 30.0f)
						{
							if (!Function_339())
							{
								iLocal_862 = 1;
								Function_338();
							}
						}
					}
				}
				if (Function_356(&iLocal_660, 15.0f))
				{
					if (!Function_339())
					{
						if (Function_224(Local_959[04]))
						{
							Function_337();
						}
						else
						{
							Function_334();
						}
						Function_293(&iLocal_660);
					}
				}
			}
			break;
		
		case 0x00000069:
			if (Function_356(&iLocal_660, 2,5f))
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_703 = 0;
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED() && Function_356(&iLocal_660, 2.0f))
			{
				Function_357(&uLocal_527, 0, 0, 4294967295, 4294967295);
				iLocal_613[3] = 1;
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				bLocal_506 = 101;
				iLocal_507 = 0;
			}
			break;
	}
	return;
}

void Function_334() //Position: 0xF677 / 63095
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel02_YellsAtJon2", "Rebel02_YellsAtJon2", false, 2, 1, 0, 1);
		Function_335(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_335(int iParam0) //Position: 0xF6C7 / 63175
{
	Function_336(0, Global_34573, iParam0, 0);
	Function_336(1, bLocal_610, iParam0, 0);
	Function_336(2, bLocal_814, iParam0, 0);
	Function_336(3, (*&Local_5 + 576)[02], iParam0, 0);
	Function_336(4, bLocal_820, iParam0, 0);
	Function_336(5, Local_934[04], iParam0, 0);
	Function_336(6, Local_959[14], iParam0, 0);
	Function_336(7, Local_934[24], iParam0, 0);
	Function_336(8, Local_959[04], iParam0, 0);
	return;
}

void Function_336(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xF739 / 63289
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_177(uParam2, Function_163(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_337() //Position: 0xF75E / 63326
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel02_YellsAtJon3", "Rebel02_YellsAtJon3", false, 2, 1, 0, 1);
		Function_335(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_338() //Position: 0xF7AE / 63406
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelTakesDamage", "Rebel02_RebelTakesDamage", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_339() //Position: 0xF808 / 63496
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		return 1;
	}
	return 0;
}

void Function_340() //Position: 0xF81F / 63519
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(Local_5.f_700))
	{
		if (iLocal_803 >= 3 || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[8]))
		{
			Function_348();
			Local_959[04].f_12 = Local_5.f_1908;
			Local_959[14].f_12 = Local_5.f_1904;
			Local_959[24].f_12 = Function_347(&Local_934);
			bVar0 = false;
			while (bVar0 <= 3)
			{
				Local_959[bVar04] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_700, bVar0);
				if (Function_224(Local_959[bVar04]))
				{
					Function_346(Local_959[bVar04]);
					Local_959[bVar04].f_8 = 4294967295;
					Function_207(Local_959[bVar04]);
					if (Local_959[bVar04].f_12 == Local_5.f_1904 && Local_959[bVar04].f_12 == Local_5.f_1912)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(Local_959[bVar04], Local_5.f_1956, 3, 1, 0, 1, false);
					}
					SET_ACTOR_STAY_WITHIN_VOLUME(Local_959[bVar04], (*&Local_5 + 968)[6], 3, true);
					MEMORY_ALLOW_SHOOTING(Local_959[bVar04], true);
					Local_959[bVar04].f_4 = 7;
				}
				bVar0++;
			}
			Function_345(Local_5.f_700, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_344(Local_5.f_700, bLocal_497);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_5.f_700, bLocal_497);
			Function_343(Local_5.f_700, 36, 0.0f);
			Function_342(Local_5.f_700, 0);
			Function_341(Local_5.f_700, 1);
		}
	}
	return;
}

void Function_341(bool bParam0, int iParam1) //Position: 0xF96F / 63855
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_DRAW_LAST_WEAPON(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_342(bool bParam0, int iParam1) //Position: 0xF9B6 / 63926
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

void Function_343(bool bParam0, int iParam1, bool bParam2) //Position: 0xF9ED / 63981
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

void Function_344(bool bParam0, bool bParam1) //Position: 0xFA37 / 64055
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (Function_224(bVar1))
		{
			SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(bVar1), bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_345(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xFA6E / 64110
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

void Function_346(bool bParam0) //Position: 0xFB58 / 64344
{
	if (Function_224(bParam0))
	{
		SET_ACTOR_VISION_XRAY(bParam0, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 56.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,2f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 5.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 3.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, 2,5f);
		AI_SET_BURST_DURATION(bParam0, 4.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1,9f, 0,1f);
	}
	return;
}

var Function_347(var uParam0) //Position: 0xFBD4 / 64468
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!IS_ACTOR_ALIVE((*uParam0)[iVar04]))
		{
			if (IS_OBJECT_IN_VOLUME(uParam0[iVar04]->f_12, (*&Local_5 + 968)[20]))
			{
				return uParam0[iVar04]->f_12;
			}
		}
		iVar0++;
	}
	return Local_5.f_1912;
}

void Function_348() //Position: 0xFC20 / 64544
{
	Local_5.f_700 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "CasaArmyTwo"));
	(*&Local_5 + 672)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmyTwo0_UPSTAIRS", 379, -828.0f, 13,05098f, 3704.0f, 0.0f, 137,4445f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[02], Local_5.f_700);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 672)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[02], 42, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 672)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 672)[02], 16);
	SET_ACTOR_FACTION((*&Local_5 + 672)[02], 19);
	(*&Local_5 + 672)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmyTwo1_UP_GUARD_STAIRS", 395, -828,1556f, 13,05098f, 3702,062f, 0.0f, 144,4962f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[12], Local_5.f_700);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 672)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[12], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[12], 19);
	(*&Local_5 + 672)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmyTwo2_UPSTAIRS_IN_ROOM", 396, -824,8502f, 13,05098f, 3701,903f, 0.0f, 132,0983f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 672)[22], Local_5.f_700);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 672)[22], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 672)[22], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 672)[22], 19);
	return;
}

bool Function_349() //Position: 0xFDDC / 64988
{
	iLocal_803 = 0;
	iLocal_803 = (iLocal_803 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_5.f_668));
	if (SQUAD_IS_VALID(Local_5.f_700))
	{
		iLocal_803 = (iLocal_803 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_5.f_700));
	}
	if (iLocal_803 >= 0)
	{
		return 0;
	}
	return 1;
}

void Function_350() //Position: 0xFE19 / 65049
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelSoldiersAmbush", "Rebel02_RebelSoldiersAmbush", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_351() //Position: 0xFE79 / 65145
{
	Function_352();
	iLocal_703 = 1;
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	if (IS_ACTOR_VALID(bLocal_872[4]))
	{
		TASK_FLEE_ACTOR(bLocal_872[4], Local_934[44], 10.0f, -1.0f, 0, 0, 0);
	}
	Local_934[44].f_4 = 6;
	Function_293(&iLocal_660);
	Function_293(&iLocal_666);
	Function_357(&uLocal_527, 40, 0, 4294967295, 4294967295);
	iLocal_507 = 8;
	iLocal_808 = 0;
	return;
}

void Function_352() //Position: 0xFED8 / 65240
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Rebel02_FightBreaksYell", "Rebel02_FightBreaksYell", false, 2, 1, 0, 1);
		Function_335(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_353() //Position: 0xFF30 / 65328
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_CallsOut", "Rebel02_CallsOut", 4, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354(int iParam0) //Position: 0xFF7A / 65402
{
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	Function_355(iParam0, 0x40f00000, 1, 2, 0, 0, 0);
	return;
}

void Function_355(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xFF9B / 65435
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

bool Function_356(int iParam0, float fParam1) //Position: 0xFFEE / 65518
{
	if (Function_290(iParam0))
	{
		if (Function_288(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_357(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1000A / 65546
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_358(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_358(int iParam0) //Position: 0x1002E / 65582
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

void Function_359() //Position: 0x1056B / 66923
{
	bool bVar0;
	
	if (!iLocal_866)
	{
		bVar0 = false;
		iLocal_811 = 0;
		if (IS_DOOR_VALID(uLocal_878[0]))
		{
			Function_147(uLocal_878[0], 0);
		}
		if (!SQUAD_IS_VALID(Local_5.f_748))
		{
			Function_366();
			bVar0 = false;
			while (bVar0 <= 5)
			{
				bLocal_872[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_748, bVar0);
				SET_ACTOR_HEALTH(bLocal_872[bVar0], 15.0f);
				SET_ACTOR_ONE_SHOT_DEATH(bLocal_872[bVar0], true);
				bVar0++;
			}
			Function_365(Local_5.f_748, 0);
			Function_364(Local_5.f_748, 100.0f);
			CREATE_CORPSE_IN_LAYOUT(bLocal_498, Function_81(), 250, -813,071f, 13,787f, 3698,773f, 0.0f, 405,928f, 0.0f, "dead_ground_female", "inj_deadpose_2");
			CREATE_DECAL(0, -813,071f, 13,787f, 3698,773f, 0,75f, 0, 0);
		}
		if (!SQUAD_IS_VALID(Local_5.f_668))
		{
			Function_363();
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_5.f_668, bLocal_497);
			bVar0 = false;
			while (bVar0 <= 6)
			{
				Local_934[bVar04] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_668, bVar0);
				if (Function_224(Local_934[bVar04]))
				{
					Function_346(Local_934[bVar04]);
					Local_934[bVar04].f_4 = 5;
					Local_934[bVar04].f_8 = 4294967295;
					Function_207(Local_934[bVar04]);
					TASK_STAND_STILL(Local_934[bVar04], -1.0f, 0, 0);
					SET_ACTOR_STAY_WITHIN_VOLUME(Local_934[bVar04], (*&Local_5 + 968)[6], 2, true);
					MEMORY_ALLOW_SHOOTING(Local_934[bVar04], false);
				}
				bVar0++;
			}
			Function_343(Local_5.f_668, 36, 0.0f);
			Function_342(Local_5.f_668, 0);
			Function_341(Local_5.f_668, 1);
			Local_934[04].f_8 = 3;
			Local_934[14].f_8 = 2;
			Local_934[24].f_8 = 1;
			Local_934[34].f_8 = 12;
			Local_934[44].f_8 = 11;
			Local_934[54].f_8 = 8;
			Local_934[04].f_12 = Local_5.f_1880;
			Local_934[14].f_12 = Local_5.f_1884;
			Local_934[24].f_12 = Local_5.f_1888;
			Local_934[34].f_12 = Local_5.f_1892;
			Local_934[44].f_12 = Local_5.f_1896;
			Local_934[54].f_12 = Local_5.f_1900;
		}
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
		if (Function_224(bLocal_611))
		{
			Function_207(bLocal_611);
			TASK_WANDER_IN_VOLUME(bLocal_611, (*&Local_5 + 968)[19], -1.0f);
		}
		if (Function_224(bLocal_821))
		{
			Function_207(bLocal_821);
			TASK_WANDER_IN_VOLUME(bLocal_821, (*&Local_5 + 968)[19], -1.0f);
		}
		uLocal_878[0] = Function_361("casaMadrugada", "whorehouse", 1);
		uLocal_878[1] = Function_361("casaMadrugada", "whorehouse", 2);
		uLocal_878[2] = Function_361("casaMadrugada", "whorehouse", 3);
		uLocal_878[3] = Function_361("casaMadrugada", "whorehouse", 4);
		uLocal_878[4] = Function_361("casaMadrugada", "whorehouse", 5);
		uLocal_878[5] = Function_361("casaMadrugada", "whorehouse", 6);
		uLocal_878[6] = Function_361("casaMadrugada", "whorehouse", 7);
		uLocal_878[7] = Function_361("casaMadrugada", "whorehouse", 8);
		uLocal_878[8] = Function_361("casaMadrugada", "whorehouse", 9);
		uLocal_878[9] = Function_361("casaMadrugada", "whorehouse", 10);
		uLocal_878[10] = Function_361("casaMadrugada", "whorehouse", 11);
		uLocal_878[11] = Function_361("casaMadrugada", "cantina", 1);
		uLocal_878[12] = Function_361("casaMadrugada", "cantina", 2);
		uLocal_878[13] = Function_361("casaMadrugada", "Cantina", 3);
		if (!Function_360(1))
		{
		}
		iLocal_866 = 1;
	}
	return;
}

bool Function_360(bool bParam0) //Position: 0x10A13 / 68115
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (IS_DOOR_VALID(uLocal_878[iVar0]))
		{
			if (bParam0)
			{
				if (IS_DOOR_OPENED(uLocal_878[iVar0]))
				{
					CLOSE_DOOR_FAST(uLocal_878[iVar0]);
				}
			}
			if (IS_DOOR_LOCKED(uLocal_878[iVar0]))
			{
				Function_178(uLocal_878[iVar0], 0);
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int Function_361(var uParam0, bool bParam1, int iParam2) //Position: 0x10A73 / 68211
{
	return Function_362(Global_29006, uParam0, bParam1, iParam2);
}

int Function_362(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x10A85 / 68229
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_37(iParam0))
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

void Function_363() //Position: 0x10B21 / 68385
{
	Local_5.f_668 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "CasaArmy"));
	(*&Local_5 + 616)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmy0_DOWN_LEFT", 392, -820,9395f, 13,12402f, 3708,717f, 0.0f, 215,1328f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 616)[02], Local_5.f_668);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 616)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 616)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 616)[02], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 616)[02], 19);
	(*&Local_5 + 616)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmy1_DOWN_MIDDLE", 383, -816,9576f, 13,2208f, 3704,431f, 0.0f, 147,1979f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 616)[12], Local_5.f_668);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 616)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 616)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 616)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 616)[12], 19);
	(*&Local_5 + 616)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmy2_DOWN_RIGHT", 394, -811,3104f, 13,11813f, 3697,865f, 0.0f, 206,2046f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 616)[22], Local_5.f_668);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 616)[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 616)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 616)[22], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 616)[22], 19);
	(*&Local_5 + 616)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmy3_UP_REAR", 385, -818,996f, 16,665f, 3701,4f, 0.0f, 205,441f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 616)[32], Local_5.f_668);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 616)[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 616)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 616)[32], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 616)[32], 19);
	(*&Local_5 + 616)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmy4_UP_LEFT", 380, -810,6151f, 16,62663f, 3704,948f, 0.0f, 240,5381f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 616)[42], Local_5.f_668);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 616)[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 616)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 616)[42], 9, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 616)[42], 19);
	(*&Local_5 + 616)[52] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaArmy5_UP_RIGHT", 393, -806,0187f, 16,70065f, 3702,745f, 0.0f, 218,4696f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 616)[52], Local_5.f_668);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 616)[52], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 616)[52]);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 616)[52], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 616)[52], 19);
	return;
}

void Function_364(bool bParam0, bool bParam1) //Position: 0x10E55 / 69205
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_ACTOR_HEARING_MAX_RANGE(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_365(bool bParam0, bool bParam1) //Position: 0x10E9C / 69276
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_CAN_BE_TARGETED(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_366() //Position: 0x10EDB / 69339
{
	Local_5.f_748 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "CasaWhores"));
	(*&Local_5 + 704)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Whore3_DOWN_LEFT", 249, -819,4217f, 13,17263f, 3709,654f, 0.0f, 213,8942f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 704)[02], Local_5.f_748);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 704)[02]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 704)[02], 0);
	TASK_STAND_STILL((*&Local_5 + 704)[02], -1.0f, 0, 0);
	(*&Local_5 + 704)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Whore4_DOWN_MIDDLE", 245, -817,377f, 13,16848f, 3704,994f, 0.0f, 333,886f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 704)[12], Local_5.f_748);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 704)[12]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 704)[12], 0);
	TASK_STAND_STILL((*&Local_5 + 704)[12], -1.0f, 0, 0);
	(*&Local_5 + 704)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Whore0_BUNK_HOUSE_A", 315, -812,6106f, 16,67441f, 3708.0f, 0.0f, 210,2915f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 704)[22], Local_5.f_748);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 704)[22]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 704)[22], 0);
	TASK_STAND_STILL((*&Local_5 + 704)[22], -1.0f, 0, 0);
	(*&Local_5 + 704)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Whore1_BUNK_HOUSE_B", 248, -787,2917f, 13,13237f, 3691,669f, 0.0f, 228,4089f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 704)[32], Local_5.f_748);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 704)[32]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 704)[32], 0);
	TASK_STAND_STILL((*&Local_5 + 704)[32], -1.0f, 0, 0);
	(*&Local_5 + 704)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Whore2_UP_LEFT", 315, -809,4716f, 16,70065f, 3705,695f, 0.0f, 219,2876f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 704)[42], Local_5.f_748);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 704)[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 704)[42]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_5 + 704)[42], 0);
	TASK_STAND_STILL((*&Local_5 + 704)[42], -1.0f, 0, 0);
	return;
}

void Function_367(int iParam0, int iParam1) //Position: 0x11130 / 69936
{
	if (iParam1 != 100000000)
	{
		Function_370(iParam0, iParam1);
	}
	else
	{
		Function_368(iParam0, 1);
	}
	return;
}

void Function_368(int iParam0, bool bParam1) //Position: 0x11150 / 69968
{
	iParam0->f_40 = 0;
	Function_369(iParam0, 2, bParam1);
	Function_369(iParam0, 4, bParam1);
	Function_369(iParam0, 8, bParam1);
	Function_369(iParam0, 16, bParam1);
	Function_369(iParam0, 32, bParam1);
	Function_369(iParam0, 64, bParam1);
	Function_369(iParam0, 128, bParam1);
	Function_369(iParam0, 256, bParam1);
	Function_369(iParam0, 512, bParam1);
	Function_369(iParam0, 1024, bParam1);
	return;
}

void Function_369(int iParam0, int iParam1, bool bParam2) //Position: 0x111B6 / 70070
{
	bool bVar0;
	
	Function_104(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_104(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_25(iParam0 + 40, bVar0);
	}
	else
	{
		Function_104(iParam0 + 40, bVar0);
	}
	return;
}

void Function_370(int iParam0, bool bParam1) //Position: 0x111F2 / 70130
{
	bool bVar0;
	
	Function_25(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_104(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_25(iParam0 + 40, bVar0);
	return;
}

int Function_371(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1121D / 70173
{
	if (!Function_375(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_374(iParam0, bParam2))
	{
		return 0;
	}
	Function_373(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_372(iParam0, iParam4, iParam5);
	return 1;
}

void Function_372(var uParam0, int iParam1, int iParam2) //Position: 0x11259 / 70233
{
	if (iParam1 != 100000000)
	{
		Function_369(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_368(uParam0, iParam2);
	}
	return;
}

void Function_373(var uParam0, int iParam1) //Position: 0x1127C / 70268
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_374(int iParam0, bool bParam1) //Position: 0x11288 / 70280
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

bool Function_375(var uParam0, bool bParam1) //Position: 0x11311 / 70417
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

void Function_376(int iParam0) //Position: 0x1149D / 70813
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

void Function_377() //Position: 0x11551 / 70993
{
	int iVar0;
	
	switch (bLocal_506)
	{
		case 0x00000000:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iLocal_903[iVar0] = 22;
				iVar0++;
			}
			break;
		
		case 0x00000001:
			if (iLocal_613[0] == 0)
			{
				Function_378();
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iLocal_903[iVar0] = 13;
				iVar0++;
			}
			break;
		
		case 0x00000003:
			if (iLocal_613[2] == 0)
			{
				if (Function_224(bLocal_820))
				{
					Function_207(bLocal_820);
					TASK_STAND_STILL(bLocal_820, -1.0f, 0, 0);
					iLocal_903[4] = 17;
				}
			}
			break;
		
		default:
			iLocal_903[4] = 23;
			break;
	}
	return;
}

void Function_378() //Position: 0x115FB / 71163
{
	int iVar0;
	
	if (SQUAD_IS_VALID(Local_5.f_436))
	{
		Function_379(Local_5.f_436);
	}
	if (SQUAD_GOAL_IS_VALID(bLocal_899))
	{
		SQUAD_GOAL_REMOVE(Local_5.f_436, bLocal_899);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_820);
		SQUAD_GOAL_ADD_BATTLE_ALLIES(Local_5.f_436, 0, Global_34573, 4294967295);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_224(bLocal_822[iVar0]))
		{
			Function_207(bLocal_822[iVar0]);
			MEMORY_PREFER_RIDING(bLocal_822[iVar0], false);
			TASK_OVERRIDE_CLEAR_POSTURE(bLocal_822[iVar0]);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[iVar0], true);
			CLEAR_ACTOR_MAX_SPEED(bLocal_822[iVar0]);
			CLEAR_ACTOR_MIN_SPEED(bLocal_822[iVar0]);
			Function_293(&(vLocal_684[iVar03]));
			bLocal_856[iVar0] = RAND_FLOAT_RANGE(1.0f, 3,5f);
			iLocal_903[iVar0] = 3;
		}
		iVar0++;
	}
	return;
}

void Function_379(bool bParam0) //Position: 0x116BD / 71357
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_END_FORCE_HOLSTER(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_380(int iParam0) //Position: 0x11702 / 71426
{
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[iParam0], true);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_822[iParam0]);
	MEMORY_PREFER_RIDING(bLocal_822[iParam0], false);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_822[iParam0], 0);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[iParam0], true);
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_822[iParam0], (*&Local_5 + 968)[21], 2, true);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_822[iParam0], 0,4f);
	SET_ACTOR_VISION_XRAY(bLocal_822[iParam0], false);
	MEMORY_ALLOW_SHOOTING(bLocal_822[iParam0], true);
	return;
}

void Function_381(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x11779 / 71545
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
	if (iParam3 != Global_34165.f_48 && !Function_386())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_385(0);
	Function_384();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_383(uParam4, iVar0, iVar1);
	Function_382();
}

void Function_382() //Position: 0x11816 / 71702
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

void Function_383(int iParam0, bool bParam1, bool bParam2) //Position: 0x11857 / 71767
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
	if (Function_37(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_71();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_384() //Position: 0x119BD / 72125
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_385(bool bParam0) //Position: 0x119E1 / 72161
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

bool Function_386() //Position: 0x11A10 / 72208
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_387() //Position: 0x11A2B / 72235
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (bLocal_822[iVar0] != bLocal_820)
		{
			if (Function_224(bLocal_822[iVar0]))
			{
				if (Function_224(GET_MOUNT(bLocal_822[iVar0])))
				{
					RELEASE_ACTOR(GET_MOUNT(bLocal_822[iVar0]));
				}
				RELEASE_ACTOR(bLocal_822[iVar0]);
			}
		}
		iVar0++;
	}
	return;
}

void Function_388() //Position: 0x11A87 / 72327
{
	Function_389();
	bLocal_820 = (*&Local_5 + 752)[02];
	SET_ACTOR_FACTION(bLocal_820, 20);
	MEMORY_CONSIDER_AS(bLocal_820, Global_34573, false);
	SET_ACTOR_CAN_BE_TARGETED(bLocal_820, false);
	MEMORY_ALLOW_SHOOTING(bLocal_820, false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_820, false);
	Function_371(&(Local_744[117]), bLocal_820, "RebelSoldier", 1, 0x5f5e100, 1);
	Function_367(&(Local_744[117]), 2);
	SET_ACTOR_VISION_XRAY(bLocal_820, false);
	return;
}

void Function_389() //Position: 0x11AF7 / 72439
{
	Local_5.f_764 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "nCasaRebel"));
	(*&Local_5 + 752)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CasaRebel0", 529, -790,6715f, 13,05098f, 3728f, 0.0f, 367,7576f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 752)[02], Local_5.f_764);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 752)[02], false);
	return;
}

void Function_390(bool bParam0) //Position: 0x11B65 / 72549
{
	Function_391(0, 0x40400000);
	Function_47();
	Function_46();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_391(bool bParam0, float fParam1) //Position: 0x11B99 / 72601
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
	Function_393();
	Function_392();
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

void Function_392() //Position: 0x11C97 / 72855
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_393() //Position: 0x11CC9 / 72905
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

int Function_394(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x11DC6 / 73158
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_397(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_399()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
				if (!Function_101(StackVal, StackVal, vVar16))
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
					Function_395();
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
	else if ((!Function_397(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_399()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_397(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_395() //Position: 0x1200C / 73740
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
			Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_396(char* cParam0, vector3 vParam1) //Position: 0x12060 / 73824
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

bool Function_397(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x12188 / 74120
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_398(bParam0);
		if (VDIST(Function_398(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_398(bool bParam0) //Position: 0x12212 / 74258
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

int Function_399() //Position: 0x1227C / 74364
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_400() //Position: 0x1228B / 74379
{
	int iVar0;
	
	if (Function_224(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
	{
		if (iLocal_811 == 0)
		{
			iLocal_811 = 1;
			if (bLocal_506 == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (Function_224(Local_909[iVar04]))
					{
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(Local_909[iVar04], 0);
						AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(Local_909[iVar04], 1);
					}
					iVar0++;
				}
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 0,01f);
			}
			else if (bLocal_506 == 3)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (Function_224(Local_934[iVar04]))
					{
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(Local_934[iVar04], 0);
						AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(Local_934[iVar04], 1);
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (Function_224(Local_959[iVar04]))
					{
						COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(Local_959[iVar04], 0);
						AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(Local_959[iVar04], 1);
					}
					iVar0++;
				}
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 0,01f);
			}
		}
	}
	else if (iLocal_811)
	{
		iLocal_811 = 0;
		if (bLocal_506 == 1)
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Function_224(Local_909[iVar04]))
				{
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(Local_909[iVar04], 0);
				}
				iVar0++;
			}
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 1.0f);
		}
		else if (bLocal_506 == 3)
		{
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if (Function_224(Local_934[iVar04]))
				{
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(Local_934[iVar04], 0);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (Function_224(Local_959[iVar04]))
				{
					COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(Local_959[iVar04], 0);
				}
				iVar0++;
			}
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 1.0f);
		}
	}
	return;
}

void Function_401(bool bParam0) //Position: 0x12418 / 74776
{
	var uVar3;
	var uVar6;
	var uVar9;
	var uVar12;
	vector3 vVar15;
	var uVar18;
	struct<5> Var21;
	struct<5> Var28;
	
	if (Function_224(bLocal_822[bParam0]))
	{
		switch (iLocal_903[bParam0])
		{
			case 0x00000000:
				Function_411(bParam0, 1);
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				Function_234((*&Local_5 + 1268)[bParam0]);
				if (Function_410(StackVal, StackVal, bLocal_822[bParam0], Function_234((*&Local_5 + 1268)[bParam0])) > 5.0f)
				{
					SET_ANIM_SET_FOR_ACTOR(bLocal_822[bParam0], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_822[bParam0], "tense_with_guns");
					Function_207(bLocal_822[bParam0]);
					TASK_STAND_STILL(bLocal_822[bParam0], -1.0f, 0, 0);
					iLocal_903[bParam0] = 3;
				}
				break;
			
			case 0x00000003:
				if (GET_TASK_STATUS(bLocal_822[bParam0], 17) != 1)
				{
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_822[bParam0], true);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_822[bParam0], 0);
					if (bParam0 != 0 || bParam0 != 4)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_822[bParam0], Function_307(bParam0), 4, 0, 0, 1, false);
						AI_ACTOR_FORCE_SPEED(bLocal_822[bParam0], 4);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_822[bParam0], Function_307(bParam0), 2, 0, 0, 1, false);
						AI_ACTOR_FORCE_SPEED(bLocal_822[bParam0], 2);
					}
				}
				iLocal_903[bParam0] = 4;
				break;
			
			case 0x00000004:
				if (Function_409(bLocal_822[bParam0], Function_307(bParam0), 2,5f))
				{
					Function_207(bLocal_822[bParam0]);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_822[bParam0], 2);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_822[bParam0], 1);
					TASK_OVERRIDE_CLEAR_POSTURE(bLocal_822[bParam0]);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_822[bParam0], -1.0f);
					Function_293(&(vLocal_684[bParam03]));
					bLocal_856[bParam0] = RAND_FLOAT_RANGE(1.0f, 3,5f);
					iLocal_903[bParam0] = 5;
				}
				break;
			
			case 0x00000005:
				if (Function_408())
				{
					Function_406(bParam0);
				}
				else if (StackVal || Function_410(StackVal, Function_356(&(vLocal_684[bParam03]), (8.0f + bLocal_856[bParam0])), Global_34573, *(&Local_5 + 1548[iLocal_8166])) >= 12.0f)
				{
					Function_207(bLocal_822[bParam0]);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_822[bParam0], uLocal_834[bParam0], 2, 0, 0, 1, false);
					iLocal_903[bParam0] = 6;
				}
				break;
			
			case 0x00000006:
				if (Function_410(StackVal, StackVal, bLocal_822[bParam0], vLocal_840[bParam03]) > 5.0f)
				{
					Function_207(bLocal_822[bParam0]);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_822[bParam0], -1.0f);
					Function_293(&(vLocal_684[bParam03]));
					bLocal_856[bParam0] = RAND_FLOAT_RANGE(1.0f, 3,5f);
					iLocal_903[bParam0] = 7;
				}
				else if (GET_TASK_STATUS(bLocal_822[bParam0], 43) != 1)
				{
					if (GET_TASK_STATUS(bLocal_822[bParam0], 1) != 1)
					{
						Function_207(bLocal_822[bParam0]);
						TASK_GO_TO_COORD(bLocal_822[bParam0], &(vLocal_840[bParam03]), 2);
					}
				}
				break;
			
			case 0x00000007:
				if (Function_408())
				{
					Function_406(bParam0);
				}
				else if (StackVal || Function_410(StackVal, Function_356(&(vLocal_684[bParam03]), (15.0f + bLocal_856[bParam0])), Global_34573, *(&Local_5 + 1548[iLocal_8166])) >= 12.0f)
				{
					Function_207(bLocal_822[bParam0]);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_822[bParam0], uLocal_834[bParam0], 2, 0, 0, 1, false);
					Function_234((*&Local_5 + 1632)[bParam0]);
					vLocal_840[bParam03] = { StackVal, StackVal, Function_234((*&Local_5 + 1632)[bParam0]) };
					iLocal_903[bParam0] = 8;
				}
				break;
			
			case 0x00000008:
				if (Function_410(StackVal, StackVal, bLocal_822[bParam0], vLocal_840[bParam03]) > 5.0f)
				{
					Function_207(bLocal_822[bParam0]);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_822[bParam0], -1.0f);
					iLocal_903[bParam0] = 9;
				}
				else if (GET_TASK_STATUS(bLocal_822[bParam0], 43) != 1)
				{
					if (GET_TASK_STATUS(bLocal_822[bParam0], 1) != 1)
					{
						Function_207(bLocal_822[bParam0]);
						TASK_GO_TO_COORD(bLocal_822[bParam0], &(vLocal_840[bParam03]), 2);
					}
				}
				break;
			
			case 0x00000009:
				if (Function_408())
				{
					Function_406(bParam0);
				}
				break;
			
			case 0x0000000A:
				if (GET_TASK_STATUS(bLocal_822[bParam0], 6) == 1)
				{
					if (Function_224(bLocal_814))
					{
						SET_ANIM_SET_FOR_ACTOR(bLocal_822[bParam0], "tense_with_guns", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_822[bParam0], "tense_with_guns");
						Function_207(bLocal_822[bParam0]);
						TASK_STAND_STILL(bLocal_822[bParam0], -1.0f, 0, 0);
						iLocal_903[bParam0] = 11;
					}
				}
				break;
			
			case 0x0000000B:
				iLocal_903[bParam0] = 13;
				break;
			
			case 0x0000000C:
				if (Function_224(bLocal_814))
				{
					if (IS_ACTOR_HOGTIED(bLocal_814))
					{
						Function_405(bParam0);
					}
					else if (Function_404(bLocal_814))
					{
						iLocal_903[bParam0] = 13;
					}
					else if (Function_356(&(vLocal_684[bParam03]), 1,5f))
					{
						iLocal_903[bParam0] = 13;
					}
				}
				break;
			
			case 0x0000000D:
				if (!Function_224(bLocal_814))
				{
					Function_207(bLocal_822[bParam0]);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_822[bParam0], 1);
					MEMORY_PREFER_RIDING(bLocal_822[bParam0], true);
					if (bLocal_822[bParam0] == bLocal_820)
					{
						Function_207(bLocal_822[bParam0]);
						if (Function_224(GET_ACTORS_HORSE(bLocal_822[bParam0])))
						{
							if (IS_ACTOR_VALID(bLocal_814) && !bLocal_812)
							{
								GET_POSITION(bLocal_814, &uVar3);
								GET_POSITION(bLocal_822[bParam0], &uVar6);
								TASK_SHOOT_FROM_POSITION(false, bLocal_814, &uVar6);
								TASK_SHOOT_AT_COORD_FROM_POSITION(false, &uVar3, &uVar6, RAND_FLOAT_RANGE(0,4f, 0,9f));
							}
							TASK_MOUNT(bLocal_822[bParam0], GET_ACTORS_HORSE(bLocal_822[bParam0]), 0, 1, 4, 2147483647);
						}
						else
						{
							TASK_FOLLOW_ACTOR(bLocal_822[bParam0], Global_34573);
						}
						ACTOR_HOLSTER_WEAPON(bLocal_822[bParam0], 1);
						MEMORY_ALLOW_SHOOTING(bLocal_822[bParam0], false);
						iLocal_903[bParam0] = 15;
					}
					else
					{
						bLocal_801 = TASK_SEQUENCE_OPEN();
						if (IS_ACTOR_VALID(bLocal_814) && !bLocal_812)
						{
							GET_POSITION(bLocal_814, &uVar9);
							GET_POSITION(bLocal_822[bParam0], &uVar12);
							TASK_SHOOT_AT_COORD_FROM_POSITION(false, &uVar9, &uVar12, RAND_FLOAT_RANGE(1.0f, 2.0f));
							TASK_STAND_STILL(false, (1.0f + RAND_FLOAT_RANGE(0,5f, 1,9f)), 0, 0);
						}
						else
						{
							TASK_STAND_STILL(false, (3.0f + RAND_FLOAT_RANGE(0,5f, 1,9f)), 0, 0);
						}
						if (IS_ACTOR_VALID(bLocal_828[bParam0]) && bLocal_828[bParam0] == bLocal_821)
						{
							TASK_GO_NEAR_ACTOR(false, bLocal_828[bParam0], 5.0f, 1);
							TASK_MOUNT(false, bLocal_828[bParam0], 0, 1, 2, 2147483647);
						}
						else
						{
							PRINTSTRING(" invalid aRebelHorse ");
							PRINTINT(bParam0);
							PRINTNL();
						}
						if (IS_ACTOR_VALID(bLocal_610))
						{
							TASK_GO_NEAR_ACTOR(false, bLocal_610, 15.0f, 4);
						}
						else
						{
							vVar15 = { -2288.0f, 21,99682f, 4957,407f };
							TASK_GO_NEAR_COORD(false, &vVar15, 15.0f, true);
						}
						TASK_WANDER(false, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_822[bParam0], bLocal_801);
						TASK_SEQUENCE_RELEASE(bLocal_801, 1);
						AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_822[bParam0], 0, 1);
						MEMORY_PREFER_RIDING(bLocal_822[bParam0], false);
						iLocal_903[bParam0] = 14;
					}
				}
				break;
			
			case 0x0000000E:
				break;
			
			case 0x0000000F:
				if (IS_ACTOR_RIDING(bLocal_822[bParam0]))
				{
					Function_207(bLocal_822[bParam0]);
					if (Function_224(Global_34573))
					{
						TASK_FACE_ACTOR(bLocal_822[bParam0], Global_34573, 1, 3212836864);
					}
				}
				break;
			
			case 0x00000010:
				Function_411(bParam0, 0);
				break;
			
			case 0x00000011:
				if (bLocal_506 == 2)
				{
					if (!IS_ACTOR_RIDING(bLocal_822[bParam0]))
					{
					}
					else if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_822[bParam0]))
					{
						TASK_DISMOUNT(bLocal_822[bParam0], 1);
					}
				}
				else if (!IS_ACTOR_RIDING(bLocal_822[bParam0]))
				{
					Function_207(bLocal_822[bParam0]);
					TASK_HIDE_AT_COVER(bLocal_822[bParam0], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_1876), -1.0f, 6f, 1);
					iLocal_903[bParam0] = 18;
				}
				break;
			
			case 0x00000012:
				if (!IS_ACTOR_ALIVE(bLocal_872[4]))
				{
					Function_207(bLocal_822[bParam0]);
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_822[bParam0], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_1876), -1.0f, 1086324736);
					iLocal_903[bParam0] = 19;
				}
				break;
			
			case 0x00000013:
				if (Function_349())
				{
					Function_207(bLocal_822[bParam0]);
					TASK_USE_GRINGO(bLocal_822[bParam0], GET_GRINGO_FROM_OBJECT(Local_5.f_1868), "UseCase1", 4294967295, 1);
					iLocal_903[bParam0] = 21;
				}
				else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[10]))
				{
					if (GET_TASK_STATUS(bLocal_822[bParam0], 28) != 1)
					{
						Function_207(bLocal_822[bParam0]);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_822[bParam0], GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_1876), -1.0f, 1086324736);
					}
				}
				else
				{
					GET_OBJECT_POSITION((*&Local_5 + 1692)[5], &uVar18);
					GET_OBJECT_ORIENTATION((*&Local_5 + 1692)[5], &Var21);
					bVar24 = FIND_NEAREST_COVER_LOCATION(StackVal, &uVar18, 2.0f, 45.0f, 4);
					if (IS_COVER_LOCATION_VALID(bVar24))
					{
						Function_207(bLocal_822[bParam0]);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_822[bParam0], bVar24, -1.0f, 1086324736);
						iLocal_903[bParam0] = 20;
					}
				}
				break;
			
			case 0x00000014:
				if (Function_349())
				{
					Function_207(bLocal_822[bParam0]);
					TASK_USE_GRINGO(bLocal_822[bParam0], GET_GRINGO_FROM_OBJECT(Local_5.f_1868), "UseCase1", 4294967295, 1);
					iLocal_903[bParam0] = 21;
				}
				else if (GET_TASK_STATUS(bLocal_822[bParam0], 28) != 1)
				{
					GET_OBJECT_POSITION((*&Local_5 + 1692)[5], &uVar25);
					GET_OBJECT_ORIENTATION((*&Local_5 + 1692)[5], &Var28);
					bVar31 = FIND_NEAREST_COVER_LOCATION(StackVal, &uVar25, 2.0f, 45.0f, 4);
					if (IS_COVER_LOCATION_VALID(bVar31))
					{
						Function_207(bLocal_822[bParam0]);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_822[bParam0], bVar31, -1.0f, 1086324736);
					}
				}
				break;
			
			case 0x00000015:
				break;
			
			case 0x00000016:
				Function_402(bParam0);
				break;
			
			default:
				break;
		}
	}
	else if (iLocal_903[bParam0] != 0 || iLocal_903[bParam0] != 22)
	{
		iLocal_903[bParam0] = 23;
	}
	return;
}

void Function_402(int iParam0) //Position: 0x12DC0 / 77248
{
	if (IS_ACTOR_RIDING(bLocal_822[iParam0]))
	{
		if (bLocal_506 == 0)
		{
		}
		else if (bLocal_506 == 1)
		{
		}
		else
		{
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[iParam0], false);
			iLocal_903[iParam0] = 16;
		}
	}
	else if (GET_TASK_STATUS(bLocal_822[iParam0], 11) == 1)
	{
	}
	else if (Function_224(GET_ACTORS_HORSE(bLocal_822[iParam0])))
	{
		if (Function_224(GET_RIDER(GET_ACTORS_HORSE(bLocal_822[iParam0]))))
		{
			Function_207(bLocal_822[iParam0]);
			Function_403(bLocal_822[iParam0]);
		}
		else
		{
			Function_207(bLocal_822[iParam0]);
			TASK_MOUNT(bLocal_822[iParam0], GET_ACTORS_HORSE(bLocal_822[iParam0]), 0, 1, 4, 2147483647);
		}
	}
	else
	{
		Function_207(bLocal_822[iParam0]);
		Function_403(bLocal_822[iParam0]);
	}
	return;
}

int Function_403(bool bParam0) //Position: 0x12E8A / 77450
{
	bool bVar0;
	
	Function_327(bParam0);
	bVar0 = LOCATE_ACTOR_OF_TYPE(Function_327(bParam0), 30.0f, 23, 4294967295);
	if (Function_224(bVar0))
	{
		if (IS_ACTOR_RIDEABLE(bVar0))
		{
			if (GET_RIDER(bVar0) == "")
			{
				Function_207(bParam0);
				TASK_MOUNT(bParam0, bVar0, 0, 1, 4, 2147483647);
				SET_ACTORS_HORSE(bParam0, bVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_404(bool bParam0) //Position: 0x12EDA / 77530
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_405(bool bParam0) //Position: 0x12EE8 / 77544
{
	var uVar0;
	
	Function_207(bLocal_822[bParam0]);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_822[bParam0], 0);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[bParam0], true);
	bLocal_801 = TASK_SEQUENCE_OPEN();
	GET_OBJECT_POSITION((*&Local_5 + 1324)[bParam0], &uVar0);
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_GO_TO_COORD(false, &uVar0, 2);
	TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_822[bParam0], bLocal_801);
	TASK_SEQUENCE_RELEASE(bLocal_801, 1);
	iLocal_903[bParam0] = 10;
	return;
}

void Function_406(bool bParam0) //Position: 0x12F63 / 77667
{
	if (SQUAD_IS_VALID(Local_5.f_436))
	{
		if (Function_224(bLocal_814))
		{
			AI_IGNORE_ACTOR(bLocal_814);
			Function_405(bParam0);
		}
		Function_407(Local_5.f_436, bLocal_814, 2);
	}
	return;
}

void Function_407(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12F95 / 77717
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

bool Function_408() //Position: 0x12FDA / 77786
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_5.f_540) < 0)
	{
		return 1;
	}
	return 0;
}

bool Function_409(bool bParam0, bool bParam1, float fParam2) //Position: 0x12FEF / 77807
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_410(StackVal, StackVal, bParam0, vVar0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_410(bool bParam0, vector3 vParam1) //Position: 0x13082 / 77954
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_398(bParam0);
		vVar0 = { StackVal, StackVal, Function_398(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_411(bool bParam0, bool bParam1) //Position: 0x130FC / 78076
{
	bool bVar0;
	bool bVar1;
	
	if (bParam1)
	{
		bVar1 = (*&Local_5 + 924)[5];
	}
	else
	{
		bVar0 = Local_5.f_1948;
		bVar1 = (*&Local_5 + 968)[0];
	}
	if (bLocal_822[bParam0] == bLocal_820)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_822[bParam0], bVar1))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_822[bParam0]);
			CLEAR_ACTOR_MAX_SPEED(bLocal_822[bParam0]);
			CLEAR_ACTOR_MIN_SPEED(bLocal_822[bParam0]);
			if (bParam1)
			{
			}
			else
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822[bParam0]);
				Function_413(bParam0);
			}
		}
		else if (bParam1)
		{
		}
		else
		{
			if (IS_ACTOR_RIDING(bLocal_822[bParam0]))
			{
				if (GET_TASK_STATUS(bLocal_822[bParam0], 72) != 1)
				{
					TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_822[bParam0], Global_34573, bVar0, 10.0f, 1, 2.0f);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_822[bParam0]);
					iLocal_900 = 1;
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822[bParam0], Global_34573, 25.0f, 10.0f, 20.0f);
				}
			}
			else
			{
				CLEAR_ACTOR_MAX_SPEED(bLocal_822[bParam0]);
				CLEAR_ACTOR_MIN_SPEED(bLocal_822[bParam0]);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_822[bParam0]);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[bParam0], true);
				iLocal_903[bParam0] = 22;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 924)[8]))
			{
				if (iLocal_900)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822[bParam0]);
					iLocal_900 = 0;
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[22]))
			{
				if (!iLocal_900)
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822[bParam0], Global_34573, 25.0f, 10.0f, 20.0f);
					iLocal_900 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[22]))
			{
				if (iLocal_900)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822[bParam0]);
					iLocal_900 = 0;
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 924)[8]))
			{
				if (!iLocal_900)
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_822[bParam0], Global_34573, 25.0f, 10.0f, 20.0f);
					iLocal_900 = 1;
				}
			}
		}
	}
	else if (IS_ACTOR_IN_VOLUME(bLocal_822[bParam0], bVar1))
	{
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_822[bParam0]);
		if (bParam1)
		{
			Function_412(bParam0);
		}
		else
		{
			Function_413(bParam0);
		}
	}
	else if (IS_ACTOR_RIDING(bLocal_822[bParam0]))
	{
		if (GET_TASK_STATUS(bLocal_822[bParam0], 72) == 1)
		{
		}
	}
	return;
}

void Function_412(int iParam0) //Position: 0x13330 / 78640
{
	var uVar0;
	bool bVar3;
	
	CLEAR_ACTOR_MAX_SPEED(bLocal_822[iParam0]);
	CLEAR_ACTOR_MIN_SPEED(bLocal_822[iParam0]);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_822[iParam0], true);
	bVar3 = RAND_FLOAT_RANGE(0.0f, 2.0f);
	GET_OBJECT_POSITION((*&Local_5 + 1268)[iParam0], &uVar0);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_822[iParam0]);
	MEMORY_PREFER_RIDING(bLocal_822[iParam0], false);
	Function_207(bLocal_822[iParam0]);
	bLocal_801 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bVar3, 0, 0);
	TASK_DISMOUNT(false, 1);
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_GO_TO_COORD(false, &uVar0, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_822[iParam0], bLocal_801);
	TASK_SEQUENCE_RELEASE(bLocal_801, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_822[iParam0], 0);
	iLocal_903[iParam0] = 2;
	return;
}

void Function_413(int iParam0) //Position: 0x133D3 / 78803
{
	Function_207(bLocal_822[iParam0]);
	bLocal_801 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
	TASK_DISMOUNT(false, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_5.f_1876), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_822[iParam0], bLocal_801);
	TASK_SEQUENCE_RELEASE(bLocal_801, 1);
	Function_380(iParam0);
	iLocal_903[iParam0] = 17;
	return;
}

void Function_414() //Position: 0x13430 / 78896
{
	int iVar0;
	vector3 vVar1;
	int iVar7;
	
	if (Function_356(&iLocal_672, 0,5f))
	{
		iVar0 = 0;
		Function_360(0);
		if (Function_224(bLocal_611))
		{
			if (!IS_ACTOR_MOUNTED(bLocal_611))
			{
				if (GET_TASK_STATUS(bLocal_611, 57) != 1)
				{
					TASK_WANDER_IN_VOLUME(bLocal_611, (*&Local_5 + 968)[19], -1.0f);
				}
			}
		}
		if (Function_224(bLocal_821))
		{
			if (!IS_ACTOR_MOUNTED(bLocal_821))
			{
				if (GET_TASK_STATUS(bLocal_821, 57) != 1)
				{
					TASK_WANDER_IN_VOLUME(bLocal_821, (*&Local_5 + 968)[19], -1.0f);
				}
			}
		}
		iVar7 = 0;
		while (iVar7 <= 6)
		{
			if (Function_224(Local_934[iVar74]))
			{
				Function_415(&(Local_934[iVar74]));
			}
			else
			{
				Local_934[iVar74].f_4 = 12;
			}
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 3)
		{
			if (Function_224(Local_959[iVar74]))
			{
				Function_415(&(Local_959[iVar74]));
			}
			else
			{
				Local_959[iVar74].f_4 = 12;
			}
			iVar7++;
		}
		if (iLocal_868 == 0)
		{
			iVar7 = 0;
			while (iVar7 <= 5)
			{
				if (Function_224(bLocal_872[iVar7]))
				{
					Function_207(bLocal_872[iVar7]);
					if (iVar7 == 0)
					{
						bLocal_801 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_5.f_1952, 3, 1, 0, 1, false);
						TASK_FLEE_ACTOR(false, Global_34573, 150.0f, -1.0f, 1, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_872[iVar7], bLocal_801);
						TASK_SEQUENCE_RELEASE(bLocal_801, 1);
					}
					else
					{
						Function_234((*&Local_5 + 1692)[0]);
						vVar1 = { StackVal, StackVal, Function_234((*&Local_5 + 1692)[0]) };
						bLocal_801 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, &vVar1, 3);
						TASK_FLEE_ACTOR(false, Global_34573, 150.0f, -1.0f, 1, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_872[iVar7], bLocal_801);
						TASK_SEQUENCE_RELEASE(bLocal_801, 1);
					}
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_872[iVar7], (*&Local_5 + 968)[6], 3, 1);
				}
				iVar7++;
			}
			iLocal_868 = 1;
		}
		Function_293(&iLocal_672);
	}
	return;
}

void Function_415(int iParam0) //Position: 0x135ED / 79341
{
	bool bVar0;
	var uVar1;
	var uVar4;
	vector3 vVar7;
	vector3 vVar10;
	var uVar13;
	
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!Function_224(bLocal_863[StackVal]))
			{
				if (GET_TASK_STATUS(*iParam0, 19) == 1)
				{
				}
				else
				{
					Function_346(*iParam0);
					if (DECOR_CHECK_EXIST(bLocal_498, "sepulcroshootout"))
					{
						Function_207(*iParam0);
						TASK_KILL_CHAR(*iParam0, Global_34573);
						iParam0->f_4 = 3;
					}
					else
					{
						Function_207(*iParam0);
						TASK_STAND_STILL(*iParam0, -1.0f, 0, 0);
						iParam0->f_4 = 12;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_421(*iParam0, iParam0->f_12) > 3.0f)
			{
				Function_207(*iParam0);
				GET_OBJECT_POSITION(iParam0->f_12, &uVar1);
				bVar0 = FIND_NEAREST_COVER_LOCATION(&uVar1, 2.0f, 140.0f, 100.0f, 7);
				if (IS_COVER_LOCATION_VALID(bVar0))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER(*iParam0, bVar0, -1.0f, 1086324736);
				}
				else
				{
					TASK_SHOOT_ENEMIES_FROM_POSITION(*iParam0, &uVar1, 130.0f, -1.0f);
				}
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_ALIVE(Local_934[44]))
			{
				SET_ACTOR_VISION_XRAY(bLocal_820, true);
				MEMORY_ALLOW_SHOOTING(bLocal_820, true);
				Function_293(&(vLocal_684[43]));
				iLocal_868 = 0;
				Function_420(&Local_934, 7);
			}
			break;
		
		case 0x00000006:
			if (!DECOR_CHECK_EXIST(*iParam0, "CasaBlipped"))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*iParam0)))
				{
					Function_419(*iParam0);
					MEMORY_ALLOW_SHOOTING(*iParam0, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(*iParam0, 0);
					ACTOR_PUT_WEAPON_IN_HAND(*iParam0, 9, 0);
				}
				else
				{
					DECOR_SET_BOOL(*iParam0, "CasaBlipped", true);
				}
			}
			else if (IS_ACTOR_ALIVE(bLocal_872[4]))
			{
				if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(bLocal_872[4]))
				{
					SET_ACTOR_ONE_SHOT_DEATH(bLocal_872[4], true);
				}
				if (!IS_ACTOR_IN_VOLUME(bLocal_872[4], (*&Local_5 + 968)[9]))
				{
					if (GET_TASK_STATUS(bLocal_872[4], 64) != 1)
					{
						GET_OBJECT_POSITION((*&Local_5 + 968)[9], &uVar4);
						TASK_GO_TO_COORD_NONSTOP(bLocal_872[4], &uVar4, 3, 3212836864);
					}
				}
				else
				{
					if (GET_TASK_STATUS(bLocal_872[4], 6) != 1)
					{
						TASK_STAND_STILL(bLocal_872[4], -1.0f, 0, 0);
					}
					Function_327(*iParam0);
					Function_327(bLocal_872[4]);
					vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_327(bLocal_872[4]), Function_327(*iParam0), StackVal) };
					vVar10 = { StackVal, StackVal, vVar7 };
					VNORMALIZE(&vVar10);
					VSCALE(&vVar10, 1,2f);
					Function_327(bLocal_872[4]);
					vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, Function_327(bLocal_872[4]), StackVal) };
					Function_418(StackVal, StackVal, bLocal_872[4], vVar7, *iParam0, "head");
				}
			}
			else
			{
				SET_ACTOR_VISION_XRAY(bLocal_820, true);
				MEMORY_ALLOW_SHOOTING(bLocal_820, true);
				Function_293(&(vLocal_684[43]));
				iLocal_868 = 0;
				Function_420(&Local_934, 7);
			}
			break;
		
		case 0x00000007:
			if (!DECOR_CHECK_EXIST(*iParam0, "CasaBlipped"))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*iParam0)))
				{
					Function_419(*iParam0);
					MEMORY_ALLOW_SHOOTING(*iParam0, true);
				}
				else
				{
					DECOR_SET_BOOL(*iParam0, "CasaBlipped", true);
				}
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[10]))
			{
				if (GET_TASK_STATUS(*iParam0, 27) == 1 && GET_TASK_STATUS(*iParam0, 43) == 1)
				{
					TASK_SHOOT_FROM_COVER(*iParam0, Global_34573, GET_COVER_LOCATION_FROM_OBJECT(iParam0->f_12), -1.0f, 1086324736);
				}
			}
			else if (Function_356(&iLocal_675, 0,2f))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(*iParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(*iParam0, (*&Local_5 + 968)[6], 2, true);
				Function_293(&iLocal_675);
				TASK_KILL_CHAR(*iParam0, Global_34573);
				iParam0->f_4 = 9;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_ALIVE(bLocal_820))
			{
				if (GET_TASK_STATUS(*iParam0, 8) != 1)
				{
					GET_OBJECT_POSITION(iParam0->f_12, &uVar13);
					TASK_SHOOT_FROM_POSITION(*iParam0, bLocal_820, &uVar13);
				}
			}
			else
			{
				iParam0->f_4 = 7;
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[10]))
			{
				if (GET_TASK_STATUS(bLocal_611, 83) == 1 && GET_TASK_STATUS(bLocal_611, 50) == 1)
				{
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				}
			}
			else
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(*iParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(*iParam0, (*&Local_5 + 968)[20], 2, true);
				TASK_KILL_CHAR(*iParam0, Global_34573);
				iParam0->f_4 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_356(&iLocal_675, 0,4f))
			{
				if (ACTORS_IN_RANGE(*iParam0, Global_34573, 40.0f))
				{
					if (!Function_416(19, Global_34573, 1))
					{
						if (GET_TASK_STATUS(*iParam0, 5) != 1)
						{
							TASK_KILL_CHAR(*iParam0, Global_34573);
						}
						Function_293(&iLocal_675);
					}
				}
				else
				{
					if (GET_TASK_STATUS(*iParam0, 5) != 1)
					{
						TASK_KILL_CHAR(*iParam0, Global_34573);
					}
					Function_293(&iLocal_675);
				}
			}
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	return;
}

bool Function_416(int iParam0, bool bParam1, bool bParam2) //Position: 0x13A7B / 80507
{
	bool bVar0;
	vector3 vVar1;
	
	if (GET_OBJECT_TYPE(bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		return 0;
	}
	if (bParam2)
	{
		if (!IS_ITERATOR_VALID(Global_26118))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(bParam1, &vVar1);
		Function_417(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(Global_26118, 15);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar0)) == iParam0)
			{
				return 1;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
		Function_417(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, Global_6289);
		ITERATE_ON_OBJECT_TYPE(Global_26118, 24);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))) == iParam0)
				{
					return 1;
				}
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
	}
	return 0;
}

int Function_417(bool bParam0) //Position: 0x13BEE / 80878
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_81());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_81());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_418(bool bParam0, vector3 vParam1, var uParam4, bool bParam5) //Position: 0x13C1F / 80927
{
	vector3 vVar0;
	bool bVar3;
	
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "spine03";
	}
	GET_OBJECT_NAMED_BONE_POSITION(bParam0, bParam5, &vVar0);
	PRINTSTRING("fake shoot: origin = ");
	PRINTVECTOR(vParam1);
	PRINTNL();
	PRINTSTRING("taget point = ");
	PRINTVECTOR(vVar0);
	PRINTNL();
	bVar3 = uParam4;
	if (!IS_ACTOR_VALID(bVar3))
	{
		bVar3 = Global_34573;
	}
	FIRE_PROJECTILE(bVar3, "base_pistol", 0,0001f, &vParam1, &vVar0);
}

void Function_419(bool bParam0) //Position: 0x13CB7 / 81079
{
	if (!DECOR_CHECK_EXIST(bParam0, "CasaBlipped"))
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
			SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(bParam0), bLocal_497);
			DECOR_SET_BOOL(bParam0, "CasaBlipped", true);
		}
	}
	return;
}

void Function_420(var uParam0, int iParam1) //Position: 0x13D0C / 81164
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		uParam0[iVar04]->f_4 = iParam1;
		iVar0++;
	}
	return;
}

float Function_421(bool bParam0, bool bParam1) //Position: 0x13D30 / 81200
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_398(bParam0);
			vVar0 = { StackVal, StackVal, Function_398(bParam0) };
			Function_422(bParam1);
			vVar3 = { StackVal, StackVal, Function_422(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_422(bool bParam0) //Position: 0x13DD0 / 81360
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

void Function_423(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6, bool bParam7) //Position: 0x13E3C / 81468
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573)) <= 0.0f && GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573)) >= GET_CURRENT_GAME_TIME())
	{
		fVar2 = (GET_CURRENT_GAME_TIME() - GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573)));
	}
	else
	{
		fVar1 = (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(GET_PLAYER_ACTOR(0)));
		fVar0 = (GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(GET_PLAYER_ACTOR(0)));
		if (fVar1 > fVar0)
		{
			fVar2 = fVar1;
		}
		else
		{
			fVar2 = fVar0;
		}
	}
	if (fVar2 < fParam2)
	{
		fVar4 = ((fVar2 - fParam2) / fParam3);
		if (bParam6)
		{
			fVar3 = (fParam4 - fVar4);
		}
		else
		{
			fVar3 = (fParam5 + fVar4);
		}
		if (fVar3 < fParam4)
		{
			fVar3 = fParam4;
		}
		else if (fVar3 > fParam5)
		{
			fVar3 = fParam5;
		}
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(iParam0, iParam1, fVar3);
		if (!bParam7)
		{
			SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(iParam1, iParam0, fVar3);
		}
	}
}

int Function_424(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x13EFA / 81658
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_243(bParam4);
		*iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_430(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_355(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_429(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_428(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_428(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_430(64))
	{
		Function_427(64);
		if (!Function_426())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_425();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_428(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_428(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_425() //Position: 0x1406F / 82031
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

bool Function_426() //Position: 0x1409A / 82074
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

void Function_427(bool bParam0) //Position: 0x140DE / 82142
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_25(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_428(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x14141 / 82241
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

void Function_429(bool bParam0) //Position: 0x141E2 / 82402
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_104(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_430(bool bParam0) //Position: 0x14245 / 82501
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_177(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_431() //Position: 0x1428C / 82572
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_507 < 4 && iLocal_507 > 105)
	{
		Function_480();
		if (!iLocal_806)
		{
			if (Function_224(Global_34573))
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					Function_357(&uLocal_527, 6, 0, 4294967295, 4294967295);
					iLocal_806 = 1;
				}
			}
		}
	}
	switch (iLocal_507)
	{
		case 0x00000000:
			Function_390(0);
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			iLocal_805 = Function_332();
			Function_479(&Global_76849, 128);
			if (SQUAD_IS_VALID(Local_5.f_540))
			{
				Function_478(Local_5.f_540);
				Function_477(&Local_5 + 540);
			}
			if (Function_224(bLocal_611))
			{
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
				Function_328(bLocal_611, (*&Local_5 + 1296)[3], 1, 1, 1);
			}
			else
			{
				bLocal_611 = Function_308(1, 1, 0, 0, 0, 0, 1, 0);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
				Function_328(bLocal_611, (*&Local_5 + 1296)[3], 1, 1, 1);
			}
			if (!SQUAD_IS_VALID(Local_5.f_556))
			{
				Function_475();
			}
			if (Function_224(bLocal_814))
			{
				if (!iLocal_613[1])
				{
					Function_328(bLocal_814, (*&Local_5 + 1296)[2], 1, 1, 1);
					Function_328(Global_34573, (*&Local_5 + 1296)[0], 1, 1, 1);
				}
				if (IS_ACTOR_HOGTIED(bLocal_814))
				{
					FREE_FROM_HOGTIE(bLocal_814);
				}
				DELETE_ACCESSORY("WRIST_BIND", bLocal_814);
				DELETE_ACCESSORY("ANKLE_BIND", bLocal_814);
				AI_IGNORE_ACTOR(bLocal_814);
				SET_ACTOR_HEALTH(bLocal_814, GET_ACTOR_MAX_HEALTH(bLocal_814));
				SET_CRIPPLE_FLAG(bLocal_814, false);
				TASK_STAND_STILL(bLocal_814, -1.0f, 0, 0);
				DECOR_SET_INT(bLocal_814, "iAdditionalMoney", 100);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_814);
				if (!SQUAD_IS_VALID(Local_5.f_436))
				{
					Function_470(1);
				}
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					if (Function_224(bLocal_822[iVar0]))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_822[iVar0], 0);
						MEMORY_CLEAR_ALL(bLocal_822[iVar0]);
						Function_207(bLocal_822[iVar0]);
						TASK_STAND_STILL(bLocal_822[iVar0], -1.0f, 0, 0);
						Function_328(bLocal_822[iVar0], (*&Local_5 + 1324)[iVar0], 1, 1, 1);
						SET_ACTOR_POSTURE(bLocal_822[iVar0], 0);
						Function_469(bLocal_822[iVar0], 1, 1);
						MEMORY_PREFER_RIDING(bLocal_822[iVar0], false);
						if (Function_224(bLocal_814))
						{
							Function_207(bLocal_822[iVar0]);
							TASK_POINT_GUN_AT_OBJECT(bLocal_822[iVar0], bLocal_814, -1.0f, 1);
							TASK_PRIORITY_SET(bLocal_822[iVar0], true);
						}
					}
					iVar0++;
				}
			}
			if (Function_224(bLocal_820))
			{
				SET_ACTOR_IS_COMPANION(bLocal_820, 0);
				MEMORY_PREFER_RIDING(bLocal_820, false);
				if (Function_224(bLocal_821))
				{
					Function_328(bLocal_821, (*&Local_5 + 1352)[4], 1, 1, 1);
					TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_821, 0);
					SET_ACTORS_HORSE(bLocal_820, bLocal_821);
					SET_ACTOR_CAN_BE_TARGETED(bLocal_821, false);
				}
				else
				{
					Function_468();
					bLocal_821 = (*&Local_5 + 440)[42];
					bLocal_821 = bLocal_821;
					SET_ACTORS_HORSE(bLocal_820, bLocal_821);
					Function_328(bLocal_821, (*&Local_5 + 1352)[4], 1, 1, 1);
					TASK_STAND_STILL(bLocal_821, -1.0f, 0, 0);
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_821, 0);
					SET_ACTOR_CAN_BE_TARGETED(bLocal_821, false);
				}
			}
			if (SQUAD_IS_VALID(Local_5.f_436))
			{
				Function_371(&(Local_744[117]), Local_5.f_436, "RebelSoldier", 1, 0x5f5e100, 1);
				Function_367(&(Local_744[117]), 2);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(12);
			Function_234((*&Local_5 + 1296)[0]);
			bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1296)[0]), 0, 1, 1);
			if (iLocal_613[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_466();
				Function_234((*&Local_5 + 1296)[0]);
				bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1296)[0]), 0, 1, 1);
				if (!Function_330(bLocal_612))
				{
					Function_329(&Local_499);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_507 = 1;
			}
			else
			{
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_330(bLocal_612) || bLocal_612 != 4294967295))
			{
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_464(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_499, bLocal_506))
			{
				FIRE_STOP_ALL_FIRES();
				iLocal_507 = 3;
			}
			else
			{
				Function_303();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_507 = 4;
			}
			Function_249(bLocal_506);
			Function_381(StackVal, StackVal, Function_249(bLocal_506), bLocal_506, Global_30633[2], Function_251(bLocal_506), 0);
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/Rebel02_CS03/Rebel02_CS03", &iLocal_508, &Local_499, &bLocal_506, 57614, 57424, 90361, 54512, 54014, 54007, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_507 = 4;
			}
			break;
		
		case 0x00000004:
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 1.0f);
			if (IS_ACTOR_VALID((*&Local_5 + 560)[02]))
			{
				TASK_BIRD_SOAR((*&Local_5 + 560)[02], -1.0f, 1106247680);
			}
			if (SQUAD_IS_VALID(Local_5.f_436))
			{
				Function_379(Local_5.f_436);
				Function_462(Local_5.f_436, 1);
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (Function_224(bLocal_822[iVar1]))
					{
						Function_469(bLocal_822[iVar1], 0, 1);
					}
					iVar1++;
				}
			}
			Function_377();
			Function_185(1);
			Function_460(1);
			Function_460(256);
			Function_357(&uLocal_527, 8, 0, 4294967295, 4294967295);
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 5;
			break;
		
		case 0x00000005:
			iLocal_703 = 0;
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			if (Function_224(Global_34573))
			{
				Function_207(Global_34573);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 6;
			if (Function_224(Global_34573))
			{
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			}
			Function_357(&uLocal_527, 0, 0, 4294967295, 4294967295);
			iLocal_806 = 0;
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_224(bLocal_814))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_814)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_814, 393, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_814), GET_ACTOR_ENUM_STRING(bLocal_814));
				}
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_459();
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_808 = 0;
				Function_156("Rebel02_help_assasinate", 0x41200000, 1, 0, 2, 1, 0);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 0, -100.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 1, -100.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 2, -100.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 5, 0.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 6, 0.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 7, 0.0f);
				TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bLocal_814, 8, 0.0f);
				CLEAR_LAST_HIT(bLocal_814);
				iLocal_507 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_224(bLocal_814))
			{
				iVar2 = 8;
				if (GET_LAST_HIT_ZONE(bLocal_814, &iVar2))
				{
					if (iVar2 != 0 || iVar2 != 2)
					{
						SET_ACTOR_HEALTH(bLocal_814, 0.0f);
						SET_ACTOR_ONE_SHOT_DEATH(bLocal_814, true);
					}
				}
				if (Function_456(bLocal_814, Global_34573, 10.0f))
				{
					if (Function_356(&iLocal_660, 9.0f))
					{
						if (iLocal_808)
						{
							Function_459();
							iLocal_808 = 0;
						}
						else
						{
							Function_455();
							iLocal_808 = 1;
						}
						Function_293(&iLocal_660);
					}
				}
				else
				{
					Function_454();
					SET_ACTOR_ONE_SHOT_DEATH(bLocal_814, true);
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					iLocal_507 = 8;
				}
			}
			else
			{
				if (Function_453(bLocal_814, Global_34573))
				{
					Function_452();
					bLocal_812 = true;
					Function_154(&Global_76849, 128);
				}
				SET_ACTOR_ONE_SHOT_DEATH(bLocal_814, true);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_224(bLocal_814))
			{
				if (Function_356(&iLocal_660, 4.0f))
				{
					Function_450();
					Function_293(&iLocal_660);
				}
			}
			else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_812)
				{
					Function_449();
				}
				else
				{
					Function_448();
				}
				SET_MOVER_FROZEN(bLocal_814, false);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_447();
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_354("Rebel02_obj_RideCasa");
				iLocal_903[4] = 22;
				bLocal_804 = Function_446(bLocal_498, Function_81(), (*&Local_5 + 968)[14], Global_34573, 1, 330, 4294967295, 0, 0, 1);
				ADD_BLIP_FOR_OBJECT(bLocal_804, 330, 0f, 2, 0);
				Function_443((*&Local_5 + 968)[14]);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				Function_181(Global_30707[2]);
				iLocal_808 = 0;
				iLocal_901 = 11;
				iLocal_507 = 11;
				MEMORY_PREFER_RIDING(bLocal_820, true);
				SET_FACTIONS_STATUS_TWO_WAY(20, 19, 2);
			}
			break;
		
		case 0x0000000B:
			Function_438();
			Function_424(&bLocal_700, (*&Local_5 + 968)[12], (*&Local_5 + 968)[13], "Rebel02_return_casapath", "Rebel02_fail_casapath", &bLocal_516, 0, 0, 0, 330, 1);
			if (Function_437(Global_34573, (*&Local_5 + 968)[6], 150.0f))
			{
				if (!SQUAD_IS_VALID(Local_5.f_668))
				{
					Function_436((*&Local_5 + 968)[6]);
					if (!STREAMING_ARE_BOUNDS_LOADED(Function_436((*&Local_5 + 968)[6]), 100.0f))
					{
						Function_436((*&Local_5 + 968)[6]);
						STREAMING_LOAD_BOUNDS(Function_436((*&Local_5 + 968)[6]), 100.0f, 1);
					}
					else if (Global_29006 == Global_30707[2])
					{
						if (IS_DOOR_VALID(Function_361("casaMadrugada", "whorehouse", 1)) && IS_DOOR_VALID(Function_361("casaMadrugada", "cantina", 1)))
						{
							Function_359();
						}
					}
				}
				else
				{
					Function_414();
				}
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 968)[6]))
				{
					Function_228();
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					Function_52();
					if (IS_ACTOR_RIDING(Global_34573))
					{
						Function_434(Global_34573, 0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						if (Function_224(GET_MOUNT(Global_34573)))
						{
							bLocal_611 = GET_MOUNT(Global_34573);
							Function_207(bLocal_611);
							TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
							Function_207(Global_34573);
							TASK_DISMOUNT(Global_34573, 1);
						}
						iLocal_507 = 12;
					}
					else
					{
						Function_293(&iLocal_660);
						Function_293(&iLocal_666);
						Function_52();
						iLocal_507 = 13;
					}
				}
				else if (Function_433())
				{
					Function_228();
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					Function_52();
					if (IS_ACTOR_RIDING(Global_34573))
					{
						Function_434(Global_34573, 0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						if (Function_224(GET_MOUNT(Global_34573)))
						{
							bLocal_611 = GET_MOUNT(Global_34573);
							Function_207(bLocal_611);
							TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
							Function_207(Global_34573);
							TASK_DISMOUNT(Global_34573, 1);
						}
						iLocal_507 = 12;
					}
					else
					{
						Function_293(&iLocal_660);
						Function_293(&iLocal_666);
						Function_52();
						iLocal_507 = 13;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (GET_TASK_STATUS(Global_34573, 12) != 1)
				{
					TASK_DISMOUNT(Global_34573, 1);
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (Function_224(bLocal_611))
				{
					Function_207(bLocal_611);
					TASK_WANDER_IN_VOLUME(bLocal_611, (*&Local_5 + 968)[19], -1.0f);
				}
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				Function_52();
				iLocal_507 = 13;
			}
			break;
		
		case 0x0000000D:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			if (Function_224(bLocal_820))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 20.0f))
				{
					Function_432();
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					Function_52();
					iLocal_507 = 106;
				}
				else
				{
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					Function_52();
					iLocal_507 = 106;
				}
			}
			else
			{
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				Function_52();
				iLocal_507 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_613[2] = 1;
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			bLocal_506 = 3;
			iLocal_507 = 0;
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_5.f_1864)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_5.f_1864), false);
			}
			if (Function_224(bLocal_820))
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_820);
			}
			STREAMING_UNLOAD_BOUNDS();
			break;
	}
	return;
}

void Function_432() //Position: 0x14E34 / 85556
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_CasaQuiet_v1_AA", "Rebel02_CasaQuiet_v1_AA", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_CasaQuiet_v1_AB", "Rebel02_CasaQuiet_v1_AB", false, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_433() //Position: 0x14EC9 / 85705
{
	if (IS_OBJECT_VALID(bLocal_804))
	{
		if (GATEWAY_UPDATE(bLocal_804))
		{
			return 1;
		}
	}
	return 0;
}

void Function_434(bool bParam0, bool bParam1) //Position: 0x14EE4 / 85732
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
	else if (!bParam1 || Function_435(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_435(bool bParam0, bool bParam1) //Position: 0x14F41 / 85825
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

vector3 Function_436(bool bParam0) //Position: 0x14F60 / 85856
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_437(bool bParam0, int iParam1, float fParam2) //Position: 0x14F71 / 85873
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_436(iParam1);
		Function_398(bParam0);
		if (VDIST(Function_436(iParam1), Function_398(bParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

void Function_438() //Position: 0x14FFB / 86011
{
	switch (iLocal_901)
	{
		case 0x0000000B:
			if (Function_356(&iLocal_666, 5.0f))
			{
				iLocal_901 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_157())
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 15.0f))
				{
					if (bLocal_812)
					{
						Function_442();
					}
					else
					{
						Function_441();
					}
					Function_357(&uLocal_527, 21, 0, 4294967295, 4294967295);
					iLocal_901 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_820, 40.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else
			{
				Function_293(&iLocal_666);
				iLocal_901 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_356(&iLocal_666, 10.0f))
			{
				iLocal_901 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!Function_157())
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 15.0f))
				{
					Function_440();
					iLocal_901 = 16;
				}
			}
			break;
		
		case 0x00000010:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_820, 40.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else
			{
				Function_293(&iLocal_666);
				iLocal_901 = 17;
			}
			break;
		
		case 0x00000011:
			break;
		
		default:
			LOG_ERROR("invalid stage three m_eConvState");
			break;
	}
	Function_439(bLocal_820, "Rebel02_RebelJonThrownOffHors", "Rebel02_RebelJonShotsRand", "Rebel02_RebelJonGetsOffHors", "Rebel02_RebelJonNoGetBakOn", "Rebel02_RebelJonStopsHors", "Rebel02_RebelJon2FarAhead", "Rebel02_RebelJon2FarBehind", "Rebel02_RebelJonRidesWrong");
	return;
}

void Function_439(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x1522F / 86575
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	var uVar17;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = "";
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	if (!Function_290(&iLocal_669))
	{
		Function_293(&iLocal_669);
	}
	else if (ACTORS_IN_RANGE(Global_34573, bParam0, 35.0f))
	{
		if (Function_356(&iLocal_669, 5.0f))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam2, bParam2, bVar0, iVar1, iVar2, 3, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
				}
			}
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam1, bParam1, bVar0, iVar1, iVar2, 3, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
				}
				else if (!iLocal_810)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam3, bParam3, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
					iLocal_810 = 1;
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam4, bParam4, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
				}
			}
			else
			{
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					iLocal_810 = 0;
					if (Function_435(GET_MOUNT(Global_34573), 0) > 0,5f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam5, bParam5, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
						Function_293(&iLocal_669);
					}
				}
				Function_327(Global_34573);
				vVar9 = { StackVal, StackVal, Function_327(Global_34573) };
				Function_327(bParam0);
				vVar12 = { StackVal, StackVal, Function_327(bParam0) };
				ESTIMATE_DISTANCE_ALONG_PATH(Local_5.f_1916, &vVar12, &fVar16, &uVar17);
				ESTIMATE_DISTANCE_ALONG_PATH(Local_5.f_1916, &vVar9, &fVar15, &uVar17);
				if ((fVar15 - fVar16) < 20.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam6, bParam6, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
				}
				else if ((fVar15 - fVar16) > -27.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam7, bParam7, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
				}
				else if (!ACTORS_IN_RANGE(Global_34573, bParam0, 30.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam8, bParam8, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
					Function_293(&iLocal_669);
				}
			}
		}
	}
}

void Function_440() //Position: 0x15462 / 87138
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AA", "Rebel02_RebelBantMad_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v2_AB", "Rebel02_RebelBantMad_v2_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AC", "Rebel02_RebelBantMad_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v2_AD", "Rebel02_RebelBantMad_v2_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AE1", "Rebel02_RebelBantMad_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v2_AE2", "Rebel02_RebelBantMad_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v2_AF", "Rebel02_RebelBantMad_v2_AF", 4, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441() //Position: 0x15656 / 87638
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AA", "Rebel02_BantMadNoKill_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_BantMadNoKill_v1_AB", "Rebel02_BantMadNoKill_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AC", "Rebel02_BantMadNoKill_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_BantMadNoKill_v1_AD", "Rebel02_BantMadNoKill_v1_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AE1", "Rebel02_BantMadNoKill_v1_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_BantMadNoKill_v1_AE2", "Rebel02_BantMadNoKill_v1_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_BantMadNoKill_v1_AF", "Rebel02_BantMadNoKill_v1_AF", 4, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_442() //Position: 0x15858 / 88152
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AA", "Rebel02_RebelBantMad_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v1_AB", "Rebel02_RebelBantMad_v1_AB", 4, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AC", "Rebel02_RebelBantMad_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v1_AD", "Rebel02_RebelBantMad_v1_AD", 4, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AE1", "Rebel02_RebelBantMad_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBantMad_v1_AE2", "Rebel02_RebelBantMad_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBantMad_v1_AF", "Rebel02_RebelBantMad_v1_AF", 4, 1, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443(bool bParam0) //Position: 0x15A4C / 88652
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	Function_444(StackVal, StackVal, vVar0, 0, 393264, 1);
	return;
}

void Function_444(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x15A66 / 88678
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = iParam3;
	Global_28185.f_16 = iParam4;
	if (iParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (iParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_445(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_445(bool bParam0) //Position: 0x15B22 / 88866
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

bool Function_446(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x15B62 / 88930
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

void Function_447() //Position: 0x15BDF / 89055
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelSaysLesGo", "Rebel02_RebelSaysLesGo", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_448() //Position: 0x15C35 / 89141
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelJonKillsComen", "Rebel02_RebelJonKillsComen", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x15C93 / 89235
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelJonKills", "Rebel02_RebelJonKills", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_450() //Position: 0x15CE7 / 89319
{
	int iVar0;
	var uVar1;
	var uVar4;
	
	if (Function_224(bLocal_814))
	{
		if (SQUAD_IS_VALID(Local_5.f_556))
		{
			SQUAD_SET_FACTION(Local_5.f_556, 19);
		}
		if (SQUAD_IS_VALID(Local_5.f_436))
		{
			Function_407(Local_5.f_436, bLocal_814, 4);
		}
		AI_STOP_IGNORING_ACTORS();
		AI_CLEAR_DONT_HARM_ACTOR(bLocal_814);
		GET_POSITION(bLocal_814, &uVar4);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Function_224(bLocal_822[iVar0]))
			{
				MEMORY_ALLOW_SHOOTING(bLocal_822[iVar0], true);
				AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bLocal_822[iVar0], 1);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bLocal_822[iVar0], 0);
				Function_207(bLocal_822[iVar0]);
				GET_POSITION(bLocal_822[iVar0], &uVar1);
				bLocal_801 = TASK_SEQUENCE_OPEN();
				TASK_POINT_GUN_AT_OBJECT(false, bLocal_814, RAND_FLOAT_RANGE(0,1f, 0,25f), 1);
				if (bLocal_822[iVar0] == bLocal_820)
				{
					AI_SHOOT_TARGET_SET_BONE(bLocal_822[iVar0], bLocal_814, "neck");
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_822[iVar0], 31, -1.0f);
					TASK_SHOOT_FROM_POSITION(bLocal_822[iVar0], bLocal_814, &uVar1);
				}
				else
				{
					Function_451(bLocal_822[iVar0], 200.0f, -1.0f, -1.0f);
					AI_SHOOT_TARGET_SET_BONE(bLocal_822[iVar0], bLocal_814, "neck");
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_822[iVar0], 31, -1.0f);
					TASK_SHOOT_FROM_POSITION(bLocal_822[iVar0], bLocal_814, &uVar1);
					TASK_POINT_GUN_AT_OBJECT(false, bLocal_814, RAND_FLOAT_RANGE(0,5f, 1.0f), 1);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_822[iVar0], bLocal_801);
				TASK_SEQUENCE_RELEASE(bLocal_801, 1);
			}
			iVar0++;
		}
	}
	return;
}

void Function_451(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x15E4D / 89677
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

void Function_452() //Position: 0x15E94 / 89748
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_PlayerKillsDesanta", "Rebel02_PlayerKillsDesanta", 4, 1, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_453(bool bParam0, bool bParam1) //Position: 0x15EF2 / 89842
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_454() //Position: 0x15F23 / 89891
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_PlayaNoKillDeSanta", "Rebel02_PlayaNoKillDeSanta", 4, 1, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_455() //Position: 0x15F81 / 89985
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelWait4Kill", "Rebel02_RebelWait4Kill", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_456(bool bParam0, var uParam1, float fParam2) //Position: 0x15FD7 / 90071
{
	float fVar0;
	
	fVar0 = Function_457(bParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_457(bool bParam0, bool bParam1) //Position: 0x15FF4 / 90100
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_458(&uVar0, &uVar3);
	return iVar6;
}

var Function_458(var uParam0, bool bParam1) //Position: 0x16013 / 90131
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_459() //Position: 0x16031 / 90161
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_Pleads4Life", "Rebel02_Pleads4Life", false, 1, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460(int iParam0) //Position: 0x16080 / 90240
{
	Function_461(&Global_28842, iParam0);
	return;
}

void Function_461(var uParam0, int iParam1) //Position: 0x1608E / 90254
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_462(bool bParam0, bool bParam1) //Position: 0x160B1 / 90289
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

int Function_463() //Position: 0x160F9 / 90361
{
	switch (bLocal_506)
	{
		case 0x00000001:
			if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(bLocal_814))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_814);
			}
			if (!ACTOR_IS_HIDDEN_BY_CUTSCENE((*&Local_5 + 576)[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_5 + 576)[02]);
				LOG_ERROR("hide Gravedigger0 - SID_SECOND_STAGE");
			}
			switch (iLocal_819)
			{
				case 0x00000000:
					if (IS_ACTOR_VALID((*&Local_5 + 560)[02]))
					{
						TASK_USE_GRINGO((*&Local_5 + 560)[02], GET_GRINGO_FROM_OBJECT(Local_5.f_1872), "UseCase1", true, 1);
						iLocal_819 = 1;
					}
					break;
				
				case 0x00000001:
					return 1;
					break;
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_466();
			if (!ACTOR_IS_HIDDEN_BY_CUTSCENE(bLocal_814))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_814);
				LOG_ERROR("hide De Santa - SID_THIRD_STAGE");
			}
			return 1;
			break;
		
		default:
			LOG_ERROR("MISSING STAGE IN CUTSCENE_CUSTOM_FIRSTSHOT");
			Function_315();
			return 0;
			break;
	}
	return 0;
}

bool Function_464(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x16234 / 90676
{
	if (Function_465(&iParam0) == iParam7 || Function_386())
	{
		return 1;
	}
	return 0;
}

int Function_465(int iParam0) //Position: 0x16253 / 90707
{
	if (Function_295(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_466() //Position: 0x1626B / 90731
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (Function_224(bLocal_814))
	{
		if (GET_ACTOR_ENUM(bLocal_814) != 557)
		{
			GET_OBJECT_POSITION(bLocal_814, &vVar0);
			GET_OBJECT_ORIENTATION(bLocal_814, &vVar3);
			bVar6 = GET_OBJECT_OWNER(bLocal_814);
			DESTROY_ACTOR(bLocal_814);
			bLocal_814 = CREATE_ACTOR_IN_LAYOUT(bVar6, "DeSanta0Beaten", 557, vVar0, vVar3);
			TASK_STAND_STILL(bLocal_814, -1.0f, 0, 0);
			SET_ACTOR_PROOF(bLocal_814, 4096);
			SET_ALLOW_EXECUTE(bLocal_814, 0);
			MEMORY_REPORT_POSITION_AUTO(bLocal_814, Global_34573, true);
			AI_GOAL_LOOK_AT_ACTOR(bLocal_814, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
			FORCE_LOOK_AT_ACTOR(bLocal_814, Global_34573, -1.0f);
			SET_AMBIENT_VOICE_NAME(bLocal_814, "COMPANION_MEXICANHENCHMAN");
			Function_467(bLocal_814);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_814);
		}
	}
	return;
}

void Function_467(bool bParam0) //Position: 0x1633F / 90943
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_468() //Position: 0x16364 / 90980
{
	Local_5.f_484 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "SepulcroRebelHorses"));
	(*&Local_5 + 440)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "RebelHorse0", 984, -2275,753f, 21,83818f, 4944,088f, 0.0f, -41,25875f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 440)[02], Local_5.f_484);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 440)[02], false);
	ACCESSORIZE_HORSE((*&Local_5 + 440)[02], 3);
	TASK_STAND_STILL((*&Local_5 + 440)[02], -1.0f, 0, 0);
	(*&Local_5 + 440)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "RebelHorse1", 990, -2279,212f, 21,83815f, 4943,137f, 0.0f, -47,18135f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 440)[12], Local_5.f_484);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 440)[12], false);
	ACCESSORIZE_HORSE((*&Local_5 + 440)[12], 3);
	TASK_STAND_STILL((*&Local_5 + 440)[12], -1.0f, 0, 0);
	(*&Local_5 + 440)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "RebelHorse2", 988, -2278,378f, 21,83815f, 4950,349f, 0.0f, -36,06071f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 440)[22], Local_5.f_484);
	ACCESSORIZE_HORSE((*&Local_5 + 440)[22], 3);
	TASK_STAND_STILL((*&Local_5 + 440)[22], -1.0f, 0, 0);
	(*&Local_5 + 440)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "RebelHorse3", 977, -2284,309f, 21,83815f, 4947,354f, 0.0f, -61,27039f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 440)[32], Local_5.f_484);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 440)[32], false);
	ACCESSORIZE_HORSE((*&Local_5 + 440)[32], 3);
	TASK_STAND_STILL((*&Local_5 + 440)[32], -1.0f, 0, 0);
	(*&Local_5 + 440)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "DialogueRebelHorse0", 986, -2280.0f, 21.0f, 4948.0f, 0.0f, -31,58469f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 440)[42], Local_5.f_484);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 440)[42], false);
	ACCESSORIZE_HORSE((*&Local_5 + 440)[42], 3);
	TASK_STAND_STILL((*&Local_5 + 440)[42], -1.0f, 0, 0);
	return;
}

void Function_469(bool bParam0, bool bParam1, bool bParam2) //Position: 0x165A0 / 91552
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

void Function_470(bool bParam0) //Position: 0x1663A / 91706
{
	bool bVar0;
	
	bVar0 = false;
	Function_474();
	bVar0 = false;
	while (bVar0 <= 5)
	{
		bLocal_822[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_436, bVar0);
		if (Function_224(bLocal_822[bVar0]))
		{
			SET_ACTOR_VISION_XRAY(bLocal_822[bVar0], false);
			SET_ACTOR_CAN_BE_TARGETED(bLocal_822[bVar0], false);
			Function_473(bLocal_822[bVar0]);
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_822[bVar0], false);
		}
		iLocal_903[bVar0] = 23;
		bVar0++;
	}
	bLocal_820 = bLocal_822[4];
	if (Function_224(bLocal_820))
	{
		SET_ACTOR_IS_COMPANION(bLocal_820, 1);
	}
	if (bParam0)
	{
		Function_468();
		bVar0 = false;
		while (bVar0 <= 5)
		{
			bLocal_828[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_484, bVar0);
			bVar0++;
		}
		Function_472();
		Function_471();
		bLocal_821 = bLocal_828[4];
	}
	SQUAD_SET_FACTION(Local_5.f_436, 20);
	Function_462(Local_5.f_436, 0);
	Function_371(&(Local_744[117]), Local_5.f_436, "RebelSoldier", 1, 0x5f5e100, 1);
	Function_367(&(Local_744[117]), 2);
	return;
}

void Function_471() //Position: 0x16740 / 91968
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Function_224(bLocal_822[iVar0]))
		{
			if (Function_224(bLocal_828[iVar0]))
			{
				SET_ACTORS_HORSE(bLocal_822[iVar0], bLocal_828[iVar0]);
				SET_ACTOR_CAN_BE_TARGETED(bLocal_828[iVar0], false);
			}
		}
		iVar0++;
	}
	return;
}

void Function_472() //Position: 0x16791 / 92049
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Function_207(bLocal_828[iVar0]);
		TASK_STAND_STILL(bLocal_828[iVar0], -1.0f, 0, 0);
		iVar0++;
	}
	return;
}

void Function_473(bool bParam0) //Position: 0x167C3 / 92099
{
	if (Function_224(bParam0))
	{
		SET_ACTOR_VISION_XRAY(bParam0, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 75.0f);
		AI_SET_BURST_DURATION(bParam0, 5.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,2f, 0,1f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,05f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, 3.0f);
	}
	return;
}

void Function_474() //Position: 0x16817 / 92183
{
	Local_5.f_436 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "SepulcroRebels"));
	(*&Local_5 + 392)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Rebel0", 538, -2278,104f, 21,8383f, 4947,605f, 0.0f, -41,05096f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 392)[02], Local_5.f_436);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 392)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 392)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 392)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 392)[02], 20);
	(*&Local_5 + 392)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Rebel1", 534, -2282,375f, 21,83827f, 4946,942f, 0.0f, -40,81004f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 392)[12], Local_5.f_436);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 392)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 392)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 392)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 392)[12], 20);
	(*&Local_5 + 392)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Rebel2", 537, -2280,053f, 21,83827f, 4952,278f, 0.0f, -40,29132f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 392)[22], Local_5.f_436);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 392)[22], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 392)[22], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 392)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 392)[22], 20);
	(*&Local_5 + 392)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Rebel3", 535, -2285,445f, 21,83827f, 4949,665f, 0.0f, -30,29641f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 392)[32], Local_5.f_436);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 392)[32], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 392)[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 392)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 392)[32], 20);
	(*&Local_5 + 392)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "DialogueRebel0", 529, -2283,53f, 21,83827f, 4950,075f, 0.0f, -65,03015f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 392)[42], Local_5.f_436);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 392)[42], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 392)[42], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_5 + 392)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 392)[42], 20);
	return;
}

void Function_475() //Position: 0x16AA5 / 92837
{
	Function_476();
	bLocal_814 = (*&Local_5 + 544)[02];
	if (Function_224(bLocal_814))
	{
		SET_ACTOR_PROOF(bLocal_814, 4096);
		SET_ALLOW_EXECUTE(bLocal_814, 0);
		if (Function_224(Global_34573))
		{
			MEMORY_REPORT_POSITION_AUTO(bLocal_814, Global_34573, true);
		}
	}
	return;
}

void Function_476() //Position: 0x16AE5 / 92901
{
	Local_5.f_556 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "DeSanta"));
	(*&Local_5 + 544)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "DeSanta0", 556, -1364,195f, 13,05098f, 4309,366f, 0.0f, 40,07217f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 544)[02], Local_5.f_556);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 544)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 544)[02], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 544)[02], 19);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 544)[02], 41, false, 1, 1);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 544)[02], 40, false, 1, 1);
	return;
}

void Function_477(int iParam0) //Position: 0x16B90 / 93072
{
	bool bVar0;
	bool bVar1;
	
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
			if (IS_ACTOR_ALIVE(bVar1))
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

void Function_478(bool bParam0) //Position: 0x16BDF / 93151
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_479(var uParam0, var uParam1) //Position: 0x16C2C / 93228
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_480() //Position: 0x16C43 / 93251
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Function_401(iVar0);
		iVar0++;
	}
	return;
}

void Function_481() //Position: 0x16C60 / 93280
{
	int iVar0;
	
	if (iLocal_507 < 4 && iLocal_507 > 105)
	{
		if (!IS_ACTOR_ALIVE(bLocal_814))
		{
			Function_243("Rebel02_fail_officer_killed");
			bLocal_516 = true;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_01_AND_JOBS/REBEL02"))
		{
			REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_01_AND_JOBS/REBEL02");
		}
		Function_538();
		Function_523();
		Function_400();
		if (Function_522(Local_5.f_436, 0, 0, 0, 0, 0))
		{
			Function_480();
		}
		else
		{
			Function_243("Rebel02_fail_rebels_killed");
			bLocal_516 = true;
		}
		if (iLocal_507 >= 8)
		{
			Function_234((*&Local_5 + 1296)[0]);
			Function_518(StackVal, StackVal, "$/cutscene/Rebel02_CS03/Rebel02_CS03", &uLocal_526, &iLocal_528, Function_234((*&Local_5 + 1296)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
			if (!iLocal_806)
			{
				if (Function_224(Global_34573))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 924)[3]))
					{
						Function_357(&uLocal_527, 33, 0, 4294967295, 4294967295);
						iLocal_806 = 1;
					}
				}
			}
			Function_423(19, 2, 15.0f, 1.0f, 0,8f, 0,2f, 0, 1);
			if (!DECOR_CHECK_EXIST(bLocal_498, "helpcapture") && !Function_157())
			{
				Function_156("Rebel02_help_capture", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(bLocal_498, "helpcapture", true);
			}
			if (!iLocal_507 != 104)
			{
				if (!DECOR_CHECK_EXIST(bLocal_498, "officerflee"))
				{
					Function_424(&bLocal_700, (*&Local_5 + 924)[2], (*&Local_5 + 924)[1], "Rebel02_return_sepulcro", "Rebel02_fail_sepulcro", &bLocal_516, 0, 0, 0, 330, 1);
				}
			}
			if (iLocal_507 < 12 && iLocal_507 > 105)
			{
				if (!iLocal_507 != 104)
				{
					if (!iLocal_507 != 103)
					{
						if (Function_224(bLocal_814))
						{
							if (!IS_ACTOR_HOGTIED(bLocal_814) && !Function_517())
							{
								Function_515();
							}
						}
					}
				}
			}
		}
	}
	switch (iLocal_507)
	{
		case 0x00000000:
			Function_390(0);
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			iLocal_805 = Function_332();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(21);
			Function_234((*&Local_5 + 1156)[0]);
			bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1156)[0]), 0, 1, 1);
			Function_514();
			if (!SQUAD_IS_VALID(Local_5.f_572))
			{
				Function_513();
				TASK_STAND_STILL((*&Local_5 + 560)[02], -1.0f, 0, 0);
			}
			if (iLocal_613[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_512();
				if (Function_224(Global_34573))
				{
					if (IS_ACTOR_RIDING(Global_34573))
					{
						if (Function_224(bLocal_611))
						{
							TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
							Function_328(bLocal_611, (*&Local_5 + 1156)[0], 1, 1, 1);
						}
					}
					else
					{
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
						Function_328(Global_34573, (*&Local_5 + 1156)[0], 1, 1, 1);
						if (Function_224(bLocal_611))
						{
							TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
							Function_328(bLocal_611, (*&Local_5 + 1156)[2], 1, 1, 1);
						}
					}
				}
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					if (Function_224(bLocal_822[iVar0]))
					{
						if (IS_ACTOR_RIDING(bLocal_822[iVar0]))
						{
							TASK_STAND_STILL(bLocal_822[iVar0], -1.0f, 0, 0);
							Function_328(bLocal_822[iVar0], (*&Local_5 + 1180)[iVar0], 1, 1, 1);
						}
						else
						{
							TASK_STAND_STILL(bLocal_822[iVar0], -1.0f, 0, 0);
							Function_328(bLocal_822[iVar0], (*&Local_5 + 1180)[iVar0], 1, 1, 1);
							if (Function_224(bLocal_828[iVar0]))
							{
								TASK_STAND_STILL(bLocal_828[iVar0], -1.0f, 0, 0);
								Function_328(bLocal_828[iVar0], (*&Local_5 + 1208)[iVar0], 1, 1, 1);
							}
						}
					}
					iVar0++;
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_234((*&Local_5 + 1156)[0]);
				bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1156)[0]), 0, 1, 1);
				if (!Function_330(bLocal_612))
				{
					Function_329(&Local_499);
				}
				iLocal_507 = 1;
			}
			else
			{
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_330(bLocal_612) || bLocal_612 != 4294967295))
			{
				Function_436((*&Local_5 + 924)[2]);
				if (!STREAMING_ARE_BOUNDS_LOADED(Function_436((*&Local_5 + 924)[2]), 100.0f))
				{
					Function_436((*&Local_5 + 924)[2]);
					STREAMING_LOAD_BOUNDS(Function_436((*&Local_5 + 924)[2]), 100.0f, 1);
				}
				else
				{
					iLocal_507 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_613[0] == 0)
			{
				Function_505();
			}
			if (Function_464(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_499, bLocal_506))
			{
				FIRE_STOP_ALL_FIRES();
				Function_357(&uLocal_527, 6, 0, 4294967295, 4294967295);
				if (!SQUAD_IS_VALID(Local_5.f_572))
				{
					Function_513();
				}
				iLocal_507 = 3;
			}
			else
			{
				Function_303();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_507 = 4;
			}
			Function_249(bLocal_506);
			Function_381(StackVal, StackVal, Function_249(bLocal_506), bLocal_506, Global_30633[2], Function_251(bLocal_506), 0);
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/REBEL02_CS02/REBEL02_CS02", &iLocal_508, &Local_499, &bLocal_506, 57614, 57424, 90361, 54512, 54014, 54007, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_507 = 4;
			}
			break;
		
		case 0x00000004:
			Function_377();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_357(&uLocal_527, 21, 0, 4294967295, 4294967295);
			Function_293(&iLocal_660);
			iLocal_507 = 5;
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_498(0);
			if (Function_224(Global_34573))
			{
				Function_207(Global_34573);
			}
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 6;
			Function_357(&uLocal_527, 21, 0, 4294967295, 4294967295);
			break;
		
		case 0x00000006:
			if (Function_224((*&Local_5 + 576)[02]))
			{
				if (Function_497())
				{
					Function_498(1);
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					iLocal_507 = 7;
				}
				else if (Function_356(&iLocal_660, 5.0f))
				{
					if (Function_224(bLocal_814))
					{
						Function_207((*&Local_5 + 576)[02]);
						TASK_FLEE_ACTOR((*&Local_5 + 576)[02], bLocal_814, -1.0f, -1.0f, 0, 0, 0);
						Function_498(0);
						Function_293(&iLocal_660);
						Function_293(&iLocal_666);
						iLocal_507 = 7;
					}
				}
			}
			else
			{
				Function_498(0);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
			}
			Function_496();
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 8;
			if (Function_224(bLocal_814))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_814, 13, true);
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_354("Rebel02_obj_captureDS");
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 924)[2]))
				{
					iLocal_507 = 9;
				}
				else
				{
					Function_496();
					iLocal_507 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (!DECOR_CHECK_EXIST(bLocal_498, "officerflee"))
			{
				Function_495(Local_5.f_436, 75.0f, 0x40400000, 0x40000000);
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 924)[2]))
				{
					Function_293(&iLocal_660);
					Function_293(&iLocal_666);
					iLocal_507 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_HOGTIED(bLocal_814) || Function_517())
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
					{
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
					else if (IS_ACTOR_IN_VOLUME(bLocal_814, (*&Local_5 + 924)[2]))
					{
						if (Function_408())
						{
							Function_492();
						}
						else
						{
							Function_228();
							Function_354("Rebel02_obj_killSoldiersSepulcro");
							Function_293(&iLocal_660);
							Function_293(&iLocal_666);
							iLocal_507 = 103;
						}
					}
					else
					{
						Function_492();
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
			}
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_CRIPPLED(bLocal_814, 3) || IS_ACTOR_CRIPPLED(bLocal_814, 4))
				{
					Function_491();
				}
				else
				{
					Function_490();
				}
			}
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 11;
			break;
		
		case 0x0000000B:
			if (Function_356(&iLocal_660, 4.0f))
			{
				ACTOR_START_FORCE_HOLSTER(bLocal_814, 0, 0);
				Function_515();
			}
			break;
		
		case 0x0000000C:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_HOGTIED(bLocal_814))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
					{
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
					else if (IS_ACTOR_IN_VOLUME(bLocal_814, (*&Local_5 + 924)[2]))
					{
						if (Function_408())
						{
							Function_492();
						}
						else
						{
							Function_228();
							Function_354("Rebel02_obj_killSoldiersSepulcro");
							Function_293(&iLocal_660);
							Function_293(&iLocal_666);
							iLocal_507 = 103;
						}
					}
					else
					{
						Function_492();
					}
				}
				else if (Function_517())
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_814, (*&Local_5 + 924)[2]))
					{
						if (Function_408())
						{
							Function_492();
						}
						else
						{
							Function_228();
							Function_354("Rebel02_obj_killSoldiersSepulcro");
							Function_293(&iLocal_660);
							Function_293(&iLocal_666);
							iLocal_507 = 103;
						}
					}
					else
					{
						Function_492();
					}
				}
				else if (Function_489(bLocal_814, Global_34573, 100.0f))
				{
					if (Function_356(&iLocal_663, 60.0f))
					{
						if (iLocal_902 != 5)
						{
							if (!Function_404(bLocal_814))
							{
								if (GET_NUM_WEAPONS_IN_INVENTORY(bLocal_814) >= 0)
								{
									if (IS_ACTOR_RIDING(bLocal_814))
									{
										if (IS_ACTOR_RIDING(Global_34573))
										{
											Function_488();
										}
									}
									else
									{
										Function_488();
									}
								}
							}
						}
					}
					if (Function_356(&iLocal_660, 15.0f))
					{
						if (Function_489(bLocal_814, Global_34573, 20.0f))
						{
							Function_487();
							Function_293(&iLocal_660);
						}
						else
						{
							Function_486();
							Function_293(&iLocal_660);
						}
					}
				}
				else
				{
					Function_243("Rebel02_fail_officer_getaway");
					bLocal_516 = true;
				}
			}
			break;
		
		case 0x00000067:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_HOGTIED(bLocal_814) || Function_517())
				{
					if (Function_408())
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
						{
							if (GET_HOGTIED_MASTER(bLocal_814) == "")
							{
								if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_817))
								{
									Function_494();
								}
								else
								{
									Function_354("Rebel02_obj_returnToDS");
									Function_293(&iLocal_660);
									Function_293(&iLocal_666);
									iLocal_507 = 17;
								}
							}
							else if (Function_408())
							{
								Function_494();
							}
							else
							{
								Function_493();
							}
						}
						else
						{
							Function_492();
						}
					}
				}
				else
				{
					Function_515();
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
				{
					if (GET_HOGTIED_MASTER(bLocal_814) == "")
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_817)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_817));
						}
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(bLocal_814) == 4)
					{
						Function_483();
					}
					else if (GET_HOGTIED_MASTER(bLocal_814) == Global_34573)
					{
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
				}
				else if (!iLocal_808)
				{
					if (iLocal_903[4] == 11)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_822[4], 24.0f))
						{
							Function_482();
							LOG_ERROR("Rebel02_PLAY_RebelShoutCarryDS");
							iLocal_808 = 1;
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
				{
					if (GET_ACTOR_HOGTIE_STATE(bLocal_814) != 4)
					{
						if (Function_224(GET_ACTORS_HORSE(Global_34573)))
						{
							Function_207(GET_ACTORS_HORSE(Global_34573));
							TASK_WANDER(GET_ACTORS_HORSE(Global_34573), -1.0f);
						}
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
				}
				else
				{
					Function_492();
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
				{
					if (GET_HOGTIED_MASTER(bLocal_814) == "")
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_817)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_817));
						}
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(bLocal_814) == 4)
					{
						Function_483();
					}
				}
				else
				{
					Function_492();
				}
			}
			break;
		
		case 0x00000010:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
				{
					if (GET_HOGTIED_MASTER(bLocal_814) == "")
					{
						if (Function_408())
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_817))
							{
								Function_494();
							}
							else
							{
								Function_354("Rebel02_obj_returnToDS");
								Function_357(&uLocal_527, 20, 0, 4294967295, 4294967295);
								Function_293(&iLocal_660);
								Function_293(&iLocal_666);
								iLocal_507 = 17;
							}
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(bLocal_814) == 4)
					{
						Function_483();
					}
					else if (GET_HOGTIED_MASTER(bLocal_814) == Global_34573)
					{
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
				}
				else
				{
					Function_492();
				}
			}
			break;
		
		case 0x00000011:
			if (Function_224(bLocal_814))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_814, bLocal_817))
				{
					if (GET_HOGTIED_MASTER(bLocal_814) == "")
					{
						if (Function_408())
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_817))
							{
								Function_494();
							}
						}
					}
					else if (GET_ACTOR_HOGTIE_STATE(bLocal_814) == 4)
					{
						Function_483();
					}
					else if (GET_HOGTIED_MASTER(bLocal_814) == Global_34573)
					{
						if (Function_408())
						{
							Function_494();
						}
						else
						{
							Function_493();
						}
					}
				}
				else
				{
					Function_492();
				}
			}
			break;
		
		case 0x00000069:
			if (Function_356(&iLocal_660, 1.0f))
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_703 = 0;
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING() && Function_356(&iLocal_660, 2.0f))
			{
				iLocal_613[1] = 1;
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_814)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_814));
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_814);
				Function_379(Local_5.f_436);
				iLocal_613[1] = 1;
				Function_357(&uLocal_527, 0, 0, 4294967295, 4294967295);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				bLocal_506 = 2;
				iLocal_507 = 0;
			}
			break;
	}
	return;
}

void Function_482() //Position: 0x17A9E / 96926
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelShoutCarryDS", "Rebel02_RebelShoutCarryDS", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x17AFA / 97018
{
	Function_484();
	iLocal_808 = 0;
	Function_354("Rebel02_obj_getDSoffHorse");
	Function_293(&iLocal_660);
	Function_293(&iLocal_666);
	iLocal_507 = 14;
	return;
}

void Function_484() //Position: 0x17B37 / 97079
{
	if (!IS_OBJECT_VALID(bLocal_804))
	{
		bLocal_804 = Function_485(StackVal, StackVal, bLocal_498, Function_81(), *(&Local_5 + 1448[26]), 0.0f, 31,909f, 0.0f, Global_34573, 9.0f, 2, 2, 330, 4294967295, 1, -1.0f, -1.0f, 0);
		ADD_BLIP_FOR_OBJECT(bLocal_804, 330, 0f, 2, 0);
	}
	return;
}

bool Function_485(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x17B83 / 97155
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

void Function_486() //Position: 0x17C4E / 97358
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelJonNoChaseDes", "Rebel02_RebelJonNoChaseDes", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x17CAC / 97452
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelCaptDeSanWait", "Rebel02_RebelCaptDeSanWait", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x17D0A / 97546
{
	Function_207(bLocal_814);
	GIVE_WEAPON_TO_ACTOR(bLocal_814, 41, false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bLocal_814, 40, false, 1, 1);
	ACTOR_END_FORCE_HOLSTER(bLocal_814);
	bLocal_801 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_814, bLocal_801);
	TASK_SEQUENCE_RELEASE(bLocal_801, 1);
	TASK_PRIORITY_SET(bLocal_814, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_814, 13, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_814, 75.0f);
	iLocal_902 = 5;
	return;
}

bool Function_489(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17D75 / 97653
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

void Function_490() //Position: 0x17E86 / 97926
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_ShoutsOffEunning", "Rebel02_ShoutsOffEunning", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x17EDF / 98015
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_ShotBothLegs", "Rebel02_ShotBothLegs", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x17F30 / 98096
{
	Function_484();
	iLocal_808 = 0;
	Function_354("Rebel02_obj_carryDS");
	Function_293(&iLocal_660);
	Function_293(&iLocal_666);
	Function_357(&uLocal_527, 20, 0, 4294967295, 4294967295);
	iLocal_507 = 13;
	return;
}

void Function_493() //Position: 0x17F72 / 98162
{
	Function_228();
	iLocal_808 = 0;
	Function_354("Rebel02_obj_killSoldiersSepulcro");
	Function_293(&iLocal_660);
	Function_293(&iLocal_666);
	iLocal_507 = 16;
	return;
}

void Function_494() //Position: 0x17FB6 / 98230
{
	Function_228();
	if (Function_224(bLocal_814))
	{
		DECOR_SET_BOOL(bLocal_814, "bDisableCutFree", true);
		DECOR_SET_BOOL(bLocal_814, "ActionArea_DisableHogtie", true);
	}
	Function_357(&uLocal_527, 11, 0, 4294967295, 4294967295);
	Function_293(&iLocal_660);
	Function_293(&iLocal_666);
	iLocal_507 = 105;
	return;
}

void Function_495(bool bParam0, float fParam1, int iParam2, int iParam3) //Position: 0x18022 / 98338
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
			Function_451(bVar1, fParam1, iParam2, iParam3);
		}
		bVar0++;
	}
}

void Function_496() //Position: 0x18068 / 98408
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_YellsAtJon", "Rebel02_YellsAtJon", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_497() //Position: 0x180B5 / 98485
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_224(Local_909[iVar04]))
		{
			if (ACTORS_IN_RANGE(Local_909[iVar04], Global_34573, 20.0f))
			{
				LOG_ERROR("player spotted by soldier");
				return 1;
			}
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(Local_909[iVar04])))
			{
				return 1;
			}
		}
		return 1;
		iVar0++;
	}
	if (Function_224(bLocal_814))
	{
		if (ACTORS_IN_RANGE(bLocal_814, Global_34573, 20.0f))
		{
			LOG_ERROR("player spotted by de Santa");
			return 1;
		}
		if (IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_814)))
		{
			return 1;
		}
	}
	if (Function_224((*&Local_5 + 576)[02]))
	{
		if (ACTORS_IN_RANGE((*&Local_5 + 576)[02], Global_34573, 20.0f))
		{
			LOG_ERROR("player spotted by gravedigger");
			return 1;
		}
		if (IS_ACTOR_VALID(GET_LAST_ATTACKER((*&Local_5 + 576)[02])))
		{
			return 1;
		}
	}
	return 1;
	return 0;
}

void Function_498(int iParam0) //Position: 0x181DF / 98783
{
	int iVar0;
	
	if (!DECOR_CHECK_EXIST(bLocal_498, "sepulcroshootout"))
	{
		Function_504();
		iLocal_816 = 0;
		Function_503(iParam0);
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_814)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_814, 393, 0, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_814), GET_ACTOR_ENUM_STRING(bLocal_814));
		}
		AI_STOP_IGNORING_ACTORS();
		Function_502(Local_5.f_540);
		SQUAD_GOALS_CLEAR(Local_5.f_540);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_5.f_540, 0);
		Function_501(Local_5.f_540, Global_34573, 1);
		SQUAD_SET_FACTION(Local_5.f_540, 19);
		Function_345(Local_5.f_540, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_344(Local_5.f_540, bLocal_497);
		Function_500(Local_5.f_540, 1);
		Function_342(Local_5.f_540, 0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_5.f_540, bLocal_497);
		if (iLocal_816 == 0)
		{
			uLocal_834[0] = Local_5.f_1928;
			uLocal_834[1] = Local_5.f_1932;
			uLocal_834[2] = Local_5.f_1936;
			uLocal_834[3] = Local_5.f_1940;
			uLocal_834[4] = Local_5.f_1944;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				Function_234((*&Local_5 + 1604)[iVar0]);
				vLocal_840[iVar03] = { StackVal, StackVal, Function_234((*&Local_5 + 1604)[iVar0]) };
				iVar0++;
			}
		}
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,45f);
		SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 1,7f);
		Function_379(Local_5.f_436);
		Function_499();
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Function_224(bLocal_822[iVar0]))
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_822[iVar0], 0,4f);
			}
			iVar0++;
		}
		if (SQUAD_IS_VALID(Local_5.f_540))
		{
			Function_462(Local_5.f_540, 1);
		}
		if (SQUAD_IS_VALID(Local_5.f_436))
		{
			Function_462(Local_5.f_436, 1);
		}
		DECOR_SET_BOOL(bLocal_498, "sepulcroshootout", true);
		iLocal_703 = 1;
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
		Function_495(Local_5.f_436, 40.0f, 0x40400000, 0x40000000);
	}
	return;
}

void Function_499() //Position: 0x183C4 / 99268
{
	if (Function_224(bLocal_814))
	{
		AI_IGNORE_ACTOR(bLocal_814);
		AI_DONT_HARM_ACTOR(bLocal_814);
	}
	return;
}

void Function_500(bool bParam0, bool bParam1) //Position: 0x183E0 / 99296
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
				SET_ACTOR_VISION_XRAY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_501(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18429 / 99369
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

void Function_502(bool bParam0) //Position: 0x18488 / 99464
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

void Function_503(int iParam0) //Position: 0x184BA / 99514
{
	vector3 vVar0;
	
	if (Function_224(bLocal_814))
	{
		Function_398(bLocal_814);
		vVar0 = { StackVal, StackVal, Function_398(bLocal_814) };
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_814, 100.0f);
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bLocal_814, 0);
		AI_BEHAVIOR_SET_ALLOW(bLocal_814, 0, 0);
		AI_SET_SHOTS_PER_BURST(bLocal_814, 5);
		AI_SET_BURST_DURATION(bLocal_814, 3000.0f);
		Function_207(bLocal_814);
		bLocal_801 = TASK_SEQUENCE_OPEN();
		if (iParam0 == 1)
		{
			if (Function_224((*&Local_5 + 576)[02]))
			{
				SET_ACTOR_FACTION((*&Local_5 + 576)[02], 20);
				TASK_SHOOT_FROM_POSITION(false, (*&Local_5 + 576)[02], &vVar0);
			}
		}
		TASK_GO_TO_COORD(false, &Local_5 + 1548[iLocal_8166], 4);
		TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_814, bLocal_801);
		TASK_SEQUENCE_RELEASE(bLocal_801, 1);
		iLocal_902 = 0;
	}
	return;
}

void Function_504() //Position: 0x1856D / 99693
{
	var uVar0;
	
	if (StackVal == 0)
	{
		if (Function_224(Local_909[34]))
		{
			if (Function_224(bLocal_863[0]))
			{
				Function_207(Local_909[34]);
				MEMORY_ALLOW_SHOOTING(Local_909[34], true);
				GET_POSITION(Local_909[34], &uVar0);
				bLocal_801 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_FROM_POSITION(false, bLocal_863[0], &uVar0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Local_909[34], bLocal_801);
				TASK_SEQUENCE_RELEASE(bLocal_801, 1);
				Local_909[34].f_4 = 1;
				Local_909[34].f_8 = 0;
			}
		}
		if (Function_224(Local_909[44]))
		{
			if (Function_224(bLocal_863[1]))
			{
				Function_207(Local_909[44]);
				MEMORY_ALLOW_SHOOTING(Local_909[44], true);
				GET_POSITION(Local_909[44], &uVar0);
				bLocal_801 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_FROM_POSITION(false, bLocal_863[1], &uVar0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Local_909[44], bLocal_801);
				TASK_SEQUENCE_RELEASE(bLocal_801, 1);
				Local_909[44].f_4 = 1;
				Local_909[44].f_8 = 1;
			}
		}
	}
	return;
}

void Function_505() //Position: 0x1866D / 99949
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(Local_5.f_436))
	{
		Function_470(1);
	}
	if (!IS_ACTORSET_VALID(Local_5.f_588))
	{
		Function_511();
		DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_5 + 576)[02]);
		SET_ACTOR_ONE_SHOT_DEATH((*&Local_5 + 576)[02], true);
	}
	if (!SQUAD_IS_VALID(Local_5.f_612))
	{
		Function_510();
		bVar0 = false;
		while (bVar0 <= 2)
		{
			bLocal_863[bVar0] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_612, bVar0);
			SET_ACTOR_ONE_SHOT_DEATH(bLocal_863[bVar0], true);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_863[bVar0]);
			bVar0++;
		}
	}
	if (!SQUAD_IS_VALID(Local_5.f_540))
	{
		Function_509();
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_5.f_540, bLocal_497);
		bVar0 = false;
		while (bVar0 <= 6)
		{
			Local_909[bVar04] = SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_540, bVar0);
			Local_909[bVar04].f_12 = (*&Local_5 + 1660)[bVar0];
			Local_909[bVar04].f_4 = 0;
			if (Function_224(Local_909[bVar04]))
			{
				Function_346(Local_909[bVar04]);
				MEMORY_ALLOW_SHOOTING(Local_909[bVar04], false);
				Function_207(Local_909[34]);
				TASK_STAND_STILL(Local_909[bVar04], -1.0f, 0, 0);
			}
			bVar0++;
		}
		Function_508(Local_5.f_540);
		if (Function_224(Local_909[04]))
		{
			Function_207(Local_909[04]);
			if (Function_224((*&Local_5 + 576)[02]))
			{
				TASK_POINT_GUN_AT_OBJECT(Local_909[04], (*&Local_5 + 576)[02], -1.0f, 1);
			}
		}
		if (Function_224(Local_909[14]))
		{
			Function_207(Local_909[14]);
			TASK_STAND_STILL(Local_909[14], -1.0f, 0, 0);
		}
		if (Function_224(Local_909[24]))
		{
			Function_207(Local_909[24]);
			TASK_STAND_STILL(Local_909[14], -1.0f, 0, 0);
		}
		if (Function_224(Local_909[34]))
		{
			TASK_STAND_STILL(Local_909[14], -1.0f, 0, 0);
		}
		if (Function_224(Local_909[44]))
		{
			TASK_STAND_STILL(Local_909[14], -1.0f, 0, 0);
		}
		if (Function_224(Local_909[54]))
		{
			Function_207(Local_909[54]);
			TASK_STAND_STILL(Local_909[14], -1.0f, 0, 0);
		}
	}
	Function_508(Local_5.f_436);
	AI_IGNORE_ACTOR(Global_34573);
	if (!SQUAD_IS_VALID(Local_5.f_556))
	{
		Function_475();
		Function_506(bLocal_814, &iLocal_528);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_814);
		GIVE_WEAPON_TO_ACTOR(bLocal_814, 39, false, 1, 1);
		if (Function_224((*&Local_5 + 576)[02]))
		{
			bLocal_801 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_POINT_GUN_AT_OBJECT(false, (*&Local_5 + 576)[02], -1.0f, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_814, bLocal_801);
			TASK_SEQUENCE_RELEASE(bLocal_801, 1);
		}
		else
		{
			TASK_STAND_STILL(bLocal_814, -1.0f, 0, 0);
		}
	}
	if (!IS_OBJECT_VALID(bLocal_817))
	{
		bLocal_817 = CREATE_VOLUME_IN_LAYOUT(bLocal_498, Function_81(), 2, *(&Local_5 + 1448[26]), 0.0f, 31,909f, 0.0f, 9.0f, 9.0f, 9.0f);
	}
	Function_504();
	if (!SQUAD_IS_VALID(Local_5.f_572))
	{
		Function_513();
	}
	iLocal_803 = 6;
	return;
}

void Function_506(bool bParam0, int iParam1) //Position: 0x1891D / 100637
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = Function_507(bParam0, iParam1);
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

int Function_507(int iParam0, int iParam1) //Position: 0x18963 / 100707
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

void Function_508(bool bParam0) //Position: 0x18997 / 100759
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
			AI_IGNORE_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_509() //Position: 0x189D6 / 100822
{
	Local_5.f_540 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "SepulcroArmy"));
	(*&Local_5 + 488)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "SepulcroArmy0", 380, -1369,257f, 13,18632f, 4307,396f, 0.0f, -62,47959f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 488)[02], Local_5.f_540);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 488)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 488)[02], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 488)[02], 19);
	(*&Local_5 + 488)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "SepulcroArmy1", 396, -1352f, 13,05099f, 4280.0f, 0.0f, -36,92808f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 488)[12], Local_5.f_540);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 488)[12], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 488)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 488)[12], 19);
	(*&Local_5 + 488)[22] = CREATE_ACTOR_IN_LAYOUT(Local_5, "SepulcroArmy2", 392, -1368f, 13,05099f, 4288.0f, 0.0f, 36,89134f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 488)[22], Local_5.f_540);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 488)[22], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 488)[22], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 488)[22], 19);
	(*&Local_5 + 488)[32] = CREATE_ACTOR_IN_LAYOUT(Local_5, "SepulcroArmy3", 379, -1362,761f, 13,05098f, 4299,19f, 0.0f, 208,8689f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 488)[32], Local_5.f_540);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 488)[32], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 488)[32], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 488)[32], 19);
	(*&Local_5 + 488)[42] = CREATE_ACTOR_IN_LAYOUT(Local_5, "SepulcroArmy4", 395, -1361,531f, 13,05128f, 4298,384f, 179,9985f, -28,34848f, -179,9977f);
	SQUAD_JOIN((*&Local_5 + 488)[42], Local_5.f_540);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 488)[42], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 488)[42], 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 488)[42], 19);
	(*&Local_5 + 488)[52] = CREATE_ACTOR_IN_LAYOUT(Local_5, "SepulcroArmy5", 393, -1333,823f, 13,06128f, 4301,142f, 0.0f, 267,4944f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 488)[52], Local_5.f_540);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 488)[52], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_5 + 488)[52], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_5 + 488)[52], 19);
	return;
}

void Function_510() //Position: 0x18CB2 / 101554
{
	Local_5.f_612 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "CapturedRebels"));
	(*&Local_5 + 592)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CapturedRebel0", 518, -1357,75f, 13,05099f, 4306,776f, 0.0f, 223,0429f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 592)[02], Local_5.f_612);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 592)[02], false);
	TASK_STAND_STILL((*&Local_5 + 592)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 592)[02], 20);
	(*&Local_5 + 592)[12] = CREATE_ACTOR_IN_LAYOUT(Local_5, "CapturedRebel1", 520, -1357,179f, 13,05099f, 4306,335f, 0.0f, 215,169f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 592)[12], Local_5.f_612);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 592)[12], false);
	TASK_STAND_STILL((*&Local_5 + 592)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_5 + 592)[12], 20);
	return;
}

void Function_511() //Position: 0x18DB2 / 101810
{
	Local_5.f_588 = CREATE_ACTORSET_IN_LAYOUT(Local_5, "Gravediggerset", 0);
	(*&Local_5 + 576)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Gravedigger0", 518, -1366,36f, 13,05099f, 4306,36f, 0.0f, 228,0118f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_5.f_588, (*&Local_5 + 576)[02]);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 576)[02], false);
	return;
}

void Function_512() //Position: 0x18E26 / 101926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_224(bLocal_822[iVar0]))
		{
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_822[iVar0]);
		}
		iVar0++;
	}
	Function_228();
	Function_52();
	return;
}

void Function_513() //Position: 0x18E5C / 101980
{
	Local_5.f_572 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_5, "Vulture"));
	(*&Local_5 + 560)[02] = CREATE_ACTOR_IN_LAYOUT(Local_5, "Vulture0", 1128, -1386,635f, 16,62871f, 4308,941f, 0.0f, 120,7193f, 0.0f);
	SQUAD_JOIN((*&Local_5 + 560)[02], Local_5.f_572);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_5 + 560)[02], false);
	TASK_STAND_STILL((*&Local_5 + 560)[02], -1.0f, 0, 0);
	return;
}

void Function_514() //Position: 0x18ED4 / 102100
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_224(bLocal_822[iVar0]))
		{
			SET_ACTOR_HEALTH(bLocal_822[iVar0], GET_ACTOR_MAX_HEALTH(bLocal_822[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_515() //Position: 0x18F0D / 102157
{
	Function_516();
	Function_228();
	iLocal_808 = 0;
	Function_354("Rebel02_obj_lassoHogtie");
	Function_293(&iLocal_660);
	Function_293(&iLocal_666);
	iLocal_507 = 12;
	return;
}

void Function_516() //Position: 0x18F4B / 102219
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelCaptDeSan", "Rebel02_RebelCaptDeSan", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_517() //Position: 0x18FA1 / 102305
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (Function_404(bLocal_814))
		{
			if (!iLocal_813)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_156("Rebel02_help_drag", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_813 = 1;
				}
			}
			return 1;
		}
	}
	return 0;
}

int Function_518(bool bParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x18FEF / 102383
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_397(StackVal, StackVal, Global_34573, vParam3, (fParam7 + ((IntToFloat(Function_399()) * (fParam8 - fParam7)) * 0,5f))))
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
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_101(StackVal, StackVal, vVar16))
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
					Function_521(iParam2);
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_519(iParam2);
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
	else if (!Function_397(StackVal, StackVal, Global_34573, vParam3, (fParam8 + ((IntToFloat(Function_399()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_397(StackVal, StackVal, Global_34573, vParam3, fParam7))
	{
	}
	return 0;
}

void Function_519(int iParam0) //Position: 0x1931E / 103198
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
			Function_520(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, iParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar7, &Var10);
			Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_520(bool bParam0, bool bParam1, int iParam2) //Position: 0x1937E / 103294
{
	int iVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= *iParam2)
		{
			if (IS_ACTOR_VALID((*iParam2)[iVar09]))
			{
				if (GET_ACTOR_ENUM(bParam0) == GET_ACTOR_ENUM((*iParam2)[iVar09]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bParam1), (*iParam2)[iVar09]);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bParam1, iParam2[iVar09] + 4, &Var1);
					iParam2[iVar09]->f_16 = (StackVal + 180.0f);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bParam1, iParam2[iVar09] + 20, &Var1);
					iParam2[iVar09]->f_32 = (StackVal + 180.0f);
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_521(bool bParam0) //Position: 0x1940F / 103439
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *bParam0)
	{
		(*bParam0)[iVar09] = "";
		*(bParam0[iVar09] + 4) = { 0.0f, 0.0f, 0.0f };
		bParam0[iVar09]->f_16 = 0.0f;
		*(bParam0[iVar09] + 20) = { 0.0f, 0.0f, 0.0f };
		bParam0[iVar09]->f_32 = 0.0f;
		iVar0++;
	}
	return;
}

bool Function_522(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1945D / 103517
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

void Function_523() //Position: 0x19511 / 103697
{
	if (Function_224(bLocal_814))
	{
		if (!iLocal_902 != 6)
		{
			if (Function_404(bLocal_814))
			{
				iLocal_902 = 6;
				Function_537();
				Function_357(&uLocal_527, 20, 0, 4294967295, 4294967295);
			}
		}
		switch (iLocal_902)
		{
			case 0x00000000:
				if (Function_410(StackVal, StackVal, bLocal_814, *(&Local_5 + 1548[iLocal_8166])) > 1.0f || GET_TASK_STATUS(bLocal_814, 0) != 0)
				{
					Function_207(bLocal_814);
					ACTOR_HOLSTER_WEAPON(bLocal_814, 1);
					TASK_CROUCH(bLocal_814, -1.0f);
					iLocal_902 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_224(Global_34573))
				{
					if (Function_456(Global_34573, bLocal_814, 18.0f))
					{
						Function_536();
					}
					else if (Function_408())
					{
						Function_536();
					}
				}
				break;
			
			case 0x00000002:
				Function_533();
				Function_532();
				Function_327(bLocal_814);
				bLocal_815 = LOCATE_ACTOR_OF_TYPE(Function_327(bLocal_814), 12.0f, 23, 4294967295);
				Function_531();
				if (Function_224(bLocal_815))
				{
					if (IS_ACTOR_RIDEABLE(bLocal_815))
					{
						if (GET_RIDER(bLocal_815) == "")
						{
							if (bLocal_815 != bLocal_611)
							{
								if (bLocal_815 != bLocal_821)
								{
									Function_530();
								}
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				Function_533();
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_814))
				{
					Function_528();
				}
				else if (Function_224(bLocal_815))
				{
					if (GET_RIDER(bLocal_815) == "")
					{
						if (!ACTORS_IN_RANGE(bLocal_814, bLocal_815, 20.0f))
						{
							Function_527();
						}
					}
					else
					{
						Function_527();
					}
				}
				else
				{
					Function_527();
				}
				break;
			
			case 0x00000003:
				Function_533();
				Function_531();
				if (Function_224(bLocal_815))
				{
					if (!IS_ACTOR_RIDING(bLocal_814))
					{
						TASK_CLEAR(GET_MOUNT(bLocal_814));
						Function_527();
					}
				}
				else
				{
					Function_527();
				}
				break;
			
			case 0x00000005:
				if (Function_356(&iLocal_678, 8,5f))
				{
					if (!Function_339())
					{
						Function_526();
						Function_293(&iLocal_678);
					}
				}
				if (GET_NUM_WEAPONS_IN_INVENTORY(bLocal_814) < 0)
				{
					Function_207(bLocal_814);
					Function_527();
				}
				break;
			
			case 0x00000006:
				if (IS_ACTOR_HOGTIED(bLocal_814))
				{
					Function_357(&uLocal_527, 20, 0, 4294967295, 4294967295);
					iLocal_902 = 7;
					if (Function_408())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_814, "Rebel02_JonHogtiesDSanta", Function_81(), true, 1, 0, 1, 0, 0, 0, 1000, 0, 0);
						LOG_ERROR("Rebel02_PLAY_JonHogtiesDSanta");
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_814, "Rebel02_HogTiesDSantaAlive", Function_81(), true, 1, 0, 1, 0, 0, 0, 1000, 0, 0);
						LOG_ERROR("Rebel02_PLAY_JonHogtiesDSanta");
					}
				}
				else if (!Function_404(bLocal_814))
				{
					Function_207(bLocal_814);
					Function_527();
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_HOGTIED(bLocal_814))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_814, 10.0f))
					{
						if (Function_356(&iLocal_678, 12,5f))
						{
							if (!Function_339())
							{
								Function_525();
								Function_293(&iLocal_678);
							}
						}
					}
					else if (Function_356(&iLocal_678, 12,5f))
					{
						if (!Function_339())
						{
							Function_524();
							Function_293(&iLocal_678);
						}
					}
				}
				else
				{
					Function_357(&uLocal_527, 26, 0, 4294967295, 4294967295);
					Function_207(bLocal_814);
					Function_527();
				}
				break;
			
			case 0x00000008:
				break;
			}
	}
	return;
}

void Function_524() //Position: 0x19849 / 104521
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_LeavesDSantaTied", "Rebel02_LeavesDSantaTied", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x198A2 / 104610
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_PelaseWitJon", "Rebel02_PelaseWitJon", false, 2, 0, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x198F3 / 104691
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_AttacksJon", "Rebel02_AttacksJon", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527() //Position: 0x19940 / 104768
{
	if (Function_224(bLocal_814))
	{
		if (Function_224(Global_34573))
		{
			Function_207(bLocal_814);
			TASK_OVERRIDE_CLEAR_POSTURE(bLocal_814);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_814, (*&Local_5 + 924)[6], 3, 1);
			TASK_FLEE_ACTOR(bLocal_814, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			SET_ACTOR_MAX_SPEED(bLocal_814, 3);
			Function_293(&iLocal_681);
			if (iLocal_818 <= 0)
			{
				iLocal_818 = 0;
			}
			iLocal_902 = 2;
		}
	}
	return;
}

void Function_528() //Position: 0x1999E / 104862
{
	Function_207(bLocal_814);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_814, (*&Local_5 + 924)[6], 2, 1);
	if (iLocal_818 <= 0)
	{
		iLocal_818 = 0;
	}
	TASK_FLEE_ACTOR(bLocal_814, Global_34573, -1.0f, -1.0f, 0, 0, 0);
	iLocal_902 = 3;
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		Function_529();
	}
	return;
}

void Function_529() //Position: 0x199E4 / 104932
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_SantaGetsOnHorse", "Rebel02_SantaGetsOnHorse", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x19A3D / 105021
{
	Function_207(bLocal_814);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_814);
	CLEAR_ACTOR_MAX_SPEED(bLocal_814);
	TASK_MOUNT(bLocal_814, bLocal_815, 1, 1, 2, 2147483647);
	if (iLocal_818 <= 0)
	{
		iLocal_818 = 0;
	}
	iLocal_902 = 4;
	return;
}

void Function_531() //Position: 0x19A75 / 105077
{
	if (IS_ACTOR_CRIPPLED(bLocal_814, 2) && IS_ACTOR_CRIPPLED(bLocal_814, 1))
	{
		KILL_ACTOR(bLocal_814);
	}
	return;
}

void Function_532() //Position: 0x19A93 / 105107
{
	if (GET_ACTOR_MAX_SPEED(bLocal_814) == 3)
	{
		if (Function_356(&iLocal_681, 7,5f))
		{
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_814, 2);
			SET_ACTOR_MAX_SPEED(bLocal_814, 2);
			Function_293(&iLocal_681);
		}
	}
	else if (Function_356(&iLocal_681, 15.0f))
	{
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_814, 3);
		SET_ACTOR_MAX_SPEED(bLocal_814, 3);
		Function_293(&iLocal_681);
	}
	return;
}

void Function_533() //Position: 0x19AEA / 105194
{
	if (Function_224(bLocal_814))
	{
		if (Function_224(Global_34573))
		{
			if (!IS_ACTOR_HOGTIED(bLocal_814))
			{
				if (Function_356(&iLocal_678, 8,5f))
				{
					if (!Function_339())
					{
						switch (iLocal_818)
						{
							case 0x00000000:
								Function_535();
								Function_293(&iLocal_678);
								iLocal_818 = 1;
								break;
							
							case 0x00000001:
								Function_534();
								Function_293(&iLocal_678);
								iLocal_818 = 0;
								break;
							
							default:
								LOG_ERROR("invalid iDeSantaOrJohnShoutStage");
								iLocal_818 = 0;
								break;
							}
						}
					}
				}
			}
	}
	return;
}

void Function_534() //Position: 0x19B82 / 105346
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_ShoutsAtJonWileEscape", "Rebel02_ShoutsAtJonWileEscape", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_535() //Position: 0x19BE5 / 105445
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_Shouts2DeSanta", "Rebel02_Shouts2DeSanta", 2, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x19C3A / 105530
{
	if (Function_224(bLocal_814))
	{
		if (Function_224(Global_34573))
		{
			Function_527();
			DECOR_SET_BOOL(bLocal_498, "officerflee", true);
			Function_357(&uLocal_527, 28, 0, 4294967295, 4294967295);
			Function_293(&iLocal_663);
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_507 = 10;
		}
	}
	return;
}

void Function_537() //Position: 0x19C8D / 105613
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_JonLassoDeSanta", "Rebel02_JonLassoDeSanta", false, 2, 1, 0, 1);
		Function_335(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x19CE4 / 105700
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_224(Local_909[iVar04]))
		{
			Function_415(&(Local_909[iVar04]));
		}
		else
		{
			Local_909[iVar04].f_4 = 12;
		}
		iVar0++;
	}
	return;
}

void Function_539() //Position: 0x19D21 / 105761
{
	if (!iLocal_507 != 0)
	{
		if (IS_OBJECT_VALID(bLocal_804) && !DECOR_CHECK_EXIST(bLocal_498, "trafficdisabled"))
		{
			if (Function_556(Global_34573, bLocal_804, 100.0f))
			{
				Function_460(1);
				DECOR_SET_BOOL(bLocal_498, "trafficdisabled", true);
			}
		}
		Function_234((*&Local_5 + 1156)[0]);
		Function_394(StackVal, StackVal, "$/cutscene/REBEL02_CS02/REBEL02_CS02", &uLocal_526, Function_234((*&Local_5 + 1156)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		if (iLocal_507 < 4 && iLocal_507 > 10)
		{
			if (Function_522(Local_5.f_436, 0, 0, 0, 0, 0))
			{
				Function_480();
			}
			else
			{
				Function_243("Rebel02_fail_rebels_killed");
				bLocal_516 = true;
			}
		}
	}
	switch (iLocal_507)
	{
		case 0x00000000:
			Function_390(0);
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			if (Function_224(Global_34573))
			{
				DECOR_SET_BOOL(Global_34573, "bDisableTieToTracks", true);
			}
			iLocal_805 = Function_332();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_610, GET_ACTOR_MAX_HEALTH(bLocal_610));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(21);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_234((*&Local_5 + 1136)[0]);
			bLocal_612 = Function_331(StackVal, StackVal, Function_234((*&Local_5 + 1136)[0]), 0, 1, 1);
			if (!Function_330(bLocal_612))
			{
				Function_329(&Local_499);
			}
			Function_357(&uLocal_527, 0, 0, 4294967295, 4294967295);
			iLocal_507 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_330(bLocal_612) || bLocal_612 != 4294967295))
			{
				iLocal_507 = 2;
			}
			break;
		
		case 0x00000002:
			Function_249(bLocal_506);
			Function_381(StackVal, StackVal, Function_249(bLocal_506), bLocal_506, Global_30633[2], Function_251(bLocal_506), 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_224(bLocal_822[0]) && Function_224(bLocal_828[0]))
			{
				if (GET_MOUNT(bLocal_822[0]) != bLocal_828[0])
				{
					ACTOR_MOUNT_ACTOR(bLocal_822[0], bLocal_828[0]);
					TASK_CLEAR(bLocal_822[0]);
				}
			}
			if (Function_224(bLocal_822[2]) && Function_224(bLocal_828[2]))
			{
				if (GET_MOUNT(bLocal_822[2]) != bLocal_828[2])
				{
					ACTOR_MOUNT_ACTOR(bLocal_822[2], bLocal_828[2]);
					TASK_CLEAR(bLocal_822[2]);
				}
			}
			if (Function_224(bLocal_822[3]) && Function_224(bLocal_828[3]))
			{
				if (GET_MOUNT(bLocal_822[3]) != bLocal_828[3])
				{
					ACTOR_MOUNT_ACTOR(bLocal_822[3], bLocal_828[3]);
					TASK_CLEAR(bLocal_822[3]);
				}
			}
			Function_377();
			iLocal_809 = 0;
			bLocal_895 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_chu_loop_road", 4));
			SET_CURVE_WEIGHT(bLocal_895, 50);
			bLocal_896 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_chu_cas_roaddetachedCurve14", 4));
			SET_CURVE_WEIGHT(bLocal_896, 5);
			bLocal_897 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_chu_cas_roaddetachedCurve16detachedCurve2", 4));
			SET_CURVE_WEIGHT(bLocal_897, 50);
			bLocal_898 = GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156detachedCurve2", 18));
			SET_CURVE_WEIGHT(bLocal_898, 5);
			if (Function_224(Global_34573))
			{
				Function_207(Global_34573);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_808 = 0;
			iLocal_806 = 0;
			iLocal_507 = 6;
			break;
		
		case 0x00000006:
			if (!iLocal_806)
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					Function_357(&uLocal_527, 10, 0, 4294967295, 4294967295);
					iLocal_806 = 1;
				}
			}
			if (!HUD_IS_FADING())
			{
				Function_555();
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 7;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_806)
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					Function_357(&uLocal_527, 10, 0, 4294967295, 4294967295);
					iLocal_806 = 1;
				}
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_354("rebel02_obj_RideSepulcro");
				bLocal_804 = Function_446(bLocal_498, Function_81(), (*&Local_5 + 924)[7], Global_34573, 1, 330, 4294967295, 0, 0, 1);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_804)))
				{
					ADD_BLIP_FOR_OBJECT(bLocal_804, 330, 0f, 2, 0);
				}
				Function_444(StackVal, StackVal, *(&Local_5 + 1448[16]), 0, 393272, 1);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				bLocal_899 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(Local_5.f_436, 0, 4294967295, Local_5.f_1916, 4, 1, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(Local_5.f_436, bLocal_899, 1, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(Local_5.f_436, bLocal_899, 4, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(Local_5.f_436, bLocal_899, 1, 1);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_DESIRED_LEADER(Local_5.f_436, bLocal_899, SQUAD_GET_ACTOR_BY_INDEX(Local_5.f_436, false));
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_820, -1.0f, -1.0f, 4, 1, 1);
				iLocal_507 = 8;
				Function_181(Global_30693[4]);
			}
			break;
		
		case 0x00000008:
			if (!iLocal_806)
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					Function_357(&uLocal_527, 10, 0, 4294967295, 4294967295);
					iLocal_806 = 1;
				}
			}
			else if (!iLocal_807)
			{
				if (Function_556(Global_34573, bLocal_804, 500.0f))
				{
					Function_357(&uLocal_527, 22, 0, 4294967295, 4294967295);
					iLocal_807 = 1;
				}
			}
			Function_554();
			if (Function_356(&iLocal_660, 5.0f))
			{
				if (Function_437(Global_34573, (*&Local_5 + 924)[2], 125.0f))
				{
					if (!IS_ACTORSET_VALID(Local_5.f_588))
					{
						Function_436((*&Local_5 + 924)[2]);
						if (!STREAMING_ARE_BOUNDS_LOADED(Function_436((*&Local_5 + 924)[2]), 90.0f))
						{
							Function_436((*&Local_5 + 924)[2]);
							STREAMING_LOAD_BOUNDS(Function_436((*&Local_5 + 924)[2]), 90.0f, 1);
						}
						else
						{
							Function_553();
							Function_505();
							Function_293(&iLocal_660);
							Function_293(&iLocal_666);
							iLocal_507 = 9;
						}
					}
				}
				else
				{
					Function_542();
				}
			}
			break;
		
		case 0x00000009:
			if (Function_356(&iLocal_660, 2.0f))
			{
				Function_504();
			}
			if (Function_433())
			{
				Function_357(&uLocal_527, 8, 0, 4294967295, 4294967295);
				Function_434(Global_34573, 0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (Function_224(GET_MOUNT(Global_34573)))
				{
					bLocal_611 = GET_MOUNT(Global_34573);
					Function_434(bLocal_611, 0);
					Function_207(bLocal_611);
					TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
				}
				Function_228();
				Function_52();
				FIRE_STOP_ALL_FIRES();
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 106;
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_5 + 924)[3]))
			{
				Function_357(&uLocal_527, 8, 0, 4294967295, 4294967295);
				Function_540();
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 106;
			}
			else if (Function_497())
			{
				Function_498(1);
				Function_293(&iLocal_660);
				Function_293(&iLocal_666);
				iLocal_507 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_512();
			STREAMING_UNLOAD_BOUNDS();
			SET_CURVE_WEIGHT(bLocal_895, 10);
			SET_CURVE_WEIGHT(bLocal_896, 10);
			SET_CURVE_WEIGHT(bLocal_897, 10);
			SET_CURVE_WEIGHT(bLocal_898, 10);
			iLocal_613[0] = 1;
			Function_293(&iLocal_660);
			Function_293(&iLocal_666);
			iLocal_806 = 0;
			bLocal_506 = true;
			iLocal_507 = 0;
			break;
	}
	return;
}

void Function_540() //Position: 0x1A42C / 107564
{
	Function_503(1);
	Function_541();
	return;
}

void Function_541() //Position: 0x1A439 / 107577
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_MidScene_v1_AA1", "Rebel02_MidScene_v1_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_MidScene_v1_AA2", "Rebel02_MidScene_v1_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Rebel02_MidScene_v1_AB", "Rebel02_MidScene_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Rebel02_MidScene_v1_AC", "Rebel02_MidScene_v1_AC", false, 1, 0, 0, 1);
		Function_335(13);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542() //Position: 0x1A544 / 107844
{
	if (Function_224(bLocal_610))
	{
		if (IS_PLAYER_TARGETTING_ACTOR(false, bLocal_610, 0))
		{
			Function_552();
			Function_293(&iLocal_666);
		}
		else if (ACTORS_IN_RANGE(Global_34573, bLocal_610, 8.0f))
		{
			if (!Function_551(bLocal_610, Global_34573, -0,825f))
			{
				if (GET_TASK_STATUS(bLocal_610, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_610, Global_34573, 0, 3212836864);
				}
			}
			else if (GET_TASK_STATUS(bLocal_610, 6) != 1)
			{
				TASK_STAND_STILL(bLocal_610, RAND_FLOAT_RANGE(3.0f, 5.0f), 0, 0);
			}
			if (Function_356(&iLocal_666, 8,5f))
			{
				if (iLocal_809 == 1)
				{
					Function_550();
					Function_293(&iLocal_666);
				}
				else if (IS_ACTOR_RIDING(Global_34573))
				{
					Function_549();
					Function_293(&iLocal_666);
				}
				else
				{
					Function_548();
					Function_293(&iLocal_666);
				}
			}
		}
		else if (!iLocal_809)
		{
			Function_547();
			Function_293(&iLocal_666);
			iLocal_809 = 1;
			iLocal_810 = 0;
			switch (iLocal_805)
			{
				case 0x00000000:
					iLocal_901 = 1;
					break;
				
				case 0x00000001:
					iLocal_901 = 4;
					break;
				
				case 0x00000002:
					iLocal_901 = 7;
					break;
				
				default:
					iLocal_901 = 10;
					break;
			}
		}
		else
		{
			switch (iLocal_901)
			{
				case 0x00000000:
					if (Function_356(&iLocal_666, 5.0f))
					{
						iLocal_901 = 1;
					}
					break;
				
				case 0x00000001:
					if (!Function_157())
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 15.0f))
						{
							Function_546();
							iLocal_901 = 2;
						}
					}
					break;
				
				case 0x00000002:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!ACTORS_IN_RANGE(Global_34573, bLocal_820, 40.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
					}
					else
					{
						Function_293(&iLocal_666);
						iLocal_901 = 3;
					}
					break;
				
				case 0x00000003:
					if (Function_356(&iLocal_666, 10.0f))
					{
						iLocal_901 = 4;
					}
					break;
				
				case 0x00000004:
					if (!Function_157())
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 15.0f))
						{
							Function_545();
							iLocal_901 = 5;
						}
					}
					break;
				
				case 0x00000005:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!ACTORS_IN_RANGE(Global_34573, bLocal_820, 40.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
					}
					else
					{
						Function_293(&iLocal_666);
						iLocal_901 = 6;
					}
					break;
				
				case 0x00000006:
					if (Function_356(&iLocal_666, 15.0f))
					{
						iLocal_901 = 7;
					}
					break;
				
				case 0x00000007:
					if (!Function_157())
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 15.0f))
						{
							Function_544();
							iLocal_901 = 8;
						}
					}
					break;
				
				case 0x00000008:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!ACTORS_IN_RANGE(Global_34573, bLocal_820, 40.0f))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
						}
					}
					else
					{
						Function_293(&iLocal_666);
						iLocal_901 = 9;
					}
					break;
				
				case 0x00000009:
					if (Function_356(&iLocal_666, 10.0f))
					{
						iLocal_901 = 10;
					}
					break;
				
				case 0x0000000A:
					if (!Function_157())
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_820, 15.0f))
						{
							Function_543();
							iLocal_901 = 17;
						}
					}
					break;
				
				case 0x00000011:
					break;
				
				default:
					LOG_ERROR("invalid stage one m_eConvState");
					break;
			}
			Function_439(bLocal_820, "Rebel02_RebelJonThrownOffHors", "Rebel02_RebelJonShotsRand", "Rebel02_RebelJonGetsOffHors", "Rebel02_RebelJonNoGetBakOn", "Rebel02_RebelJonStopsHors", "Rebel02_RebelJon2FarAhead", "Rebel02_RebelJon2FarBehind", "Rebel02_RebelJonRidesWrong");
		}
	}
	return;
}

void Function_543() //Position: 0x1A923 / 108835
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelNoTalk", "Rebel02_RebelNoTalk", false, 2, 1, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_544() //Position: 0x1A973 / 108915
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AA", "Rebel02_RebelBant_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v3_AB", "Rebel02_RebelBant_v3_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AC", "Rebel02_RebelBant_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v3_AD", "Rebel02_RebelBant_v3_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AE1", "Rebel02_RebelBant_v3_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AE2", "Rebel02_RebelBant_v3_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v3_AF", "Rebel02_RebelBant_v3_AF", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AG1", "Rebel02_RebelBant_v3_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v3_AG2", "Rebel02_RebelBant_v3_AG2", false, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_545() //Position: 0x1ABBB / 109499
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AA", "Rebel02_RebelBant_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v2_AB", "Rebel02_RebelBant_v2_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AC", "Rebel02_RebelBant_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v2_AD", "Rebel02_RebelBant_v2_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AE1", "Rebel02_RebelBant_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AE2", "Rebel02_RebelBant_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v2_AF", "Rebel02_RebelBant_v2_AF", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v2_AG", "Rebel02_RebelBant_v2_AG", false, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546() //Position: 0x1ADC2 / 110018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AA", "Rebel02_RebelBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AB", "Rebel02_RebelBant_v1_AB", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AC", "Rebel02_RebelBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AD", "Rebel02_RebelBant_v1_AD", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AE", "Rebel02_RebelBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AF", "Rebel02_RebelBant_v1_AF", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AG", "Rebel02_RebelBant_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AH", "Rebel02_RebelBant_v1_AH", 4, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelBant_v1_AI", "Rebel02_RebelBant_v1_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelBant_v1_AJ", "Rebel02_RebelBant_v1_AJ", 4, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x1B03F / 110655
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_SetsOff", "Rebel02_SetsOff", false, 2, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_548() //Position: 0x1B086 / 110726
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_WaitMountHorse", "Rebel02_WaitMountHorse", false, 1, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_549() //Position: 0x1B0DB / 110811
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_WaitSetOff", "Rebel02_WaitSetOff", false, 1, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_550() //Position: 0x1B128 / 110888
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_ComesBakToLuisa", "Rebel02_ComesBakToLuisa", false, 2, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_551(bool bParam0, bool bParam1, float fParam2) //Position: 0x1B17F / 110975
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

void Function_552() //Position: 0x1B219 / 111129
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_JonTargetsLuisa", "Rebel02_JonTargetsLuisa", false, 1, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_553() //Position: 0x1B270 / 111216
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Rebel02_RebelNearSepBant_v1_AA", "Rebel02_RebelNearSepBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel02_RebelNearSepBant_v1_AB", "Rebel02_RebelNearSepBant_v1_AB", 4, 1, 0, 0, 1);
		Function_335(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_554() //Position: 0x1B321 / 111393
{
	if (SQUAD_IS_VALID(Local_5.f_436))
	{
		if (SQUAD_GOAL_IS_VALID(bLocal_899))
		{
			if (IS_VOLUME_VALID((*&Local_5 + 900)[0]))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_820, (*&Local_5 + 900)[0]))
				{
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(Local_5.f_436, bLocal_899, 8, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED_ABSOLUTE(Local_5.f_436, bLocal_899, 16.0f);
					if (IS_ACTOR_VALID(bLocal_822[0]))
					{
						SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bLocal_822[0], 1);
						SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bLocal_822[0], 1);
					}
					DESTROY_VOLUME((*&Local_5 + 900)[0]);
				}
			}
		}
	}
	return;
}

void Function_555() //Position: 0x1B3A3 / 111523
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_RideToElSep", "Rebel02_RideToElSep", false, 1, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_556(bool bParam0, bool bParam1, float fParam2) //Position: 0x1B3F2 / 111602
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_398(bParam0);
			Function_422(bParam1);
			if (VDIST(Function_398(bParam0), Function_422(bParam1)) >= fParam2)
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

void Function_557() //Position: 0x1B50C / 111884
{
	switch (iLocal_507)
	{
		case 0x00000006:
			Function_588(&Local_499, 1);
			bLocal_498 = CREATE_LAYOUT(Function_81());
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Global_3422[3940] + 52), 0.0f, 1, true, 1);
			Function_31(1, 0, 1);
			Function_587();
			FIRE_STOP_ALL_FIRES();
			Function_40(47);
			Function_185(114693);
			Function_460(9);
			Function_36(&(Global_29008[Global_30707[2]]), 256);
			Function_41(256);
			Function_460(256);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_357(&uLocal_527, 0, 0, 4294967295, 4294967295);
			iLocal_507 = 7;
			break;
		
		case 0x00000007:
			Unknown_Function();
			if (StackVal)
			{
				Function_568();
				iLocal_507 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_224(Global_34573))
			{
				Function_328(Global_34573, (*&Local_5 + 1136)[0], 1, 1, 1);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
			}
			if (Function_224(bLocal_611))
			{
				Function_207(bLocal_611);
				Function_328(bLocal_611, (*&Local_5 + 1136)[2], 1, 1, 1);
				TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
				SET_ALLOW_RIDE_BY_AI(bLocal_611, 0);
			}
			if (Function_224(bLocal_610))
			{
				Function_328(bLocal_610, (*&Local_5 + 1136)[1], 1, 1, 1);
				TASK_STAND_STILL(bLocal_610, -1.0f, 0, 0);
			}
			Function_566(&Local_5 + 1876);
			Function_566(&Local_5 + 1880);
			Function_566(&Local_5 + 1908);
			Function_566(&Local_5 + 1912);
			Function_470(1);
			Function_506(Global_34573, &iLocal_528);
			Function_506(bLocal_610, &iLocal_528);
			iLocal_802 = 0;
			while (iLocal_802 <= 5)
			{
				Function_506(bLocal_822[iLocal_802], &iLocal_528);
				iLocal_802++;
			}
			iLocal_507 = 9;
			break;
		
		case 0x00000009:
			if ((!Function_295(&Local_499) && (Local_499.f_24 >= 1 && iLocal_525 != 0)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_02/REBEL_02"))
			{
				Function_518(StackVal, Function_568(), "$/cutscene/REBEL_02/REBEL_02", &uLocal_526, &iLocal_528, *(&Global_3422[3940] + 52), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
				iLocal_507 = 10;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_02/REBEL_02"))
				{
					LOG_ERROR("REBEL_02/REBEL_02 cutscene does NOT exist");
				}
				iLocal_507 = 12;
			}
			break;
		
		case 0x0000000A:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_507 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_281("$/cutscene/REBEL_02/REBEL_02", &iLocal_508, &Local_499, &bLocal_506, 57614, 57424, 57417, 54512, 54014, 54007, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_507 = 12;
			}
			break;
		
		case 0x0000000C:
			if (IS_LAYOUTREF_VALID(Local_5))
			{
				bLocal_659 = CREATE_OBJECT_ITERATOR(Local_5);
			}
			Function_564(8, 0, 1);
			RESET_ACTOR_GAITS(bLocal_610, 0);
			SET_CRIPPLE_ENABLE(bLocal_610, 0);
			SET_ACTOR_FACTION(bLocal_610, 20);
			TASK_PRIORITY_SET(bLocal_610, true);
			TASK_STAND_STILL(bLocal_610, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_610, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_610, 50.0f);
			SET_ACTOR_HEALTH(bLocal_610, GET_ACTOR_MAX_HEALTH(bLocal_610));
			SET_ACTOR_IS_COMPANION(bLocal_610, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_610, "stolen_panic", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_610, "stolen_panic/loop");
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_610, (*&Local_5 + 888)[0], 1, 1);
			SET_ACTOR_PROOF(bLocal_610, 16);
			RESET_ACTOR_GAITS(bLocal_611, 0);
			TASK_PRIORITY_SET(bLocal_611, true);
			TASK_STAND_STILL(bLocal_611, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_611, 50.0f);
			SET_ACTOR_HEALTH(bLocal_611, GET_ACTOR_MAX_HEALTH(bLocal_611));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_5 + 924)[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_5 + 924)[2]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_5 + 968)[18]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_5 + 968)[18]);
			Function_563(&iLocal_672);
			Function_563(&iLocal_678);
			Function_563(&iLocal_666);
			Function_563(&bLocal_700);
			Function_563(&iLocal_660);
			Function_563(&iLocal_675);
			Function_563(&iLocal_663);
			iLocal_802 = 0;
			while (iLocal_802 <= 5)
			{
				Function_563(&(vLocal_684[iLocal_8023]));
				iLocal_802++;
			}
			Function_561(&uLocal_704, bLocal_498);
			Function_371(&(Local_744[017]), bLocal_610, "MexGirl", 0, 0x5f5e100, 1);
			bLocal_506 = iLocal_525;
			iLocal_507 = 0;
			Function_559(&Local_499, &bLocal_506, &iLocal_507);
			Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_499);
			switch (bLocal_506)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_512();
					break;
				
				case 0x00000002:
					Function_512();
					break;
				
				case 0x00000003:
					Function_512();
					break;
				
				case 0x00000065:
					Function_512();
					break;
			}
			break;
	}
	return;
}

void Function_558(struct<25> Param0) //Position: 0x1B9E8 / 113128
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_506 = false;
			break;
		
		case 0x00000002:
			bLocal_506 = true;
			break;
		
		case 0x00000003:
			bLocal_506 = 2;
			break;
		
		case 0x00000004:
			bLocal_506 = 3;
			break;
		
		case 0x00000005:
			bLocal_506 = 101;
			break;
		
		case 0x0000000A:
			bLocal_506 = 101;
			break;
	}
}

void Function_559(int iParam0, var uParam1, int iParam2) //Position: 0x1BA49 / 113225
{
	if (Function_295(iParam0))
	{
		*uParam1 = Function_465(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_560();
	}
	return;
}

void Function_560() //Position: 0x1BA7D / 113277
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

int Function_561(var uParam0, bool bParam1) //Position: 0x1BACE / 113358
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_562(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_562(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_562(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_562(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_562(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1C176 / 115062
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
	Function_104(iParam0 + 8, bParam4);
	return 1;
}

void Function_563(int iParam0) //Position: 0x1C239 / 115257
{
	if (!Function_290(iParam0))
	{
		Function_294(iParam0, 0.0f);
	}
	return;
}

void Function_564(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C24E / 115278
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
						Function_220(bVar1);
					}
				}
				Function_565(bVar0);
			}
		}
	}
	return;
}

void Function_565(bool bParam0) //Position: 0x1C345 / 115525
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

void Function_566(int iParam0) //Position: 0x1C371 / 115569
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_234(*iParam0);
	vVar0 = { StackVal, StackVal, Function_234(*iParam0) };
	Function_567(*iParam0);
	vVar3 = { StackVal, StackVal, Function_567(*iParam0) };
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

vector3 Function_567(bool bParam0) //Position: 0x1C43D / 115773
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

struct<8> Function_568() //Position: 0x1C464 / 115812
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_5 = CREATE_LAYOUT("Rebel02_layout");
	Local_5.f_884 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "CutsceneVol_set");
	(*&Local_5 + 860)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene01Vol", 2, -2281,876f, 22,84285f, 4948,497f, 0.0f, -38,21188f, 0.0f, 17,32746f, 6.0f, 30,43822f);
	ADD_TO_VOLUME_SET(Local_5.f_884, (*&Local_5 + 860)[0]);
	(*&Local_5 + 860)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene02Vol", 2, -1384.0f, 12,48991f, 4332.0f, 0.0f, 28,35184f, 0.0f, 150.0f, 15.0f, 90.0f);
	ADD_TO_VOLUME_SET(Local_5.f_884, (*&Local_5 + 860)[1]);
	(*&Local_5 + 860)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene03Vol", 2, -1336,107f, 14,02453f, 4280,146f, 0.0f, 124,8945f, 0.0f, 6,719318f, 3,840477f, 5,085996f);
	ADD_TO_VOLUME_SET(Local_5.f_884, (*&Local_5 + 860)[2]);
	(*&Local_5 + 860)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "Cutscene04Vol", 2, -794,0623f, 14,54007f, 3725,522f, 0.0f, -44,16404f, 0.0f, 15,33967f, 6.0f, 11,47158f);
	ADD_TO_VOLUME_SET(Local_5.f_884, (*&Local_5 + 860)[3]);
	(*&Local_5 + 860)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CutsceneLastVol", 2, -805,0764f, 17,42245f, 3715,483f, 0.0f, 44,40644f, 0.0f, 55.0f, 10.0f, 35.0f);
	ADD_TO_VOLUME_SET(Local_5.f_884, (*&Local_5 + 860)[4]);
	Local_5.f_896 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "CampVol_set");
	(*&Local_5 + 888)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CampFireVol", 3, -2290,252f, 22,84285f, 4960,256f, 0.0f, 20.0f, 0.0f, 2,5f, 3.0f, 2,5f);
	ADD_TO_VOLUME_SET(Local_5.f_896, (*&Local_5 + 888)[0]);
	Local_5.f_920 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "SepulcroPathVol_set");
	(*&Local_5 + 900)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroPathVol01_a_frame", 2, -2239,244f, 19,98923f, 4896,755f, 0.0f, -125,2121f, 0.0f, 30,20986f, 10.0f, 56,8928f);
	ADD_TO_VOLUME_SET(Local_5.f_920, (*&Local_5 + 900)[0]);
	(*&Local_5 + 900)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroPathVol02_wide", 2, -2164,877f, 11,58188f, 4640,637f, 0.0f, -56,72931f, 0.0f, 192,1288f, 10.0f, 90,26276f);
	ADD_TO_VOLUME_SET(Local_5.f_920, (*&Local_5 + 900)[1]);
	(*&Local_5 + 900)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroPathVol03_a_frame", 2, -1792,621f, 11,51082f, 4388,814f, 0.0f, -76,92083f, 0.0f, 176,3353f, 10.0f, 84,03155f);
	ADD_TO_VOLUME_SET(Local_5.f_920, (*&Local_5 + 900)[2]);
	(*&Local_5 + 900)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroPathVol04_wide", 2, -1486,161f, 5,873007f, 4398,119f, 0.0f, -87,23183f, 0.0f, 173,5752f, 10.0f, 83,13451f);
	ADD_TO_VOLUME_SET(Local_5.f_920, (*&Local_5 + 900)[3]);
	Local_5.f_964 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "SepulcroVols_set");
	(*&Local_5 + 924)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroGatewayVol_old", 2, -1418,947f, 6,614375f, 4366,244f, -4,49027f, -86,85162f, 4,638273f, 26,26359f, 19,31931f, 21,80397f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[0]);
	(*&Local_5 + 924)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroFailZone", 2, -1360,031f, 15,36022f, 4301,221f, -0,3972119f, -57,66007f, 0,5370321f, 176,8064f, 20,52011f, 245,8219f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[1]);
	(*&Local_5 + 924)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroWarnZone", 2, -1361,077f, 15,35175f, 4295,252f, -0,3972119f, -57,66007f, 0,5370321f, 91,7904f, 18,34962f, 119,2616f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[2]);
	(*&Local_5 + 924)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "StartFightZone", 2, -1358,66f, 15,33175f, 4290,241f, -0,3972119f, -57,66007f, 0,5370321f, 64,52715f, 8,322174f, 77,65456f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[3]);
	(*&Local_5 + 924)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroCutsceneZone", 2, -1418,987f, 7,476637f, 4369,297f, -0,7555158f, -73,66512f, 0,9264526f, 32,63662f, 7,504638f, 28,41595f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[4]);
	(*&Local_5 + 924)[5] = CREATE_VOLUME_IN_LAYOUT(Local_5, "ArriveAtSepulcro", 2, -1430,193f, 6,023529f, 4382,405f, 0.0f, 19,99104f, 0.0f, 24,93632f, 7,818124f, 29,56864f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[5]);
	(*&Local_5 + 924)[6] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroDeSantaFleeAvoid", 2, -1359,665f, 14,48099f, 4296,851f, -0,3972119f, -57,66007f, 0,5370321f, 65.0f, 10.0f, 80.0f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[6]);
	(*&Local_5 + 924)[7] = CREATE_VOLUME_IN_LAYOUT(Local_5, "SepulcroGatewayVol", 3, -1418,181f, 6,625381f, 4368,323f, -0,7675238f, -71,27706f, 0,881665f, 8,889435f, 7,071726f, 8,800609f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[7]);
	(*&Local_5 + 924)[8] = CREATE_VOLUME_IN_LAYOUT(Local_5, "NoEmergTele", 2, -1363,042f, 14,01561f, 4299,311f, 0.0f, 27,52722f, 0.0f, 101,3839f, 39,00605f, 98,6326f);
	ADD_TO_VOLUME_SET(Local_5.f_964, (*&Local_5 + 924)[8]);
	Local_5.f_1064 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "CasaVols_set");
	(*&Local_5 + 968)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "ArriveAtCasa", 2, -785,8796f, 13,19093f, 3732,29f, 0.0f, 44,24192f, 0.0f, 11,65239f, 7,204329f, 13,64436f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[0]);
	(*&Local_5 + 968)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "UpstairsVol1", 2, -821,0635f, 18,14322f, 3710,551f, 0.0f, -45,41219f, 0.0f, 15,87828f, 6,024815f, 9,669018f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[1]);
	(*&Local_5 + 968)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "UpstairsVol2", 2, -805,7776f, 18,06658f, 3689,99f, 0.0f, -44,86248f, 0.0f, 8,122869f, 3.0f, 3,662236f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[2]);
	(*&Local_5 + 968)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "UpstairsVol3", 2, -811,484f, 19,06912f, 3699,881f, 0.0f, -44,86248f, 0.0f, 14,65629f, 4,89556f, 18,80337f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[3]);
	(*&Local_5 + 968)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "WhoreAttackTriggerVol", 2, -801,2439f, 13,05098f, 3714,231f, 0.0f, -47,25315f, 0.0f, 5,254804f, 3,324615f, 11,47997f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[4]);
	(*&Local_5 + 968)[5] = CREATE_VOLUME_IN_LAYOUT(Local_5, "DownstairsVol1", 2, -826,8104f, 13,05098f, 3720,175f, 0.0f, 45,60822f, 0.0f, 19,01092f, 4,653508f, 29,41936f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[5]);
	(*&Local_5 + 968)[6] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaVol", 2, -812,3151f, 19,57695f, 3716,852f, 0.0f, 45,62794f, 0.0f, 79,9892f, 15,36838f, 45,44862f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[6]);
	(*&Local_5 + 968)[7] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaTrapVol", 2, -811,4215f, 19,64425f, 3712,991f, 0.0f, 45,62794f, 0.0f, 62,77083f, 15,36838f, 39,95352f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[7]);
	(*&Local_5 + 968)[8] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaFuckWithMissionVol", 2, -830,5871f, 19,64425f, 3693,503f, 0.0f, 44,52172f, 0.0f, 123,2553f, 15,36838f, 54,54554f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[8]);
	(*&Local_5 + 968)[9] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaKillWhore2IpLeftVol", 2, -807,5696f, 18,09917f, 3707,478f, 0.0f, 46,04857f, 0.0f, 2,218433f, 3,682728f, 2,681694f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[9]);
	(*&Local_5 + 968)[10] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaCourtVol", 2, -800,1019f, 13,05097f, 3720,991f, 0.0f, 45,62794f, 0.0f, 29,3678f, 15.0f, 19,41295f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[10]);
	(*&Local_5 + 968)[11] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaUpstairs", 2, -813,894f, 19,78325f, 3704,024f, 0.0f, -44,74883f, 0.0f, 17,11305f, 5,977152f, 29,6314f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[11]);
	(*&Local_5 + 968)[12] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaPathWarnVol", 2, -1091,958f, 8,737683f, 4096,133f, 0.0f, 45,62794f, 0.0f, 1050.0f, 25.0f, 270.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[12]);
	(*&Local_5 + 968)[13] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaPathFailVol", 2, -1091,958f, 8,737683f, 4096,133f, 0.0f, 45,62794f, 0.0f, 1160.0f, 85.0f, 365.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[13]);
	(*&Local_5 + 968)[14] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaGatewayVol", 2, -793,3562f, 13,19093f, 3726,369f, 0.0f, 44,24192f, 0.0f, 6,45608f, 6,666006f, 4,961687f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[14]);
	(*&Local_5 + 968)[15] = CREATE_VOLUME_IN_LAYOUT(Local_5, "WagonStopVol", 2, -792,571f, 12,8516f, 3740,485f, 0.0f, -47,25315f, 0.0f, 20,44823f, 6,001912f, 12,36438f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[15]);
	(*&Local_5 + 968)[16] = CREATE_VOLUME_IN_LAYOUT(Local_5, "WagonHorseStopVol", 2, -796,0919f, 14,96102f, 3722,747f, 0.0f, -47,25315f, 0.0f, 12,25886f, 6,001912f, 11,71792f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[16]);
	(*&Local_5 + 968)[17] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaWarnVol", 2, -810,4734f, 17,44446f, 3719,353f, 0.0f, 44,24192f, 0.0f, 114,6363f, 30.0f, 162,1472f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[17]);
	(*&Local_5 + 968)[18] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaFailVol", 2, -793,7752f, 17,44446f, 3734,75f, 0.0f, 44,24192f, 0.0f, 140.0f, 30.0f, 227,3136f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[18]);
	(*&Local_5 + 968)[19] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaHorseVol", 2, -766,5235f, 16,35103f, 3735,034f, 0.0f, 45,62794f, 0.0f, 53,21231f, 15,36838f, 45,44862f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[19]);
	(*&Local_5 + 968)[20] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaCourtCoverVol", 2, -805,2587f, 13,99237f, 3715,975f, 0.0f, 45,62794f, 0.0f, 32,96155f, 3.0f, 21,70452f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[20]);
	(*&Local_5 + 968)[21] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaRebelRestrictVol", 2, -808,3603f, 19,57695f, 3720,721f, 0.0f, 45,62794f, 0.0f, 79,9892f, 15,36838f, 61,87353f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[21]);
	(*&Local_5 + 968)[22] = CREATE_VOLUME_IN_LAYOUT(Local_5, "NoEmergCasa", 2, -804,0441f, 13,2438f, 3726,527f, 0.0f, 44,24192f, 0.0f, 133,7371f, 73,98309f, 210,8413f);
	ADD_TO_VOLUME_SET(Local_5.f_1064, (*&Local_5 + 968)[22]);
	Local_5.f_1096 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "CasaSearchVols_set");
	(*&Local_5 + 1068)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaSearchVol01", 2, -820,0051f, 13,05098f, 3712,232f, 0.0f, -47,25315f, 0.0f, 3.0f, 3.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1096, (*&Local_5 + 1068)[0]);
	(*&Local_5 + 1068)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaSearchVol02", 2, -815,3091f, 13,05098f, 3707,505f, 0.0f, 43,13705f, 0.0f, 3.0f, 3.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1096, (*&Local_5 + 1068)[1]);
	(*&Local_5 + 1068)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaSearchVol03", 2, -809,3848f, 13,05098f, 3701,383f, 0.0f, -45,52593f, 0.0f, 3.0f, 3.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1096, (*&Local_5 + 1068)[2]);
	(*&Local_5 + 1068)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaSearchVol04", 2, -811,1065f, 17,88917f, 3694,835f, 0.0f, 44,24192f, 0.0f, 6,517704f, 2,6f, 3.0f);
	ADD_TO_VOLUME_SET(Local_5.f_1096, (*&Local_5 + 1068)[3]);
	(*&Local_5 + 1068)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaSearchVol05", 2, -788,7782f, 13,19093f, 3690,674f, 0.0f, 44,24192f, 0.0f, 6,45608f, 6,666006f, 14,33444f);
	ADD_TO_VOLUME_SET(Local_5.f_1096, (*&Local_5 + 1068)[4]);
	(*&Local_5 + 1068)[5] = CREATE_VOLUME_IN_LAYOUT(Local_5, "CasaSearchVol06", 2, -793,3562f, 13,19093f, 3698,587f, 0.0f, 44,24192f, 0.0f, 6,45608f, 6,666006f, 17,11549f);
	ADD_TO_VOLUME_SET(Local_5.f_1096, (*&Local_5 + 1068)[5]);
	Local_5.f_1128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_5, "CasaAttackVols_set");
	(*&Local_5 + 1100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_5, "AttackVolDown", 2, -808,8519f, 13,05098f, 3710,336f, 0.0f, -47,25315f, 0.0f, 31,3943f, 3.0f, 34,37615f);
	ADD_TO_VOLUME_SET(Local_5.f_1128, (*&Local_5 + 1100)[0]);
	(*&Local_5 + 1100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_5, "AttackVolFront", 2, -793,0328f, 13,05098f, 3727,451f, 0.0f, -47,25315f, 0.0f, 23,82177f, 3.0f, 34,37615f);
	ADD_TO_VOLUME_SET(Local_5.f_1128, (*&Local_5 + 1100)[1]);
	(*&Local_5 + 1100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_5, "AttackVolLeft", 2, -832,026f, 13,05098f, 3735,47f, 0.0f, -46,18567f, 0.0f, 44,41051f, 3.0f, 34,26023f);
	ADD_TO_VOLUME_SET(Local_5.f_1128, (*&Local_5 + 1100)[2]);
	(*&Local_5 + 1100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_5, "AttackVolBack", 2, -822,1957f, 13,05098f, 3696,679f, 0.0f, -46,18567f, 0.0f, 14,98617f, 3,335109f, 67,01739f);
	ADD_TO_VOLUME_SET(Local_5.f_1128, (*&Local_5 + 1100)[3]);
	(*&Local_5 + 1100)[4] = CREATE_VOLUME_IN_LAYOUT(Local_5, "AttackVolRight", 2, -784,9143f, 13,05098f, 3696,614f, 0.0f, -46,18567f, 0.0f, 33,38948f, 3,335109f, 20,33838f);
	ADD_TO_VOLUME_SET(Local_5.f_1128, (*&Local_5 + 1100)[4]);
	(*&Local_5 + 1100)[5] = CREATE_VOLUME_IN_LAYOUT(Local_5, "AttackVolUp", 2, -805,1093f, 19,78325f, 3705,748f, 0.0f, -44,74883f, 0.0f, 31,19502f, 5,977152f, 42,243f);
	ADD_TO_VOLUME_SET(Local_5.f_1128, (*&Local_5 + 1100)[5]);
	Local_5.f_1132 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_5, 8, 0);
	(*&Local_5 + 1136)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart01", -2289,386f, 21,89979f, 4956,069f, -171,831f, -99,01144f, 171,2124f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1136)[0], Local_5.f_1132);
	(*&Local_5 + 1136)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "CompanionStart01", -2288.0f, 21,99682f, 4957,407f, 0.0f, 50,13224f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1136)[1], Local_5.f_1132);
	(*&Local_5 + 1136)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerHorseStart01", -2284.0f, 21,83827f, 4952.0f, 0.0f, -35,13409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1136)[2], Local_5.f_1132);
	Local_5.f_1152 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_5, 8, 0);
	(*&Local_5 + 1156)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart02", -1418,947f, 6,614375f, 4366,244f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1156)[0], Local_5.f_1152);
	(*&Local_5 + 1156)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerEnd02", -1403,208f, 7,344431f, 4338,462f, 0.0f, -21,89324f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1156)[1], Local_5.f_1152);
	(*&Local_5 + 1156)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerHorseEnd02", -1418,947f, 6,614375f, 4366,244f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1156)[2], Local_5.f_1152);
	(*&Local_5 + 1156)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "DeSantaEnd02", -1360,7f, 13,0707f, 4305,65f, 0.0f, 93,6547f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1156)[3], Local_5.f_1152);
	Local_5.f_1176 = CREATE_OBJECTSET_IN_LAYOUT("RebelEndCutscene02Set", Local_5, 8, 0);
	(*&Local_5 + 1180)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel0End02", -1403,071f, 7,694747f, 4336,041f, 0.0f, -16,64769f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1180)[0], Local_5.f_1176);
	(*&Local_5 + 1180)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel1End02", -1403,314f, 8,101326f, 4333,533f, 0.0f, 7,391869f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1180)[1], Local_5.f_1176);
	(*&Local_5 + 1180)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel2End02", -1401,234f, 8,069402f, 4334,121f, 0.0f, -14,39168f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1180)[2], Local_5.f_1176);
	(*&Local_5 + 1180)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel3End02", -1404,751f, 7,295949f, 4336,829f, 0.0f, -18,50282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1180)[3], Local_5.f_1176);
	(*&Local_5 + 1180)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "RebelDialogueEnd02", -1401,772f, 7,785682f, 4336,618f, 0.0f, -22,61957f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1180)[4], Local_5.f_1176);
	Local_5.f_1204 = CREATE_OBJECTSET_IN_LAYOUT("HorseEndCutscene02Set", Local_5, 8, 0);
	(*&Local_5 + 1208)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse0End02", -1421,507f, 6,008529f, 4370,813f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1208)[0], Local_5.f_1204);
	(*&Local_5 + 1208)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse1End02", -1421,592f, 5,821729f, 4373,336f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1208)[1], Local_5.f_1204);
	(*&Local_5 + 1208)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse2End02", -1419,094f, 5,861488f, 4370,803f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1208)[2], Local_5.f_1204);
	(*&Local_5 + 1208)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse3End02", -1420,242f, 6,166512f, 4374,376f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1208)[3], Local_5.f_1204);
	(*&Local_5 + 1208)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "DialogueHorseEnd02", -1420,549f, 5,874701f, 4367,945f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1208)[4], Local_5.f_1204);
	Local_5.f_1232 = CREATE_OBJECTSET_IN_LAYOUT("SepulcroArmyEndCutscene02Set", Local_5, 8, 0);
	(*&Local_5 + 1236)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroArmy0End02", -1366,21f, 13,0512f, 4306,71f, 0.0f, -78,5213f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1236)[0], Local_5.f_1232);
	(*&Local_5 + 1236)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroArmy1End02", -1352,11f, 13,0509f, 4279,76f, 0.0f, -15,9567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1236)[1], Local_5.f_1232);
	(*&Local_5 + 1236)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroArmy2End02", -1368,24f, 13,051f, 4287,32f, 0.0f, 22,5908f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1236)[2], Local_5.f_1232);
	(*&Local_5 + 1236)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroArmy3End02", -1362,76f, 13,0661f, 4299,19f, 0.0f, 159,591f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1236)[3], Local_5.f_1232);
	(*&Local_5 + 1236)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroArmy4End02", -1361,53f, 13,0661f, 4298,38f, 0.0f, 154,099f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1236)[4], Local_5.f_1232);
	(*&Local_5 + 1236)[5] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroArmy5End02", -1333,94f, 13,0604f, 4301,18f, 0.0f, -15,9567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1236)[5], Local_5.f_1232);
	Local_5.f_1264 = CREATE_OBJECTSET_IN_LAYOUT("RebelArriveAtSepulcroSet", Local_5, 8, 0);
	(*&Local_5 + 1268)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel0AtSepulcro", -1426,039f, 6,023529f, 4369,763f, 0.0f, -137,9353f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1268)[0], Local_5.f_1264);
	(*&Local_5 + 1268)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel1AtSepulcro", -1426,154f, 6,023533f, 4368,642f, 0.0f, -105,7062f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1268)[1], Local_5.f_1264);
	(*&Local_5 + 1268)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel2AtSepulcro", -1426,814f, 6,023533f, 4367,644f, 0.0f, -134,1365f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1268)[2], Local_5.f_1264);
	(*&Local_5 + 1268)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel3AtSepulcro", -1426,947f, 6,023533f, 4369,498f, 0.0f, -77,14767f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1268)[3], Local_5.f_1264);
	(*&Local_5 + 1268)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "RebelDialogueAtSepulcro", -1428,127f, 6,023529f, 4367,745f, 0.0f, 7,554352f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1268)[4], Local_5.f_1264);
	Local_5.f_1292 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_5, 8, 0);
	(*&Local_5 + 1296)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart03", -1335,886f, 13,051f, 4279,69f, 0.0f, 150,627f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1296)[0], Local_5.f_1292);
	(*&Local_5 + 1296)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerEnd03", -1335,886f, 13,051f, 4279,69f, 0.0f, 150,627f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1296)[1], Local_5.f_1292);
	(*&Local_5 + 1296)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "DeSantaEnd03", -1335,767f, 12,99541f, 4280,204f, 0.0f, -59,45884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1296)[2], Local_5.f_1292);
	(*&Local_5 + 1296)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerHorseEnd03", -1324,691f, 13,1626f, 4267,309f, -7,063324f, -109,3736f, 8,245247f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1296)[3], Local_5.f_1292);
	(*&Local_5 + 1296)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "DeSantaHeadEnd03", -1336,21f, 13,051f, 4282,489f, 0.0f, -59,45884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1296)[4], Local_5.f_1292);
	Local_5.f_1320 = CREATE_OBJECTSET_IN_LAYOUT("RebelEndCutscene03Set", Local_5, 8, 0);
	(*&Local_5 + 1324)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel0End03", -1333,768f, 13,05099f, 4282,641f, 0.0f, 8,907767f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1324)[0], Local_5.f_1320);
	(*&Local_5 + 1324)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel1End03", -1337,63f, 13,05099f, 4276.0f, 0.0f, -489,3514f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1324)[1], Local_5.f_1320);
	(*&Local_5 + 1324)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel2End03", -1330,797f, 13,05098f, 4280.0f, 0.0f, 87,98988f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1324)[2], Local_5.f_1320);
	(*&Local_5 + 1324)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel3End03", -1334,938f, 13,05099f, 4274,938f, 0.0f, -200,4303f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1324)[3], Local_5.f_1320);
	(*&Local_5 + 1324)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "DialogueRebelEnd03", -1332,328f, 13,05098f, 4276,329f, 0.0f, -207,2115f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1324)[4], Local_5.f_1320);
	Local_5.f_1348 = CREATE_OBJECTSET_IN_LAYOUT("HorseEndCutscene03Set", Local_5, 8, 0);
	(*&Local_5 + 1352)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse0End03", -1421,507f, 6,008529f, 4370,813f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1352)[0], Local_5.f_1348);
	(*&Local_5 + 1352)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse1End03", -1421,592f, 5,821729f, 4373,336f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1352)[1], Local_5.f_1348);
	(*&Local_5 + 1352)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse2End03", -1419,094f, 5,861488f, 4370,803f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1352)[2], Local_5.f_1348);
	(*&Local_5 + 1352)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Horse3End03", -1420,242f, 6,166512f, 4374,376f, 0.0f, -61,12954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1352)[3], Local_5.f_1348);
	(*&Local_5 + 1352)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "DialogueHorseEnd03", -1320,924f, 13,05099f, 4271,189f, 0.0f, -112,0724f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1352)[4], Local_5.f_1348);
	Local_5.f_1376 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_5, 8, 0);
	(*&Local_5 + 1380)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStart04", -792.0f, 13,05098f, 3729,833f, 0.0f, 38,82521f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1380)[0], Local_5.f_1376);
	(*&Local_5 + 1380)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerHorseStart04", -781,2715f, 13,01245f, 3726,85f, 0.0f, 189,6276f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1380)[1], Local_5.f_1376);
	(*&Local_5 + 1380)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "RebelStart04", -790,6715f, 13,05098f, 3728f, 0.0f, 367,7576f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1380)[2], Local_5.f_1376);
	Local_5.f_1396 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_5, 8, 0);
	(*&Local_5 + 1400)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerStartLast", -803,2122f, 13,05097f, 3716,6f, 0.0f, -26,73706f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1400)[0], Local_5.f_1396);
	(*&Local_5 + 1400)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerEndLast", -791,275f, 13,0516f, 3710,17f, 0.0f, -130,298f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1400)[1], Local_5.f_1396);
	(*&Local_5 + 1400)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "PlayerHorseEndLast", -780,9337f, 12,80098f, 3727,935f, 0,977945f, -173,0403f, -1,501878f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1400)[2], Local_5.f_1396);
	(*&Local_5 + 1400)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "OutriWhoreEndLast", -788,769f, 13,0516f, 3706,97f, 0.0f, -18,7286f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1400)[3], Local_5.f_1396);
	(*&Local_5 + 1400)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "OutroWhoreGotoLast", -792,9061f, 13,16718f, 3697,833f, 0.0f, 242,6073f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1400)[4], Local_5.f_1396);
	(*&Local_5 + 1400)[5] = CREATE_POINT_IN_LAYOUT(Local_5, "CamOrientLast", -793,2162f, 14,05098f, 3726,659f, 0.0f, -223,6263f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1400)[5], Local_5.f_1396);
	Local_5.f_1428 = CREATE_OBJECTSET_IN_LAYOUT("CasaAmyCutsceneLastSet", Local_5, 8, 0);
	(*&Local_5 + 1432)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "CasaArmy0DeadLast", -800,61f, 13,05f, 3715,47f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1432)[0], Local_5.f_1428);
	(*&Local_5 + 1432)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "CasaArmy1DeadLast", -806,18f, 13,05097f, 3711,79f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1432)[1], Local_5.f_1428);
	(*&Local_5 + 1432)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "CasaArmy2DeadLast", -797,04f, 13,05097f, 3709,71f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1432)[2], Local_5.f_1428);
	*(&Local_5 + 1448[06]) = { -1386,635f, 16,62871f, 4308,941f };
	*(&Local_5 + 1448[06] + 12) = { 0.0f, 120,7193f, 0.0f };
	*(&Local_5 + 1448[16]) = { -1419,369f, 5,873005f, 4371,827f };
	*(&Local_5 + 1448[16] + 12) = { 0.0f, -57,45818f, 0.0f };
	*(&Local_5 + 1448[26]) = { -1335,767f, 12,99541f, 4280,204f };
	*(&Local_5 + 1448[26] + 12) = { 0.0f, -57,45818f, 0.0f };
	*(&Local_5 + 1448[36]) = { -1430,471f, 5,873005f, 4383,987f };
	*(&Local_5 + 1448[36] + 12) = { 0.0f, -64,63998f, 0.0f };
	*(&Local_5 + 1548[06]) = { -1346,947f, 13,05099f, 4294,266f };
	*(&Local_5 + 1548[06] + 12) = { 0.0f, 131,9816f, 0.0f };
	*(&Local_5 + 1548[16]) = { -1369,693f, 13,05099f, 4294,177f };
	*(&Local_5 + 1548[16] + 12) = { 0.0f, 153,735f, 0.0f };
	Local_5.f_1600 = CREATE_OBJECTSET_IN_LAYOUT("RebelFirstAttackPos0Set", Local_5, 8, 0);
	(*&Local_5 + 1604)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel0FirstAttackPos0", -1367,406f, 13,05099f, 4320,348f, 0.0f, -51,83665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1604)[0], Local_5.f_1600);
	(*&Local_5 + 1604)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel1FirstAttackPos0", -1370,372f, 13,05099f, 4298,534f, 0.0f, -98,37217f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1604)[1], Local_5.f_1600);
	(*&Local_5 + 1604)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel2FirstAttackPos0", -1369,296f, 13,05099f, 4310,208f, 0.0f, -51,83665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1604)[2], Local_5.f_1600);
	(*&Local_5 + 1604)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel3FirstAttackPos0", -1375,071f, 13,05099f, 4291,836f, 0.0f, -96,79039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1604)[3], Local_5.f_1600);
	(*&Local_5 + 1604)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel4FirstAttackPos0", -1361,202f, 13,05099f, 4320,477f, 0.0f, -51,83665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1604)[4], Local_5.f_1600);
	Local_5.f_1628 = CREATE_OBJECTSET_IN_LAYOUT("RebelSecondAttackPos0Set", Local_5, 8, 0);
	(*&Local_5 + 1632)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel0SecondAttackPos0", -1342,617f, 13,05099f, 4306,234f, 0.0f, -51,83665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1632)[0], Local_5.f_1628);
	(*&Local_5 + 1632)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel1SecondAttackPos0", -1360,346f, 13,05099f, 4300,875f, 0.0f, -98,37217f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1632)[1], Local_5.f_1628);
	(*&Local_5 + 1632)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel2SecondAttackPos0", -1355,944f, 13,05099f, 4299,225f, 0.0f, -51,83665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1632)[2], Local_5.f_1628);
	(*&Local_5 + 1632)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel3SecondAttackPos0", -1347,814f, 13,05099f, 4286,334f, 0.0f, -96,79039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1632)[3], Local_5.f_1628);
	(*&Local_5 + 1632)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "Rebel4SecondAttackPos0", -1337,483f, 13,05099f, 4306,114f, 0.0f, -51,83665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1632)[4], Local_5.f_1628);
	Local_5.f_1656 = CREATE_OBJECTSET_IN_LAYOUT("SepulcroGuardPos0Set", Local_5, 8, 0);
	(*&Local_5 + 1660)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroGuard0", -1346,545f, 13,05099f, 4295,356f, 0.0f, 149,5599f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1660)[0], Local_5.f_1656);
	(*&Local_5 + 1660)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroGuard1", -1350,283f, 13,05099f, 4288,63f, 0.0f, 130,2092f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1660)[1], Local_5.f_1656);
	(*&Local_5 + 1660)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroGuard2", -1357,791f, 13,04197f, 4299,609f, 0.0f, 123,3329f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1660)[2], Local_5.f_1656);
	(*&Local_5 + 1660)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroGuard3", -1354,995f, 13,05099f, 4304,596f, 0.0f, 120,3261f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1660)[3], Local_5.f_1656);
	(*&Local_5 + 1660)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroGuard4", -1347,79f, 13,05099f, 4293,177f, 0.0f, 135,6103f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1660)[4], Local_5.f_1656);
	(*&Local_5 + 1660)[5] = CREATE_POINT_IN_LAYOUT(Local_5, "SepulcroGuard5", -1341,553f, 13,05098f, 4301,245f, 0.0f, 90,97581f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1660)[5], Local_5.f_1656);
	Local_5.f_1688 = CREATE_OBJECTSET_IN_LAYOUT("CasaFlagsSet", Local_5, 8, 0);
	(*&Local_5 + 1692)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "WhoreFleeTo", -796.0f, 13,05098f, 3764.0f, 0.0f, -389,5181f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1692)[0], Local_5.f_1688);
	(*&Local_5 + 1692)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "WhoreCRunTo", -807,7966f, 16,89852f, 3707,202f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1692)[1], Local_5.f_1688);
	(*&Local_5 + 1692)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "UpstairsAttack", -805,6595f, 16,89852f, 3694,176f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1692)[2], Local_5.f_1688);
	(*&Local_5 + 1692)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "WagonBounds", -852,8894f, 12,91355f, 3815,232f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1692)[3], Local_5.f_1688);
	(*&Local_5 + 1692)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "WagonStart", -899,6647f, 18,09273f, 3834,129f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1692)[4], Local_5.f_1688);
	(*&Local_5 + 1692)[5] = CREATE_POINT_IN_LAYOUT(Local_5, "RebelCoverPosition", -800,9064f, 13,051f, 3727,673f, 0.0f, 30,33031f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1692)[5], Local_5.f_1688);
	Local_5.f_1720 = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackDownSet", Local_5, 8, 0);
	(*&Local_5 + 1724)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown01", -817,2635f, 13,22676f, 3716,48f, 0.0f, -138,0263f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[0], Local_5.f_1720);
	(*&Local_5 + 1724)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown02", -808,625f, 13,05098f, 3709,656f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[1], Local_5.f_1720);
	(*&Local_5 + 1724)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown03", -808,2468f, 13,05098f, 3707,752f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[2], Local_5.f_1720);
	(*&Local_5 + 1724)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown04", -804,3552f, 13,05098f, 3701,17f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[3], Local_5.f_1720);
	(*&Local_5 + 1724)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown05", -789,406f, 13,05098f, 3707,136f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[4], Local_5.f_1720);
	(*&Local_5 + 1724)[5] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown06", -785,4894f, 13,05098f, 3711,815f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[5], Local_5.f_1720);
	(*&Local_5 + 1724)[6] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown07", -801,8536f, 13,05098f, 3708,375f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[6], Local_5.f_1720);
	(*&Local_5 + 1724)[7] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackDown08", -816,9571f, 13,05098f, 3723,515f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1724)[7], Local_5.f_1720);
	Local_5.f_1760 = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackUpSet", Local_5, 8, 0);
	(*&Local_5 + 1764)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackUp01", -815,8548f, 16,8461f, 3715,082f, 0.0f, -131,9682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1764)[0], Local_5.f_1760);
	(*&Local_5 + 1764)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackUp02", -805,0466f, 16,89852f, 3704,812f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1764)[1], Local_5.f_1760);
	(*&Local_5 + 1764)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackUp03", -817,9808f, 16,8461f, 3706,609f, 0.0f, -131,9682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1764)[2], Local_5.f_1760);
	(*&Local_5 + 1764)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackUp04", -804,9977f, 16,8461f, 3692,507f, 0.0f, -131,9682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1764)[3], Local_5.f_1760);
	(*&Local_5 + 1764)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackUp05", -801,6591f, 16,89852f, 3701,326f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1764)[4], Local_5.f_1760);
	(*&Local_5 + 1764)[5] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackUp06", -806,9894f, 16,8461f, 3687,792f, 0.0f, -131,9682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1764)[5], Local_5.f_1760);
	Local_5.f_1792 = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackLeftSet", Local_5, 8, 0);
	(*&Local_5 + 1796)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackLeft01", -818,0289f, 13,05098f, 3740,31f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1796)[0], Local_5.f_1792);
	(*&Local_5 + 1796)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackLeft02", -828,904f, 13,05098f, 3725,194f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1796)[1], Local_5.f_1792);
	(*&Local_5 + 1796)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackLeft03", -831,7933f, 13,05098f, 3714,198f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1796)[2], Local_5.f_1792);
	Local_5.f_1812 = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackBackSet", Local_5, 8, 0);
	(*&Local_5 + 1816)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackBack01", -807,6249f, 13,05098f, 3687,546f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1816)[0], Local_5.f_1812);
	(*&Local_5 + 1816)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackBack02", -798,7274f, 13,05098f, 3687,208f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1816)[1], Local_5.f_1812);
	(*&Local_5 + 1816)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackBack03", -813,5142f, 13,05098f, 3689,783f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1816)[2], Local_5.f_1812);
	(*&Local_5 + 1816)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackBack04", -831,4257f, 13,05098f, 3707,72f, 0.0f, -134,8413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1816)[3], Local_5.f_1812);
	(*&Local_5 + 1816)[4] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackBack05", -799,4173f, 13,05098f, 3683,661f, 0.0f, -244,3242f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1816)[4], Local_5.f_1812);
	Local_5.f_1840 = CREATE_OBJECTSET_IN_LAYOUT("CasaAttackRightSet", Local_5, 8, 0);
	(*&Local_5 + 1844)[0] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackRight01", -775,7743f, 13,05098f, 3704,381f, 0.0f, -313,204f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1844)[0], Local_5.f_1840);
	(*&Local_5 + 1844)[1] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackRight02", -781,4497f, 13,05098f, 3697,697f, 0.0f, -169,4503f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1844)[1], Local_5.f_1840);
	(*&Local_5 + 1844)[2] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackRight03", -782,5757f, 13,05097f, 3707,967f, 0.0f, -52,86881f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1844)[2], Local_5.f_1840);
	(*&Local_5 + 1844)[3] = CREATE_POINT_IN_LAYOUT(Local_5, "AttackRight04", -787,3358f, 13,05098f, 3706,822f, 0.0f, -213,4433f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_5 + 1844)[3], Local_5.f_1840);
	Local_5.f_1864 = CREATE_GRINGO_IN_LAYOUT(Local_5, "SmokeCasa1", "rand_idle_stand", -793,2352f, 13,05098f, 3720,15f, 0.0f, 176,8846f, 0.0f);
	Local_5.f_1868 = CREATE_GRINGO_IN_LAYOUT(Local_5, "SmokeCasa2", "rand_idle_stand", -811,3754f, 13,05098f, 3713,183f, 0.0f, 236,912f, 0.0f);
	Local_5.f_1872 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rebel02_cs02_v", "rebel02_cs02_v", -1386,635f, 16,62871f, 4308,941f, 0.0f, 120,7193f, 0.0f);
	Local_5.f_1876 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverRightCorner_rebel_start", -791,0948f, 13,05098f, 3726,799f, 0.0f, 135,6715f, 0.0f, 1);
	Local_5.f_1880 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverRightCorner_0_DOWN_LEFT", -816,186f, 13,05098f, 3715,877f, 0.0f, -47,35138f, 0.0f, 1);
	Local_5.f_1884 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverLeftCorner_1_DOWN_MIDDLE", -808,7753f, 13,2208f, 3708,6f, 0.0f, 44,12181f, 0.0f, 1);
	Local_5.f_1888 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverLeftCorner_2_DOWN_RIGHT", -804,4324f, 13,05098f, 3704,116f, 0.0f, 46,25525f, 0.0f, 1);
	Local_5.f_1892 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverLow_3_UP_REAR", -814,3682f, 16,70065f, 3713,648f, 0.0f, -134,5891f, 0.0f, 4);
	Local_5.f_1896 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverLow_4_UP_LEFT", -807,8585f, 16,85747f, 3707,326f, 0.0f, -134,5891f, 0.0f, 4);
	Local_5.f_1900 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverLow_5_UP_RIGHT", -805,0452f, 16,78913f, 3703,989f, 0.0f, -134,5891f, 0.0f, 4);
	Local_5.f_1904 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverLow_two0", -814,0518f, 13,051f, 3724,316f, 0.0f, -132,9721f, 0.0f, 4);
	Local_5.f_1908 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverRightCorner_two1", -811,9688f, 12,99737f, 3711,613f, 0.0f, -47,35138f, 0.0f, 1);
	Local_5.f_1912 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_5, "coverRightCorner_two2", -816,2787f, 13,05098f, 3727,967f, 0.0f, 46,39547f, 0.0f, 1);
}

var A)&YEùÄ®ýA.IþE Ä®SA9'^EéÜÄ® AEäfEâ=(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40) //Position: 0x2010A / 131338
{
	Local_5.f_1924 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
}

void Function_570(bool bParam0, bool bParam1) //Position: 0x211BC / 135612
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_571(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x211DC / 135644
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

var Function_572(int iParam0, bool bParam1) //Position: 0x21230 / 135728
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_576(iParam0))
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
						Function_573(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_573(bool bParam0, bool bParam1) //Position: 0x212B0 / 135856
{
	Function_575(bParam0);
	Function_574(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_574(bool bParam0) //Position: 0x212D6 / 135894
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_575(bool bParam0) //Position: 0x212FA / 135930
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

bool Function_576(int iParam0) //Position: 0x213C9 / 136137
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

var Function_577(int iParam0, bool bParam1) //Position: 0x213E0 / 136160
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

bool Function_578(var uParam0) //Position: 0x21473 / 136307
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_582();
	iVar1 = 0;
	if (!Function_196(uParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_581(uParam0[iVar03], 8);
		}
		else if (Function_580())
		{
			iVar1 = 1;
			Function_581(uParam0[iVar03], 8);
		}
		Function_581(uParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_196(uParam0[iVar03], 4))
		{
			if (!Function_196(uParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*uParam0)[iVar03], (Function_196(uParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*uParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*uParam0)[iVar03], true, (Function_196(uParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*uParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*uParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*uParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_581(uParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_196(uParam0[iVar03], 4))
		{
			if (!Function_196(uParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*uParam0)[iVar03]))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*uParam0)[iVar03]))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*uParam0)[iVar03], 4294967295))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*uParam0)[iVar03])))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*uParam0)[iVar03]))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*uParam0)[iVar03])))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*uParam0)[iVar03])))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*uParam0)[iVar03]))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*uParam0)[iVar03], 6)))
						{
							Function_581(uParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*uParam0)[iVar03]))
						{
							Function_581(uParam0[iVar03], 2);
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
	Function_579();
	return 1;
}

void Function_579() //Position: 0x217EE / 137198
{
	if (!Function_325(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_580() //Position: 0x2182E / 137262
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

void Function_581(var uParam0, int iParam1) //Position: 0x21859 / 137305
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_582() //Position: 0x2186A / 137322
{
	if (!Function_325(128))
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

int Function_583() //Position: 0x218AC / 137388
{
	Function_586(&Local_5 + 4, 538, 2, 0);
	Function_586(&Local_5 + 4, 534, 2, 0);
	Function_586(&Local_5 + 4, 537, 2, 0);
	Function_586(&Local_5 + 4, 535, 2, 0);
	Function_586(&Local_5 + 4, 529, 2, 0);
	Function_586(&Local_5 + 4, 984, 2, 0);
	Function_586(&Local_5 + 4, 990, 2, 0);
	Function_586(&Local_5 + 4, 988, 2, 0);
	Function_586(&Local_5 + 4, 977, 2, 0);
	Function_586(&Local_5 + 4, 986, 2, 0);
	Function_586(&Local_5 + 4, 380, 2, 0);
	Function_586(&Local_5 + 4, 396, 2, 0);
	Function_586(&Local_5 + 4, 392, 2, 0);
	Function_586(&Local_5 + 4, 379, 2, 0);
	Function_586(&Local_5 + 4, 395, 2, 0);
	Function_586(&Local_5 + 4, 393, 2, 0);
	Function_586(&Local_5 + 4, 556, 2, 0);
	Function_586(&Local_5 + 4, 1128, 2, 0);
	Function_586(&Local_5 + 4, 518, 2, 0);
	Function_586(&Local_5 + 4, 520, 2, 0);
	Function_586(&Local_5 + 4, 383, 2, 0);
	Function_586(&Local_5 + 4, 394, 2, 0);
	Function_586(&Local_5 + 4, 385, 2, 0);
	Function_586(&Local_5 + 4, 249, 2, 0);
	Function_586(&Local_5 + 4, 245, 2, 0);
	Function_586(&Local_5 + 4, 315, 2, 0);
	Function_586(&Local_5 + 4, 248, 2, 0);
	Function_586(&Local_5 + 4, 687, 2, 0);
	Function_584(&Local_5 + 4, "p_uti_cover2x1x", 0, 0);
	Function_584(&Local_5 + 4, "p_uti_cover1x1x", 0, 0);
	Function_584(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_584(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rebel02_cs02_v", 1, 0);
	if (Function_578(&Local_5 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_584(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x21AE7 / 137959
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_585(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_581(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_585(var uParam0, int iParam1, int iParam2) //Position: 0x21B1F / 138015
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_196(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_581(uParam0[iVar03], 4);
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

var Function_586(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x21BE3 / 138211
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_196(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_581(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_581(uParam0[iVar03], 8);
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

void Function_587() //Position: 0x21CB3 / 138419
{
	Function_584(&bLocal_619, "Rebel02", 10, 0);
	Function_586(&bLocal_619, 518, 3, 0);
	Function_586(&bLocal_619, 250, 3, 0);
	Function_586(&bLocal_619, 557, 3, 0);
	Function_584(&bLocal_619, "DEAD_GROUND_MALE", 5, 0);
	Function_584(&bLocal_619, "DEAD_GROUND_FEMALE", 5, 0);
	Function_584(&bLocal_619, "tense_with_guns", 5, 0);
	Function_584(&bLocal_619, "custom/tense_with_guns", 8, 0);
	Function_584(&bLocal_619, "stolen_panic", 5, 0);
	Function_584(&bLocal_619, "custom/stolen_panic", 8, 0);
	Function_584(&bLocal_619, "reb02_santa_ground", 5, 0);
	Function_584(&bLocal_619, "custom/reb02_santa_ground", 8, 0);
	Function_584(&bLocal_619, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_woman", 1, 0);
	return;
}

void Function_588(int iParam0, bool bParam1) //Position: 0x21E30 / 138800
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_595(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_295(iParam0))
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
	if (!Function_295(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_594();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_253();
	Function_284();
	Function_243("");
	Function_593(0);
	Function_592();
	Function_47();
	Function_46();
	ENABLE_JOURNAL_REPLAY(0);
	Function_591();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_391(0, 0x40400000);
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
	Function_590(13);
	Function_590(14);
	Function_590(25);
	Function_590(24);
	Function_590(12);
	Function_590(27);
	Function_590(26);
	Function_590(15);
	Function_589();
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

void Function_589() //Position: 0x22254 / 139860
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

void Function_590(int iParam0) //Position: 0x222C8 / 139976
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_591() //Position: 0x222E8 / 140008
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

void Function_592() //Position: 0x22325 / 140069
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_593(int iParam0) //Position: 0x22339 / 140089
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_50())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_594() //Position: 0x2236E / 140142
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_595(int iParam0, int iParam1) //Position: 0x22377 / 140151
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
			Function_596(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_596(int iParam0) //Position: 0x223F9 / 140281
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

void Function_597() //Position: 0x22447 / 140359
{
	return;
}

bool Function_598(int iParam0) //Position: 0x2244D / 140365
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
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					Function_601();
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
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					Function_600();
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
			Function_599(iParam0, 1);
			return 1;
		}
	}
	Function_599(iParam0, 0);
	return 0;
}

void Function_599(int iParam0, bool bParam1) //Position: 0x2250E / 140558
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

void Function_600() //Position: 0x22532 / 140594
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_JonAssaultsLuisa", "Rebel02_JonAssaultsLuisa", false, 1, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_601() //Position: 0x2258B / 140683
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel02_ShootsLuisa", "Rebel02_ShootsLuisa", false, 1, 1, 0, 1);
		Function_335(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_602(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x225DA / 140762
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
		Function_599(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_417(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_620(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_620(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_606(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_177(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_599(iParam2, 0);
														return 0;
													}
													if (Function_177(bVar17, 2))
													{
														Function_605(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_604(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_177(bVar17, 4))
													{
														Function_605(&bVar17);
														strcpy(&Var18, "", 64);
														Function_603(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_243(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_604(StackVal, iParam2, bVar17);
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
	Function_599(iParam2, 0);
	return 0;
}

void Function_603(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x22973 / 141683
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

void Function_604(var uParam0, int iParam1, bool bParam2) //Position: 0x22A5E / 141918
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
			Function_25(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_25(&bParam2, 2);
			break;
	}
	Function_25(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_605(bool bParam0) //Position: 0x22AD4 / 142036
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_25(&iVar0, 1);
	Function_25(&iVar0, 2);
	Function_25(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_606(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x22AF6 / 142070
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
			return Function_617(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_610(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_617(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_607(iParam0, bVar2);
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
						bVar2 = Function_617(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_607(iParam0, bVar2);
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

var Function_607(int iParam0, bool bParam1) //Position: 0x22C40 / 142400
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_177(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_609(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_608(16);
			}
		}
	}
	else if (Function_177(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_609(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_608(256);
			}
		}
	}
	return bParam1;
}

bool Function_608(int iParam0) //Position: 0x22D73 / 142707
{
	return 2 | iParam0;
}

int Function_609(int iParam0) //Position: 0x22D7D / 142717
{
	return 4 | iParam0;
}

int Function_610(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x22D87 / 142727
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
				iParam3 = Function_616(iParam0, iParam1, bParam4);
				if (Function_177(iParam3, 4))
				{
					Function_104(&iParam3, 2);
					Function_25(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_608(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_611(iParam0, iParam1, 0, bParam4);
				if (Function_177(iParam3, 4))
				{
					Function_104(&iParam3, 2);
					Function_25(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_608(16);
		}
	}
	return 0;
}

int Function_611(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x22E39 / 142905
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_615(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_614(iVar0, 3, 1, bParam3))
			{
				if (!Function_620(iParam0, 8, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_614(iVar0, 2, 1, bParam3))
			{
				if (!Function_620(iParam0, 32, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_614(iVar0, 1, 1, bParam3))
			{
				if (!Function_620(iParam0, 64, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_614(iVar0, 3, 1, bParam3))
			{
				if (!Function_620(iParam0, 128, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_614(iVar0, 1, 1, bParam3))
			{
				if (!Function_620(iParam0, 1024, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_614(iVar0, 1, 1, bParam3))
			{
				if (!Function_620(iParam0, 1024, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_612(int iParam0, int iParam1, bool bParam2) //Position: 0x22FF3 / 143347
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_613(int iParam0, int iParam1, bool bParam2) //Position: 0x23008 / 143368
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_614(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2301D / 143389
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_615(int iParam0) //Position: 0x2303A / 143418
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

int Function_616(var uParam0, int iParam1, bool bParam2) //Position: 0x230A9 / 143529
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_615(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_614(iVar0, 3, 1, bParam2))
			{
				if (!Function_620(uParam0, 8, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000009:
			if (Function_614(iVar0, 3, 1, bParam2))
			{
				if (!Function_620(uParam0, 8, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x0000006E:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(uParam0, 16, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x0000005B:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(uParam0, 32, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000031:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(uParam0, 64, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000007:
			if (Function_614(iVar0, 3, 1, bParam2))
			{
				if (!Function_620(uParam0, 128, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000008:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(uParam0, 256, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000014:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(uParam0, 512, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000018:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(uParam0, 512, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000057:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(uParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000058:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(uParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_617(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x232C4 / 144068
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
						return Function_616(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_620(iParam0, 2, 1))
					{
						return Function_609(8);
					}
					return Function_608(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_620(iParam0, 4, 1))
					{
						return Function_609(16);
					}
					return Function_608(16);
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
							return Function_611(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_620(iParam0, 2, 1))
						{
							return Function_609(128);
						}
						return Function_608(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_620(iParam0, 4, 1))
						{
							return Function_609(256);
						}
						return Function_608(256);
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
						return Function_611(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_620(iParam0, 2, 1))
					{
						return Function_609(8);
					}
					return Function_608(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_620(iParam0, 4, 1))
					{
						return Function_609(16);
					}
					return Function_608(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_619(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_620(iParam0, 2, 1))
					{
						return Function_609(8);
					}
					return Function_608(8);
				}
				if (!Function_620(iParam0, 4, 1))
				{
					return Function_609(16);
				}
				return Function_608(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_611(iParam0, uParam1, 1, bParam5);
							if (Function_177(iParam4, 4))
							{
								Function_104(&iParam4, 2);
								Function_25(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_618(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_608(128);
							}
							if (!Function_620(iParam0, 2, 1))
							{
								return Function_609(8);
							}
							return Function_608(8);
						}
						if (iParam4 == 2)
						{
							if (Function_618(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_608(256);
							}
							if (!Function_620(iParam0, 4, 1))
							{
								return Function_609(16);
							}
							return Function_608(16);
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

bool Function_618(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x23583 / 144771
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

int Function_619(int iParam0, var uParam1, bool bParam2) //Position: 0x2363C / 144956
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_615(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(iParam0, 16, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x0000005B:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(iParam0, 32, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000057:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(iParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000058:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(iParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_620(int iParam0, bool bParam1, bool bParam2) //Position: 0x23750 / 145232
{
	if (bParam2)
	{
		if (!Function_177(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_177(iParam0->f_40, bParam1);
}

bool Function_621(bool bParam0) //Position: 0x23778 / 145272
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_622(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x23796 / 145302
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_32())
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

