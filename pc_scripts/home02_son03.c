//Decompiled with MagicRDR v1.0
//Function Count : 503
//Statics Count : 769
//Natives Count : 673
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1049> Local_4 = { 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_755 = 6;
	Local_336 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_402 = 99;
	iLocal_403 = 6;
	iLocal_390 = 1000;
	while (Function_265())
	{
		Function_221();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x44 / 68
{
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Local_4 + 312))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 312);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 312);
	}
	Function_220(&uLocal_742, &uLocal_744, &uLocal_746);
	STREAMING_UNLOAD_BOUNDS();
	if (SQUAD_IS_VALID(&Local_4 + 72))
	{
		Function_219(&Local_4 + 72);
		DESTROY_OBJECT(&Local_4 + 72);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_407);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_409);
	TASK_CLEAR(&bLocal_407);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_407);
	Function_216();
	PRINTSTRING("COMPANION_RELEASE_ACTOR(COMPANION_SON, FALSE, TRUE)");
	PRINTNL();
	DEREFERENCE_ACTOR(&bLocal_407);
	Function_213(12, 0, 1, 1, 1);
	PRINTSTRING("COMPANION_RELEASE_ACTOR(COMPANION_WIFE, FALSE)");
	PRINTNL();
	DEREFERENCE_ACTOR(&bLocal_685);
	Function_213(11, 0, 0, 1, 1);
	PRINTSTRING("COMPANION_RELEASE_ACTOR(COMPANION_UNCLE, FALSE)");
	PRINTNL();
	DEREFERENCE_ACTOR(&bLocal_691);
	Function_213(13, 0, 0, 1, 1);
	Function_213(14, 0, 0, 1, 1);
	*(&Global_15402[1214] + 16) = 638;
	Function_212(&uLocal_334);
	Function_212(&Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_211();
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_207(&iLocal_348);
	Function_205();
	if (IS_ITERATOR_VALID(&uLocal_405))
	{
		DESTROY_ITERATOR(&uLocal_405);
	}
	RELEASE_LAYOUT_REF(&uLocal_334);
	if (bLocal_465)
	{
		Function_69(Local_336, 1, 1, 1, 0);
		Function_26(bLocal_466, 1, 0, 1, 0, 1, 1, 1);
	}
	else if (bLocal_466)
	{
		Function_22(Local_336);
		Function_26(bLocal_466, 1, 0, 1, 1, 1, 1, 1);
	}
	else
	{
		Function_2(Local_336);
		Function_26(bLocal_466, 1, 0, 1, 1, 1, 1, 1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x23C / 572
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x25D / 605
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x27A / 634
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(bool bParam0) //Position: 0x29D / 669
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2B4 / 692
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

void Function_7(int iParam0) //Position: 0x356 / 854
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x379 / 889
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

void Function_9() //Position: 0x3C3 / 963
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x3DC / 988
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

void Function_11(var uParam0, int iParam1) //Position: 0x42F / 1071
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

struct<16> Function_12(int iParam0) //Position: 0x559 / 1369
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

bool Function_13() //Position: 0x593 / 1427
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x5AE / 1454
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x5BB / 1467
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x5DB / 1499
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x5F2 / 1522
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x60D / 1549
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x854 / 2132
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x880 / 2176
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

bool Function_21(int iParam0) //Position: 0x8A4 / 2212
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x8B9 / 2233
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x8D7 / 2263
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
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
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x97D / 2429
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

struct<24> Function_25(char* cParam0) //Position: 0x9BC / 2492
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

void Function_26(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0xC12 / 3090
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_68());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_67();
	CLEAR_PRINTED_OBJECTIVE();
	Function_66();
	Function_64(0);
	Function_63();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_62();
	Function_61();
	Function_67();
	ENABLE_JOURNAL_REPLAY(1);
	Function_60(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_59(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && iParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_48(Global_42825);
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
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_47();
	Function_46(1178687);
	Function_44(33039);
	Function_43(0x218003f);
	Function_42(4194560);
	Function_41();
	Function_40();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_34(0, 1, 1);
	}
	else
	{
		Function_34(0, 1, 1);
	}
	Function_32();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_28();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_27(&Global_21369 + 72 + 32, 16);
}

void Function_27(bool bParam0, bool bParam1) //Position: 0xE1E / 3614
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_28() //Position: 0xE34 / 3636
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_31() > 3)
		{
			bVar0 *= 2;
		}
		Function_29(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_29(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE8B / 3723
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_30(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_30(bool bParam0) //Position: 0xEDB / 3803
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_31() //Position: 0xF04 / 3844
{
	return Global_21369.f_248;
}

void Function_32() //Position: 0xF0F / 3855
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_33(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0xF39 / 3897
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_34(int iParam0, bool bParam1, int iParam2) //Position: 0xF53 / 3923
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_39(Global_43789))
		{
			Function_38(&(Global_43791[Global_43789]), 131072);
			Function_33(&(Global_43791[Global_43789]), 2097152);
			Function_36(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_35(&(Global_43791[iVar0]), 4) || Function_35(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_33(&(Global_43791[iVar0]), 2097155);
					Function_38(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x105F / 4191
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_36(int iParam0) //Position: 0x107C / 4220
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_37())
			{
				return;
			}
		}
		if (!Function_35(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_37() //Position: 0x10FB / 4347
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_35(&(Global_43791[iVar0]), 4) || Function_35(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_38(var uParam0, int iParam1) //Position: 0x1164 / 4452
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_39(int iParam0) //Position: 0x1175 / 4469
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_40() //Position: 0x118B / 4491
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_41() //Position: 0x11B1 / 4529
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_42(int iParam0) //Position: 0x11D7 / 4567
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_43(int iParam0) //Position: 0x11F4 / 4596
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_44(int iParam0) //Position: 0x1207 / 4615
{
	Function_45(&Global_43580, iParam0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1215 / 4629
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_46(bool bParam0) //Position: 0x1234 / 4660
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_47() //Position: 0x1261 / 4705
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_48(int iParam0) //Position: 0x12D9 / 4825
{
	int iVar0;
	int iVar1;
	
	if (!Function_58(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_55(78, 1, 1);
		if (!Function_54(Global_119935, 64))
		{
			Function_49(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

void Function_49(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x140F / 5135
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_51(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_50(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_50(char* cParam0) //Position: 0x1484 / 5252
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

bool Function_51(int iParam0, var uParam1, int iParam2) //Position: 0x14BE / 5310
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
		if (Function_53(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_52(uVar0))
		{
			case 0x00000002:
				if (!Function_54(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_52(char* cParam0) //Position: 0x153A / 5434
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

int Function_53(int iParam0) //Position: 0x15DB / 5595
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_27(&bVar1, 2147483648);
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

bool Function_54(var uParam0, int iParam1) //Position: 0x1618 / 5656
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_55(bool bParam0, bool bParam1, int iParam2) //Position: 0x162B / 5675
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_57(bParam0), Function_56()) == 0)
		{
			ADD_ITEM(Function_57(bParam0), Function_56(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_57(bParam0), Function_56(), &iParam2);
	return 1;
}

bool Function_56() //Position: 0x1679 / 5753
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_57(bool bParam0) //Position: 0x168E / 5774
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

bool Function_58(int iParam0) //Position: 0x1782 / 6018
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_59(int iParam0) //Position: 0x1798 / 6040
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

void Function_60(bool bParam0) //Position: 0x181B / 6171
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_61() //Position: 0x1892 / 6290
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_62() //Position: 0x18D6 / 6358
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_63() //Position: 0x191A / 6426
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_64(int iParam0) //Position: 0x1930 / 6448
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_65())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_65() //Position: 0x1970 / 6512
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_66() //Position: 0x1995 / 6549
{
	Global_15862 = 0.0f;
	return;
}

void Function_67() //Position: 0x199F / 6559
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_68() //Position: 0x19CA / 6602
{
	var uVar0;
	
	uVar0 = Function_56();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_69(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x19E7 / 6631
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
		Function_200(&(Global_6667[iVar228]));
		Function_199(4194304);
		if (&bParam3)
		{
			Function_155(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_149(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_155(iVar2, &uVar0, 0);
		}
		bVar1 = Function_148();
		if (&bParam1)
		{
			Function_132(iVar2, iParam0, bVar1);
			Function_131();
		}
	}
	Function_75(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_74(iVar2, bVar1);
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
	Function_70();
}

void Function_70() //Position: 0x1ADB / 6875
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_71(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_71(int iParam0, bool bParam1) //Position: 0x1B0D / 6925
{
	int iVar0;
	
	iVar0 = Function_72(iParam0);
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

int Function_72(int iParam0) //Position: 0x1B4B / 6987
{
	if (!Function_73(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_73(int iParam0) //Position: 0x1B65 / 7013
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_74(int iParam0, bool bParam1) //Position: 0x1B7B / 7035
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
							Function_49(&Global_54076, 0x1000000, 3, 0);
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
							Function_49(&Global_54076, 0x1000000, 3, 0);
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
							Function_49(&Global_54076, 0x1000000, 3, 0);
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
							Function_49(&Global_54076, 0x1000000, 3, 0);
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
							Function_49(&Global_54076, 0x1000000, 3, 0);
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
							Function_49(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_74(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_74(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_74(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_74(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_74(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_74(57, 0);
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

void Function_75(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1E78 / 7800
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_130())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_130())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_126();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_130())
	{
		Function_125();
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
			Function_119(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
			{
				switch (bVar0)
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
			Function_78(1);
			Function_77(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_76(iParam0, &Var14);
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

void Function_76(int iParam0, struct<41> Param1) //Position: 0x20D6 / 8406
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_77(bool bParam0, int iParam1) //Position: 0x2114 / 8468
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

void Function_78(bool bParam0) //Position: 0x2153 / 8531
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_108();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_79();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_27(&Global_99144, 1);
		Function_27(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_79() //Position: 0x21A8 / 8616
{
	Function_106();
	Function_105();
	Function_105();
	Function_104();
	Function_104();
	Function_103();
	Function_103();
	Function_86(0);
	Function_86(0);
	Function_84();
	Function_83();
	Function_82();
	Function_81();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_80();
	return;
}

void Function_80() //Position: 0x21F3 / 8691
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

void Function_81() //Position: 0x22F9 / 8953
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

void Function_82() //Position: 0x232C / 9004
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

void Function_83() //Position: 0x24BF / 9407
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

void Function_84() //Position: 0x2678 / 9848
{
	Function_85(&Global_42918, 1, 0);
	return;
}

void Function_85(struct<2317> Param0) //Position: 0x2686 / 9862
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_56();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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

struct<8> Function_86(int iParam0) //Position: 0x28A3 / 10403
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
					iVar2 = ((Function_102((50 + iVar4)) + Function_102((183 + iVar4))) + Function_102((90 + iVar4)));
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
	Function_87(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_87(int iParam0, bool bParam1, bool bParam2) //Position: 0x294A / 10570
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
		Function_101(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_100(iParam0);
	if (&bParam2)
	{
		Function_88(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_88(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2BE6 / 11238
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_99(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_98(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_98(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_96(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_93(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_90(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_89(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_89() //Position: 0x3224 / 12836
{
	int iVar0;
	
	return &iVar0;
}

var Function_90(int iParam0) //Position: 0x322D / 12845
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_91(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x323E / 12862
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_92(char* cParam0) //Position: 0x3335 / 13109
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_93(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3350 / 13136
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_95(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_94(Function_95(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_94(int iParam0, int iParam1) //Position: 0x33B7 / 13239
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_95(int iParam0, bool bParam1) //Position: 0x33C9 / 13257
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_96(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x33DB / 13275
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
	if (((Function_97(iParam0) != 19 || Function_97(iParam0) != 17) || Function_97(iParam0) != 10) || Function_97(iParam0) != 9)
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

int Function_97(int iParam0) //Position: 0x350F / 13583
{
	return Global_55480[iParam016].f_96;
}

float Function_98(int iParam0) //Position: 0x351E / 13598
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_99(int iParam0) //Position: 0x3557 / 13655
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_100(int iParam0) //Position: 0x3594 / 13716
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

int Function_101(int iParam0, bool bParam1, bool bParam2) //Position: 0x372E / 14126
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_102(bool bParam0) //Position: 0x3972 / 14706
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_103() //Position: 0x39B3 / 14771
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
		iVar2 = ((Function_102((50 + iVar3) + 15) + Function_102((183 + iVar3) + 15)) + Function_102((90 + iVar3) + 15));
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
	Function_87(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_104() //Position: 0x3A3C / 14908
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
			iVar2 = ((Function_102((50 + iVar3) + 8) + Function_102((183 + iVar3) + 8)) + Function_102((90 + iVar3) + 8));
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
	Function_87(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_105() //Position: 0x3AD3 / 15059
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
		iVar2 = ((Function_102((50 + iVar3)) + Function_102((183 + iVar3))) + Function_102((90 + iVar3)));
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
	Function_87(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_106() //Position: 0x3B52 / 15186
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_107(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_87(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_107(int iParam0, bool bParam1, int iParam2) //Position: 0x3B8F / 15247
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_101(iParam0, bParam1, 1);
	Function_100(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_88(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_108() //Position: 0x3D9B / 15771
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_116(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_116(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_110(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_110(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_109(StackVal, Var0))
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

bool Function_109(char* cParam0) //Position: 0x3E52 / 15954
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_110(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3E6A / 15978
{
	int iVar0;
	
	iVar0 = Function_114(&uParam2, &uParam3);
	if (Function_113(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_112(&Global_99144, 1);
			Function_27(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_112(&Global_99144, 2);
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
		Function_112(&Global_99144, 2);
		Function_27(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_111();
	return StackVal, Function_111();
}

struct<8> Function_111() //Position: 0x3F62 / 16226
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_112(bool bParam0, bool bParam1) //Position: 0x3F6C / 16236
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_113(int iParam0) //Position: 0x3F7D / 16253
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_114(bool bParam0, bool bParam1) //Position: 0x3F93 / 16275
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
				fVar2 = Function_115(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_115(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_113(iVar0) && !&bParam1)
	{
		iVar0 = Function_114(&bParam0, 1);
	}
	return iVar0;
}

float Function_115(struct<2> Param0, struct<2> Param2) //Position: 0x405F / 16479
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_116(float fParam0, int iParam1) //Position: 0x407C / 16508
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_118(&Global_54076, &Var3);
	if (!Function_117(Global_46760[0]))
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
	if (!Function_117(Global_46760[2]))
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
	if (!Function_117(Global_46760[1]))
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
	if (!Function_117(Global_46796[1]))
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
	if (!Function_117(Global_46796[3]))
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
	if (!Function_117(Global_46796[2]))
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
	if (!Function_117(Global_46796[4]))
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
	if (!Function_117(Global_46816[0]))
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
	if (!Function_117(Global_46816[1]))
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
	if (!Function_117(Global_46816[2]))
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
	if (!Function_117(Global_46838[0]))
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
	if (!Function_117(Global_46850[0]))
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
	if (!Function_117(Global_46850[1]))
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
	if (!Function_117(Global_46850[2]))
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
	if (!Function_117(Global_46866[0]))
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
	if (!Function_117(Global_46866[1]))
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
	if (!Function_117(Global_46866[2]))
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
	if (!Function_117(Global_46894[2]))
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
	if (!Function_117(Global_46894[3]))
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
	if (!Function_117(Global_46894[0]))
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
	if (!Function_117(Global_46914[0]))
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
	if (!Function_117(Global_46926[2]))
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
	if (!Function_117(Global_46926[1]))
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
	if (!Function_117(Global_46926[0]))
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
	if (!Function_117(Global_46838[1]))
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
	if (!Function_117(Global_46894[1]))
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
	Function_112(&Global_99144, 2);
	Function_27(&Global_99144, 1);
	iParam1 = 0;
	if (Function_109(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_117(int iParam0) //Position: 0x48A8 / 18600
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_118(var uParam0, int iParam1) //Position: 0x48E3 / 18659
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_119(int iParam0) //Position: 0x48F2 / 18674
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
				Function_123(12, 1, 0, 0);
				Function_122(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_123(13, 1, 0, 0);
				Function_122(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_123(14, 1, 0, 0);
				Function_122(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_123(15, 1, 0, 0);
				Function_122(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_123(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_121(iParam0) == 1)
					{
						iVar0 = Function_120(iParam0);
						if (Function_39(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_122(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_122(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_122(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_122(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_122(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_122(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_122(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_122(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_122(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_122(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_122(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_122(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_122(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_122(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_122(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_122(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_122(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_122(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_122(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_122(4, 19);
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
								Function_123(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_123(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_123(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_120(iParam0) == 0)
			{
				if (Function_121(iParam0) == 1)
				{
					Function_123(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_39(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_122(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_122(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_122(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_122(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_122(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_122(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_122(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_122(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_121(iParam0) == 1)
			{
				Function_123(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_123(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_122(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_122(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_122(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_123(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_122(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_122(6, 9);
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

int Function_120(int iParam0) //Position: 0x4DCE / 19918
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_121(int iParam0) //Position: 0x4DED / 19949
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_122(int iParam0, int iParam1) //Position: 0x4E07 / 19975
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

int Function_123(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4E71 / 20081
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
	Function_101(iParam0, TO_FLOAT(bParam1), 1);
	Function_100(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_88(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_124(iParam0);
	return 1;
}

void Function_124(int iParam0) //Position: 0x5099 / 20633
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

void Function_125() //Position: 0x5137 / 20791
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
	PLAYSTAT_INT("HC_MONEY", Function_102(0));
	PLAYSTAT_INT("HC_FAME", Function_102(3));
	PLAYSTAT_INT("HC_HONOR", Function_102(1));
	return;
}

void Function_126() //Position: 0x5299 / 21145
{
	int iVar0;
	int iVar1;
	
	if (!Function_73(Global_10966))
	{
		return;
	}
	iVar0 = Function_102(24);
	iVar1 = Function_72(Global_10966);
	if (!Function_73(iVar0) && Function_129(iVar1) < 0)
	{
		Function_87(24, Global_10966, 0);
		Function_127(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_129(Function_72(iVar0)))
	{
		Function_87(24, Global_10966, 0);
		Function_127(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_127(int iParam0, char* cParam1) //Position: 0x5319 / 21273
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
		Function_128(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x5670 / 22128
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_129(int iParam0) //Position: 0x56F8 / 22264
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_130() //Position: 0x5712 / 22290
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_131() //Position: 0x573D / 22333
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

void Function_132(int iParam0, int iParam1, bool bParam2) //Position: 0x576B / 22379
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
	
	if (!Function_73(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_147(iParam0);
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
				bVar0 = (Function_102(42) - Global_53524.f_168);
				bVar1 = (Function_102(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_99(49)) - Global_53524.f_176);
				bVar3 = (Function_102(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_102(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_146(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_133(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_133(int iParam0, bool bParam1, bool bParam2) //Position: 0x5A07 / 23047
{
	int iVar0;
	bool bVar1;
	
	if (Function_145(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_130())
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
	iVar0 = Function_102(3);
	Function_142();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_140(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_54(Global_119936, 4))
			{
				Function_49(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_123(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_98(3));
	iVar0 = Function_102(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_135(4, Function_139(Global_21369.f_248), 1);
				Function_134(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_135(4, Function_139(Global_21369.f_248), 1);
				Function_134(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_135(4, Function_139(Global_21369.f_248), 1);
				Function_134(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_135(4, Function_139(Global_21369.f_248), 1);
				Function_134(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_135(4, Function_139(Global_21369.f_248), 1);
				Function_134(Global_21369.f_244, Global_21369.f_248);
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

void Function_134(int iParam0, int iParam1) //Position: 0x5BDB / 23515
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_135(int iParam0, char* cParam1) //Position: 0x5E45 / 24133
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
	Function_127(iParam0, &cParam1, 0, 1);
	iVar1 = Function_136();
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

int Function_136() //Position: 0x5FD5 / 24533
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
	Function_137();
	return 0;
}

void Function_137() //Position: 0x6076 / 24694
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
		Function_138(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_138(int iParam0) //Position: 0x6134 / 24884
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

var Function_139(int iParam0) //Position: 0x619A / 24986
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

int Function_140(int iParam0, bool bParam1) //Position: 0x6229 / 25129
{
	bool bVar0;
	int iVar1;
	
	Function_123(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_141(iParam0, 4294967295);
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
	iVar1 = Function_136();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_141(int iParam0, int iParam1) //Position: 0x63D5 / 25557
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

void Function_142() //Position: 0x641A / 25626
{
	Function_144(3, 0.0f);
	Function_143(3, 10000.0f);
	return;
}

int Function_143(int iParam0, int iParam1) //Position: 0x6430 / 25648
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x6470 / 25712
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_145(int iParam0) //Position: 0x64B0 / 25776
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_146(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x64BF / 25791
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

int Function_147(int iParam0) //Position: 0x6687 / 26247
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

var Function_148() //Position: 0x671C / 26396
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_149(int iParam0) //Position: 0x6741 / 26433
{
	if (!Function_73(iParam0))
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
			Function_133(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_133(25, 1, 0);
			Function_154(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_154(50, 1, 1);
			Function_133(250, 1, 0);
			Function_150(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_133(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_133(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_154(50, 1, 1);
			Function_133(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_154(5, 1, 1);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_133(75, 1, 0);
			Function_150(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_154(5, 1, 1);
			Function_133(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_133(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_154(25, 1, 1);
			Function_133(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_154(10, 1, 1);
			Function_133(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_133(50, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_133(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_133(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_150(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_154(20, 1, 1);
			Function_133(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_154(25, 1, 1);
			Function_133(150, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_154(10, 1, 1);
			Function_133(150, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_133(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_150(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_150(100, 1, 0);
			Function_154(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_154(3, 1, 1);
			Function_133(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_150(125, 1, 0);
			Function_133(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_154(50, 1, 1);
			Function_133(100, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_154(50, 1, 1);
			Function_133(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_154(75, 1, 1);
			Function_133(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_133(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_133(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_133(250, 1, 0);
			Function_150(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_133(75, 1, 0);
			Function_150(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_133(200, 1, 0);
			Function_150(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_133(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_133(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_154(50, 1, 1);
			Function_133(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_154(100, 1, 1);
			Function_133(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_133(200, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_133(300, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_133(300, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_133(300, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_133(500, 1, 0);
			Function_150(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_133(150, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_150(25, 1, 0);
			Function_154(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_133(150, 1, 0);
			Function_150(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_150(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_150(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_150(150, 1, 0);
			Function_154(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_150(150, 1, 0);
			Function_154(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_150(int iParam0, bool bParam1, bool bParam2) //Position: 0x6C10 / 27664
{
	int iVar0;
	bool bVar1;
	
	if (Function_145(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_130())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_102(1);
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
			Function_140(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_54(Global_119936, 1))
				{
					Function_49(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_153(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_54(Global_119936, 2))
				{
					Function_49(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_123(1, bVar1, 0, 0);
	}
	else
	{
		Function_152(1, (4294967295 * bVar1), 0);
	}
	if (Function_102(1) <= 4294962296)
	{
		Function_87(1, 4294962296, 0);
	}
	else if (Function_102(1) >= 5000)
	{
		Function_87(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_98(1));
	iVar0 = Function_102(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_135(2, Function_151(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_135(2, Function_151(Global_21369.f_244), 0);
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
				Function_135(2, Function_151(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_135(2, Function_151(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_135(2, Function_151(Global_21369.f_244), 1);
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
				Function_135(2, Function_151(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_135(2, Function_151(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_135(2, Function_151(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_135(2, Function_151(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_135(2, Function_151(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_135(2, Function_151(Global_21369.f_244), 1);
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
				Function_135(2, Function_151(Global_21369.f_244), 0);
			}
			break;
	}
	Function_134(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_151(int iParam0) //Position: 0x6F37 / 28471
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

int Function_152(int iParam0, bool bParam1, int iParam2) //Position: 0x6FDA / 28634
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
	Function_100(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_88(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_153(int iParam0, bool bParam1) //Position: 0x71D7 / 29143
{
	bool bVar0;
	int iVar1;
	
	Function_152(iParam0, bParam1, 0);
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
	iVar1 = Function_141(iParam0, 4294967295);
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
	iVar1 = Function_136();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_154(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7382 / 29570
{
	bool bVar0;
	
	bVar0 = Function_102(0);
	if ((Function_102(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_123(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_102(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_123(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_102(597) + Function_102(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_155(int iParam0, var uParam1, bool bParam2) //Position: 0x7454 / 29780
{
	struct<4> Var0;
	
	if (!Function_73(iParam0))
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
			Function_197(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_195(Global_46760[0]);
			Function_195(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_193(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_195(Global_46816[0]);
			Function_185(0);
			Function_183(2, 1);
			Function_183(0, 1);
			Function_183(1, 1);
			break;
		
		case 0x00000003:
			Function_195(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_195(Global_46816[0]);
			Function_195(Global_46760[0]);
			Function_181(0, 1);
			Function_181(15, 1);
			Function_181(9, 1);
			Function_181(12, 1);
			Function_181(16, 1);
			Function_183(3, 1);
			break;
		
		case 0x00000005:
			Function_195(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_193(21, &bParam2, 4);
			Function_195(Global_46816[0]);
			Function_183(39, 1);
			break;
		
		case 0x00000007:
			Function_195(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_195(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_180())
				{
					if (!Function_179(4))
					{
						Function_169(4, 0, 0, 1, 0);
					}
				}
			}
			Function_195(Global_46760[0]);
			Function_195(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_195(Global_46760[0]);
			Function_195(Global_46816[2]);
			Function_38(&(Global_43791[Global_46816[2]]), 32768);
			Function_33(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_193(9, &bParam2, 4);
			Function_195(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_195(Global_46760[0]);
			Function_195(Global_46796[0]);
			Function_38(&(Global_43791[Global_46796[0]]), 32768);
			Function_33(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_195(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_195(Global_46760[0]);
			Function_195(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_195(Global_46760[1]);
			Function_195(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_195(Global_46838[0]);
			Function_195(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_195(Global_46796[5]);
			Function_195(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_193(21, &bParam2, 4);
			Function_195(Global_46760[4]);
			Function_195(Global_46796[4]);
			Function_168(&Global_119935, 0x2000000);
			Function_168(&Global_119935, 0x4000000);
			Function_168(&Global_119935, 4096);
			Function_168(&Global_119935, 8);
			Function_168(&Global_119935, 8388608);
			Function_168(&Global_119935, 524288);
			Function_168(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_195(Global_46760[4]);
			Function_195(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_33(&(Global_43791[Global_46760[4]]), 256);
			Function_195(Global_46760[4]);
			Function_195(Global_46796[0]);
			Function_38(&(Global_43791[Global_46796[0]]), 32768);
			Function_33(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_195(Global_46760[0]);
			Function_195(Global_46760[5]);
			Function_193(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_195(Global_46796[3]);
			Function_38(&(Global_43791[Global_46796[3]]), 32768);
			Function_33(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_193(9, &bParam2, 4);
			Function_195(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_38(&(Global_43791[Global_46838[1]]), 32768);
			Function_195(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_193(12, &bParam2, 4);
			Function_33(&(Global_43791[Global_46838[1]]), 256);
			Function_195(Global_46816[3]);
			Function_195(Global_46866[0]);
			Function_195(Global_46850[0]);
			Function_185(4);
			Function_181(13, 1);
			Function_181(1, 1);
			Function_181(18, 1);
			Function_183(34, 1);
			Function_183(44, 1);
			Function_183(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_193(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_195(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_195(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_195(Global_46866[0]);
			Function_195(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_195(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_195(Global_46850[0]);
			Function_195(Global_46866[0]);
			Function_195(Global_46866[1]);
			Function_195(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_193(23, &bParam2, 3);
			Function_181(23, 1);
			Function_195(Global_46850[0]);
			Function_195(Global_46850[2]);
			Function_38(&(Global_43791[Global_46850[2]]), 32768);
			Function_33(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_193(19, &bParam2, 4);
			Function_195(Global_46850[0]);
			Function_195(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_193(24, &bParam2, 3);
			Function_181(24, 1);
			Function_195(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_195(Global_46850[0]);
			Function_195(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_195(Global_46866[12]);
			Function_195(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_195(Global_46866[12]);
			Function_195(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_193(25, &bParam2, 10);
			Function_195(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_195(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_195(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_193(13, &bParam2, 4);
			Function_195(Global_46866[2]);
			Function_195(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_179(8))
				{
					Function_169(8, 0, 0, 1, 0);
				}
			}
			Function_195(Global_46850[0]);
			Function_185(9);
			Function_181(7, 1);
			Function_181(11, 1);
			Function_181(3, 1);
			Function_181(20, 1);
			Function_183(57, 1);
			break;
		
		case 0x0000002A:
			Function_193(2, &bParam2, 4);
			Function_195(Global_46914[0]);
			Function_195(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_195(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_195(Global_46914[0]);
			Function_195(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_195(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_195(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_195(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_193(17, &bParam2, 4);
			Function_195(Global_46926[0]);
			Function_195(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_166(15))
				{
					Function_162(15, 0, 1);
				}
			}
			Function_122(2, 26);
			Function_33(&(Global_43791[Global_46914[1]]), 256);
			Function_185(11);
			Function_195(Global_46914[1]);
			Function_195(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_195(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_195(Global_46914[1]);
			Function_195(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_195(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_195(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_195(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_195(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_195(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_195(Global_46914[1]);
			Function_156(11);
			Function_185(12);
			Global_26200[1114].f_40 = 0;
			Function_183(56, 1);
			if (!&bParam2)
			{
				if (!Function_179(9))
				{
					Function_169(9, 0, 0, 0, 0);
				}
				if (!Function_179(10))
				{
					Function_169(10, 0, 0, 1, 0);
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

void Function_156(int iParam0) //Position: 0x7D6F / 32111
{
	var uVar0;
	
	if (!Function_113(iParam0))
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
			Function_157(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_157(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7EEC / 32492
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
		Function_159(Function_160(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_159(Function_160(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_159(StackVal);
				Var1 = Function_159(StackVal);
				if (Function_158(StackVal, StackVal, Var1, Var3))
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

bool Function_158(struct<2> Param0, struct<2> Param2) //Position: 0x7FF7 / 32759
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_159(int iParam0) //Position: 0x8024 / 32804
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

var Function_160(vector3 vParam0) //Position: 0x807B / 32891
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

void Function_161(var uParam0, int iParam1) //Position: 0x80C9 / 32969
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

void Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8124 / 33060
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_58(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_166(bParam0))
	{
		if (!Function_179(bParam0))
		{
			Function_169(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_123(457, 1, 0, 0);
		Function_165(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_164(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 0);
			}
			else
			{
				Function_163();
			}
		}
	}
	return;
}

void Function_163() //Position: 0x82C5 / 33477
{
	return;
}

bool Function_164(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x82CB / 33483
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

void Function_165(bool bParam0, int iParam1) //Position: 0x837A / 33658
{
	if (!Function_58(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_166(int iParam0) //Position: 0x83CF / 33743
{
	if (!Function_58(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_167(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_167(int iParam0, int iParam1) //Position: 0x8420 / 33824
{
	int iVar0;
	
	if (!Function_58(iParam0))
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

void Function_168(var uParam0, int iParam1) //Position: 0x844D / 33869
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_169(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x845E / 33886
{
	char* cVar0[32];
	
	if (!Function_58(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_178(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_179(bParam0))
	{
		Function_123(456, 1, 0, 0);
		Function_165(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_164(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 5);
			}
			else
			{
				Function_163();
			}
		}
		Function_172(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_171() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_171() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_170(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_54(Global_119934, 2))
			{
				Function_49(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_170(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x85BA / 34234
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_171() //Position: 0x8645 / 34373
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_172(bool bParam0) //Position: 0x8672 / 34418
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
			if (Function_176(bParam0, Function_177(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
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
			if (Function_176(bParam0, Function_177(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_175(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_174(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_173(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_173(int iParam0) //Position: 0x8822 / 34850
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_58(iParam0))
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

void Function_174(char* cParam0, int iParam1) //Position: 0x8879 / 34937
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_175(int iParam0) //Position: 0x889E / 34974
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_58(iParam0))
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

bool Function_176(bool bParam0, bool bParam1) //Position: 0x88F4 / 35060
{
	int iVar0;
	
	if (!Function_58(bParam0))
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

bool Function_177(bool bParam0) //Position: 0x8953 / 35155
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_178(int iParam0) //Position: 0x895F / 35167
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_179(int iParam0) //Position: 0x897B / 35195
{
	if (!Function_58(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_167(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_180() //Position: 0x89CD / 35277
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_181(int iParam0, int iParam1) //Position: 0x89FD / 35325
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_182(iParam0, iParam1);
	Function_49(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_182(int iParam0, int iParam1) //Position: 0x8A72 / 35442
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_183(int iParam0, int iParam1) //Position: 0x8ACF / 35535
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_184(iParam0, iParam1);
	Function_49(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_184(int iParam0, int iParam1) //Position: 0x8B42 / 35650
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_185(int iParam0) //Position: 0x8B9D / 35741
{
	var uVar0;
	var uVar1;
	
	if (!Function_113(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_192(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_192(&Global_26200[iParam014] + 88, 0);
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
			Function_123(468, 1, 0, 0);
			Function_122(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_170("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_157(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_169(14, 1, 0, 0, 0);
				Function_186(14, 1, 0, 0, 0);
			}
			if (!Function_164(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 6);
			}
			else
			{
				Function_163();
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
			Function_170("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_123(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_122(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8E5D / 36445
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_58(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_178(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_167(bParam0, 2))
	{
		Function_123(456, 1, 0, 0);
		Function_165(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_170(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_176(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_165(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_164(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 0);
			}
			else
			{
				Function_163();
			}
		}
		Function_172(bParam0);
		if (StackVal && !Function_14(((((!Function_171() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_171() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_54(Global_119934, 2))
			{
				Function_49(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_188();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_187(3, bParam1);
				break;
			
			case 0x00000005:
				Function_187(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_187(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_187(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_187(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_187(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_122(2, 24);
				break;
			
			case 0x00000003:
				Function_122(2, 25);
				break;
			
			case 0x0000000F:
				Function_122(2, 26);
				break;
			
			case 0x0000000D:
				Function_122(2, 27);
				break;
			
			case 0x0000000E:
				Function_122(2, 28);
				break;
			}
	}
}

void Function_187(int iParam0, bool bParam1) //Position: 0x90FC / 37116
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_188() //Position: 0x916B / 37227
{
	if (Function_58(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_191(Global_42827);
			(&Global_42827 + 8) = Function_189(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_191(Global_42827);
			*(&Global_42827 + 8) = Function_189(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_189(int iParam0, int iParam1) //Position: 0x91EB / 37355
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
					if (Function_71(6, 0) || Function_71(12, 0))
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
					if (Function_190(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_71(5, 0))
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
					if (Function_190(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_190(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_190(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_190(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_71(26, 0))
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
					if (Function_190(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_190(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_190(27) && iVar16)
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
					if (Function_190(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_190(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_190(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_190(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_71(17, 0) && iVar13)
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
					if (Function_190(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_71(6, 0) && Function_190(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_190(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_71(9, 0) && Function_190(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_190(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_71(8, 0) && iVar17)
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
	if (Function_109(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_109(StackVal, vVar2))
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
	if (!Function_109(StackVal, vVar2))
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

int Function_190(int iParam0) //Position: 0x9E4E / 40526
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_191(int iParam0) //Position: 0x9E63 / 40547
{
	int iVar0;
	int iVar1;
	
	if (!Function_58(iParam0))
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

void Function_192(var uParam0, int iParam1) //Position: 0x9EB2 / 40626
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

void Function_193(bool bParam0, bool bParam1, int iParam2) //Position: 0x9F0A / 40714
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_194(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_197(bParam0, 0, 0);
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

bool Function_194(int iParam0, int iParam1) //Position: 0x9F7D / 40829
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_195(int iParam0) //Position: 0x9F91 / 40849
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_35(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_38(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_123(473, 1, 0, 0);
		iVar0 = Function_196(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_123(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_123(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_123(476, 1, 0, 0);
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
		Function_122(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_122(7, 30);
	}
	if (Function_98(473) <= Function_99(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_196(int iParam0) //Position: 0xA082 / 41090
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_39(iParam0))
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

int Function_197(bool bParam0, bool bParam1, int iParam2) //Position: 0xA0DA / 41178
{
	if (!Function_198(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_56(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_56(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_56(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_198(int iParam0) //Position: 0xA134 / 41268
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_199(bool bParam0) //Position: 0xA146 / 41286
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_200(struct<185> Param0) //Position: 0xA17A / 41338
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
			Function_201(4, 0, 0);
		}
	}
	return;
}

void Function_201(int iParam0, var uParam1, int iParam2) //Position: 0xA1E5 / 41445
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
		Function_202(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_202(bool bParam0, int iParam1, bool bParam2) //Position: 0xA2CF / 41679
{
	int iVar0;
	
	Function_204(bParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, &iParam1);
	Function_203();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_203() //Position: 0xA44E / 42062
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_204(int iParam0) //Position: 0xA45A / 42074
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

void Function_205() //Position: 0xA4A0 / 42144
{
	Function_206();
	return;
}

void Function_206() //Position: 0xA4A9 / 42153
{
	Function_207(&Local_4 + 8);
	RELEASE_LAYOUT_REF(&Local_4);
	return;
}

void Function_207(int iParam0) //Position: 0xA4BC / 42172
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_208(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_208(struct<2>[] Param0, int iParam1) //Position: 0xA4E4 / 42212
{
	if (Function_210(&(Param0[iParam12]), 4))
	{
		if (Function_210(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_209(&(Param0[iParam12]), 1);
			Function_209(&(Param0[iParam12]), 2);
			Function_209(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_209(struct<13> Param0) //Position: 0xA62F / 42543
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_210(struct<13> Param0) //Position: 0xA64C / 42572
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_211() //Position: 0xA66A / 42602
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_212(int iParam0) //Position: 0xA673 / 42611
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_213(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA6DB / 42715
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
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
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (iParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_215(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_214(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_214(bool bParam0) //Position: 0xAA1D / 43549
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

void Function_215(var uParam0) //Position: 0xAA50 / 43600
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_216() //Position: 0xAA67 / 43623
{
	if (IS_OBJECT_VALID(&bLocal_699))
	{
		Function_67();
		DESTROY_OBJECT(&bLocal_699);
	}
	if (IS_ACTOR_VALID(&bLocal_687))
	{
		TASK_CLEAR(&bLocal_687);
		PRINTSTRING("RELEASE_ACTOR(aBear)");
		PRINTNL();
		RELEASE_ACTOR(&bLocal_687);
	}
	if (IS_ACTOR_VALID(&bLocal_689))
	{
		SET_CRIPPLE_ENABLE(&bLocal_689, 1);
		SET_ACTOR_IS_COMPANION(&bLocal_689, 0);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689);
		TASK_CLEAR(&bLocal_689);
		PRINTSTRING("DEREFERENCE_ACTOR(aDog)");
		PRINTNL();
		DEREFERENCE_ACTOR(&bLocal_689);
	}
	if (IS_ACTOR_VALID(&bLocal_409))
	{
		TASK_CLEAR(&bLocal_409);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_409);
	}
	if (SQUAD_IS_VALID(&Local_4 + 72))
	{
		Function_217(&Local_4 + 72, 0, 0);
		PRINTSTRING("RELEASE_OBJECT_REF(home02_son03.Horse01Squad)");
		PRINTNL();
		RELEASE_OBJECT_REF(&Local_4 + 72);
	}
	if (IS_ACTOR_VALID(&bLocal_407))
	{
		if (IS_ACTOR_CRIPPLED(&bLocal_407, 5))
		{
			SET_CRIPPLE_FLAG(&bLocal_407, 0);
			DECOR_REMOVE(&bLocal_407, "NoBleedOut");
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_407, 0);
		}
	}
	return;
}

void Function_217(var uParam0, bool bParam1, bool bParam2) //Position: 0xABAA / 43946
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			SQUAD_LEAVE(&bVar1);
			if (&bParam2)
			{
				if (!Function_218(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&bVar1);
				}
			}
			if (IS_ACTOR_VALID(&bVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&bVar1);
				}
				else
				{
					RELEASE_ACTOR(&bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_218(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xAC33 / 44083
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_219(int iParam0) //Position: 0xAC53 / 44115
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_220(var uParam0, var uParam1, var uParam2) //Position: 0xACA1 / 44193
{
	if (IS_DOOR_VALID(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	if (IS_DOOR_VALID(&uParam1))
	{
		SET_DOOR_LOCK(&uParam1, 0);
	}
	if (IS_DOOR_VALID(&uParam2))
	{
		SET_DOOR_LOCK(&uParam2, 0);
	}
	return;
}

void Function_221() //Position: 0xACDD / 44253
{
	var uVar0[9];
	int iVar10;
	
	if (Function_264())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Follow Rufus";
		uVar0[4] = "Stage 03 - Are you up there?";
		uVar0[5] = "Stage 04 - Save Jake";
		uVar0[6] = "Stage 05 - Ride home";
		uVar0[7] = "Last Stage";
		uVar0[8] = "nPort Home";
		iVar10 = Function_250(&uLocal_382, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_249(&iVar10, &bLocal_402, &iLocal_403, &iLocal_390))
		{
			Function_242();
			Function_241();
		}
		if (iVar10 == 0)
		{
			Function_242();
			Function_241();
			Function_240(&bLocal_465, 8);
		}
		else if (iVar10 == 1)
		{
			Function_242();
			Function_241();
			Function_235(bLocal_402);
			Function_231(StackVal, 5, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
		}
		else if (iVar10 == 2)
		{
			Function_242();
			Function_241();
			Function_226(&bLocal_467, 4);
		}
		else if (iVar10 == 3)
		{
			Function_225();
			Function_242();
			Function_241();
			Function_223(&iLocal_411);
			bLocal_402 = true;
			iLocal_403 = 0;
			iLocal_390 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_225();
			Function_242();
			Function_241();
			Function_223(&iLocal_411);
			bLocal_402 = 2;
			iLocal_403 = 0;
			iLocal_390 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_225();
			Function_242();
			Function_241();
			Function_223(&iLocal_411);
			bLocal_402 = 3;
			iLocal_403 = 0;
			iLocal_390 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_225();
			Function_242();
			Function_241();
			Function_223(&iLocal_411);
			bLocal_402 = 4;
			iLocal_403 = 0;
			iLocal_390 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_225();
			Function_242();
			Function_241();
			Function_223(&iLocal_411);
			bLocal_402 = 101;
			iLocal_403 = 0;
			iLocal_390 = 1000;
		}
		else if (iVar10 == 8)
		{
			Function_242();
			Function_241();
			TASK_CLEAR(&bLocal_407);
			TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
			Function_222(StackVal, &Global_54076, Vector(-78,793f, 117,69f, 1315,892f), 148,456f, 1, 1, 1);
		}
	}
	return;
}

void Function_222(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xAF42 / 44866
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_223(int iParam0) //Position: 0xB011 / 45073
{
	Function_224(&iParam0, 0.0f);
	return;
}

void Function_224(vector3 vParam0) //Position: 0xB01E / 45086
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_112(&vParam0, 1);
	Function_27(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_225() //Position: 0xB043 / 45123
{
	if (IS_OBJECT_VALID(&bLocal_699))
	{
		Function_67();
		DESTROY_OBJECT(&bLocal_699);
	}
	if (IS_ACTOR_VALID(&bLocal_687))
	{
		DESTROY_ACTOR(&bLocal_687);
	}
	if (SQUAD_IS_VALID(&Local_4 + 72))
	{
		Function_219(&Local_4 + 72);
		DESTROY_OBJECT(&Local_4 + 72);
	}
	if (IS_ACTOR_VALID(&bLocal_407))
	{
		if (IS_ACTOR_CRIPPLED(&bLocal_407, 5))
		{
			SET_CRIPPLE_FLAG(&bLocal_407, 0);
			DECOR_REMOVE(&bLocal_407, "NoBleedOut");
			DECOR_REMOVE(&bLocal_407, "Injury_Idle");
		}
	}
	return;
}

void Function_226(bool bParam0, int iParam1) //Position: 0xB0D0 / 45264
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_227(&iParam1);
	bParam0 = 1;
	return;
}

void Function_227(int iParam0) //Position: 0xB0F5 / 45301
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_230("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_229(2) || Function_229(8)) || Function_229(9)) || Function_229(10))
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
		Function_230("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_230("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_230("");
	}
	else if (iParam0 == 8)
	{
		Function_228();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_228();
	}
	return;
}

void Function_228() //Position: 0xB1EC / 45548
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_229(int iParam0) //Position: 0xB1F8 / 45560
{
	int iVar0;
	
	if (!Function_73(iParam0))
	{
		return 0;
	}
	iVar0 = Function_72(iParam0);
	if (!Function_20(Function_72(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_230(char* cParam0) //Position: 0xB22E / 45614
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_231(int iParam0, var uParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB29A / 45722
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_232(StackVal, Param4, uParam3, &iParam6);
		Function_227(iParam0);
		uParam1 = 1;
		bParam2 = 100;
	}
}

void Function_232(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB2DB / 45787
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_234(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_233(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_233(int iParam0) //Position: 0xB35D / 45917
{
	if (!Function_39(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_234(struct<2> Param0, bool bParam2) //Position: 0xB80B / 47115
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
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_235(bool bParam0) //Position: 0xB877 / 47223
{
	Function_236(bParam0 + 1);
	return StackVal, Function_236(bParam0 + 1);
}

struct<8> Function_236(bool bParam0) //Position: 0xB884 / 47236
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_237(&Local_4 + 360[0]);
			return StackVal, Function_237(&Local_4 + 360[0]);
			break;
		
		case 0x00000001:
			Function_237(&Local_4 + 464[0]);
			return StackVal, Function_237(&Local_4 + 464[0]);
			break;
		
		case 0x00000002:
			Function_237(&Local_4 + 520[0]);
			return StackVal, Function_237(&Local_4 + 520[0]);
			break;
		
		case 0x00000003:
			Function_237(&Local_4 + 584[0]);
			return StackVal, Function_237(&Local_4 + 584[0]);
			break;
		
		case 0x00000004:
			Function_237(&Local_4 + 696[0]);
			return StackVal, Function_237(&Local_4 + 696[0]);
			break;
		
		default:
			Function_237(&Local_4 + 784[0]);
			return StackVal, Function_237(&Local_4 + 784[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_237(&Local_4 + 360[0]);
	return StackVal, Function_237(&Local_4 + 360[0]);
}

struct<8> Function_237(bool bParam0) //Position: 0xB97F / 47487
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_238(bool bParam0) //Position: 0xB9A8 / 47528
{
	return Function_239(bParam0 + 1);
}

int Function_239(bool bParam0) //Position: 0xB9B5 / 47541
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&Local_4 + 360[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&Local_4 + 464[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&Local_4 + 520[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&Local_4 + 584[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&Local_4 + 696[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&Local_4 + 784[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&Local_4 + 360[0]);
}

void Function_240(bool bParam0, int iParam1) //Position: 0xBAB0 / 47792
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_227(&iParam1);
	bParam0 = 1;
	return;
}

void Function_241() //Position: 0xBAD5 / 47829
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_242() //Position: 0xBAEA / 47850
{
	Function_244();
	Function_243(10, 3);
	return;
}

void Function_243(int iParam0, int iParam1) //Position: 0xBAF9 / 47865
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

void Function_244() //Position: 0xBC46 / 48198
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_248())
	{
		Function_247(10, 3);
	}
	else
	{
		Function_245();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_56(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_56());
	UI_POP("nDebugMenu");
	return;
}

void Function_245() //Position: 0xBC91 / 48273
{
	Function_246(25, 2);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xBC9D / 48285
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

void Function_247(int iParam0, int iParam1) //Position: 0xBEC9 / 48841
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

bool Function_248() //Position: 0xC017 / 49175
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

bool Function_249(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC07F / 49279
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_242();
			Function_241();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
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
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_230("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_250(struct<17> Param0) //Position: 0xC12E / 49454
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_263(&Var12, &Var0);
	uVar15 = Function_262(uParam1, &Var12);
	Function_261(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_260(&Param0, uVar15);
	Function_258(StackVal, &Param0, Var12.f_12);
	Function_256(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_255(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_252(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_251(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_251(int iParam0, int iParam1, int iParam2) //Position: 0xC222 / 49698
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

bool Function_252(struct<17> Param0) //Position: 0xC282 / 49794
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
				Function_254(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_254(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_251(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_253(Param1.f_64);
	}
	else
	{
		Function_253(Param1.f_64);
	}
	return 0;
}

void Function_253(bool bParam0) //Position: 0xC415 / 50197
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

void Function_254(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC453 / 50259
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

var Function_255(int iParam0, struct<21> Param1) //Position: 0xC509 / 50441
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_256(vector3 vParam0) //Position: 0xC530 / 50480
{
	switch (Function_257())
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

int Function_257() //Position: 0xC5DC / 50652
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

void Function_258(vector3 vParam0) //Position: 0xC618 / 50712
{
	switch (Function_259(&vParam0))
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

int Function_259(bool bParam0) //Position: 0xC6C1 / 50881
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_112(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_112(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_27(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_112(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_112(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_27(&bParam0, 0x20000000);
	return 0;
}

var Function_260(struct<21> Param0) //Position: 0xC7E1 / 51169
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

void Function_261(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xC99B / 51611
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

var Function_262(int iParam0, struct<13> Param1) //Position: 0xCA37 / 51767
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_263(struct<17> Param0) //Position: 0xCA53 / 51795
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

bool Function_264() //Position: 0xCAAD / 51885
{
	return Global_47307;
}

bool Function_265() //Position: 0xCAB6 / 51894
{
	var uVar0;
	
	if (IS_EXITFLAG_SET())
	{
		Function_235(bLocal_402);
		Function_231(StackVal, 4, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
		return 0;
	}
	Function_502(StackVal, StackVal, StackVal, StackVal, StackVal, Local_336, bLocal_402, iLocal_403, &bLocal_467, &bLocal_465, &bLocal_466);
	if (bLocal_402 == 99 && bLocal_402 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			if (IS_ACTOR_ALIVE(&bLocal_407))
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (ACTORS_IN_RANGE(&bLocal_407, &Global_54076, 25.0f))
					{
						GET_OBJECT_POSITION(&Global_54076, &uVar0);
						bLocal_693 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(0, &uVar0, 4);
						TASK_FACE_COORD(0, &uVar0, 0);
						TASK_CROUCH(false, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
						TASK_SEQUENCE_RELEASE(bLocal_693, 1);
						TASK_PRIORITY_SET(&bLocal_407, true);
					}
				}
			}
			Function_235(bLocal_402);
			Function_231(StackVal, 1, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
			return 1;
		}
		if (Function_482(&Local_523, &uLocal_469, &uLocal_675, &uLocal_405, iLocal_468))
		{
			if (Function_480(&uLocal_675))
			{
				Function_235(bLocal_402);
				Function_231(StackVal, 5, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
				return 1;
			}
		}
		if (IS_ACTOR_VALID(&bLocal_407))
		{
			if (!IS_ACTOR_ALIVE(&bLocal_407))
			{
				Function_230("Son_dead");
				Function_235(bLocal_402);
				Function_231(StackVal, 5, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_685))
		{
			if (!IS_ACTOR_ALIVE(&bLocal_685))
			{
				Function_230("nWife_dead");
				Function_235(bLocal_402);
				Function_231(StackVal, 5, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_689))
		{
			if (!IS_ACTOR_ALIVE(&bLocal_689))
			{
				Function_230("Dog_dead");
				Function_235(bLocal_402);
				Function_231(StackVal, 5, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
			}
		}
		if (Global_6646 || Global_6647)
		{
			Function_235(bLocal_402);
			Function_231(StackVal, 2, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
			return 1;
		}
		if (Function_479(2048))
		{
			Function_235(bLocal_402);
			Function_231(StackVal, 3, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
			return 1;
		}
		Function_476(&bLocal_409, &bLocal_407);
		Function_475();
	}
	switch (bLocal_402)
	{
		case 0x00000063:
			Function_448();
			break;
		
		case 0x00000000:
			Function_436();
			break;
		
		case 0x00000001:
			Function_429();
			break;
		
		case 0x00000002:
			Function_420();
			break;
		
		case 0x00000003:
			Function_413();
			break;
		
		case 0x00000004:
			Function_346();
			break;
		
		case 0x00000065:
			Function_268();
			break;
		
		case 0x00000064:
			if (Function_267(&bLocal_466))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_266(&bLocal_402, &iLocal_403, &iLocal_390))
			{
				return 0;
			}
			break;
	}
	if (bLocal_465)
	{
		Function_240(&bLocal_465, 8);
		return 0;
	}
	if (bLocal_466 && bLocal_402 == 100)
	{
		Function_235(bLocal_402);
		Function_231(StackVal, 5, &bLocal_466, &bLocal_402, Function_238(bLocal_402), Function_235(bLocal_402), 0);
	}
	if (bLocal_467)
	{
		Function_226(&bLocal_467, 4);
		return 0;
	}
	return 1;
}

bool Function_266(var uParam0, var uParam1, int iParam2) //Position: 0xCD8D / 52621
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_267(int iParam0) //Position: 0xCDD6 / 52694
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_268() //Position: 0xCDEA / 52714
{
	Function_345(&uLocal_334);
	Function_342();
	switch (iLocal_403)
	{
		case 0x00000000:
			Function_338(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				SET_ACTOR_HEALTH(&bLocal_689, GET_ACTOR_MAX_HEALTH(&bLocal_689));
				Function_336(&bLocal_689, &Local_4 + 784[4], 0, 1, 1, 1);
			}
			Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_409, true);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_407);
				MEMORY_PREFER_RIDING(&bLocal_407, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_407);
				TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_407, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_334(0.0f, "Last_Stage.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_330();
				bLocal_404 = Global_46914[1];
				if (!Function_329(bLocal_404))
				{
					Function_328(&Local_336);
				}
				Function_336(&Global_54076, &Local_4 + 784[0], 0, 1, 1, 1);
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			else
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_329(bLocal_404) || bLocal_404 != 4294967295))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_694 = 0;
			iLocal_698 = 0;
			AUDIO_SET_PLAYER_MOOD(0, 0);
			Function_223(&iLocal_411);
			iLocal_403 = 3;
			break;
		
		case 0x00000003:
			if (Global_99145)
			{
				iLocal_403 = 106;
			}
			else if (Function_269("$/cutscene/SON03_CS02_D/SON03_CS02_D", &iLocal_390, &Local_336, &bLocal_402, 65147, 62981, 60493, 59095, 56667, 56333, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_465 = true;
			}
			break;
	}
	return;
}

bool Function_269(int iParam0, int iParam1, struct<41> Param2) //Position: 0xCFFF / 53247
{
	if (!&bParam15)
	{
		Function_282(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (bParam3 != 99 && (Function_281(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&iParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_223(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_280())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_279(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_223(&iParam1 + 4);
						iParam1 = 1004;
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
					Function_279(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_276(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_276(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_274(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_279(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_223(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_273(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_271();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
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
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_270(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && bParam3 == 99) && !Function_281(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_270(var uParam0, bool bParam1) //Position: 0xD661 / 54881
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_47();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_271() //Position: 0xD730 / 55088
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_272();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_272() //Position: 0xD775 / 55157
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_273(bool bParam0) //Position: 0xD787 / 55175
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

void Function_274(var uParam0, int iParam1) //Position: 0xD7A4 / 55204
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_89(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_275(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_275(int iParam0) //Position: 0xD836 / 55350
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

float Function_276(vector3 vParam0) //Position: 0xD867 / 55399
{
	if (Function_278(&vParam0))
	{
		if (Function_277(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_277(int iParam0) //Position: 0xD934 / 55604
{
	return Function_14(iParam0, 2);
}

bool Function_278(int iParam0) //Position: 0xD942 / 55618
{
	return Function_14(iParam0, 1);
}

int Function_279(bool bParam0) //Position: 0xD950 / 55632
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", 1);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_280() //Position: 0xDA13 / 55827
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_281(struct<37> Param0) //Position: 0xDA50 / 55888
{
	return Param0.f_36;
}

void Function_282(var uParam0, int iParam1) //Position: 0xDA5B / 55899
{
	Function_283(&uParam0, &iParam1, 0);
	return;
}

void Function_283(var uParam0, bool bParam1, bool bParam2) //Position: 0xDA6B / 55915
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_284(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_123(20, 1, 0, 0);
		uParam0 = 1105;
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
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_284(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_123(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_284(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDBE3 / 56291
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

int Function_285() //Position: 0xDC0D / 56333
{
	switch (bLocal_402)
	{
		case 0x00000063:
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			if (!iLocal_734)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				iLocal_734 = 1;
			}
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED - DEFAULT???");
			Function_286();
			return 1;
			break;
	}
	return 0;
}

int Function_286() //Position: 0xDD54 / 56660
{
	return 1;
}

int Function_287() //Position: 0xDD5B / 56667
{
	var uVar0;
	
	switch (bLocal_402)
	{
		case 0x00000063:
			AI_STOP_IGNORING_ACTORS();
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 80[0]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 80[0]);
			DESTROY_VOLUME(&Local_4 + 80[0]);
			Function_298(2, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1);
			if (!IS_ACTOR_VALID(&bLocal_409))
			{
				GET_OBJECT_POSITION(&Local_4 + 360[7], &vLocal_704);
				bLocal_409 = Function_291(1, 1, vLocal_704.x, vLocal_704.y, vLocal_704.z, 0, 1, 0);
				REMOVE_HORSE_ACCESSORY(&bLocal_409, 4);
				ACCESSORIZE_HORSE(&bLocal_409, 3);
			}
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			Function_298(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_298(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (GET_MOUNT(&Global_54076) != &bLocal_409)
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
			}
			if (GET_MOUNT(&bLocal_407) != &bLocal_409)
			{
				SET_MOUNTS_AS_PASSENGER(&bLocal_407, 1);
				SET_ACTORS_HORSE(&bLocal_407, &bLocal_409);
				Function_289(&bLocal_407, &bLocal_409, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_407, &bLocal_409);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_298(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			GET_VOLUME_CENTER(&Local_4 + 344, &uVar0);
			bLocal_693 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(0, &uVar0, 7,5f, 4);
			TASK_WANDER_IN_VOLUME(false, &Local_4 + 344, -1f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
			TASK_SEQUENCE_RELEASE(bLocal_693, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_407, 0);
			MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_407);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE - DEFAULT???");
			Function_288();
			return 1;
			break;
	}
	return 0;
}

int Function_288() //Position: 0xDFBF / 57279
{
	Function_298(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_289(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDFD4 / 57300
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			MEMORY_IDENTIFY(&bParam0, &bParam1);
			Function_290(&bParam1);
			uVar0 = Function_290(&bParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&bParam0, &bParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&bParam0, &bParam1, &uVar0);
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

struct<8> Function_290(bool bParam0) //Position: 0xE0E5 / 57573
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_291(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xE151 / 57681
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_297(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_296())
		{
			return "";
		}
	}
	if (!Function_294())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_47();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_237(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_237(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_237(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_237(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_293(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_293(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_89(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_89(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
				if (!Function_109(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_89(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_89(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_292(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_292(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE4AE / 58542
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_293(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE4F8 / 58616
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
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
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_294() //Position: 0xE598 / 58776
{
	if (Function_295() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_295() //Position: 0xE5AE / 58798
{
	return Global_21369.f_244;
}

bool Function_296() //Position: 0xE5B9 / 58809
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_297(var uParam0, bool bParam1, bool bParam2) //Position: 0xE5D9 / 58841
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_112(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_112(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_298(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xE608 / 58888
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_56();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_123(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_241();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_270(&iParam9, &bParam10);
}

int Function_299() //Position: 0xE6D7 / 59095
{
	switch (bLocal_402)
	{
		case 0x00000063:
			TASK_CLEAR(&Global_54076);
			Function_336(&Global_54076, &Local_4 + 360[1], ", CUTSCENE_CUSTOM_SET_POSES - SID_INITIALIZE", 0, 1, 1);
			if (!iLocal_731)
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
				iLocal_731 = 1;
			}
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				SET_ACTOR_HEALTH(&bLocal_409, GET_ACTOR_MAX_HEALTH(&bLocal_409));
				Function_336(&bLocal_409, &Local_4 + 360[7], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
				Function_336(&bLocal_407, &Local_4 + 360[3], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_691))
			{
				SET_ACTOR_HEALTH(&bLocal_691, GET_ACTOR_MAX_HEALTH(&bLocal_691));
				Function_336(&bLocal_691, &Local_4 + 360[10], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_685))
			{
				SET_ACTOR_HEALTH(&bLocal_685, GET_ACTOR_MAX_HEALTH(&bLocal_685));
				Function_336(&bLocal_685, &Local_4 + 360[5], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				SET_ACTOR_HEALTH(&bLocal_689, GET_ACTOR_MAX_HEALTH(&bLocal_689));
				Function_336(&bLocal_689, &Local_4 + 360[6], 0, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				Function_336(&Global_54076, &Local_4 + 584[1], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				Function_336(&bLocal_407, &Local_4 + 584[3], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				Function_336(&bLocal_409, &Local_4 + 584[7], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				Function_336(&bLocal_689, &Local_4 + 584[5], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_687))
			{
				Function_336(&bLocal_687, &Local_4 + 584[10], 0, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000004:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				if (IS_ACTOR_CRIPPLED(&bLocal_407, 5))
				{
					SET_CRIPPLE_FLAG(&bLocal_407, 0);
					DECOR_REMOVE(&bLocal_407, "NoBleedOut");
					DECOR_SET_BOOL(&bLocal_407, "Injury_Idle", 1);
				}
				if (!IS_ACTOR_CRIPPLED(&bLocal_407, 5))
				{
					SET_CRIPPLE_FLAG(&bLocal_407, 2);
					DECOR_REMOVE(&bLocal_407, "NoBleedOut");
					DECOR_SET_BOOL(&bLocal_407, "Injury_Idle", 1);
				}
				Function_336(&bLocal_407, &Local_4 + 696[2], 0, 1, 1, 1);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_407, true);
				MEMORY_ALLOW_SHOOTING(&bLocal_407, false);
			}
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				SET_ACTOR_HEALTH(&bLocal_409, GET_ACTOR_MAX_HEALTH(&bLocal_409));
				Function_336(&bLocal_409, &Local_4 + 696[6], "", 0, 0, 1);
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_409);
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				SET_ACTOR_HEALTH(&bLocal_689, GET_ACTOR_MAX_HEALTH(&bLocal_689));
				Function_336(&bLocal_689, &Local_4 + 696[4], 0, 1, 1, 1);
				Function_214(&bLocal_689);
			}
			if (IS_ACTOR_VALID(&Local_4 + 48[02]))
			{
				if (IS_ACTOR_ALIVE(&Local_4 + 48[02]))
				{
					SET_ACTOR_PERMANENT_DEAD(&Local_4 + 48[02]);
					Function_301(&Local_4 + 48[02]);
				}
			}
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					if (GET_MOUNT(&Global_54076) != &bLocal_409)
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
					}
					Function_336(&bLocal_409, &Local_4 + 696[6], 0, 1, 1, 1);
				}
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					if (GET_MOUNT(&bLocal_407) != &bLocal_409)
					{
						SET_ACTORS_HORSE(&bLocal_407, &bLocal_409);
						Function_289(&bLocal_407, &bLocal_409, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_407, &bLocal_409);
					}
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			if (GET_MOUNT(&Global_54076) != &bLocal_409)
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
			}
			if (GET_MOUNT(&bLocal_407) != "")
			{
				ACTOR_DISMOUNT_NOW(&bLocal_407);
			}
			Function_336(&bLocal_407, &Local_4 + 784[2], 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES - DEFAULT???");
			Function_300();
			return 1;
			break;
	}
	return 0;
}

int Function_300() //Position: 0xEC0F / 60431
{
	return 1;
}

void Function_301(var uParam0) //Position: 0xEC16 / 60438
{
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&uParam0, "nocrime", 1);
	}
	return;
}

int Function_302() //Position: 0xEC4D / 60493
{
	switch (bLocal_402)
	{
		case 0x00000063:
			if (!Function_310() && !Function_304(&iLocal_348))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			PRINTSTRING("frame: ");
			PRINTINT(CUTSCENE_MANAGER_GET_CURRENT_FRAME());
			PRINTNL();
			if (CUTSCENE_MANAGER_GET_CURRENT_FRAME() > 400)
			{
				if (!iLocal_734)
				{
					LOG_ERROR("GUNFIGHT_SUSPENSE_HIGH");
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					iLocal_734 = 1;
				}
			}
			if (IS_ACTOR_VALID(&bLocal_687))
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					switch (iLocal_698)
					{
						case 0x0000000A:
							if (STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "BearEatGrowl"))
							{
								SET_ANIM_SET_FOR_ACTOR(&bLocal_687, "cs_son03_bear", 0);
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_687, "cs_son03_bear");
								iLocal_698 = 11;
							}
							return 0;
							break;
						
						case 0x0000000B:
							if (STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "BearCharge"))
							{
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_687, "cs_son03_bear/CS_Bear_p2");
								iLocal_698 = 12;
							}
							return 0;
							break;
						
						case 0x0000000C:
							return 1;
							break;
						
						default:
							LOG_ERROR("iBearState???");
							break;
						}
					}
			}
			return 0;
			break;
		
		case 0x00000004:
			if (!Function_310() && !Function_304(&iLocal_348))
			{
				return 0;
			}
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&bLocal_409)))
			{
				DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(&bLocal_409));
			}
			return 1;
			break;
		
		case 0x00000065:
			if (!Function_310() && !Function_304(&iLocal_348))
			{
				return 0;
			}
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT - DEFAULT???");
			Function_303();
			return 1;
			break;
	}
	return 0;
}

int Function_303() //Position: 0xEEFD / 61181
{
	return 1;
}

bool Function_304(struct<2>[] Param0) //Position: 0xEF04 / 61188
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_309();
	iVar1 = 0;
	if (!Function_210(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_308(&(Param0[iVar02]), 8);
		}
		else if (Function_307())
		{
			iVar1 = 1;
			Function_308(&(Param0[iVar02]), 8);
		}
		Function_308(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_210(&(Param0[iVar02]), 4))
		{
			if (!Function_210(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_210(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_210(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_308(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_210(&(Param0[iVar02]), 4))
		{
			if (!Function_210(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_308(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_308(&(Param0[iVar02]), 2);
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
	Function_305();
	return 1;
}

void Function_305() //Position: 0xF2C6 / 62150
{
	if (!Function_306(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_306(int iParam0) //Position: 0xF306 / 62214
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_307() //Position: 0xF322 / 62242
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_308(struct<13> Param0) //Position: 0xF350 / 62288
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_309() //Position: 0xF363 / 62307
{
	if (!Function_306(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

bool Function_310() //Position: 0xF3A5 / 62373
{
	Function_313(&Local_4 + 8, 999, 2, 0);
	Function_311(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground_tlkpsnt_hrassol_link", 1, 0);
	if (Function_304(&Local_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_311(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xF41C / 62492
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_312(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_308(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_312(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xF45A / 62554
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_210(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_308(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_313(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF529 / 62761
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_210(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_308(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_308(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_314() //Position: 0xF605 / 62981
{
	struct<2> Var0;
	
	switch (bLocal_402)
	{
		case 0x00000063:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			if (!Function_310() && !Function_304(&iLocal_348))
			{
				return 0;
			}
			if (HUD_IS_FADED())
			{
				Function_320(1.0f, "CUTSCENE_CUSTOM_STREAMING - SID_FOURTH_STAGE");
			}
			return 1;
			break;
		
		case 0x00000004:
			Function_318(0, 0, 4294967295, 4294967295);
			Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			Function_316();
			return 1;
			break;
		
		case 0x00000065:
			GET_VOLUME_CENTER(&Local_4 + 344, &Var0);
			Function_316();
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Var0, 0, 0);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING - DEFAULT???");
			Function_315();
			return 1;
			break;
	}
	return 0;
}

int Function_315() //Position: 0xF7AF / 63407
{
	return 1;
}

int Function_316() //Position: 0xF7B6 / 63414
{
	bool bVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar3))
		{
			iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (Function_317(iVar5))
			{
				if (iVar5 == GET_ACTOR_ENUM(&bLocal_407))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &bLocal_407);
				}
				if (iVar5 == 976)
				{
					if (!IS_ACTOR_VALID(&bLocal_409))
					{
						PRINTSTRING("  * m_aPlayerHorse is NOT VALID!!!");
						PRINTNL();
						bLocal_409 = Function_291(1, 1, 0, 0, 0, 0, 1, 0);
						REMOVE_HORSE_ACCESSORY(&bLocal_409, 4);
						ACCESSORIZE_HORSE(&bLocal_409, 3);
						return 0;
					}
					if (!IS_ACTOR_ALIVE(&bLocal_409))
					{
						PRINTSTRING("  * m_aPlayerHorse is NOT alive???");
						PRINTNL();
						return 0;
					}
					PRINTSTRING("  * m_aPlayerHorse is alive ");
					PRINTFLOAT(GET_ACTOR_HEALTH(&bLocal_409));
					PRINTNL();
					SET_ACTOR_INVULNERABILITY(&bLocal_409, 1);
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &bLocal_409);
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_317(int iParam0) //Position: 0xF8E6 / 63718
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_318(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xF8FD / 63741
{
	AUDIO_MUSIC_SET_MOOD(Function_319(iParam0), &iParam1, &iParam2, &iParam3);
}

var Function_319(int iParam0) //Position: 0xF916 / 63766
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
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
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
	return &iVar0;
}

void Function_320(bool bParam0, float fParam1) //Position: 0xFE6B / 65131
{
	HUD_FADE_IN(bParam0, 1065353216);
	return;
}

int Function_321() //Position: 0xFE7B / 65147
{
	switch (bLocal_402)
	{
		case 0x00000063:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_237(&Local_4 + 360[0]);
			Function_323(StackVal, &uLocal_334, Function_237(&Local_4 + 360[0]), &Local_4 + 80[0], 1, 0, 0, 0, 1, 1);
			Function_336(&Global_54076, &Local_4 + 360[1], ", CUTSCENE_CUSTOM_SETUP - SID_INITIALIZE", 1, 1, 1);
			TASK_STAND_STILL(&bLocal_687, -1.0f, 0, 0);
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - SID_SECOND_STAGE");
			return 1;
			break;
		
		case 0x00000002:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - SID_THIRD_STAGE");
			return 1;
			break;
		
		case 0x00000003:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_237(&Local_4 + 584[0]);
			Function_323(StackVal, &uLocal_334, Function_237(&Local_4 + 584[0]), &Local_4 + 80[3], 0, 0, 0, 0, 1, 1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_407, true);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_687, "cs_son03_bear", 0);
			return 1;
			break;
		
		case 0x00000004:
			Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_237(&Local_4 + 696[0]);
			Function_323(StackVal, &uLocal_334, Function_237(&Local_4 + 696[0]), &Local_4 + 80[4], 0, 0, 0, 0, 1, 1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_407, true);
			return 1;
			break;
		
		case 0x00000065:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_237(&Local_4 + 784[0]);
			Function_323(StackVal, &uLocal_334, Function_237(&Local_4 + 784[0]), &Local_4 + 80[5], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP - DEFAULT???");
			Function_322();
			return 1;
			break;
	}
	return 0;
}

int Function_322() //Position: 0x100DF / 65759
{
	bool bVar0;
	
	Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2,802597E-45f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_323(StackVal, &Global_10996, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_323(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x10145 / 65861
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_324(&uVar1, &uParam0);
			}
		}
		if (!Function_109(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_324(var uParam0, float fParam1) //Position: 0x103E5 / 66533
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_325(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x10467 / 66663
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_241();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_56();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_327(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_89(), 2,802597E-45f, Function_327(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_123(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_326()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_326()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_306(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_199(0x4000000);
	}
	if (Function_306(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_199(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_326() //Position: 0x10719 / 67353
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_327(int iParam0) //Position: 0x107A7 / 67495
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_328(int iParam0) //Position: 0x107B9 / 67513
{
	if (!Function_281(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_34(1, 0, 1);
		}
	}
	return;
}

bool Function_329(bool bParam0) //Position: 0x107D5 / 67541
{
	if (!Function_39(bParam0))
	{
		return 1;
	}
	return Function_35(&(Global_43791[bParam0]), 4);
}

void Function_330() //Position: 0x107F1 / 67569
{
	Function_199(18444);
	Function_333(12);
	Function_333(13);
	Function_333(11);
	Function_333(35);
	Function_333(6);
	Function_333(3);
	Function_333(16);
	Function_331(4);
	return;
}

void Function_331(int iParam0) //Position: 0x10822 / 67618
{
	Function_332(&Global_43580, iParam0);
	return;
}

void Function_332(var uParam0, int iParam1) //Position: 0x10830 / 67632
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_333(int iParam0) //Position: 0x10858 / 67672
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_334(float fParam0, int iParam1) //Position: 0x10878 / 67704
{
	HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
	HUD_FADE_OUT(fParam0, 1f, 1);
	return;
}

void Function_335(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10890 / 67728
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_319(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

void Function_336(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x108BA / 67770
{
	Function_337(&bParam0, &bParam1, &iParam3, &iParam4, &iParam5);
}

void Function_337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x108D4 / 67796
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uParam0, Var0, &uParam2, &uParam3, &uParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_338(bool bParam0) //Position: 0x109E4 / 68068
{
	Function_339(0, 0x40400000);
	Function_62();
	Function_61();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_339(float fParam0, float fParam1) //Position: 0x10A1A / 68122
{
	(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_341();
	Function_340();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_340() //Position: 0x10B2B / 68395
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_341() //Position: 0x10B5F / 68447
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_342() //Position: 0x10C65 / 68709
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&bLocal_407))
	{
		if (bLocal_402 == 4)
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_409)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
					{
						if (IS_ACTOR_HORSE(GET_MOUNT(&Global_54076)))
						{
							bLocal_409 = GET_MOUNT(&Global_54076);
							SET_ACTORS_HORSE(&bLocal_407, &bLocal_409);
							Function_289(&bLocal_407, &bLocal_409, 1);
						}
					}
				}
				if (GET_TASK_STATUS(&bLocal_407, 7) == 1)
				{
					TASK_CLEAR(&bLocal_407);
				}
			}
			else if (!IS_ACTOR_ALIVE(&bLocal_409))
			{
				if (GET_TASK_STATUS(&bLocal_407, 7) != 1)
				{
					TASK_FOLLOW_ACTOR(&bLocal_407, &Global_54076);
				}
			}
		}
		switch (iLocal_694)
		{
			case 0x00000000:
				iLocal_694 = 1;
				break;
			
			case 0x00000001:
				iVar0 = 0;
				while (iVar0 < 2)
				{
					ADD_BLOOD_TO_ACTOR(StackVal, &bLocal_407, Vector(0.0f, 0,459f, -0,5f), 4, 1, 0);
					ADD_BLOOD_TO_ACTOR(StackVal, &bLocal_407, Vector(0.0f, 1.0f, -0,5f), 3, 1, 0);
					ADD_BLOOD_TO_ACTOR(StackVal, &bLocal_407, Vector(0.0f, 1,25f, -0,5f), 3, 1, 0);
					iVar0++;
				}
				iLocal_694 = 2;
				break;
			
			case 0x00000002:
				if (bLocal_402 == 3)
				{
					Function_223(&iLocal_423);
					iLocal_694 = 40;
				}
				if (bLocal_402 == 4)
				{
					Function_223(&iLocal_423);
					iLocal_694 = 50;
				}
				break;
			
			case 0x00000028:
				if (Function_344(&iLocal_439, 2.0f))
				{
					if (Function_343())
					{
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_409, "son03_jack/talk_leg");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_409, "son03_jack/talk_survey");
					}
					Function_223(&iLocal_423);
				}
				break;
			
			case 0x00000032:
				break;
			}
	}
	return;
}

bool Function_343() //Position: 0x10E10 / 69136
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_344(int iParam0, float fParam1) //Position: 0x10E23 / 69155
{
	if (Function_278(&iParam0))
	{
		if (Function_276(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_345(var uParam0) //Position: 0x10E41 / 69185
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
		if (IS_ITERATOR_VALID(&uVar0))
		{
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				while (IS_OBJECT_VALID(&uVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if (((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1041) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1042) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1043) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1044)
						{
							DESTROY_OBJECT(&uVar1);
						}
					}
					uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
				}
			}
			DESTROY_ITERATOR(&uVar0);
		}
	}
	return;
}

void Function_346() //Position: 0x1100A / 69642
{
	struct<5> Var0;
	
	Function_345(&uLocal_334);
	if (iLocal_403 < 3 && iLocal_403 > 105)
	{
		Function_342();
		Function_404(15.0f);
		Function_403();
		if (!Global_99145)
		{
			Function_237(&Local_4 + 784[0]);
			Function_400(StackVal, "$/cutscene/SON03_CS02_D/SON03_CS02_D", &uLocal_683, Function_237(&Local_4 + 784[0]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		}
		if (IS_VOLUME_VALID(&Local_4 + 336))
		{
			GET_OBJECT_POSITION(&Global_54076, &Var0);
			GET_OBJECT_POSITION(&bLocal_689, &Var2);
			if (StackVal || (StackVal > IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 336) && !Function_218(&bLocal_689, 0x3f800000, 0x42960000, 1, 1, 0)))
			{
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689, &Global_54076, 60.0f, 10.0f, 50.0f);
				DESTROY_VOLUME(&Local_4 + 336);
			}
		}
		if ((iLocal_403 != 42 || iLocal_403 != 43) || iLocal_403 != 44)
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if (IS_OBJECT_VALID(&bLocal_699))
				{
					if (GATEWAY_UPDATE(&bLocal_699))
					{
						if (IS_OBJECT_VALID(&bLocal_699))
						{
							DESTROY_OBJECT(&bLocal_699);
						}
						TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_241();
						Function_223(&iLocal_411);
						iLocal_403 = 105;
					}
				}
			}
		}
	}
	switch (iLocal_403)
	{
		case 0x00000000:
			Function_338(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_409, true);
				SET_ACTOR_INVULNERABILITY(&bLocal_409, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_407);
				MEMORY_PREFER_RIDING(&bLocal_407, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_407);
				TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_407, true);
				SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
				if (!ACTOR_HAS_ANIM_SET(&bLocal_407, "gent_ride_passenger"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_407, 0);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_407, "gent_ride_passenger", 0);
					SET_MOUNTS_AS_PASSENGER(&bLocal_407, 1);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
				DECOR_REMOVE(&bLocal_689, "Frank");
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_451[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_334(0.0f, "Stage_Five.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_330();
				bLocal_404 = Global_46754[1];
				if (!Function_329(bLocal_404))
				{
					Function_328(&Local_336);
				}
				Function_336(&Global_54076, &Local_4 + 696[0], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					Function_336(&bLocal_689, &Local_4 + 696[4], 0, 1, 1, 1);
				}
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			else
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_329(bLocal_404) || bLocal_404 != 4294967295))
			{
				if (Function_398(StackVal, StackVal, StackVal, StackVal, StackVal, Local_336, bLocal_402) && !Global_99145)
				{
					Function_237(&Local_4 + 696[0]);
					if (Function_395(StackVal, "$/cutscene/SON03_CS02_SEQ/SON03_CS02_SEQ", &uLocal_683, Function_237(&Local_4 + 696[0]), 63414, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
					{
						Function_223(&iLocal_411);
						iLocal_403 = 2;
					}
				}
				else
				{
					Function_223(&iLocal_411);
					iLocal_403 = 2;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_694 = 0;
			iLocal_698 = 0;
			iLocal_697 = 0;
			iLocal_735 = 0;
			Function_390();
			iLocal_468 = 0;
			Function_385(&(Local_523[015]), &bLocal_407, "Son", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[115]), &bLocal_689, "Dog", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[215]), &bLocal_691, "Uncle", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[315]), &bLocal_685, "Wife", 0, 0x5f5e100, 1);
			Function_381(&(Local_523[115]), 1024);
			Function_380(&(Local_523[415]));
			Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
			if (Function_398(StackVal, StackVal, StackVal, StackVal, StackVal, Local_336, bLocal_402) && !Global_99145)
			{
				Function_236(bLocal_402);
				Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[1], Function_239(bLocal_402), 2);
				Function_318(0, 0, 4294967295, 4294967295);
				Function_223(&iLocal_411);
				iLocal_403 = 3;
			}
			else
			{
				Function_236(bLocal_402);
				Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[1], Function_239(bLocal_402), 2);
				Function_299();
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					if (GET_MOUNT(&Global_54076) != &bLocal_409)
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
					}
					Function_336(&bLocal_409, &Local_4 + 696[6], 0, 1, 1, 1);
					if (IS_ACTOR_VALID(&bLocal_407))
					{
						if (GET_MOUNT(&bLocal_407) != &bLocal_409)
						{
							SET_ACTORS_HORSE(&bLocal_407, &bLocal_409);
							Function_289(&bLocal_407, &bLocal_409, 1);
							ACTOR_MOUNT_ACTOR(&bLocal_407, &bLocal_409);
						}
					}
				}
				if (HUD_IS_FADED())
				{
					Function_320(1.0f, "Stage_Five.GID_POST_STREAMING");
				}
				Function_223(&iLocal_411);
				iLocal_403 = 6;
			}
			break;
		
		case 0x00000003:
			if (Global_99145)
			{
				iLocal_403 = 6;
			}
			else if (Function_269("$/cutscene/SON03_CS02_SEQ/SON03_CS02_SEQ", &iLocal_390, &Local_336, &bLocal_402, 65147, 62981, 60493, 59095, 56667, 56333, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					Function_320(1.0f, "Stage_Five.GID_CUTSCENE");
				}
				Function_223(&iLocal_411);
				iLocal_403 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					MEMORY_PREFER_RIDING(&bLocal_407, true);
					MEMORY_ALLOW_SHOOTING(&bLocal_407, true);
					Function_111();
					vLocal_701 = Function_111();
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &bLocal_409, 0, 1, 2, 2147483647);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689, &Global_54076, 60.0f, 10.0f, 50.0f);
					Local_707[02] = Vector(1,5f, 0.0f, 6.0f);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_FOLLOW_OBJECT(0, &Global_54076, &(Local_707[02]), 0, 0, 0, 0, 0, 0, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				bLocal_699 = Function_371(&uLocal_334, "HOME02SON03GATEWAY01", &Local_4 + 192[4], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
				if (IS_OBJECT_VALID(&bLocal_699))
				{
				}
				Function_237(&bLocal_699);
				Function_369(StackVal, Function_237(&bLocal_699), 0, 48, 1);
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				Function_223(&iLocal_411);
				iLocal_403 = 7;
			}
			break;
		
		case 0x00000007:
			Function_368("home02_son03_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_223(&iLocal_411);
			Function_223(&iLocal_415);
			Function_223(&iLocal_419);
			Function_223(&iLocal_435);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_407)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_407));
			}
			Function_335(&iLocal_684, 12, 0, 4294967295, 4294967295);
			Function_241();
			Function_223(&iLocal_411);
			iLocal_403 = 9;
			break;
		
		case 0x00000009:
			if (Function_344(&iLocal_411, 1.0f))
			{
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					Function_367(12, 0, 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				Function_364();
				Function_223(&iLocal_411);
				iLocal_403 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_344(&iLocal_411, 3.0f))
			{
				Function_368("home02_son03_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_419);
				Function_223(&iLocal_435);
				switch (Function_363())
				{
					case 0x00000000:
						iLocal_755 = 0;
						break;
					
					case 0x00000001:
						iLocal_755 = 2;
						break;
					
					case 0x00000002:
						iLocal_755 = 4;
						break;
					
					default:
						iLocal_755 = 5;
						break;
				}
				iLocal_403 = 42;
			}
			break;
		
		case 0x0000002A:
			if (Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 334))
			{
				Function_358(0);
				Function_357(0);
				Function_356(1);
				Function_223(&iLocal_411);
				iLocal_403 = 43;
			}
			else if (Function_348(&iLocal_419, 40.0f, 150.0f, &bLocal_407, "Son_return", "Son_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 325, 1) || !IS_ACTOR_RIDING(&bLocal_407))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_368("Son_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_356(0);
				Function_357(0);
				Function_358(1);
				Function_223(&iLocal_411);
				iLocal_403 = 44;
			}
			break;
		
		case 0x0000002B:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 334))
			{
				Function_347(2);
				if (Function_348(&iLocal_419, 40.0f, 150.0f, &bLocal_407, "Son_return", "Son_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 325, 1) || !IS_ACTOR_RIDING(&bLocal_407))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_368("Son_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_356(0);
					Function_357(0);
					Function_358(1);
					Function_223(&iLocal_411);
					iLocal_403 = 44;
				}
				else
				{
					Function_368("home02_son03_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
					Function_356(0);
					Function_358(0);
					Function_357(1);
					Function_223(&iLocal_411);
					iLocal_403 = 42;
				}
			}
			break;
		
		case 0x0000002C:
			if (Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 334))
			{
				Function_358(0);
				Function_357(0);
				Function_356(1);
				Function_223(&iLocal_411);
				iLocal_403 = 43;
			}
			else if (!Function_348(&iLocal_419, 40.0f, 150.0f, &bLocal_407, "Son_return", "Son_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 325, 1) && IS_ACTOR_RIDING(&bLocal_407))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_368("home02_son03_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_356(0);
				Function_358(0);
				Function_357(1);
				Function_223(&iLocal_411);
				iLocal_403 = 42;
			}
			break;
		
		case 0x00000069:
			if (Global_99145)
			{
				iLocal_403 = 106;
			}
			else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_223(&iLocal_411);
				iLocal_403 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689);
				iLocal_451[4] = 1;
				Function_223(&iLocal_411);
				bLocal_402 = 101;
				iLocal_403 = 0;
			}
			break;
	}
	return;
}

void Function_347(bool bParam0) //Position: 0x11C2A / 72746
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_27(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

bool Function_348(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x11C91 / 72849
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_355(&Global_54076, &iParam3, iParam2))
	{
		Function_230(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_355(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_354(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_368(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_353(2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_352(&uParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_352(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_354(2))
	{
		Function_347(2);
		if (!Function_351())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_350();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_214(&iParam3);
				Function_349(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_352(&uParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_352(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_349(bool bParam0) //Position: 0x11E4F / 73295
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

void Function_350() //Position: 0x11E82 / 73346
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_351() //Position: 0x11EB0 / 73392
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_352(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11EF7 / 73463
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && iParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_353(bool bParam0) //Position: 0x11FB2 / 73650
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_112(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_354(bool bParam0) //Position: 0x12019 / 73753
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_355(var uParam0, var uParam1, bool bParam2) //Position: 0x12063 / 73827
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
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

void Function_356(bool bParam0) //Position: 0x12178 / 74104
{
	if (IS_ACTOR_VALID(&bLocal_409))
	{
		if (bParam0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
			{
				ADD_BLIP_FOR_ACTOR(&bLocal_409, 334, 0, 2, 0);
			}
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_409));
			}
			Function_214(&bLocal_409);
		}
	}
	return;
}

void Function_357(bool bParam0) //Position: 0x121CD / 74189
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_699)))
		{
			ADD_BLIP_FOR_OBJECT(&bLocal_699, 330, 0f, 2, 0);
			Function_237(&bLocal_699);
			Function_369(StackVal, Function_237(&bLocal_699), 0, 48, 1);
		}
	}
	else
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_699)))
		{
			Function_67();
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_699));
		}
		Function_349(&bLocal_699);
	}
	return;
}

void Function_358(bool bParam0) //Position: 0x12226 / 74278
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_359(12)))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_407)))
			{
				Function_367(12, 1, 1);
			}
			else if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_407)))
			{
				SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_407), true);
			}
		}
	}
	else
	{
		if (IS_BLIP_VALID(Function_359(12)))
		{
			Function_367(12, 0, 1);
		}
		Function_214(&bLocal_407);
	}
	return;
}

var Function_359(bool bParam0) //Position: 0x1228A / 74378
{
	return &Global_15402[bParam014] + 104;
}

bool Function_360(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, int iParam10) //Position: 0x1229A / 74394
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_354(16))
			{
				if (&bParam7)
				{
					Function_241();
				}
				if (!Function_362())
				{
					Function_368(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_353(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_230(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_354(8))
		{
			if (&bParam7)
			{
				Function_241();
			}
			if (!Function_362())
			{
				Function_368(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_353(8);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_352(&uParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_352(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_354(8))
	{
		Function_347(8);
		if (!Function_351())
		{
			Function_361();
			Function_350();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_352(&uParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_352(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_361() //Position: 0x12410 / 74768
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_362() //Position: 0x1241C / 74780
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

int Function_363() //Position: 0x12429 / 74793
{
	return Global_53524.f_68;
}

void Function_364() //Position: 0x12434 / 74804
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_GetsOnBakJak", "Home02_s3_GetsOnBakJak", 1, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_365(int iParam0) //Position: 0x12489 / 74889
{
	Function_366(0, &Global_54076, iParam0, 0);
	Function_366(1, &bLocal_407, iParam0, 0);
	Function_366(2, &bLocal_691, iParam0, 0);
	return;
}

void Function_366(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x124B0 / 74928
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_177(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_367(int iParam0, bool bParam1, bool bParam2) //Position: 0x124D8 / 74968
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			*(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_214(&uVar1);
					}
				}
				Function_349(&uVar0);
			}
		}
	}
	return;
}

void Function_368(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x125E7 / 75239
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_369(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x1267C / 75388
{
	(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_370(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_370(bool bParam0) //Position: 0x1273D / 75581
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&bParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &bParam0);
		CLEAN_OBJECTSET(&bParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

var Function_371(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x12786 / 75654
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &uParam6, &uParam7, &uParam8, &uParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &uParam8);
	}
	return &uVar0;
}

void Function_372(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x12817 / 75799
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (bParam2 != Global_53524.f_48 && !Function_379())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_378(0);
	Function_377();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_130())
	{
		Function_375(bParam2);
	}
	Function_374(uParam3, iVar0, iVar1);
	Function_373();
}

void Function_373() //Position: 0x128C0 / 75968
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_374(int iParam0, bool bParam1, bool bParam2) //Position: 0x12901 / 76033
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_39(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_79();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_375(bool bParam0) //Position: 0x12A6A / 76394
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_376() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_102(0));
	PLAYSTAT_INT("HC_FAME", Function_102(3));
	PLAYSTAT_INT("HC_HONOR", Function_102(1));
	return;
}

struct<16> Function_376() //Position: 0x12C02 / 76802
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_377() //Position: 0x12C48 / 76872
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_378(bool bParam0) //Position: 0x12C6C / 76908
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_379() //Position: 0x12C9B / 76955
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_380(struct<69> Param0) //Position: 0x12CB6 / 76982
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_381(int iParam0, int iParam1) //Position: 0x12D76 / 77174
{
	if (iParam1 != 100000000)
	{
		Function_384(&iParam0, iParam1);
	}
	else
	{
		Function_382(&iParam0, 1);
	}
	return;
}

void Function_382(struct<69> Param0) //Position: 0x12D98 / 77208
{
	Param0.f_68 = 0;
	Function_383(&Param0, 2, &bParam1);
	Function_383(&Param0, 4, &bParam1);
	Function_383(&Param0, 8, &bParam1);
	Function_383(&Param0, 16, &bParam1);
	Function_383(&Param0, 32, &bParam1);
	Function_383(&Param0, 64, &bParam1);
	Function_383(&Param0, 128, &bParam1);
	Function_383(&Param0, 256, &bParam1);
	Function_383(&Param0, 512, &bParam1);
	Function_383(&Param0, 1024, &bParam1);
	return;
}

void Function_383(int iParam0, int iParam1, bool bParam2) //Position: 0x12E13 / 77331
{
	bool bVar0;
	
	Function_112(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_112(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_27(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_112(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_384(int iParam0, bool bParam1) //Position: 0x12E52 / 77394
{
	bool bVar0;
	
	Function_27(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_112(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_27(&iParam0 + 68, bVar0);
	return;
}

int Function_385(struct<69> Param0) //Position: 0x12E7F / 77439
{
	if (!Function_389(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_388(&Param0, &bParam2))
	{
		return 0;
	}
	Function_387(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_386(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_386(var uParam0, int iParam1, int iParam2) //Position: 0x12EC5 / 77509
{
	if (iParam1 != 100000000)
	{
		Function_383(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_382(&uParam0, &iParam2);
	}
	return;
}

void Function_387(struct<65> Param0) //Position: 0x12EEC / 77548
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_388(int iParam0, char* cParam1) //Position: 0x12EF9 / 77561
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_389(struct<61> Param0) //Position: 0x12F86 / 77702
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
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

void Function_390() //Position: 0x13139 / 78137
{
	if (!SQUAD_IS_VALID(&Local_4 + 72))
	{
		Function_394();
		if (SQUAD_IS_VALID(&Local_4 + 72))
		{
			Function_393(&Local_4 + 72, 0);
			Function_392(&Local_4 + 72, 3);
			if (IS_ACTOR_VALID(&Local_4 + 48[02]))
			{
				Function_336(&Local_4 + 48[02], &Local_4 + 696[7], 0, 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 72, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			if (IS_ACTOR_ALIVE(&Local_4 + 48[02]))
			{
				KILL_ACTOR(&Local_4 + 48[02]);
				Function_301(&Local_4 + 48[02]);
			}
		}
	}
	if (IS_ACTOR_VALID(&bLocal_691))
	{
		Function_336(&bLocal_691, &Local_4 + 360[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_685))
	{
		Function_336(&bLocal_685, &Local_4 + 360[5], 0, 1, 1, 1);
	}
	Function_391("SETUP_MISSION_OBJECTS_STAGE05");
	AUDIO_SET_PLAYER_MOOD(0, 0);
	return;
}

void Function_391(int iParam0) //Position: 0x13233 / 78387
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= Local_4.f_1048)
	{
		iVar1 = 5;
		iVar2 = 1;
		CREATE_FOOTPRINT(iVar1, iVar2, (&Local_4 + 1048[iVar03]), *(&Local_4 + 1048[iVar03] + 12));
		iVar0++;
	}
	return;
}

void Function_392(var uParam0, bool bParam1) //Position: 0x13274 / 78452
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				ACCESSORIZE_HORSE(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_393(var uParam0, bool bParam1) //Position: 0x132BC / 78524
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_394() //Position: 0x13303 / 78595
{
	*(&Local_4 + 72) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "Horse01"));
	*(&Local_4 + 48[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "HORSE_01_01", 999, Vector(-734,0921f, 227,1915f, 1118,09f), Vector(-120,6563f, 4,152449f, 87,5424f));
	SQUAD_JOIN(&Local_4 + 48[02], &Local_4 + 72);
	return;
}

bool Function_395(int iParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x13370 / 78704
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_396(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_397()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
	{
		if (!&bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_109(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0))
				{
					uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(&iParam0, 0, &iParam8, &iParam9, &iParam10, &iParam11);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Call_Loc(&iParam4);
				if (StackVal)
				{
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_396(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_397()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_396(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_396(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x1364F / 79439
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_290(&bParam0);
		if (VDIST(Function_290(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_397() //Position: 0x136DB / 79579
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_398(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x136EA / 79594
{
	if (Function_399(&bParam0) == iParam6 || Function_379())
	{
		return 1;
	}
	return 0;
}

int Function_399(bool bParam0) //Position: 0x13709 / 79625
{
	if (Function_281(&bParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_400(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x13722 / 79650
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_396(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_397()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_109(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam7, &uParam8, &uParam9, &uParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_401();
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_396(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_397()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_396(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_401() //Position: 0x1398A / 80266
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_402(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_402(char* cParam0) //Position: 0x139DE / 80350
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

void Function_403() //Position: 0x13B07 / 80647
{
	switch (bLocal_402)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			if (IS_VOLUME_VALID(&Local_4 + 144[0]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 144[0]))
				{
					Function_335(&iLocal_684, 23, 0, 4294967295, 4294967295);
					DESTROY_VOLUME(&Local_4 + 144[0]);
				}
			}
			if (IS_VOLUME_VALID(&Local_4 + 144[1]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 144[1]))
				{
					AUDIO_MUSIC_SET_MOOD("CHASE_SUSPENSE", 0, 4294967295, 4294967295);
					DESTROY_VOLUME(&Local_4 + 144[1]);
				}
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(&Local_4 + 144[2]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 144[2]))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_3", 0, 4294967295, 4294967295);
					DESTROY_VOLUME(&Local_4 + 144[2]);
				}
			}
			if (IS_VOLUME_VALID(&Local_4 + 144[3]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 144[3]))
				{
					Function_335(&iLocal_684, 11, 0, 4294967295, 4294967295);
					DESTROY_VOLUME(&Local_4 + 144[3]);
				}
			}
			break;
		
		default:
			LOG_ERROR("invalid UPDATE_MOOD_MUSIC");
			break;
	}
	return;
}

void Function_404(bool bParam0) //Position: 0x13C45 / 80965
{
	if (ACTORS_IN_RANGE(&Global_54076, &bLocal_407, 36.0f))
	{
		if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "HorseBreaking_Phase"))
		{
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_223(&iLocal_435);
			}
		}
		else
		{
			switch (iLocal_755)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_412();
						iLocal_755 = 1;
					}
					break;
				
				case 0x00000001:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_223(&iLocal_435);
						iLocal_755 = 2;
					}
					break;
				
				case 0x00000002:
					if (Function_344(&iLocal_435, bParam0))
					{
						Function_411();
						iLocal_755 = 3;
					}
					break;
				
				case 0x00000003:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_223(&iLocal_435);
						iLocal_755 = 4;
					}
					break;
				
				case 0x00000004:
					if (Function_344(&iLocal_435, bParam0))
					{
						Function_410();
						iLocal_755 = 6;
						Function_409(&iLocal_435);
					}
					break;
				
				case 0x00000005:
					if (Function_344(&iLocal_435, bParam0))
					{
						Function_408();
						iLocal_755 = 6;
						Function_409(&iLocal_435);
					}
					break;
				
				case 0x00000006:
					break;
				
				default:
					break;
				}
		}
		Function_405(&bLocal_407, "Home02_s3_ThrownOffHorse", "Home02_s3_GunOnJak", "Home02_s3_GunOnChar", "Home02_s3_ShootsRand", "Home02_s3_JonShootsTheirHors", "Home02_s3_JonRidesOffEarly", "Home02_s3_JonStopsHors", "Home02_s3_JonGetsOffHors", "Home02_s3_JakWaitJonBakHors");
	}
	return;
}

void Function_405(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x13E43 / 81475
{
	int iVar0;
	
	if (!Function_278(&iLocal_439))
	{
		Function_223(&iLocal_439);
	}
	else if (Function_344(&iLocal_439, 5.0f))
	{
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_407(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam4, Function_89(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_223(&iLocal_439);
					}
					else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bLocal_409)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam5, Function_89(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						LOG_ERROR(&uParam5);
						Function_223(&iLocal_439);
					}
				}
				if (IS_ACTOR_VALID(&iVar0))
				{
					if (IS_ACTOR_HUMAN(&iVar0))
					{
						if (&iVar0 == &iParam0)
						{
							if (Function_278(&iLocal_443))
							{
								if (Function_344(&iLocal_443, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam2, Function_89(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_223(&iLocal_439);
								}
							}
							else
							{
								Function_223(&iLocal_443);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &iVar0))
						{
							if (Function_278(&iLocal_443))
							{
								if (Function_344(&iLocal_443, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam3, Function_89(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
									LOG_ERROR(&uParam3);
									Function_223(&iLocal_439);
								}
							}
							else
							{
								Function_223(&iLocal_443);
							}
						}
						else if (Function_278(&iLocal_443))
						{
							Function_409(&iLocal_443);
						}
					}
					else if (Function_278(&iLocal_443))
					{
						Function_409(&iLocal_443);
					}
				}
				else if (Function_278(&iLocal_443))
				{
					Function_409(&iLocal_443);
				}
			}
			else if (Function_278(&iLocal_443))
			{
				Function_409(&iLocal_443);
			}
		}
		else if (Function_278(&iLocal_443))
		{
			Function_409(&iLocal_443);
		}
		if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
		{
			if (IS_ACTOR_VALID(&iParam0))
			{
				if (ACTORS_IN_RANGE(&iParam0, &Global_54076, 20.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam1, Function_89(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
					LOG_ERROR(&uParam1);
					Function_223(&iLocal_439);
				}
			}
		}
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (iLocal_756)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam9, Function_89(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
				LOG_ERROR(&uParam9);
				Function_223(&iLocal_439);
				iLocal_756 = 0;
			}
		}
		else if (!iLocal_756)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam8, Function_89(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
			LOG_ERROR(&uParam8);
			Function_223(&iLocal_439);
			iLocal_756 = 1;
		}
		if (GET_MOUNT(&Global_54076) != GET_MOUNT(&iParam0))
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &iParam0, 10.0f))
				{
					if (Function_278(&iLocal_447))
					{
						if (Function_344(&iLocal_447, 0,25f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam6, Function_89(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
							Function_223(&iLocal_439);
						}
					}
					else
					{
						Function_223(&iLocal_447);
					}
				}
			}
			else if (Function_278(&iLocal_447))
			{
				Function_409(&iLocal_447);
			}
		}
		else if (Function_406(&Global_54076, 0) > 1.0f)
		{
			if (iLocal_735)
			{
				if (Function_278(&iLocal_447))
				{
					if (Function_344(&iLocal_447, 2,5f))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam7, Function_89(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
						Function_223(&iLocal_439);
						iLocal_735 = 0;
					}
				}
				else
				{
					Function_223(&iLocal_447);
				}
			}
		}
		else
		{
			if (!iLocal_735)
			{
				if (Function_406(&Global_54076, 0) < 1.0f)
				{
					iLocal_735 = 1;
				}
			}
			if (Function_278(&iLocal_447))
			{
				Function_409(&iLocal_447);
			}
		}
	}
}

float Function_406(var uParam0, bool bParam1) //Position: 0x141C8 / 82376
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

bool Function_407(bool bParam0) //Position: 0x141E9 / 82409
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

void Function_408() //Position: 0x1422F / 82479
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_NoTalkOnRide", "Home02_s3_NoTalkOnRide", 1, 1, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_409(vector3 vParam0) //Position: 0x14284 / 82564
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_410() //Position: 0x1429B / 82587
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AA", "Home02_s3_WayBakBant_v3_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AB", "Home02_s3_WayBakBant_v3_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AC", "Home02_s3_WayBakBant_v3_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AD", "Home02_s3_WayBakBant_v3_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AE1", "Home02_s3_WayBakBant_v3_AE1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AE2", "Home02_s3_WayBakBant_v3_AE2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AF1", "Home02_s3_WayBakBant_v3_AF1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AF2", "Home02_s3_WayBakBant_v3_AF2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AG", "Home02_s3_WayBakBant_v3_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AH1", "Home02_s3_WayBakBant_v3_AH1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AH2", "Home02_s3_WayBakBant_v3_AH2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AI", "Home02_s3_WayBakBant_v3_AI", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v3_AJ", "Home02_s3_WayBakBant_v3_AJ", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v3_AK", "Home02_s3_WayBakBant_v3_AK", 1, 1, 0, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_411() //Position: 0x1466B / 83563
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v2_AA", "Home02_s3_WayBakBant_v2_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v2_AB", "Home02_s3_WayBakBant_v2_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v2_AC", "Home02_s3_WayBakBant_v2_AC", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v2_AD", "Home02_s3_WayBakBant_v2_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v2_AE", "Home02_s3_WayBakBant_v2_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v2_AF", "Home02_s3_WayBakBant_v2_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v2_AG", "Home02_s3_WayBakBant_v2_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v2_AH", "Home02_s3_WayBakBant_v2_AH", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v2_AI", "Home02_s3_WayBakBant_v2_AI", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v2_AJ", "Home02_s3_WayBakBant_v2_AJ", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v2_AK", "Home02_s3_WayBakBant_v2_AK", 1, 1, 0, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412() //Position: 0x14966 / 84326
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AA", "Home02_s3_WayBakBant_v1_AA", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v1_AB", "Home02_s3_WayBakBant_v1_AB", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AC1", "Home02_s3_WayBakBant_v1_AC1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AC2", "Home02_s3_WayBakBant_v1_AC2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v1_AD", "Home02_s3_WayBakBant_v1_AD", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AE", "Home02_s3_WayBakBant_v1_AE", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v1_AF", "Home02_s3_WayBakBant_v1_AF", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AG", "Home02_s3_WayBakBant_v1_AG", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v1_AH", "Home02_s3_WayBakBant_v1_AH", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AI", "Home02_s3_WayBakBant_v1_AI", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_WayBakBant_v1_AJ", "Home02_s3_WayBakBant_v1_AJ", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_WayBakBant_v1_AK", "Home02_s3_WayBakBant_v1_AK", 1, 1, 0, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413() //Position: 0x14CA8 / 85160
{
	Function_345(&uLocal_334);
	if (iLocal_403 < 5 && iLocal_403 > 105)
	{
		Function_342();
		Function_418();
		if (!Global_99145)
		{
			Function_237(&Local_4 + 696[0]);
			Function_395(StackVal, "$/cutscene/SON03_CS02_SEQ/SON03_CS02_SEQ", &uLocal_683, Function_237(&Local_4 + 696[0]), 63414, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
	}
	switch (iLocal_403)
	{
		case 0x00000000:
			Function_338(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_409, true);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_407);
				MEMORY_PREFER_RIDING(&bLocal_407, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_407);
				TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_407, true);
				SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
				DECOR_REMOVE(&bLocal_689, "Frank");
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_451[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_334(0.0f, "Stage_Four.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_330();
				bLocal_404 = Global_46754[1];
				if (!Function_329(bLocal_404))
				{
					Function_328(&Local_336);
				}
				Function_336(&Global_54076, &Local_4 + 584[0], 0, 1, 1, 1);
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			else
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_329(bLocal_404) || bLocal_404 != 4294967295))
			{
				iLocal_694 = 0;
				iLocal_698 = 0;
				iLocal_697 = 0;
				Function_417();
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					if (!IS_ACTOR_CRIPPLED(&bLocal_407, 5))
					{
						DECOR_SET_BOOL(&bLocal_407, "NoBleedOut", 1);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_407, "son03_jack", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_407, "son03_jack");
					}
					Function_336(&bLocal_407, &Local_4 + 584[2], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					SET_ACTOR_HEALTH(&bLocal_689, GET_ACTOR_MAX_HEALTH(&bLocal_689));
					Function_336(&bLocal_689, &Local_4 + 584[4], 0, 1, 1, 1);
					TASK_STAND_STILL(&bLocal_689, -1.0f, 0, 0);
					Function_214(&bLocal_689);
				}
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					SET_ACTOR_HEALTH(&bLocal_409, GET_ACTOR_MAX_HEALTH(&bLocal_409));
					Function_336(&bLocal_409, &Local_4 + 584[6], 0, 1, 1, 1);
					TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
					if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_409))
					{
						ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
					}
				}
				if (IS_ACTOR_VALID(&Local_4 + 48[02]))
				{
					if (!IS_ACTOR_ALIVE(&Local_4 + 48[02]))
					{
						SET_ACTOR_PERMANENT_DEAD(&Local_4 + 48[02]);
						Function_301(&Local_4 + 48[02]);
					}
				}
				iLocal_468 = 0;
				Function_385(&(Local_523[015]), &bLocal_407, "Son", 0, 0x5f5e100, 1);
				Function_385(&(Local_523[115]), &bLocal_689, "Dog", 0, 0x5f5e100, 1);
				Function_385(&(Local_523[215]), &bLocal_691, "Uncle", 0, 0x5f5e100, 1);
				Function_385(&(Local_523[315]), &bLocal_685, "Wife", 0, 0x5f5e100, 1);
				Function_381(&(Local_523[115]), 1024);
				Function_380(&(Local_523[415]));
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_398(StackVal, StackVal, StackVal, StackVal, StackVal, Local_336, bLocal_402) && !Global_99145)
			{
				Function_237(&Local_4 + 584[11]);
				if (Function_395(StackVal, "$/cutscene/SON03_CS02/SON03_CS02", &uLocal_683, Function_237(&Local_4 + 584[11]), 63414, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
				{
					Function_223(&iLocal_411);
					ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_407, true);
					Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
					iLocal_698 = 10;
					Function_236(bLocal_402);
					Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[1], Function_239(bLocal_402), 0);
					if (HUD_IS_FADED())
					{
						Function_320(1.0f, "Stage_Four.GID_POST_STREAMING");
					}
					Function_223(&iLocal_411);
					iLocal_403 = 3;
				}
			}
			else
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					Function_336(&Global_54076, &Local_4 + 584[1], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					Function_336(&bLocal_407, &Local_4 + 584[3], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					Function_336(&bLocal_409, &Local_4 + 584[7], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					Function_336(&bLocal_689, &Local_4 + 584[5], 0, 1, 1, 1);
				}
				if (IS_ACTOR_VALID(&bLocal_687))
				{
					Function_336(&bLocal_687, &Local_4 + 584[10], 0, 1, 1, 1);
				}
				Function_236(bLocal_402);
				Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[1], Function_239(bLocal_402), 0);
				Function_223(&iLocal_411);
				iLocal_403 = 4;
			}
			break;
		
		case 0x00000003:
			if (Global_99145)
			{
				iLocal_403 = 4;
			}
			else if (Function_269("$/cutscene/SON03_CS02/SON03_CS02", &iLocal_390, &Local_336, &bLocal_402, 65147, 62981, 60493, 59095, 56667, 56333, 0, 2, 2, 2, 2, 0, 1))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_734)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				iLocal_684 = 46;
				iLocal_734 = 1;
			}
			iLocal_698 = 0;
			Function_223(&iLocal_411);
			iLocal_403 = 5;
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_320(1.0f, "Stage_Four.GID_FADE_IN");
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_223(&iLocal_411);
			iLocal_403 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					Function_367(12, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					MEMORY_ALLOW_SHOOTING(&bLocal_407, false);
					GET_OBJECT_POSITION(&Local_4 + 1024, &vLocal_701);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_409, "horse_Main/Melee/RearUp");
					SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_409, &Local_4 + 328, 1, true);
					TASK_PRIORITY_SET(&bLocal_409, false);
					TASK_WANDER_IN_VOLUME(&bLocal_409, &Local_4 + 328, -1.0f);
					TASK_PRIORITY_SET(&bLocal_409, false);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				if (IS_ACTOR_VALID(&bLocal_687))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_687, 322, 0, 2, 0);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_687)))
					{
					}
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_687), "home02_son03_obj05_blip");
					MEMORY_CONSIDER_AS_ENEMY(&bLocal_687, &Global_54076);
					Function_416(&bLocal_687, &Global_54076);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_687, 0);
					TASK_GO_NEAR_ACTOR(&bLocal_687, &Global_54076, 5.0f, 3);
					SET_ACTOR_HEALTH(&bLocal_687, (GET_ACTOR_MAX_HEALTH(&bLocal_687) * 1,5f));
					Function_223(&iLocal_431);
				}
				if (IS_OBJECT_VALID(&uLocal_736))
				{
					DESTROY_OBJECT(&uLocal_736);
				}
				Function_415();
				Function_223(&iLocal_411);
				iLocal_403 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_344(&iLocal_411, 3.0f))
			{
				Function_368("home02_son03_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_419);
				Function_223(&iLocal_435);
				Function_223(&iLocal_431);
				if (IS_ACTOR_VALID(&bLocal_687))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_687);
				}
				iLocal_403 = 8;
			}
			break;
		
		case 0x00000008:
			Function_348(&iLocal_419, 40.0f, 150.0f, &bLocal_407, "Son_return", "Son_abandoned", &bLocal_466, 1, &uLocal_334, &Local_4, 325, 1);
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_407, 36.0f))
			{
				if (Function_344(&iLocal_435, 15.0f))
				{
					if (!Function_171())
					{
						Function_223(&iLocal_435);
						Function_414();
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_407, "son03_jack/talk_survey");
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_687))
			{
				if (IS_ACTOR_DEAD(&bLocal_687))
				{
					if (IS_ACTOR_VALID(&bLocal_409))
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_409);
					}
					Function_223(&iLocal_411);
					iLocal_403 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_344(&iLocal_411, 5.0f))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_344(&iLocal_411, 0,5f))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_451[3] = 1;
				STREAMING_UNLOAD_BOUNDS();
				Function_223(&iLocal_411);
				bLocal_402 = 4;
				iLocal_403 = 0;
			}
			break;
	}
	return;
}

void Function_414() //Position: 0x1563A / 87610
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_JakCries4Bear", "Home02_s3_JakCries4Bear", 0, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415() //Position: 0x15691 / 87697
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_StayDownJak", "Home02_s3_StayDownJak", 1, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_416(var uParam0, var uParam1) //Position: 0x156E4 / 87780
{
	MEMORY_CONSIDER_AS_ENEMY(&uParam0, &uParam1);
	MEMORY_IDENTIFY(&uParam0, &uParam1);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &uParam1, 1);
	return;
}

void Function_417() //Position: 0x1570D / 87821
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!SQUAD_IS_VALID(&Local_4 + 72))
	{
		Function_394();
		if (SQUAD_IS_VALID(&Local_4 + 72))
		{
			Function_393(&Local_4 + 72, 0);
			Function_392(&Local_4 + 72, 3);
			if (IS_ACTOR_VALID(&Local_4 + 48[02]))
			{
				Function_336(&Local_4 + 48[02], &Local_4 + 584[8], 0, 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 72, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			if (IS_ACTOR_ALIVE(&Local_4 + 48[02]))
			{
				KILL_ACTOR(&Local_4 + 48[02]);
				Function_301(&Local_4 + 48[02]);
			}
		}
	}
	if (IS_ACTOR_VALID(&bLocal_691))
	{
		Function_336(&bLocal_691, &Local_4 + 360[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_685))
	{
		Function_336(&bLocal_685, &Local_4 + 360[5], 0, 1, 1, 1);
	}
	if (!IS_ACTOR_VALID(&bLocal_687))
	{
		GET_OBJECT_POSITION(&Local_4 + 584[9], &Var0);
		GET_OBJECT_ORIENTATION(&Local_4 + 584[9], &Var2);
		bLocal_687 = CREATE_ACTOR_IN_LAYOUT(&uLocal_334, "HOME02_SON03_BEAR01", 1099, Var0, Var2);
		if (IS_ACTOR_VALID(&bLocal_687))
		{
			TASK_STAND_STILL(&bLocal_687, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_687, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_687, &Local_4 + 320, 2, true);
		}
	}
	Function_391("SETUP_MISSION_OBJECTS_STAGE04");
	AUDIO_SET_PLAYER_MOOD(1, 0);
	return;
}

void Function_418() //Position: 0x15890 / 88208
{
	if (IS_ACTOR_VALID(&bLocal_687))
	{
		switch (iLocal_698)
		{
			case 0x00000000:
				if (GET_TASK_STATUS(&bLocal_687, 5) != 1)
				{
					if (GET_TASK_STATUS(&bLocal_687, 83) != 1)
					{
						TASK_KILL_CHAR(&bLocal_687, &Global_54076);
					}
				}
				else
				{
					Function_223(&iLocal_431);
					iLocal_698 = 1;
				}
				break;
			
			case 0x00000001:
				if (!ACTORS_IN_RANGE(&bLocal_687, &Global_54076, 40.0f))
				{
					if (Function_419(&bLocal_687, &Global_54076) < (Function_419(&bLocal_687, &bLocal_407) + 5.0f))
					{
						TASK_CLEAR(&bLocal_687);
						Function_327(&bLocal_687);
						STREAMING_LOAD_BOUNDS(Function_327(&bLocal_687), (Function_419(&bLocal_687, &bLocal_407) + 5.0f), 0);
						iLocal_698 = 2;
					}
					else
					{
						iLocal_698 = 3;
					}
				}
				if (Function_344(&iLocal_431, 60.0f))
				{
					Function_223(&iLocal_435);
					Function_414();
					iLocal_698 = 2;
				}
				break;
			
			case 0x00000002:
				if (GET_TASK_STATUS(&bLocal_687, 5) != 1)
				{
					TASK_KILL_CHAR(&bLocal_687, &bLocal_407);
					Function_223(&iLocal_431);
				}
				else
				{
					if (ACTORS_IN_RANGE(&bLocal_687, &Global_54076, 10.0f) && !Function_344(&iLocal_431, 30.0f))
					{
						TASK_CLEAR(&bLocal_687);
						STREAMING_UNLOAD_BOUNDS();
						iLocal_698 = 0;
					}
					if (IS_PLAYER_TARGETTING_ACTOR(0, &bLocal_687, 1))
					{
						TASK_CLEAR(&bLocal_687);
						STREAMING_UNLOAD_BOUNDS();
						iLocal_698 = 0;
					}
				}
				break;
			
			case 0x00000003:
				if (!ACTORS_IN_RANGE(&bLocal_687, &Global_54076, 10.0f))
				{
					if (GET_TASK_STATUS(&bLocal_687, 83) != 1)
					{
						TASK_GO_NEAR_ACTOR(&bLocal_687, &Global_54076, (10.0f * 0,75f), 4);
					}
				}
				else
				{
					TASK_CLEAR(&bLocal_687);
					iLocal_698 = 0;
				}
				break;
			
			default:
				LOG_ERROR("iBearState???");
				break;
			}
	}
	return;
}

float Function_419(float fParam0, bool bParam1) //Position: 0x15A36 / 88630
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_420() //Position: 0x15B2B / 88875
{
	Function_345(&uLocal_334);
	if (iLocal_403 < 3 && iLocal_403 > 105)
	{
		Function_342();
		Function_426(&Local_4 + 256, &Local_4 + 520[2]);
		Function_403();
		if (!Global_99145)
		{
			Function_237(&Local_4 + 584[11]);
			Function_395(StackVal, "$/cutscene/SON03_CS02/SON03_CS02", &uLocal_683, Function_237(&Local_4 + 584[11]), 63414, 0, 75.0f, 150.0f, 2, 2, 2, 2, 0, 1);
		}
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (IS_VOLUME_VALID(&Local_4 + 192[3]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 192[3]))
				{
					Function_241();
					Function_223(&iLocal_411);
					iLocal_403 = 105;
				}
			}
			if (IS_ACTOR_VALID(&bLocal_687))
			{
				if (GET_LAST_ATTACKER(&bLocal_687) != &Global_54076 || IS_PLAYER_TARGETTING_ACTOR(0, &bLocal_687, 0))
				{
					SET_ACTOR_HEALTH(&bLocal_687, GET_ACTOR_MAX_HEALTH(&bLocal_687));
					Function_241();
					Function_223(&iLocal_411);
					iLocal_403 = 105;
				}
			}
		}
	}
	switch (iLocal_403)
	{
		case 0x00000000:
			Function_338(0);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_451[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_334(0.0f, "Stage_Three.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_330();
				bLocal_404 = Global_46754[1];
				if (!Function_329(bLocal_404))
				{
					Function_328(&Local_336);
				}
				Function_336(&Global_54076, &Local_4 + 520[0], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_409, true);
				}
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_407);
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_407);
					TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					Function_336(&bLocal_689, &Local_4 + 520[2], 0, 1, 1, 1);
				}
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			else
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_329(bLocal_404) || bLocal_404 != 4294967295))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000002:
			Function_236(bLocal_402);
			Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[1], Function_239(bLocal_402), 2);
			if (HUD_IS_FADED())
			{
				Function_320(1.0f, "Stage_Three.GID_POST_STREAMING");
			}
			iLocal_694 = 0;
			iLocal_698 = 0;
			iLocal_697 = 0;
			Function_425();
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				if (!IS_ACTOR_CRIPPLED(&bLocal_407, 5))
				{
					DECOR_SET_BOOL(&bLocal_407, "NoBleedOut", 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_407, "son03_jack", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_407, "son03_jack");
				}
				Function_336(&bLocal_407, &Local_4 + 520[1], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				SET_ACTOR_HEALTH(&bLocal_689, GET_ACTOR_MAX_HEALTH(&bLocal_689));
			}
			if (iLocal_451[1] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_409))
					{
						Function_336(&bLocal_409, &Local_4 + 520[3], 0, 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_409))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
						}
					}
				}
			}
			iLocal_468 = 0;
			Function_385(&(Local_523[015]), &bLocal_407, "Son", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[115]), &bLocal_689, "Dog", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[215]), &bLocal_691, "Uncle", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[315]), &bLocal_685, "Wife", 0, 0x5f5e100, 1);
			Function_381(&(Local_523[115]), 1024);
			Function_380(&(Local_523[415]));
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW_4", 0, 4294967295, 4294967295);
			Function_223(&iLocal_411);
			iLocal_403 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_OBJECT_VALID(&uLocal_736))
				{
					DESTROY_OBJECT(&uLocal_736);
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
				}
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					Function_367(12, 0, 0);
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_689, 325, 0, 2, 0);
					}
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				Function_424();
				if (iLocal_451[1] == 0)
				{
					Function_223(&iLocal_411);
					iLocal_403 = 7;
				}
				else
				{
					Function_223(&iLocal_411);
					iLocal_403 = 8;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_344(&iLocal_411, 3.0f))
			{
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_419);
				Function_223(&iLocal_435);
				iLocal_403 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_689, "Dog_return", "Dog_abandoned", &bLocal_466, 1, &uLocal_334, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689), true);
					}
				}
			}
			if (Function_344(&iLocal_435, 3.0f))
			{
				if (!Function_171())
				{
					Function_223(&iLocal_435);
					Function_423();
				}
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				if (IS_VOLUME_VALID(&Local_4 + 192[2]))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &Local_4 + 192[2]))
					{
						Function_241();
						Function_223(&iLocal_411);
						iLocal_403 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_407, true);
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689);
				SET_ACTOR_ACTION_SIGNAL(&bLocal_689, 8, "BARK");
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "BARK");
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &Local_4 + 1048[13], 2);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				iLocal_697 = 2;
			}
			Function_422();
			Function_223(&iLocal_411);
			iLocal_403 = 10;
			break;
		
		case 0x0000000A:
			if (Function_344(&iLocal_411, 3.0f))
			{
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_419);
				Function_223(&iLocal_435);
				iLocal_403 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_689, "Dog_return", "Dog_abandoned", &bLocal_466, 1, &uLocal_334, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689), true);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_407, 36.0f))
				{
					if (Function_344(&iLocal_435, 15.0f))
					{
						if (!Function_171())
						{
							Function_223(&iLocal_435);
							Function_421();
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_407, "son03_jack/talk_leg");
						}
					}
					Function_335(&iLocal_684, 1, 0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000069:
			if (Function_344(&iLocal_411, 0,5f))
			{
				Function_223(&iLocal_411);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_689));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_407)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_407));
				}
				Function_223(&iLocal_435);
				iLocal_403 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_214(&bLocal_689);
				Function_214(&bLocal_409);
				iLocal_451[2] = 1;
				Function_223(&iLocal_411);
				bLocal_402 = 3;
				iLocal_403 = 0;
			}
			break;
	}
	return;
}

void Function_421() //Position: 0x16417 / 91159
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s3_JakCries4Jon", "Home02_s3_JakCries4Jon", 0, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_422() //Position: 0x1646C / 91244
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_FoundBlood", "Home02_s3_FoundBlood", 1, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x164BD / 91325
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_CallsJak", "Home02_s3_CallsJak", 0, 2, 1, 0, 1);
		Function_365(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_424() //Position: 0x1650A / 91402
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_Reaches2ndChekpnt", "Home02_s3_Reaches2ndChekpnt", 0, 2, 1, 0, 1);
		Function_365(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_425() //Position: 0x16569 / 91497
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bLocal_691))
	{
		Function_336(&bLocal_691, &Local_4 + 360[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_685))
	{
		Function_336(&bLocal_685, &Local_4 + 360[5], 0, 1, 1, 1);
	}
	if (!IS_ACTOR_VALID(&bLocal_687))
	{
		GET_OBJECT_POSITION(&Local_4 + 520[5], &Var0);
		GET_OBJECT_ORIENTATION(&Local_4 + 520[5], &Var2);
		bLocal_687 = CREATE_ACTOR_IN_LAYOUT(&uLocal_334, "HOME02_SON03_BEAR01", 1099, Var0, Var2);
		if (IS_ACTOR_VALID(&bLocal_687))
		{
			TASK_STAND_STILL(&bLocal_687, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_687, true);
			SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_687, &Local_4 + 320, 2, true);
		}
	}
	Function_391("SETUP_MISSION_OBJECTS_STAGE03");
	AUDIO_SET_PLAYER_MOOD(1, 0);
	return;
}

void Function_426(var uParam0, int iParam1) //Position: 0x1665A / 91738
{
	if (IS_ACTOR_VALID(&bLocal_689))
	{
		switch (iLocal_697)
		{
			case 0x00000000:
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "SNIFF");
				iLocal_697 = 1;
				break;
			
			case 0x00000001:
				if (!GET_TASK_STATUS(&bLocal_689, 22) != 1)
				{
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				if (IS_VOLUME_VALID(&uParam0))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &uParam0))
					{
						GET_OBJECT_POSITION(&iParam1, &(Local_707[02]));
						bLocal_693 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &(Local_707[02]), 3.0f, 2);
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
						TASK_SEQUENCE_RELEASE(bLocal_693, 1);
						TASK_PRIORITY_SET(&bLocal_689, true);
						Function_223(&iLocal_427);
						iLocal_697 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_344(&iLocal_427, 2.0f))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "BARK");
					SET_ACTOR_ACTION_SIGNAL(&bLocal_689, 8, "BARK");
					if (IS_SOUND_ID_VALID(&iLocal_751))
					{
						STOP_SOUND(&iLocal_751);
					}
					uLocal_749 = PLAY_SOUND_FROM_ACTOR(&bLocal_689, "DOG_BARK_NOW_MASTER", 0);
					Function_223(&iLocal_427);
				}
				if (!Function_427(&bLocal_689, &Local_4 + 1312, 2.0f))
				{
					if (GET_TASK_STATUS(&bLocal_689, 43) != 1)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_689, &Local_4 + 1312, 3, 0, 0, 1, false);
						DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					}
				}
				else
				{
					TASK_CLEAR(&bLocal_689);
					Function_223(&iLocal_427);
					iLocal_697 = 3;
				}
				break;
			
			case 0x00000003:
				if (Function_344(&iLocal_427, 2.0f))
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "BARK");
					SET_ACTOR_ACTION_SIGNAL(&bLocal_689, 8, "BARK");
					if (IS_SOUND_ID_VALID(&uLocal_749))
					{
						STOP_SOUND(&uLocal_749);
					}
					iLocal_751 = PLAY_SOUND_FROM_ACTOR(&bLocal_689, "DOG_GROWL_MASTER", 0);
					Function_223(&iLocal_427);
				}
				if (GET_TASK_STATUS(&bLocal_689, 0) != 1)
				{
					GET_OBJECT_POSITION(&iParam1, &(Local_707[02]));
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(0, &Local_4 + 584[4], 2, 0, 1);
					TASK_FACE_ACTOR(0, &bLocal_407, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_427(var uParam0, var uParam1, float fParam2) //Position: 0x168E5 / 92389
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = (GET_PATH_NUM_POINTS(&uParam1) - 1);
	GET_PATH_POINT(&uParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (Function_428(StackVal, &uParam0, Var0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_428(bool bParam0, struct<2> Param1) //Position: 0x1697C / 92540
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_290(&bParam0);
		Var0 = Function_290(&bParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_429() //Position: 0x169F3 / 92659
{
	Function_345(&uLocal_334);
	if (iLocal_403 < 3 && iLocal_403 > 105)
	{
		Function_433(&Local_4 + 1304, &Local_4 + 256, &Local_4 + 520[2]);
		Function_403();
	}
	switch (iLocal_403)
	{
		case 0x00000000:
			Function_338(0);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_451[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_334(0.0f, "Stage_Two.GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_330();
				bLocal_404 = Global_46754[1];
				if (!Function_329(bLocal_404))
				{
					Function_328(&Local_336);
				}
				Function_336(&Global_54076, &Local_4 + 464[0], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_409, true);
				}
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_407);
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_407);
					TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					Function_336(&bLocal_689, &Local_4 + 464[2], 0, 1, 1, 1);
				}
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			else
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_329(bLocal_404) || bLocal_404 != 4294967295))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000002:
			Function_236(bLocal_402);
			Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[1], Function_239(bLocal_402), 2);
			if (HUD_IS_FADED())
			{
				Function_320(1.0f, "Stage_Two.GID_POST_STREAMING");
			}
			iLocal_694 = 0;
			iLocal_698 = 0;
			iLocal_697 = 0;
			Function_432();
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				Function_336(&bLocal_407, &Local_4 + 464[1], 0, 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				SET_ACTOR_HEALTH(&bLocal_689, GET_ACTOR_MAX_HEALTH(&bLocal_689));
			}
			if (iLocal_451[0] == 0)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_409))
					{
						Function_336(&bLocal_409, &Local_4 + 464[3], 0, 1, 1, 1);
						if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_409))
						{
							ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_409);
						}
					}
				}
			}
			iLocal_468 = 0;
			Function_385(&(Local_523[015]), &bLocal_407, "Son", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[115]), &bLocal_689, "Dog", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[215]), &bLocal_691, "Uncle", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[315]), &bLocal_685, "Wife", 0, 0x5f5e100, 1);
			Function_381(&(Local_523[115]), 1024);
			Function_380(&(Local_523[415]));
			Function_223(&iLocal_411);
			iLocal_403 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_736))
				{
					if (IS_ACTOR_VALID(&bLocal_689))
					{
						Function_111();
						uLocal_736 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&uLocal_334, "HOME02SON03_CAMERA_FOCUS", &bLocal_689, Function_111(), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_736))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_736, 0);
						}
					}
				}
				if (IS_ACTOR_VALID(&Global_54076))
				{
				}
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					Function_367(12, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_409));
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_689, 325, 0, 2, 0);
					}
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 2.0f, 0, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1304, 3, 0, 0, 1, false);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				Function_431();
				if (iLocal_451[0] == 0)
				{
					Function_223(&iLocal_411);
					iLocal_403 = 7;
				}
				else
				{
					Function_223(&iLocal_411);
					iLocal_403 = 8;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_344(&iLocal_411, 5.0f))
			{
				Function_368("home02_son03_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_435);
				Function_223(&iLocal_419);
				iLocal_403 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_689, "Dog_return", "Dog_abandoned", &bLocal_466, 1, &uLocal_334, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689), true);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_689, 24.0f))
				{
					if (Function_344(&iLocal_435, 15.0f))
					{
						if (!Function_171())
						{
							Function_223(&iLocal_435);
							Function_430();
						}
					}
				}
			}
			if (IS_VOLUME_VALID(&Local_4 + 248))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 248))
				{
					Function_391("volume_blood02");
					DESTROY_VOLUME(&Local_4 + 248);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				if (IS_VOLUME_VALID(&Local_4 + 192[1]))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &Local_4 + 192[1]))
					{
						Function_241();
						Function_223(&iLocal_411);
						iLocal_403 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_451[1] = 1;
			Function_223(&iLocal_411);
			bLocal_402 = 2;
			iLocal_403 = 0;
			LOG_ERROR("still blippey");
			break;
	}
	return;
}

void Function_430() //Position: 0x17049 / 94281
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_ShoutsEncoDog", "Home02_s3_ShoutsEncoDog", 0, 2, 1, 0, 1);
		Function_365(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x170A0 / 94368
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_Reaches1Chekpnt", "Home02_s3_Reaches1Chekpnt", 0, 2, 1, 0, 1);
		Function_365(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x170FB / 94459
{
	if (IS_ACTOR_VALID(&bLocal_691))
	{
		Function_336(&bLocal_691, &Local_4 + 360[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_685))
	{
		Function_336(&bLocal_685, &Local_4 + 360[5], 0, 1, 1, 1);
	}
	Function_391("SETUP_MISSION_OBJECTS_STAGE02");
	AUDIO_SET_PLAYER_MOOD(0, 0);
	return;
}

void Function_433(float fParam0, var uParam1, int iParam2) //Position: 0x17166 / 94566
{
	if (IS_ACTOR_VALID(&bLocal_689))
	{
		switch (iLocal_697)
		{
			case 0x00000000:
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
				iLocal_697++;
				break;
			
			case 0x00000001:
				if (!Function_434(&fParam0))
				{
					if (!GET_TASK_STATUS(&bLocal_689, 22) != 1)
					{
						bLocal_693 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
						TASK_SEQUENCE_RELEASE(bLocal_693, 1);
						TASK_PRIORITY_SET(&bLocal_689, true);
					}
				}
				else if (!GET_TASK_STATUS(&bLocal_689, 43) != 1)
				{
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					if (bLocal_402 <= 2)
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &fParam0, 3, 0, 0, 1, false);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &fParam0, 2, 0, 0, 1, false);
					}
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				if (IS_VOLUME_VALID(&uParam1))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &uParam1))
					{
						iLocal_697++;
					}
				}
				break;
			
			case 0x00000002:
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "SNIFF");
				GET_OBJECT_POSITION(&iParam2, &(Local_707[02]));
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &(Local_707[02]), 3.0f, 2);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				Function_391("UPDATE_DOG_STAGE02");
				iLocal_697++;
				break;
			
			case 0x00000003:
				iLocal_697++;
				break;
			}
	}
	return;
}

bool Function_434(float fParam0) //Position: 0x17317 / 94999
{
	if (!ACTORS_IN_RANGE(&bLocal_689, &Global_54076, 60.0f))
	{
		if (Function_435(&Global_54076, &fParam0) <= Function_435(&bLocal_689, &fParam0))
		{
			if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_407, 100.0f))
			{
				return 0;
			}
		}
	}
	return 1;
}

float Function_435(var uParam0, float fParam1) //Position: 0x17360 / 95072
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	
	bVar2 = (GET_PATH_NUM_POINTS(&fParam1) - 1);
	GET_PATH_POINT(&fParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_290(&uParam0);
		Var3 = Function_290(&uParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_436() //Position: 0x173F0 / 95216
{
	Function_345(&uLocal_334);
	if (iLocal_403 < 3 && iLocal_403 > 105)
	{
		Function_444();
		Function_441();
		Function_439(10.0f);
		Function_403();
	}
	switch (iLocal_403)
	{
		case 0x00000000:
			Function_338(0);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_409, true);
			}
			if (IS_ACTOR_VALID(&bLocal_407))
			{
				if (IS_ACTOR_CRIPPLED(&bLocal_407, 5))
				{
					SET_CRIPPLE_FLAG(&bLocal_407, 0);
					DECOR_REMOVE(&bLocal_407, "NoBleedOut");
				}
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_407);
				MEMORY_PREFER_RIDING(&bLocal_407, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_407);
				TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_407, true);
			}
			if (IS_ACTOR_VALID(&bLocal_685))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_685);
				MEMORY_PREFER_RIDING(&bLocal_685, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_685);
				TASK_STAND_STILL(&bLocal_685, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_685, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_330();
			bLocal_404 = Global_46914[1];
			if (!Function_329(bLocal_404))
			{
				Function_328(&Local_336);
			}
			if (Function_281(&Local_336))
			{
				Function_336(&Global_54076, &Local_4 + 360[1], 0, 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					Function_336(&bLocal_689, &Local_4 + 360[6], 0, 1, 1, 1);
				}
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			else
			{
				Function_223(&iLocal_411);
				iLocal_403 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_329(bLocal_404) || bLocal_404 != 4294967295))
			{
				Function_223(&iLocal_411);
				iLocal_403 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_694 = 0;
			iLocal_698 = 0;
			iLocal_696 = 0;
			iLocal_695 = 0;
			iLocal_697 = 0;
			bLocal_733 = false;
			iLocal_732 = 0;
			Function_438();
			if (HUD_IS_FADED())
			{
				Function_320(1.0f, "Stage_One.GID_POST_CUTSCENE");
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_236(bLocal_402);
			Function_372(StackVal, Function_236(bLocal_402), bLocal_402, Global_46754[0], Function_239(bLocal_402), 0);
			if (!iLocal_731)
			{
				TASK_CLEAR(&Global_54076);
				Function_336(&Global_54076, &Local_4 + 360[1], ", CUTSCENE_CUSTOM_SET_POSES - SID_INITIALIZE", 1, 1, 1);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				iLocal_731 = 1;
			}
			iLocal_468 = 0;
			Function_385(&(Local_523[015]), &bLocal_407, "Son", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[115]), &bLocal_689, "Dog", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[215]), &bLocal_691, "Uncle", 0, 0x5f5e100, 1);
			Function_385(&(Local_523[315]), &bLocal_685, "Wife", 0, 0x5f5e100, 1);
			Function_381(&(Local_523[115]), 1024);
			Function_380(&(Local_523[415]));
			Function_335(&iLocal_684, 1, 0, 4294967295, 4294967295);
			Function_223(&iLocal_411);
			iLocal_403 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&bLocal_689) && IS_ACTOR_VALID(&bLocal_409))
			{
				if (Function_437(&bLocal_689, 1, 0x41700000) && Function_437(&bLocal_409, 1, 0x41700000))
				{
					Function_223(&iLocal_411);
					iLocal_403 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_344(&iLocal_411, 1,5f))
			{
				if (HUD_IS_FADED())
				{
					Function_320(1.0f, "Stage_One.GID_NINETYNINTH_GOAL");
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_223(&iLocal_411);
				iLocal_403 = 103;
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_223(&iLocal_411);
				iLocal_403 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
					{
						ADD_BLIP_FOR_ACTOR(&bLocal_409, 334, 0, 2, 0);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(&bLocal_407))
				{
					Function_367(12, 0, 1);
					MEMORY_PREFER_RIDING(&bLocal_407, false);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_407, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_407, true);
				}
				if (IS_ACTOR_VALID(&bLocal_685))
				{
					Function_367(11, 0, 1);
				}
				Function_368("home02_son03_obj00", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_419);
				Function_223(&iLocal_435);
				iLocal_403 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "home02_son03_obj00", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_409, "home02_son03_obj00", "Horse_abandoned", &bLocal_466, 0, 0, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_409)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_409), true);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_409))
			{
				if (GET_MOUNT(&Global_54076) == &bLocal_409)
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_409));
					}
					Function_241();
					Function_272();
					Function_223(&iLocal_411);
					iLocal_403 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(&uLocal_736))
			{
				if (IS_ACTOR_VALID(&bLocal_689))
				{
					Function_111();
					uLocal_736 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&uLocal_334, "HOME02SON03_CAMERA_FOCUS", &bLocal_689, Function_111(), 70.0f, 75.0f);
					if (IS_OBJECT_VALID(&uLocal_736))
					{
						SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_736, 0);
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_689))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_409)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_409));
				}
				ADD_BLIP_FOR_ACTOR(&bLocal_689, 325, 0, 2, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
				}
			}
			Function_335(&iLocal_684, 10, 0, 4294967295, 4294967295);
			Function_223(&iLocal_411);
			iLocal_403 = 10;
			break;
		
		case 0x0000000A:
			if (Function_344(&iLocal_411, 5.0f))
			{
				Function_368("home02_son03_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_223(&iLocal_411);
				Function_223(&iLocal_415);
				Function_223(&iLocal_419);
				Function_223(&iLocal_435);
				iLocal_403 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_689, "Dog_return", "Dog_abandoned", &bLocal_466, 1, &uLocal_334, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689), true);
					}
				}
			}
			if (bLocal_733)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_689))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_689, 20.0f))
						{
							Function_241();
							Function_223(&iLocal_411);
							iLocal_403 = 12;
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			bLocal_733 = false;
			Function_223(&iLocal_411);
			Function_223(&iLocal_435);
			iLocal_403 = 13;
			break;
		
		case 0x0000000D:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_689, "Dog_return", "Dog_abandoned", &bLocal_466, 1, &uLocal_334, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689), true);
					}
				}
			}
			if (bLocal_733)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_689))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_689, 20.0f))
						{
							Function_241();
							Function_223(&iLocal_411);
							iLocal_403 = 14;
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			bLocal_733 = false;
			Function_223(&iLocal_411);
			Function_223(&iLocal_435);
			iLocal_403 = 15;
			break;
		
		case 0x0000000F:
			if (!Function_360(&iLocal_419, 100.0f, &bLocal_409, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_466, 1, &uLocal_334, 0, 334))
			{
				Function_348(&iLocal_419, 60.0f, 200.0f, &bLocal_689, "Dog_return", "Dog_abandoned", &bLocal_466, 1, &uLocal_334, 0, 325, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_689)))
				{
					if (!IS_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689)))
					{
						SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(&bLocal_689), true);
					}
				}
			}
			if (bLocal_733)
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (IS_ACTOR_VALID(&bLocal_689))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_689, 20.0f))
						{
							Function_241();
							Function_223(&iLocal_411);
							iLocal_403 = 106;
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_451[0] = 1;
			Function_223(&iLocal_411);
			bLocal_402 = true;
			iLocal_403 = 0;
			break;
	}
	return;
}

int Function_437(int iParam0, bool bParam1, float fParam2) //Position: 0x17DDD / 97757
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&iParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&iParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&iParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&iParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_438() //Position: 0x17E7F / 97919
{
	if (IS_ACTOR_VALID(&bLocal_691))
	{
		Function_336(&bLocal_691, &Local_4 + 360[10], 0, 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_685))
	{
		Function_336(&bLocal_685, &Local_4 + 360[5], 0, 1, 1, 1);
	}
	Function_391("SETUP_MISSION_OBJECTS_STAGE01");
	AUDIO_SET_PLAYER_MOOD(0, 0);
	return;
}

void Function_439(float fParam0) //Position: 0x17EEA / 98026
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bLocal_689))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_689, 24.0f))
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (Function_344(&iLocal_435, fParam0))
				{
					Function_223(&iLocal_435);
					Function_440();
				}
			}
		}
		switch (iLocal_697)
		{
			case 0x00000000:
				iLocal_697++;
				break;
			
			case 0x00000001:
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_689);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "BARK");
				GET_OBJECT_POSITION(&Local_4 + 360[6], &Var0);
				uLocal_753 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Local_4, Function_89(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 5.0f, 4.0f));
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, &uLocal_753, -1f);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				iLocal_697++;
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(&bLocal_409))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_409)
					{
						TASK_CLEAR(&bLocal_689);
						Function_223(&iLocal_738);
						iLocal_697++;
					}
				}
				break;
			
			case 0x00000003:
				GET_OBJECT_POSITION(&Local_4 + 1032, &(Local_707[02]));
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 2.0f, 0, 0);
				TASK_FACE_COORD(0, &(Local_707[02]), 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				iLocal_697++;
				break;
			
			case 0x00000004:
				if (GET_TASK_STATUS(&bLocal_689, 23) == 0)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_689, true);
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1280, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
					Function_223(&iLocal_738);
					iLocal_697++;
				}
				break;
			
			case 0x00000005:
				if (Function_344(&iLocal_738, 2.0f))
				{
					if (GET_TASK_STATUS(&bLocal_689, 43) == 1)
					{
						Function_223(&iLocal_738);
						iLocal_697++;
					}
				}
				break;
			
			case 0x00000006:
				Function_223(&iLocal_738);
				iLocal_697++;
				break;
			
			case 0x00000007:
				if (!Function_434(&Local_4 + 1280))
				{
					if (!GET_TASK_STATUS(&bLocal_689, 22) != 1)
					{
						bLocal_693 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
						TASK_SEQUENCE_RELEASE(bLocal_693, 1);
						TASK_PRIORITY_SET(&bLocal_689, true);
					}
				}
				else if (!GET_TASK_STATUS(&bLocal_689, 43) != 1)
				{
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1280, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				if (IS_VOLUME_VALID(&Local_4 + 272[2]))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &Local_4 + 272[2]))
					{
						iLocal_697++;
					}
				}
				break;
			
			case 0x00000008:
				bLocal_733 = true;
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "SNIFF");
				GET_OBJECT_POSITION(&Local_4 + 840[1], &(Local_707[02]));
				GET_OBJECT_POSITION(&Local_4 + 840[2], &(Local_707[12]));
				GET_OBJECT_POSITION(&Local_4 + 840[3], &(Local_707[22]));
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &(Local_707[02]), 3.0f, 2);
				TASK_GO_NEAR_COORD(0, &(Local_707[12]), 3.0f, 2);
				TASK_GO_NEAR_COORD(0, &(Local_707[22]), 3.0f, 2);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				iLocal_697++;
				break;
			
			case 0x00000009:
				if (!bLocal_733)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1288, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
					iLocal_697++;
				}
				break;
			
			case 0x0000000A:
				if (!Function_434(&Local_4 + 1288))
				{
					if (!GET_TASK_STATUS(&bLocal_689, 22) != 1)
					{
						bLocal_693 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
						TASK_SEQUENCE_RELEASE(bLocal_693, 1);
						TASK_PRIORITY_SET(&bLocal_689, true);
					}
				}
				else if (!GET_TASK_STATUS(&bLocal_689, 43) != 1)
				{
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1288, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				if (IS_VOLUME_VALID(&Local_4 + 272[0]))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &Local_4 + 272[0]))
					{
						iLocal_697++;
					}
				}
				break;
			
			case 0x0000000B:
				bLocal_733 = true;
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "SNIFF");
				GET_OBJECT_POSITION(&Local_4 + 888[1], &(Local_707[02]));
				GET_OBJECT_POSITION(&Local_4 + 888[2], &(Local_707[12]));
				GET_OBJECT_POSITION(&Local_4 + 888[3], &(Local_707[22]));
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &(Local_707[02]), 3.0f, 2);
				TASK_GO_NEAR_COORD(0, &(Local_707[12]), 3.0f, 2);
				TASK_GO_NEAR_COORD(0, &(Local_707[22]), 3.0f, 2);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				Function_391("UPDATE_DOG_STAGE01");
				iLocal_697++;
				break;
			
			case 0x0000000C:
				if (!bLocal_733)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1296, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
					iLocal_697++;
				}
				break;
			
			case 0x0000000D:
				if (!Function_434(&Local_4 + 1296))
				{
					if (!GET_TASK_STATUS(&bLocal_689, 22) != 1)
					{
						bLocal_693 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
						TASK_SEQUENCE_RELEASE(bLocal_693, 1);
						TASK_PRIORITY_SET(&bLocal_689, true);
					}
				}
				else if (!GET_TASK_STATUS(&bLocal_689, 43) != 1)
				{
					DECOR_SET_BOOL(&bLocal_689, "Frank", 1);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 1296, 3, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_689, true);
				}
				if (IS_VOLUME_VALID(&Local_4 + 272[1]))
				{
					if (IS_ACTOR_IN_VOLUME(&bLocal_689, &Local_4 + 272[1]))
					{
						iLocal_697++;
					}
				}
				break;
			
			case 0x0000000E:
				bLocal_733 = true;
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_689, 8, "SNIFF");
				GET_OBJECT_POSITION(&Local_4 + 936[1], &(Local_707[02]));
				GET_OBJECT_POSITION(&Local_4 + 936[2], &(Local_707[12]));
				GET_OBJECT_POSITION(&Local_4 + 936[3], &(Local_707[22]));
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &(Local_707[02]), 3.0f, 2);
				TASK_GO_NEAR_COORD(0, &(Local_707[12]), 3.0f, 2);
				TASK_GO_NEAR_COORD(0, &(Local_707[22]), 3.0f, 2);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_689, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				TASK_PRIORITY_SET(&bLocal_689, true);
				iLocal_697++;
				break;
			
			case 0x0000000F:
				if (!bLocal_733)
				{
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_689);
					iLocal_697++;
				}
				break;
			
			case 0x00000010:
				iLocal_697++;
				break;
			}
	}
	return;
}

void Function_440() //Position: 0x186E8 / 100072
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s3_JonShoutsEncoDog", "Home02_s3_JonShoutsEncoDog", 0, 2, 1, 0, 1);
		Function_365(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441() //Position: 0x18745 / 100165
{
	if (IS_ACTOR_VALID(&bLocal_691))
	{
		switch (iLocal_695)
		{
			case 0x00000000:
				bLocal_693 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &Local_4 + 1272, 1, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_4 + 1272), "UseCase1", 1, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_691, bLocal_693);
				TASK_SEQUENCE_RELEASE(bLocal_693, 1);
				Function_443(&iLocal_443);
				iLocal_695 = 1;
				break;
			
			case 0x00000001:
				if (ACTORS_IN_RANGE(&bLocal_691, &Global_54076, 10.0f))
				{
					if (Function_344(&iLocal_443, 5.0f))
					{
						Function_442();
						Function_223(&iLocal_443);
						LOG_ERROR("Home02_PLAY_s3_UncleYellsHurry");
						iLocal_695 = 0;
					}
				}
				else if (!Function_218(&bLocal_691, 1.0f, (10.0f * 2.0f), 1, 1, 0))
				{
					Function_223(&iLocal_443);
				}
				break;
			}
	}
	return;
}

void Function_442() //Position: 0x18827 / 100391
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Home02_s3_UncleYellsHurry", "Home02_s3_UncleYellsHurry", 0, 2, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443(int iParam0) //Position: 0x18882 / 100482
{
	if (!Function_278(&iParam0))
	{
		Function_224(&iParam0, 0.0f);
	}
	return;
}

void Function_444() //Position: 0x18899 / 100505
{
	if (IS_ACTOR_VALID(&bLocal_685))
	{
		switch (iLocal_696)
		{
			case 0x00000000:
				if (Function_445(&uLocal_742, &uLocal_744, &uLocal_746))
				{
					iLocal_696++;
				}
				break;
			
			case 0x00000001:
				GET_OBJECT_POSITION(&Local_4 + 1000, &vLocal_728);
				if (IS_ACTOR_VALID(&bLocal_685))
				{
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_NEAR_COORD(0, &vLocal_728, 1.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_685, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_685, true);
				}
				iLocal_696++;
				break;
			
			case 0x00000002:
				if (iLocal_732)
				{
					GET_OBJECT_POSITION(&Local_4 + 1008, &vLocal_728);
					bLocal_693 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_GO_NEAR_COORD(0, &vLocal_728, 1.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_685, bLocal_693);
					TASK_SEQUENCE_RELEASE(bLocal_693, 1);
					TASK_PRIORITY_SET(&bLocal_685, true);
					iLocal_696++;
				}
				break;
			
			case 0x00000003:
				iLocal_696++;
				break;
			}
	}
	return;
}

bool Function_445(var uParam0, int iParam1, int iParam2) //Position: 0x18992 / 100754
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = "beechersHope";
	uVar1 = "beechersHope01";
	uVar2 = "house01";
	if (IS_WORLD_SECTOR_LOADED(CREATE_WORLD_SECTOR(&uLocal_334, &uVar0)))
	{
		if (!IS_DOOR_VALID(&uParam0))
		{
			uParam0 = Function_446(&uVar1, &uVar2, 1);
			CLOSE_DOOR_FAST(&uParam0);
			SET_DOOR_LOCK(&uParam0, 1);
		}
		if (!IS_DOOR_VALID(&iParam1))
		{
			iParam1 = Function_446(&uVar1, &uVar2, 2);
			CLOSE_DOOR_FAST(&iParam1);
			SET_DOOR_LOCK(&iParam1, 1);
		}
		if (!IS_DOOR_VALID(&iParam2))
		{
			iParam2 = Function_446(&uVar1, &uVar2, 3);
			CLOSE_DOOR_FAST(&iParam2);
			SET_DOOR_LOCK(&iParam2, 1);
		}
		if ((IS_DOOR_VALID(&uParam0) && IS_DOOR_VALID(&iParam1)) && IS_DOOR_VALID(&iParam2))
		{
			if ((IS_DOOR_LOCKED(&uParam0) && IS_DOOR_LOCKED(&iParam1)) && IS_DOOR_LOCKED(&iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_446(var uParam0, var uParam1, int iParam2) //Position: 0x18A8D / 101005
{
	return Function_447(Global_43789, &uParam0, &uParam1, iParam2);
}

int Function_447(int iParam0, char* cParam1, bool bParam3) //Position: 0x18AA1 / 101025
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_39(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[iParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

void Function_448() //Position: 0x18B46 / 101190
{
	switch (iLocal_403)
	{
		case 0x00000006:
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_335(&iLocal_684, 0, 0, 4294967295, 4294967295);
			Unknown_Function();
			uLocal_334 = CREATE_LAYOUT("home02_son03_DynamicLayout");
			Function_465();
			Function_464();
			(&Global_15402[1214] + 16) = 640;
			iLocal_403 = 8;
			break;
		
		case 0x00000008:
			if (Function_454())
			{
				if ((!Function_281(&Local_336) && Local_336.f_40 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/SON_03/SON_03"))
				{
					iLocal_403 = 9;
				}
				else
				{
					iLocal_403 = 10;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_269("$/cutscene/SON_03/SON_03", &iLocal_390, &Local_336, &bLocal_402, 65147, 62981, 60493, 59095, 56667, 56333, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_403 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&Local_4))
			{
				uLocal_405 = CREATE_OBJECT_ITERATOR(&Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!IS_ACTOR_VALID(&bLocal_407))
			{
				Function_336(&bLocal_407, &Local_4 + 360[2], 0, 1, 1, 1);
				TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_407, true);
			}
			Function_367(12, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_407, 0);
			SET_CRIPPLE_ENABLE(&bLocal_407, 0);
			SET_ACTOR_FACTION(&bLocal_407, 20);
			TASK_PRIORITY_SET(&bLocal_407, true);
			TASK_STAND_STILL(&bLocal_407, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_407, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_407, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_407, GET_ACTOR_MAX_HEALTH(&bLocal_407));
			Function_367(13, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_691, 0);
			SET_CRIPPLE_ENABLE(&bLocal_691, 0);
			SET_ACTOR_FACTION(&bLocal_691, 20);
			TASK_PRIORITY_SET(&bLocal_691, true);
			TASK_STAND_STILL(&bLocal_691, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_691, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_691, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_691, GET_ACTOR_MAX_HEALTH(&bLocal_691));
			Function_367(11, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_685, 0);
			SET_CRIPPLE_ENABLE(&bLocal_685, 0);
			SET_ACTOR_FACTION(&bLocal_685, 20);
			TASK_PRIORITY_SET(&bLocal_685, true);
			TASK_STAND_STILL(&bLocal_685, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_685, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_685, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_685, GET_ACTOR_MAX_HEALTH(&bLocal_685));
			RESET_ACTOR_GAITS(&bLocal_409, 0);
			TASK_PRIORITY_SET(&bLocal_409, true);
			TASK_STAND_STILL(&bLocal_409, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_409, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_409, GET_ACTOR_MAX_HEALTH(&bLocal_409));
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 312);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 312);
			Function_452(&uLocal_469, &uLocal_334);
			Function_443(&iLocal_738);
			Function_443(&iLocal_411);
			Function_443(&iLocal_415);
			Function_443(&iLocal_419);
			bLocal_402 = false;
			iLocal_403 = 0;
			Function_450(&Local_336, &bLocal_402, &iLocal_403);
			Function_449(StackVal, StackVal, &Local_336, 1, Function_465(), Local_336);
			switch (bLocal_402)
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
				
				case 0x00000006:
					break;
				
				case 0x00000007:
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

void Function_449(struct<41> Param0) //Position: 0x18EAF / 102063
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_402 = false;
			break;
		
		case 0x00000002:
			bLocal_402 = true;
			break;
		
		case 0x00000003:
			bLocal_402 = 2;
			break;
		
		case 0x00000004:
			bLocal_402 = 3;
			break;
		
		case 0x00000005:
			bLocal_402 = 4;
			break;
		
		case 0x00000006:
			bLocal_402 = 5;
			break;
		
		case 0x00000007:
			bLocal_402 = 6;
			break;
		
		case 0x00000008:
			bLocal_402 = 7;
			break;
		
		case 0x00000009:
			bLocal_402 = 8;
			break;
		
		case 0x0000000A:
			bLocal_402 = 101;
			break;
	}
}

void Function_450(int iParam0, var uParam1, int iParam2) //Position: 0x18F44 / 102212
{
	if (Function_281(&iParam0))
	{
		uParam1 = Function_399(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_451();
	}
	return;
}

void Function_451() //Position: 0x18F80 / 102272
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

int Function_452(struct<2>[] Param0) //Position: 0x18FD1 / 102353
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_453(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_453(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_453(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_453(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_453(struct<13> Param0) //Position: 0x196AA / 104106
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_112(&Param0 + 12, iParam4);
	return 1;
}

bool Function_454() //Position: 0x19779 / 104313
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_463(1))
		{
			return 0;
		}
		if (!Function_310())
		{
			return 0;
		}
		if (!Function_304(&iLocal_348))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_407))
		{
			GET_OBJECT_POSITION(&Local_4 + 360[3], &vLocal_701);
			bLocal_407 = Function_455(12, 0, 1, vLocal_701.x, vLocal_701.y, vLocal_701.z, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_407, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_691))
		{
			GET_OBJECT_POSITION(&Local_4 + 360[10], &vLocal_725);
			bLocal_691 = Function_455(13, 0, 1, vLocal_725.x, vLocal_725.y, vLocal_725.z, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_691, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_685))
		{
			GET_OBJECT_POSITION(&Local_4 + 360[5], &vLocal_728);
			bLocal_685 = Function_455(11, 0, 1, vLocal_728.x, vLocal_728.y, vLocal_728.z, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_685, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_689))
		{
			bLocal_689 = Function_455(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_689, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_409))
		{
			GET_OBJECT_POSITION(&Local_4 + 360[7], &vLocal_704);
			bLocal_409 = Function_291(1, 1, vLocal_704.x, vLocal_704.y, vLocal_704.z, 0, 1, 0);
			REMOVE_HORSE_ACCESSORY(&bLocal_409, 4);
			ACCESSORIZE_HORSE(&bLocal_409, 3);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_409, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_455(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x19916 / 104726
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
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
	iParam2 = &iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_35(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
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
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, 1, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_367(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_462(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_458(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &iParam3;
			Var3.f_4 = &iParam4;
			Var3.f_8 = &fParam5;
			if (Function_109(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_457(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_456(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_456(var uParam0, bool bParam1) //Position: 0x19E56 / 106070
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_457(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x19E78 / 106104
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_458(int iParam0, int iParam1) //Position: 0x19ED9 / 106201
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_317(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_459(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_459(var uParam0, int iParam1) //Position: 0x19F67 / 106343
{
	Function_461(&uParam0);
	Function_460(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_460(int iParam0) //Position: 0x19F93 / 106387
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_461(int iParam0) //Position: 0x19FB9 / 106425
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

var Function_462(int iParam0, var uParam1) //Position: 0x1A08F / 106639
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

bool Function_463(bool bParam0) //Position: 0x1A135 / 106805
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_464() //Position: 0x1A165 / 106853
{
	Function_311(&iLocal_348, "home02son03", 10, 0);
	Function_313(&iLocal_348, 1041, 2, 0);
	Function_313(&iLocal_348, 1099, 2, 0);
	Function_311(&iLocal_348, "son03_jack", 5, 0);
	Function_311(&iLocal_348, "custom/son03_jack", 8, 0);
	Function_311(&iLocal_348, "cs_son03_bear", 5, 0);
	Function_311(&iLocal_348, "custom/cs_son03_bear", 8, 0);
	Function_311(&iLocal_348, "BeechersHope", 12, 0);
	return;
}

vector3 Function_465() //Position: 0x1A222 / 107042
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	Unknown_Function();
	uVar0 = &uVar0;
	Local_4 = CREATE_LAYOUT("home02_son03_layout");
	(&Local_4 + 136) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "CutsceneVol_set");
	*(&Local_4 + 80[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &Local_4, "Cutscene01Vol", 2,802597E-45f, Vector(-79,79403f, 117,6869f, 1367,484f), Vector(0.0f, -40,21006f, 0.0f), Vector(91,79516f, 10.0f, 82,98182f));
	ADD_TO_VOLUME_SET(&Local_4 + 136, &Local_4 + 80[0]);
	*(&Local_4 + 80[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "Cutscene02Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&Local_4 + 136, &Local_4 + 80[1]);
	*(&Local_4 + 80[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "Cutscene03Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&Local_4 + 136, &Local_4 + 80[2]);
	*(&Local_4 + 80[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "Cutscene04Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&Local_4 + 136, &Local_4 + 80[3]);
	*(&Local_4 + 80[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "Cutscene05Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&Local_4 + 136, &Local_4 + 80[4]);
	*(&Local_4 + 80[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "CutsceneLastVol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&Local_4 + 136, &Local_4 + 80[5]);
	*(&Local_4 + 184) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "MoodVol_set");
	*(&Local_4 + 144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "mood_volume01a", 2,802597E-45f, Vector(-96,4699f, 112,1891f, 1228,153f), Vector(0.0f, 25,85769f, 0.0f), Vector(39,27991f, 30.0f, 20.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 184, &Local_4 + 144[0]);
	*(&Local_4 + 144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "mood_volume01b", 2,802597E-45f, Vector(-379,8145f, 119,338f, 1213,3f), Vector(0.0f, 25,85769f, 0.0f), Vector(40.0f, 30.0f, 40.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 184, &Local_4 + 144[1]);
	*(&Local_4 + 144[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "mood_volume02a", 2,802597E-45f, Vector(-725,9491f, 197,9568f, 1163,366f), Vector(0.0f, 0.0f, 0.0f), Vector(144,2365f, 100.0f, 147,6266f));
	ADD_TO_VOLUME_SET(&Local_4 + 184, &Local_4 + 144[2]);
	*(&Local_4 + 144[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "mood_volume02b", 4,203895E-45f, Vector(-36,2914f, 119,5215f, 1435,664f), Vector(0.0f, 20.0f, 0.0f), Vector(585,0934f, 20.0f, 331,1229f));
	ADD_TO_VOLUME_SET(&Local_4 + 184, &Local_4 + 144[3]);
	*(&Local_4 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "volume_objective_set");
	*(&Local_4 + 192[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_objective01", 2,802597E-45f, Vector(-376,553f, 118,3048f, 1223,658f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 15.0f, 30.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 240, &Local_4 + 192[0]);
	*(&Local_4 + 192[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_objective02", 2,802597E-45f, Vector(-756,0001f, 178,3272f, 1244,158f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 15.0f, 30.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 240, &Local_4 + 192[1]);
	*(&Local_4 + 192[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_objective03", 2,802597E-45f, Vector(-761,4694f, 178,3272f, 1230,619f), Vector(0.0f, -2,559626f, 0.0f), Vector(43,50387f, 30.0f, 34,50921f));
	ADD_TO_VOLUME_SET(&Local_4 + 240, &Local_4 + 192[2]);
	*(&Local_4 + 192[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_objective03b", 2,802597E-45f, Vector(-724,9338f, 224,0182f, 1132,884f), Vector(0.0f, 99,2851f, 0.0f), Vector(43,10511f, 30.0f, 32,85636f));
	ADD_TO_VOLUME_SET(&Local_4 + 240, &Local_4 + 192[3]);
	*(&Local_4 + 192[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_objective04", 2,802597E-45f, Vector(-81,78777f, 118,7763f, 1334,522f), Vector(0.0f, 91,76753f, 0.0f), Vector(7.0f, 7.0f, 7.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 240, &Local_4 + 192[4]);
	*(&Local_4 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_blood02", 2,802597E-45f, Vector(-733,5162f, 174,367f, 1252,131f), Vector(0.0f, 14,98962f, 0.0f), Vector(45,74283f, 15.0f, 30.0f));
	*(&Local_4 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_dog_finish02", 2,802597E-45f, Vector(-747,9167f, 176,4982f, 1246,392f), Vector(0.0f, 21,81194f, 0.0f), Vector(21,42168f, 30.0f, 25,81365f));
	*(&Local_4 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_dog_finish03", 2,802597E-45f, Vector(-752,074f, 226,4311f, 1144,207f), Vector(0.0f, -170,3204f, 0.0f), Vector(10.0f, 30.0f, 30.0f));
	*(&Local_4 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "volume_dog_scent_set");
	*(&Local_4 + 272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_dog_scent01b", 2,802597E-45f, Vector(-251,6107f, 124,0775f, 1270,722f), Vector(0.0f, 14,09987f, 0.0f), Vector(20.0f, 30.0f, 20.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 304, &Local_4 + 272[0]);
	*(&Local_4 + 272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_dog_scent01c", 2,802597E-45f, Vector(-366,2482f, 117,8714f, 1222,496f), Vector(0.0f, 0,7796523f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 304, &Local_4 + 272[1]);
	*(&Local_4 + 272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_dog_scent01a", 2,802597E-45f, Vector(-96,4699f, 112,1891f, 1228,153f), Vector(0.0f, 30,77011f, 0.0f), Vector(20.0f, 30.0f, 20.0f));
	ADD_TO_VOLUME_SET(&Local_4 + 304, &Local_4 + 272[2]);
	*(&Local_4 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_ambient_restrict", 2,802597E-45f, Vector(-725,9491f, 197,9568f, 1135,293f), Vector(0.0f, 0.0f, 0.0f), Vector(250.0f, 100.0f, 200.0f));
	*(&Local_4 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_bear_restrict", 2,802597E-45f, Vector(-738,4987f, 227,4755f, 1120.0f), Vector(0.0f, 0.0f, 0.0f), Vector(50.0f, 50.0f, 50.0f));
	*(&Local_4 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_horse_restrict", 2,802597E-45f, Vector(-750,9561f, 230,4755f, 1145,045f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	*(&Local_4 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_dog_teleport", 2,802597E-45f, Vector(-755,1562f, 179,2446f, 1238,862f), Vector(0.0f, 0.0f, 0.0f), Vector(50.0f, 50.0f, 50.0f));
	*(&Local_4 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "volume_son_wander", 2,802597E-45f, Vector(-65,35275f, 120,2791f, 1411,941f), Vector(0.0f, -30.0f, 0.0f), Vector(9,202279f, 11,03092f, 11,99365f));
	*(&Local_4 + 352) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &Local_4, 8, 0);
	*(&Local_4 + 360[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart01", Vector(-64,301f, 116,635f, 1382,907f), Vector(0.0f, 39,88f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[0], &Local_4 + 352);
	*(&Local_4 + 360[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerEnd01", Vector(-64,301f, 116,635f, 1382,907f), Vector(0.0f, 39,88f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[1], &Local_4 + 352);
	*(&Local_4 + 360[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart01", Vector(-716,9012f, 227,7181f, 1143,099f), Vector(0.0f, 112,9472f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[2], &Local_4 + 352);
	*(&Local_4 + 360[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionEnd01", Vector(-716,9012f, 227,7181f, 1143,099f), Vector(0.0f, 113,2198f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[3], &Local_4 + 352);
	*(&Local_4 + 360[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "WifeStart01", Vector(-109,892f, 119,489f, 1364,27f), Vector(0.0f, 342,287f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[4], &Local_4 + 352);
	*(&Local_4 + 360[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nWifeEnd01", Vector(-102,166f, 119,489f, 1351,576f), Vector(0.0f, 160,366f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[5], &Local_4 + 352);
	*(&Local_4 + 360[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogStart01", Vector(-80,62251f, 117,6816f, 1369,607f), Vector(0.0f, -137,9841f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[6], &Local_4 + 352);
	*(&Local_4 + 360[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart01", Vector(-71,88409f, 117,8836f, 1375,386f), Vector(0.0f, 30,83535f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[7], &Local_4 + 352);
	*(&Local_4 + 360[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionHorseStart01", Vector(-734,0921f, 227,1915f, 1118,09f), Vector(60,75098f, -181,9967f, -91,11782f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[8], &Local_4 + 352);
	*(&Local_4 + 360[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "UncleStart01", Vector(-47,99899f, 115,7071f, 1355,999f), Vector(0.0f, -203,997f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[9], &Local_4 + 352);
	*(&Local_4 + 360[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "UncleEnd01", Vector(-61,27098f, 116,7625f, 1389,271f), Vector(0.0f, 29,30305f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 360[10], &Local_4 + 352);
	*(&Local_4 + 456) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &Local_4, 8, 0);
	*(&Local_4 + 464[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart02", Vector(-389,804f, 120,3003f, 1222,165f), Vector(0.0f, 85,5071f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 464[0], &Local_4 + 456);
	*(&Local_4 + 464[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart02", Vector(-716,9012f, 227,7181f, 1143,099f), Vector(0.0f, 113,5087f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 464[1], &Local_4 + 456);
	*(&Local_4 + 464[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogStart02", Vector(-391,2956f, 120,7483f, 1221,066f), Vector(0.0f, 91,76753f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 464[2], &Local_4 + 456);
	*(&Local_4 + 464[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart02", Vector(-366,2114f, 118,0539f, 1222,764f), Vector(0.0f, 100,7799f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 464[3], &Local_4 + 456);
	*(&Local_4 + 464[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionHorseStart02", Vector(-734,0921f, 227,1915f, 1118,09f), Vector(60,75098f, -181,9967f, -91,11782f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 464[4], &Local_4 + 456);
	*(&Local_4 + 512) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &Local_4, 8, 0);
	*(&Local_4 + 520[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart03", Vector(-750,6408f, 178,2551f, 1237,842f), Vector(0.0f, 26,59273f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 520[0], &Local_4 + 512);
	*(&Local_4 + 520[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart03", Vector(-716,9012f, 227,7181f, 1143,099f), Vector(0.0f, 113,5087f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 520[1], &Local_4 + 512);
	*(&Local_4 + 520[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogStart03", Vector(-755,1562f, 179,2446f, 1238,862f), Vector(0.0f, -107,8726f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 520[2], &Local_4 + 512);
	*(&Local_4 + 520[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart03", Vector(-750,3741f, 177,6511f, 1240,711f), Vector(0.0f, 30,98867f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 520[3], &Local_4 + 512);
	*(&Local_4 + 520[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionHorseStart03", Vector(-734,0921f, 227,1915f, 1118,09f), Vector(60,75098f, -181,9967f, -91,11782f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 520[4], &Local_4 + 512);
	*(&Local_4 + 520[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "BearStart03", Vector(-734,1664f, 227,1496f, 1117,233f), Vector(0.0f, 573,97f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 520[5], &Local_4 + 512);
	*(&Local_4 + 576) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &Local_4, 8, 0);
	*(&Local_4 + 584[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart04", Vector(-721,5546f, 226,9982f, 1144,556f), Vector(0.0f, -85,49197f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[0], &Local_4 + 576);
	*(&Local_4 + 584[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerEnd04", Vector(-720.0f, 226,9591f, 1140f), Vector(0.0f, 50,58324f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[1], &Local_4 + 576);
	*(&Local_4 + 584[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart04", Vector(-716,9012f, 227,7181f, 1143,099f), Vector(0.0f, 113,5087f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[2], &Local_4 + 576);
	*(&Local_4 + 584[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionEnd04", Vector(-716,9012f, 227,7181f, 1143,099f), Vector(0.0f, 113,5087f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[3], &Local_4 + 576);
	*(&Local_4 + 584[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogStart04", Vector(-736,1304f, 228,523f, 1149,461f), Vector(0.0f, -107,8726f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[4], &Local_4 + 576);
	*(&Local_4 + 584[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogEnd04", Vector(-736,1297f, 228,5119f, 1149,161f), Vector(0.0f, -107,8726f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[5], &Local_4 + 576);
	*(&Local_4 + 584[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart04", Vector(-723,8226f, 227,2135f, 1145,574f), Vector(0.0f, -28,73355f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[6], &Local_4 + 576);
	*(&Local_4 + 584[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseEnd04", Vector(-731,9888f, 228,1947f, 1150,096f), Vector(0.0f, -61,54124f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[7], &Local_4 + 576);
	*(&Local_4 + 584[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionHorseStart04", Vector(-734,0921f, 227,1915f, 1118,09f), Vector(60,75098f, -181,9967f, -91,11782f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[8], &Local_4 + 576);
	*(&Local_4 + 584[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "BearStart04", Vector(-734,1664f, 227,1496f, 1117,233f), Vector(0.0f, 573,97f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[9], &Local_4 + 576);
	*(&Local_4 + 584[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nBearEnd04", Vector(-734,1664f, 227,1496f, 1117,233f), Vector(0.0f, 573,97f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[10], &Local_4 + 576);
	*(&Local_4 + 584[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Preload_SON03_CS02", Vector(-721,5546f, 226,9982f, 1144,556f), Vector(0.0f, -85,49197f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 584[11], &Local_4 + 576);
	*(&Local_4 + 688) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", &Local_4, 8, 0);
	*(&Local_4 + 696[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart05", Vector(-728.0f, 228,4642f, 1140.0f), Vector(0.0f, -129,9519f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[0], &Local_4 + 688);
	*(&Local_4 + 696[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerEnd05_x_x_x", Vector(-728.0f, 228,4642f, 1140.0f), Vector(0.0f, -129,9519f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[1], &Local_4 + 688);
	*(&Local_4 + 696[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionStart05", Vector(-724,0883f, 227,4963f, 1143,575f), Vector(0.0f, 49,96714f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[2], &Local_4 + 688);
	*(&Local_4 + 696[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionEnd05_x_x_x", Vector(-724.0f, 227,5678f, 1140.0f), Vector(0.0f, -47,01635f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[3], &Local_4 + 688);
	*(&Local_4 + 696[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogStart05", Vector(-755,1562f, 179,2446f, 1238,862f), Vector(0.0f, -107,8726f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[4], &Local_4 + 688);
	*(&Local_4 + 696[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart05", Vector(-723,8226f, 227,2135f, 1145,574f), Vector(0.0f, -242,0972f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[5], &Local_4 + 688);
	*(&Local_4 + 696[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseEnd05", Vector(-723,033f, 229,105f, 1140,297f), Vector(0.0f, 145,655f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[6], &Local_4 + 688);
	*(&Local_4 + 696[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionHorseStart05", Vector(-734,0921f, 227,1915f, 1118,09f), Vector(60,75098f, -181,9967f, -91,11782f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[7], &Local_4 + 688);
	*(&Local_4 + 696[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Preload_SON03_CS02_B_x_x_x", Vector(-728.0f, 228,4642f, 1140.0f), Vector(0.0f, -129,9519f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 696[8], &Local_4 + 688);
	*(&Local_4 + 776) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &Local_4, 8, 0);
	*(&Local_4 + 784[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStartLast", Vector(-91,44238f, 117,9091f, 1349,361f), Vector(0.0f, -176,2248f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 784[0], &Local_4 + 776);
	*(&Local_4 + 784[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerEndLast", Vector(-91,44238f, 117,9091f, 1349,361f), Vector(0.0f, -176,2248f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 784[1], &Local_4 + 776);
	*(&Local_4 + 784[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CompanionEndLast", Vector(-81,08397f, 117,1083f, 1401,084f), Vector(0.0f, -179,667f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 784[2], &Local_4 + 776);
	*(&Local_4 + 784[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStartLast", Vector(-86,95138f, 117,9387f, 1347,045f), Vector(0.0f, 132,1316f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 784[3], &Local_4 + 776);
	*(&Local_4 + 784[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "DogStartLast", Vector(-96.0f, 118,5026f, 1352f), Vector(0.0f, 291,2343f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 784[4], &Local_4 + 776);
	*(&Local_4 + 832) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01aSet", &Local_4, 8, 0);
	*(&Local_4 + 840[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01a_01", Vector(-93,45866f, 112,1375f, 1229,118f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 840[0], &Local_4 + 832);
	*(&Local_4 + 840[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01a_02", Vector(-100,1372f, 112,5933f, 1227,509f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 840[1], &Local_4 + 832);
	*(&Local_4 + 840[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01a_03", Vector(-111,1247f, 113,4245f, 1235,707f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 840[2], &Local_4 + 832);
	*(&Local_4 + 840[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01a_04", Vector(-120,6224f, 114,0106f, 1234,439f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 840[3], &Local_4 + 832);
	*(&Local_4 + 880) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01bSet", &Local_4, 8, 0);
	*(&Local_4 + 888[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01b_01", Vector(-263,9273f, 119,111f, 1251,867f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 888[0], &Local_4 + 880);
	*(&Local_4 + 888[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01b_02", Vector(-263,4011f, 117,0485f, 1239,138f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 888[1], &Local_4 + 880);
	*(&Local_4 + 888[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01b_03", Vector(-278,8355f, 117,0596f, 1235,704f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 888[2], &Local_4 + 880);
	*(&Local_4 + 888[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01b_04", Vector(-276,4557f, 114,5372f, 1223,599f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 888[3], &Local_4 + 880);
	*(&Local_4 + 928) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01cSet", &Local_4, 8, 0);
	*(&Local_4 + 936[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01c_01", Vector(-360.0f, 117,5237f, 1222,128f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 936[0], &Local_4 + 928);
	*(&Local_4 + 936[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01c_02", Vector(-368,7196f, 118,0737f, 1225,819f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 936[1], &Local_4 + 928);
	*(&Local_4 + 936[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01c_03", Vector(-376,9786f, 118,3962f, 1223,749f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 936[2], &Local_4 + 928);
	*(&Local_4 + 936[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_scent01c_04", Vector(-381,9464f, 118,5669f, 1225,371f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 936[3], &Local_4 + 928);
	*(&Local_4 + 976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_objective01", Vector(-376,553f, 118,3048f, 1223,658f), Vector(0.0f, 91,76753f, 0.0f));
	*(&Local_4 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_objective02", Vector(-755,1562f, 179,2446f, 1238,862f), Vector(0.0f, 91,76753f, 0.0f));
	*(&Local_4 + 992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_objective03", Vector(-720,5239f, 226,9003f, 1144,094f), Vector(0.0f, 290,5295f, 0.0f));
	*(&Local_4 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_move_wife01", Vector(-109,892f, 119,489f, 1364,27f), Vector(0.0f, -15,65644f, 0.0f));
	*(&Local_4 + 1008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_move_wife02", Vector(-102,166f, 119,489f, 1351,576f), Vector(0.0f, 160,5223f, 0.0f));
	*(&Local_4 + 1016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_move_uncle01", Vector(-82,66039f, 112,2381f, 1243,67f), Vector(0.0f, 47,27546f, 0.0f));
	*(&Local_4 + 1024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_move_son01", Vector(-729,1036f, 228,1947f, 1150,096f), Vector(0.0f, 15,8499f, 0.0f));
	*(&Local_4 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "point_dog_face", Vector(8,007397f, -15,84571f, 11,03278f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_4 + 1040) = CREATE_OBJECTSET_IN_LAYOUT("BloodDecalSet", &Local_4, 8, 0);
	*(&Local_4 + 1048[03]) = Vector(-743,3141f, 174,367f, 1255,984f);
	*(&Local_4 + 1048[03] + 12) = Vector(0,9f, 1.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood0", Vector(-743,3141f, 174,367f, 1255,984f), Vector(0,9f, 1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &Local_4 + 1040);
	*(&Local_4 + 1048[13]) = Vector(-755,1562f, 179,2446f, 1238,862f);
	*(&Local_4 + 1048[13] + 12) = Vector(0,75f, 1.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood1", Vector(-755,1562f, 179,2446f, 1238,862f), Vector(0,75f, 1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &Local_4 + 1040);
	*(&Local_4 + 1048[23]) = Vector(-756,3701f, 1225,16f, 1225,16f);
	*(&Local_4 + 1048[23] + 12) = Vector(0,725f, -1.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood2", Vector(-756,3701f, 1225,16f, 1225,16f), Vector(0,725f, -1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &Local_4 + 1040);
	*(&Local_4 + 1048[33]) = Vector(-766,8682f, 192,0241f, 1199,743f);
	*(&Local_4 + 1048[33] + 12) = Vector(0,8f, 0.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood3", Vector(-766,8682f, 192,0241f, 1199,743f), Vector(0,8f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &Local_4 + 1040);
	*(&Local_4 + 1048[43]) = Vector(-759,8545f, 195,5195f, 1189,808f);
	*(&Local_4 + 1048[43] + 12) = Vector(0,65f, -1.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood4", Vector(-759,8545f, 195,5195f, 1189,808f), Vector(0,65f, -1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &Local_4 + 1040);
	*(&Local_4 + 1048[53]) = Vector(-751,8903f, 197,2721f, 1177,344f);
	*(&Local_4 + 1048[53] + 12) = Vector(0,725f, -1.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood5", Vector(-751,8903f, 197,2721f, 1177,344f), Vector(0,725f, -1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &Local_4 + 1040);
	*(&Local_4 + 1048[63]) = Vector(-777,3704f, 212,269f, 1165,883f);
	*(&Local_4 + 1048[63] + 12) = Vector(0,8f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood6", Vector(-777,3704f, 212,269f, 1165,883f), Vector(0,8f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &Local_4 + 1040);
	*(&Local_4 + 1048[73]) = Vector(-758,6111f, 224,6886f, 1143,619f);
	*(&Local_4 + 1048[73] + 12) = Vector(0,65f, 1.0f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBlood7", Vector(-758,6111f, 224,6886f, 1143,619f), Vector(0,65f, 1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &Local_4 + 1040);
	*(&Local_4 + 1048[83]) = Vector(-734,1664f, 227,1496f, 1117,233f);
	*(&Local_4 + 1048[83] + 12) = Vector(1.0f, 1.0f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "horseBodyBlood", Vector(-734,1664f, 227,1496f, 1117,233f), Vector(1.0f, 1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &Local_4 + 1040);
	*(&Local_4 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "Uncle_Sit_Ground", "mex_sitGround_tlkPsnt_hrasSol_link", Vector(-58,757f, 116,457f, 1390,409f), Vector(0.0f, -187,8268f, 0.0f));
	PushArrayP();
	*(&Local_4 + 1280) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "path_dog01_01");
	PushArrayP();
	*(&Local_4 + 1288) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "path_dog01_02");
	PushArrayP();
	*(&Local_4 + 1296) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "path_dog01_03");
}

struct<64> YD ÛÄlªCD»§ÄB4CoDÄÄcnCD¡
ÄÃXCÞQDÁÄCF7D^Ä£ÆC#G	DÿÄ/(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210) //Position: 0x1C68E / 116366
{
	IntToFloat(StackVal)->f_9725->f_37171 = StackVal;
}

void Ä8 $C. 5D¡ÞÄ:kEC/­D÷Ä;$âC1äRDÄ=eèC7á(D3\,:B°:¯opath_dog03   p   ðÄ=eãC7ãD3\Ä>õyC;DiÄ>ÆìCBØÀDýYÄ= CEIPD?­Ä;Â®CDÖÐDÄ<CF*DÄ(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, struct<4> Param5, char* cParam9, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57) //Position: 0x1C739 / 116537
{
	StackVal->f_36 = StackVal;
	PatchTrapF();
	7.0f->f_19233->f_37647 = StackVal;
	Unknown_Function();
	(147 < 6726->f_19824)->f_37821 = 68;
	PatchTrapE();
	((5->f_19513 + 26444)->f_20241)->f_37724 = iLocal_196 * 137;
	return;
	((StackVal - 19607)->f_21032)->f_37440 = StackVal;
	(StackVal ^ (StackVal + 15190)->f_21536)->f_37346 = StackVal;
	return -772,7477f->f_22142;
	StackVal->f_37269 = StackVal;
	StackVal->f_174 = StackVal;
	Unknown_Function();
	PatchTrapC();
	StackVal->f_37187 = StackVal;
	StackVal->f_243 = StackVal;
}

void Function_468() //Position: 0x1CD14 / 118036
{
	var uVar0;
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&uVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_469(int iParam0) //Position: 0x1CD99 / 118169
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_470() //Position: 0x1CDB9 / 118201
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_471() //Position: 0x1CDFF / 118271
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_472(int iParam0) //Position: 0x1CE15 / 118293
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_65())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_473(int iParam0, int iParam1) //Position: 0x1CE4E / 118350
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_474(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_474(struct<113> Param0) //Position: 0x1CED5 / 118485
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_475() //Position: 0x1CF33 / 118579
{
	return;
}

void Function_476(int iParam0, int iParam1) //Position: 0x1CF39 / 118585
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
				{
					iParam0 = &iVar0;
					Function_477(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_477(&iParam0, 0);
			}
		}
	}
	else
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (!&iParam0 != &iVar0)
			{
				if (IS_ACTOR_VALID(&iParam1))
				{
					if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
						}
						iParam0 = &iVar0;
						Function_477(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_477(&iParam0, 0);
				}
			}
		}
	}
	return;
}

void Function_477(int iParam0, int iParam1) //Position: 0x1D01D / 118813
{
	Function_478(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_478(float fParam0) //Position: 0x1D032 / 118834
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
	{
		TASK_CLEAR(&Global_21369 + 72);
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (&fParam0 == 0.0f)
		{
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	return;
}

bool Function_479(int iParam0) //Position: 0x1D201 / 119297
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_480(struct<25> Param0) //Position: 0x1D21F / 119327
{
	switch (Param0.f_24)
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
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_481(&Param0, 1);
			return 1;
		}
	}
	Function_481(&Param0, 0);
	return 0;
}

void Function_481(struct<25> Param0) //Position: 0x1D2AB / 119467
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_482(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1D2D6 / 119510
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_481(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_501(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_500(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_500(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_486(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_481(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_485(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_484(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_485(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_483(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_230(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_484(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
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
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_481(&Param2, 0);
	return 0;
}

void Function_483(char* cParam0) //Position: 0x1D6EC / 120556
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_484(struct<25> Param0) //Position: 0x1D7E0 / 120800
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_27(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_27(&iParam2, 2);
			break;
	}
	Function_27(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_485(bool bParam0) //Position: 0x1D858 / 120920
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_27(&iVar0, 1);
	Function_27(&iVar0, 2);
	Function_27(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_486(struct<57> Param0) //Position: 0x1D87C / 120956
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_497(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_490(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_497(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_487(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_497(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_487(&Param0, bVar2);
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

var Function_487(int iParam0, bool bParam1) //Position: 0x1D9ED / 121325
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_489(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_488(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_489(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_488(256);
			}
		}
	}
	return bParam1;
}

bool Function_488(int iParam0) //Position: 0x1DB29 / 121641
{
	return 2 | iParam0;
}

int Function_489(int iParam0) //Position: 0x1DB33 / 121651
{
	return 4 | iParam0;
}

int Function_490(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1DB3D / 121661
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_496(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_112(&iParam3, 2);
					Function_27(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_488(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_491(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_112(&iParam3, 2);
					Function_27(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_488(16);
		}
	}
	return 0;
}

int Function_491(int iParam0, vector3 vParam1) //Position: 0x1DBF8 / 121848
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_495(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_494(iVar0, 3, 1, bParam3))
			{
				if (!Function_500(&iParam0, 8, 1))
				{
					return Function_493(64, 1024, bParam2);
				}
			}
			return Function_492(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_494(iVar0, 2, 1, bParam3))
			{
				if (!Function_500(&iParam0, 32, 1))
				{
					return Function_493(64, 1024, bParam2);
				}
			}
			return Function_492(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_494(iVar0, 1, 1, bParam3))
			{
				if (!Function_500(&iParam0, 64, 1))
				{
					return Function_493(64, 1024, bParam2);
				}
			}
			return Function_492(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_494(iVar0, 3, 1, bParam3))
			{
				if (!Function_500(&iParam0, 128, 1))
				{
					return Function_493(64, 1024, bParam2);
				}
			}
			return Function_492(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_494(iVar0, 1, 1, bParam3))
			{
				if (!Function_500(&iParam0, 1024, 1))
				{
					return Function_493(64, 1024, bParam2);
				}
			}
			return Function_492(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_494(iVar0, 1, 1, bParam3))
			{
				if (!Function_500(&iParam0, 1024, 1))
				{
					return Function_493(64, 1024, bParam2);
				}
			}
			return Function_492(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_492(int iParam0, int iParam1, bool bParam2) //Position: 0x1DDC0 / 122304
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_493(int iParam0, int iParam1, bool bParam2) //Position: 0x1DDD5 / 122325
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_494(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1DDEA / 122346
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_495(int iParam0) //Position: 0x1DE07 / 122375
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
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_496(var uParam0, vector3 vParam1) //Position: 0x1DE7A / 122490
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_495(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_494(iVar0, 3, 1, bParam2))
			{
				if (!Function_500(&uParam0, 8, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000009:
			if (Function_494(iVar0, 3, 1, bParam2))
			{
				if (!Function_500(&uParam0, 8, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x0000006E:
			if (Function_494(iVar0, 2, 1, bParam2))
			{
				if (!Function_500(&uParam0, 16, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x0000005B:
			if (Function_494(iVar0, 2, 1, bParam2))
			{
				if (!Function_500(&uParam0, 32, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000031:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&uParam0, 64, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000007:
			if (Function_494(iVar0, 3, 1, bParam2))
			{
				if (!Function_500(&uParam0, 128, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000008:
			if (Function_494(iVar0, 2, 1, bParam2))
			{
				if (!Function_500(&uParam0, 256, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000014:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&uParam0, 512, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000018:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&uParam0, 512, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000057:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&uParam0, 1024, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000058:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&uParam0, 1024, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_497(struct<65> Param0) //Position: 0x1E0A3 / 123043
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_496(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_500(&Param0, 2, 1))
					{
						return Function_489(8);
					}
					return Function_488(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_500(&Param0, 4, 1))
					{
						return Function_489(16);
					}
					return Function_488(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_491(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_500(&Param0, 2, 1))
						{
							return Function_489(128);
						}
						return Function_488(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_500(&Param0, 4, 1))
						{
							return Function_489(256);
						}
						return Function_488(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_491(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_500(&Param0, 2, 1))
					{
						return Function_489(8);
					}
					return Function_488(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_500(&Param0, 4, 1))
					{
						return Function_489(16);
					}
					return Function_488(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_499(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_500(&Param0, 2, 1))
					{
						return Function_489(8);
					}
					return Function_488(8);
				}
				if (!Function_500(&Param0, 4, 1))
				{
					return Function_489(16);
				}
				return Function_488(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_491(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_112(&iParam4, 2);
								Function_27(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_498(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_488(128);
							}
							if (!Function_500(&Param0, 2, 1))
							{
								return Function_489(8);
							}
							return Function_488(8);
						}
						if (iParam4 == 2)
						{
							if (Function_498(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_488(256);
							}
							if (!Function_500(&Param0, 4, 1))
							{
								return Function_489(16);
							}
							return Function_488(16);
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

bool Function_498(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1E389 / 123785
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_499(int iParam0, vector3 vParam1) //Position: 0x1E457 / 123991
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_495(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_494(iVar0, 2, 1, bParam2))
			{
				if (!Function_500(&iParam0, 16, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x0000005B:
			if (Function_494(iVar0, 2, 1, bParam2))
			{
				if (!Function_500(&iParam0, 32, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000057:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&iParam0, 1024, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		case 0x00000058:
			if (Function_494(iVar0, 1, 1, bParam2))
			{
				if (!Function_500(&iParam0, 1024, 1))
				{
					return Function_489(64);
				}
			}
			return Function_488(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_500(struct<69> Param0) //Position: 0x1E579 / 124281
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_501(bool bParam0) //Position: 0x1E5A3 / 124323
{
	if (IS_ITERATOR_VALID(&bParam0))
	{
		ITERATE_EVERYWHERE(&bParam0);
		ITERATE_ON_PARTIAL_NAME(&bParam0, Function_89());
		ITERATE_ON_PARTIAL_MODEL_NAME(&bParam0, Function_89());
		ITERATE_ON_OBJECT_TYPE(&bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_502(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1E5D9 / 124377
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

