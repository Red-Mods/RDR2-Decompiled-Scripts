//Decompiled with MagicRDR v1.0
//Function Count : 665
//Statics Count : 1855
//Natives Count : 815
//Parameters Count : 12

#region Local Var
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_1310 = 0;
	iLocal_1806 = 0;
	iLocal_1809 = 0;
	iLocal_1810 = 0;
	iLocal_1811 = 0;
	iLocal_1813 = 0;
	iLocal_1832 = 0;
	iLocal_1833 = 0;
	Local_1273 = { StackVal, StackVal, StackVal, StackVal, StackVal, Local_1843 };
	iLocal_1285 = 99;
	iLocal_1286 = 6;
	iLocal_1287 = 1000;
	while (Function_282())
	{
		Function_238();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x60 / 96
{
	ENABLE_CHILD_SECTOR("chu_corral01props01x");
	ENABLE_CHILD_SECTOR("chu_trainstation01Props01x");
	ENABLE_CHILD_SECTOR("emt_barn01props01x");
	ENABLE_CHILD_SECTOR("emt_barn01x");
	ENABLE_CHILD_SECTOR("emt_residence01props01x");
	ENABLE_CHILD_SECTOR("emt_residence01x");
	ENABLE_CHILD_SECTOR("emt_shack01props01x");
	ENABLE_CHILD_SECTOR("emt_shack01x");
	STREAMING_UNLOAD_SCENE();
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
	{
		MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
	}
	Function_237(Global_53579);
	Function_235(Global_53579);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1313);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	SET_AUTO_CONVERSATION_LOOK(&bLocal_1313, 1);
	Function_234();
	STREAMING_UNLOAD_BOUNDS();
	if ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	AUDIO_SET_PLAYER_MOOD(0, 0);
	AUDIO_ENABLE_PLAYER_TAUNTS();
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	if (IS_ACTOR_VALID(&iLocal_17 + 1008[02]))
	{
		DESTROY_ACTOR(&iLocal_17 + 1008[02]);
	}
	if (IS_ACTOR_VALID(&iLocal_17 + 1008[12]))
	{
		DESTROY_ACTOR(&iLocal_17 + 1008[12]);
	}
	if (IS_ACTOR_VALID(&iLocal_17 + 1008[22]))
	{
		DESTROY_ACTOR(&iLocal_17 + 1008[22]);
	}
	if (IS_ACTOR_VALID(&iLocal_17 + 1008[32]))
	{
		DESTROY_ACTOR(&iLocal_17 + 1008[32]);
	}
	Function_233();
	Function_232();
	Function_231();
	Function_230();
	Function_229();
	Function_228();
	if (IS_ACTOR_VALID(&iLocal_1315))
	{
		if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_1315)))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO(&iLocal_1315));
			TASK_CLEAR(&iLocal_1315);
		}
	}
	if (IS_ACTOR_VALID(&iLocal_17 + 976[02]))
	{
		if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_17 + 976[02])))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO(&iLocal_17 + 976[02]));
			TASK_CLEAR(&iLocal_17 + 976[02]);
			RELEASE_ACTOR(&iLocal_17 + 976[02]);
		}
	}
	if (IS_VOLUME_VALID(&uLocal_1424))
	{
		DESTROY_VOLUME(&uLocal_1424);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1426))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1426);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1428))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1428);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1430))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1430);
	}
	if (IS_OBJECT_VALID(&uLocal_1481))
	{
		DESTROY_OBJECT(&uLocal_1481);
	}
	if (IS_BLIP_VALID(&bLocal_1493))
	{
		REMOVE_BLIP(&bLocal_1493);
	}
	if (IS_BLIP_VALID(&uLocal_1495))
	{
		REMOVE_BLIP(&uLocal_1495);
	}
	if (IS_ITERATOR_VALID(&uLocal_1394))
	{
		DESTROY_ITERATOR(&uLocal_1394);
	}
	if (IS_OBJECT_VALID(&uLocal_1479))
	{
		Function_227(&uLocal_1479);
	}
	if (IS_BLIP_VALID(&uLocal_1491))
	{
		REMOVE_BLIP(&uLocal_1491);
	}
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1313, true);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1313);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_1315);
	Function_225(5, 0, 1);
	if (Function_224(5))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 0);
		Function_221(5, 0, 0, 1, 1);
		Function_220(StackVal, &bLocal_1313, Vector(-624.0f, 15.0f, 3562.0f), 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1457))
	{
		RELEASE_ACTOR(&bLocal_1457);
		Function_220(StackVal, &bLocal_1457, Vector(-624.0f, 15.0f, 3562.0f), 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_1459))
	{
		AUDIO_TURN_ON_PAIN_VOCALS(&bLocal_1459);
	}
	Function_219(&Global_12048, &Global_14326, &iLocal_1469, 0);
	if (Function_224(8))
	{
		Function_221(8, 0, 0, 1, 1);
	}
	Function_218(&uLocal_1271);
	Function_218(&iLocal_17);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_189(bLocal_1300, 1, 0, 1, 1, 1, 1, 1);
	Function_185(&iLocal_1340);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_1394))
	{
		DESTROY_ITERATOR(&uLocal_1394);
	}
	RELEASE_LAYOUT_REF(&uLocal_1271);
	if (bLocal_1299)
	{
		DISABLE_CHILD_SECTOR("emt_caveDoor01x");
		ENABLE_CHILD_SECTOR("emt_caveDoor02x");
		Function_26(Local_1273, 1, 1, 1, 0);
	}
	else if (bLocal_1300)
	{
		DISABLE_CHILD_SECTOR("emt_caveDoor02x");
		ENABLE_CHILD_SECTOR("emt_caveDoor01x");
		Function_22(Local_1273);
	}
	else
	{
		DISABLE_CHILD_SECTOR("emt_caveDoor02x");
		ENABLE_CHILD_SECTOR("emt_caveDoor01x");
		Function_2(Local_1273);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x4BF / 1215
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x4E0 / 1248
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x4FD / 1277
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x520 / 1312
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x537 / 1335
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

void Function_7(int iParam0) //Position: 0x5D9 / 1497
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x5FC / 1532
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

void Function_9() //Position: 0x646 / 1606
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x65F / 1631
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

void Function_11(var uParam0, int iParam1) //Position: 0x6B2 / 1714
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

struct<16> Function_12(int iParam0) //Position: 0x7DC / 2012
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

bool Function_13() //Position: 0x816 / 2070
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x831 / 2097
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x83E / 2110
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x85E / 2142
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x875 / 2165
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x890 / 2192
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAD7 / 2775
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0xB03 / 2819
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

bool Function_21(int iParam0) //Position: 0xB27 / 2855
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0xB3C / 2876
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0xB5A / 2906
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

struct<16> Function_24(int iParam0) //Position: 0xC00 / 3072
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

struct<24> Function_25(char* cParam0) //Position: 0xC3F / 3135
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xE95 / 3733
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
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
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
	Function_27();
}

void Function_27() //Position: 0xF89 / 3977
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xFBB / 4027
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
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

int Function_29(int iParam0) //Position: 0xFF9 / 4089
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0x1013 / 4115
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0x1029 / 4137
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1326 / 4902
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x139B / 5019
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x13D5 / 5077
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1451 / 5201
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1464 / 5220
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

int Function_37(int iParam0) //Position: 0x1505 / 5381
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1542 / 5442
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1558 / 5464
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
		if (Function_96())
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
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x17B6 / 6070
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x17F4 / 6132
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

void Function_42(bool bParam0) //Position: 0x1833 / 6195
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
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x1888 / 6280
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
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x18D3 / 6355
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

void Function_45() //Position: 0x19D9 / 6617
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

void Function_46() //Position: 0x1A0C / 6668
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

void Function_47() //Position: 0x1B9F / 7071
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

void Function_48() //Position: 0x1D58 / 7512
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1D66 / 7526
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
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
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

var Function_50() //Position: 0x1F83 / 8067
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1F98 / 8088
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x203F / 8255
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x22DB / 8923
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
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

var Function_54() //Position: 0x2919 / 10521
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2922 / 10530
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2933 / 10547
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

struct<32> Function_57(char* cParam0) //Position: 0x2A2A / 10794
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A45 / 10821
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2AAC / 10924
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2ABE / 10942
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AD0 / 10960
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

int Function_62(int iParam0) //Position: 0x2C04 / 11268
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2C13 / 11283
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2C4C / 11340
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2C89 / 11401
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E23 / 11811
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

int Function_67(bool bParam0) //Position: 0x3067 / 12391
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x30A8 / 12456
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

struct<8> Function_69() //Position: 0x3131 / 12593
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

struct<8> Function_70() //Position: 0x31C8 / 12744
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

void Function_71() //Position: 0x3247 / 12871
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3284 / 12932
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x3490 / 13456
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_74(char* cParam0) //Position: 0x3547 / 13639
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x355F / 13663
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x3657 / 13911
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3661 / 13921
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3672 / 13938
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3688 / 13960
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3754 / 14164
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3771 / 14193
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
	Function_38(&Global_99144, 1);
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

bool Function_82(int iParam0) //Position: 0x3F9D / 16285
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3FD8 / 16344
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3FE7 / 16359
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
							else if (iVar0 == Global_46838[3])
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

bool Function_85(int iParam0) //Position: 0x44C8 / 17608
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x44DE / 17630
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x44FD / 17661
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4517 / 17687
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4581 / 17793
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

void Function_90(int iParam0) //Position: 0x47A9 / 18345
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

void Function_91() //Position: 0x4847 / 18503
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

void Function_92() //Position: 0x49A9 / 18857
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x4A29 / 18985
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4D80 / 19840
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

int Function_95(int iParam0) //Position: 0x4E08 / 19976
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4E22 / 20002
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4E4D / 20045
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4E7B / 20091
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
	
	if (!Function_30(iParam0))
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
				bVar4 = (Function_67(355) - Global_53524.f_168);
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
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x5117 / 20759
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
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
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

void Function_100(int iParam0, int iParam1) //Position: 0x52EB / 21227
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5555 / 21845
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

int Function_102() //Position: 0x56E5 / 22245
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

void Function_103() //Position: 0x5786 / 22406
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

void Function_104(int iParam0) //Position: 0x5844 / 22596
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

var Function_105(int iParam0) //Position: 0x58AA / 22698
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5939 / 22841
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

var Function_107(int iParam0, int iParam1) //Position: 0x5AE5 / 23269
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

void Function_108() //Position: 0x5B2A / 23338
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5B40 / 23360
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5B80 / 23424
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5BC0 / 23488
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5BCF / 23503
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

int Function_113(int iParam0) //Position: 0x5D97 / 23959
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

var Function_114() //Position: 0x5E2C / 24108
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5E51 / 24145
{
	if (!Function_30(iParam0))
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x6320 / 25376
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
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
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

var Function_117(int iParam0) //Position: 0x6647 / 26183
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x66EA / 26346
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

int Function_119(int iParam0, bool bParam1) //Position: 0x68E7 / 26855
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A92 / 27282
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6B64 / 27492
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
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

void Function_122(int iParam0) //Position: 0x747F / 29823
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x75FC / 30204
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7707 / 30471
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x7733 / 30515
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

var Function_126(vector3 vParam0) //Position: 0x778A / 30602
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

void Function_127(var uParam0, int iParam1) //Position: 0x77D8 / 30680
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7833 / 30771
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
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
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
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x79D4 / 31188
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x79DA / 31194
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7A89 / 31369
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7ADE / 31454
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7AF4 / 31476
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7B45 / 31557
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

void Function_135(var uParam0, int iParam1) //Position: 0x7B72 / 31602
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7B83 / 31619
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7B9D / 31645
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7BAE / 31662
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
				Function_42(1);
				Function_41(1, 5);
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
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7D0A / 32010
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

bool Function_140() //Position: 0x7D95 / 32149
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7DC2 / 32194
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

int Function_142(int iParam0) //Position: 0x7F72 / 32626
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7FC9 / 32713
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

var Function_144(int iParam0) //Position: 0x7FEE / 32750
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x8045 / 32837
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

bool Function_146(bool bParam0) //Position: 0x80A4 / 32932
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x80B0 / 32944
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x80CC / 32972
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

bool Function_149() //Position: 0x811E / 33054
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x814E / 33102
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x81C3 / 33219
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x8220 / 33312
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x8293 / 33427
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x82EE / 33518
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
				Function_42(1);
				Function_41(1, 6);
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x85AE / 34222
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
	if (!Function_147(3) || uParam3)
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
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
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
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
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
				Function_156(3, bParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(bParam1, 18));
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

void Function_156(int iParam0, bool bParam1) //Position: 0x884D / 34893
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

void Function_157() //Position: 0x88BC / 35004
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

int Function_158(int iParam0, int iParam1) //Position: 0x893C / 35132
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					else if (iVar14 && Function_28(5, 0))
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
					else if (iVar15 && Function_28(26, 0))
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
					else if (Function_28(17, 0) && iVar13)
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
					else if ((Function_28(6, 0) && Function_159(18)) && iVar17)
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
					else if ((Function_28(9, 0) && Function_159(16)) && iVar17)
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
					else if (Function_28(8, 0) && iVar17)
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

int Function_159(int iParam0) //Position: 0x959F / 38303
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x95B4 / 38324
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

void Function_161(var uParam0, int iParam1) //Position: 0x9603 / 38403
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x965B / 38491
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
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

bool Function_163(int iParam0, int iParam1) //Position: 0x96CE / 38606
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x96E2 / 38626
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

var Function_165(int iParam0) //Position: 0x97D3 / 38867
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

bool Function_166(var uParam0, int iParam1) //Position: 0x982B / 38955
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9848 / 38984
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x98A2 / 39074
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x98B4 / 39092
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

void Function_170(struct<185> Param0) //Position: 0x98E8 / 39144
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

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9953 / 39251
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

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x9A3D / 39485
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

void Function_173() //Position: 0x9BBC / 39868
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9BC8 / 39880
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

void Function_175() //Position: 0x9C0E / 39950
{
	Function_176();
	return;
}

void Function_176() //Position: 0x9C17 / 39959
{
	Function_185(&iLocal_17 + 8);
	Function_185(&iLocal_17 + 240);
	Function_185(&iLocal_17 + 360);
	Function_185(&iLocal_17 + 576);
	Function_185(&iLocal_17 + 696);
	Function_185(&iLocal_17 + 928);
	Function_185(&iLocal_17 + 952);
	Function_177(&Global_12422, &Global_14880, 0, 0);
	Function_177(&Global_12422, &Global_14880, 2, 0);
	Function_177(&Global_12422, &Global_14880, 1, 0);
	Function_177(&Global_12422, &Global_14880, 4, 0);
	RELEASE_LAYOUT_REF(&iLocal_17);
	return;
}

void Function_177(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9C85 / 40069
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_184(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_184(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_184(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_183(&(Param0[iVar02]), 8);
	}
	Function_183(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_182(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_178(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_178(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9D2D / 40237
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_181(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_184(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_184(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_181(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_179(Global_43790), false, 0);
	}
}

int Function_179(int iParam0) //Position: 0x9E93 / 40595
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

int Function_180(int iParam0) //Position: 0x9EBE / 40638
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

void Function_181(var uParam0, int iParam1) //Position: 0x9EF2 / 40690
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_182(int iParam0) //Position: 0x9F03 / 40707
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_183(var uParam0, int iParam1) //Position: 0x9FAC / 40876
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_184(var uParam0, int iParam1) //Position: 0x9FC6 / 40902
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185(int iParam0) //Position: 0x9FE3 / 40931
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_186(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_186(struct<2>[] Param0, int iParam1) //Position: 0xA00B / 40971
{
	if (Function_188(&(Param0[iParam12]), 4))
	{
		if (Function_188(&(Param0[iParam12]), 1))
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
			Function_187(&(Param0[iParam12]), 1);
			Function_187(&(Param0[iParam12]), 2);
			Function_187(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_187(struct<13> Param0) //Position: 0xA156 / 41302
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_188(struct<13> Param0) //Position: 0xA173 / 41331
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_189(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA191 / 41361
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_217());
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
	Function_234();
	CLEAR_PRINTED_OBJECTIVE();
	Function_216();
	Function_214(0);
	Function_213();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_212();
	Function_211();
	Function_234();
	ENABLE_JOURNAL_REPLAY(1);
	Function_210(1);
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
		Function_209(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_206(Global_42825);
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
	Function_205();
	Function_204(1178687);
	Function_202(33039);
	Function_201(0x218003f);
	Function_200(4194560);
	Function_199();
	Function_198();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_195(0, 1, 1);
	}
	else
	{
		Function_195(0, 1, 1);
	}
	Function_194();
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
	Function_190();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_190() //Position: 0xA39D / 41885
{
	int iVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			iVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_193() > 3)
		{
			iVar0 *= 2;
		}
		Function_191(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA3F4 / 41972
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_192(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_192(bool bParam0) //Position: 0xA444 / 42052
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_193() //Position: 0xA46D / 42093
{
	return Global_21369.f_248;
}

void Function_194() //Position: 0xA478 / 42104
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_136(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0xA4A2 / 42146
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
		if (Function_85(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_136(&(Global_43791[Global_43789]), 2097152);
			Function_196(Global_43789);
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
				if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_136(&(Global_43791[iVar0]), 2097155);
					Function_137(&(Global_43791[iVar0]), 262144);
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

void Function_196(int iParam0) //Position: 0xA5AE / 42414
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_197())
			{
				return;
			}
		}
		if (!Function_166(&(Global_43791[iParam0]), 2048))
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

bool Function_197() //Position: 0xA62D / 42541
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_198() //Position: 0xA696 / 42646
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

void Function_199() //Position: 0xA6BC / 42684
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

void Function_200(int iParam0) //Position: 0xA6E2 / 42722
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_201(int iParam0) //Position: 0xA6FF / 42751
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_202(int iParam0) //Position: 0xA712 / 42770
{
	Function_203(&Global_43580, iParam0);
	return;
}

void Function_203(var uParam0, int iParam1) //Position: 0xA720 / 42784
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_204(bool bParam0) //Position: 0xA73F / 42815
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_205() //Position: 0xA76C / 42860
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

void Function_206(int iParam0) //Position: 0xA7E4 / 42980
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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
		Function_207(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
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

int Function_207(bool bParam0, bool bParam1, int iParam2) //Position: 0xA91A / 43290
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_208(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_208(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_208(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_208(bool bParam0) //Position: 0xA968 / 43368
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

void Function_209(int iParam0) //Position: 0xAA5C / 43612
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

void Function_210(bool bParam0) //Position: 0xAADF / 43743
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

void Function_211() //Position: 0xAB56 / 43862
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

void Function_212() //Position: 0xAB9A / 43930
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

void Function_213() //Position: 0xABDE / 43998
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_214(int iParam0) //Position: 0xABF4 / 44020
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_215())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_215() //Position: 0xAC34 / 44084
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

void Function_216() //Position: 0xAC59 / 44121
{
	Global_15862 = 0.0f;
	return;
}

int Function_217() //Position: 0xAC63 / 44131
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_218(int iParam0) //Position: 0xAC80 / 44160
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

void Function_219(var uParam0, vector3[] vParam1, int iParam2, int iParam3) //Position: 0xACE8 / 44264
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0)
	{
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16) == &iParam2)
			{
				Function_177(&uParam0, &vParam1, iVar0, &iParam3);
			}
		}
		iVar0++;
	}
}

void Function_220(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0xAD39 / 44345
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_74(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, 1);
}

int Function_221(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xAE58 / 44632
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
		Function_223(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_222(&Global_15402[iParam014] + 8);
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

void Function_222(bool bParam0) //Position: 0xB19A / 45466
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

void Function_223(int iParam0) //Position: 0xB1CD / 45517
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

bool Function_224(int iParam0) //Position: 0xB1E4 / 45540
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_HAS_BEEN_STOLEN: CompanionsList out of bounds.");
		return 0;
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		return GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", &uVar2);
	}
	return IS_ACTOR_VALID(&Global_15402[iParam014] + 8);
}

void Function_225(int iParam0, bool bParam1, bool bParam2) //Position: 0xB2A8 / 45736
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
						Function_222(&uVar1);
					}
				}
				Function_226(&uVar0);
			}
		}
	}
	return;
}

void Function_226(bool bParam0) //Position: 0xB3B7 / 46007
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

void Function_227(var uParam0) //Position: 0xB3EA / 46058
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&uParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&uParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&uParam0);
	}
	return;
}

void Function_228() //Position: 0xB480 / 46208
{
	Function_185(&iLocal_17 + 952);
	return;
}

void Function_229() //Position: 0xB48E / 46222
{
	Function_185(&iLocal_17 + 928);
	return;
}

void Function_230() //Position: 0xB49C / 46236
{
	Function_185(&iLocal_17 + 696);
	return;
}

void Function_231() //Position: 0xB4AA / 46250
{
	Function_185(&iLocal_17 + 576);
	return;
}

void Function_232() //Position: 0xB4B8 / 46264
{
	Function_185(&iLocal_17 + 360);
	return;
}

void Function_233() //Position: 0xB4C6 / 46278
{
	Function_185(&iLocal_17 + 240);
	return;
}

void Function_234() //Position: 0xB4D3 / 46291
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_235(int iParam0) //Position: 0xB4FE / 46334
{
	if (!Function_236(iParam0, "TRAIN_RELEASE"))
	{
		return 0;
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 0;
	}
	else if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 0;
	}
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
	return 1;
}

bool Function_236(int iParam0, int iParam1) //Position: 0xB54D / 46413
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_237(int iParam0) //Position: 0xB55C / 46428
{
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_816 = 16383;
	}
	else if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_816 = 16383;
	}
	return;
}

void Function_238() //Position: 0xB58C / 46476
{
	var uVar0[18];
	int iVar19;
	
	if (Function_281())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "01.5 - After Train Ride";
		uVar0[4] = "02 - Meet Carlos";
		uVar0[5] = "03 - Clear Caves/Find MexGirl";
		uVar0[6] = "05 - Escape w/ MexGirl";
		uVar0[7] = "Cutscene 06 - Mission End";
		uVar0[8] = "DEBUG - Hogtie MexGirl";
		uVar0[9] = "DEBUG - Teleport";
		uVar0[10] = "Assign Gringo";
		uVar0[11] = "Gringo Deactivate";
		uVar0[12] = "nTele Down";
		uVar0[13] = "Tele Up";
		uVar0[14] = "Walk DOWN NOPATH";
		uVar0[15] = "Walk UP NOPATH";
		uVar0[16] = "Walk Up";
		uVar0[17] = "TOGGLE ANIM BOOL";
		iVar19 = Function_267(&uLocal_1302, &uVar0, &Local_1273 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_266(&iVar19, &iLocal_1285, &iLocal_1286, &iLocal_1287))
		{
			Function_259();
			Function_258();
		}
		if (iVar19 == 0)
		{
			Function_259();
			Function_258();
			Function_257(&bLocal_1299, 8);
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 1)
		{
			Function_259();
			Function_258();
			Function_253(iLocal_1285);
			Function_249(StackVal, 5, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 2)
		{
			Function_259();
			Function_258();
			Function_244(&bLocal_1301, 4);
		}
		else if (iVar19 == 3)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_242(&bLocal_1396);
			iLocal_1503 = 1;
			iLocal_1285 = 1;
			iLocal_1286 = 0;
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 4)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_242(&bLocal_1396);
			iLocal_1285 = 2;
			iLocal_1286 = 0;
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 5)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_242(&bLocal_1396);
			iLocal_1285 = 3;
			iLocal_1286 = 0;
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 6)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_242(&bLocal_1396);
			iLocal_1285 = 4;
			iLocal_1286 = 0;
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 7)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_242(&bLocal_1396);
			iLocal_1285 = 101;
			iLocal_1286 = 0;
			iLocal_1287 = 1000;
		}
		else if (iVar19 == 8)
		{
			Function_259();
			Function_258();
		}
		else if (iVar19 == 9)
		{
			Function_259();
			Function_258();
			Function_241(&iLocal_17 + 3528[6]);
			Function_240(StackVal, &Global_54076, Function_241(&iLocal_17 + 3528[6]), 1, 1, 1);
		}
		else if (iVar19 == 10)
		{
			Function_259();
			Function_258();
		}
		else if (iVar19 == 11)
		{
			Function_259();
			Function_258();
		}
		else if (iVar19 == 12)
		{
			Function_239(&bLocal_1313, &iLocal_17 + 3176[10], 1, 1, 1);
			TASK_CLEAR(&bLocal_1313);
			TASK_STAND_STILL(&bLocal_1313, -1.0f, 0, 0);
		}
		else if (iVar19 == 13)
		{
			Function_259();
			Function_258();
			Function_239(&bLocal_1313, &iLocal_17 + 3176[15], 1, 1, 1);
			TASK_CLEAR(&bLocal_1313);
			TASK_STAND_STILL(&bLocal_1313, -1.0f, 0, 0);
		}
		else if (iVar19 == 14)
		{
			Function_259();
			Function_258();
			TASK_CLEAR(&bLocal_1313);
			TASK_GO_TO_OBJECT(&bLocal_1313, &iLocal_17 + 3176[10], 1, 0, 0);
		}
		else if (iVar19 == 15)
		{
			Function_259();
			Function_258();
			TASK_CLEAR(&bLocal_1313);
			TASK_GO_TO_OBJECT(&bLocal_1313, &iLocal_17 + 3176[10], 1, 0, 0);
			TASK_GO_TO_OBJECT(&bLocal_1313, &iLocal_17 + 3176[15], 1, 0, 0);
		}
		else if (iVar19 == 16)
		{
			Function_259();
			Function_258();
			TASK_CLEAR(&bLocal_1313);
			TASK_GO_TO_OBJECT(&bLocal_1313, &iLocal_17 + 3176[10], 1, 0, 1);
		}
		else if (iVar19 == 17)
		{
			Function_259();
			Function_258();
			iLocal_1582 = 0;
		}
	}
	return;
}

void Function_239(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xBA46 / 47686
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_240(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0xBB56 / 47958
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &uParam4, &bParam5);
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &uParam4, &bParam5);
			}
			else
			{
				TELEPORT_ACTOR(&uParam0, &uParam1, &bParam3, &uParam4, &bParam5);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

struct<8> Function_241(bool bParam0) //Position: 0xBBF8 / 48120
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

void Function_242(bool bParam0) //Position: 0xBC21 / 48161
{
	Function_243(&bParam0, 0.0f);
	return;
}

void Function_243(vector3 vParam0) //Position: 0xBC2E / 48174
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_244(bool bParam0, int iParam1) //Position: 0xBC53 / 48211
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_245(&iParam1);
	bParam0 = 1;
	return;
}

void Function_245(int iParam0) //Position: 0xBC78 / 48248
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_248("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_247(2) || Function_247(8)) || Function_247(9)) || Function_247(10))
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
		Function_246();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_246();
	}
	return;
}

void Function_246() //Position: 0xBD6F / 48495
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_247(int iParam0) //Position: 0xBD7B / 48507
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_248(char* cParam0) //Position: 0xBDB1 / 48561
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_249(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBE1D / 48669
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_250(StackVal, Param4, uParam3, &iParam6);
		Function_245(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_250(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBE5E / 48734
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_252(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_251(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_251(int iParam0) //Position: 0xBEE0 / 48864
{
	if (!Function_85(iParam0))
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

var Function_252(struct<2> Param0, bool bParam2) //Position: 0xC391 / 50065
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

struct<8> Function_253(int iParam0) //Position: 0xC3FD / 50173
{
	Function_254(iParam0 + 1);
	return StackVal, Function_254(iParam0 + 1);
}

struct<8> Function_254(int iParam0) //Position: 0xC40A / 50186
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_241(&iLocal_17 + 3176[4]);
			return StackVal, Function_241(&iLocal_17 + 3176[4]);
			break;
		
		case 0x00000001:
			Function_241(&iLocal_17 + 3344[0]);
			return StackVal, Function_241(&iLocal_17 + 3344[0]);
			break;
		
		case 0x00000002:
			Function_241(&iLocal_17 + 3528[10]);
			return StackVal, Function_241(&iLocal_17 + 3528[10]);
			break;
		
		case 0x00000003:
			Function_241(&iLocal_17 + 3776[11]);
			return StackVal, Function_241(&iLocal_17 + 3776[11]);
			break;
		
		case 0x00000004:
			Function_241(&iLocal_17 + 3960[2]);
			return StackVal, Function_241(&iLocal_17 + 3960[2]);
			break;
		
		default:
			Function_241(&iLocal_17 + 3080[0]);
			return StackVal, Function_241(&iLocal_17 + 3080[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_241(&iLocal_17 + 3176[4]);
	return StackVal, Function_241(&iLocal_17 + 3176[4]);
}

int Function_255(int iParam0) //Position: 0xC507 / 50439
{
	return Function_256(iParam0 + 1);
}

int Function_256(int iParam0) //Position: 0xC514 / 50452
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_17 + 3176[4]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_17 + 3344[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_17 + 3528[10]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_17 + 3776[11]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_17 + 3960[2]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_17 + 3080[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_17 + 3176[4]);
}

void Function_257(bool bParam0, int iParam1) //Position: 0xC611 / 50705
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_245(&iParam1);
	bParam0 = 1;
	return;
}

void Function_258() //Position: 0xC636 / 50742
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_259() //Position: 0xC64B / 50763
{
	Function_261();
	Function_260(10, 3);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0xC65A / 50778
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

void Function_261() //Position: 0xC7A7 / 51111
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_265())
	{
		Function_264(10, 3);
	}
	else
	{
		Function_262();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_262() //Position: 0xC7F2 / 51186
{
	Function_263(25, 2);
	return;
}

void Function_263(int iParam0, int iParam1) //Position: 0xC7FE / 51198
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

void Function_264(int iParam0, int iParam1) //Position: 0xCA2A / 51754
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

bool Function_265() //Position: 0xCB77 / 52087
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

bool Function_266(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCBDF / 52191
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_259();
			Function_258();
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
		Function_248("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_267(struct<17> Param0) //Position: 0xCC8E / 52366
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_280(&Var12, &Var0);
	uVar15 = Function_279(uParam1, &Var12);
	Function_278(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_277(&Param0, uVar15);
	Function_275(StackVal, &Param0, Var12.f_12);
	Function_273(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_272(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_269(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_268(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_268(int iParam0, int iParam1, int iParam2) //Position: 0xCD82 / 52610
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

bool Function_269(struct<17> Param0) //Position: 0xCDE2 / 52706
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
				Function_271(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_271(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_268(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_270(Param1.f_64);
	}
	else
	{
		Function_270(Param1.f_64);
	}
	return 0;
}

void Function_270(bool bParam0) //Position: 0xCF75 / 53109
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

void Function_271(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCFB3 / 53171
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

var Function_272(int iParam0, struct<21> Param1) //Position: 0xD069 / 53353
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_273(vector3 vParam0) //Position: 0xD090 / 53392
{
	switch (Function_274())
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

int Function_274() //Position: 0xD13C / 53564
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

void Function_275(vector3 vParam0) //Position: 0xD178 / 53624
{
	switch (Function_276(&vParam0))
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

int Function_276(bool bParam0) //Position: 0xD221 / 53793
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_277(struct<21> Param0) //Position: 0xD341 / 54081
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

void Function_278(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD4FB / 54523
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

var Function_279(int iParam0, struct<13> Param1) //Position: 0xD597 / 54679
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_280(struct<17> Param0) //Position: 0xD5B3 / 54707
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

bool Function_281() //Position: 0xD60D / 54797
{
	return Global_47307;
}

bool Function_282() //Position: 0xD616 / 54806
{
	if (IS_EXITFLAG_SET())
	{
		Function_253(iLocal_1285);
		Function_249(StackVal, 4, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
		return 0;
	}
	if (Local_1273.f_40 != 4)
	{
		Function_664(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1273, iLocal_1285, iLocal_1286, &bLocal_1301, &bLocal_1299, &bLocal_1300);
	}
	else if (iLocal_1285 == 99 && iLocal_1286 < 12)
	{
		bLocal_1301 = true;
		bLocal_1299 = false;
		bLocal_1300 = false;
	}
	if (iLocal_1285 == 99 && iLocal_1285 == 100)
	{
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_253(iLocal_1285);
			Function_249(StackVal, 1, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
			return 1;
		}
		if (Function_663(2048))
		{
			Function_253(iLocal_1285);
			Function_249(StackVal, 3, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
			return 1;
		}
		if (iLocal_1286 < 3 && iLocal_1285 > 3)
		{
			if (Global_6646 || Global_6647)
			{
				Function_253(iLocal_1285);
				Function_249(StackVal, 2, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
				return 1;
			}
			if (IS_ACTOR_VALID(&iLocal_17 + 1008[02]))
			{
				if (GET_LAST_ATTACKER(&iLocal_17 + 1008[02]) == &Global_54076)
				{
					Function_253(iLocal_1285);
					Function_249(StackVal, 2, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(&iLocal_17 + 1008[12]))
			{
				if (GET_LAST_ATTACKER(&iLocal_17 + 1008[12]) == &Global_54076)
				{
					Function_253(iLocal_1285);
					Function_249(StackVal, 2, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(&iLocal_17 + 1008[22]))
			{
				if (GET_LAST_ATTACKER(&iLocal_17 + 1008[22]) == &Global_54076)
				{
					Function_253(iLocal_1285);
					Function_249(StackVal, 2, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
					return 1;
				}
			}
			if (IS_ACTOR_VALID(&iLocal_17 + 1008[32]))
			{
				if (GET_LAST_ATTACKER(&iLocal_17 + 1008[32]) == &Global_54076)
				{
					Function_253(iLocal_1285);
					Function_249(StackVal, 2, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
					return 1;
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_1313))
		{
			if (!IS_ACTOR_ALIVE(&bLocal_1313))
			{
				Function_248("Gun03_companion_dead");
				Function_253(iLocal_1285);
				Function_249(StackVal, 5, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
				return 1;
			}
			if (GET_LAST_ATTACKER(&bLocal_1313) == &Global_54076)
			{
				Function_248("Gun03_assault_gunslinger");
				Function_253(iLocal_1285);
				Function_249(StackVal, 5, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
				return 1;
			}
		}
		if ((iLocal_1285 != 3 || iLocal_1285 != 4) && iLocal_1286 < 3)
		{
			if (IS_ACTOR_VALID(&bLocal_1459))
			{
				if (!IS_ACTOR_ALIVE(&bLocal_1459))
				{
					Function_248("Gun03_mexgirl_dead");
					Function_253(iLocal_1285);
					Function_249(StackVal, 5, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
					return 1;
				}
			}
		}
		if (Function_643(&Local_1646, &uLocal_1592, &uLocal_1798, &uLocal_1394, uLocal_1577))
		{
			if (Function_634(&uLocal_1798))
			{
				Function_253(iLocal_1285);
				Function_249(StackVal, 5, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
				return 1;
			}
		}
	}
	switch (iLocal_1285)
	{
		case 0x00000063:
			Function_602();
			break;
		
		case 0x00000000:
			Function_584();
			break;
		
		case 0x00000001:
			Function_562();
			break;
		
		case 0x00000002:
			Function_485();
			break;
		
		case 0x00000003:
			Function_456();
			break;
		
		case 0x00000004:
			Function_358();
			break;
		
		case 0x00000065:
			Function_285();
			break;
		
		case 0x00000064:
			if (Function_284(&bLocal_1300))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_283(&iLocal_1285, &iLocal_1286, &iLocal_1287))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1299)
	{
		Function_257(&bLocal_1299, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1300 && iLocal_1285 == 100)
	{
		Function_253(iLocal_1285);
		Function_249(StackVal, 5, &bLocal_1300, &iLocal_1285, Function_255(iLocal_1285), Function_253(iLocal_1285), 0);
	}
	if (bLocal_1301)
	{
		Function_244(&bLocal_1301, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_283(var uParam0, var uParam1, int iParam2) //Position: 0xD9E4 / 55780
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

bool Function_284(int iParam0) //Position: 0xDA2D / 55853
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_285() //Position: 0xDA41 / 55873
{
	struct<9> Var0;
	
	switch (iLocal_1286)
	{
		case 0x00000000:
			Function_354(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			iLocal_1586 = 0;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_1318[4] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				DISABLE_CHILD_SECTOR("emt_caveDoor01x");
				ENABLE_CHILD_SECTOR("emt_caveDoor02x");
				iLocal_1317 = Global_46746[1];
				if (!Function_353(iLocal_1317))
				{
					Function_352(&Local_1273);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_239(&Global_54076, &iLocal_17 + 3080[0], 1, 1, 1);
				Function_239(&bLocal_1313, &iLocal_17 + 3080[2], 1, 1, 1);
				Function_242(&bLocal_1396);
				iLocal_1286 = 1;
			}
			else
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(iLocal_1317) || iLocal_1317 != 4294967295)) && Function_345())
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(&bLocal_1313))
			{
				Function_241(&iLocal_17 + 3080[8]);
				vVar0 = Function_241(&iLocal_17 + 3080[8]);
				bLocal_1313 = Function_337(5, 0, 1, vVar0.x, vVar0.y, vVar0.z, 0, 0, 0);
			}
			else if (!SQUAD_IS_VALID(&iLocal_17 + 1912))
			{
				Function_336();
			}
			else
			{
				Function_334(&iLocal_1812, 0, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1286 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_297("$/cutscene/GUN_03_END/GUN_03_END", &iLocal_1287, &Local_1273, &iLocal_1285, 65596, 65589, 65310, 62034, 61806, 61795, 0, 1, 1, 2, 2, 0, 1))
			{
				if (iLocal_1589)
				{
					if (IS_OBJECT_VALID(&Global_99148))
					{
						END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
						DESTROY_OBJECT(&Global_99148);
						CAMERA_RESET(0);
					}
					Function_296(&bLocal_1396, 8,1f);
				}
				else
				{
					Function_242(&bLocal_1396);
				}
				iLocal_1286 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_293(&bLocal_1396) > 7.0f)
			{
				if (iLocal_1809 == 0)
				{
					Function_292();
					if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&bLocal_1457)))
					{
						DESTROY_ACTOR(GET_MOST_RECENT_MOUNT(&bLocal_1457));
					}
					Function_291(&iLocal_17 + 1944);
					if (IS_ACTOR_VALID(&bLocal_1459))
					{
						DESTROY_ACTOR(&bLocal_1459);
					}
					else
					{
						iLocal_1809 = 1;
					}
				}
				else if (iLocal_1809 == 1)
				{
					if (!IS_ACTOR_VALID(&bLocal_1459))
					{
						Function_241(&iLocal_17 + 3080[8]);
						vVar2 = Function_241(&iLocal_17 + 3080[8]);
						bLocal_1459 = Function_337(8, 0, 1, vVar2.x, vVar2.y, vVar2.z, 0, 0, 0);
					}
					else if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1459, 1))
					{
						if (!IS_ACTOR_VALID(&bLocal_1457))
						{
							Function_288();
							bLocal_1457 = &iLocal_17 + 1920[02];
						}
						else if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1457, 1))
						{
							SET_ACTOR_FACTION(&bLocal_1457, 20);
							Function_239(&bLocal_1459, &iLocal_17 + 3080[8], 1, 1, 1);
							TASK_STAND_STILL(&bLocal_1459, -1.0f, 0, 0);
							Function_286(&bLocal_1457, &iLocal_17 + 3080[8], 1, 1, 1);
							TASK_STAND_STILL(&bLocal_1457, -1.0f, 0, 0);
							ACTOR_MOUNT_ACTOR(&bLocal_1313, &iLocal_17 + 1856[02]);
							Function_286(&bLocal_1313, &iLocal_17 + 3080[8], 1, 1, 1);
							iLocal_1809 = 2;
						}
					}
				}
				else if (iLocal_1809 == 2)
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1459, 1))
					{
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_1459, 0);
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1459, "fema_ride_passenger", 0);
						if (HAS_ANIM_SET_LOADED("fema_ride_passenger"))
						{
							Function_242(&bLocal_1396);
							iLocal_1809 = 3;
						}
					}
				}
				else if (iLocal_1809 == 3)
				{
					if (ACTOR_HAS_ANIM_SET(&bLocal_1459, "fema_ride_passenger"))
					{
						SET_MOUNTS_AS_PASSENGER(&bLocal_1459, 1);
						ACTOR_MOUNT_ACTOR(&bLocal_1459, GET_MOUNT(&bLocal_1457));
						MEMORY_PREFER_RIDING(&bLocal_1313, true);
						MEMORY_PREFER_RIDING(&bLocal_1457, true);
						MEMORY_PREFER_RIDING(&bLocal_1459, true);
						Function_242(&bLocal_1396);
						iLocal_1809 = 4;
					}
				}
				else if (iLocal_1809 == 4)
				{
					TASK_STAND_STILL(&bLocal_1459, -1.0f, 0, 0);
					Function_286(&bLocal_1457, &iLocal_17 + 3080[7], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_1457, -1.0f, 0, 0);
					Function_286(&bLocal_1313, &iLocal_17 + 3080[3], 1, 1, 1);
					iLocal_1809 = 5;
				}
				else if (iLocal_1809 == 5)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1457, 0);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1457, false);
					TASK_CLEAR(&bLocal_1457);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1457, &iLocal_17 + 4728, 3, 1, 0, 0, 0.0f);
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 3);
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 0);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, false);
					TASK_CLEAR(&bLocal_1313);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4728, 3, 1, 0, 0, 3.0f);
					iLocal_1809 = 6;
				}
			}
			else
			{
				if (IS_ACTOR_VALID(&bLocal_1457))
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&bLocal_1457)))
					{
						DESTROY_ACTOR(GET_MOUNT(&bLocal_1457));
					}
					DESTROY_ACTOR(&bLocal_1457);
				}
				if (Function_224(8))
				{
					Function_221(8, 1, 0, 1, 1);
				}
				if (Function_224(5))
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&bLocal_1313)))
					{
						DESTROY_ACTOR(GET_MOUNT(&bLocal_1313));
					}
					Function_221(5, 1, 0, 1, 1);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_242(&bLocal_1396);
				iLocal_1286 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_229();
				bLocal_1299 = true;
			}
			break;
	}
	return;
}

void Function_286(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDFB3 / 57267
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				Function_287(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_287(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xE0D3 / 57555
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

void Function_288() //Position: 0xE1A2 / 57762
{
	*(&iLocal_17 + 1944) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "nS5_Carlos"));
	*(&iLocal_17 + 1920[02]) = Function_289(StackVal, StackVal, &iLocal_17, "S5_aCarlos", 615, Function_54(), 976, Vector(-328f, 26,22432f, 3443,831f), Vector(0.0f, 221,9975f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1920[02], &iLocal_17 + 1944);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_17 + 1920[02], false);
	SET_ACTOR_FACTION(&iLocal_17 + 1920[02], 1);
	return;
}

int Function_289(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0xE22C / 57900
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_290(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_290(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_290(int iParam0) //Position: 0xE364 / 58212
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_291(bool bParam0) //Position: 0xE37B / 58235
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				uVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				uVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_292() //Position: 0xE40B / 58379
{
	if (VMAG((&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

float Function_293(vector3 vParam0) //Position: 0xE53D / 58685
{
	if (Function_295(&vParam0))
	{
		if (Function_294(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_294(int iParam0) //Position: 0xE60A / 58890
{
	return Function_14(iParam0, 2);
}

bool Function_295(bool bParam0) //Position: 0xE618 / 58904
{
	return Function_14(bParam0, 1);
}

void Function_296(bool bParam0, float fParam1) //Position: 0xE626 / 58918
{
	if (!Function_295(&bParam0))
	{
		Function_243(&bParam0, fParam1);
	}
	return;
}

bool Function_297(bool bParam0, int iParam1, struct<41> Param2) //Position: 0xE63E / 58942
{
	if (!&bParam15)
	{
		Function_307(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_306(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&bParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&bParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_242(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0) || !Function_305())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_304(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_242(&iParam1 + 4);
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
					Function_304(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_293(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_293(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_302(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_304(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_242(&iParam1 + 4);
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
						Function_301(1.0f);
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
						Function_299();
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
					Function_298(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_306(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_298(int iParam0, bool bParam1) //Position: 0xECA0 / 60576
{
	iParam0 = &iParam0;
	HUD_ENABLE(&iParam0);
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
		Function_205();
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

void Function_299() //Position: 0xED6F / 60783
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_300();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_300() //Position: 0xEDB4 / 60852
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_301(bool bParam0) //Position: 0xEDC6 / 60870
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

void Function_302(var uParam0, int iParam1) //Position: 0xEDE3 / 60899
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_303(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_303(int iParam0) //Position: 0xEE75 / 61045
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

int Function_304(bool bParam0) //Position: 0xEEA6 / 61094
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

bool Function_305() //Position: 0xEF69 / 61289
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

bool Function_306(struct<37> Param0) //Position: 0xEFA6 / 61350
{
	return Param0.f_36;
}

void Function_307(var uParam0, int iParam1) //Position: 0xEFB1 / 61361
{
	Function_308(&uParam0, &iParam1, 0);
	return;
}

void Function_308(var uParam0, bool bParam1, bool bParam2) //Position: 0xEFC1 / 61377
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
			Function_309(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
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
							Function_309(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_309(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xF139 / 61753
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

int Function_310() //Position: 0xF163 / 61795
{
	iLocal_1589 = 1;
	return 1;
}

int Function_311() //Position: 0xF16E / 61806
{
	Function_312(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_312(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xF183 / 61827
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
		uVar0 = Function_50();
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
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_258();
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
	Function_298(&iParam9, &iParam10);
}

int Function_313() //Position: 0xF252 / 62034
{
	if (iLocal_1285 == 0)
	{
		if (iLocal_1286 == 104)
		{
			SET_ACTOR_IN_VEHICLE(&bLocal_1313, Function_323(Global_53579), 11);
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			else if (IS_OBJECT_VALID(&iLocal_1287 + 24))
			{
				DESTROY_OBJECT(&iLocal_1287 + 24);
			}
			Function_321(&uLocal_1271, 43.0f, 1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0, 0, 0, 0);
			Function_320(StackVal, StackVal, StackVal, StackVal, Vector(-2692,45f, 35,114f, 4202,831f), Vector(0,102f, -0,175f, 0,979f), Vector(-2692,486f, 38,602f, 4202,509f), Vector(0,822f, -0,091f, 0,562f), 5,1f, 0, 1, 1, 6);
			TRAIN_SET_ENGINE_ENABLED(Global_53579, 1);
			TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
			TRAIN_SET_TARGET_SPEED(Global_53579, 10.0f);
		}
		else
		{
			Function_239(&bLocal_1313, &iLocal_17 + 3176[5], 1, 1, 1);
			TASK_CLEAR(&bLocal_1313);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1313, "gun03_train_wave", 1);
			AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, false);
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1313, false);
			bLocal_1474 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4776, 1, 1, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1474);
			TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			ACTOR_POP_NEXT_GAIT(&bLocal_1313, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
			ENABLE_CHILD_SECTOR("chu_corral01props01x");
			ENABLE_CHILD_SECTOR("chu_trainstation01Props01x");
		}
	}
	else if (iLocal_1285 == 1)
	{
		if (iLocal_1286 == 3)
		{
			TASK_CLEAR(&bLocal_1313);
			Function_239(&bLocal_1313, &iLocal_17 + 3344[20], 1, 1, 1);
			TASK_CLEAR(&Global_54076);
			Function_239(&Global_54076, &iLocal_17 + 3344[7], 1, 1, 1);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4784, 1, 1, 0, 1, false);
			TASK_MOUNT(false, &iLocal_17 + 976[02], 0, 0, 1, 2147483647);
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 3176[1], 1, 0, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_PRIORITY_SET(&bLocal_1313, true);
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 0);
		}
	}
	else if (iLocal_1285 == 2)
	{
		if (Function_353(Global_46746[1]))
		{
			OPEN_DOOR_DIRECTION(Function_318("elmatadero", "slaughterhouse", 1), 1);
			OPEN_DOOR_DIRECTION(Function_318("elmatadero", "slaughterhouse", 2), 0);
		}
		SET_ACTOR_SPEED(&Global_54076, 0.0f);
		Function_239(&Global_54076, &iLocal_17 + 3528[4], 1, 1, 1);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		Function_239(&bLocal_1313, &iLocal_17 + 3528[21], 1, 1, 1);
		Function_239(&bLocal_1457, &iLocal_17 + 3528[5], 1, 1, 1);
		TASK_CLEAR(&bLocal_1457);
		bLocal_1471 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4752, 1, 0, 0, 1, false);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1471);
		TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
		TASK_PRIORITY_SET(&bLocal_1457, true);
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1457, 1);
		TASK_CLEAR(&bLocal_1313);
		bLocal_1471 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4712, 1, 0, 0, 1, false);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
		TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 0);
		ENABLE_CHILD_SECTOR("emt_barn01props01x");
		ENABLE_CHILD_SECTOR("emt_barn01x");
		ENABLE_CHILD_SECTOR("emt_residence01props01x");
		ENABLE_CHILD_SECTOR("emt_residence01x");
		ENABLE_CHILD_SECTOR("emt_shack01props01x");
		ENABLE_CHILD_SECTOR("emt_shack01x");
	}
	else if (iLocal_1285 == 3)
	{
		Function_316(&bLocal_1459, &bLocal_1313);
		DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
		DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
		if (IS_OBJECT_VALID(&uLocal_1509))
		{
			Function_161(&uLocal_1509, 1);
			OPEN_DOOR_DIRECTION_FAST(&uLocal_1509, 1);
			SET_DOOR_AUTO_CLOSE(&uLocal_1509, 0);
			HIDE_PHYSINST(&uLocal_1509);
		}
		Function_239(&Global_54076, &iLocal_17 + 3776[19], 1, 1, 1);
		Function_239(&bLocal_1313, &iLocal_17 + 3776[12], 1, 1, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
		STOP_FORCE_LOOK_AT_COORD(&bLocal_1313);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
		TASK_CLEAR(&bLocal_1313);
		Function_241(&iLocal_17 + 4312[4]);
		Local_1448 = Function_241(&iLocal_17 + 4312[4]);
		bLocal_1471 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_OBJECT(0, &iLocal_17 + 4312[2], 2, 0, 1);
		TASK_FACE_COORD(0, &Local_1448, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
		TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
		TASK_PRIORITY_SET(&bLocal_1313, true);
		ACTOR_POP_NEXT_GAIT(&bLocal_1459, 0, 0);
		ACTOR_POP_NEXT_GAIT(&bLocal_1313, 2, 0);
		Function_225(5, 1, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1313, 0);
		SET_ACTOR_PROOF(&bLocal_1313, 4294967295);
		SET_CRIPPLE_ENABLE(&bLocal_1313, 0);
		SET_ACTOR_INVULNERABILITY(&bLocal_1313, 1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 1);
		MEMORY_ALLOW_SHOOTING(&bLocal_1313, false);
		ACTOR_START_FORCE_HOLSTER(&bLocal_1313, 1, 0);
		MEMORY_PREFER_WALKING(&bLocal_1313, 1);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		if (IS_ACTOR_VALID(&iLocal_17 + 2272[02]))
		{
			DESTROY_ACTOR(&iLocal_17 + 2272[02]);
		}
		iLocal_1528 = 0;
	}
	else if (iLocal_1285 == 101)
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
		Function_239(&Global_54076, &iLocal_17 + 3080[1], 1, 1, 1);
		if (UNK_0xCDA6BB6C())
		{
			CANCEL_CUTSCENE_TUNER_PLAYBACK();
		}
		else if (IS_OBJECT_VALID(&iLocal_1287 + 24))
		{
			DESTROY_OBJECT(&iLocal_1287 + 24);
		}
		Function_321(&uLocal_1271, 43.0f, 1, 0.0f, 7.0f, 1, 7, 0, 0, 0, 0, 0, 0, 0);
		Function_314(StackVal, StackVal, Vector(-227,538f, 32,148f, 3606,051f), Vector(-0,834f, -0,063f, -0,548f), 8.0f, 0, 1);
	}
	return 1;
}

void Function_314(struct<2> Param0, struct<2> Param2, int iParam4, var uParam5, var uParam6) //Position: 0xF862 / 63586
{
	Function_315(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (&iParam4 >= 0.0f)
	{
		iParam4 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &uParam6);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, &iParam4);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam5))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam5, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_315(int iParam0) //Position: 0xF97B / 63867
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	return;
}

void Function_316(bool bParam0, bool bParam1) //Position: 0xF98E / 63886
{
	var uVar0;
	var uVar2;
	
	Function_317(&bParam0);
	uVar0 = Function_317(&bParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,2f, 1);
	GRINGO_UPDATE_OBJECT_REF(&uVar2, "GlobalSettings", "Owner", &bParam1);
	GRINGO_UPDATE_INT(&uVar2, "GlobalSettings", "CurrentState", 1);
	MAKE_ACTOR_READY_FOR_ACTION(&bParam1, 1);
	SET_ANIM_SET_FOR_ACTOR(&bParam1, "gent_hog", 0);
	SET_ACTION_NODE_FOR_ACTOR(&bParam1, "default_character_main/lassoed/carry_hogtied/carry/carrying/carrying_stn");
	SET_LINKED_ANIM_TARGET(&bParam1, &bParam0);
	SET_INTENDED_HOGTIE_MASTER(GET_HOGTIED_MASTER(&bParam0), &bParam1);
	ATTACH_HOGTIE_ACTOR_TO_ACTOR(&bParam0, &bParam1);
	SET_ACTOR_GRINGO_RESTRICTION(&bParam1, &uVar2);
	return;
}

struct<8> Function_317(int iParam0) //Position: 0xFAA9 / 64169
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_318(var uParam0, bool bParam1, int iParam2) //Position: 0xFABB / 64187
{
	return Function_319(Global_43789, &uParam0, &bParam1, iParam2);
}

int Function_319(bool bParam0, char* cParam1, bool bParam3) //Position: 0xFACF / 64207
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_85(bParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[bParam09] + 56))
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
	memcpy(&cVar2, &Global_44085[bParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[bParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

void Function_320(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xFB74 / 64372
{
	Function_315(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	Function_315(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (fParam8 >= 0.0f)
	{
		fParam8 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &iParam10);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param4);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param6, &iParam11);
	Global_99148.f_8 = StackVal + 1;
	switch (&iParam12)
	{
		case 0x00000002:
		case 0x00000003:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000004:
		case 0x00000005:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000006:
		case 0x00000007:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000000:
		case 0x00000001:
			CUTSCENEOBJECT_ADD_TRANSITION_LERP(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 1);
	Global_99148.f_12 = 1;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam9))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &iParam9, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_321(var uParam0, float fParam1, bool bParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, float fParam12, int iParam13) //Position: 0xFD36 / 64822
{
	Function_322(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &fParam3;
	Global_99148.f_20 = &fParam4;
	Global_99148.f_24 = &iParam5;
	Global_99148.f_28 = &iParam6;
	Global_99148.f_32 = &iParam7;
	Global_99148.f_36 = &iParam8;
	Global_99148.f_40 = &iParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &iParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &fParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &fParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &fParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_322(bool bParam0, bool bParam1) //Position: 0xFE3F / 65087
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

int Function_323(int iParam0) //Position: 0xFE95 / 65173
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 4294967295)
	{
		return "";
	}
	iVar0 = 1;
	iVar1 = TRAIN_GET_NUM_CARS(iParam0);
	if (iVar1 > 1)
	{
		iVar0 = 1;
		while (iVar0 < (iVar1 - 1))
		{
			iVar2 = TRAIN_GET_CAR(iParam0, iVar0);
			if (IS_OBJECT_VALID(&iVar2))
			{
				if (Function_324(&iVar2) != 1165 || Function_324(&iVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
	return "";
}

int Function_324(int iParam0) //Position: 0xFF01 / 65281
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

int Function_325() //Position: 0xFF1E / 65310
{
	if (iLocal_1285 == 0)
	{
		if (iLocal_1286 == 104)
		{
		}
	}
	else if (iLocal_1285 == 1)
	{
		if (iLocal_1286 == 3)
		{
			if (!iLocal_1586)
			{
				Function_326(&iLocal_17 + 3176[9]);
				Local_1451 = Function_326(&iLocal_17 + 3176[9]);
				UNK_0x44986367(StackVal, &Local_1448);
				Function_241(&iLocal_17 + 3176[9]);
				Local_1451 = Function_241(&iLocal_17 + 3176[9]);
				TRAIN_SET_POSITION_DIRECTION_PRECISELY(Global_53579, &Local_1451, &Local_1448, 14);
				TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
				if (IS_OBJECT_VALID(&Global_99148))
				{
					DESTROY_OBJECT(&Global_99148);
				}
				iLocal_1586 = 1;
			}
		}
	}
	else if (iLocal_1285 == 101)
	{
		if (!iLocal_1586)
		{
			Function_239(GET_MOST_RECENT_MOUNT(&Global_54076), &iLocal_17 + 3080[8], 1, 1, 1);
			TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&Global_54076), -1.0f, 0, 0);
			MEMORY_PREFER_RIDING(&bLocal_1313, true);
			Function_239(GET_MOST_RECENT_MOUNT(&bLocal_1313), &iLocal_17 + 3080[9], 1, 1, 1);
			TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&bLocal_1313), -1.0f, 0, 0);
			iLocal_1586 = 1;
		}
	}
	return 1;
}

struct<8> Function_326(var uParam0) //Position: 0x1000C / 65548
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&uParam0, &Var0);
	return StackVal, Var0;
}

int Function_327() //Position: 0x10035 / 65589
{
	return 1;
}

int Function_328() //Position: 0x1003C / 65596
{
	var uVar0;
	
	Function_331(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2,802597E-45f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_329(StackVal, &Global_10996, Global_54078, &uVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_329(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0x100A2 / 65698
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &uParam5;
	Var2.f_4 = &uParam6;
	Var2.f_8 = &uParam7;
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
				Function_330(&uVar1, &uParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
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

void Function_330(var uParam0, float fParam1) //Position: 0x10342 / 66370
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

void Function_331(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x103C4 / 66500
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_258();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_50();
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
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_317(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_317(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
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
	if (uParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_333()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_333()));
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
	if (Function_332(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_332(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

bool Function_332(int iParam0) //Position: 0x10676 / 67190
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_333() //Position: 0x10692 / 67218
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

void Function_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10720 / 67360
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_335(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_335(int iParam0) //Position: 0x1074A / 67402
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

void Function_336() //Position: 0x10C9F / 68767
{
	(&iLocal_17 + 1912) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "HorsesStageFour"));
	*(&iLocal_17 + 1856[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionHorse04", 976, Vector(-365,4985f, 16,93851f, 3941,273f), Vector(0.0f, 3.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1856[02], &iLocal_17 + 1912);
	ACCESSORIZE_HORSE(&iLocal_17 + 1856[02], 3);
	TASK_STAND_STILL(&iLocal_17 + 1856[02], -1.0f, 0, 0);
	*(&iLocal_17 + 1856[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SpareHorse01", 977, Vector(-372,6984f, 15,98389f, 3945,207f), Vector(0.0f, 3.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1856[12], &iLocal_17 + 1912);
	ACCESSORIZE_HORSE(&iLocal_17 + 1856[12], 3);
	TASK_STAND_STILL(&iLocal_17 + 1856[12], -1.0f, 0, 0);
	*(&iLocal_17 + 1856[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SpareHorse03", 976, Vector(-368f, 16,81926f, 3948.0f), Vector(0.0f, 3.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1856[22], &iLocal_17 + 1912);
	ACCESSORIZE_HORSE(&iLocal_17 + 1856[22], 3);
	TASK_STAND_STILL(&iLocal_17 + 1856[22], -1.0f, 0, 0);
	return;
}

var Function_337(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x10DF6 / 69110
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
		if (!Function_166(&(Global_43791[Global_46722[3]]), 4))
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
		Function_225(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_344(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_340(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &iParam3;
			Var3.f_4 = &iParam4;
			Var3.f_8 = &iParam5;
			if (Function_74(StackVal, Var3))
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
		Function_339(&bVar1, 0, 0, 0, 0);
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
		Function_338(&bVar1, 0);
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

void Function_338(var uParam0, bool bParam1) //Position: 0x11336 / 70454
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_339(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x11358 / 70488
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

var Function_340(int iParam0, int iParam1) //Position: 0x113B9 / 70585
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_290(iParam0))
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
						Function_341(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_341(var uParam0, int iParam1) //Position: 0x11447 / 70727
{
	Function_343(&uParam0);
	Function_342(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_342(int iParam0) //Position: 0x11473 / 70771
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_343(int iParam0) //Position: 0x11499 / 70809
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

var Function_344(int iParam0, var uParam1) //Position: 0x1156F / 71023
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (GET_ACTOR_ENUM(&uVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&uVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &uVar2;
				}
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

int Function_345() //Position: 0x11615 / 71189
{
	Function_351(&iLocal_17 + 928, 615, 2, 0);
	if (Function_346(&iLocal_17 + 928))
	{
		return 1;
	}
	return 0;
}

bool Function_346(struct<2>[] Param0) //Position: 0x11637 / 71223
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_350();
	iVar1 = 0;
	if (!Function_188(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_349(&(Param0[iVar02]), 8);
		}
		else if (Function_348())
		{
			iVar1 = 1;
			Function_349(&(Param0[iVar02]), 8);
		}
		Function_349(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_188(&(Param0[iVar02]), 4))
		{
			if (!Function_188(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_188(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_188(&(Param0[02]), 8) || iVar1));
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
				Function_349(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_188(&(Param0[iVar02]), 4))
		{
			if (!Function_188(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
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
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_349(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_349(&(Param0[iVar02]), 2);
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
	Function_347();
	return 1;
}

void Function_347() //Position: 0x119F9 / 72185
{
	if (!Function_332(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_348() //Position: 0x11A39 / 72249
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

void Function_349(struct<13> Param0) //Position: 0x11A67 / 72295
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_350() //Position: 0x11A7A / 72314
{
	if (!Function_332(128))
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

var Function_351(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11ABC / 72380
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_349(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_349(&(Param0[iVar02]), 8);
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

void Function_352(int iParam0) //Position: 0x11B98 / 72600
{
	if (!Function_306(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_195(1, 0, 1);
		}
	}
	return;
}

bool Function_353(int iParam0) //Position: 0x11BB4 / 72628
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

void Function_354(bool bParam0) //Position: 0x11BD0 / 72656
{
	Function_355(0, 0x40400000);
	Function_212();
	Function_211();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_355(float fParam0, float fParam1) //Position: 0x11C06 / 72710
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
	Function_357();
	Function_356();
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

void Function_356() //Position: 0x11D17 / 72983
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_357() //Position: 0x11D4B / 73035
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

void Function_358() //Position: 0x11E51 / 73297
{
	if (iLocal_1286 < 5 && iLocal_1286 > 105)
	{
		if (iLocal_1286 >= 8)
		{
			Function_448(&bLocal_1396, 110.0f, 180.0f, &bLocal_1313, "Gunslinger_return", "Gunslinger_abandoned", &bLocal_1300, 0, 0, 0, 325, 1);
		}
		if (IS_ACTOR_VALID(&iLocal_17 + 1920[02]))
		{
			Function_241(&iLocal_17 + 3080[0]);
			Function_443(StackVal, "$/cutscene/GUN_03_END/GUN_03_END", &iLocal_1312, Function_241(&iLocal_17 + 3080[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (GET_LAST_ATTACKER(&iLocal_17 + 1920[02]) == &Global_54076)
			{
				Function_248("Gun03_assault_insideman");
				bLocal_1300 = true;
			}
			else if (!IS_ACTOR_ALIVE(&iLocal_17 + 1920[02]))
			{
				Function_248("Gun03_assault_insideman");
				bLocal_1300 = true;
			}
			if (IS_ACTOR_VALID(&bLocal_1467))
			{
				if (GET_LAST_ATTACKER(&bLocal_1467) == &Global_54076)
				{
					Function_248("Gun03_killed_ally_horse");
					bLocal_1300 = true;
				}
				else if (!IS_ACTOR_ALIVE(&bLocal_1467))
				{
					Function_248("Gun03_killed_ally_horse");
					bLocal_1300 = true;
				}
			}
		}
	}
	switch (iLocal_1286)
	{
		case 0x00000000:
			Function_354(0);
			iLocal_1585 = 0;
			Function_442(&bLocal_1444);
			Function_442(&bLocal_1420);
			Function_442(&bLocal_1412);
			Function_442(&bLocal_1416);
			Function_242(&bLocal_1396);
			SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1313, &iLocal_17 + 2608[13], 4, 1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_1318[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				DISABLE_CHILD_SECTOR("emt_caveDoor01x");
				ENABLE_CHILD_SECTOR("emt_caveDoor02x");
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_1317 = Global_46746[1];
				if (!Function_353(iLocal_1317))
				{
					Function_352(&Local_1273);
				}
				Function_239(&Global_54076, &iLocal_17 + 3960[2], 1, 1, 1);
				Function_239(&bLocal_1313, &iLocal_17 + 3960[3], 0, 1, 1);
				Function_441();
				iLocal_1286 = 1;
			}
			else
			{
				iLocal_1286 = 1;
			}
			break;
		
		case 0x00000001:
			if (iLocal_1318[3] == 0)
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_353(iLocal_1317) || iLocal_1317 != 4294967295)) && Function_441())
				{
					if (Function_439())
					{
						Function_436();
						Function_242(&bLocal_1396);
						iLocal_1286 = 2;
					}
				}
			}
			else if (Function_441())
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000002:
			Function_254(iLocal_1285);
			Function_428(StackVal, Function_254(iLocal_1285), iLocal_1285, Global_46746[1], Function_256(iLocal_1285), 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
			Function_242(&bLocal_1396);
			iLocal_1286 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				Function_427();
				CLEAR_ACTOR_MAX_SPEED(&bLocal_1313);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 1);
				TASK_CLEAR(&bLocal_1313);
				MEMORY_PREFER_RIDING(&bLocal_1313, false);
				Function_426(&bLocal_1313, &iLocal_17 + 1856[02], 0, 1);
				Function_242(&bLocal_1396);
				iLocal_1286 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1396) <= 5.0f)
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					Function_425("Gun03_obj05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				Function_423();
				Function_421();
				Function_416();
				Function_242(&bLocal_1396);
				iLocal_1286 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_TASK_STATUS(&bLocal_1313, 0) != 0 && GET_TASK_STATUS(&bLocal_1313, 11) == 1)
			{
				DECOR_SET_BOOL(&bLocal_1459, "DisablePlayerCarry", 1);
				TASK_MOUNT(&bLocal_1313, &iLocal_17 + 1856[02], 0, 1, 2, 2147483647);
			}
			else if (GET_TASK_STATUS(&bLocal_1313, 0) != 4 || (Function_293(&bLocal_1396) <= 25.0f && !iLocal_1572))
			{
				FREE_FROM_HOGTIE(&bLocal_1459);
				ATTACH_HOGTIE_ACTOR_TO_ACTOR(&bLocal_1459, &iLocal_17 + 1856[02]);
				ACTOR_RESET_ANIMS(&bLocal_1313, 1);
				AI_QUICK_EXIT_GRINGO(&bLocal_1313, 1);
				iLocal_1572 = 1;
			}
			if (iLocal_1572)
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1313, 1))
				{
					TASK_CLEAR(&bLocal_1313);
					ACTOR_MOUNT_ACTOR(&bLocal_1313, &iLocal_17 + 1856[02]);
					iLocal_1572 = 0;
				}
			}
			if (IS_ACTOR_RIDING(&Global_54076) || (IS_ACTOR_RIDING(&bLocal_1313) && Function_415(&bLocal_1313, &Global_54076) > 8.0f))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_242(&bLocal_1396);
				iLocal_1286 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_359())
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_293(&bLocal_1396) <= 0,5f)
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Function_230();
				Function_345();
				iLocal_1318[4] = 1;
				Function_242(&bLocal_1396);
				iLocal_1285 = 101;
				iLocal_1286 = 0;
			}
			break;
	}
	return;
}

bool Function_359() //Position: 0x12398 / 74648
{
	if (iLocal_1813 < 2 && iLocal_1813 >= 3)
	{
		Function_411();
		if (iLocal_1813 == 3)
		{
			Function_396(4);
			Function_392();
		}
	}
	switch (iLocal_1813)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&bLocal_1313, 0) != 0 && GET_TASK_STATUS(&bLocal_1313, 11) == 1)
			{
				DECOR_SET_BOOL(&bLocal_1459, "DisablePlayerCarry", 1);
				TASK_MOUNT(&bLocal_1313, &iLocal_17 + 1856[02], 0, 1, 2, 2147483647);
			}
			else if (GET_TASK_STATUS(&bLocal_1313, 0) == 4)
			{
				FREE_FROM_HOGTIE(&bLocal_1459);
				ATTACH_HOGTIE_ACTOR_TO_ACTOR(&bLocal_1459, &iLocal_17 + 1856[02]);
				ACTOR_RESET_ANIMS(&bLocal_1313, 1);
				AI_QUICK_EXIT_GRINGO(&bLocal_1313, 1);
				DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
				DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
				iLocal_1572 = 1;
			}
			if (iLocal_1572)
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1313, 1))
				{
					TASK_CLEAR(&bLocal_1313);
					TASK_MOUNT(&bLocal_1313, &iLocal_17 + 1856[02], 0, 1, 2, 2147483647);
					iLocal_1572 = 0;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) || (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313) && Function_415(&bLocal_1313, &Global_54076) > 8.0f))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_425("Gun03_obj05b", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_222(&iLocal_1315);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1313)))
				{
					Function_225(5, 1, 1);
				}
				Function_242(&bLocal_1396);
				iLocal_1813 = 1;
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&bLocal_1313, 0) != 0 && GET_TASK_STATUS(&bLocal_1313, 11) == 1)
			{
				DECOR_SET_BOOL(&bLocal_1459, "DisablePlayerCarry", 1);
				TASK_MOUNT(&bLocal_1313, &iLocal_17 + 1856[02], 0, 1, 2, 2147483647);
			}
			else if (GET_TASK_STATUS(&bLocal_1313, 0) == 4)
			{
				FREE_FROM_HOGTIE(&bLocal_1459);
				ATTACH_HOGTIE_ACTOR_TO_ACTOR(&bLocal_1459, &iLocal_17 + 1856[02]);
				ACTOR_RESET_ANIMS(&bLocal_1313, 1);
				AI_QUICK_EXIT_GRINGO(&bLocal_1313, 1);
				DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
				DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
				iLocal_1572 = 1;
			}
			if (iLocal_1572)
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1313, 1))
				{
					TASK_CLEAR(&bLocal_1313);
					TASK_MOUNT(&bLocal_1313, &iLocal_17 + 1856[02], 0, 1, 2, 2147483647);
					iLocal_1572 = 0;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313))
			{
				ACTOR_END_FORCE_HOLSTER(&bLocal_1313);
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
				SET_ACTOR_INVULNERABILITY(&iLocal_17 + 1856[02], 1);
				SET_ACTOR_PROOF(&iLocal_17 + 1856[02], 4294967295);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1313, true);
				TASK_CLEAR(&bLocal_1313);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4736, 5, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 2);
				SET_ACTOR_INVULNERABILITY(GET_MOUNT(&bLocal_1313), 1);
				SET_ALLOW_JACK(GET_MOUNT(&bLocal_1313), 0);
				SET_ACTORS_HORSE(&bLocal_1313, GET_MOUNT(&bLocal_1313));
				DECOR_SET_BOOL(GET_MOUNT(&bLocal_1313), "bNoInjuryEjection", 1);
				MEMORY_PREFER_RIDING(&bLocal_1313, true);
				GET_POSITION(&bLocal_1313, &Local_1519);
				Function_391();
				iLocal_1811 = 0;
				Function_242(&bLocal_1396);
				iLocal_1813 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2824[3]) || IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2824[3]))
			{
				Function_386(&iLocal_17 + 2168, &Global_54076, 1);
				Function_386(&iLocal_17 + 2088, &Global_54076, 1);
				Function_385(&iLocal_17 + 2088, &bLocal_1313, 1);
				Function_384(&iLocal_17 + 2088, 150.0f);
				Function_334(&iLocal_1812, 41, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1412);
				Function_242(&bLocal_1396);
				iLocal_1813 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_383(&iLocal_17 + 2232, 0, 1, 1, 1, 0))
			{
				Function_382();
				Function_242(&bLocal_1416);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 2);
				Function_334(&iLocal_1812, 6, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1813 = 4;
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2824[9]) && !iLocal_1808)
			{
				Function_386(&iLocal_17 + 2168, &Global_54076, 1);
				Function_385(&iLocal_17 + 2168, &Global_54076, 1);
				Function_384(&iLocal_17 + 2168, 150.0f);
				iLocal_1808 = 1;
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2824[8]) && !iLocal_1807)
			{
				Function_386(&iLocal_17 + 2232, &Global_54076, 1);
				Function_385(&iLocal_17 + 2232, &bLocal_1313, 1);
				Function_384(&iLocal_17 + 2232, 150.0f);
				iLocal_1807 = 1;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2824[7]) && !iLocal_1571)
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 1);
				iLocal_1571 = 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2824[7]) && iLocal_1571)
			{
				Function_381();
				Function_242(&bLocal_1396);
				iLocal_1813 = 5;
			}
			break;
		
		case 0x00000005:
			Function_242(&bLocal_1396);
			iLocal_1813 = 6;
			break;
		
		case 0x00000006:
			if (Function_293(&bLocal_1396) <= 7.0f)
			{
				Function_380();
				Function_242(&bLocal_1396);
				iLocal_1813 = 7;
			}
			break;
		
		case 0x00000007:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_242(&bLocal_1396);
			iLocal_1813 = 11;
			break;
		
		case 0x0000000B:
			if (Function_293(&bLocal_1396) < 5.0f)
			{
				if (Function_371())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_425("Gun03_obj05c", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_242(&bLocal_1396);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1313, "aiming_point", 0);
					iLocal_1813 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_293(&bLocal_1396) < 7.0f)
			{
				if (Function_370(&bLocal_1313, &bLocal_1457))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_369();
					Function_242(&bLocal_1396);
					iLocal_1813 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_293(&bLocal_1396) < 5.0f)
			{
				if (!iLocal_1576)
				{
					AI_GOAL_AIM_CLEAR(&bLocal_1313);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
					TASK_CLEAR(&bLocal_1313);
					iLocal_1576 = 1;
				}
				if ((IS_ACTOR_IN_VOLUME(&bLocal_1457, &iLocal_17 + 2824[6]) || Function_366(&bLocal_1457, &iLocal_17 + 2824[6], 8.0f)) || Function_363(&bLocal_1457, &bLocal_1313, 8.0f))
				{
					Function_360();
					Function_242(&bLocal_1396);
					iLocal_1813 = 15;
				}
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1396) <= 4.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				TASK_CLEAR(&bLocal_1313);
				MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1313);
				bLocal_1474 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(0, 1);
				TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 4616[2], 4.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1474);
				TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
				TASK_CLEAR(&bLocal_1457);
				bLocal_1474 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 4616[2], 4.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1474);
				TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_CLEAR(&Global_54076);
				bLocal_1474 = TASK_SEQUENCE_OPEN();
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					TASK_DISMOUNT(0, 1);
				}
				TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 4616[2], 4.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_1474);
				TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_222(&bLocal_1457);
				Function_242(&bLocal_1396);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_360() //Position: 0x12AEE / 76526
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_CarlosRidesUp", "Gun03_CarlosRidesUp", 0, 1, 1, 0, 1);
		Function_361(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_361(int iParam0) //Position: 0x12B3E / 76606
{
	Function_362(0, &Global_54076, iParam0, 0);
	Function_362(1, &bLocal_1313, iParam0, 0);
	Function_362(4, &bLocal_1457, iParam0, 0);
	Function_362(5, &iLocal_17 + 1152[02], iParam0, 0);
	Function_362(6, &iLocal_17 + 1152[12], iParam0, 0);
	Function_362(11, &iLocal_17 + 1264[12], iParam0, 0);
	Function_362(12, &iLocal_17 + 2096[32], iParam0, 0);
	Function_362(13, &iLocal_17 + 2016[12], iParam0, 0);
	return;
}

void Function_362(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x12BB8 / 76728
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

int Function_363(var uParam0, var uParam1, float fParam2) //Position: 0x12BE0 / 76768
{
	float fVar0;
	
	fVar0 = Function_364(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_364(var uParam0, int iParam1) //Position: 0x12BFF / 76799
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_365(&uVar0, &uVar2);
	return iVar4;
}

var Function_365(struct<2> Param0) //Position: 0x12C20 / 76832
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_366(int iParam0, var uParam1, float fParam2) //Position: 0x12C3F / 76863
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_368(&uParam1);
		Function_367(&iParam0);
		if (VDIST(Function_368(&uParam1), Function_367(&iParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_367(int iParam0) //Position: 0x12CCC / 77004
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_368(var uParam0) //Position: 0x12D38 / 77112
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_369() //Position: 0x12D4A / 77130
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SpottsCarlosArrive", "Gun03_SpottsCarlosArrive", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_370(int iParam0, int iParam1) //Position: 0x12DA3 / 77219
{
	if (!ACTOR_HAS_ANIM_SET(&iParam0, "aiming_point"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(&iParam0, "aiming_point", 0);
	}
	else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "aiming_point"))
	{
		SET_ACTION_NODE_FOR_ACTOR(&iParam0, "aiming_point");
		STOP_FORCE_LOOK_AT_COORD(&iParam0);
		AI_GOAL_AIM_AT_OBJECT(&iParam0, &iParam1, 0);
		SET_AUTO_CONVERSATION_LOOK(&iParam0, 0);
		return 1;
	}
	return 0;
}

bool Function_371() //Position: 0x12E2C / 77356
{
	if (!IS_ACTOR_VALID(&iLocal_17 + 1920[02]))
	{
		Function_288();
		bLocal_1457 = &iLocal_17 + 1920[02];
	}
	else
	{
		bLocal_1467 = GET_MOUNT(&bLocal_1457);
		Function_373(&(Local_1646[315]), &bLocal_1457, "Carlos", 0, 0x5f5e100, 1);
		if (!Function_372(&iLocal_17 + 3960[6], 0x3f800000, 0x42960000, 1, 1, 0))
		{
			Function_286(&bLocal_1457, &iLocal_17 + 3960[6], 1, 1, 1);
			bLocal_1474 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4744, 2, 0, 0, 1, false);
			TASK_FACE_ACTOR(0, &bLocal_1459, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1474);
			TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
			TASK_PRIORITY_SET(&bLocal_1457, true);
			SET_ACTOR_FACTION(&bLocal_1457, 20);
			return 1;
		}
		Function_286(&bLocal_1457, &iLocal_17 + 3960[5], 1, 1, 1);
		bLocal_1474 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4736, 2, 0, 0, 1, false);
		TASK_FACE_ACTOR(0, &bLocal_1459, 0, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1474);
		TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
		TASK_PRIORITY_SET(&bLocal_1457, true);
		SET_ACTOR_FACTION(&bLocal_1457, 20);
		return 1;
	}
	return 0;
}

bool Function_372(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x12F67 / 77671
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

int Function_373(struct<69> Param0) //Position: 0x12F87 / 77703
{
	if (!Function_379(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_378(&Param0, &bParam2))
	{
		return 0;
	}
	Function_377(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_374(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_374(var uParam0, int iParam1, int iParam2) //Position: 0x12FCD / 77773
{
	if (iParam1 != 100000000)
	{
		Function_376(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_375(&uParam0, &iParam2);
	}
	return;
}

void Function_375(struct<69> Param0) //Position: 0x12FF4 / 77812
{
	Param0.f_68 = 0;
	Function_376(&Param0, 2, &bParam1);
	Function_376(&Param0, 4, &bParam1);
	Function_376(&Param0, 8, &bParam1);
	Function_376(&Param0, 16, &bParam1);
	Function_376(&Param0, 32, &bParam1);
	Function_376(&Param0, 64, &bParam1);
	Function_376(&Param0, 128, &bParam1);
	Function_376(&Param0, 256, &bParam1);
	Function_376(&Param0, 512, &bParam1);
	Function_376(&Param0, 1024, &bParam1);
	return;
}

void Function_376(int iParam0, int iParam1, bool bParam2) //Position: 0x1306F / 77935
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_377(struct<65> Param0) //Position: 0x130AE / 77998
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_378(int iParam0, char* cParam1) //Position: 0x130BB / 78011
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

bool Function_379(struct<61> Param0) //Position: 0x13148 / 78152
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

void Function_380() //Position: 0x132FB / 78587
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_RickWaitingCarlos", "Gun03_RickWaitingCarlos", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_381() //Position: 0x13352 / 78674
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ArriveMeetingPlace", "Gun03_ArriveMeetingPlace", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_382() //Position: 0x133AB / 78763
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_NoFollowRickIntoCaves", "Gun03_NoFollowRickIntoCaves", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_383(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1340A / 78858
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar2, 3) || IS_ACTOR_CRIPPLED(&uVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_RIDING_VEHICLE(&uVar2))
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

void Function_384(var uParam0, bool bParam1) //Position: 0x134CF / 79055
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(&uVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&uVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&uVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_385(var uParam0, bool bParam1, bool bParam2) //Position: 0x13530 / 79152
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &bParam1, 1);
				}
				else
				{
					GET_POSITION(&bParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_386(var uParam0, bool bParam1, bool bParam2) //Position: 0x135A8 / 79272
{
	Function_385(&uParam0, &bParam1, 1);
	Function_390(&uParam0, 1);
	Function_389(&uParam0, &bParam1, 4);
	Function_388(&uParam0, &bParam1);
	if (&bParam2)
	{
		Function_387(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_387(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x135F1 / 79345
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_388(var uParam0, int iParam1) //Position: 0x13701 / 79617
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_389(var uParam0, bool bParam1, bool bParam2) //Position: 0x1375C / 79708
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_390(var uParam0, int iParam1) //Position: 0x137A8 / 79784
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_391() //Position: 0x137ED / 79853
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_EscapeTrewCanyon", "Gun03_EscapeTrewCanyon", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_392() //Position: 0x13842 / 79938
{
	if (iLocal_1811 == 0)
	{
		if (!Function_383(&iLocal_17 + 2088, 0, 1, 1, 1, 0))
		{
			Function_334(&iLocal_1812, 11, 0, 4294967295, 4294967295);
			iLocal_1811 = 1;
		}
		else
		{
			Function_334(&iLocal_1812, 41, 0, 4294967295, 4294967295);
		}
	}
	else if (iLocal_1811 == 1)
	{
		if (Function_383(&iLocal_17 + 2168, 0, 1, 1, 1, 0))
		{
			if (Function_395(&Global_54076, &iLocal_17 + 2168, 1, 0, 0, 3212836864) || Function_393(&iLocal_17 + 2168, &Global_54076, 1, 0, 0))
			{
				Function_334(&iLocal_1812, 41, 0, 4294967295, 4294967295);
				iLocal_1811 = 2;
			}
		}
	}
	else if (iLocal_1811 == 2)
	{
		if (!Function_383(&iLocal_17 + 2168, 0, 1, 1, 1, 0))
		{
			Function_334(&iLocal_1812, 11, 0, 4294967295, 4294967295);
			iLocal_1811 = 3;
		}
	}
	else if (iLocal_1811 == 3)
	{
		if (Function_383(&iLocal_17 + 2232, 0, 1, 1, 1, 0))
		{
			if (Function_395(&Global_54076, &iLocal_17 + 2232, 1, 0, 0, 3212836864) || Function_393(&iLocal_17 + 2232, &Global_54076, 1, 0, 0))
			{
				Function_334(&iLocal_1812, 41, 0, 4294967295, 4294967295);
				iLocal_1811 = 3;
			}
		}
	}
	return;
}

int Function_393(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1394F / 80207
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_394(&iVar1, &iParam1, bParam2, &bParam3, &bParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_394(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x139BC / 80316
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_395(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13AC2 / 80578
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_394(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &iParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_396(int iParam0) //Position: 0x13B2D / 80685
{
	if (IS_ACTOR_SHOOTING(&Global_54076))
	{
		Function_242(&bLocal_1412);
	}
	if (Function_293(&bLocal_1404) < 1.0f)
	{
		if ((Function_415(&Global_54076, &bLocal_1313) < 35.0f && !IS_PLAYER_IN_COMBAT(0)) && Function_410(&Global_54076, &iLocal_17 + 4736) < Function_410(&bLocal_1313, &iLocal_17 + 4736))
		{
			if (!iLocal_1585)
			{
				Function_409();
				iLocal_1585 = 1;
			}
		}
		else
		{
			iLocal_1585 = 0;
			if (Function_293(&bLocal_1416) < 12.0f)
			{
				if (IS_ACTOR_VALID(&iLocal_17 + 2096[32]))
				{
					if (IS_ACTOR_ALIVE(&iLocal_17 + 2096[32]))
					{
						if (Function_415(&Global_54076, &iLocal_17 + 2096[32]) > 25.0f)
						{
							Function_408();
							Function_242(&bLocal_1416);
						}
					}
				}
				if (IS_ACTOR_VALID(&iLocal_17 + 2016[12]))
				{
					if (IS_ACTOR_ALIVE(&iLocal_17 + 2016[12]))
					{
						if (Function_415(&Global_54076, &iLocal_17 + 2016[12]) > 25.0f)
						{
							Function_407();
							Function_242(&bLocal_1416);
						}
					}
				}
				if (IS_PLAYER_TARGETTING_ACTOR(0, &bLocal_1313, 1))
				{
					if (iLocal_1285 != 2 && iLocal_1286 > 13)
					{
						Function_406();
					}
					else
					{
						Function_405();
					}
					Function_242(&bLocal_1416);
				}
				else if (IS_PLAYER_TARGETTING_ACTOR(0, &bLocal_1459, 1))
				{
					Function_404();
					Function_242(&bLocal_1416);
				}
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && &iParam0 != 4)
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "beingBucked"))
					{
						Function_403();
						Function_242(&bLocal_1416);
					}
					else
					{
						Function_402();
						Function_242(&bLocal_1416);
					}
				}
				else if ((Function_401(&iParam0) && IS_AI_ACTOR_ENGAGED_IN_COMBAT(&bLocal_1313)) && IS_AI_ACTOR_IN_COMBAT(&bLocal_1313))
				{
					if (Function_293(&bLocal_1412) < 15.0f)
					{
						if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 350.0f)
						{
							if (&iParam0 == 4)
							{
								if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
								{
									Function_400();
								}
							}
							else
							{
								Function_400();
							}
							Function_242(&bLocal_1416);
							Function_242(&bLocal_1412);
						}
						else
						{
							if (&iParam0 == 4)
							{
								if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
								{
									Function_399();
								}
							}
							else
							{
								Function_399();
							}
							Function_242(&bLocal_1416);
							Function_242(&bLocal_1412);
						}
					}
					else if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
					{
						if (&iParam0 >= 2)
						{
							if (&iParam0 == 4)
							{
								if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
								{
									Function_398();
								}
							}
							else
							{
								Function_398();
							}
						}
						else
						{
							Function_397();
						}
						Function_242(&bLocal_1416);
					}
					else
					{
						if (&iParam0 == 4)
						{
							if (RAND_FLOAT_RANGE(1.0f, 500.0f) <= 250.0f)
							{
								Function_398();
							}
						}
						else
						{
							Function_398();
						}
						Function_242(&bLocal_1416);
					}
				}
			}
		}
	}
	return;
}

void Function_397() //Position: 0x13DB9 / 81337
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_TauntsEnemies", "Gun03_TauntsEnemies", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_398() //Position: 0x13E08 / 81416
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ShoutsEnc", "Gun03_ShoutsEnc", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_399() //Position: 0x13E4F / 81487
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_RickCoverMe", "Gun03_RickCoverMe", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_400() //Position: 0x13E9A / 81562
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_NoHelpShootEscape", "Gun03_NoHelpShootEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_401(int iParam0) //Position: 0x13EF1 / 81649
{
	if (&iParam0 == 5)
	{
		return Function_383(&iLocal_17 + 2008, 0, 1, 1, 1, 0);
	}
	if (&iParam0 == 4)
	{
		if ((Function_383(&iLocal_17 + 2088, 0, 1, 1, 1, 0) || Function_383(&iLocal_17 + 2168, 0, 1, 1, 1, 0)) || Function_383(&iLocal_17 + 2232, 0, 1, 1, 1, 0))
		{
			return 1;
		}
		return 0;
	}
	if (&iParam0 == 3)
	{
		if (Function_383(&iLocal_17 + 1752, 0, 1, 1, 1, 0) || Function_383(&iLocal_17 + 1848, 0, 1, 1, 1, 0))
		{
			return 1;
		}
		return 0;
	}
	if (&iParam0 == 2)
	{
		if ((((((Function_383(&iLocal_17 + 1320, 0, 1, 1, 1, 0) || Function_383(&iLocal_17 + 1368, 0, 1, 1, 1, 0)) || Function_383(&iLocal_17 + 1416, 0, 1, 1, 1, 0)) || Function_383(&iLocal_17 + 1464, 0, 1, 1, 1, 0)) || Function_383(&iLocal_17 + 1512, 0, 1, 1, 1, 0)) || Function_383(&iLocal_17 + 1560, 0, 1, 1, 1, 0)) || Function_383(&iLocal_17 + 1608, 0, 1, 1, 1, 0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_402() //Position: 0x14000 / 81920
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_OffHorseDuringEscape", "Gun03_OffHorseDuringEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403() //Position: 0x1405D / 82013
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_TrownOffHorseEscape", "Gun03_TrownOffHorseEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_404() //Position: 0x140B8 / 82104
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_TargetsLisa", "Gun03_TargetsLisa", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_405() //Position: 0x14103 / 82179
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_TargetsRickEscape", "Gun03_TargetsRickEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406() //Position: 0x1415A / 82266
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_GunOnRickB4Caves", "Gun03_GunOnRickB4Caves", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_407() //Position: 0x141AF / 82351
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(13, "Gun03_SoldiersCanyonYell3", "Gun03_SoldiersCanyonYell3", 0, 2, 1, 0, 1);
		Function_361(8193);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x1420D / 82445
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(12, "Gun03_SoldiersCanyonYell2", "Gun03_SoldiersCanyonYell2", 0, 2, 1, 0, 1);
		Function_361(4097);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_409() //Position: 0x1426B / 82539
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_RidesOffCombat", "Gun03_RidesOffCombat", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_410(bool bParam0, float fParam1) //Position: 0x142BC / 82620
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	
	bVar2 = (GET_PATH_NUM_POINTS(&fParam1) - 1);
	GET_PATH_POINT(&fParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_367(&bParam0);
		Var3 = Function_367(&bParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_411() //Position: 0x1434C / 82764
{
	if (Function_293(&bLocal_1444) < 1.0f)
	{
		if (Function_410(&Global_54076, &iLocal_17 + 4736) < (Function_410(&bLocal_1313, &iLocal_17 + 4736) + 3.0f) && !IS_ACTOR_SHOOTING(&bLocal_1313))
		{
			if (Function_293(&bLocal_1420) < 15.0f)
			{
				Function_414();
				Function_242(&bLocal_1416);
				Function_242(&bLocal_1420);
			}
		}
		if ((Function_410(&Global_54076, &iLocal_17 + 4736) < (Function_410(&bLocal_1313, &iLocal_17 + 4736) - 9.0f) && !IS_ACTOR_SHOOTING(&bLocal_1313)) && !iLocal_1579)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
			iLocal_1579 = 1;
			Function_242(&bLocal_1444);
		}
		else if (IS_ACTOR_SHOOTING(&bLocal_1313) && !iLocal_1578)
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
			if (Function_413(StackVal, &bLocal_1313, Local_1519) < 25.0f)
			{
				TASK_CLEAR(GET_MOUNT(&bLocal_1313));
				TASK_STAND_STILL(GET_MOUNT(&bLocal_1313), 0,1f, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&bLocal_1313), "horse_Main/Melee/RearUp");
				GET_POSITION(&bLocal_1313, &Local_1519);
			}
			if (Function_293(&bLocal_1420) < 15.0f)
			{
				Function_412();
				Function_242(&bLocal_1420);
				Function_242(&bLocal_1416);
			}
			Function_242(&bLocal_1444);
			iLocal_1578 = 1;
		}
		else if ((iLocal_1578 || iLocal_1579) && (Function_410(&Global_54076, &iLocal_17 + 4736) + 9.0f) > Function_410(&bLocal_1313, &iLocal_17 + 4736))
		{
			iLocal_1578 = 0;
			iLocal_1579 = 0;
			if (iLocal_1571)
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 1);
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 2);
			}
			Function_242(&bLocal_1444);
		}
		Function_242(&bLocal_1444);
	}
	return;
}

void Function_412() //Position: 0x144E3 / 83171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SpotsMoreEnemies", "Gun03_SpotsMoreEnemies", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_413(int iParam0, struct<2> Param1) //Position: 0x14538 / 83256
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_367(&iParam0);
		Var0 = Function_367(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_414() //Position: 0x145AF / 83375
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_RickMoveForward", "Gun03_RickMoveForward", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_415(bool bParam0, bool bParam1) //Position: 0x14602 / 83458
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_416() //Position: 0x146F7 / 83703
{
	if (!SQUAD_IS_VALID(&iLocal_17 + 2232))
	{
		Function_419();
	}
	Function_418(&iLocal_17 + 2232, 1);
	Function_417(&iLocal_17 + 2232, 0, -1.0f);
	Function_386(&iLocal_17 + 2232, &bLocal_1313, 0);
	Function_386(&iLocal_17 + 2232, &Global_54076, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_17 + 2232, 1);
	TASK_OVERRIDE_SET_POSTURE(&iLocal_17 + 2176[02], 1);
	TASK_CROUCH(&iLocal_17 + 2176[22], -1.0f);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_17 + 2176[02], -1.0f);
	return;
}

void Function_417(var uParam0, bool bParam1, int iParam2) //Position: 0x1476F / 83823
{
	bool bVar0;
	var uVar1;
	var uVar2;
	bool bVar4;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			GET_POSITION(&uVar1, &uVar2);
			bVar4 = GET_HEADING(&uVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(&uVar1, &uVar2, bVar4, &iParam2);
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_418(var uParam0, int iParam1) //Position: 0x147D2 / 83922
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, &iParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_419() //Position: 0x14875 / 84085
{
	*(&iLocal_17 + 2232) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S4_EscapeGs_Wv3"));
	*(&iLocal_17 + 2176[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv3_e08", 386, Vector(-229,4948f, 31,72498f, 3634,978f), Vector(0.0f, 177.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2176[02], &iLocal_17 + 2232);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2176[02], 42, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2176[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2176[02], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2176[02], 1);
	Function_420(&iLocal_17 + 2176[02]);
	*(&iLocal_17 + 2176[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv3_e05", 383, Vector(-226,2479f, 34,85741f, 3627,258f), Vector(0.0f, 180.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2176[12], &iLocal_17 + 2232);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2176[12], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2176[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2176[12], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2176[12], 1);
	Function_420(&iLocal_17 + 2176[12]);
	*(&iLocal_17 + 2176[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv3_e09", 387, Vector(-235,6647f, 35,24493f, 3631,67f), Vector(0.0f, 202.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2176[22], &iLocal_17 + 2232);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2176[22], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2176[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2176[22], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2176[22], 1);
	Function_420(&iLocal_17 + 2176[22]);
	return;
}

void Function_420(var uParam0) //Position: 0x14A58 / 84568
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

void Function_421() //Position: 0x14A8F / 84623
{
	if (!SQUAD_IS_VALID(&iLocal_17 + 2168))
	{
		Function_422();
	}
	Function_418(&iLocal_17 + 2168, 1);
	Function_386(&iLocal_17 + 2168, &Global_54076, 0);
	Function_417(&iLocal_17 + 2168, 0, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_17 + 2168, 1);
	TASK_CROUCH(&iLocal_17 + 2096[02], -1.0f);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_17 + 2096[12], -1.0f);
	TASK_CROUCH(&iLocal_17 + 2096[32], -1.0f);
	return;
}

void Function_422() //Position: 0x14AF9 / 84729
{
	*(&iLocal_17 + 2168) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S4_EscapeGs_Wv2"));
	*(&iLocal_17 + 2096[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv2_e02", 380, Vector(-266,5293f, 32,79571f, 3772.0f), Vector(0.0f, 162.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2096[02], &iLocal_17 + 2168);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2096[02], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2096[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2096[02], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2096[02], 1);
	Function_420(&iLocal_17 + 2096[02]);
	*(&iLocal_17 + 2096[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv2_e04", 382, Vector(-234,8638f, 35,20123f, 3753,179f), Vector(0.0f, 120,0396f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2096[12], &iLocal_17 + 2168);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2096[12], 41, 0,999f, 1, 1);
	SET_ACTOR_ONE_SHOT_DEATH(&iLocal_17 + 2096[12], 1);
	TASK_STAND_STILL(&iLocal_17 + 2096[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2096[12], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2096[12], 1);
	Function_420(&iLocal_17 + 2096[12]);
	*(&iLocal_17 + 2096[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv2_e11", 389, Vector(-222,3332f, 35,4324f, 3741,045f), Vector(0.0f, 120,0396f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2096[22], &iLocal_17 + 2168);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2096[22], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2096[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2096[22], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2096[22], 1);
	Function_420(&iLocal_17 + 2096[22]);
	*(&iLocal_17 + 2096[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv2_m03", 393, Vector(-224,1118f, 32,9645f, 3721,389f), Vector(0.0f, 162,6998f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2096[32], &iLocal_17 + 2168);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2096[32], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2096[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2096[32], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2096[32], 1);
	Function_420(&iLocal_17 + 2096[32]);
	return;
}

void Function_423() //Position: 0x14D7D / 85373
{
	if (!SQUAD_IS_VALID(&iLocal_17 + 2088))
	{
		Function_424();
	}
	Function_418(&iLocal_17 + 2088, 1);
	Function_417(&iLocal_17 + 2088, 0, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_17 + 2088, 1);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_17 + 2016[02], -1.0f);
	TASK_CROUCH(&iLocal_17 + 2016[02], -1.0f);
	TASK_CROUCH(&iLocal_17 + 2016[12], -1.0f);
	return;
}

void Function_424() //Position: 0x14DD9 / 85465
{
	*(&iLocal_17 + 2088) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S4_EscapeGs_Wv1"));
	*(&iLocal_17 + 2016[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv1_e01", 379, Vector(-327,9216f, 20,55877f, 3869,244f), Vector(0.0f, 120,0396f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2016[02], &iLocal_17 + 2088);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2016[02], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2016[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2016[02], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2016[02], 1);
	Function_420(&iLocal_17 + 2016[02]);
	*(&iLocal_17 + 2016[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv1_m02", 395, Vector(-281,7752f, 32,84133f, 3829,209f), Vector(0.0f, 211,2998f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2016[12], &iLocal_17 + 2088);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2016[12], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2016[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2016[12], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2016[12], 1);
	Function_420(&iLocal_17 + 2016[12]);
	*(&iLocal_17 + 2016[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv1_e03", 381, Vector(-280,3831f, 35,76176f, 3859,794f), Vector(0.0f, 120,0396f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2016[22], &iLocal_17 + 2088);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2016[22], 41, 0,999f, 1, 1);
	SET_ACTOR_ONE_SHOT_DEATH(&iLocal_17 + 2016[22], 1);
	TASK_STAND_STILL(&iLocal_17 + 2016[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2016[22], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2016[22], 1);
	Function_420(&iLocal_17 + 2016[22]);
	*(&iLocal_17 + 2016[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_wv1_e10", 388, Vector(-264,8758f, 32,56327f, 3836,876f), Vector(0.0f, 120,0396f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2016[32], &iLocal_17 + 2088);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2016[32], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2016[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2016[32], 19);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 2016[32], 1);
	Function_420(&iLocal_17 + 2016[32]);
	return;
}

void Function_425(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1505D / 86109
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
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

int Function_426(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x150F2 / 86258
{
	var uVar0;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	bool bVar8;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("HOGTIE CARRIER not valid.");
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		LOG_ERROR("HOGTIE VICTIM not valid.");
		return 0;
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam0, "head", &uVar0))
	{
		LOG_ERROR("NAMED BONE not valid for actor.");
		return 0;
	}
	iVar2 = 0;
	uVar4 = GET_ATTACHED_HOGTIE_VICTIM(&uParam0);
	if (IS_ACTOR_VALID(&uVar4))
	{
		uVar3 = GET_GRINGO_FROM_OBJECT(DECOR_GET_OBJECT(&uVar4, "HogtieGringoAttached"));
	}
	while (!IS_GRINGO_VALID(&uVar3) && iVar2 > 5)
	{
		GET_OBJECT_NAMED_BONE_POSITION(&uParam0, "head", &uVar0);
		uVar3 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,5f, 1);
		iVar2++;
	}
	if (iVar2 > 5)
	{
		return 0;
	}
	TASK_PRIORITY_SET(&uParam1, true);
	TASK_STAND_STILL(&uParam1, -1.0f, 0, 0);
	bVar5 = GET_HEADING(&uParam1);
	uVar6 = Vector(0.0f, 0.0f, 0.0f);
	if (bParam2)
	{
		GET_OBJECT_RELATIVE_POSITION(StackVal, &uParam1, Vector(1,0011f, 0,0002f, 0,2262f), &uVar6);
		DECOR_SET_BOOL(&uParam0, "Hogtie_PutOnHorse_L", 0);
		bVar5 = (bVar5 + 90.0f);
	}
	else
	{
		GET_OBJECT_RELATIVE_POSITION(StackVal, &uParam1, Vector(-1,3385f, 0,0002f, 0,0723f), &uVar6);
		DECOR_SET_BOOL(&uParam0, "Hogtie_PutOnHorse_L", 1);
		bVar5 = (bVar5 + 250.0f);
	}
	bVar8 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_PRECISELY(0, &uVar6, &iParam3, bVar5, 0,1f, 0.0f, 0, 0);
	TASK_USE_GRINGO(false, &uVar3, "PutOn_Horse", 1, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar8);
	TASK_SEQUENCE_RELEASE(bVar8, 1);
	return 1;
}

void Function_427() //Position: 0x1530E / 86798
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BothExitCaves", "Gun03_BothExitCaves", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_428(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1535D / 86877
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (iParam2 != Global_53524.f_48 && !Function_435())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_434(0);
	Function_433();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_431(iParam2);
	}
	Function_430(uParam3, iVar0, iVar1);
	Function_429();
}

void Function_429() //Position: 0x15406 / 87046
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

void Function_430(int iParam0, bool bParam1, bool bParam2) //Position: 0x15447 / 87111
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
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_431(bool bParam0) //Position: 0x155B0 / 87472
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_432() };
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_432() //Position: 0x15748 / 87880
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

void Function_433() //Position: 0x1578E / 87950
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_434(bool bParam0) //Position: 0x157B2 / 87986
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

bool Function_435() //Position: 0x157E1 / 88033
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_436() //Position: 0x157FC / 88060
{
	if (IS_OBJECT_VALID(&uLocal_1479))
	{
		Function_227(&uLocal_1479);
	}
	if (IS_BLIP_VALID(&uLocal_1491))
	{
		REMOVE_BLIP(&uLocal_1491);
	}
	SET_ACTOR_FACTION(&bLocal_1459, 20);
	Function_225(8, 0, 1);
	DECOR_SET_BOOL(&bLocal_1459, "bDisableCutFree", 1);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_1459, 0);
	TASK_CLEAR(&bLocal_1313);
	TASK_STAND_STILL(&bLocal_1313, -1.0f, 0, 0);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1313);
	Function_225(5, 0, 1);
	ACTOR_END_FORCE_HOLSTER(&bLocal_1313);
	MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, true);
	AUDIO_SET_PLAYER_MOOD(1, 0);
	Function_437();
	iLocal_1528 = 0;
	Function_373(&(Local_1646[015]), &bLocal_1313, "Gunslinger", 0, 0x5f5e100, 1);
	Function_373(&(Local_1646[215]), &bLocal_1459, "Mexgirl", 0, 0x5f5e100, 1);
	return;
}

void Function_437() //Position: 0x158DB / 88283
{
	if (!SQUAD_IS_VALID(&iLocal_17 + 1912))
	{
		Function_336();
		SQUAD_LEAVE(&iLocal_17 + 1856[02]);
		SET_ALLOW_RIDE_BY_PLAYER(&iLocal_17 + 1856[02], 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_17 + 1856[02], 0);
		SET_CRIPPLE_ENABLE(&iLocal_17 + 1856[02], 0);
		SET_ACTOR_CAN_BE_TARGETED(&iLocal_17 + 1856[02], false);
		Function_438(&iLocal_17 + 1912);
		SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_17 + 1912, false, 1, 4294967295);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		Function_373(&(Local_1646[415]), &iLocal_17 + 1856[02], "Gunslinger_horse", 0, 0x5f5e100, 1);
	}
	return;
}

void Function_438(var uParam0) //Position: 0x1597B / 88443
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_439() //Position: 0x159B0 / 88496
{
	if (iLocal_1806 == 0)
	{
		if (!IS_ACTOR_VALID(&bLocal_1459))
		{
			bLocal_1459 = Function_337(8, 0, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1459, 0);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_1459, false);
			Function_239(&bLocal_1459, &iLocal_17 + 3960[3], 1, 1, 1);
			if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1459, 1))
			{
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1459, "ngun03_hog", 0);
				if (HAS_ANIM_SET_LOADED("ngun03_hog"))
				{
					if (ACTOR_HAS_ANIM_SET(&bLocal_1459, "ngun03_hog"))
					{
						Function_440(&bLocal_1396);
						iLocal_1806 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_1806 == 1)
	{
		if (IS_ACTOR_HOGTIED(&bLocal_1459))
		{
			if (Function_293(&bLocal_1396) < 1.0f)
			{
				AUDIO_TURN_OFF_PAIN_VOCALS(&bLocal_1459);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_1459, 0);
				DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
				DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
				iLocal_1806 = 2;
				Function_316(&bLocal_1459, &bLocal_1313);
				ACTOR_POP_NEXT_GAIT(&bLocal_1459, 0, 0);
				return 1;
			}
		}
		HOGTIE_ACTOR(&bLocal_1459);
		Function_242(&bLocal_1396);
	}
	return 0;
}

void Function_440(vector3 vParam0) //Position: 0x15AD0 / 88784
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_441() //Position: 0x15AE7 / 88807
{
	Function_351(&iLocal_17 + 696, 615, 2, 0);
	Function_351(&iLocal_17 + 696, 394, 2, 0);
	Function_351(&iLocal_17 + 696, 395, 2, 0);
	Function_351(&iLocal_17 + 696, 396, 2, 0);
	Function_351(&iLocal_17 + 696, 379, 2, 0);
	Function_351(&iLocal_17 + 696, 381, 2, 0);
	Function_351(&iLocal_17 + 696, 388, 2, 0);
	Function_351(&iLocal_17 + 696, 380, 2, 0);
	Function_351(&iLocal_17 + 696, 382, 2, 0);
	Function_351(&iLocal_17 + 696, 389, 2, 0);
	Function_351(&iLocal_17 + 696, 393, 2, 0);
	Function_351(&iLocal_17 + 696, 386, 2, 0);
	Function_351(&iLocal_17 + 696, 383, 2, 0);
	Function_351(&iLocal_17 + 696, 387, 2, 0);
	if (Function_346(&iLocal_17 + 696))
	{
		return 1;
	}
	return 0;
}

void Function_442(bool bParam0) //Position: 0x15BBF / 89023
{
	if (!Function_295(&bParam0))
	{
		Function_243(&bParam0, 0.0f);
	}
	return;
}

bool Function_443(int iParam0, int iParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x15BD6 / 89046
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_446(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_447()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && iParam1 == 0)
		{
			if (iParam1 != 5)
			{
				iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_74(StackVal, Var16))
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
		switch (iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0))
				{
					iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&iParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_444();
					CUTSCENE_MANAGER_RESUME_LOADING();
					iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				iParam1 = 0;
				break;
		}
	}
	else if ((!Function_446(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_447()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		iParam1 = 0;
	}
	else if (!Function_446(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_444() //Position: 0x15E3E / 89662
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
			Function_445(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_445(char* cParam0) //Position: 0x15E92 / 89746
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

bool Function_446(float fParam0, struct<2> Param1, float fParam3) //Position: 0x15FBB / 90043
{
	if (IS_ACTOR_VALID(&fParam0))
	{
		Function_367(&fParam0);
		if (VDIST(Function_367(&fParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_447() //Position: 0x16047 / 90183
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_448(struct<2> Param0, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x16056 / 90198
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_455(&Global_54076, &iParam3, bParam2))
	{
		Function_248(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_455(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_454(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_425(&bParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_453(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_452(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_452(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_454(2))
	{
		Function_451(2);
		if (!Function_450())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_449();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_222(&iParam3);
				Function_226(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_452(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_452(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_449() //Position: 0x16214 / 90644
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

bool Function_450() //Position: 0x16242 / 90690
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

void Function_451(bool bParam0) //Position: 0x16289 / 90761
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_452(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x162F0 / 90864
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

void Function_453(bool bParam0) //Position: 0x163AB / 91051
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_454(bool bParam0) //Position: 0x16412 / 91154
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

bool Function_455(var uParam0, int iParam1, bool bParam2) //Position: 0x1645C / 91228
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &iParam1, bParam2))
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

void Function_456() //Position: 0x16571 / 91505
{
	if (iLocal_1286 < 5 && iLocal_1286 > 105)
	{
		Function_483();
		if (iLocal_1286 > 8)
		{
			Function_466();
		}
		Function_448(&bLocal_1408, 60.0f, 130.0f, &bLocal_1313, "Gun03_obj_return", "Gun03_too_far", &bLocal_1300, 0, 0, 0, 325, 1);
		if (!SQUAD_IS_VALID(&iLocal_17 + 1912))
		{
			Function_437();
		}
	}
	switch (iLocal_1286)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(&bLocal_1459))
			{
				bLocal_1459 = Function_337(8, 0, 1, 0, 0, 0, 0, 0, 0);
				Function_239(&bLocal_1459, &iLocal_17 + 3776[13], 0, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1459, 0);
			}
			else if (MAKE_ACTOR_READY_FOR_ACTION(&bLocal_1459, 1))
			{
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1459, "ngun03_hog", 0);
				if (HAS_ANIM_SET_LOADED("ngun03_hog"))
				{
					if (ACTOR_HAS_ANIM_SET(&bLocal_1459, "ngun03_hog"))
					{
						if (IS_ACTOR_HOGTIED(&bLocal_1459))
						{
							AUDIO_TURN_OFF_PAIN_VOCALS(&bLocal_1459);
							AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_1459, 0);
							SET_ACTOR_FACTION(&bLocal_1313, 20);
							SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
							DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
							DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
							ACTOR_POP_NEXT_GAIT(&bLocal_1459, 0, 0);
							TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
							Function_354(0);
							SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
							SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
							if (iLocal_1318[2] == 0)
							{
								if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
								{
									HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
									HUD_FADE_OUT(0.0f, 1f, 1);
								}
								FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
								iLocal_1317 = Global_46746[1];
								if (!Function_353(iLocal_1317))
								{
									Function_352(&Local_1273);
								}
								Function_239(&Global_54076, &iLocal_17 + 3776[19], 1, 1, 1);
								Function_239(&bLocal_1313, &iLocal_17 + 3776[12], 1, 1, 1);
								Function_316(&bLocal_1459, &bLocal_1313);
								Function_242(&bLocal_1396);
								iLocal_1286 = 1;
							}
							else
							{
								Function_465();
								Function_316(&bLocal_1459, &iLocal_17 + 2272[02]);
								Function_242(&bLocal_1396);
								iLocal_1286 = 2;
							}
						}
						else
						{
							HOGTIE_ACTOR(&bLocal_1459);
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(iLocal_1317) || iLocal_1317 != 4294967295)) && Function_464())
			{
				Function_242(&bLocal_1396);
				if (iLocal_1318[2] == 0)
				{
					Function_316(&bLocal_1459, &bLocal_1313);
				}
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_1587 = Function_462(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1273, iLocal_1285);
			Function_254(iLocal_1285);
			Function_428(StackVal, Function_254(iLocal_1285), iLocal_1285, Global_46746[1], Function_256(iLocal_1285), 0);
			Function_461();
			Function_242(&bLocal_1396);
			iLocal_1286 = 6;
			break;
		
		case 0x00000006:
			if (iLocal_1587)
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 2)
				{
					DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					ENABLE_CHILD_SECTOR("emt_caveDoor02x");
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
				if (Function_297("$/cutscene/GUN03_CS05/GUN03_CS05", &iLocal_1287, &Local_1273, &iLocal_1285, 65596, 65589, 93623, 62034, 61806, 93616, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
					iLocal_1286 = 7;
				}
			}
			else
			{
				if (IS_OBJECT_VALID(&uLocal_1507))
				{
					DESTROY_OBJECT(&uLocal_1507);
				}
				if (IS_OBJECT_VALID(&uLocal_1505))
				{
					DESTROY_OBJECT(&uLocal_1505);
				}
				DISABLE_CHILD_SECTOR("emt_caveDoor01x");
				ENABLE_CHILD_SECTOR("emt_caveDoor02x");
				DECOR_SET_BOOL(&bLocal_1459, "bDisableCutFree", 1);
				DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
				DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
				Function_239(&bLocal_1313, &iLocal_17 + 3776[12], 1, 1, 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1313);
				TASK_CLEAR(&bLocal_1313);
				Function_241(&iLocal_17 + 4312[4]);
				Local_1448 = Function_241(&iLocal_17 + 4312[4]);
				bLocal_1471 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &iLocal_17 + 4312[2], 2, 0, 1);
				TASK_FACE_COORD(0, &Local_1448, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
				TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
				TASK_PRIORITY_SET(&bLocal_1313, true);
				ACTOR_POP_NEXT_GAIT(&bLocal_1313, 2, 0);
				Function_225(5, 1, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1313, 0);
				SET_ACTOR_PROOF(&bLocal_1313, 4294967295);
				SET_CRIPPLE_ENABLE(&bLocal_1313, 0);
				SET_ACTOR_INVULNERABILITY(&bLocal_1313, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 1);
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, false);
				ACTOR_START_FORCE_HOLSTER(&bLocal_1313, 1, 0);
				MEMORY_PREFER_WALKING(&bLocal_1313, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 1);
				iLocal_1528 = 0;
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1459)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1459));
				}
				if (IS_OBJECT_VALID(&uLocal_1479))
				{
					Function_227(&uLocal_1479);
				}
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
				}
				Function_239(&Global_54076, &iLocal_17 + 3776[19], 1, 1, 1);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
				Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
				iLocal_1286 = 7;
			}
			break;
		
		case 0x00000007:
			if (iLocal_1587)
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_242(&bLocal_1396);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
				}
				bLocal_1493 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 3776[20], 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(&bLocal_1493, 3);
				Function_301(1.0f);
				Function_458();
			}
			Function_242(&bLocal_1396);
			iLocal_1286 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_1587)
			{
				if (Function_293(&bLocal_1396) < 1.0f)
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_242(&bLocal_1396);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					if (IS_BLIP_VALID(&bLocal_1493))
					{
						REMOVE_BLIP(&bLocal_1493);
					}
					bLocal_1493 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 3776[20], 330, 0f, 2, 0);
					SET_BLIP_PRIORITY(&bLocal_1493, 3);
					Function_301(1.0f);
					Function_458();
					iLocal_1587 = 1;
				}
			}
			if (Function_293(&bLocal_1396) < 4.0f)
			{
				Function_425("Gun03_obj03f", 5.0f, 1, 2, 0, 0, 0, 0);
				Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1286 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_293(&bLocal_1396) < 5.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_17 + 1848))
				{
					Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
					Function_242(&bLocal_1396);
					iLocal_1286 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (!Function_383(&iLocal_17 + 1752, 0, 1, 1, 1, 0) && !Function_383(&iLocal_17 + 1848, 0, 1, 1, 1, 0))
			{
				Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1286 = 106;
			}
			else
			{
				Function_457();
			}
			break;
		
		case 0x0000006A:
			if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2608[19]))
			{
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
				}
				Function_441();
				MEMORY_PREFER_RIDING(&bLocal_1313, false);
				iLocal_1318[3] = 1;
				Function_242(&bLocal_1396);
				iLocal_1285 = 4;
				iLocal_1286 = 0;
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[19]))
			{
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
					HUD_CLEAR_OBJECTIVE();
					Function_425("Gun03_Obj015a", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			break;
	}
	return;
}

void Function_457() //Position: 0x16CB0 / 93360
{
	if (iLocal_1811 == 0)
	{
		if (Function_383(&iLocal_17 + 1752, 0, 1, 1, 1, 0))
		{
			if (Function_395(&Global_54076, &iLocal_17 + 1752, 1, 0, 0, 3212836864) || Function_393(&iLocal_17 + 1752, &Global_54076, 1, 0, 0))
			{
				Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
				iLocal_1811 = 1;
			}
		}
	}
	else if (iLocal_1811 == 1)
	{
		iLocal_1811 = 2;
	}
	else if (iLocal_1811 == 2)
	{
		if (Function_383(&iLocal_17 + 1848, 0, 1, 1, 1, 0))
		{
			if (Function_395(&Global_54076, &iLocal_17 + 1848, 1, 0, 0, 3212836864) || Function_393(&iLocal_17 + 1848, &Global_54076, 1, 0, 0))
			{
				Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
				iLocal_1811 = 3;
			}
		}
	}
	return;
}

void Function_458() //Position: 0x16D67 / 93543
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SetOffLisa", "Gun03_SetOffLisa", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_459() //Position: 0x16DB0 / 93616
{
	return 1;
}

int Function_460() //Position: 0x16DB7 / 93623
{
	return 1;
}

void Function_461() //Position: 0x16DBE / 93630
{
	Function_239(&bLocal_1459, &iLocal_17 + 3776[13], 1, 1, 1);
	TASK_CLEAR(&bLocal_1459);
	TASK_STAND_STILL(&bLocal_1459, -1.0f, 0, 0);
	HOGTIE_ACTOR(&bLocal_1459);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_1459, 0);
	AUDIO_TURN_OFF_PAIN_VOCALS(&bLocal_1459);
	DELETE_ACCESSORY("ANKLE_BIND", &bLocal_1459);
	DELETE_ACCESSORY("WRIST_BIND", &bLocal_1459);
	AUDIO_SET_PLAYER_MOOD(1, 0);
	Function_373(&(Local_1646[015]), &bLocal_1313, "Gunslinger", 0, 0x5f5e100, 1);
	Function_373(&(Local_1646[215]), &bLocal_1459, "Mexgirl", 0, 0x5f5e100, 1);
	return;
}

bool Function_462(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x16E6D / 93805
{
	if (Function_463(&iParam0) == iParam6 || Function_435())
	{
		return 1;
	}
	return 0;
}

int Function_463(int iParam0) //Position: 0x16E8C / 93836
{
	if (Function_306(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_464() //Position: 0x16EA5 / 93861
{
	Function_351(&iLocal_17 + 576, 380, 2, 0);
	Function_351(&iLocal_17 + 576, 379, 2, 0);
	Function_351(&iLocal_17 + 576, 395, 2, 0);
	Function_351(&iLocal_17 + 576, 392, 2, 0);
	Function_351(&iLocal_17 + 576, 381, 2, 0);
	Function_351(&iLocal_17 + 576, 382, 2, 0);
	Function_351(&iLocal_17 + 576, 384, 2, 0);
	if (Function_346(&iLocal_17 + 576))
	{
		return 1;
	}
	return 0;
}

void Function_465() //Position: 0x16F1B / 93979
{
	*(&iLocal_17 + 2296) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "hogtiebuddygroup"));
	*(&iLocal_17 + 2272[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "hogtiebuddy", 384, Vector(-280,864f, 24,26138f, 3981,405f), Vector(0.0f, 75.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2272[02], &iLocal_17 + 2296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 2272[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 2272[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 2272[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 2272[02], 19);
	return;
}

void Function_466() //Position: 0x16FCB / 94155
{
	if (Function_393(&iLocal_17 + 1848, &Global_54076, 1, 0, 0) || Function_393(&iLocal_17 + 1752, &Global_54076, 1, 0, 0))
	{
		Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 3024[3]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 3024[3]))
		{
			iLocal_1590 = 1;
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 2608[24]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[24]))
		{
			iLocal_1591 = 1;
			DESTROY_VOLUME(&iLocal_17 + 2608[24]);
		}
	}
	if (iLocal_1528 == 0)
	{
		iLocal_1528 = 1;
	}
	else if (iLocal_1528 == 1)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 3024[0]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 3024[0]))
		{
			Function_472();
			Function_242(&bLocal_1404);
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			iLocal_1528 = 2;
		}
	}
	else if (iLocal_1528 == 2)
	{
		if ((Function_293(&bLocal_1404) < 6.0f && !Function_140()) && !iLocal_1533[5])
		{
			Function_414();
			iLocal_1533[5] = 1;
		}
		if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(&bLocal_1313, 4294967295) >= 0)
		{
			if (!IS_MOVER_FROZEN(&bLocal_1313))
			{
				SET_MOVER_FROZEN(&bLocal_1313, 1);
			}
		}
		if (!Function_383(&iLocal_17 + 1752, 0, 1, 1, 1, 0) && iLocal_1590)
		{
			if (IS_MOVER_FROZEN(&bLocal_1313))
			{
				SET_MOVER_FROZEN(&bLocal_1313, 0);
			}
			TASK_CLEAR(&bLocal_1313);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4736, 2, 0, 0, 1, false);
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			Function_242(&bLocal_1404);
			iLocal_1528 = 3;
		}
	}
	else if (iLocal_1528 == 3)
	{
		if ((IS_ACTOR_ALIVE(&iLocal_17 + 1760[02]) || IS_ACTOR_ALIVE(&iLocal_17 + 1760[22])) && (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 3024[3]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 3024[3])))
		{
			if (IS_ACTOR_ALIVE(&iLocal_17 + 1760[02]))
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_17 + 1760[02], &Global_54076, 2.0f, 2);
			}
			if (IS_ACTOR_ALIVE(&iLocal_17 + 1760[22]))
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_17 + 1760[22], &Global_54076, 2.0f, 2);
			}
			Function_241(&iLocal_17 + 4312[4]);
			Local_1448 = Function_241(&iLocal_17 + 4312[4]);
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 4312[2], 2, 0, 1);
			TASK_FACE_COORD(0, &Local_1448, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			Function_242(&bLocal_1404);
			iLocal_1528 = 4;
		}
		else if ((!Function_468(&iLocal_17 + 1760[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_468(&iLocal_17 + 1760[22], 0, 1, 1, 1, 0, 0, 0, 0)) && !iLocal_1533[10])
		{
			Function_467();
			iLocal_1533[10] = 1;
		}
		else if ((iLocal_1591 && !Function_468(&iLocal_17 + 1760[02], 0, 1, 1, 1, 0, 0, 0, 0)) && !Function_468(&iLocal_17 + 1760[22], 0, 1, 1, 1, 0, 0, 0, 0))
		{
			if (IS_MOVER_FROZEN(&bLocal_1313))
			{
				SET_MOVER_FROZEN(&bLocal_1313, 0);
			}
			TASK_CLEAR(&bLocal_1313);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4736, 2, 0, 0, 1, false);
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			Function_242(&bLocal_1404);
			iLocal_1528 = 4;
		}
	}
	else if (iLocal_1528 == 4)
	{
		if (!Function_383(&iLocal_17 + 1848, 0, 1, 1, 1, 0))
		{
			if (IS_MOVER_FROZEN(&bLocal_1313))
			{
				SET_MOVER_FROZEN(&bLocal_1313, 0);
			}
			TASK_CLEAR(&bLocal_1313);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4736, 2, 0, 0, 1, false);
			Function_242(&bLocal_1404);
			Function_382();
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			iLocal_1528 = 5;
		}
		else if ((!Function_468(&iLocal_17 + 1760[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_468(&iLocal_17 + 1760[22], 0, 1, 1, 1, 0, 0, 0, 0)) && !iLocal_1533[10])
		{
			Function_467();
			iLocal_1533[10] = 1;
		}
		else if (((!Function_468(&iLocal_17 + 1760[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_468(&iLocal_17 + 1760[22], 0, 1, 1, 1, 0, 0, 0, 0)) && !iLocal_1533[7]) && iLocal_1591)
		{
			Function_241(&iLocal_17 + 4312[5]);
			Local_1448 = Function_241(&iLocal_17 + 4312[5]);
			if (IS_MOVER_FROZEN(&bLocal_1313))
			{
				SET_MOVER_FROZEN(&bLocal_1313, 0);
			}
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 4312[1], 2, 0, 1);
			TASK_FACE_COORD(0, &Local_1448, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			iLocal_1533[7] = 1;
		}
		else
		{
			if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(&bLocal_1313, 4294967295) >= 0)
			{
				if (!IS_MOVER_FROZEN(&bLocal_1313))
				{
					SET_MOVER_FROZEN(&bLocal_1313, 1);
					Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
				}
			}
			if (!iLocal_1533[6])
			{
				if (IS_ACTOR_ALIVE(&iLocal_17 + 1760[02]))
				{
					if (IS_ACTOR_IN_VOLUME(&iLocal_17 + 1760[02], &iLocal_17 + 3024[3]))
					{
						Function_412();
						iLocal_1533[6] = 1;
					}
				}
				if (IS_ACTOR_ALIVE(&iLocal_17 + 1760[22]))
				{
					if (IS_ACTOR_IN_VOLUME(&iLocal_17 + 1760[22], &iLocal_17 + 3024[3]))
					{
						Function_412();
						iLocal_1533[6] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_1528 == 5)
	{
		if (!Function_383(&iLocal_17 + 1848, 0, 1, 1, 1, 0))
		{
			Function_334(&iLocal_1812, 11, 0, 4294967295, 4294967295);
			TASK_CLEAR(&bLocal_1313);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4736, 2, 0, 0, 1, false);
			Function_382();
			Function_242(&bLocal_1404);
			iLocal_1528 = 6;
		}
	}
	return;
}

void Function_467() //Position: 0x17533 / 95539
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_StealthKillB4Carlo", "Gun03_StealthKillB4Carlo", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_468(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x1758C / 95628
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_471(&bVar0, 1);
	}
	if (&bParam2)
	{
		Function_471(&bVar0, 2);
	}
	if (&bParam3)
	{
		Function_471(&bVar0, 4);
	}
	if (&bParam4)
	{
		Function_471(&bVar0, 8);
	}
	if (&bParam5)
	{
		Function_471(&bVar0, 1024);
	}
	if (&bParam7)
	{
		Function_471(&bVar0, 16);
	}
	if (&bParam8)
	{
		Function_471(&bVar0, 32);
	}
	if (&bParam6)
	{
		Function_471(&bVar0, 1048576);
	}
	return Function_469(&uParam0, bVar0);
}

int Function_469(int iParam0, int iParam1) //Position: 0x17603 / 95747
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_470(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_470(&iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(&iParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_470(var uParam0, int iParam1) //Position: 0x176F1 / 95985
{
	return (uParam0 && iParam1) == 0;
}

void Function_471(bool bParam0, bool bParam1) //Position: 0x176FE / 95998
{
	Function_77(&bParam0, bParam1);
	return;
}

void Function_472() //Position: 0x1770C / 96012
{
	if (!SQUAD_IS_VALID(&iLocal_17 + 1848))
	{
		Function_482();
		Function_418(&iLocal_17 + 1848, 1);
		Function_387(&iLocal_17 + 1848, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_473(&iLocal_17 + 1848);
	}
	return;
}

void Function_473(int iParam0) //Position: 0x17750 / 96080
{
	if (!IS_OBJECTSET_VALID(&uLocal_1485))
	{
		uLocal_1485 = CREATE_OBJECTSET_IN_LAYOUT("s3_guardset", &uLocal_1271, 15, 1);
	}
	Function_481(&iParam0, &uLocal_1485);
	Function_474(&iParam0);
	Function_241(&iLocal_17 + 3776[6]);
	Local_1448 = Function_241(&iLocal_17 + 3776[6]);
	Function_326(&iLocal_17 + 3776[6]);
	Local_1451 = Function_326(&iLocal_17 + 3776[6]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4768, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(&iLocal_1511))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 6.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1712[02], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	Function_241(&iLocal_17 + 3776[7]);
	Local_1448 = Function_241(&iLocal_17 + 3776[7]);
	Function_326(&iLocal_17 + 3776[7]);
	Local_1451 = Function_326(&iLocal_17 + 3776[7]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4768, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(&iLocal_1511))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 6.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1712[12], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	Function_241(&iLocal_17 + 4376[4]);
	Local_1448 = Function_241(&iLocal_17 + 4376[4]);
	Function_326(&iLocal_17 + 4376[4]);
	Local_1451 = Function_326(&iLocal_17 + 4376[4]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_17 + 1760[32], &Local_1448, -1f);
	Function_241(&iLocal_17 + 4376[1]);
	Local_1448 = Function_241(&iLocal_17 + 4376[1]);
	Function_326(&iLocal_17 + 4376[1]);
	Local_1451 = Function_326(&iLocal_17 + 4376[1]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 180.0f, 4);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1760[12], &iLocal_1511, -1.0f, 6.0f);
	Function_241(&iLocal_17 + 4376[2]);
	Local_1448 = Function_241(&iLocal_17 + 4376[2]);
	Function_326(&iLocal_17 + 4376[2]);
	Local_1451 = Function_326(&iLocal_17 + 4376[2]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 180.0f, 4);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1760[42], &iLocal_1511, -1.0f, 6.0f);
	return;
}

void Function_474(int iParam0) //Position: 0x1796F / 96623
{
	SQUAD_GOALS_CLEAR(&iParam0);
	Function_438(&iParam0);
	SQUAD_SET_FACTION(&iParam0, 19);
	Function_480(&iParam0, &Global_54076, 1);
	Function_480(&iParam0, &bLocal_1313, 1);
	Function_479(&iParam0, 0);
	Function_478(&iParam0, 1);
	Function_477(&iParam0, 41, 1.0f);
	Function_477(&iParam0, 40, 1.0f);
	Function_476(&bLocal_1313, &iParam0, 1);
	Function_475(&iParam0, 0);
	Function_387(&iParam0, 322, 322, 0.0f, 20.0f, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_COMBAT(&iParam0, 0, 4294967295, 0);
	return;
}

void Function_475(var uParam0, int iParam1) //Position: 0x179F6 / 96758
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_476(bool bParam0, var uParam1, bool bParam2) //Position: 0x17A30 / 96816
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&bParam0, &uVar1);
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&bParam0, &uVar1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_477(var uParam0, bool bParam1, bool bParam2) //Position: 0x17A90 / 96912
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_VALID(&uVar1))
				{
					GIVE_WEAPON_TO_ACTOR(&uVar1, bParam1, bParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_478(var uParam0, bool bParam1) //Position: 0x17AE3 / 96995
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_479(var uParam0, bool bParam1) //Position: 0x17B24 / 97060
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

void Function_480(var uParam0, bool bParam1, bool bParam2) //Position: 0x17B6B / 97131
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
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
			MEMORY_IDENTIFY(&uVar1, &bParam1);
			if (!&bParam2)
			{
				GET_POSITION(&bParam1, &uVar2);
				MEMORY_REPORT_POSITION(&uVar1, &bParam1, &uVar2);
			}
			else
			{
				MEMORY_REPORT_POSITION_AUTO(&uVar1, &bParam1, 1);
			}
		}
		bVar0++;
	}
	return;
}

int Function_481(bool bParam0, int iParam1) //Position: 0x17BD7 / 97239
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_OBJECTSET_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			ADD_OBJECT_TO_OBJECTSET(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return 1;
}

void Function_482() //Position: 0x17C30 / 97328
{
	*(&iLocal_17 + 1848) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S3_ExitCaves_Wv02"));
	*(&iLocal_17 + 1760[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "EC_wv02_H01", 395, Vector(-328,0974f, 19,32866f, 3964,211f), Vector(0.0f, 191,0333f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1760[02], &iLocal_17 + 1848);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1760[02]);
	TASK_STAND_STILL(&iLocal_17 + 1760[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1760[02], 19);
	*(&iLocal_17 + 1760[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ec_wv02_M02", 392, Vector(-325,3642f, 19,09998f, 3954,983f), Vector(0.0f, 89,54765f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1760[12], &iLocal_17 + 1848);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1760[12]);
	TASK_STAND_STILL(&iLocal_17 + 1760[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1760[12], 19);
	*(&iLocal_17 + 1760[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ec_wv02_E03", 381, Vector(-329,2181f, 19,38497f, 3966,354f), Vector(0.0f, 207,5771f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1760[22], &iLocal_17 + 1848);
	TASK_STAND_STILL(&iLocal_17 + 1760[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1760[22], 19);
	*(&iLocal_17 + 1760[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ec_wv02_E04", 382, Vector(-333,2782f, 19,25056f, 3953,345f), Vector(0.0f, 198,3233f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1760[32], &iLocal_17 + 1848);
	TASK_STAND_STILL(&iLocal_17 + 1760[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1760[32], 19);
	*(&iLocal_17 + 1760[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ec_wv02_E05", 382, Vector(-336,8761f, 19,01925f, 3946,203f), Vector(0.0f, 198,3233f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1760[42], &iLocal_17 + 1848);
	TASK_STAND_STILL(&iLocal_17 + 1760[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1760[42], 19);
	return;
}

void Function_483() //Position: 0x17E74 / 97908
{
	if (!Function_295(&bLocal_1436))
	{
		Function_442(&bLocal_1436);
	}
	else if (Function_293(&bLocal_1436) < 4.0f)
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[23]))
		{
			Function_484(&iLocal_17 + 2608[23]);
		}
		Function_242(&bLocal_1436);
	}
	return;
}

void Function_484(bool bParam0) //Position: 0x17EC0 / 97984
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (IS_VOLUME_VALID(&bParam0))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", &Global_10994, 4294967295, 0);
		if (IS_OBJECTSET_VALID(&uVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(&bParam0, &uVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(&uVar1) - 1))
			{
				iVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar1);
				if (IS_OBJECT_VALID(&iVar2))
				{
					iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
					if (IS_ACTOR_VALID(&iVar3))
					{
						if (&iVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(&iVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(&uVar1);
		}
	}
	return;
}

void Function_485() //Position: 0x17F6D / 98157
{
	int iVar0;
	var uVar2;
	
	if (iLocal_1286 < 3 && iLocal_1286 > 105)
	{
		Function_483();
		Function_448(&bLocal_1408, 60.0f, 130.0f, &bLocal_1313, "Gun03_obj_return", "Gun03_too_far", &bLocal_1300, 0, 0, 0, 325, 1);
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[20]) || IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2608[20]))
		{
			iLocal_1563 = 1;
		}
		if (iLocal_1563 && !iLocal_1562)
		{
			if (IS_ACTOR_VALID(&iLocal_17 + 1264[12]))
			{
				Function_561();
				iLocal_1562 = 1;
			}
		}
		if (iLocal_1286 >= 7)
		{
			Function_556();
			Function_531();
		}
		if (iLocal_1286 <= 12)
		{
			Function_525();
			Function_524();
		}
		if (iLocal_1286 >= 14)
		{
			Function_241(&iLocal_17 + 3528[28]);
			Function_443(StackVal, "$/cutscene/GUN03_CS05/GUN03_CS05", &iLocal_1312, Function_241(&iLocal_17 + 3528[28]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			Function_523();
		}
		if (iLocal_1286 >= 15)
		{
			Function_521();
		}
	}
	switch (iLocal_1286)
	{
		case 0x00000000:
			Function_354(0);
			iLocal_1528 = 0;
			SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
			ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
			TASK_DRAW_HOLSTER_WEAPON(&Global_54076, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			SET_ACTOR_FACTION(&bLocal_1313, 20);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
			if (iLocal_1318[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_1317 = Global_46746[1];
				if (!Function_353(iLocal_1317))
				{
					Function_352(&Local_1273);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_239(&Global_54076, &iLocal_17 + 3528[10], 1, 1, 1);
				Function_239(&bLocal_1313, &iLocal_17 + 3528[11], 1, 1, 1);
				Function_241(&iLocal_17 + 3344[16]);
				Local_1448 = Function_241(&iLocal_17 + 3344[16]);
				uLocal_1461 = LOCATE_ACTOR_OF_TYPE(Local_1448, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(&uLocal_1461))
				{
					DESTROY_ACTOR(&uLocal_1461);
				}
				uLocal_1461 = LOCATE_ACTOR_OF_TYPE(Local_1448, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(&uLocal_1461))
				{
					DESTROY_ACTOR(&uLocal_1461);
				}
				Function_242(&bLocal_1396);
				iLocal_1286 = 1;
			}
			else
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(iLocal_1317) || iLocal_1317 != 4294967295)) && Function_520())
			{
				Function_241(&iLocal_17 + 3344[16]);
				if (Function_512(StackVal, Function_241(&iLocal_17 + 3344[16])))
				{
					Function_508();
					Function_507();
					Function_242(&bLocal_1396);
					iLocal_1286 = 2;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_1587 = Function_462(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1273, iLocal_1285);
			Function_254(iLocal_1285);
			Function_428(StackVal, Function_254(iLocal_1285), iLocal_1285, Global_46746[1], Function_256(iLocal_1285), 0);
			Function_83(&iLocal_17 + 1152[02], &iVar0);
			uVar2 = Function_506(&iLocal_17 + 1152[02]);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			SET_ANIM_SET_FOR_ACTOR(&iLocal_17 + 1152[02], "talking_stand", 1);
			TASK_CLEAR(false);
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_ACTION_PERFORM_AT_POSITION(0, "talking_stand/Talk_A", &iVar0, uVar2, -1.0f, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_17 + 1152[02], bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			Function_83(&iLocal_17 + 1152[12], &iVar0);
			uVar2 = Function_506(&iLocal_17 + 1152[12]);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			SET_ANIM_SET_FOR_ACTOR(&iLocal_17 + 1152[12], "talking_stand", 1);
			TASK_CLEAR(false);
			TASK_DRAW_HOLSTER_WEAPON(0, 1);
			TASK_ACTION_PERFORM_AT_POSITION(0, "talking_stand/Listen_B", &iVar0, uVar2, -1.0f, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iLocal_17 + 1152[12], bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			Function_505(&iLocal_17 + 1192, 0);
			AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
			MEMORY_PREFER_WALKING(&bLocal_1313, 1);
			SET_ACTOR_FACTION(&bLocal_1313, 20);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
			Function_334(&iLocal_1812, 0, 0, 4294967295, 4294967295);
			if (iLocal_1587)
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 3;
			}
			else
			{
				if (Function_353(Global_46746[1]))
				{
					OPEN_DOOR_DIRECTION(Function_318("elmatadero", "slaughterhouse", 1), 1);
					OPEN_DOOR_DIRECTION(Function_318("elmatadero", "slaughterhouse", 2), 0);
				}
				SET_ACTOR_SPEED(&Global_54076, 0.0f);
				Function_239(&Global_54076, &iLocal_17 + 3528[4], 1, 1, 1);
				Function_239(&bLocal_1313, &iLocal_17 + 3528[21], 1, 1, 1);
				Function_239(&bLocal_1457, &iLocal_17 + 3528[5], 1, 1, 1);
				TASK_CLEAR(&bLocal_1457);
				bLocal_1471 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4752, 1, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1471);
				TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
				TASK_PRIORITY_SET(&bLocal_1457, true);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1457, 1);
				TASK_CLEAR(&bLocal_1313);
				bLocal_1471 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4712, 1, 0, 0, 1, false);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
				TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
				Function_242(&bLocal_1396);
				iLocal_1286 = 6;
			}
			break;
		
		case 0x00000003:
			if (Function_297("$/cutscene/GUN03_CS04/GUN03_CS04", &iLocal_1287, &Local_1273, &iLocal_1285, 65596, 104684, 93623, 62034, 61806, 93616, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 6;
			}
			break;
		
		case 0x00000006:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ADD_COMPANION_PERMANENT();
			if (HUD_IS_SHOWING_SMALL_TEXT())
			{
				HUD_CLEAR_SMALL_TEXT();
				HUD_CLEAR_SMALL_TEXT_QUEUE();
			}
			Function_334(&iLocal_1812, 6, 0, 4294967295, 4294967295);
			MEMORY_ALLOW_SHOOTING(&bLocal_1313, false);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1457, "talking_stand", 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1457, true);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1457, false);
			ACTOR_START_FORCE_HOLSTER(&bLocal_1313, 0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1313, 0);
			Function_225(5, 1, 1);
			Function_389(&iLocal_17 + 1192, &bLocal_1457, 2);
			Function_389(&iLocal_17 + 1192, &Global_54076, 2);
			Function_389(&iLocal_17 + 1192, &bLocal_1313, 2);
			Function_503(&bLocal_1457, &iLocal_17 + 1192, 2);
			Function_503(&bLocal_1313, &iLocal_17 + 1192, 2);
			SET_ACTOR_FACTION(&bLocal_1313, 20);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
			Function_242(&bLocal_1396);
			iLocal_1286 = 7;
			break;
		
		case 0x00000007:
			if (Function_293(&bLocal_1396) < 0,2f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				else
				{
					Function_242(&bLocal_1396);
					iLocal_1286 = 8;
					Function_502();
				}
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1396) <= 5.0f)
			{
				Function_501();
				iLocal_1529 = 4294967295;
				iLocal_1528 = 0;
				Function_242(&bLocal_1396);
				Function_242(&bLocal_1404);
				Function_242(&bLocal_1408);
				iLocal_1286 = 9;
			}
			break;
		
		case 0x00000009:
			if (!iLocal_1565[0])
			{
				if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_293(&bLocal_1396) <= 1.0f) || Function_293(&bLocal_1396) <= 5.0f)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
					Function_425("Gun03_obj02b", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1565[0] = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2456[1]))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_242(&bLocal_1440);
				Function_425("Gun03_obj02c", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_201(256);
				Function_241(&iLocal_17 + 3528[26]);
				Function_326(&iLocal_17 + 3528[26]);
				uLocal_1479 = Function_500(StackVal, StackVal, &uLocal_1271, Function_54(), Function_241(&iLocal_17 + 3528[26]), Function_326(&iLocal_17 + 3528[26]), &Global_54076, 3.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_242(&bLocal_1408);
				iLocal_1286 = 10;
			}
			break;
		
		case 0x0000000A:
			if (GATEWAY_UPDATE(&uLocal_1479))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_334(&iLocal_1812, 8, 0, 4294967295, 4294967295);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 2);
				Function_227(&uLocal_1479);
				Function_242(&bLocal_1408);
				iLocal_1286 = 11;
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1457, "stand_ambient/one_hnd") || iLocal_1529 != 3)
			{
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1457, 1);
				SET_ACTOR_FACTION(&bLocal_1313, 20);
				SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
				Function_242(&bLocal_1408);
				iLocal_1286 = 12;
			}
			break;
		
		case 0x0000000C:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_293(&bLocal_1408) < 8.0f) || Function_293(&bLocal_1408) < 12.0f)
			{
				if (bLocal_1532)
				{
					Function_334(&iLocal_1812, 34, 0, 4294967295, 4294967295);
				}
				else
				{
					Function_334(&iLocal_1812, 11, 0, 4294967295, 4294967295);
					Function_499();
				}
				SET_AUTO_CONVERSATION_LOOK(&bLocal_1313, 0);
				AUDIO_ENABLE_PLAYER_TAUNTS();
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1457, 1);
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 0);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1313, 39, 1.0f, 0, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1313, 39, 1);
				SET_ACTOR_FACTION(&bLocal_1313, 20);
				SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
				Function_242(&bLocal_1408);
				iLocal_1286 = 13;
			}
			break;
		
		case 0x0000000D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1408) < 7.0f)
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 14;
			}
			break;
		
		case 0x0000000E:
			if (!Function_383(&iLocal_17 + 1608, 0, 1, 1, 1, 0) && iLocal_1528 != 11)
			{
				Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
				Function_498();
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, false);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 1);
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
				}
				Function_242(&bLocal_1396);
				iLocal_1286 = 15;
			}
			break;
		
		case 0x0000000F:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !Function_140()) || Function_293(&bLocal_1396) < 7.0f)
			{
				Function_425("Gun03_obj03c", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_496(&iLocal_17 + 1416);
				Function_496(&iLocal_17 + 1464);
				Function_496(&iLocal_17 + 1512);
				Function_496(&iLocal_17 + 1560);
				iLocal_1811 = 0;
				Function_494();
				Function_334(&iLocal_1812, 35, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1286 = 16;
			}
			break;
		
		case 0x00000010:
			if (DECOR_GET_BOOL(&bLocal_1313, "rigtaskseq02") && GET_TASK_STATUS(&bLocal_1313, 0) != 0)
			{
				TASK_CLEAR(&bLocal_1313);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 0);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
				ACTOR_END_FORCE_HOLSTER(&bLocal_1313);
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
				Function_241(&iLocal_17 + 3776[17]);
				Local_1448 = Function_241(&iLocal_17 + 3776[17]);
				Function_326(&iLocal_17 + 3776[17]);
				Local_1451 = Function_326(&iLocal_17 + 3776[17]);
				iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
				bLocal_1471 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(0, 1);
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 3.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
				TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
				TASK_PRIORITY_SET(&bLocal_1313, false);
				SET_ACTOR_FACTION(&bLocal_1313, 20);
				SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
				DECOR_REMOVE(&bLocal_1313, "rigtaskseq02");
			}
			if (!Function_383(&iLocal_17 + 1656, 0, 1, 1, 1, 0))
			{
				Function_334(&iLocal_1812, 35, 0, 4294967295, 4294967295);
				Function_492();
				Function_242(&bLocal_1396);
				iLocal_1286 = 17;
			}
			break;
		
		case 0x00000011:
			if (DECOR_GET_BOOL(&bLocal_1313, "rigtaskseq02") && GET_TASK_STATUS(&bLocal_1313, 0) != 0)
			{
				TASK_CLEAR(&bLocal_1313);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
				ACTOR_END_FORCE_HOLSTER(&bLocal_1313);
				MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
				Function_241(&iLocal_17 + 3776[17]);
				Local_1448 = Function_241(&iLocal_17 + 3776[17]);
				Function_326(&iLocal_17 + 3776[17]);
				Local_1451 = Function_326(&iLocal_17 + 3776[17]);
				iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
				bLocal_1471 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(0, 1);
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 3.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
				TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
				TASK_PRIORITY_SET(&bLocal_1313, false);
				SET_ACTOR_FACTION(&bLocal_1313, 20);
				SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
				DECOR_REMOVE(&bLocal_1313, "rigtaskseq02");
			}
			if ((((((Function_491(&iLocal_17 + 1416, 1, 1, 1, 1, 0) >= 0 && Function_491(&iLocal_17 + 1464, 1, 1, 1, 1, 0) >= 0) && Function_491(&iLocal_17 + 1512, 1, 1, 1, 1, 0) >= 0) && Function_491(&iLocal_17 + 1560, 1, 1, 1, 1, 0) >= 0) && Function_491(&iLocal_17 + 1608, 1, 1, 1, 1, 0) >= 0) && Function_491(&iLocal_17 + 1656, 1, 1, 1, 1, 0) >= 0) && Function_491(&iLocal_17 + 1704, 1, 1, 1, 1, 0) >= 0)
			{
				if (Function_293(&bLocal_1396) < 3.0f)
				{
					Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
					Function_490();
					SET_ACTOR_FACTION(&bLocal_1313, 20);
					SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
					Function_241(&iLocal_17 + 3776[4]);
					Function_326(&iLocal_17 + 3776[4]);
					uLocal_1479 = Function_500(StackVal, StackVal, &uLocal_1271, Function_54(), Function_241(&iLocal_17 + 3776[4]), Function_326(&iLocal_17 + 3776[4]), &Global_54076, 3.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_225(5, 0, 1);
					Function_242(&bLocal_1396);
					Function_242(&bLocal_1404);
					Function_242(&bLocal_1408);
					iLocal_1286 = 18;
				}
			}
			else
			{
				Function_242(&bLocal_1396);
			}
			break;
		
		case 0x00000012:
			if (Function_486(&uLocal_1479, 0, 1, 0, 0, 0))
			{
				Function_334(&iLocal_1812, 7, 0, 4294967295, 4294967295);
				Function_464();
				Function_242(&bLocal_1396);
				iLocal_1318[2] = 1;
				Function_232();
				iLocal_1285 = 3;
				iLocal_1286 = 0;
				DESTROY_OBJECT(&uLocal_1479);
			}
			if ((!Function_140() && !DECOR_CHECK_EXIST(&uLocal_1271, "obj03d")) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_425("Gun03_obj03d", 7,5f, 1, 2, 0, 0, 0, 0);
				DECOR_SET_BOOL(&uLocal_1271, "obj03d", 1);
			}
			break;
	}
	return;
}

bool Function_486(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x18D2F / 101679
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &uParam1, &uParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_489(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_488(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_488(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_487(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_487(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_487(vector3 vParam0) //Position: 0x18F64 / 102244
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_488(var uParam0, bool bParam1) //Position: 0x18FDA / 102362
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_489(var uParam0, bool bParam1) //Position: 0x18FFB / 102395
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_488(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_490() //Position: 0x19065 / 102501
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_StandBack", "Gun03_StandBack", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_491(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x190AC / 102572
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	iVar3 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				bVar2 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar1, 3) || IS_ACTOR_CRIPPLED(&uVar1, 4))
					{
						bVar2 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar1))
					{
						bVar2 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar1, 1.0f))
					{
						bVar2 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar1))
					{
						bVar2 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar1) && !IS_ACTOR_RIDING_VEHICLE(&uVar1))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					iVar3++;
				}
			}
		}
		bVar0++;
	}
	return iVar3;
}

void Function_492() //Position: 0x19177 / 102775
{
	Function_493();
	Function_418(&iLocal_17 + 1704, 1);
	Function_474(&iLocal_17 + 1704);
	Function_241(&iLocal_17 + 3776[15]);
	Local_1448 = Function_241(&iLocal_17 + 3776[15]);
	Function_326(&iLocal_17 + 3776[15]);
	Local_1451 = Function_326(&iLocal_17 + 3776[15]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4768, 4, 0, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1664[02], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_17 + 1664[02], false);
	Function_241(&iLocal_17 + 3776[16]);
	Local_1448 = Function_241(&iLocal_17 + 3776[16]);
	Function_326(&iLocal_17 + 3776[16]);
	Local_1451 = Function_326(&iLocal_17 + 3776[16]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4768, 4, 0, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1664[12], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_17 + 1664[12], false);
	return;
}

void Function_493() //Position: 0x1929A / 103066
{
	*(&iLocal_17 + 1704) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveRushers_Wv02"));
	*(&iLocal_17 + 1664[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CR_wv02_H01", 394, Vector(-329,3142f, 19,27778f, 3966,351f), Vector(0.0f, 191,0333f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1664[02], &iLocal_17 + 1704);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1664[02]);
	SET_ACTOR_FACTION(&iLocal_17 + 1664[02], 19);
	*(&iLocal_17 + 1664[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CR_wv02_E01", 379, Vector(-329,9125f, 19,39374f, 3962,487f), Vector(0.0f, 189,5325f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1664[12], &iLocal_17 + 1704);
	SET_ACTOR_FACTION(&iLocal_17 + 1664[12], 19);
	return;
}

void Function_494() //Position: 0x19381 / 103297
{
	Function_495();
	Function_418(&iLocal_17 + 1656, 1);
	Function_474(&iLocal_17 + 1656);
	Function_241(&iLocal_17 + 3776[6]);
	Local_1448 = Function_241(&iLocal_17 + 3776[6]);
	Function_326(&iLocal_17 + 3776[6]);
	Local_1451 = Function_326(&iLocal_17 + 3776[6]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4768, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(&iLocal_1511))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 3.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1616[02], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_17 + 1616[02], false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 1616[02], 8, 1.0f);
	Function_241(&iLocal_17 + 3776[7]);
	Local_1448 = Function_241(&iLocal_17 + 3776[7]);
	Function_326(&iLocal_17 + 3776[7]);
	Local_1451 = Function_326(&iLocal_17 + 3776[7]);
	iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4768, 4, 0, 0, 1, false);
	if (IS_COVER_LOCATION_VALID(&iLocal_1511))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 3.0f);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1616[12], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_17 + 1616[12], false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 1616[12], 8, 1.0f);
	return;
}

void Function_495() //Position: 0x194EC / 103660
{
	*(&iLocal_17 + 1656) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveRushers_Wv01"));
	*(&iLocal_17 + 1616[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CR_wv01_E02", 380, Vector(-329,3142f, 19,27778f, 3966,351f), Vector(0.0f, 191,0333f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1616[02], &iLocal_17 + 1656);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1616[02]);
	SET_ACTOR_FACTION(&iLocal_17 + 1616[02], 19);
	*(&iLocal_17 + 1616[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CR_wv01_M02", 392, Vector(-329,9125f, 19,39374f, 3962,487f), Vector(0.0f, 189,5325f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1616[12], &iLocal_17 + 1656);
	SET_ACTOR_FACTION(&iLocal_17 + 1616[12], 19);
	return;
}

void Function_496(int iParam0) //Position: 0x195D3 / 103891
{
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (Function_497(&iParam0) >= 0)
		{
			SQUAD_GOALS_CLEAR(&iParam0);
			Function_438(&iParam0);
			Function_480(&iParam0, &Global_54076, 1);
			Function_480(&iParam0, &bLocal_1313, 1);
			SQUAD_GOAL_ADD_COMBAT(&iParam0, 0, 4294967295, 0);
		}
	}
	return;
}

int Function_497(int iParam0) //Position: 0x19618 / 103960
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_498() //Position: 0x1966E / 104046
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ReachLuisaCell", "Gun03_ReachLuisaCell", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x196BF / 104127
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SetOffCaves", "Gun03_SetOffCaves", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_500(var uParam0, char* cParam1, float fParam9, int iParam10, int iParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x1970A / 104202
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &iParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_501() //Position: 0x197F5 / 104437
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SetOffSlaughter", "Gun03_SetOffSlaughter", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_502() //Position: 0x19848 / 104520
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_CarlosWalksOut", "Gun03_CarlosWalksOut", 0, 1, 1, 0, 1);
		Function_361(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503(bool bParam0, var uParam1, bool bParam2) //Position: 0x1989A / 104602
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&bParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

int Function_504() //Position: 0x198EC / 104684
{
	if (iLocal_1285 == 0)
	{
		DISABLE_CHILD_SECTOR("chu_corral01props01x");
		DISABLE_CHILD_SECTOR("chu_trainstation01Props01x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("emt_barn01props01x");
		DISABLE_CHILD_SECTOR("emt_barn01x");
		DISABLE_CHILD_SECTOR("emt_residence01props01x");
		DISABLE_CHILD_SECTOR("emt_residence01x");
		DISABLE_CHILD_SECTOR("emt_shack01props01x");
		DISABLE_CHILD_SECTOR("emt_shack01x");
	}
	return 1;
}

void Function_505(var uParam0, bool bParam1) //Position: 0x199BE / 104894
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_ALLOW_SHOOTING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

var Function_506(bool bParam0) //Position: 0x19A0D / 104973
{
	return GET_HEADING(&bParam0);
}

void Function_507() //Position: 0x19A19 / 104985
{
	*(&iLocal_17 + 2264) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "nS2_Horses"));
	*(&iLocal_17 + 2240[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S2_CompanionHorse", 976, Vector(-414,4468f, 23,76431f, 3918,616f), Vector(0.0f, -25,4743f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 2240[02], &iLocal_17 + 2264);
	ACCESSORIZE_HORSE(&iLocal_17 + 2240[02], 3);
	return;
}

void Function_508() //Position: 0x19A98 / 105112
{
	if (!IS_ACTOR_VALID(&bLocal_1457))
	{
		Function_510();
	}
	if (!SQUAD_IS_VALID(&iLocal_17 + 1192))
	{
		Function_509();
		bLocal_1530 = false;
		while (bLocal_1530 <= SQUAD_GET_SIZE(&iLocal_17 + 1192))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_17 + 1192, bLocal_1530), true);
			bLocal_1530++;
		}
		TASK_STAND_STILL(&iLocal_17 + 1152[02], -1.0f, 0, 0);
		TASK_STAND_STILL(&iLocal_17 + 1152[12], -1.0f, 0, 0);
		SQUAD_SET_FACTION(&iLocal_17 + 1192, 19);
		SET_ACTOR_HEARING_MAX_RANGE(&iLocal_17 + 1152[02], 30.0f);
		SET_ACTOR_VISION_MAX_RANGE(&iLocal_17 + 1152[02], 30.0f, 1);
		SET_ACTOR_HEARING_MAX_RANGE(&iLocal_17 + 1152[12], 30.0f);
		SET_ACTOR_VISION_MAX_RANGE(&iLocal_17 + 1152[12], 30.0f, 1);
	}
	uLocal_1509 = Function_319(Global_46894[0], "elMatadero", "caveInterior01", 3);
	if (IS_DOOR_VALID(&uLocal_1509))
	{
		SHOW_PHYSINST(&uLocal_1509);
		CLOSE_DOOR_FAST(&uLocal_1509);
		Function_127(&uLocal_1509, 0);
	}
	else
	{
		LOG_ERROR("door was NOT valid");
	}
	return;
}

void Function_509() //Position: 0x19BC4 / 105412
{
	*(&iLocal_17 + 1192) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S3_CaveGuardsEntrance"));
	*(&iLocal_17 + 1152[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveGuardEntrance01", 380, Vector(-360,8039f, 17,66677f, 3943,41f), Vector(0.0f, 88,34389f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1152[02], &iLocal_17 + 1192);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_17 + 1152[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1152[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1152[02], 42, 0,5f, 1, 1);
	*(&iLocal_17 + 1152[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveGuardEntrance02", 379, Vector(-360,9928f, 17,83106f, 3947,257f), Vector(0.0f, 100,6623f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1152[12], &iLocal_17 + 1192);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_17 + 1152[12], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1152[12], 42, 0,5f, 1, 1);
	return;
}

void Function_510() //Position: 0x19CE5 / 105701
{
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2456[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2456[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2456[14]);
	Function_511();
	bLocal_1457 = &iLocal_17 + 1120[02];
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_1457, 8, "FASTWALK");
	Function_373(&(Local_1646[315]), &bLocal_1457, "Carlos", 0, 0x5f5e100, 1);
	Function_373(&(Local_1646[015]), &bLocal_1313, "Gunslinger", 0, 0x5f5e100, 1);
	TASK_STAND_STILL(&iLocal_17 + 1120[02], -1.0f, 1, 0);
	return;
}

void Function_511() //Position: 0x19D83 / 105859
{
	*(&iLocal_17 + 1144) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_InsideManGroup"));
	*(&iLocal_17 + 1120[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nInsideMan", 615, Vector(-398,0501f, 24,16975f, 3894,677f), Vector(0.0f, 148,3281f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1120[02], &iLocal_17 + 1144);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_17 + 1120[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1120[02]);
	SET_ACTOR_FACTION(&iLocal_17 + 1120[02], 20);
	return;
}

bool Function_512(vector3 vParam0) //Position: 0x19E1B / 106011
{
	if (!iLocal_1581)
	{
		if (GET_MOUNT(&Global_54076) != &iLocal_1315)
		{
			if (IS_ACTOR_VALID(&iLocal_1315))
			{
				DESTROY_ACTOR(&iLocal_1315);
			}
		}
		iLocal_1581 = 1;
	}
	if (!IS_ACTOR_VALID(&iLocal_1315))
	{
		iLocal_1315 = Function_513(1, 1, vParam0.x, vParam0.y, vParam0.z, 0, 1, 0);
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(&iLocal_1315, 1))
	{
		SET_ACTOR_UPDATE_PRIORITY(&iLocal_1315, false);
		return 0;
	}
	return 1;
}

var Function_513(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x19E88 / 106120
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
		Function_519(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_518())
		{
			return "";
		}
	}
	if (!Function_516())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_205();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_241(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_241(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_241(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_241(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_515(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_515(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_74(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_514(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_514(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1A1E5 / 106981
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &iParam4);
	}
}

var Function_515(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1A22F / 107055
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

bool Function_516() //Position: 0x1A2CF / 107215
{
	if (Function_517() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_517() //Position: 0x1A2E5 / 107237
{
	return Global_21369.f_244;
}

bool Function_518() //Position: 0x1A2F0 / 107248
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_519(var uParam0, bool bParam1, bool bParam2) //Position: 0x1A310 / 107280
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

int Function_520() //Position: 0x1A33F / 107327
{
	Function_351(&iLocal_17 + 360, 976, 2, 0);
	Function_351(&iLocal_17 + 360, 615, 2, 0);
	Function_351(&iLocal_17 + 360, 380, 2, 0);
	Function_351(&iLocal_17 + 360, 379, 2, 0);
	Function_351(&iLocal_17 + 360, 391, 2, 0);
	Function_351(&iLocal_17 + 360, 392, 2, 0);
	Function_351(&iLocal_17 + 360, 384, 2, 0);
	Function_351(&iLocal_17 + 360, 396, 2, 0);
	Function_351(&iLocal_17 + 360, 385, 2, 0);
	Function_351(&iLocal_17 + 360, 386, 2, 0);
	Function_351(&iLocal_17 + 360, 381, 2, 0);
	Function_351(&iLocal_17 + 360, 390, 2, 0);
	Function_351(&iLocal_17 + 360, 394, 2, 0);
	if (Function_346(&iLocal_17 + 360))
	{
		return 1;
	}
	return 0;
}

void Function_521() //Position: 0x1A409 / 107529
{
	if (iLocal_1811 == 0)
	{
		if (Function_383(&iLocal_17 + 1656, 0, 1, 1, 1, 0))
		{
			if (Function_395(&Global_54076, &iLocal_17 + 1656, 1, 0, 0, 3212836864) || Function_393(&iLocal_17 + 1656, &Global_54076, 1, 0, 0))
			{
				Function_522();
				Function_334(&iLocal_1812, 35, 0, 4294967295, 4294967295);
				iLocal_1811 = 1;
			}
		}
	}
	else if (iLocal_1811 == 1)
	{
		if (!Function_383(&iLocal_17 + 1656, 0, 1, 1, 1, 0))
		{
			Function_334(&iLocal_1812, 12, 0, 4294967295, 4294967295);
			iLocal_1811 = 2;
		}
	}
	else if (iLocal_1811 == 2)
	{
		if (Function_383(&iLocal_17 + 1704, 0, 1, 1, 1, 0))
		{
			if (Function_395(&Global_54076, &iLocal_17 + 1704, 1, 0, 0, 3212836864) || Function_393(&iLocal_17 + 1704, &Global_54076, 1, 0, 0))
			{
				Function_334(&iLocal_1812, 35, 0, 4294967295, 4294967295);
				iLocal_1811 = 3;
			}
		}
	}
	return;
}

void Function_522() //Position: 0x1A4E0 / 107744
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_NoKillEnemiesCell", "Gun03_NoKillEnemiesCell", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1A537 / 107831
{
	if (!DECOR_CHECK_EXIST(&bLocal_1313, "rigtaskseq01"))
	{
		Function_241(&iLocal_17 + 3776[17]);
		Local_1448 = Function_241(&iLocal_17 + 3776[17]);
		Function_326(&iLocal_17 + 3776[17]);
		Local_1451 = Function_326(&iLocal_17 + 3776[17]);
		TASK_CLEAR(&bLocal_1313);
		bLocal_1471 = TASK_SEQUENCE_OPEN();
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_17 + 4664), "usecase1", 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
		TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
		TASK_PRIORITY_SET(&bLocal_1313, true);
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 1);
		MEMORY_ALLOW_PICKUP_WEAPONS(&bLocal_1313, 0);
		DECOR_SET_BOOL(&bLocal_1313, "rigtaskseq02", 1);
		DECOR_SET_BOOL(&bLocal_1313, "rigtaskseq01", 1);
	}
	return;
}

void Function_524() //Position: 0x1A5FC / 108028
{
	if (!iLocal_1575)
	{
		if (IS_DOOR_VALID(Function_318("elmatadero", "slaughterhouse", 1)) && IS_DOOR_VALID(Function_318("elmatadero", "slaughterhouse", 2)))
		{
			if (!IS_DOOR_OPENED(Function_318("elmatadero", "slaughterhouse", 1)))
			{
				OPEN_DOOR_DIRECTION(Function_318("elmatadero", "slaughterhouse", 1), 1);
			}
			if (!IS_DOOR_OPENED(Function_318("elmatadero", "slaughterhouse", 2)))
			{
				OPEN_DOOR_DIRECTION(Function_318("elmatadero", "slaughterhouse", 2), 0);
			}
			iLocal_1575 = 1;
		}
	}
	return;
}

void Function_525() //Position: 0x1A6F9 / 108281
{
	if (((Function_395(&Global_54076, &iLocal_17 + 1192, 1, 0, 0, 3212836864) || (IS_ACTOR_SHOOTING(&Global_54076) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2456[1]))) || (Function_530(&iLocal_17 + 1192, &Global_54076) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[2]))) && !bLocal_1532)
	{
		if (IS_BLIP_VALID(&bLocal_1493))
		{
			REMOVE_BLIP(&bLocal_1493);
		}
		if (IS_OBJECT_VALID(&uLocal_1479))
		{
			Function_227(&uLocal_1479);
		}
		Function_529();
		TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_17 + 1200[02], &Global_54076, 15.0f, 2);
		TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_17 + 1200[12], &Global_54076, 15.0f, 2);
		TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_17 + 1200[22], &bLocal_1313, 15.0f, 2);
		Function_528(&iLocal_17 + 1256, 2);
		Function_387(&iLocal_17 + 1256, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_527(&iLocal_17 + 1192);
		SQUAD_GOALS_CLEAR(&iLocal_17 + 1192);
		Function_438(&iLocal_17 + 1192);
		Function_505(&iLocal_17 + 1192, 1);
		Function_387(&iLocal_17 + 1192, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_317(&iLocal_17 + 1152[02]);
		Local_1448 = Function_317(&iLocal_17 + 1152[02]);
		TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 1152[02], &Local_1448, 90.0f, -1.0f);
		Function_241(&iLocal_17 + 4160[14]);
		Local_1448 = Function_241(&iLocal_17 + 4160[14]);
		TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1152[12], FIND_NEAREST_COVER_LOCATION(&Local_1448, 5.0f, 90.0f, 60.0f, 7), -1.0f, 1086324736);
		MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 0);
		GIVE_WEAPON_TO_ACTOR(&bLocal_1313, 39, 1.0f, 0, 1);
		ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1313, 39, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
		TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, 2);
		AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1457, 1);
		HUD_CLEAR_OBJECTIVE();
		AUDIO_SET_PLAYER_MOOD(1, 0);
		Function_334(&iLocal_1812, 34, 0, 4294967295, 4294967295);
		bLocal_1532 = true;
		iLocal_1528 = 1;
		iLocal_1529 = 4;
		Function_526();
		Function_242(&bLocal_1408);
		iLocal_1286 = 12;
	}
	return;
}

void Function_526() //Position: 0x1A8E8 / 108776
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_NoHelpCarlos", "Gun03_NoHelpCarlos", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527(int iParam0) //Position: 0x1A935 / 108853
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_528(var uParam0, bool bParam1) //Position: 0x1A96D / 108909
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_529() //Position: 0x1A9BC / 108988
{
	*(&iLocal_17 + 1256) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_entranceagrobackup"));
	*(&iLocal_17 + 1200[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveGuardFrontEscape01", 391, Vector(-338,739f, 18,82721f, 3947,613f), Vector(0.0f, 153,4671f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1200[02], &iLocal_17 + 1256);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1200[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1200[02], 43, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1200[02], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_17 + 1200[02], 19);
	*(&iLocal_17 + 1200[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveGuardFrontEscape02", 392, Vector(-337,2628f, 19,37782f, 3953,792f), Vector(0.0f, 366,8994f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1200[12], &iLocal_17 + 1256);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1200[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1200[12], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1200[12], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_17 + 1200[12], 19);
	*(&iLocal_17 + 1200[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveGuardFrontEscape03", 384, Vector(-334,4087f, 19,39574f, 3954,907f), Vector(0.0f, 51,27706f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1200[22], &iLocal_17 + 1256);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1200[22], 39, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iLocal_17 + 1200[22], 19);
	return;
}

int Function_530(var uParam0, int iParam1) //Position: 0x1AB93 / 109459
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1) && MEMORY_GET_IS_VISIBLE(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_531() //Position: 0x1ABF1 / 109553
{
	if (iLocal_1528 < 3 && iLocal_1528 >= 10)
	{
		Function_396(2);
	}
	if (iLocal_1528 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2456[12]))
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
			Function_242(&bLocal_1404);
			iLocal_1528 = 4294967293;
		}
	}
	else if (iLocal_1528 == 4294967295)
	{
		if (Function_293(&bLocal_1404) < 3.0f)
		{
			STOP_FORCE_LOOK_AT_COORD(&bLocal_1313);
			TASK_CLEAR(&bLocal_1313);
			Function_242(&bLocal_1404);
			iLocal_1528 = 4294967294;
		}
	}
	else if (iLocal_1528 == 4294967294)
	{
		if (GET_TASK_STATUS(&bLocal_1313, 19) == 0)
		{
			TASK_CLEAR(&bLocal_1313);
			FORCE_LOOK_AT_ACTOR(&bLocal_1313, &Global_54076, 3.0f);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			Function_242(&bLocal_1404);
			iLocal_1528 = 4294967295;
		}
	}
	else if (iLocal_1528 == 1)
	{
		if (iLocal_1286 > 12)
		{
			AI_STOP_IGNORING_ACTORS();
			STOP_FORCE_LOOK_AT_COORD(&bLocal_1313);
			ACTOR_END_FORCE_HOLSTER(&bLocal_1313);
			SQUAD_JOIN(&bLocal_1313, &uLocal_1475);
			Function_384(&uLocal_1475, 40.0f);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1313, true);
			Function_476(&bLocal_1313, &iLocal_17 + 1192, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1313, 1);
			MEMORY_ALLOW_SHOOTING(&bLocal_1313, true);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 0);
			GIVE_WEAPON_TO_ACTOR(&bLocal_1313, 39, 1.0f, 0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1313, 39, 1);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1313)))
			{
				Function_225(5, 1, 1);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1313, 100.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1313, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1313, 54, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1313, 31, -1.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1313, 59, 0.0f);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_1313, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, true);
			Function_241(&iLocal_17 + 4048[8]);
			Local_1448 = Function_241(&iLocal_17 + 4048[8]);
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &Local_1448, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_1448, 280.0f, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			SET_ACTOR_FACTION(&bLocal_1313, 20);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
			Function_242(&bLocal_1404);
			if (!bLocal_1532)
			{
				Function_241(&iLocal_17 + 4048[3]);
				Local_1448 = Function_241(&iLocal_17 + 4048[3]);
				TASK_CLEAR(&bLocal_1313);
				bLocal_1471 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4824, 2, 1, 0, 1, false);
				TASK_SHOOT_ENEMIES_FROM_COVER(0, FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
				TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
				TASK_PRIORITY_SET(&bLocal_1313, true);
				Function_555();
				iLocal_1528 = 2;
			}
			else
			{
				Function_334(&iLocal_1812, 34, 0, 4294967295, 4294967295);
				iLocal_1528 = 10;
			}
		}
	}
	else if (iLocal_1528 == 10)
	{
		if (iLocal_1529 < 6 || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[14]))
		{
			Function_241(&iLocal_17 + 4048[3]);
			Local_1448 = Function_241(&iLocal_17 + 4048[3]);
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4824, 2, 1, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_COVER(0, FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_554();
			Function_242(&bLocal_1404);
			iLocal_1528 = 2;
		}
	}
	else if (iLocal_1528 == 2)
	{
		if (Function_293(&bLocal_1404) < 7,5f && !iLocal_1565[1])
		{
			if (IS_BLIP_VALID(&bLocal_1493))
			{
				REMOVE_BLIP(&bLocal_1493);
			}
			if (!IS_BLIP_VALID(&bLocal_1493))
			{
				bLocal_1493 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 3528[24], 330, 0f, 2, 0);
			}
			Function_425("Gun03_obj03b", 0x40f00000, 1, 2, 0, 0, 0, 0);
			iLocal_1565[1] = 1;
		}
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[14]))
		{
			if (!iLocal_1565[1])
			{
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
				}
				if (!IS_BLIP_VALID(&bLocal_1493))
				{
					bLocal_1493 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 3528[24], 330, 0f, 2, 0);
				}
				Function_425("Gun03_obj03b", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1565[1] = 1;
			}
			if (!bLocal_1532)
			{
				Function_553(&iLocal_17 + 1192);
			}
			Function_551(&bLocal_1457);
			Function_550();
			Function_387(&iLocal_17 + 1416, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_549();
			Function_387(&iLocal_17 + 1320, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_548();
			Function_387(&iLocal_17 + 1464, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_543();
			Function_387(&iLocal_17 + 1368, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_542();
			Function_387(&iLocal_17 + 1512, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_541();
			Function_387(&iLocal_17 + 1560, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_540();
			Function_387(&iLocal_17 + 1608, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iLocal_17 + 1264[12], 0);
			Function_334(&iLocal_1812, 34, 0, 4294967295, 4294967295);
			AUDIO_SET_PLAYER_MOOD(1, 0);
			Function_539();
			Function_242(&bLocal_1404);
			iLocal_1528 = 3;
		}
	}
	else if (iLocal_1528 == 3)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[15]))
		{
			Function_442(&bLocal_1412);
			Function_442(&bLocal_1416);
			Function_442(&bLocal_1420);
			MEMORY_ATTACK_ON_SIGHT(&bLocal_1313, 1);
			Function_241(&iLocal_17 + 4048[3]);
			Local_1448 = Function_241(&iLocal_17 + 4048[3]);
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4824, 2, 1, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_COVER(0, FIND_NEAREST_COVER_LOCATION(&Local_1448, 4.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_242(&bLocal_1404);
			iLocal_1528 = 4;
		}
	}
	else if (iLocal_1528 == 4)
	{
		if (Function_293(&bLocal_1420) < 8.0f && !iLocal_1564)
		{
			TASK_CLEAR(&iLocal_17 + 1376[02]);
			Function_538(&iLocal_17 + 1376[02], 3212836864);
			iLocal_1564 = 1;
		}
		if (!Function_468(&iLocal_17 + 1376[02], 0, 1, 1, 1, 0, 0, 0, 0) && !Function_468(&iLocal_17 + 1264[12], 0, 1, 1, 1, 0, 0, 0, 0))
		{
			Function_241(&iLocal_17 + 4048[4]);
			Local_1448 = Function_241(&iLocal_17 + 4048[4]);
			TASK_CLEAR(&bLocal_1313);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1313, FIND_NEAREST_COVER_LOCATION(&Local_1448, 4.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			Function_242(&bLocal_1404);
			iLocal_1528 = 5;
		}
	}
	else if (iLocal_1528 == 5)
	{
		if (!Function_383(&iLocal_17 + 1320, 0, 1, 1, 1, 0) && !Function_383(&iLocal_17 + 1416, 0, 1, 1, 1, 0))
		{
			Function_537();
			Function_241(&iLocal_17 + 4048[9]);
			Local_1448 = Function_241(&iLocal_17 + 4048[9]);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1313, FIND_NEAREST_COVER_LOCATION(&Local_1448, 4.0f, 195.0f, 60.0f, 7), -1.0f, 1086324736);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_242(&bLocal_1404);
			iLocal_1528 = 6;
		}
	}
	else if (iLocal_1528 == 6)
	{
		if (!Function_383(&iLocal_17 + 1368, 0, 1, 1, 1, 0) && !Function_383(&iLocal_17 + 1464, 0, 1, 1, 1, 0))
		{
			Function_536();
			Function_241(&iLocal_17 + 4048[6]);
			Local_1448 = Function_241(&iLocal_17 + 4048[6]);
			Function_535();
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4832, 2, 0, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_1448, 197.0f, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_242(&bLocal_1404);
			iLocal_1528 = 7;
		}
		else if ((IS_PLAYER_USING_COVER(0) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[21])) && !iLocal_1583)
		{
			Function_241(&iLocal_17 + 4048[11]);
			Local_1448 = Function_241(&iLocal_17 + 4048[11]);
			TASK_CLEAR(&bLocal_1313);
			TASK_SHOOT_ENEMIES_FROM_POSITION(&bLocal_1313, &Local_1448, 175.0f, -1.0f);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			iLocal_1583 = 1;
		}
	}
	else if (iLocal_1528 == 7)
	{
		if (!Function_383(&iLocal_17 + 1512, 0, 1, 1, 1, 0))
		{
			Function_534();
			Function_532();
			iLocal_1511 = GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 4704);
			TASK_CLEAR(&bLocal_1313);
			if (IS_COVER_LOCATION_VALID(&iLocal_1511))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1313, &iLocal_1511, -1.0f, 3.0f);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &bLocal_1313, &Local_1448, -1f);
			}
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_242(&bLocal_1404);
			iLocal_1528 = 8;
		}
	}
	else if (iLocal_1528 == 8)
	{
		if (!Function_383(&iLocal_17 + 1560, 0, 1, 1, 1, 0))
		{
			Function_241(&iLocal_17 + 4048[7]);
			Local_1448 = Function_241(&iLocal_17 + 4048[7]);
			Function_326(&iLocal_17 + 4048[7]);
			Local_1451 = Function_326(&iLocal_17 + 4048[7]);
			iLocal_1511 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_1448, 2.0f, 90.0f, 4);
			uLocal_1454 = Vector(-0,1180153f, 0,09604158f, 0.0f);
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_SHOOT_AT_COORD(0, &uLocal_1454, 4.0f);
			if (IS_COVER_LOCATION_VALID(&iLocal_1511))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_1511, -1.0f, 3.0f);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_1448, -1f);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1313, 8, 1.0f);
			Function_242(&bLocal_1404);
			iLocal_1528 = 9;
		}
	}
	else if (iLocal_1528 == 9)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2608[22]))
		{
			Function_242(&bLocal_1404);
			iLocal_1528 = 11;
		}
	}
	return;
}

void Function_532() //Position: 0x1B549 / 111945
{
	Function_438(&iLocal_17 + 1608);
	Function_418(&iLocal_17 + 1608, 1);
	Function_475(&iLocal_17 + 1608, 0);
	Function_386(&iLocal_17 + 1608, &Global_54076, 0);
	Function_533(&iLocal_17 + 1608);
	Function_476(&bLocal_1313, &iLocal_17 + 1608, 1);
	Function_241(&iLocal_17 + 4160[13]);
	Local_1448 = Function_241(&iLocal_17 + 4160[13]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1568[02], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 15.0f, 30.0f, 1), -1.0f, 1086324736);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1568[12], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 15.0f, 30.0f, 2), -1.0f, 1086324736);
	return;
}

void Function_533(var uParam0) //Position: 0x1B5E9 / 112105
{
	bLocal_1530 = false;
	while (bLocal_1530 <= SQUAD_GET_SIZE(&uParam0))
	{
		uLocal_1461 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_1530);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uLocal_1461, 15, true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uLocal_1461, 20, 0,8f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uLocal_1461, 49, 6.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uLocal_1461, 0,6f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uLocal_1461, 8, 80.0f);
		bLocal_1530++;
	}
	return;
}

void Function_534() //Position: 0x1B653 / 112211
{
	Function_438(&iLocal_17 + 1560);
	Function_418(&iLocal_17 + 1560, 1);
	Function_475(&iLocal_17 + 1560, 0);
	Function_386(&iLocal_17 + 1560, &Global_54076, 0);
	Function_533(&iLocal_17 + 1560);
	Function_476(&bLocal_1313, &iLocal_17 + 1560, 1);
	Function_241(&iLocal_17 + 4160[8]);
	Local_1448 = Function_241(&iLocal_17 + 4160[8]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1520[02], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 90.0f, 30.0f, 7), -1.0f, 1086324736);
	Function_241(&iLocal_17 + 4160[12]);
	Local_1448 = Function_241(&iLocal_17 + 4160[12]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1520[12], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 90.0f, 30.0f, 7), -1.0f, 1086324736);
	return;
}

void Function_535() //Position: 0x1B704 / 112388
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_2FarBehindEscape", "Gun03_2FarBehindEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x1B759 / 112473
{
	Function_438(&iLocal_17 + 1512);
	Function_418(&iLocal_17 + 1512, 1);
	Function_475(&iLocal_17 + 1512, 0);
	Function_386(&iLocal_17 + 1512, &Global_54076, 0);
	Function_533(&iLocal_17 + 1512);
	Function_476(&bLocal_1313, &iLocal_17 + 1512, 1);
	Function_241(&iLocal_17 + 4160[9]);
	Local_1448 = Function_241(&iLocal_17 + 4160[9]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1472[12], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 90.0f, 30.0f, 7), -1.0f, 1086324736);
	Function_241(&iLocal_17 + 4160[10]);
	Local_1448 = Function_241(&iLocal_17 + 4160[10]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 1472[02], &Local_1448, 83.0f, -1.0f);
	return;
}

void Function_537() //Position: 0x1B7FB / 112635
{
	Function_438(&iLocal_17 + 1368);
	Function_418(&iLocal_17 + 1368, 1);
	Function_475(&iLocal_17 + 1368, 0);
	Function_386(&iLocal_17 + 1368, &bLocal_1313, 0);
	Function_533(&iLocal_17 + 1368);
	Function_476(&bLocal_1313, &iLocal_17 + 1368, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1328[02], 43, 1.0f, 0, 0);
	Function_241(&iLocal_17 + 4160[15]);
	Local_1448 = Function_241(&iLocal_17 + 4160[15]);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4848, 2, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_1448, 2.0f, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1328[02], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	TASK_PRIORITY_SET(&iLocal_17 + 1328[02], true);
	Function_241(&iLocal_17 + 4160[7]);
	Local_1448 = Function_241(&iLocal_17 + 4160[7]);
	bLocal_1471 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4864, 2, 1, 0, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_1448, 2.0f, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_17 + 1328[12], bLocal_1471);
	TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
	TASK_PRIORITY_SET(&iLocal_17 + 1328[12], true);
	Function_438(&iLocal_17 + 1464);
	Function_418(&iLocal_17 + 1464, 1);
	Function_475(&iLocal_17 + 1464, 0);
	Function_386(&iLocal_17 + 1464, &Global_54076, 0);
	Function_533(&iLocal_17 + 1464);
	Function_241(&iLocal_17 + 4160[5]);
	Local_1448 = Function_241(&iLocal_17 + 4160[5]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_17 + 1424[02], &Local_1448, -1.0f);
	Function_241(&iLocal_17 + 4160[6]);
	Local_1448 = Function_241(&iLocal_17 + 4160[6]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 1424[12], &Local_1448, 20.0f, -1.0f);
	return;
}

void Function_538(var uParam0, var uParam1) //Position: 0x1B979 / 113017
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&uParam0, &uVar0, GET_HEADING(&uParam0), &uParam1);
	return;
}

void Function_539() //Position: 0x1B998 / 113048
{
	Function_438(&iLocal_17 + 1320);
	Function_418(&iLocal_17 + 1320, 1);
	Function_475(&iLocal_17 + 1320, 0);
	Function_386(&iLocal_17 + 1320, &bLocal_1313, 0);
	Function_533(&iLocal_17 + 1320);
	Function_476(&bLocal_1313, &iLocal_17 + 1320, 1);
	Function_241(&iLocal_17 + 4160[4]);
	Local_1448 = Function_241(&iLocal_17 + 4160[4]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1264[02], FIND_NEAREST_COVER_LOCATION(&Local_1448, 3.0f, 78.0f, 40.0f, 7), -1.0f, 1086324736);
	Function_241(&iLocal_17 + 4160[0]);
	Local_1448 = Function_241(&iLocal_17 + 4160[0]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 1264[12], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 10.0f, 40.0f, 7), 10.0f, 1086324736);
	Function_241(&iLocal_17 + 4160[16]);
	Local_1448 = Function_241(&iLocal_17 + 4160[16]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iLocal_17 + 1264[22], &Local_1448, -1.0f);
	Function_438(&iLocal_17 + 1416);
	Function_418(&iLocal_17 + 1416, 1);
	Function_475(&iLocal_17 + 1416, 0);
	Function_386(&iLocal_17 + 1416, &Global_54076, 0);
	Function_533(&iLocal_17 + 1416);
	Function_241(&iLocal_17 + 4160[2]);
	Local_1448 = Function_241(&iLocal_17 + 4160[2]);
	TASK_HIDE_AT_COVER(&iLocal_17 + 1376[02], FIND_NEAREST_COVER_LOCATION(&Local_1448, 2.0f, 110.0f, 40.0f, 7), -1.0f, 2.0f, 0);
	Function_241(&iLocal_17 + 4160[3]);
	Local_1448 = Function_241(&iLocal_17 + 4160[3]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 1376[12], &Local_1448, 78.0f, -1.0f);
	TASK_OVERRIDE_SET_POSTURE(&iLocal_17 + 1376[12], 1);
	return;
}

void Function_540() //Position: 0x1BB07 / 113415
{
	*(&iLocal_17 + 1608) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveWave05"));
	*(&iLocal_17 + 1568[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "W05_E12", 390, Vector(-291,6348f, 24,2366f, 3982,291f), Vector(-0,4006985f, 14,96064f, -1,11101f));
	SQUAD_JOIN(&iLocal_17 + 1568[02], &iLocal_17 + 1608);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1568[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1568[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1568[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1568[02], 19);
	*(&iLocal_17 + 1568[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nW05_Med01", 391, Vector(-292,4781f, 24,24315f, 3982,365f), Vector(0.0f, 17.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1568[12], &iLocal_17 + 1608);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1568[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1568[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1568[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1568[12], 19);
	return;
}

void Function_541() //Position: 0x1BC3E / 113726
{
	*(&iLocal_17 + 1560) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveWave04"));
	*(&iLocal_17 + 1520[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "W04_E09", 381, Vector(-293,8453f, 23,93514f, 3971,358f), Vector(3,799238f, 105,3518f, 4,057407f));
	SQUAD_JOIN(&iLocal_17 + 1520[02], &iLocal_17 + 1560);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1520[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1520[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1520[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1520[02], 19);
	*(&iLocal_17 + 1520[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "W04_E10", 384, Vector(-291,2085f, 24,12651f, 3974,141f), Vector(0.0f, 103.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1520[12], &iLocal_17 + 1560);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1520[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1520[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1520[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1520[12], 19);
	return;
}

void Function_542() //Position: 0x1BD73 / 114035
{
	*(&iLocal_17 + 1512) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveWave03"));
	*(&iLocal_17 + 1472[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "W03_E07", 385, Vector(-304,8282f, 22,78553f, 3976,723f), Vector(3,799238f, 105,3518f, 4,057407f));
	SQUAD_JOIN(&iLocal_17 + 1472[02], &iLocal_17 + 1512);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1472[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1472[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1472[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1472[02], 19);
	*(&iLocal_17 + 1472[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "W03_E08", 386, Vector(-309,5842f, 22,18947f, 3974,299f), Vector(0.0f, 103.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1472[12], &iLocal_17 + 1512);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1472[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1472[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1472[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1472[12], 19);
	return;
}

void Function_543() //Position: 0x1BEA8 / 114344
{
	*(&iLocal_17 + 1368) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_Cave_w02_Landon"));
	*(&iLocal_17 + 1328[02]) = Function_544(StackVal, StackVal, &Global_12422, &Global_14880, 1, Vector(-340,8309f, 22,02752f, 3974,433f), Vector(0.0f, 267.0f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_17 + 1328[02], &iLocal_17 + 1368);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1328[02]);
	SET_ACTOR_ONE_SHOT_DEATH(&iLocal_17 + 1328[02], 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1328[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1328[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1328[02], 19);
	*(&iLocal_17 + 1328[12]) = Function_544(StackVal, StackVal, &Global_12422, &Global_14880, 4, Vector(-342,4362f, 22,00925f, 3973,949f), Vector(0.0f, 255,271f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_17 + 1328[12], &iLocal_17 + 1368);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1328[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1328[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1328[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1328[12], 19);
	return;
}

int Function_544(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x1BFD7 / 114647
{
	var uVar0;
	var uVar1;
	
	uVar0 = fParam2;
	uVar1 = Function_545(&iParam0, &fParam1, uVar0, &iParam7, 0, 1);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		LOG_ERROR("CREATE_ACTOR_AS_REGIONAL got NULL when it tried to steal the character");
		return "";
	}
	PRINTSTRING("Spawning Regional Character at ");
	PRINTVECTOR(Param3);
	PRINTNL();
	SET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&uVar1), Param3);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar1), Param5);
	GET_POSITION(&uVar1, &Param3);
	PRINTSTRING("New position is ");
	PRINTVECTOR(Param3);
	PRINTNL();
	return &uVar1;
}

var Function_545(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1C0CA / 114890
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_184(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_184(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_547(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_184(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_181(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_181(&(Param0[iVar02]), 1);
	Function_546(&vParam1[iVar03] + 16, 1);
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

int Function_546(int iParam0, bool bParam1) //Position: 0x1C291 / 115345
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

var Function_547(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x1C343 / 115523
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

void Function_548() //Position: 0x1C46A / 115818
{
	*(&iLocal_17 + 1464) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveWave02"));
	*(&iLocal_17 + 1424[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nW02_Med03", 396, Vector(-317,5042f, 20,72618f, 3977,203f), Vector(0.0f, 80,23764f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1424[02], &iLocal_17 + 1464);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1424[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1424[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1424[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1424[02], 19);
	*(&iLocal_17 + 1424[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "W02_E06", 384, Vector(-314,6934f, 21,28231f, 3977,09f), Vector(0.0f, 75.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1424[12], &iLocal_17 + 1464);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1424[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1424[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1424[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1424[12], 19);
	return;
}

void Function_549() //Position: 0x1C599 / 116121
{
	*(&iLocal_17 + 1320) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_Cave_w01_Landon"));
	*(&iLocal_17 + 1264[02]) = Function_544(StackVal, StackVal, &Global_12422, &Global_14880, 0, Vector(-329,602f, 19,38f, 3968,637f), Vector(0.0f, 17,93967f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_17 + 1264[02], &iLocal_17 + 1320);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1264[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1264[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1264[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1264[02], 19);
	*(&iLocal_17 + 1264[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Lw01_E02", 380, Vector(-326,5492f, 19,12764f, 3962,958f), Vector(0.0f, 59.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1264[12], &iLocal_17 + 1320);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1264[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1264[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1264[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1264[12], 19);
	*(&iLocal_17 + 1264[22]) = Function_544(StackVal, StackVal, &Global_12422, &Global_14880, 2, Vector(-331,2998f, 19,63851f, 3962,738f), Vector(0.0f, 6.0f, 0.0f), 1);
	SQUAD_JOIN(&iLocal_17 + 1264[22], &iLocal_17 + 1320);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1264[22], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1264[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1264[22], 19);
	return;
}

void Function_550() //Position: 0x1C730 / 116528
{
	*(&iLocal_17 + 1416) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "S2_CaveWave01"));
	*(&iLocal_17 + 1376[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nW01_Med01", 391, Vector(-321,1276f, 18,09723f, 3947,334f), Vector(0.0f, 100.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1376[02], &iLocal_17 + 1416);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_17 + 1376[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 1376[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1376[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1376[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1376[02], 19);
	*(&iLocal_17 + 1376[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nW01_Med02", 392, Vector(-322,4942f, 18,89796f, 3955,659f), Vector(0.0f, 59.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 1376[12], &iLocal_17 + 1416);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 1376[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 1376[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_17 + 1376[12], 19);
	return;
}

int Function_551(int iParam0) //Position: 0x1C862 / 116834
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!Function_552(&iParam0))
		{
			RELEASE_ACTOR(&iParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_552(int iParam0) //Position: 0x1C884 / 116868
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(GET_OBJECT_FROM_ACTOR(&iParam0))) == GET_GC_LAYOUT())
		{
			return 1;
		}
	}
	return 0;
}

void Function_553(bool bParam0) //Position: 0x1C8A8 / 116904
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_554() //Position: 0x1C8F3 / 116979
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_GuardsDefMoveIn", "Gun03_GuardsDefMoveIn", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_555() //Position: 0x1C946 / 117062
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_GuardsAttackCarlos", "Gun03_GuardsAttackCarlos", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x1C99F / 117151
{
	if ((GET_LAST_ATTACKER(&iLocal_17 + 1152[02]) != &Global_54076 || GET_LAST_ATTACKER(&iLocal_17 + 1152[12]) != &Global_54076) && !iLocal_1574)
	{
		if ((iLocal_1529 != 2 || iLocal_1529 != 3) || iLocal_1529 <= 6)
		{
			if (IS_ACTOR_ALIVE(&iLocal_17 + 1152[02]))
			{
				TASK_KILL_CHAR(&iLocal_17 + 1152[02], &Global_54076);
				ADD_BLIP_FOR_ACTOR(&iLocal_17 + 1152[02], 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 1152[02], true);
			}
			if (IS_ACTOR_ALIVE(&iLocal_17 + 1152[12]))
			{
				TASK_KILL_CHAR(&iLocal_17 + 1152[12], &Global_54076);
				ADD_BLIP_FOR_ACTOR(&iLocal_17 + 1152[12], 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 1152[12], true);
			}
			iLocal_1574 = 1;
		}
	}
	if (iLocal_1529 == 4294967295)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1457, &iLocal_17 + 2456[10]))
		{
			Function_241(&iLocal_17 + 3528[27]);
			Local_1448 = Function_241(&iLocal_17 + 3528[27]);
			Function_326(&iLocal_17 + 3528[27]);
			Local_1451 = Function_326(&iLocal_17 + 3528[27]);
			ACTOR_START_FORCE_HOLSTER(&bLocal_1457, 0, 0);
			TASK_CLEAR(&bLocal_1457);
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, &bLocal_1457, "talking_stand/Talk_A", &Local_1448, -1.0f, 1, 3212836864);
			SET_ANIM_SET_FOR_ACTOR(&iLocal_17 + 1152[02], "talking_stand", 1);
			Function_241(&iLocal_17 + 3528[18]);
			Local_1448 = Function_241(&iLocal_17 + 3528[18]);
			Function_326(&iLocal_17 + 3528[18]);
			Local_1451 = Function_326(&iLocal_17 + 3528[18]);
			TASK_CLEAR(&iLocal_17 + 1152[02]);
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, &iLocal_17 + 1152[02], "talking_stand/Talk_A", &Local_1448, -1.0f, 1, 3212836864);
			Function_242(&bLocal_1440);
			iLocal_1529 = 10;
		}
	}
	else if (iLocal_1529 == 10)
	{
		if (Function_293(&bLocal_1440) < 0,5f)
		{
			SET_ANIM_SET_FOR_ACTOR(&iLocal_17 + 1152[12], "talking_stand", 1);
			Function_241(&iLocal_17 + 3528[17]);
			Local_1448 = Function_241(&iLocal_17 + 3528[17]);
			Function_326(&iLocal_17 + 3528[17]);
			Local_1451 = Function_326(&iLocal_17 + 3528[17]);
			TASK_CLEAR(&iLocal_17 + 1152[12]);
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, &iLocal_17 + 1152[12], "talking_stand/Listen_B", &Local_1448, -1.0f, 1, 3212836864);
			Function_242(&bLocal_1440);
			iLocal_1529 = 0;
		}
	}
	else if (iLocal_1529 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2456[12]))
		{
			Function_560();
			Function_242(&bLocal_1440);
			iLocal_1529 = 1;
		}
	}
	else if (iLocal_1529 == 1)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1440) < 38.0f)
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			STOP_FORCE_LOOK_AT_COORD(&bLocal_1457);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1457, 1);
			TASK_CLEAR(&bLocal_1457);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1457, &iLocal_17 + 4736, 2, 0, 0, 1, false);
			iLocal_1529 = 2;
			Function_242(&bLocal_1440);
		}
	}
	else if (iLocal_1529 == 2)
	{
		if (Function_293(&bLocal_1440) < 1.0f)
		{
			RESET_ANIM_SET_FOR_ACTOR(&iLocal_17 + 1152[02], 1);
			RESET_ANIM_SET_FOR_ACTOR(&iLocal_17 + 1152[12], 1);
			if (IS_ACTOR_VALID(&iLocal_17 + 1152[02]))
			{
				TASK_CLEAR(&iLocal_17 + 1152[02]);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_17 + 1152[02], &iLocal_17 + 4736, 2, 1, 0, 1, false);
			}
			if (IS_ACTOR_VALID(&iLocal_17 + 1152[12]))
			{
				TASK_CLEAR(&iLocal_17 + 1152[12]);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_17 + 1152[12], &iLocal_17 + 4736, 2, 1, 0, 1, false);
			}
			iLocal_1529 = 3;
			Function_242(&bLocal_1440);
		}
	}
	else if (iLocal_1529 == 3)
	{
		if (Function_293(&bLocal_1440) < 2.0f)
		{
			iLocal_1533[9] = 1;
			iLocal_1529 = 6;
			iLocal_1528 = 1;
			Function_242(&bLocal_1440);
		}
	}
	else if (iLocal_1529 == 4)
	{
		TASK_CLEAR(&bLocal_1457);
		bLocal_1471 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 3528[23], 0,5f, 2, 1, 1);
		TASK_FACE_ACTOR(0, &bLocal_1313, 0, 3212836864);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1471);
		TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
		TASK_PRIORITY_SET(&bLocal_1457, true);
		iLocal_1529 = 5;
		Function_242(&bLocal_1440);
	}
	else if (iLocal_1529 == 5)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[14]))
		{
			iLocal_1529 = 6;
			Function_242(&bLocal_1440);
		}
		else if (!Function_383(&iLocal_17 + 1192, 0, 1, 1, 1, 0) && !Function_383(&iLocal_17 + 1256, 0, 1, 1, 1, 0))
		{
			Function_241(&iLocal_17 + 3528[25]);
			Local_1448 = Function_241(&iLocal_17 + 3528[25]);
			Function_326(&iLocal_17 + 3528[25]);
			Local_1451 = Function_326(&iLocal_17 + 3528[25]);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1457, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1457, "stand_ambient", 0);
			TASK_CLEAR(&bLocal_1457);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 3528[25], 0,5f, 4, 1, 1);
			TASK_FACE_ACTOR(0, &bLocal_1313, 0, 3212836864);
			TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "stand_ambient/one_hnd", &Local_1448, -1.0f, 1, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1457, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1457, true);
			FORCE_LOOK_AT_ACTOR(&bLocal_1457, &bLocal_1313, -1.0f);
			iLocal_1529 = 6;
			Function_242(&bLocal_1440);
		}
	}
	else if (iLocal_1529 == 6)
	{
		if (!iLocal_1533[9])
		{
			Function_559();
			iLocal_1533[9] = 1;
		}
		if ((GET_TASK_STATUS(&bLocal_1457, 14) != 0 || Function_415(&bLocal_1457, &Global_54076) > 5.0f) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2608[14]))
		{
			STOP_FORCE_LOOK_AT_COORD(&bLocal_1457);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1457, 1);
			TASK_CLEAR(&bLocal_1457);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1457, &iLocal_17 + 4736, 2, 0, 0, 1, false);
			Function_242(&bLocal_1404);
			iLocal_1529 = 7;
			Function_242(&bLocal_1440);
		}
	}
	else if (iLocal_1529 == 7)
	{
		if (Function_293(&bLocal_1440) < 7,5f)
		{
			iLocal_1529 = 8;
			Function_242(&bLocal_1440);
		}
	}
	else if (iLocal_1529 == 8)
	{
		if (IS_ACTOR_VALID(&bLocal_1457))
		{
			if ((GET_TASK_STATUS(&bLocal_1457, 43) != 0 || GET_TASK_STATUS(&bLocal_1457, 43) != 4) || !Function_455(&Global_54076, &bLocal_1457, 200.0f))
			{
				if (!Function_558(&bLocal_1457, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					Function_557(&(Local_1646[315]));
					DESTROY_ACTOR(&bLocal_1457);
				}
			}
		}
		if (IS_ACTOR_VALID(&iLocal_17 + 1152[02]))
		{
			if ((GET_TASK_STATUS(&iLocal_17 + 1152[02], 43) != 0 || GET_TASK_STATUS(&iLocal_17 + 1152[02], 43) != 4) || !Function_455(&Global_54076, &iLocal_17 + 1152[02], 200.0f))
			{
				if (!Function_558(&iLocal_17 + 1152[02], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&iLocal_17 + 1152[02]);
				}
			}
		}
		if (IS_ACTOR_VALID(&iLocal_17 + 1152[12]))
		{
			if ((GET_TASK_STATUS(&iLocal_17 + 1152[12], 43) != 0 || GET_TASK_STATUS(&iLocal_17 + 1152[12], 43) != 4) || !Function_455(&Global_54076, &iLocal_17 + 1152[12], 200.0f))
			{
				if (!Function_558(&iLocal_17 + 1152[12], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&iLocal_17 + 1152[12]);
				}
			}
		}
	}
	return;
}

void Function_557(struct<69> Param0) //Position: 0x1D0DA / 119002
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

bool Function_558(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1D19A / 119194
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_559() //Position: 0x1D1BA / 119226
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_2GuardsDefCarloLeav", "Gun03_2GuardsDefCarloLeav", 0, 2, 1, 0, 1);
		Function_361(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1D216 / 119318
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AA", "Gun03_DistrakGuard_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Gun03_DistrakGuard_v1_AB", "Gun03_DistrakGuard_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AC", "Gun03_DistrakGuard_v1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Gun03_DistrakGuard_v1_AD", "Gun03_DistrakGuard_v1_AD", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AE", "Gun03_DistrakGuard_v1_AE", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Gun03_DistrakGuard_v1_AF", "Gun03_DistrakGuard_v1_AF", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AG", "Gun03_DistrakGuard_v1_AG", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Gun03_DistrakGuard_v1_AH", "Gun03_DistrakGuard_v1_AH", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Gun03_DistrakGuard_v1_AI", "Gun03_DistrakGuard_v1_AI", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Gun03_DistrakGuard_v1_AJ", "Gun03_DistrakGuard_v1_AJ", 0, 1, 1, 0, 1);
		Function_361(113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561() //Position: 0x1D4A7 / 119975
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(11, "Gun03_SoldiersCanyonYell1", "Gun03_SoldiersCanyonYell1", 0, 2, 1, 0, 1);
		Function_361(2049);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x1D505 / 120069
{
	if (iLocal_1286 < 3 && iLocal_1286 > 105)
	{
		if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2456[7]))
		{
			if (!iLocal_1580)
			{
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_1313, 10.0f);
				iLocal_1580 = 1;
			}
		}
		if (iLocal_1286 >= 11)
		{
			Function_524();
		}
		if (iLocal_1580)
		{
			Function_582();
		}
		if (!bLocal_1561)
		{
			if (GET_LAST_ATTACKER(&iLocal_17 + 976[02]) != &Global_54076 && !IS_ACTOR_ALIVE(&iLocal_17 + 976[02]))
			{
				Function_248("Gun03_killed_ally_horse");
				bLocal_1300 = true;
			}
			else if (!IS_ACTOR_ALIVE(&iLocal_17 + 976[02]))
			{
				Function_248("Gun03_killed_ally_horse");
				bLocal_1300 = true;
			}
			else if (!IS_ACTOR_ALIVE(&iLocal_1315))
			{
				Function_248("Gun03_killed_your_horse");
				bLocal_1300 = true;
			}
			if (iLocal_1286 < 9 && iLocal_1286 > 12)
			{
				Function_576();
			}
		}
		if (IS_ACTOR_VALID(&iLocal_17 + 1152[02]))
		{
			if ((IS_ACTOR_SHOOTING(&iLocal_17 + 1152[02]) || GET_LAST_ATTACKER(&iLocal_17 + 1152[02]) != &Global_54076) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2304[4]))
			{
				Function_248("Gun03_fail_attention");
				bLocal_1300 = true;
			}
		}
		if (IS_ACTOR_VALID(&iLocal_17 + 1152[12]))
		{
			if ((IS_ACTOR_SHOOTING(&iLocal_17 + 1152[12]) || GET_LAST_ATTACKER(&iLocal_17 + 1152[12]) != &Global_54076) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2304[4]))
			{
				Function_248("Gun03_fail_attention");
				bLocal_1300 = true;
			}
		}
		if (!bLocal_1561 && !iLocal_1531)
		{
			Function_448(&bLocal_1408, 60.0f, 130.0f, &bLocal_1313, "Gun03_obj_return", "Gun03_too_far", &bLocal_1300, 0, 0, 0, 325, 1);
		}
		if (iLocal_1531)
		{
			Function_448(&bLocal_1408, 35.0f, 60.0f, &bLocal_1313, "Gun03_obj_return", "Gun03_too_far", &bLocal_1300, 0, 0, 0, 325, 1);
		}
		if (IS_ACTOR_VALID(&iLocal_17 + 1120[02]))
		{
			Function_241(&iLocal_17 + 3528[10]);
			Function_443(StackVal, "$/cutscene/GUN03_CS04/GUN03_CS04", &iLocal_1312, Function_241(&iLocal_17 + 3528[10]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
		if (Function_575(Global_46746[1]))
		{
			Function_164(Global_46746[1]);
		}
	}
	switch (iLocal_1286)
	{
		case 0x00000000:
			uLocal_1483 = Function_574(Global_53579, 0);
			if (IS_OBJECT_VALID(&uLocal_1483))
			{
				Function_354(0);
				Function_225(5, 0, 1);
				iLocal_1586 = 0;
				SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1313, 1);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				SET_ACTOR_FACTION(&bLocal_1313, 20);
				SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
				TASK_DRAW_HOLSTER_WEAPON(&Global_54076, 0);
				if (iLocal_1318[0] == 0)
				{
					if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(0.0f, 1f, 1);
					}
					Function_326(&iLocal_17 + 3176[13]);
					Local_1451 = Function_326(&iLocal_17 + 3176[13]);
					UNK_0x44986367(StackVal, &Local_1448);
					Function_241(&iLocal_17 + 3176[9]);
					Local_1451 = Function_241(&iLocal_17 + 3176[9]);
					TRAIN_SET_POSITION_DIRECTION(Global_53579, &Local_1451, &Local_1448);
					TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
					TRAIN_SET_SPEED(Global_53579, 0.0f);
					Local_1448 = Vector(0.0f, 0.0f, 0.0f);
					Function_239(&Global_54076, &iLocal_17 + 3344[9], 1, 1, 1);
					Function_239(&bLocal_1313, &iLocal_17 + 3344[10], 1, 1, 1);
					FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
					Function_242(&bLocal_1396);
					iLocal_1286 = 1;
				}
				else
				{
					Function_326(&iLocal_17 + 3176[13]);
					Local_1451 = Function_326(&iLocal_17 + 3176[13]);
					UNK_0x44986367(StackVal, &Local_1448);
					Function_241(&iLocal_17 + 3176[13]);
					Local_1451 = Function_241(&iLocal_17 + 3176[13]);
					TRAIN_SET_POSITION_DIRECTION(Global_53579, &Local_1451, &Local_1448);
					Function_241(&iLocal_17 + 3176[9]);
					Local_1451 = Function_241(&iLocal_17 + 3176[9]);
					TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
					TRAIN_SET_SPEED(Global_53579, 0.0f);
					Local_1448 = Vector(0.0f, 0.0f, 0.0f);
					Function_242(&bLocal_1396);
					if (iLocal_1503)
					{
						iLocal_1286 = 1;
					}
					else
					{
						iLocal_1286 = 2;
					}
				}
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(Global_46894[2])) && Function_573())
			{
				Local_1448 = Vector(-785,7535f, 13,05098f, 3748,595f);
				uLocal_1461 = LOCATE_ACTOR_OF_TYPE(Local_1448, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(&uLocal_1461))
				{
					DESTROY_ACTOR(&uLocal_1461);
				}
				uLocal_1461 = LOCATE_ACTOR_OF_TYPE(Local_1448, 20.0f, 23, 4294967295);
				if (IS_ACTOR_VALID(&uLocal_1461))
				{
					DESTROY_ACTOR(&uLocal_1461);
				}
				Function_242(&bLocal_1396);
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&bLocal_1313))
			{
				Function_241(&iLocal_17 + 3176[1]);
				Local_1448 = Function_241(&iLocal_17 + 3176[1]);
				if (Function_512(StackVal, Local_1448))
				{
					Function_254(iLocal_1285);
					Function_428(StackVal, Function_254(iLocal_1285), iLocal_1285, Global_46746[1], Function_256(iLocal_1285), 0);
					if (IS_BLIP_VALID(&bLocal_1493))
					{
						REMOVE_BLIP(&bLocal_1493);
					}
					if (IS_OBJECT_VALID(&uLocal_1479))
					{
						Function_227(&uLocal_1479);
					}
					Function_241(&iLocal_17 + 3176[9]);
					Local_1451 = Function_241(&iLocal_17 + 3176[9]);
					TRAIN_SET_TARGET_POS(Global_53579, &Local_1451);
					TRAIN_SET_TARGET_SPEED(Global_53579, 10.0f);
					TRAIN_SET_SPEED(Global_53579, 10.0f);
					Function_572(&iLocal_17 + 3344[3]);
					Local_1448 = Function_572(&iLocal_17 + 3344[3]);
					uLocal_1487 = LOCATE_GRINGO_OF_TYPE("shoe", &Local_1448, 10.0f, 1);
					if (IS_GRINGO_VALID(&uLocal_1487))
					{
						GRINGO_ALLOW_ACTIVATION(&uLocal_1487, false);
					}
					Function_572(&iLocal_17 + 3344[2]);
					Local_1448 = Function_572(&iLocal_17 + 3344[2]);
					uLocal_1487 = LOCATE_GRINGO_OF_TYPE("tend", &Local_1448, 10.0f, 1);
					if (IS_GRINGO_VALID(&uLocal_1487))
					{
						GRINGO_ALLOW_ACTIVATION(&uLocal_1487, false);
					}
					if (SQUAD_IS_VALID(&iLocal_17 + 1000))
					{
						Function_571(&iLocal_17 + 1000);
					}
					Function_570();
					Function_239(&iLocal_17 + 976[02], &iLocal_17 + 3344[2], 1, 1, 1);
					TASK_STAND_STILL(&iLocal_17 + 976[02], -1.0f, 0, 0);
					SET_ALLOW_RIDE_BY_PLAYER(&iLocal_17 + 976[02], 0);
					Function_239(&iLocal_1315, &iLocal_17 + 3344[3], 1, 1, 1);
					TASK_STAND_STILL(&iLocal_1315, -1.0f, 0, 0);
					if (IS_BLIP_VALID(&uLocal_1491))
					{
						REMOVE_BLIP(&uLocal_1491);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1315)))
					{
						uLocal_1491 = ADD_BLIP_FOR_ACTOR(&iLocal_1315, 334, 0, 2, 0);
					}
					REMOVE_OBJECT_FROM_ATTACHMENT(&bLocal_1313);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, true);
					Function_373(&(Local_1646[015]), &bLocal_1313, "Gunslinger", 0, 0x5f5e100, 1);
					TASK_CLEAR(&Global_54076);
					if (iLocal_1318[0] != 1 && !Global_99145)
					{
						Function_242(&bLocal_1396);
						iLocal_1286 = 104;
					}
					else
					{
						TASK_CLEAR(&bLocal_1313);
						Function_239(&bLocal_1313, &iLocal_17 + 3344[20], 1, 1, 1);
						TASK_CLEAR(&Global_54076);
						Function_239(&Global_54076, &iLocal_17 + 3344[7], 1, 1, 1);
						TASK_CLEAR(&bLocal_1313);
						bLocal_1471 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4784, 1, 1, 0, 1, false);
						TASK_MOUNT(false, &iLocal_17 + 976[02], 0, 0, 1, 1);
						TASK_GO_TO_OBJECT(0, &iLocal_17 + 3176[1], 1, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET(&bLocal_1313, true);
						TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
						TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
						Function_334(&iLocal_1812, 1, 0, 4294967295, 4294967295);
						Function_301(1.0f);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						Function_258();
						Function_569();
						Function_242(&bLocal_1396);
						iLocal_1286 = 6;
					}
				}
			}
			else if (!IS_ACTOR_VALID(&bLocal_1313))
			{
				bLocal_1313 = Function_337(5, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 0x00000068:
			Function_321(&uLocal_1271, 43.0f, 1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0, 0, 0, 0);
			Function_320(StackVal, StackVal, StackVal, StackVal, Vector(-767,106f, 16,594f, 3766,493f), Vector(-0,834f, -0,011f, 0,551f), Vector(-764,795f, 14,485f, 3763,51f), Vector(-0,891f, 0,161f, 0,425f), 14.0f, 0, 1, 1, 6);
			Function_301(0,5f);
			HUD_ENABLE(0);
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
			Function_242(&bLocal_1396);
			iLocal_1286 = 3;
			break;
		
		case 0x00000003:
			if (Function_293(&bLocal_1396) <= 13,9f)
			{
				if (Function_297("$/cutscene/GUN_03_exit_train/GUN_03_exit_train", &iLocal_1287, &Local_1273, &iLocal_1285, 65596, 65589, 65310, 62034, 61806, 93616, 0, 1, 1, 2, 2, 0, 1))
				{
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[02]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[02]);
					}
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[12]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[12]);
					}
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[22]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[22]);
					}
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[32]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[32]);
					}
					HUD_ENABLE(1);
					Function_334(&iLocal_1812, 1, 0, 4294967295, 4294967295);
					Function_301(1.0f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_569();
					Function_242(&bLocal_1396);
					Function_242(&bLocal_1408);
					iLocal_1286 = 6;
				}
			}
			else
			{
				Function_241(&iLocal_17 + 3344[5]);
				Function_443(StackVal, "$/cutscene/GUN_03_exit_train/GUN_03_exit_train", &iLocal_1312, Function_241(&iLocal_17 + 3344[5]), 0, 200.0f, 400.0f, 2, 1, 2, 2, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (Function_293(&bLocal_1408) <= 4.0f)
			{
				Function_425("Gun03_obj01d", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_242(&bLocal_1396);
				Function_242(&bLocal_1404);
				Function_242(&bLocal_1408);
				iLocal_1286 = 7;
			}
			break;
		
		case 0x00000007:
			if (GET_TASK_STATUS(&bLocal_1313, 0) == 4)
			{
				TASK_CLEAR(&bLocal_1313);
				if (IS_ACTOR_VALID(&iLocal_1315))
				{
					if (IS_ACTOR_ALIVE(&iLocal_1315))
					{
						TASK_MOUNT(&bLocal_1313, &iLocal_1315, 0, 0, 1, 1);
					}
					else
					{
						Function_248("Gun03_killed_ally_horse");
						bLocal_1300 = true;
					}
				}
			}
			if ((IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && !IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313)) && iLocal_1810 != 0)
			{
				Function_334(&iLocal_1812, 11, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				Function_225(5, 1, 1);
				if (IS_BLIP_VALID(&uLocal_1491))
				{
					REMOVE_BLIP(&uLocal_1491);
				}
				iLocal_1810 = 1;
			}
			if ((IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313) && !IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076)) && !iLocal_1533[0])
			{
				TASK_CLEAR(&bLocal_1313);
				DECOR_SET_BOOL(GET_MOUNT(&bLocal_1313), "bNoInjuryEjection", 1);
				MEMORY_PREFER_RIDING(&bLocal_1313, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4792, 4, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_1313, true);
				Function_242(&bLocal_1404);
				iLocal_1533[0] = 1;
			}
			if ((((IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313) && !IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076)) && Function_293(&bLocal_1404) <= 5.0f) && IS_ACTOR_VALID(&iLocal_1315)) && !iLocal_1533[4])
			{
				Function_568();
				iLocal_1533[4] = 1;
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313))
			{
				if (IS_BLIP_VALID(&uLocal_1491))
				{
					REMOVE_BLIP(&uLocal_1491);
				}
				if (!iLocal_1533[0])
				{
					TASK_CLEAR(&bLocal_1313);
					DECOR_SET_BOOL(GET_MOUNT(&bLocal_1313), "bNoInjuryEjection", 1);
					MEMORY_PREFER_RIDING(&bLocal_1313, true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1313, &iLocal_17 + 4792, 4, 0, 0, 1, false);
				}
				else
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_1313);
				}
				Function_334(&iLocal_1812, 11, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				Function_225(5, 1, 1);
				Function_567();
				Function_242(&bLocal_1404);
				Function_242(&bLocal_1408);
				iLocal_1286 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1408) <= 6.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_425("Gun03_obj01_FollowLandon", 7,5f, 1, 2, 0, 0, 0, 0);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1313, -1.0f, -1.0f, 4, 1, 1);
				iLocal_1504 = 1;
				Function_242(&bLocal_1396);
				Function_242(&bLocal_1404);
				Function_242(&bLocal_1408);
				iLocal_1286 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_293(&bLocal_1396) <= 5.0f)
			{
				if (!bLocal_1561)
				{
					Function_520();
					Function_242(&bLocal_1408);
					iLocal_1286 = 10;
				}
				else if (Function_566(&Global_54076, &iLocal_17 + 3344[17], 110.0f))
				{
					Function_520();
					Function_242(&bLocal_1408);
					iLocal_1286 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (!bLocal_1561)
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2456[7]))
				{
					Function_237(Global_53579);
					Function_235(Global_53579);
					Function_242(&bLocal_1396);
					iLocal_1286 = 11;
				}
			}
			else if (Function_293(&bLocal_1396) > 900.0f)
			{
				if (!iLocal_1533[11])
				{
					if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
					{
						Function_565();
						iLocal_1533[11] = 1;
					}
				}
				if (Function_564(&Global_54076, &iLocal_17 + 3344[17]) > 100.0f)
				{
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[02]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[02]);
					}
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[12]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[12]);
					}
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[22]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[22]);
					}
					if (IS_ACTOR_VALID(&iLocal_17 + 1008[32]))
					{
						DESTROY_ACTOR(&iLocal_17 + 1008[32]);
					}
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1313, Vector(-409,783f, 24,196f, 3912,021f), 117,782f, 1, 1, 1);
					if (Function_446(StackVal, &bLocal_1313, Vector(-409,783f, 24,196f, 3912,021f), 20.0f))
					{
						iLocal_1473 = 0;
						while (iLocal_1473 <= GET_NUM_AVAILABLE_SEATS(Function_323(Global_53579)))
						{
							ENABLE_VEHICLE_SEAT(Function_323(Global_53579), iLocal_1473, 1);
							iLocal_1473++;
						}
						Function_237(Global_53579);
						TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
						TRAIN_SET_ENGINE_ENABLED(Global_53579, 1);
						Function_235(Global_53579);
						TASK_PRIORITY_SET(&bLocal_1313, true);
						TASK_CLEAR(&bLocal_1313);
						TASK_STAND_STILL(&bLocal_1313, -1.0f, 0, 0);
						Function_425("Gun03_obj02_slaughter", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_225(5, 1, 1);
						SET_ACTOR_FACTION(&bLocal_1313, 20);
						SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
						Function_234();
						if (IS_BLIP_VALID(&uLocal_1495))
						{
							REMOVE_BLIP(&uLocal_1495);
						}
						Function_242(&bLocal_1396);
						iLocal_1286 = 11;
					}
				}
			}
			else
			{
				Function_248("gun03_timeout");
				bLocal_1300 = true;
			}
			break;
		
		case 0x0000000B:
			if (bLocal_1561)
			{
				if (!Function_446(StackVal, &bLocal_1313, Vector(-409,783f, 24,196f, 3912,021f), 20.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1313, Vector(-409,783f, 24,196f, 3912,021f), 117,782f, 1, 1, 1);
				}
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_293(&bLocal_1396) < 5.0f)
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 12;
			}
			break;
		
		case 0x0000000C:
			if (bLocal_1561)
			{
				if (!Function_446(StackVal, &bLocal_1313, Vector(-409,783f, 24,196f, 3912,021f), 20.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1313, Vector(-409,783f, 24,196f, 3912,021f), 117,782f, 1, 1, 1);
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && !IS_ACTOR_VALID(&uLocal_1465))
			{
				uLocal_1465 = GET_MOUNT(&Global_54076);
			}
			if ((!iLocal_1533[1] && !bLocal_1561) && Function_293(&bLocal_1396) <= 5.0f)
			{
				Function_334(&iLocal_1812, 6, 0, 4294967295, 4294967295);
				Function_563();
				iLocal_1533[1] = 1;
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2456[11]))
			{
				Function_508();
				iLocal_1580 = 1;
				iLocal_1531 = 1;
				HUD_CLEAR_OBJECTIVE();
				Function_334(&iLocal_1812, 6, 0, 4294967295, 4294967295);
				Function_225(5, 1, 1);
				Function_242(&bLocal_1396);
				iLocal_1286 = 13;
			}
			break;
		
		case 0x0000000D:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2456[0]) || (IS_ACTOR_IN_VOLUME(&bLocal_1313, &iLocal_17 + 2456[0]) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2456[16])))
			{
				ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
				TASK_DRAW_HOLSTER_WEAPON(&Global_54076, 0);
				Function_334(&iLocal_1812, 0, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1286 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_233();
			iLocal_1528 = 0;
			iLocal_1318[2] = 1;
			Function_242(&bLocal_1396);
			iLocal_1285 = 2;
			iLocal_1286 = 0;
			break;
	}
	return;
}

void Function_563() //Position: 0x1E582 / 124290
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_RideIntoElMat", "Gun03_RideIntoElMat", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_564(int iParam0, float fParam1) //Position: 0x1E5D1 / 124369
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&fParam1))
		{
			Function_367(&iParam0);
			Var0 = Function_367(&iParam0);
			Function_572(&fParam1);
			Var2 = Function_572(&fParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_565() //Position: 0x1E673 / 124531
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_JumpsHorseTrain", "Gun03_JumpsHorseTrain", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_566(int iParam0, var uParam1, float fParam2) //Position: 0x1E6C6 / 124614
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_367(&iParam0);
			Function_572(&uParam1);
			if (VDIST(Function_367(&iParam0), Function_572(&uParam1)) >= fParam2)
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

void Function_567() //Position: 0x1E7E4 / 124900
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SettOffElMat", "Gun03_SettOffElMat", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x1E831 / 124977
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_WaitingJonMountHors", "Gun03_WaitingJonMountHors", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x1E88C / 125068
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ArrivesCasaMa", "Gun03_ArrivesCasaMa", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_570() //Position: 0x1E8DB / 125147
{
	(&iLocal_17 + 1000) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "Horses"));
	*(&iLocal_17 + 976[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionHorse", 976, Vector(-403,1336f, 21,08235f, 4039,019f), Vector(0.0f, 45,85695f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 976[02], &iLocal_17 + 1000);
	ACCESSORIZE_HORSE(&iLocal_17 + 976[02], 3);
	return;
}

void Function_571(int iParam0) //Position: 0x1E954 / 125268
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

struct<8> Function_572(var uParam0) //Position: 0x1E99F / 125343
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_573() //Position: 0x1EA0D / 125453
{
	Function_351(&iLocal_17 + 240, 976, 2, 0);
	Function_351(&iLocal_17 + 240, 48, 2, 0);
	Function_351(&iLocal_17 + 240, 54, 2, 0);
	Function_351(&iLocal_17 + 240, 268, 2, 0);
	Function_351(&iLocal_17 + 240, 291, 2, 0);
	Function_351(&iLocal_17 + 240, 650, 2, 0);
	Function_351(&iLocal_17 + 240, 651, 2, 0);
	if (Function_346(&iLocal_17 + 240))
	{
		return 1;
	}
	return 0;
}

var Function_574(int iParam0, bool bParam1) //Position: 0x1EA79 / 125561
{
	int iVar0;
	
	Function_204(16384);
	if (iParam0 == 4294967295)
	{
		return "";
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 1;
	}
	if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 1;
	}
	if (TRAIN_GET_NUM_CARS(iParam0) >= 0)
	{
		iVar0 = TRAIN_GET_CAR(iParam0, 0);
	}
	else
	{
		iVar0 = "";
	}
	if (IS_OBJECT_VALID(&iVar0))
	{
		if (bParam1)
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
		}
		else
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 0);
		}
		return &iVar0;
	}
	return "";
}

bool Function_575(bool bParam0) //Position: 0x1EAF0 / 125680
{
	if (!Function_85(bParam0))
	{
		return 0;
	}
	return Function_166(&(Global_43791[bParam0]), 4096);
}

void Function_576() //Position: 0x1EB0E / 125710
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_293(&bLocal_1396) <= 5.0f && !iLocal_1533[8])
		{
			Function_581();
			iLocal_1533[8] = 1;
		}
	}
	if (iLocal_1533[8])
	{
		if (Function_415(&Global_54076, &bLocal_1313) < 30.0f)
		{
			if (!iLocal_1585)
			{
				Function_580();
				iLocal_1585 = 1;
			}
		}
		else
		{
			if (iLocal_1585)
			{
				Function_579();
				iLocal_1585 = 0;
			}
			if (!Function_295(&bLocal_1432))
			{
				Function_296(&bLocal_1432, 13,1f);
			}
			else if (Function_293(&bLocal_1432) < 13.0f)
			{
				if (IS_PLAYER_TARGETTING_ACTOR(0, &bLocal_1313, 1))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_406();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1313, "Gun03_GunOnRickB4Caves", "Gun03_GunOnRickB4Caves", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					Function_242(&bLocal_1432);
				}
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					if (IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&Global_54076)))
					{
						if (DECOR_CHECK_EXIST(&Global_54076, "beingBucked"))
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1313, "Gun03_OffHorseElMat", "Gun03_OffHorseElMat", 0, 1, 0, 0, 1, 0, 0, 1000, 0, 0);
							}
							else
							{
								Function_578();
							}
							Function_242(&bLocal_1432);
						}
						else
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1313, "Gun03_ThrownHorseElMat", "Gun03_ThrownHorseElMat", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
							}
							else
							{
								Function_577();
							}
							Function_242(&bLocal_1432);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_577() //Position: 0x1ECDF / 126175
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ThrownHorseElMat", "Gun03_ThrownHorseElMat", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_578() //Position: 0x1ED34 / 126260
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_OffHorseElMat", "Gun03_OffHorseElMat", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_579() //Position: 0x1ED83 / 126339
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ComesBackRideElMat", "Gun03_ComesBackRideElMat", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_580() //Position: 0x1EDDC / 126428
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_WrongDirElMat", "Gun03_WrongDirElMat", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x1EE2B / 126507
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AA1", "Gun03_BanterWayElMat_v1_AA1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AA2", "Gun03_BanterWayElMat_v1_AA2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AA3", "Gun03_BanterWayElMat_v1_AA3", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun03_BanterWayElMat_v1_AB", "Gun03_BanterWayElMat_v1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun03_BanterWayElMat_v1_AC", "Gun03_BanterWayElMat_v1_AC", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AD1", "Gun03_BanterWayElMat_v1_AD1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AD2", "Gun03_BanterWayElMat_v1_AD2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun03_BanterWayElMat_v1_AE", "Gun03_BanterWayElMat_v1_AE", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AF1", "Gun03_BanterWayElMat_v1_AF1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_BanterWayElMat_v1_AF2", "Gun03_BanterWayElMat_v1_AF2", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_582() //Position: 0x1F0F1 / 127217
{
	if (iLocal_1528 == 0)
	{
		if (GET_TASK_STATUS(&bLocal_1313, 43) == 0)
		{
			uLocal_1463 = GET_MOUNT(&bLocal_1313);
			TASK_STAND_STILL(&uLocal_1463, -1.0f, 0, 0);
			TASK_CLEAR(&bLocal_1313);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
			Function_241(&iLocal_17 + 3344[13]);
			Local_1448 = Function_241(&iLocal_17 + 3344[13]);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_DISMOUNT(0, 1);
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 3344[18], 1, 0, 1);
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			MEMORY_PREFER_WALKING(&bLocal_1313, 0);
			iLocal_1528 = 1;
		}
	}
	else if (iLocal_1528 == 1)
	{
		if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1313) && iLocal_1531)
		{
			Function_583();
			iLocal_1533[2] = 1;
			if (iLocal_1504)
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1313);
				iLocal_1504 = 0;
			}
			TASK_CLEAR(&bLocal_1313);
			bLocal_1471 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 3344[18], 1, 1, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iLocal_17 + 4656), "UseCase1", 4294967295, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1471);
			TASK_SEQUENCE_RELEASE(bLocal_1471, 1);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			Function_242(&bLocal_1404);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_1313);
			iLocal_1528 = 2;
		}
	}
	return;
}

void Function_583() //Position: 0x1F23A / 127546
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_Look4Carlos", "Gun03_Look4Carlos", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_584() //Position: 0x1F285 / 127621
{
	var uVar0;
	
	Function_601();
	if (!iLocal_1588)
	{
		if (!IS_ACTOR_VALID(&iLocal_1469))
		{
			iLocal_1469 = Function_545(&Global_12048, &Global_14326, 0, 0, 0, 1);
		}
		else
		{
			Function_241(&iLocal_17 + 3176[18]);
			uVar0 = Function_241(&iLocal_17 + 3176[18]);
			uLocal_1517 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/stand_bartender_bar_work", &uVar0, 10.0f, 0);
			if (IS_GRINGO_VALID(&uLocal_1517))
			{
				SNAP_ACTOR_TO_GRINGO(&iLocal_1469, GET_OBJECT_FROM_GRINGO(&uLocal_1517), "UseCase1", true, 1, 1);
				TASK_USE_GRINGO(&iLocal_1469, &uLocal_1517, "UseCase1", 4294967295, 1);
				iLocal_1588 = 1;
			}
		}
	}
	if (iLocal_1286 < 8 && iLocal_1286 >= 9)
	{
		if (Function_455(&Global_54076, Function_323(Global_53579), 20.0f))
		{
			Function_241(&iLocal_17 + 2368[6]);
			if (Function_443(StackVal, "$/cutscene/GUN_03_enter_train/GUN_03_enter_train", &iLocal_1312, Function_241(&iLocal_17 + 2368[6]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
			{
			}
		}
	}
	switch (iLocal_1286)
	{
		case 0x00000000:
			Function_354(0);
			if (!HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_ACTOR_FACTION(&bLocal_1313, 20);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_1317 = Global_46746[2];
			if (!Function_353(iLocal_1317))
			{
				Function_352(&Local_1273);
			}
			Global_99147 = 0;
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, (&Global_6667[3228] + 88), 0.0f, 1, 1, 1);
			Function_242(&bLocal_1396);
			iLocal_1286 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(iLocal_1317) || iLocal_1317 != 4294967295)) && Function_573())
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_462(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1273, iLocal_1285))
			{
				Function_599();
				Function_242(&bLocal_1396);
				iLocal_1286 = 3;
			}
			else
			{
				Function_598(Global_53579, 16, 0);
				Function_598(Global_53579, 2048, 0);
				uLocal_1483 = Function_574(Global_53579, 0);
				if (IS_OBJECT_VALID(&uLocal_1483))
				{
					Function_599();
					Function_597();
					if (!Function_596(&iLocal_17 + 1008[02], Function_323(Global_53579), 1))
					{
						Function_595(&iLocal_17 + 1008[02]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[02], Function_323(Global_53579), true);
						Function_594(&iLocal_17 + 1008[02]);
					}
					if (!Function_596(&iLocal_17 + 1008[12], Function_323(Global_53579), 12))
					{
						Function_595(&iLocal_17 + 1008[12]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[12], Function_323(Global_53579), 12);
						Function_594(&iLocal_17 + 1008[12]);
					}
					if (!Function_596(&iLocal_17 + 1008[22], Function_323(Global_53579), 8))
					{
						Function_595(&iLocal_17 + 1008[22]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[22], Function_323(Global_53579), 8);
						Function_594(&iLocal_17 + 1008[22]);
					}
					if (!Function_596(&iLocal_17 + 1008[32], Function_323(Global_53579), 6))
					{
						Function_595(&iLocal_17 + 1008[32]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[32], Function_323(Global_53579), 6);
						Function_594(&iLocal_17 + 1008[32]);
					}
					iLocal_1473 = 0;
					while (iLocal_1473 <= (GET_NUM_AVAILABLE_SEATS(Function_323(Global_53579)) - 4))
					{
						ENABLE_VEHICLE_SEAT(Function_323(Global_53579), iLocal_1473, 0);
						iLocal_1473++;
					}
					ENABLE_VEHICLE_SEAT(Function_323(Global_53579), 4, 1);
					TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
					Function_326(&iLocal_17 + 3176[7]);
					Local_1451 = Function_326(&iLocal_17 + 3176[7]);
					UNK_0x44986367(StackVal, &Local_1448);
					Function_241(&iLocal_17 + 3176[7]);
					Local_1451 = Function_241(&iLocal_17 + 3176[7]);
					TRAIN_SET_POSITION_DIRECTION_PRECISELY(Global_53579, &Local_1451, &Local_1448, 14);
					Function_241(&iLocal_17 + 3176[9]);
					Local_1451 = Function_241(&iLocal_17 + 3176[9]);
					TRAIN_SET_TARGET_POS(Global_53579, &Local_1451);
					TRAIN_SET_ENGINE_ENABLED(Global_53579, 1);
					TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
					TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
					TRAIN_SET_SPEED(Global_53579, 0.0f);
					Local_1448 = Vector(0.0f, 0.0f, 0.0f);
					TASK_CLEAR(&bLocal_1313);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1313, "gun03_train_wave", 1);
					AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, true);
					SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1313, false);
					bLocal_1474 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 4776, 1, 1, 0, 1, false);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, Function_323(Global_53579), 16, 1, 0);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, Function_323(Global_53579), 11, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1474);
					TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
					TASK_PRIORITY_SET(&bLocal_1313, true);
					ACTOR_POP_NEXT_GAIT(&bLocal_1313, 1, 0);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
					Function_242(&bLocal_1396);
					iLocal_1286 = 6;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_297("$/cutscene/GUN_03/GUN_03", &iLocal_1287, &Local_1273, &iLocal_1285, 65596, 104684, 93623, 62034, 61806, 93616, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_242(&bLocal_1396);
				iLocal_1286 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_462(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1273, iLocal_1285))
			{
				Function_598(Global_53579, 16, 0);
				Function_598(Global_53579, 2048, 0);
				uLocal_1483 = Function_574(Global_53579, 0);
				if (IS_OBJECT_VALID(&uLocal_1483))
				{
					iLocal_1473 = 0;
					while (iLocal_1473 <= (GET_NUM_AVAILABLE_SEATS(Function_323(Global_53579)) - 4))
					{
						ENABLE_VEHICLE_SEAT(Function_323(Global_53579), iLocal_1473, 0);
						iLocal_1473++;
					}
					ENABLE_VEHICLE_SEAT(Function_323(Global_53579), 4, 1);
					Function_597();
					if (!Function_596(&iLocal_17 + 1008[02], Function_323(Global_53579), 1))
					{
						Function_595(&iLocal_17 + 1008[02]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[02], Function_323(Global_53579), true);
						Function_594(&iLocal_17 + 1008[02]);
					}
					if (!Function_596(&iLocal_17 + 1008[12], Function_323(Global_53579), 12))
					{
						Function_595(&iLocal_17 + 1008[12]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[12], Function_323(Global_53579), 12);
						Function_594(&iLocal_17 + 1008[12]);
					}
					if (!Function_596(&iLocal_17 + 1008[22], Function_323(Global_53579), 8))
					{
						Function_595(&iLocal_17 + 1008[22]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[22], Function_323(Global_53579), 8);
						Function_594(&iLocal_17 + 1008[22]);
					}
					if (!Function_596(&iLocal_17 + 1008[32], Function_323(Global_53579), 6))
					{
						Function_595(&iLocal_17 + 1008[32]);
						SET_ACTOR_IN_VEHICLE(&iLocal_17 + 1008[32], Function_323(Global_53579), 6);
						Function_594(&iLocal_17 + 1008[32]);
					}
					TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
					Function_326(&iLocal_17 + 3176[7]);
					Local_1451 = Function_326(&iLocal_17 + 3176[7]);
					UNK_0x44986367(StackVal, &Local_1448);
					Function_241(&iLocal_17 + 3176[7]);
					Local_1451 = Function_241(&iLocal_17 + 3176[7]);
					TRAIN_SET_POSITION_DIRECTION_PRECISELY(Global_53579, &Local_1451, &Local_1448, 14);
					Function_241(&iLocal_17 + 3176[9]);
					Local_1451 = Function_241(&iLocal_17 + 3176[9]);
					TRAIN_SET_TARGET_POS(Global_53579, &Local_1451);
					TRAIN_SET_ENGINE_ENABLED(Global_53579, 1);
					TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
					TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
					TRAIN_SET_SPEED(Global_53579, 0.0f);
					Local_1448 = Vector(0.0f, 0.0f, 0.0f);
					Function_254(iLocal_1285);
					Function_428(StackVal, Function_254(iLocal_1285), iLocal_1285, Global_46746[2], Function_256(iLocal_1285), 0);
					Function_301(1.0f);
					Function_225(5, 1, 1);
					if (!IS_BLIP_VALID(&uLocal_1495))
					{
						Local_1500 = Vector(-414,16f, 23,769f, 3913,01f);
						uLocal_1495 = ADD_BLIP_FOR_COORD(&Local_1500, 330, 0, 2, 0);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_242(&bLocal_1396);
					iLocal_1286 = 7;
				}
			}
			else
			{
				Function_254(iLocal_1285);
				Function_428(StackVal, Function_254(iLocal_1285), iLocal_1285, Global_46746[2], Function_256(iLocal_1285), 0);
				Function_301(1.0f);
				Function_225(5, 1, 1);
				if (!IS_BLIP_VALID(&uLocal_1495))
				{
					Local_1500 = Vector(-414,16f, 23,769f, 3913,01f);
					uLocal_1495 = ADD_BLIP_FOR_COORD(&Local_1500, 330, 0, 2, 0);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_242(&bLocal_1396);
				iLocal_1286 = 7;
			}
			break;
		
		case 0x00000007:
			if (!HUD_IS_FADING())
			{
				Function_593();
				Function_334(&iLocal_1812, 1, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				iLocal_1286 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_293(&bLocal_1396) <= 6.0f)
			{
				Function_425("Gun03_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_1313, true);
				Function_242(&bLocal_1404);
				Function_242(&bLocal_1396);
				iLocal_1286 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_293(&bLocal_1396) <= 12,5f && !iLocal_1533[3])
			{
				Function_592();
				iLocal_1533[3] = 1;
			}
			if (!Function_455(&Global_54076, &bLocal_1313, 30.0f))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else if (!Function_295(&bLocal_1432))
			{
				Function_296(&bLocal_1432, 13,1f);
			}
			else if (Function_293(&bLocal_1432) < 13.0f)
			{
				if (IS_PLAYER_TARGETTING_ACTOR(0, &bLocal_1313, 1))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_406();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_1313, "Gun03_GunOnRickB4Caves", "Gun03_GunOnRickB4Caves", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					Function_242(&bLocal_1432);
				}
			}
			if (!iLocal_1573)
			{
				if (GET_TASK_STATUS(&bLocal_1313, 0) == 0)
				{
					bLocal_1474 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, Function_323(Global_53579), 16, 1, 0);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, Function_323(Global_53579), 11, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1313, bLocal_1474);
					TASK_SEQUENCE_RELEASE(bLocal_1474, 1);
					iLocal_1573 = 1;
				}
			}
			else if (GET_TASK_STATUS(&bLocal_1313, 0) == 4)
			{
				if (!Function_596(&bLocal_1313, Function_323(Global_53579), 11))
				{
					TASK_CLEAR(&bLocal_1313);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1313, 0);
					SET_ACTOR_IN_VEHICLE(&bLocal_1313, Function_323(Global_53579), 11);
				}
			}
			if (Function_455(&Global_54076, &bLocal_1313, 80.0f) && !bLocal_1561)
			{
				if (!IS_OBJECT_VALID(&uLocal_1479))
				{
					if (!IS_BLIP_VALID(&uLocal_1495))
					{
						Local_1500 = Vector(-414,16f, 23,769f, 3913,01f);
						uLocal_1495 = ADD_BLIP_FOR_COORD(&Local_1500, 330, 0, 2, 0);
						HUD_CLEAR_OBJECTIVE();
						Function_425("Gun03_obj01a", 7,5f, 1, 2, 0, 0, 0, 0);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1313)))
					{
						Function_225(5, 1, 1);
					}
				}
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2368[3]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2368[4]))
				{
					if (!IS_OBJECT_VALID(&uLocal_1479))
					{
						HUD_CLEAR_OBJECTIVE();
						Function_425("Gun03_obj01_SitNextTo", 0x40f00000, 1, 2, 0, 0, 0, 0);
						uLocal_1522 = Vector(0.0f, 0,242f, 0,6f);
						GET_ACTOR_OFFSET_WORLD_COORDS(Function_323(Global_53579), &uLocal_1522, &Local_1525);
						Function_326(&iLocal_17 + 3176[3]);
						uLocal_1479 = Function_500(StackVal, StackVal, &uLocal_1271, Function_54(), Local_1525, Function_326(&iLocal_17 + 3176[3]), &Global_54076, 1.0f, 1, 3, 330, 1, 0, 3212836864, 3212836864, 1);
						Function_225(5, 0, 1);
						Function_242(&bLocal_1404);
						if (IS_BLIP_VALID(&uLocal_1495))
						{
							REMOVE_BLIP(&uLocal_1495);
						}
					}
				}
				else if (IS_OBJECT_VALID(&uLocal_1479))
				{
					Function_227(&uLocal_1479);
					iLocal_1582 = 0;
				}
				if (Function_596(&bLocal_1313, Function_323(Global_53579), 11))
				{
					if (Function_293(&bLocal_1404) < 4.0f)
					{
						Function_591();
						Function_242(&bLocal_1404);
						Function_590(&bLocal_1404);
					}
					if (!iLocal_1582)
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2368[3]))
						{
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1313, "gun03_train_wave/back");
							iLocal_1582 = 1;
						}
						else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2368[4]))
						{
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_1313, "gun03_train_wave/front");
							iLocal_1582 = 1;
						}
					}
				}
				else if (!IS_VOLUME_VALID(&uLocal_1424))
				{
					uLocal_1424 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "LandonTrainCarBaggage", 2,802597E-45f, Vector(-2696.0f, 34.0f, 4210.0f), Vector(0.0f, 0.0f, 0.0f), Vector(7,2f, 3,5f, 4.0f));
				}
				else if (IS_ACTOR_IN_VOLUME(&bLocal_1313, &uLocal_1424))
				{
					LOG_ERROR("Landon ventured into the baggage train car. Warping him into his seat");
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1313, 0);
					SET_ACTOR_IN_VEHICLE(&bLocal_1313, Function_323(Global_53579), 11);
				}
				if (IS_OBJECT_VALID(&uLocal_1479))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (GATEWAY_UPDATE(&uLocal_1479) || Function_589())
						{
							ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
							TASK_DRAW_HOLSTER_WEAPON(&Global_54076, 0);
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							Function_258();
							Function_225(5, 0, 1);
							AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_1313, 1);
							iLocal_1286 = 104;
							Function_242(&bLocal_1396);
							Function_227(&uLocal_1479);
						}
					}
				}
			}
			else
			{
				if ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
					iLocal_1312 = 0;
				}
				Function_520();
				TASK_CLEAR(&bLocal_1313);
				if (!Function_596(&bLocal_1313, Function_323(Global_53579), 11))
				{
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1313, 0);
					SET_ACTOR_IN_VEHICLE(&bLocal_1313, Function_323(Global_53579), 11);
				}
				Function_204(1);
				Function_334(&iLocal_1812, 3, 0, 4294967295, 4294967295);
				Function_225(5, 0, 1);
				TRAIN_SET_ENGINE_ENABLED(Global_53579, 1);
				TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
				TRAIN_SET_TARGET_SPEED(Global_53579, 10.0f);
				Function_587(StackVal, Local_1500, 0, 48, 1);
				bLocal_1561 = true;
				iLocal_1528 = 1;
				iLocal_1285 = 1;
				iLocal_1286 = 10;
			}
			break;
		
		case 0x00000068:
			if (Function_297("$/cutscene/GUN_03_enter_train/GUN_03_enter_train", &iLocal_1287, &Local_1273, &iLocal_1285, 65596, 65589, 65310, 62034, 61806, 93616, 0, 1, 1, 2, 2, 0, 1))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_242(&bLocal_1396);
				iLocal_1286 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_301(0,5f);
			Function_242(&bLocal_1396);
			iLocal_1286 = 11;
			break;
		
		case 0x0000000B:
			if (Function_293(&bLocal_1396) < 5.0f)
			{
				SET_ACTOR_IN_VEHICLE(&Global_54076, Function_323(Global_53579), 4);
				if (IS_OBJECT_VALID(&Global_99148))
				{
					DESTROY_OBJECT(&Global_99148);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_164(Global_46746[1]);
				HUD_ENABLE(1);
				Function_326(&iLocal_17 + 3176[9]);
				Local_1451 = Function_326(&iLocal_17 + 3176[9]);
				bLocal_1493 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 3176[9], 330, 0f, 2, 0);
				Function_334(&iLocal_1812, 5, 0, 4294967295, 4294967295);
				Function_242(&bLocal_1396);
				Function_242(&bLocal_1404);
				Function_242(&bLocal_1408);
				iLocal_1286 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_241(&iLocal_17 + 3176[9]);
			Local_1448 = Function_241(&iLocal_17 + 3176[9]);
			Function_572(&uLocal_1483);
			if (VDIST(Function_572(&uLocal_1483), Local_1448) >= 175.0f)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1430))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1430);
				}
				Function_241(&iLocal_17 + 3344[5]);
				if (Function_443(StackVal, "$/cutscene/GUN_03_exit_train/GUN_03_exit_train", &iLocal_1312, Function_241(&iLocal_17 + 3344[5]), 0, 174.0f, 300.0f, 2, 1, 2, 2, 0, 1))
				{
				}
			}
			else if (Function_293(&bLocal_1396) < 1,2f)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1430))
				{
					uLocal_1430 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, "@UI.ACCEPT", 0, 0, 0, 0, 4294967295, 0);
				}
			}
			if (Function_293(&bLocal_1396) < 1,2f)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1430))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1430))
					{
						if ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
						{
							CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
						}
						Function_586();
						Function_89(17, 1, 0, 0);
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1430);
						iLocal_1503 = 1;
						Function_242(&bLocal_1396);
						iLocal_1286 = 105;
					}
				}
			}
			Function_572(&uLocal_1483);
			if (VDIST(Function_572(&uLocal_1483), Local_1448) >= 120.0f)
			{
				TRAIN_SET_TARGET_SPEED(Global_53579, 5.0f);
				if (IS_BLIP_VALID(&bLocal_1493))
				{
					REMOVE_BLIP(&bLocal_1493);
				}
				Function_242(&bLocal_1396);
				iLocal_1318[0] = 1;
				iLocal_1285 = 1;
				iLocal_1286 = 2;
			}
			break;
		
		case 0x0000000D:
			break;
		
		case 0x00000069:
			if ((iLocal_1503 && !IS_SCRIPTED_CONVERSATION_ONGOING()) || (iLocal_1503 && Function_293(&bLocal_1396) < 5.0f))
			{
				Function_367(&Global_54076);
				Function_585(VDIST(Function_367(&Global_54076), Local_1448));
				Function_258();
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_242(&bLocal_1396);
				iLocal_1286 = 106;
			}
			else if (!iLocal_1503)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_242(&bLocal_1396);
				iLocal_1286 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				if (IS_ACTOR_VALID(&iLocal_17 + 1008[02]))
				{
					RELEASE_ACTOR(&iLocal_17 + 1008[02]);
				}
				if (IS_ACTOR_VALID(&iLocal_17 + 1008[12]))
				{
					RELEASE_ACTOR(&iLocal_17 + 1008[12]);
				}
				if (IS_ACTOR_VALID(&iLocal_17 + 1008[22]))
				{
					RELEASE_ACTOR(&iLocal_17 + 1008[22]);
				}
				if (IS_ACTOR_VALID(&iLocal_17 + 1008[32]))
				{
					RELEASE_ACTOR(&iLocal_17 + 1008[32]);
				}
				Local_1448 = Vector(0.0f, 0.0f, 0.0f);
				TASK_CLEAR(&bLocal_1313);
				Function_239(&bLocal_1313, &iLocal_17 + 3176[17], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1313, -1.0f, 0, 0);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_1313, 1);
				TASK_CLEAR(&Global_54076);
				Function_239(&Global_54076, &iLocal_17 + 3176[16], 1, 1, 1);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				Function_326(&iLocal_17 + 3176[13]);
				Local_1451 = Function_326(&iLocal_17 + 3176[13]);
				UNK_0x44986367(StackVal, &Local_1448);
				Function_241(&iLocal_17 + 3176[13]);
				Local_1451 = Function_241(&iLocal_17 + 3176[13]);
				TRAIN_SET_POSITION_DIRECTION(Global_53579, &Local_1451, &Local_1448);
				Function_241(&iLocal_17 + 3176[9]);
				Local_1451 = Function_241(&iLocal_17 + 3176[9]);
				TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
				TRAIN_SET_SPEED(Global_53579, 0.0f);
				Function_219(&Global_12048, &Global_14326, &iLocal_1469, 0);
				Function_242(&bLocal_1396);
				iLocal_1318[0] = 1;
				iLocal_1285 = 1;
				iLocal_1286 = 0;
			}
			break;
	}
	return;
}

void Function_585(float fParam0) //Position: 0x204BF / 132287
{
	FEED_CODE_WARP_DIST(fParam0);
	ADVANCE_TIME_HOURS(((fParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_586() //Position: 0x204D7 / 132311
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SkipsTrainJourney", "Gun03_SkipsTrainJourney", 0, 4, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_587(struct<2> Param0, var uParam2, var uParam3, bool bParam4) //Position: 0x2052E / 132398
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = uParam3;
	if (uParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (uParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_588(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &bParam4;
}

void Function_588(var uParam0) //Position: 0x205EF / 132591
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&uVar0));
		}
	}
	return;
}

int Function_589() //Position: 0x20638 / 132664
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 2368[8]))
	{
		return 1;
	}
	return 0;
}

void Function_590(vector3 vParam0) //Position: 0x20658 / 132696
{
	if (Function_295(&vParam0))
	{
		if (!Function_294(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_77(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_591() //Position: 0x2071C / 132892
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_WaitingSitTrain", "Gun03_WaitingSitTrain", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_592() //Position: 0x2076F / 132975
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SpecialBant_v1_AA", "Gun03_SpecialBant_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun03_SpecialBant_v1_AB", "Gun03_SpecialBant_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SpecialBant_v1_AC", "Gun03_SpecialBant_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun03_SpecialBant_v1_AD", "Gun03_SpecialBant_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SpecialBant_v1_AE", "Gun03_SpecialBant_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Gun03_SpecialBant_v1_AF", "Gun03_SpecialBant_v1_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Gun03_SpecialBant_v1_AG", "Gun03_SpecialBant_v1_AG", 0, 1, 0, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_593() //Position: 0x20934 / 133428
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_TakeTrainOrSolo", "Gun03_TakeTrainOrSolo", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_594(int iParam0) //Position: 0x20987 / 133511
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

void Function_595(int iParam0) //Position: 0x209DA / 133594
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
	if (IS_ACTOR_MALE(&iParam0))
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iParam0, 1);
	}
	else
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iParam0, 0);
	}
	Function_514(&iParam0, 0, 0, 0, 1, 0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iParam0, 1);
	TASK_FAILURE_MODE_SET(&iParam0, 0);
	return;
}

bool Function_596(int iParam0, int iParam1, bool bParam2) //Position: 0x20A35 / 133685
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_597() //Position: 0x20A5F / 133727
{
	*(&iLocal_17 + 1008[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "npassenger", 48, Vector(-2684,437f, 31,3633f, 4207,469f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1008[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "passenger1", 54, Vector(-2685,025f, 32,08701f, 4209,78f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1008[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "passenger2", 268, Vector(-2688,508f, 31,28456f, 4207,282f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1008[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "passenger4", 291, Vector(-2690,423f, 31,34438f, 4206,25f), Vector(0.0f, 0.0f, 0.0f));
	return;
}

void Function_598(int iParam0, int iParam1, bool bParam2) //Position: 0x20B2E / 133934
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == Global_53579)
	{
		if (bParam2)
		{
			(&Global_53580 + 20)->f_816 = ((&Global_53580 + 20)->f_816 || iParam1);
		}
		else
		{
			(&Global_53580 + 20)->f_816 = ((&Global_53580 + 20)->f_816 - ((&Global_53580 + 20)->f_816 && iParam1));
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				if (SHIFT_LEFT(true, (&Global_53580 + 20 + 456[iVar03])->f_16) == iParam1)
				{
					TASK_VEHICLE_LEAVE(&Global_53580 + 20 + 456[iVar03] + 8);
					if (IS_ACTOR_VALID(&Global_53580 + 20 + 456[iVar03] + 8))
					{
						DESTROY_ACTOR(&Global_53580 + 20 + 456[iVar03] + 8);
					}
				}
				iVar0++;
			}
		}
	}
	else if (iParam0 == Global_53578)
	{
		if (bParam2)
		{
			(&Global_53580 + 980)->f_816 = ((&Global_53580 + 980)->f_816 || iParam1);
		}
		else
		{
			(&Global_53580 + 980)->f_816 = ((&Global_53580 + 980)->f_816 - ((&Global_53580 + 980)->f_816 && iParam1));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 14)
			{
				if (SHIFT_LEFT(true, (&Global_53580 + 980 + 456[iVar13])->f_16) == iParam1)
				{
					TASK_VEHICLE_LEAVE(&Global_53580 + 980 + 456[iVar13] + 8);
					if (IS_ACTOR_VALID(&Global_53580 + 980 + 456[iVar13] + 8))
					{
						DESTROY_ACTOR(&Global_53580 + 980 + 456[iVar13] + 8);
					}
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_599() //Position: 0x20C8A / 134282
{
	Function_600();
	Function_241(&iLocal_17 + 3176[11]);
	uLocal_1497 = Function_241(&iLocal_17 + 3176[11]);
	uLocal_1513 = LOCATE_GRINGO_OF_TYPE("MEX_DRUNK_SITTABLE", &uLocal_1497, 2.0f, 0);
	SNAP_ACTOR_TO_GRINGO(&iLocal_17 + 1080[02], GET_OBJECT_FROM_GRINGO(&uLocal_1513), "UseCase1", true, 0, 0);
	Function_594(&iLocal_17 + 1080[02]);
	Function_241(&iLocal_17 + 3176[12]);
	uLocal_1497 = Function_241(&iLocal_17 + 3176[12]);
	uLocal_1515 = LOCATE_GRINGO_OF_TYPE("MEX_DRUNK_SITTABLE", &uLocal_1497, 2.0f, 0);
	SNAP_ACTOR_TO_GRINGO(&iLocal_17 + 1080[12], GET_OBJECT_FROM_GRINGO(&uLocal_1515), "UseCase1", true, 0, 0);
	Function_594(&iLocal_17 + 1080[12]);
	Function_239(&Global_54076, &iLocal_17 + 3176[4], 1, 1, 1);
	Function_239(&bLocal_1313, &iLocal_17 + 3176[5], 1, 1, 1);
	Function_239(&iLocal_1315, &iLocal_17 + 3176[6], 1, 1, 1);
	TASK_STAND_STILL(&iLocal_1315, -1.0f, 0, 0);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1313);
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1313, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1313, 0);
	TASK_FACE_ACTOR(&bLocal_1313, &Global_54076, 1, 3212836864);
	Function_373(&(Local_1646[015]), &bLocal_1313, "Gunslinger", 0, 0x5f5e100, 1);
	return;
}

void Function_600() //Position: 0x20DE1 / 134625
{
	*(&iLocal_17 + 1080[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Emilio", 650, Vector(-2689,848f, 31,3633f, 4289,829f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_17 + 1080[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "EmilioFriend", 651, Vector(-2690,423f, 31,34438f, 4288,61f), Vector(0.0f, 0.0f, 0.0f));
	return;
}

void Function_601() //Position: 0x20E4B / 134731
{
	if (iLocal_1286 <= 11)
	{
		if (iLocal_1559 && iLocal_1560)
		{
			if (Function_293(&bLocal_1396) < 1,5f && Function_293(&bLocal_1396) > 14.0f)
			{
				if (!iLocal_1584)
				{
					if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_SMALL_TEXT();
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(1.0f, 1f, 1);
						iLocal_1584 = 1;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (IS_BLIP_VALID(&uLocal_1495))
					{
						REMOVE_BLIP(&uLocal_1495);
					}
					Function_89(20, 1, 0, 0);
					Function_312(2, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1);
					Function_292();
					HUD_ENABLE(1);
					TRAIN_SET_ENGINE_ENABLED(Global_53579, 1);
					TRAIN_SET_TARGET_SPEED(Global_53579, 10.0f);
					TRAIN_SET_AUTOPILOT_ENABLE(Global_53579, 1);
					Function_326(&iLocal_17 + 3176[9]);
					Local_1451 = Function_326(&iLocal_17 + 3176[9]);
					if (!IS_BLIP_VALID(&bLocal_1493))
					{
						bLocal_1493 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 3176[9], 330, 0f, 2, 0);
					}
					Function_301(1.0f);
					iLocal_1559 = 0;
					iLocal_1560 = 0;
					Function_243(&bLocal_1396, 17.0f);
					iLocal_1286 = 11;
				}
			}
		}
	}
	return;
}

void Function_602() //Position: 0x20F56 / 134998
{
	switch (iLocal_1286)
	{
		case 0x00000006:
			Function_625(&Local_1273, 1);
			uLocal_1271 = CREATE_LAYOUT(Function_54());
			Function_624();
			ENABLE_CHILD_SECTOR("emt_caveDoor01x");
			DISABLE_CHILD_SECTOR("emt_caveDoor02x");
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_1812 = 0;
			Function_204(16384);
			iLocal_1286 = 7;
			break;
		
		case 0x00000007:
			iLocal_1286 = 8;
			break;
		
		case 0x00000008:
			if (Function_619())
			{
				Function_608();
				iLocal_1286 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(&iLocal_17))
			{
				uLocal_1394 = CREATE_OBJECT_ITERATOR(&iLocal_17);
			}
			Function_169(32769);
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!IS_ACTOR_VALID(&bLocal_1313))
			{
				bLocal_1313 = Function_337(5, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			Function_225(5, 1, 1);
			Function_225(8, 0, 1);
			RESET_ACTOR_GAITS(&bLocal_1313, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1313, 0);
			SET_ACTOR_FACTION(&bLocal_1313, 20);
			SET_ACTOR_CAN_BE_TARGETED(&bLocal_1313, false);
			TASK_PRIORITY_SET(&bLocal_1313, true);
			TASK_STAND_STILL(&bLocal_1313, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1313, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1313, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1313, GET_ACTOR_MAX_HEALTH(&bLocal_1313));
			TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_1313, 8, "FASTWALK");
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_1313, false);
			RESET_ACTOR_GAITS(&iLocal_1315, 0);
			TASK_PRIORITY_SET(&iLocal_1315, true);
			TASK_STAND_STILL(&iLocal_1315, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_1315, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_1315, GET_ACTOR_MAX_HEALTH(&iLocal_1315));
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1313, &Global_54076, 60.0f, 10.0f, 50.0f);
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1313);
			uLocal_1475 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_1271, "ncompsquad"));
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_1459, 0);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2368[1]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2368[1]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 2368[1], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_17 + 2304[5]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2304[5]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2304[5]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 2304[5], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_17 + 2608[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2608[0]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2608[0]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 2608[0], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2936[6]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2936[6]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 2936[6], 15);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2936[6]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2936[6]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 2936[6], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_17 + 2368[7]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2368[7]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 2368[7]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 2368[7], 15);
			Function_606(&uLocal_1592, &uLocal_1271);
			Function_442(&bLocal_1396);
			Function_442(&bLocal_1400);
			Function_442(&bLocal_1404);
			Function_442(&bLocal_1408);
			Function_442(&bLocal_1440);
			Function_442(&bLocal_1412);
			Function_442(&bLocal_1416);
			TOGGLE_COVER_PROPS(0);
			iLocal_1528 = 0;
			iLocal_1529 = 4294967295;
			iLocal_1285 = iLocal_1310;
			iLocal_1286 = 0;
			Function_604(&Local_1273, &iLocal_1285, &iLocal_1286);
			Function_603(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1273);
			switch (iLocal_1285)
			{
				case 0x00000000:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					Function_239(&Global_54076, &iLocal_17 + 3776[11], 1, 1, 1);
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
			if (Local_1273.f_40 == 4)
			{
				Function_239(&Global_54076, &iLocal_17 + 3528[4], 1, 1, 1);
				Function_239(&bLocal_1313, &iLocal_17 + 3528[5], 1, 1, 1);
				iLocal_1286 = 12;
			}
			break;
	}
	return;
}

void Function_603(struct<41> Param0) //Position: 0x2134A / 136010
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_1285 = 0;
			break;
		
		case 0x00000002:
			iLocal_1285 = 2;
			break;
		
		case 0x00000003:
			iLocal_1285 = 3;
			break;
		
		case 0x00000004:
			iLocal_1285 = 4;
			break;
		
		case 0x00000005:
			iLocal_1285 = 4;
			break;
		
		case 0x00000006:
			iLocal_1285 = 5;
			break;
		
		case 0x00000007:
			iLocal_1285 = 6;
			break;
		
		case 0x00000008:
			iLocal_1285 = 7;
			break;
		
		case 0x00000009:
			iLocal_1285 = 8;
			break;
		
		case 0x0000000A:
			iLocal_1285 = 101;
			break;
	}
}

void Function_604(int iParam0, var uParam1, int iParam2) //Position: 0x213DF / 136159
{
	if (Function_306(&iParam0))
	{
		uParam1 = Function_463(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_605();
	}
	return;
}

void Function_605() //Position: 0x2141B / 136219
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

int Function_606(struct<2>[] Param0) //Position: 0x2146C / 136300
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_607(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_607(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_607(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_607(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_607(struct<13> Param0) //Position: 0x21B45 / 138053
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
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_608() //Position: 0x21C14 / 138260
{
	var uVar0;
	
	Function_618(4, 1);
	uVar0 = &uVar0;
	iLocal_17 = CREATE_LAYOUT("Gun03_layout");
	*(&iLocal_17 + 2360) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "CutsceneVol_set");
	*(&iLocal_17 + 2304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Cutscene01Vol", 2,802597E-45f, Vector(-2685,231f, 32,50514f, 4216,396f), Vector(0.0f, -11,55684f, 0.0f), Vector(11,43215f, 6.0f, 5,518432f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2360, &iLocal_17 + 2304[0]);
	*(&iLocal_17 + 2304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Cutscene02Vol", 2,802597E-45f, Vector(-425,1237f, 23,09019f, 4012,801f), Vector(0.0f, -49,26702f, 0.0f), Vector(30,87534f, 6.0f, 10,73514f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2360, &iLocal_17 + 2304[1]);
	*(&iLocal_17 + 2304[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "trainarrivalVol", 2,802597E-45f, Vector(-802,8974f, 13,18986f, 3781,645f), Vector(0.0f, -133,8604f, 0.0f), Vector(22,38633f, 2,707919f, 8,061681f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2360, &iLocal_17 + 2304[2]);
	*(&iLocal_17 + 2304[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Cutscene10Vol", 2,802597E-45f, Vector(-230,1292f, 30,90152f, 3616f), Vector(0.0f, 57,07958f, 0.0f), Vector(11,93224f, 6.0f, 10,54885f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2360, &iLocal_17 + 2304[3]);
	*(&iLocal_17 + 2304[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "caveagrobox", 2,802597E-45f, Vector(-366,4774f, 16,94271f, 3945,918f), Vector(0.0f, 86.0f, 0.0f), Vector(10,76027f, 11,94619f, 11,22717f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2360, &iLocal_17 + 2304[4]);
	*(&iLocal_17 + 2304[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "introVol", 2,802597E-45f, Vector(-2688,283f, 32,14169f, 4288,949f), Vector(0.0f, -1,278747f, 0.0f), Vector(13,02267f, 11,33665f, 11,39821f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2360, &iLocal_17 + 2304[5]);
	*(&iLocal_17 + 2448) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "StageOneVols_set");
	*(&iLocal_17 + 2368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "TrainStation", 2,802597E-45f, Vector(-2685,22f, 34,5153f, 4215,859f), Vector(0.0f, -15.0f, 0.0f), Vector(37,61857f, 11,33665f, 17,59026f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[0]);
	*(&iLocal_17 + 2368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "HorseRestrictVol", 2,802597E-45f, Vector(-788,5385f, 14,76881f, 3751,461f), Vector(0.0f, -43,4996f, 0.0f), Vector(5,411997f, 4,629043f, 14,27383f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[1]);
	*(&iLocal_17 + 2368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CompTrain01", 2,802597E-45f, Vector(-2690,919f, 34,33663f, 4210,772f), Vector(0.0f, -11.0f, 0.0f), Vector(1,97681f, 3,682609f, 1,698111f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[2]);
	*(&iLocal_17 + 2368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "PlayerTrainL", 2,802597E-45f, Vector(-2686,394f, 34,29287f, 4211,657f), Vector(0.0f, -11.0f, 0.0f), Vector(7,170128f, 3,682609f, 2,892138f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[3]);
	*(&iLocal_17 + 2368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "PlayerTrainR", 2,802597E-45f, Vector(-2679,314f, 33,63758f, 4213,205f), Vector(0.0f, -15,79779f, 0.0f), Vector(9,635283f, 3,682609f, 2,892138f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[4]);
	*(&iLocal_17 + 2368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CompBoarding", 2,802597E-45f, Vector(-2691,234f, 33,91287f, 4212,395f), Vector(0.0f, -11.0f, 0.0f), Vector(1,97681f, 3,682609f, 2,686046f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[5]);
	*(&iLocal_17 + 2368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "playerseat", 2,802597E-45f, Vector(-2683,152f, 34,29287f, 4212,29f), Vector(0.0f, -11.0f, 0.0f), Vector(3,668948f, 3,682609f, 2,892138f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[6]);
	*(&iLocal_17 + 2368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "restrictvolwalk", 2,802597E-45f, Vector(-2697,301f, 34,5153f, 4254,272f), Vector(0.0f, -94,24332f, 0.0f), Vector(85,56531f, 11,33665f, 17,59026f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[7]);
	*(&iLocal_17 + 2368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "PassengerVol", 2,802597E-45f, Vector(-2680,791f, 33,02016f, 4212,918f), Vector(0.0f, -15,1873f, 0.0f), Vector(11,02099f, 3,682609f, 2,649331f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2448, &iLocal_17 + 2368[8]);
	*(&iLocal_17 + 2600) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "StageTwoVols_set");
	*(&iLocal_17 + 2456[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Smokehouse", 2,802597E-45f, Vector(-405,059f, 25,14553f, 3894,499f), Vector(0.0f, 62,57905f, 0.0f), Vector(7,762209f, 2,960223f, 4,073874f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[0]);
	*(&iLocal_17 + 2456[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Finish02", 2,802597E-45f, Vector(-367,852f, -18,1463f, 3962,036f), Vector(0.0f, 82.0f, 0.0f), Vector(105,9806f, 135,2161f, 52,01504f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[1]);
	*(&iLocal_17 + 2456[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesWarning", 2,802597E-45f, Vector(-387,3716f, 26,45159f, 3901,065f), Vector(0.0f, -16,60537f, 0.0f), Vector(1.0f, 12,82964f, 24,74814f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[2]);
	*(&iLocal_17 + 2456[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "ElMataWarnVol", 2,802597E-45f, Vector(-455,3017f, 21,10264f, 3926,207f), Vector(0.0f, 71,92312f, 0.0f), Vector(197,3687f, 33,18869f, 135,1619f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[3]);
	*(&iLocal_17 + 2456[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "ElMataFailVol", 2,802597E-45f, Vector(-477,1811f, 21,10264f, 3926,053f), Vector(0.0f, 77,85197f, 0.0f), Vector(279,9383f, 33,18869f, 208,7399f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[4]);
	*(&iLocal_17 + 2456[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Box", 2,802597E-45f, Vector(-2696,65f, 31,12157f, 4268,405f), Vector(0.0f, 0.0f, 0.0f), Vector(14,50078f, 8,717788f, 6,033511f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[5]);
	*(&iLocal_17 + 2456[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "TunnelTrainCam", 2,802597E-45f, Vector(-1336,02f, 18,61152f, 4130,321f), Vector(0.0f, 45.0f, 0.0f), Vector(93,40838f, 18,76752f, 16,45882f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[6]);
	*(&iLocal_17 + 2456[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "ArriveMatVol", 2,802597E-45f, Vector(-456,7144f, 21,10264f, 3924,638f), Vector(0.0f, 42.0f, 0.0f), Vector(143,5299f, 33,18869f, 122,5895f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[7]);
	*(&iLocal_17 + 2456[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "EnterSlaughterHouse", 2,802597E-45f, Vector(-409,2598f, 27,68888f, 3903,641f), Vector(0.0f, 59.0f, 0.0f), Vector(41,42346f, 11,94619f, 28,36759f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[8]);
	*(&iLocal_17 + 2456[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "SlaughterHouseFront", 2,802597E-45f, Vector(-409,9618f, 26,02801f, 3910,41f), Vector(0.0f, 60.0f, 0.0f), Vector(5,138498f, 4,373862f, 5,924598f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[9]);
	*(&iLocal_17 + 2456[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CarlosDistractBox", 2,802597E-45f, Vector(-366,4774f, 16,94271f, 3945,918f), Vector(0.0f, 86.0f, 0.0f), Vector(10,76027f, 11,94619f, 11,22717f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[10]);
	*(&iLocal_17 + 2456[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "SlaughterHouseHorse", 2,802597E-45f, Vector(-416,4457f, 25,78259f, 3919,628f), Vector(0.0f, 63.0f, 0.0f), Vector(22,96374f, 12,61965f, 27,17104f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[11]);
	*(&iLocal_17 + 2456[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CarlosDistractOne", 2,802597E-45f, Vector(-378,77f, 21,30621f, 3926,851f), Vector(0.0f, -12,10209f, 0.0f), Vector(6,399157f, 10,25409f, 6,190296f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[12]);
	*(&iLocal_17 + 2456[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CompHorseHitch", 2,802597E-45f, Vector(-408,4279f, 25,78259f, 3918,491f), Vector(0.0f, 63.0f, 0.0f), Vector(8,868859f, 4,873855f, 10,49377f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[13]);
	*(&iLocal_17 + 2456[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "caveRestrictionPop", 2,802597E-45f, Vector(-330,1334f, 35,2714f, 3963,759f), Vector(0.0f, -10,19938f, 0.0f), Vector(135,2772f, 54,25456f, 66,2943f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[14]);
	*(&iLocal_17 + 2456[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "SlaughterHouseDoor", 2,802597E-45f, Vector(-409,4651f, 27,15714f, 3910,073f), Vector(0.0f, 61.0f, 0.0f), Vector(1,761035f, 8,132387f, 10,74397f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[15]);
	*(&iLocal_17 + 2456[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "slaughterhouse", 2,802597E-45f, Vector(-404,631f, 25,78259f, 3901,02f), Vector(0.0f, 63.0f, 0.0f), Vector(19,2774f, 4,873855f, 11,89443f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2600, &iLocal_17 + 2456[16]);
	*(&iLocal_17 + 2816) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "StageThreeVols_set");
	*(&iLocal_17 + 2608[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Caves", 2,802597E-45f, Vector(-314,3846f, 25,47548f, 3965,935f), Vector(-0,7387468f, -15,31663f, 5,421587f), Vector(110,4157f, 16,27423f, 38,29015f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[0]);
	*(&iLocal_17 + 2608[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "RestrictVol", 2,802597E-45f, Vector(-320,5518f, 33,70432f, 3970,724f), Vector(3,158319f, 70,89893f, 5,013691f), Vector(71,1985f, 36,36105f, 132,2838f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[1]);
	*(&iLocal_17 + 2608[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CaveEntrance", 2,802597E-45f, Vector(-365,5661f, 18,35822f, 3945,963f), Vector(0.0f, 0.0f, 0.0f), Vector(47,80951f, 12,34816f, 19,69703f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[2]);
	*(&iLocal_17 + 2608[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesFront", 2,802597E-45f, Vector(-331,523f, 26,45024f, 3958,329f), Vector(0.0f, -90,55269f, 0.0f), Vector(30,89874f, 22,17093f, 17,7872f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[3]);
	*(&iLocal_17 + 2608[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesBackLeft", 2,802597E-45f, Vector(-305,5204f, 26,02388f, 3954,366f), Vector(0.0f, -2,763729f, 0.0f), Vector(30,16141f, 15,11039f, 15,31691f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[4]);
	*(&iLocal_17 + 2608[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesBackRight", 2,802597E-45f, Vector(-303,5889f, 29,29765f, 3978,478f), Vector(-0,481213f, -5,524535f, 3,759063f), Vector(36,38427f, 18,15247f, 26,99455f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[5]);
	*(&iLocal_17 + 2608[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "UpperCaveTrigger", 2,802597E-45f, Vector(-329,188f, 22,57287f, 3964,332f), Vector(0.0f, 4.0f, 0.0f), Vector(14,41893f, 12,34816f, 9,381137f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[6]);
	*(&iLocal_17 + 2608[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesPrisonArea", 2,802597E-45f, Vector(-279,4097f, 31,55452f, 3980,436f), Vector(-0,1098528f, -0,1708494f, -0,01351718f), Vector(25,57194f, 18,15247f, 26,99455f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[7]);
	*(&iLocal_17 + 2608[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesFailVol", 2,802597E-45f, Vector(-320,5518f, 33,70432f, 3970,724f), Vector(3,158319f, 70,89893f, 5,013691f), Vector(171,732f, 36,36105f, 247,5288f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[8]);
	*(&iLocal_17 + 2608[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CaveCliffs", 2,802597E-45f, Vector(-375,3528f, 26,30666f, 3972,449f), Vector(0.0f, -90,55269f, 0.0f), Vector(6,056333f, 11,89941f, 11,52528f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[9]);
	*(&iLocal_17 + 2608[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesWarnVol", 2,802597E-45f, Vector(-320,5518f, 33,70432f, 3970,724f), Vector(3,158319f, 70,89893f, 5,013691f), Vector(131,4396f, 36,36105f, 183,013f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[10]);
	*(&iLocal_17 + 2608[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesDefendPrisonArea", 2,802597E-45f, Vector(-288,227f, 31,5566f, 3980,41f), Vector(-0,1098528f, -0,1708494f, -0,01351718f), Vector(39,0273f, 18,15247f, 26,99455f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[11]);
	*(&iLocal_17 + 2608[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CavesOutsideDoor", 2,802597E-45f, Vector(-291,5258f, 31,56335f, 3983,518f), Vector(-0,1107728f, -7,391642f, 0,0004062949f), Vector(23,0466f, 18,15247f, 10,33276f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[12]);
	*(&iLocal_17 + 2608[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "AssaultVol", 2,802597E-45f, Vector(-378,8857f, 19,95065f, 3942,62f), Vector(0.0f, -12,10209f, 0.0f), Vector(7,862772f, 10,25409f, 33,5055f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[13]);
	*(&iLocal_17 + 2608[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Cave_EntranceVol", 2,802597E-45f, Vector(-358,5951f, 18,30742f, 3946,144f), Vector(0.0f, 0.0f, 0.0f), Vector(14,1828f, 12,34816f, 19,69703f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[14]);
	*(&iLocal_17 + 2608[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Cave_Vol02", 2,802597E-45f, Vector(-346,7885f, 18,35822f, 3950,09f), Vector(0.0f, 0.0f, 0.0f), Vector(14,1828f, 12,34816f, 10,62477f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[15]);
	*(&iLocal_17 + 2608[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "ExitCaves_B", 2,802597E-45f, Vector(-334,6738f, 26,45024f, 3950,37f), Vector(0.0f, -90,55269f, 0.0f), Vector(12,0556f, 22,17093f, 12,0546f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[16]);
	*(&iLocal_17 + 2608[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "ExitCaves_A", 2,802597E-45f, Vector(-328,9201f, 19,3961f, 3969,725f), Vector(0.0f, -90,55269f, 0.0f), Vector(11,34548f, 22,17093f, 11,25895f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[17]);
	*(&iLocal_17 + 2608[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CaptureBullet", 2,802597E-45f, Vector(-285,1189f, 25,13069f, 3986,8f), Vector(-0,1107728f, -7,391642f, 0,0004062949f), Vector(1,037901f, 1,86428f, 1,739923f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[18]);
	*(&iLocal_17 + 2608[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "StgEnd", 2,802597E-45f, Vector(-357,3404f, 19,08478f, 3946,557f), Vector(0.0f, 86.0f, 0.0f), Vector(10,76027f, 11,94619f, 2,84517f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[19]);
	*(&iLocal_17 + 2608[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "alertshoutbox", 2,802597E-45f, Vector(-345,8617f, 19,08478f, 3949,655f), Vector(0.0f, 86.0f, 0.0f), Vector(10,76027f, 11,94619f, 2,84517f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[20]);
	*(&iLocal_17 + 2608[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "playercovervol", 2,802597E-45f, Vector(-327,5525f, 19,85407f, 3960,943f), Vector(0.0f, 4.0f, 0.0f), Vector(4,191616f, 3,64509f, 3,686561f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[21]);
	*(&iLocal_17 + 2608[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "plantTNTvol", 2,802597E-45f, Vector(-280,8574f, 29,29765f, 3978,478f), Vector(-0,481213f, -5,524535f, 3,759063f), Vector(36,38427f, 18,15247f, 26,99455f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[22]);
	*(&iLocal_17 + 2608[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Caves1", 2,802597E-45f, Vector(-314,3846f, 39,03355f, 3965,935f), Vector(-0,7387468f, -15,31663f, 5,421587f), Vector(110,4157f, 16,27423f, 45,3014f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[23]);
	*(&iLocal_17 + 2608[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "playerstop5", 2,802597E-45f, Vector(-331,368f, 22,57287f, 3954,787f), Vector(0.0f, 10,58473f, 0.0f), Vector(14,41893f, 12,34816f, 9,381137f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2816, &iLocal_17 + 2608[24]);
	*(&iLocal_17 + 2928) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "StageFourVols_set");
	*(&iLocal_17 + 2824[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Wave02", 2,802597E-45f, Vector(-247,127f, 30,67823f, 3779,21f), Vector(0.0f, -31.0f, 0.0f), Vector(51,8041f, 43,29697f, 203,0987f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[0]);
	*(&iLocal_17 + 2824[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nLock_LR02", 2,802597E-45f, Vector(-246,7531f, 39,89701f, 3747,396f), Vector(0.0f, -25.0f, 0.0f), Vector(101,8238f, 43,29697f, 153,4509f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[1]);
	*(&iLocal_17 + 2824[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "FinalFightGate", 2,802597E-45f, Vector(-224,5288f, 51,67003f, 3594,629f), Vector(0.0f, 2.0f, 0.0f), Vector(110,5183f, 43,29697f, 134,5376f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[2]);
	*(&iLocal_17 + 2824[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nLock_LR01", 2,802597E-45f, Vector(-331,991f, 27,35041f, 3874,927f), Vector(-2,931224f, -68,98803f, -2,310138f), Vector(36,437f, 43,29697f, 54,44566f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[3]);
	*(&iLocal_17 + 2824[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "Wave05", 2,802597E-45f, Vector(-212,4258f, 40,31428f, 3669,908f), Vector(0.0f, -21.0f, 0.0f), Vector(101,8238f, 43,29697f, 231,2156f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[4]);
	*(&iLocal_17 + 2824[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "s4_HorseWander", 2,802597E-45f, Vector(-368,527f, 18,35575f, 3947,617f), Vector(2,73814f, -91,00113f, -2,640882f), Vector(10,39173f, 11,48572f, 14,85366f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[5]);
	*(&iLocal_17 + 2824[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "MeetCarlos", 2,802597E-45f, Vector(-229,135f, 30,4965f, 3596,177f), Vector(0.0f, 6.0f, 0.0f), Vector(17,88551f, 11,54025f, 20,11608f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[6]);
	*(&iLocal_17 + 2824[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "FinalFightCage", 2,802597E-45f, Vector(-220,9778f, 51,67003f, 3585,051f), Vector(0.0f, 0.0f, 0.0f), Vector(101,6896f, 43,29697f, 88,29236f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[7]);
	*(&iLocal_17 + 2824[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "AlertWave03", 2,802597E-45f, Vector(-221,7635f, 43,19818f, 3673,819f), Vector(0.0f, 2.0f, 0.0f), Vector(110,5183f, 43,29697f, 49,48666f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[8]);
	*(&iLocal_17 + 2824[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "AlertWave02", 2,802597E-45f, Vector(-274,4434f, 48,79067f, 3828,092f), Vector(0.0f, -12.0f, 0.0f), Vector(110,5183f, 43,29697f, 49,48666f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[9]);
	*(&iLocal_17 + 2824[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "finalFightVol", 2,802597E-45f, Vector(-217,8628f, 51,67003f, 3589,972f), Vector(0.0f, -19.0f, 0.0f), Vector(105,6529f, 43,29697f, 55,11265f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[10]);
	*(&iLocal_17 + 2824[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "restricvol", 2,802597E-45f, Vector(-226,3728f, 30,4965f, 3598,389f), Vector(0.0f, 6.0f, 0.0f), Vector(11,61492f, 11,54025f, 11,88835f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 2928, &iLocal_17 + 2824[11]);
	*(&iLocal_17 + 3016) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "StageFiveVols_set");
	*(&iLocal_17 + 2936[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "FinishVol05", 2,802597E-45f, Vector(-227,6223f, 30,70741f, 3595,261f), Vector(0.0f, 9,654322f, 0.0f), Vector(33,12624f, 12,04003f, 60,88321f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[0]);
	*(&iLocal_17 + 2936[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "TriggerMiddle", 2,802597E-45f, Vector(-272,48f, 30,67823f, 3837f), Vector(0.0f, -10,19938f, 0.0f), Vector(101,8238f, 43,29697f, 10,54885f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[1]);
	*(&iLocal_17 + 2936[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "TriggerEnd", 2,802597E-45f, Vector(-246,314f, 30,9717f, 3753,081f), Vector(0.0f, -27,46268f, 0.0f), Vector(164,7787f, 48,77829f, 10,54885f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[2]);
	*(&iLocal_17 + 2936[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CombatEndZone", 2,802597E-45f, Vector(-229,5786f, 32,57224f, 3607,78f), Vector(0.0f, -6,326312f, 0.0f), Vector(15,23446f, 9,512454f, 16,34731f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[3]);
	*(&iLocal_17 + 2936[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CombatFrontZone01", 2,802597E-45f, Vector(-358,7943f, 18,75965f, 3886,49f), Vector(3,923321f, 34,72558f, -5,576751f), Vector(14,64612f, 12,68379f, 12,78698f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[4]);
	*(&iLocal_17 + 2936[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "CombatFrontZone02", 2,802597E-45f, Vector(-325,8779f, 22,65186f, 3872,177f), Vector(3,274609f, 10,10904f, -7,238645f), Vector(14,64612f, 12,68379f, 12,78698f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[5]);
	*(&iLocal_17 + 2936[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "HorseRestrictCanyonVol", 2,802597E-45f, Vector(-224,1524f, 54,06115f, 3717,34f), Vector(0.0f, -10,19938f, 0.0f), Vector(159,0084f, 54,25456f, 290,2056f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[6]);
	*(&iLocal_17 + 2936[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "NoSpawn", 2,802597E-45f, Vector(-370,401f, 23,72901f, 3925,363f), Vector(-18,11041f, 81,15002f, -11,17208f), Vector(93,41571f, 33,3944f, 46,68706f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[7]);
	*(&iLocal_17 + 2936[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "AbandonLandon", 2,802597E-45f, Vector(-391,6123f, 25,29111f, 3899,884f), Vector(0.0f, -6,326312f, 0.0f), Vector(15,23446f, 9,512454f, 16,34731f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3016, &iLocal_17 + 2936[8]);
	*(&iLocal_17 + 3064) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "LandonEscapeVols_set");
	*(&iLocal_17 + 3024[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "stop01", 2,802597E-45f, Vector(-295,3604f, 23,68226f, 3977,641f), Vector(0.0f, -45,91341f, 0.0f), Vector(6,317288f, 5,691771f, 13,40098f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3064, &iLocal_17 + 3024[0]);
	*(&iLocal_17 + 3024[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "stop02", 2,802597E-45f, Vector(-331,2242f, 20,98374f, 3960,125f), Vector(0.0f, 91.0f, 0.0f), Vector(1,991383f, 5,691771f, 14,47915f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3064, &iLocal_17 + 3024[1]);
	*(&iLocal_17 + 3024[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "stop03", 2,802597E-45f, Vector(-337,4864f, 20,4096f, 3950,093f), Vector(0.0f, 2,78192f, 0.0f), Vector(1,991383f, 5,691771f, 10,30119f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3064, &iLocal_17 + 3024[2]);
	*(&iLocal_17 + 3024[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "stop04", 2,802597E-45f, Vector(-313,3755f, 23,61343f, 3976,763f), Vector(0.0f, 13.0f, 0.0f), Vector(16,4102f, 5,691771f, 10,30119f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 3064, &iLocal_17 + 3024[3]);
	*(&iLocal_17 + 3072) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", &iLocal_17, 8, 0);
	*(&iLocal_17 + 3080[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart10", Vector(-228,6567f, 30,44905f, 3607,265f), Vector(0.0f, 182,9025f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[0], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerEnd10", Vector(-226,7194f, 30,23503f, 3601,266f), Vector(-0,064671f, 16,04705f, 1,061484f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[1], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart10", Vector(-230,0478f, 30,74862f, 3612,522f), Vector(0.0f, -142,0327f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[2], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionEnd10", Vector(-223,8321f, 30,82714f, 3597,135f), Vector(-6,934178f, 378,8872f, -5,450884f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[3], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MexGirlEnd10", Vector(-228,3931f, 30,42128f, 3599,463f), Vector(0.0f, -54,66875f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[4], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayersHorseStart10", Vector(-228,8763f, 30,54517f, 3603,236f), Vector(0.0f, 479.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[5], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MexGirlStart10", Vector(-226,4764f, 30,36216f, 3610,562f), Vector(0.0f, 121,0069f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[6], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CarlosStart10", Vector(-233,0473f, 30,42128f, 3582,262f), Vector(0.0f, 385,7571f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[7], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Playershorsehide", Vector(-212f, 30,28165f, 3592.0f), Vector(0.0f, 479.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[8], &iLocal_17 + 3072);
	*(&iLocal_17 + 3080[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Playershorsehide1", Vector(-212.0f, 29,62697f, 3596f), Vector(0.0f, 479.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3080[9], &iLocal_17 + 3072);
	*(&iLocal_17 + 3168) = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 3176[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "LocateTrainSitGringos", Vector(-2683,361f, 33,369f, 4213,727f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[0], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompWait", Vector(-778,847f, 13,05098f, 3753,153f), Vector(0.0f, -133,3304f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[1], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TeleComp01", Vector(-446,468f, 22,01449f, 3942,468f), Vector(0.0f, -226,0053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[2], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainSeatPlayer", Vector(-2683,2f, 32,6f, 4211,2f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[3], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart01", Vector(-2688,396f, 31,35937f, 4287,166f), Vector(0.0f, 83,06501f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[4], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart01", Vector(-2691,524f, 31,40393f, 4286,347f), Vector(0.0f, 82,99824f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[5], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerHorseStart01", Vector(-2640,006f, 30,86114f, 4258,543f), Vector(0.0f, 94,95278f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[6], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainStart01", Vector(-2661,331f, 32,0646f, 4219,049f), Vector(0.0f, 255,8521f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[7], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Finish01", Vector(-455,3792f, 20,21464f, 3903,593f), Vector(0.0f, -226,0053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[8], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainEnd01", Vector(-785,7498f, 13,25401f, 3774,417f), Vector(0.0f, 315,204f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[9], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainStartStream", Vector(-2690,455f, 32,581f, 4212,914f), Vector(0.0f, 345.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[10], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Pos_Emilio", Vector(-2687,704f, 31,84922f, 4290,638f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[11], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Pos_EmilioFriend", Vector(-2688,622f, 31,84925f, 4290,096f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[12], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainStart02", Vector(-833,8668f, 12,06535f, 3821,297f), Vector(0.0f, 315,204f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[13], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CasaMadGate", Vector(-776.0f, 13,34598f, 3748.0f), Vector(0.0f, -133,3304f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[14], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainStartStream1", Vector(-2690,165f, 33,338f, 4210,815f), Vector(0.0f, 177.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[15], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStartstream", Vector(-815,9625f, 13,0619f, 3796,415f), Vector(0.0f, 227,8713f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[16], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStartstream", Vector(-820.0f, 13,05098f, 3796f), Vector(0.0f, 250,1919f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[17], &iLocal_17 + 3168);
	*(&iLocal_17 + 3176[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bararea", Vector(-2701,75f, 31,88216f, 4288,431f), Vector(0.0f, -96,75059f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3176[18], &iLocal_17 + 3168);
	*(&iLocal_17 + 3336) = CREATE_OBJECTSET_IN_LAYOUT("StageOneHalfSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 3344[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart015", Vector(-802,13f, 14,344f, 3788,158f), Vector(0.0f, -45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[0], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart015", Vector(-800,285f, 14,343f, 3790,115f), Vector(0.0f, 315.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[1], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerHorseStart015", Vector(-783,798f, 13,05098f, 3750,393f), Vector(0.0f, 224,3453f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[2], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompHorseStart015", Vector(-785,9161f, 13,05098f, 3750,895f), Vector(0.0f, -132,1099f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[3], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainDeBoard", Vector(-796,457f, 13,551f, 3781,076f), Vector(0.0f, 405.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[4], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainJumpOff", Vector(-795,1423f, 14,452f, 3782,589f), Vector(0.0f, 405.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[5], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TrainDeBoardObs", Vector(-796,5263f, 13,395f, 3777,608f), Vector(0.0f, 13.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[6], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DeboardGoto", Vector(-796,8191f, 13,81917f, 3771,611f), Vector(0.0f, 328,1447f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[7], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerSpawn", Vector(-796,8861f, 13,50911f, 3780,768f), Vector(0.0f, 379.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[8], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart016", Vector(-812,0688f, 13,53179f, 3785,091f), Vector(0.0f, -45.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[9], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart016", Vector(-814,0406f, 13,56218f, 3783,809f), Vector(0.0f, 315.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[10], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MatGateway", Vector(-451,4734f, 20,35105f, 3910,081f), Vector(0.0f, -226,0053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[11], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "HorseHitchComp", Vector(-414,5997f, 23,76431f, 3912,87f), Vector(0.0f, -397.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[12], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "HorseHitchLook", Vector(-462,0805f, 20,51696f, 3918,129f), Vector(0.0f, -274.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[13], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "HitchPlayerGringo", Vector(-446,2885f, 22,16883f, 3923,126f), Vector(0.0f, -226,0053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[14], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerHitchPos", Vector(-446,7572f, 21,15385f, 3922,507f), Vector(0.0f, -98.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[15], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerHitchPos1", Vector(-417,2662f, 23,772f, 3913,196f), Vector(0.0f, 323.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[16], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "HitchPlayerGringo1", Vector(-414,4588f, 24,23531f, 3912,573f), Vector(0.0f, -226,0053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[17], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompSlaughterHouse", Vector(-410,016f, 24,15965f, 3911,199f), Vector(0.0f, -226,0053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[18], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompHorseGoto", Vector(-409,7141f, 23,76431f, 3914,553f), Vector(0.0f, -387.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[19], &iLocal_17 + 3336);
	*(&iLocal_17 + 3344[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DeboardGoto1", Vector(-795,3037f, 13,05098f, 3768,358f), Vector(0.0f, 330,6402f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3344[20], &iLocal_17 + 3336);
	*(&iLocal_17 + 3520) = CREATE_OBJECTSET_IN_LAYOUT("StageTwoSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 3528[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S2_PatrolFlag1", Vector(-484.0f, 20,07843f, 4004.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[0], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S2_PatrolFlag2", Vector(-504.0f, 18,07058f, 3964.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[1], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S2_PatrolFlag3", Vector(-424f, 23,09019f, 3984.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[2], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S2_PatrolFlag4", Vector(-448f, 22,08627f, 3936.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[3], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SlaughterPlayerStart02", Vector(-407,3572f, 24,1203f, 3901,744f), Vector(0.0f, -194,6223f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[4], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SlaughterCompStart02", Vector(-409,4275f, 24,08166f, 3910,393f), Vector(0.0f, -193.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[5], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nDebugTele", Vector(-462,1412f, 18,53711f, 4086,141f), Vector(0.0f, 53,18034f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[6], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MiniCut_Comp", Vector(-386,1845f, 23,94416f, 3899,498f), Vector(0.0f, -84,00574f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[7], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MiniCut_Player", Vector(-385,7877f, 23,90608f, 3901,337f), Vector(-3,671902f, -70,61158f, 3,336052f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[8], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "GunslingerGoto02", Vector(-405,7273f, 24,12927f, 3901,375f), Vector(0.0f, -190.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[9], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart02", Vector(-406,3367f, 24,09405f, 3892.0f), Vector(0.0f, 197.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[10], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart02", Vector(-406,9493f, 24,04499f, 3893,47f), Vector(0.0f, 202.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[11], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompHorseStart02", Vector(-461,8379f, 21,08234f, 3941,838f), Vector(0.0f, -69,53682f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[12], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "VillageQuestDocks", Vector(-445,6328f, 22,48436f, 3926,945f), Vector(0.0f, 53,18034f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[13], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "VillageQuestBarn", Vector(-473,7541f, 21,08235f, 3937,754f), Vector(0.0f, 53,18034f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[14], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SlingerConvo01", Vector(-469,8733f, 20,58581f, 3917,766f), Vector(0.0f, 88.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[15], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SlingerConvo02", Vector(-471,4741f, 20,58581f, 3917,694f), Vector(0.0f, -93.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[16], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DistractGuard02", Vector(-364,8885f, 17,18475f, 3946,509f), Vector(-1,667085f, 75,23365f, -1,500059f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[17], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "DistractGuard01", Vector(-364,9862f, 17,121f, 3944,4f), Vector(0.0f, 97,15676f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[18], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "LandonDistract", Vector(-394,1369f, 27,61761f, 3898,522f), Vector(0.0f, 89.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[19], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "LandonGotoDistract", Vector(-396,16f, 24,273f, 3908,175f), Vector(0.0f, -24.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[20], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SlaughterCompStart03", Vector(-408,9032f, 24,19855f, 3907,068f), Vector(0.0f, -196,1155f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[21], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "landonSpeakWait", Vector(-379,3726f, 20,44775f, 3927,616f), Vector(0.0f, 29.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[22], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "carlosSpeakWait", Vector(-380,4211f, 16,90464f, 3952,351f), Vector(0.0f, -361,4053f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[23], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "OutsidePrisonBlip", Vector(-286,7323f, 24,2615f, 3979,468f), Vector(0.0f, -453,0235f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[24], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CarlosWave_Dudes", Vector(-366,6552f, 16,98829f, 3946,152f), Vector(-0,9567491f, 63,00837f, -0,785497f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[25], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[26]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerChevronfor_Carlos", Vector(-378,6414f, 20,67705f, 3927,19f), Vector(0.0f, 168.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[26], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[27]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CarlosDistractGuards", Vector(-366,6348f, 17,02288f, 3945,656f), Vector(0.0f, 260.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[27], &iLocal_17 + 3520);
	*(&iLocal_17 + 3528[28]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TeleportPlayer03", Vector(-290,4931f, 24,22197f, 3981,896f), Vector(0.0f, -498.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3528[28], &iLocal_17 + 3520);
	*(&iLocal_17 + 3768) = CREATE_OBJECTSET_IN_LAYOUT("StageThreeSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 3776[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TakeMexGirl", Vector(-355,2306f, 18,36169f, 3948,845f), Vector(0.0f, -104,9485f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[0], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Entrance03", Vector(-354,4962f, 18,28556f, 3946,518f), Vector(0.0f, -269,7657f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[1], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PrisonDoor", Vector(-285,312f, 24,27388f, 3986,975f), Vector(0.0f, -452,6049f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[2], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "GunslingerGotoAfterBomb", Vector(-294,5369f, 24,24358f, 3981,827f), Vector(0.0f, -120,2974f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[3], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "FinishAfterBomb", Vector(-293,3893f, 24,20052f, 3979,369f), Vector(0.0f, -127,5973f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[4], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "BombLoc", Vector(-284,6946f, 24,27506f, 3986,985f), Vector(0.0f, -452,6049f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[5], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "RusherShootFrom01", Vector(-292,348f, 24,03638f, 3973,568f), Vector(0.0f, -535,4736f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[6], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "RusherShootFrom02", Vector(-295,9978f, 23,80153f, 3970,812f), Vector(0.0f, -531,2138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[7], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "OutsidePrisonDoor", Vector(-286,293f, 24,2615f, 3986,959f), Vector(0.0f, -453,0235f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[8], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "InsidePrisonDoor", Vector(-281,9997f, 24,35036f, 3987,421f), Vector(0.0f, -453,0235f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[9], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "GunslingerInitialCover", Vector(-379,0038f, 20,605f, 3928,251f), Vector(0.0f, 245.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[10], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart03", Vector(-381,513f, 23,77284f, 3902,71f), Vector(0.0f, -140,0233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[11], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart03", Vector(-293,8308f, 24,14849f, 3977,581f), Vector(0.0f, -310,7387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[12], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MexGirlStart03", Vector(-280,3255f, 24,42975f, 3981,202f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[13], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "InsideManGoto", Vector(-369,4212f, 16,06273f, 3929,421f), Vector(0.0f, 187,2934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[14], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "RusherShootFrom03", Vector(-293,3001f, 24,01451f, 3975,28f), Vector(0.0f, -537.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[15], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "RusherShootFrom04", Vector(-294,6035f, 24,04187f, 3978,059f), Vector(0.0f, -531.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[16], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TNTLoc", Vector(-293,0761f, 24,244f, 3982,188f), Vector(0.0f, 14.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[17], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "TNTLoc1", Vector(-291,5595f, 24,23439f, 3982,101f), Vector(0.0f, -452,6049f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[18], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S3_PlayerEnd", Vector(-291,1665f, 24,15351f, 3979,207f), Vector(-2,494836f, 53,64082f, -1,654915f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[19], &iLocal_17 + 3768);
	*(&iLocal_17 + 3776[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S3_CaveExit", Vector(-359,516f, 17,685f, 3946,188f), Vector(0.0f, 22,85951f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3776[20], &iLocal_17 + 3768);
	*(&iLocal_17 + 3952) = CREATE_OBJECTSET_IN_LAYOUT("StageFiveSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 3960[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Finish05", Vector(-230,041f, 30,74862f, 3612,454f), Vector(0.0f, -86,26677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[0], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "StreamingLoadScene05", Vector(-377,549f, 22,61509f, 3479,967f), Vector(0.0f, -86,26677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[1], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart05", Vector(-359,516f, 17,685f, 3946,188f), Vector(0.0f, 22,85951f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[2], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CompanionStart05", Vector(-365,1646f, 17,08877f, 3945,165f), Vector(0.0f, 39,99954f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[3], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "MexGirlStart05", Vector(-365,3661f, 17,06666f, 3948.0f), Vector(0.0f, 17,32102f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[4], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s5_CarlosPt02", Vector(-290,3505f, 30,88897f, 3610,827f), Vector(0.0f, -30,93691f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[5], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s5_CarlosPt01", Vector(-208,0001f, 33,91497f, 3524f), Vector(0.0f, 151,6423f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[6], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Landon_Wait4Carlos01", Vector(-228,1971f, 30,29038f, 3603,384f), Vector(0.0f, 4,939013f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[7], &iLocal_17 + 3952);
	*(&iLocal_17 + 3960[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "GW_Player_Wait4Carlos", Vector(-225,9373f, 30,23503f, 3603,33f), Vector(0.0f, -4.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 3960[8], &iLocal_17 + 3952);
	*(&iLocal_17 + 4040) = CREATE_OBJECTSET_IN_LAYOUT("S2_LandonCoverSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4048[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover01", Vector(-377,1807f, 21,03133f, 3926,47f), Vector(-1,192441f, 182,001f, -0,8820832f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[0], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover02", Vector(-363,911f, 17,212f, 3947,576f), Vector(0.0f, 261.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[1], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover03", Vector(-352,1685f, 18,566f, 3945,611f), Vector(0.0f, 245.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[2], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover04", Vector(-336,801f, 18,928f, 3946,762f), Vector(0.0f, 195.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[3], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_ShootFrom02", Vector(-332,797f, 19,2377f, 3953,626f), Vector(0.0f, 197.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[4], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover05", Vector(-303,3815f, 23,207f, 3972,805f), Vector(0.0f, 276.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[5], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_ShootFrom03", Vector(-317,2108f, 20,75409f, 3975,157f), Vector(0.0f, -483.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[6], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover06", Vector(-295,9978f, 23,80153f, 3970,812f), Vector(0.0f, 182.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[7], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_ShootFrom04", Vector(-380,469f, 17,048f, 3950,228f), Vector(0.0f, 279,2443f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[8], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover07", Vector(-328,1769f, 18,88347f, 3960,562f), Vector(0.0f, 197.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[9], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover08", Vector(-380,0234f, 17,51275f, 3948,809f), Vector(0.0f, 197.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[10], &iLocal_17 + 4040);
	*(&iLocal_17 + 4048[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_Cover09", Vector(-330,4247f, 19,37003f, 3965,808f), Vector(0.0f, 197.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4048[11], &iLocal_17 + 4040);
	*(&iLocal_17 + 4152) = CREATE_OBJECTSET_IN_LAYOUT("S2_CaveGuards_CoverSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4160[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_01", Vector(-332,068f, 19,53f, 3956,092f), Vector(0.0f, 7.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[0], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_02", Vector(-327,6471f, 18,98501f, 3949,19f), Vector(0.0f, 106.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[1], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_03", Vector(-328,0554f, 18,98501f, 3947,766f), Vector(0.0f, 114.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[2], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_04", Vector(-327,284f, 19,054f, 3952,94f), Vector(0.0f, 78.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[3], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_05", Vector(-326,494f, 19,05f, 3955,263f), Vector(0.0f, 78.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[4], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_06", Vector(-329,602f, 19,38f, 3968,637f), Vector(0.0f, 9.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[5], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_07", Vector(-328,1284f, 19,45394f, 3971,063f), Vector(0.0f, 20.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[6], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_08", Vector(-331,555f, 21,317f, 3971,26f), Vector(0.0f, 2.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[7], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_09", Vector(-294,136f, 23,919f, 3971,812f), Vector(0.0f, 98.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[8], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_010", Vector(-312,0334f, 21,774f, 3976,134f), Vector(0.0f, 97.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[9], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_011", Vector(-309,3814f, 22,014f, 3979,26f), Vector(0.0f, 83.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[10], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_012", Vector(-293,1289f, 24,145f, 3976,828f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[11], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_014", Vector(-291,0887f, 24,154f, 3974,635f), Vector(0.0f, 96.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[12], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_013", Vector(-292,2103f, 24,2304f, 3982,239f), Vector(0.0f, 15.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[13], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_015", Vector(-360,1425f, 17,59475f, 3947,916f), Vector(0.0f, 70,81441f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[14], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_016", Vector(-332,0539f, 21,317f, 3969,124f), Vector(0.0f, -22,8958f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[15], &iLocal_17 + 4152);
	*(&iLocal_17 + 4160[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "caveCov_017", Vector(-326,4125f, 19,18701f, 3962,187f), Vector(0.0f, 32,73092f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4160[16], &iLocal_17 + 4152);
	*(&iLocal_17 + 4304) = CREATE_OBJECTSET_IN_LAYOUT("S3_LouisaCoverSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4312[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "lCover01", Vector(-297,6746f, 24,31715f, 3981,011f), Vector(0.0f, 276,9139f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4312[0], &iLocal_17 + 4304);
	*(&iLocal_17 + 4312[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "lCover02", Vector(-333,0059f, 19,881f, 3960,351f), Vector(0.0f, -532.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4312[1], &iLocal_17 + 4304);
	*(&iLocal_17 + 4312[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "lCover03", Vector(-311,0483f, 21,99806f, 3974,563f), Vector(0.0f, -567,7631f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4312[2], &iLocal_17 + 4304);
	*(&iLocal_17 + 4312[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nlLookAt01", Vector(-294,6594f, 24,03874f, 3978,106f), Vector(0.0f, 161.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4312[3], &iLocal_17 + 4304);
	*(&iLocal_17 + 4312[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nlLookAt02", Vector(-315,1067f, 21,21079f, 3979,273f), Vector(0.0f, 161.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4312[4], &iLocal_17 + 4304);
	*(&iLocal_17 + 4312[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nlLookAt03", Vector(-330,4594f, 19,49639f, 3959,951f), Vector(0.0f, 161.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4312[5], &iLocal_17 + 4304);
	*(&iLocal_17 + 4368) = CREATE_OBJECTSET_IN_LAYOUT("S3_ExitGuards_CoverSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4376[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "exitCov_01", Vector(-292,3871f, 24,033f, 3973,625f), Vector(0.0f, 186.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4376[0], &iLocal_17 + 4368);
	*(&iLocal_17 + 4376[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "exitCov_02", Vector(-332,8451f, 19,2389f, 3953,672f), Vector(0.0f, -159,9138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4376[1], &iLocal_17 + 4368);
	*(&iLocal_17 + 4376[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "exitCov_03", Vector(-336,7276f, 18,92268f, 3946,49f), Vector(0.0f, -155.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4376[2], &iLocal_17 + 4368);
	*(&iLocal_17 + 4376[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "exitCov_04", Vector(-326,7343f, 19,02724f, 3948,398f), Vector(0.0f, -253,6992f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4376[3], &iLocal_17 + 4368);
	*(&iLocal_17 + 4376[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "exitCov_05", Vector(-345,8617f, 19,08478f, 3949,655f), Vector(0.0f, -467,8211f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4376[4], &iLocal_17 + 4368);
	*(&iLocal_17 + 4424) = CREATE_OBJECTSET_IN_LAYOUT("StageFourSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4432[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "FinishSPAWN", Vector(-230,041f, 30,74862f, 3612,454f), Vector(0.0f, -86,26677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4432[0], &iLocal_17 + 4424);
	*(&iLocal_17 + 4432[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Wait4Carlos", Vector(-228,0526f, 30,70618f, 3594,681f), Vector(0.0f, -86,26677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4432[1], &iLocal_17 + 4424);
	*(&iLocal_17 + 4432[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Wait4Carlos1", Vector(-228,0288f, 30,70741f, 3594,7f), Vector(0.0f, -86,26677f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4432[2], &iLocal_17 + 4424);
	*(&iLocal_17 + 4432[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "S4_PlayerHorseStart", Vector(-368.0f, 16,87624f, 3944.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4432[3], &iLocal_17 + 4424);
	*(&iLocal_17 + 4472) = CREATE_OBJECTSET_IN_LAYOUT("S4_BaddiePosSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4480[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01_a", Vector(-327,73f, 20,563f, 3869,377f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[0], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01_b", Vector(-265,763f, 32,468f, 3837,467f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[1], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c", Vector(-279,375f, 36,1f, 3860,222f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[2], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c1", Vector(-272,635f, 31,257f, 3814,527f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[3], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c2", Vector(-266,657f, 32,779f, 3772,182f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[4], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c3", Vector(-263,2292f, 35,333f, 3762,071f), Vector(0.0f, -207.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[5], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c4", Vector(-235,531f, 35,038f, 3753,158f), Vector(0.0f, -207.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[6], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c5", Vector(-222,331f, 35,391f, 3740,964f), Vector(0.0f, -252.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[7], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c6", Vector(-225,31f, 31,454f, 3728,615f), Vector(0.0f, -230.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[8], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01c7", Vector(-214,603f, 32,63f, 3728,638f), Vector(0.0f, -218.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[9], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01_a1", Vector(-285,596f, 27,122f, 3861,254f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[10], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv01_a2", Vector(-280,031f, 35,933f, 3859,819f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[11], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv04_a", Vector(-232,6391f, 31,48899f, 3634,202f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[12], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv04_b", Vector(-230,3817f, 31,45073f, 3634,575f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[13], &iLocal_17 + 4472);
	*(&iLocal_17 + 4480[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_Baddie_wv04_c", Vector(-230,5022f, 31,41393f, 3638,167f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4480[14], &iLocal_17 + 4472);
	*(&iLocal_17 + 4608) = CREATE_OBJECTSET_IN_LAYOUT("S4_LandonWaitPosSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 4616[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_LandonWt1", Vector(-291,1363f, 26,9903f, 3859,686f), Vector(0.0f, -393.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4616[0], &iLocal_17 + 4608);
	*(&iLocal_17 + 4616[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_LandonWt2", Vector(-272,635f, 31,257f, 3814,527f), Vector(0.0f, -256.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4616[1], &iLocal_17 + 4608);
	*(&iLocal_17 + 4616[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "s4_LandonWt3", Vector(-229,2244f, 30,70764f, 3595,608f), Vector(0.0f, 182.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 4616[2], &iLocal_17 + 4608);
	*(&iLocal_17 + 4648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "smoking_stand_nospawn", "smoking_stand_nospawn", Vector(-408,9398f, 24,167f, 3911,665f), Vector(0.0f, 482.0f, 0.0f));
	*(&iLocal_17 + 4656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "leaning_stand_indef1", "smoking_stand", Vector(-405,5659f, 24,12927f, 3896,926f), Vector(0.0f, -572,3745f, 0.0f));
	*(&iLocal_17 + 4664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ricketts_tnt_crates", "ricketts_tnt_crates", Vector(-292,5454f, 24,24111f, 3982,518f), Vector(0.0f, 371,6663f, 0.0f));
	GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&iLocal_17 + 4664), "UseCase1", 0);
	*(&iLocal_17 + 4672) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "cover_end01", Vector(-222,8867f, 29,8357f, 3602,833f), Vector(0.0f, 158,1336f, 0.0f), 4);
	*(&iLocal_17 + 4680) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "cover_end02", Vector(-236.0f, 31,49134f, 3606,716f), Vector(0.0f, 183,881f, 0.0f), 4);
	*(&iLocal_17 + 4688) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveCornerCoverBackRight01", Vector(-312,4316f, 21,81039f, 3976,556f), Vector(0.0f, -202,8072f, 0.0f), 1);
	*(&iLocal_17 + 4696) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CaveCornerCoverBackRight04", Vector(-301,3563f, 23,49955f, 3973,251f), Vector(0.0f, -524,4532f, 0.0f), 1);
	*(&iLocal_17 + 4704) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "gs_CoverL_01", Vector(-302,5293f, 23,30809f, 3973,411f), Vector(0.0f, -612.0f, 0.0f), 1);
}

void AÁ>EsãÃ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194) //Position: 0x27113 / 160019
{
	PatchTrap7();
	*"AÁýEtÃÌ}JAÁEtYÃÌæAÀÔE" = 4294951330 * 29698;
}

var ÊExSÝ,Ç:Bp°:¯o	exitpath p   ÌÃlkÊAð·§E_bÃpÖAíçE_*rÃvëAí2ÍE^ßßÃ}%=Aé5ãE^ªÃÇ·AäÖsE^?Ã¬ÙAáÌE^ÑÃÇ®AàE^uÃõ AÝkJE^u¿Ãn6AÚQHE^rPÃ;AØ8qE^\¥ÃøAÖE^ZVÃÃ©AÒE^55Ã²9AÐ9GE^(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141) //Position: 0x2733A / 160570
{
	Unknown_Function();
	strcpy(&cLocal_65, StackVal, 155);
	Unknown_Function();
	PatchTrap7();
	PatchTrap6();
	PatchTrapB();
	Unknown_Function();
	Unknown_Function();
	CallPatch();
	PatchRet();
	Unknown_Function();
	*(&iLocal_17 + 4728) = 31 <= 44;
	PushArrayP();
	*(&iLocal_17 + 4736) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(4294951720, &iLocal_17, "EscapePath");
}

struct<8> EsÐ§ÃË
­AÀÀ§EsêÃËmAÀÀEsûâÃËUyAÀÀtEtÃË¿SAÀÀwEt(\ÃÌoÆAÀÀ|EtE7ÃÌ®ÄAÀkªEtUÃÌÏNAÀ'*EtaôÃÌßAÁ(§EtlÀÃÌàrAÁ_HEtqÞÃÌØÊAÁEtvùÃÌÆmAÁèEt|þÃÌ­zAÁ~áEt#ÃÌ~~AÁpEt±ÃÌ*·AÀùõEt±ÃËyA¿(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x2785B / 161883
{
	Unknown_Function();
}

void A¬nEuÉÃ½áA«ÒEu(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194) //Position: 0x27A2B / 162347
{
	var uVar17584;
	
}

struct<8> Ã¾°oA¬%EvÃ¾ÇQA&Ev&ÒÃ¾×_AªEv5GÃ¾àýAEvCÓÃ¾äA¢EvRkÃ¾âÐAÉEvaÃ¾ÝÃA5EvoÃ¾(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x27AFF / 162559
{
	return StackVal, StackVal->f_16783;
}

var qEjïÄ5AQVÍEjõVÄýARNHEjý2Äì­AS ÕEkÌÄÖAS&ÔEk	mÄÂAUÁEkÚÄ³ÇAX~lEk%pÄ´³A\SEkBaÄÏùA_¼àEkjfÄòÛAbÝEkÁÄýAf OEk¿ðÄ?AhÞEkë×Äi®AkOElÄSAn"1ElEºÄÂkAp)Els[Äå$Ar¿ElÓÄ}AuqElËÄ
L,AxmJElüÄ	¶A{E(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x28426 / 164902
{
	uLocal_17773 = StackVal;
	TASK_MOUNT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
	Unknown_Function();
	return -!4294934779 * 28051 + 196;
}

void Eo,Ä^ºAºEoiGÄÚÇAWEo¦¼ÄWcA½MEoäDÄÓAEp!¿ÄNoA Ep_Ä ÆÎA7¹EpùÄ <3A,(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x2856B / 165227
{
	return;
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	PatchTrap8();
	return Global_4296360;
	return 4294937877 * 29067 * 29126;
	strcpy((*4294938710)[4294967295 != "" >= (6.0f->f_158 && 4294937506) * 2900869], StackVal * 28888, 0);
	return;
	PatchTrap7();
	(*cLocal_195)[4294939160 * 2924269] = StackVal;
	Global_4551336 = 4294940121;
	((4294939632 || 5.0f * 29298) >= 7)->f_59201 = StackVal;
	PatchTrap0();
	iLocal_69 = 4294940998;
	itos(3.0f * 29400, StackVal, 6);
	197 = 241;
	return 195, 4294941260;
	return 4294941511;
	cLocal_195 = StackVal * 29483 * 29512;
}

var GEvã
Ã»FÄAOEvÚaÃºñ6A~¦,EvÕfÃº7A~¦~EvËmÃ¹´<AßEvÅÃ¸®A-Ev·¡Ã·ÿÿA¬ Ev±ÍÃ¶  A^Ev§øÃµñA	<Ev£(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126) //Position: 0x288F2 / 166130
{
	int iVar42;
	var uVar59588;
	
	cLocal_195 = 4294937875 * 30369;
	return 4294938297;
	*(StackVal >= (StackVal / StackVal) * 30371) = StackVal;
	PatchTrap5();
	*(StackVal >= 4294938911 * 30373) = StackVal;
	(*7)[StackVal * -889540517] = StackVal;
}

var Function_617(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x29364 / 168804
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_618(int iParam0, int iParam1) //Position: 0x29392 / 168850
{
	switch (&iParam1)
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

bool Function_619() //Position: 0x293DC / 168924
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_621())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_346(&iLocal_1340))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1313))
		{
			bLocal_1313 = Function_337(5, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_518())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_1315))
		{
			iLocal_1315 = Function_513(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_620())
		{
			return 0;
		}
	}
	return 1;
}

bool Function_620() //Position: 0x29456 / 169046
{
	if (Global_53579 <= 0)
	{
		return 0;
	}
	return 1;
}

bool Function_621() //Position: 0x29466 / 169062
{
	Function_351(&iLocal_17 + 8, 976, 2, 0);
	Function_351(&iLocal_17 + 8, 977, 2, 0);
	Function_351(&iLocal_17 + 8, Global_14880[03], 2, 0);
	Function_622(&iLocal_17 + 8, "p_gen_campfireCombined01x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_gen_tent01x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_bat_wagon03x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_gen_dynamite01x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_uti_cover1x2x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_uti_cover2x1x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_uti_cover1x1x", 0, 0);
	Function_622(&iLocal_17 + 8, "p_gen_dynamite02x", 0, 0);
	Function_622(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_622(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_622(&iLocal_17 + 8, "$/content/scripting/gringo/simplegringo/ricketts_tnt_crates", 1, 0);
	if (Function_346(&iLocal_17 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_622(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x29662 / 169570
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_623(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_349(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_623(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x296A0 / 169632
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_188(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_349(&(Param0[iVar02]), 4);
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

void Function_624() //Position: 0x2976F / 169839
{
	Function_622(&iLocal_1340, "Gun03", 10, 0);
	Function_622(&iLocal_1340, "talking_stand", 5, 0);
	Function_622(&iLocal_1340, "custom/talking_stand", 8, 0);
	Function_622(&iLocal_1340, "custom/stand_ambient", 8, 0);
	Function_622(&iLocal_1340, "aiming_point", 5, 0);
	Function_622(&iLocal_1340, "custom/aiming_point", 8, 0);
	Function_622(&iLocal_1340, "ngun03_hog", 5, 0);
	Function_622(&iLocal_1340, "fema_ride_passenger", 5, 0);
	Function_622(&iLocal_1340, "gun03_train_wave", 5, 0);
	Function_622(&iLocal_1340, "custom/gun03_train_wave", 8, 0);
	Function_622(&iLocal_1340, "throw_dynamite01x", 0, 0);
	Function_351(&iLocal_1340, 555, 3, 0);
	Function_351(&iLocal_1340, 558, 3, 0);
	return;
}

void Function_625(int iParam0, bool bParam1) //Position: 0x298C3 / 170179
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_632(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_306(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_306(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_631();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_258();
	Function_300();
	Function_248("");
	Function_630(0);
	Function_629();
	Function_212();
	Function_211();
	ENABLE_JOURNAL_REPLAY(0);
	Function_628();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_513(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_355(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_627(13);
	Function_627(14);
	Function_627(25);
	Function_627(24);
	Function_627(12);
	Function_627(27);
	Function_627(26);
	Function_627(15);
	Function_626();
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

void Function_626() //Position: 0x29D03 / 171267
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
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
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_627(int iParam0) //Position: 0x29D88 / 171400
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_628() //Position: 0x29DA8 / 171432
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

void Function_629() //Position: 0x29DEE / 171502
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_630(int iParam0) //Position: 0x29E04 / 171524
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_215())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_631() //Position: 0x29E3D / 171581
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_632(int iParam0, int iParam1) //Position: 0x29E46 / 171590
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
			Function_633(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_633(struct<113> Param0) //Position: 0x29ECD / 171725
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

bool Function_634(struct<25> Param0) //Position: 0x29F2B / 171819
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!Param0.f_20)
					{
						if (iLocal_1285 <= 2)
						{
							Function_642();
						}
						else
						{
							Function_641();
						}
					}
					else
					{
						Function_640();
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						Function_639();
					}
					break;
				
				case 0x00000003:
					if (!Param0.f_20)
					{
					}
					break;
			}
			break;
		
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!Param0.f_20)
					{
						if (iLocal_1285 <= 2)
						{
							Function_638();
						}
						else
						{
							Function_637();
						}
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						Function_636();
					}
					break;
				
				case 0x00000003:
					if (!Param0.f_20)
					{
					}
					break;
			}
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
			Function_635(&Param0, 1);
			return 1;
		}
	}
	Function_635(&Param0, 0);
	return 0;
}

void Function_635(struct<25> Param0) //Position: 0x2A05D / 172125
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

void Function_636() //Position: 0x2A088 / 172168
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_AssaultsLisa", "Gun03_AssaultsLisa", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_637() //Position: 0x2A0D5 / 172245
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_AssaultsRickEscape", "Gun03_AssaultsRickEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_638() //Position: 0x2A12E / 172334
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_AssaultsRickB4Caves", "Gun03_AssaultsRickB4Caves", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_639() //Position: 0x2A189 / 172425
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ShootsLisa", "Gun03_ShootsLisa", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_640() //Position: 0x2A1D2 / 172498
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ShootsRickettsDuEscape", "Gun03_ShootsRickettsDuEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_641() //Position: 0x2A233 / 172595
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ShootsRickEscape", "Gun03_ShootsRickEscape", 0, 2, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_642() //Position: 0x2A288 / 172680
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Gun03_ShootsRickB4Caves", "Gun03_ShootsRickB4Caves", 0, 1, 1, 0, 1);
		Function_361(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_643(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2A2DF / 172767
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
		Function_635(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_662(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_661(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_661(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_647(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_635(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_646(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_645(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_646(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_644(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_248(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_645(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_635(&Param2, 0);
	return 0;
}

void Function_644(char* cParam0) //Position: 0x2A6F5 / 173813
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

void Function_645(struct<25> Param0) //Position: 0x2A7E9 / 174057
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
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_646(bool bParam0) //Position: 0x2A861 / 174177
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_647(struct<57> Param0) //Position: 0x2A885 / 174213
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
			return Function_658(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_651(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_658(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_648(&Param0, bVar2);
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
						bVar2 = Function_658(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_648(&Param0, bVar2);
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

var Function_648(int iParam0, bool bParam1) //Position: 0x2A9F6 / 174582
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
				bParam1 = Function_650(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_649(16);
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
				bParam1 = Function_650(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_649(256);
			}
		}
	}
	return bParam1;
}

bool Function_649(int iParam0) //Position: 0x2AB32 / 174898
{
	return 2 | iParam0;
}

int Function_650(int iParam0) //Position: 0x2AB3C / 174908
{
	return 4 | iParam0;
}

int Function_651(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2AB46 / 174918
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
				iParam3 = Function_657(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_649(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_652(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_649(16);
		}
	}
	return 0;
}

int Function_652(int iParam0, vector3 vParam1) //Position: 0x2AC01 / 175105
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_656(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_655(iVar0, 3, 1, bParam3))
			{
				if (!Function_661(&iParam0, 8, 1))
				{
					return Function_654(64, 1024, bParam2);
				}
			}
			return Function_653(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_655(iVar0, 2, 1, bParam3))
			{
				if (!Function_661(&iParam0, 32, 1))
				{
					return Function_654(64, 1024, bParam2);
				}
			}
			return Function_653(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_655(iVar0, 1, 1, bParam3))
			{
				if (!Function_661(&iParam0, 64, 1))
				{
					return Function_654(64, 1024, bParam2);
				}
			}
			return Function_653(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_655(iVar0, 3, 1, bParam3))
			{
				if (!Function_661(&iParam0, 128, 1))
				{
					return Function_654(64, 1024, bParam2);
				}
			}
			return Function_653(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_655(iVar0, 1, 1, bParam3))
			{
				if (!Function_661(&iParam0, 1024, 1))
				{
					return Function_654(64, 1024, bParam2);
				}
			}
			return Function_653(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_655(iVar0, 1, 1, bParam3))
			{
				if (!Function_661(&iParam0, 1024, 1))
				{
					return Function_654(64, 1024, bParam2);
				}
			}
			return Function_653(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_653(int iParam0, int iParam1, bool bParam2) //Position: 0x2ADC9 / 175561
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_654(int iParam0, int iParam1, bool bParam2) //Position: 0x2ADDE / 175582
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_655(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2ADF3 / 175603
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_656(int iParam0) //Position: 0x2AE10 / 175632
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

int Function_657(var uParam0, vector3 vParam1) //Position: 0x2AE83 / 175747
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_656(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_655(iVar0, 3, 1, bParam2))
			{
				if (!Function_661(&uParam0, 8, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000009:
			if (Function_655(iVar0, 3, 1, bParam2))
			{
				if (!Function_661(&uParam0, 8, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x0000006E:
			if (Function_655(iVar0, 2, 1, bParam2))
			{
				if (!Function_661(&uParam0, 16, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x0000005B:
			if (Function_655(iVar0, 2, 1, bParam2))
			{
				if (!Function_661(&uParam0, 32, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000031:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&uParam0, 64, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000007:
			if (Function_655(iVar0, 3, 1, bParam2))
			{
				if (!Function_661(&uParam0, 128, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000008:
			if (Function_655(iVar0, 2, 1, bParam2))
			{
				if (!Function_661(&uParam0, 256, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000014:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&uParam0, 512, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000018:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&uParam0, 512, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000057:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&uParam0, 1024, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000058:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&uParam0, 1024, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_658(struct<65> Param0) //Position: 0x2B0AC / 176300
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
						return Function_657(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_661(&Param0, 2, 1))
					{
						return Function_650(8);
					}
					return Function_649(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_661(&Param0, 4, 1))
					{
						return Function_650(16);
					}
					return Function_649(16);
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
							return Function_652(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_661(&Param0, 2, 1))
						{
							return Function_650(128);
						}
						return Function_649(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_661(&Param0, 4, 1))
						{
							return Function_650(256);
						}
						return Function_649(256);
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
						return Function_652(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_661(&Param0, 2, 1))
					{
						return Function_650(8);
					}
					return Function_649(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_661(&Param0, 4, 1))
					{
						return Function_650(16);
					}
					return Function_649(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_660(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_661(&Param0, 2, 1))
					{
						return Function_650(8);
					}
					return Function_649(8);
				}
				if (!Function_661(&Param0, 4, 1))
				{
					return Function_650(16);
				}
				return Function_649(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_652(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_659(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_649(128);
							}
							if (!Function_661(&Param0, 2, 1))
							{
								return Function_650(8);
							}
							return Function_649(8);
						}
						if (iParam4 == 2)
						{
							if (Function_659(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_649(256);
							}
							if (!Function_661(&Param0, 4, 1))
							{
								return Function_650(16);
							}
							return Function_649(16);
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

bool Function_659(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2B392 / 177042
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

int Function_660(int iParam0, vector3 vParam1) //Position: 0x2B460 / 177248
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_656(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_655(iVar0, 2, 1, bParam2))
			{
				if (!Function_661(&iParam0, 16, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x0000005B:
			if (Function_655(iVar0, 2, 1, bParam2))
			{
				if (!Function_661(&iParam0, 32, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000057:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&iParam0, 1024, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		case 0x00000058:
			if (Function_655(iVar0, 1, 1, bParam2))
			{
				if (!Function_661(&iParam0, 1024, 1))
				{
					return Function_650(64);
				}
			}
			return Function_649(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_661(struct<69> Param0) //Position: 0x2B582 / 177538
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

int Function_662(int iParam0) //Position: 0x2B5AC / 177580
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_663(bool bParam0) //Position: 0x2B5E2 / 177634
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_664(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x2B600 / 177664
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

