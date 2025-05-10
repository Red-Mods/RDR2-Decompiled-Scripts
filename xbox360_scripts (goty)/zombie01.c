//Decompiled with MagicRDR v1.0
//Function Count : 501
//Statics Count : 684
//Natives Count : 705
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<749> Local_4 = { 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_192 = 0;
	Local_194 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_337 = 99;
	iLocal_338 = 6;
	Local_330 = 1000;
	Function_500(0);
	while (Function_215())
	{
		Function_174();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x46 / 70
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	if (DECOR_CHECK_EXIST(Global_34573, "nNoGrapple"))
	{
		DECOR_REMOVE(Global_34573, "nNoGrapple");
	}
	if (IS_ACTOR_VALID((*&Local_4 + 172)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 172)[02]);
	}
	if (IS_OBJECT_VALID(bLocal_466))
	{
		DESTROY_OBJECT(bLocal_466);
	}
	DECOR_REMOVE(StackVal, "bNoTerritoryMusicControl");
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_173(bLocal_193);
	Function_173(Local_4);
	Function_172();
	Function_144(bLocal_450, 0, 1, 0, 1, 1, 1, 1);
	Function_143(1);
	Function_139(&bLocal_201);
	if (bLocal_449)
	{
		Function_138((*&Local_4 + 116)[22]);
		Function_138((*&Local_4 + 116)[12]);
		Function_138((*&Local_4 + 148)[12]);
		Function_138((*&Local_4 + 148)[02]);
		Function_137(6, 1);
		Global_3418 = 0;
		HUD_ENABLE(true);
		if (IS_OBJECT_VALID(bLocal_464))
		{
			DESTROY_OBJECT(bLocal_464);
		}
		if (!iLocal_438[0])
		{
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(6, false, 0));
		}
		if (!IS_ACTORSET_VALID(Local_4.f_200))
		{
			Function_136();
		}
		if (IS_VOLUME_VALID((*&Local_4 + 240)[2]))
		{
			bVar0 = FIND_NAMED_LAYOUT("BeechersHope_layout");
			if (IS_LAYOUTREF_VALID(bVar0))
			{
				GET_VOLUME_CENTER((*&Local_4 + 240)[2], &vVar1);
				vVar4.f_4 = GET_VOLUME_HEADING((*&Local_4 + 240)[2]);
				GET_VOLUME_SCALE((*&Local_4 + 240)[2], &vVar7);
				CREATE_OBSTACLE_IN_LAYOUT(bVar0, Function_135(), vVar1, vVar4, vVar7);
			}
			else
			{
				LOG_ERROR("beecher's layout not valid!?");
			}
		}
	}
	Function_133();
	if (IS_ITERATOR_VALID(bLocal_339))
	{
		DESTROY_ITERATOR(bLocal_339);
	}
	RELEASE_LAYOUT_REF(bLocal_193);
	if (bLocal_449)
	{
		Function_132(1);
		if (!ACTOR_HAS_WEAPON(Global_34573, 16))
		{
			_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 12.0f, 0);
			Function_130(16, 0, 0);
		}
		if (!ACTOR_HAS_WEAPON(Global_34573, 21))
		{
			Function_130(21, 0, 0);
		}
		if (!ACTOR_HAS_WEAPON(Global_34573, 4))
		{
			_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 24.0f, 0);
			Function_130(4, 0, 0);
		}
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
		{
			TASK_STAND_STILL((*&Local_4 + 188)[02], -1.0f, 0, 0);
			TASK_PRIORITY_SET((*&Local_4 + 188)[02], 2);
			AI_STOP_IGNORING_ACTOR((*&Local_4 + 188)[02]);
			SET_ACTOR_RIDEABLE((*&Local_4 + 188)[02], 1);
			Function_129(&Global_12976 + 36 + 20, 2);
			Function_128((*&Local_4 + 188)[02], 1);
			GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 188)[02], FIND_NAMED_LAYOUT("PlayerLayout"));
		}
		DECOR_SET_BOOL(Global_34573, "bFinishedFalseCutscene", true);
		DECOR_SET_FLOAT(Global_34573, "fZombie01Completion", GET_CURRENT_GAME_TIME());
		ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
		UI_HIDE("WeaponAmmo");
		UI_HIDE("WeaponAmmoClipMax");
		Function_27(Local_194, 1, 1, 1, 0);
		Function_26(0x8000000);
	}
	else if (bLocal_450)
	{
		Function_22(Local_194);
	}
	else
	{
		Function_2(Local_194);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x370 / 880
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x391 / 913
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x3AC / 940
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x3CD / 973
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x3E3 / 995
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

void Function_7(int iParam0) //Position: 0x47F / 1151
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x4A0 / 1184
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

void Function_9() //Position: 0x4E6 / 1254
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x4FF / 1279
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x552 / 1362
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x676 / 1654
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

bool Function_13() //Position: 0x6B0 / 1712
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x6CB / 1739
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x6D8 / 1752
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_16(int iParam0) //Position: 0x6F8 / 1784
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x70F / 1807
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_18() //Position: 0x72A / 1834
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

void Function_19(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x971 / 2417
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_20(int iParam0) //Position: 0x99A / 2458
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

bool Function_21(int iParam0) //Position: 0x9BE / 2494
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x9D3 / 2515
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x9F1 / 2545
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xA97 / 2711
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

struct<24> Function_25(char* cParam0) //Position: 0xAD6 / 2774
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

void Function_26(bool bParam0) //Position: 0xD2C / 3372
{
	if (Function_14(bParam0, 1) && !Function_14(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD59 / 3417
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_123(&(Global_3422[iVar240]));
		Function_143(4194304);
		if (bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		else if (bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		uVar1 = Function_121();
		if (bParam1)
		{
			Function_99(iVar2, bParam0, uVar1);
			Function_98();
		}
	}
	Global_34165.f_56 = 0;
	Global_34165.f_60 = 0;
	Global_13172[bParam011].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_43(bParam0, bParam1, uParam2, uVar1);
	if (Function_17(bParam0) == 1)
	{
		if (bParam1)
		{
		}
	}
	Function_29(0);
	iVar2 = Function_15(bParam0);
	if (iVar2 == 1)
	{
		Function_28("ZOMBIE_STORY_1_SHORT", (7.5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_28("ZOMBIE_STORY_4_SHORT", 7.5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_28(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE62 / 3682
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_29(int iParam0) //Position: 0xEE7 / 3815
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_40(1, 0))
	{
		Function_38("ZOMBIE_STORY_1_OBJ");
		if (!Function_37(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_37(4) && !Function_35(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_37(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_38("ZOMBIE_STORY_2Nigel_OBJ");
		Function_38("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_37(8) && !Function_37(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_37(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_37(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_37(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_37(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_32(&Global_3422[240] + 128, 2) || ((((((Function_37(14) && Function_37(18)) && Function_37(37)) && Function_37(7)) && Function_37(11)) && Function_37(5)) && Function_37(21)))
	{
		Function_38("ZOMBIE_STORY_3_OBJ");
		if (!Function_40(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_40(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_38("ZOMBIE_STORY_4_OBJ");
		if (!Function_37(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_32(&Global_3422[340] + 128, 2) || ((Function_37(27) && Function_37(1)) && Function_37(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_38("ZOMBIE_STORY_5_OBJ");
		if (!Function_40(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_40(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_37(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_37(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_37(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_37(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_31(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_31(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_31(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_30(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_30(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_37(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_37(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_37(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_37(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_37(6) && Function_31(Global_30735) < 0) && Function_31(Global_30737) < 0) && Function_31(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_37(11))
	{
		if (Function_37(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_30(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_30(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_30(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_30(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_30(491) <= 5 && Function_30(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_37(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_37(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_28(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_30(int iParam0) //Position: 0x17DC / 6108
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_31(bool bParam0) //Position: 0x181D / 6173
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

bool Function_32(int iParam0, int iParam1) //Position: 0x1837 / 6199
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_33() //Position: 0x1853 / 6227
{
	return STRING_TO_HASH(Function_34());
}

var Function_34() //Position: 0x185F / 6239
{
	return "ZOMBIE_STORY";
}

bool Function_35(int iParam0) //Position: 0x1874 / 6260
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_36(iParam0)11].f_12 < 0;
}

int Function_36(int iParam0) //Position: 0x18DA / 6362
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_37(int iParam0) //Position: 0x199C / 6556
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_38(bool bParam0) //Position: 0x19B1 / 6577
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_33(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_34(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_33(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_33(), bParam0, 0, 3, false);
	Function_39(Function_33(), 0);
	return;
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x19F9 / 6649
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

bool Function_40(int iParam0, bool bParam1) //Position: 0x1A1E / 6686
{
	int iVar0;
	
	iVar0 = Function_41(iParam0);
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

int Function_41(int iParam0) //Position: 0x1A5B / 6747
{
	if (!Function_42(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_42(int iParam0) //Position: 0x1A75 / 6773
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A8B / 6795
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_97())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_93();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_97())
	{
		Function_92();
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
			Function_87(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
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
						switch (Function_15(bParam0))
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
			Function_47(1);
			Function_45(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_44(bParam0, &Var14);
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

void Function_44(int iParam0, int iParam1) //Position: 0x1CDF / 7391
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_45(var uParam0, var uParam1) //Position: 0x1D19 / 7449
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_46())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_46() //Position: 0x1D5B / 7515
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_47(bool bParam0) //Position: 0x1D64 / 7524
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_77();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_49();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_48(&Global_63095, 1);
		Function_48(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x1DB5 / 7605
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_49() //Position: 0x1DC8 / 7624
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_57(0);
	Function_57(0);
	if (!Function_46())
	{
		Function_54();
		Function_53();
		Function_52();
		Function_51();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_50();
	return;
}

void Function_50() //Position: 0x1E1A / 7706
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

void Function_51() //Position: 0x1F20 / 7968
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

void Function_52() //Position: 0x1F53 / 8019
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

void Function_53() //Position: 0x20E1 / 8417
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

void Function_54() //Position: 0x2295 / 8853
{
	Function_55(&Global_28260, 1, 0);
	return;
}

void Function_55(int iParam0, bool bParam1, var uParam2) //Position: 0x22A3 / 8867
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
	
	bVar0 = Function_56();
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

var Function_56() //Position: 0x2494 / 9364
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_57(int iParam0) //Position: 0x24A9 / 9385
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
					iVar2 = ((Function_30((50 + iVar4)) + Function_30((183 + iVar4))) + Function_30((90 + iVar4)));
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
	Function_58(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_58(int iParam0, bool bParam1, bool bParam2) //Position: 0x254F / 9551
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
		Function_71(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_70(iParam0);
	if (bParam2)
	{
		Function_59(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_59(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x27EA / 10218
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_69(390))), 32);
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
					bVar19 = (Function_68(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_68(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_66(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_63(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_60(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_135(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_60(int iParam0) //Position: 0x2E17 / 11799
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_61(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2E28 / 11816
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_62(char* cParam0, bool bParam1) //Position: 0x2F1D / 12061
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_63(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2F36 / 12086
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_65(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_64(Function_65(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_64(int iParam0, int iParam1) //Position: 0x2F9B / 12187
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_65(int iParam0, bool bParam1) //Position: 0x2FAD / 12205
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_66(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2FBF / 12223
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
	if (((Function_67(iParam0) != 19 || Function_67(iParam0) != 17) || Function_67(iParam0) != 10) || Function_67(iParam0) != 9)
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

int Function_67(int iParam0) //Position: 0x30EF / 12527
{
	return Global_35278[iParam020].f_48;
}

float Function_68(int iParam0) //Position: 0x30FE / 12542
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_69(int iParam0) //Position: 0x3137 / 12599
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_70(int iParam0) //Position: 0x3174 / 12660
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

int Function_71(int iParam0, bool bParam1, bool bParam2) //Position: 0x330E / 13070
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

struct<8> Function_72() //Position: 0x3552 / 13650
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
		iVar2 = ((Function_30((50 + iVar3) + 15) + Function_30((183 + iVar3) + 15)) + Function_30((90 + iVar3) + 15));
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
	Function_58(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x35DB / 13787
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
			iVar2 = ((Function_30((50 + iVar3) + 8) + Function_30((183 + iVar3) + 8)) + Function_30((90 + iVar3) + 8));
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
	Function_58(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x3672 / 13938
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
		iVar2 = ((Function_30((50 + iVar3)) + Function_30((183 + iVar3))) + Function_30((90 + iVar3)));
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
	Function_58(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_75() //Position: 0x36F1 / 14065
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_58(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x372A / 14122
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
	Function_71(iParam0, bParam1, 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_59(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77() //Position: 0x3934 / 14644
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_84(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_84(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_78(StackVal, StackVal, vVar0))
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

bool Function_78(vector3 vParam0) //Position: 0x39EF / 14831
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_79(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3A07 / 14855
{
	int iVar0;
	
	iVar0 = Function_82(uParam2, uParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_129(&Global_63095, 1);
			Function_48(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_129(&Global_63095, 2);
			Function_48(&Global_63095, 1);
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
		Function_129(&Global_63095, 2);
		Function_48(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_80();
	return StackVal, StackVal, Function_80();
}

vector3 Function_80() //Position: 0x3AEE / 15086
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_81(int iParam0) //Position: 0x3AF7 / 15095
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x3B0D / 15117
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
				fVar2 = Function_83(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_83(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_81(bVar0) && !bParam1)
	{
		bVar0 = Function_82(bParam0, 1);
	}
	return bVar0;
}

float Function_83(vector3 vParam0, vector3 vParam3) //Position: 0x3BD4 / 15316
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_84(var uParam0, int iParam1) //Position: 0x3BF1 / 15345
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_86(Global_34573, &vVar4);
	if (!Function_85(Global_30640[0]))
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
	if (!Function_85(Global_30640[2]))
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
	if (!Function_85(Global_30640[1]))
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
	if (!Function_85(Global_30658[1]))
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
	if (!Function_85(Global_30658[3]))
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
	if (!Function_85(Global_30658[2]))
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
	if (!Function_85(Global_30658[4]))
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
	if (!Function_85(Global_30668[0]))
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
	if (!Function_85(Global_30668[1]))
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
	if (!Function_85(Global_30668[2]))
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
	if (!Function_85(Global_30679[0]))
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
	if (!Function_85(Global_30685[0]))
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
	if (!Function_85(Global_30685[1]))
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
	if (!Function_85(Global_30685[2]))
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
	if (!Function_85(Global_30693[0]))
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
	if (!Function_85(Global_30693[1]))
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
	if (!Function_85(Global_30693[2]))
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
	if (!Function_85(Global_30707[2]))
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
	if (!Function_85(Global_30707[3]))
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
	if (!Function_85(Global_30707[0]))
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
	if (!Function_85(Global_30717[0]))
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
	if (!Function_85(Global_30723[2]))
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
	if (!Function_85(Global_30723[1]))
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
	if (!Function_85(Global_30723[0]))
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
	if (!Function_85(Global_30679[1]))
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
	if (!Function_85(Global_30707[1]))
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
	Function_129(&Global_63095, 2);
	Function_48(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_78(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_85(int iParam0) //Position: 0x4417 / 17431
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_86(bool bParam0, bool bParam1) //Position: 0x4452 / 17490
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_87(bool bParam0) //Position: 0x445F / 17503
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_91(12, 1, 0, 0);
				Function_90(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_91(13, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_91(14, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_91(15, 1, 0, 0);
				Function_90(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_91(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_31(bParam0) == 1)
					{
						iVar0 = Function_89(bParam0);
						if (Function_88(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_90(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_90(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_90(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_90(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_90(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_90(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_90(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_90(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_90(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_90(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_90(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_90(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_90(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_90(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_90(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_90(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_90(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_90(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_90(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_90(4, 19);
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
								Function_91(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_91(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_91(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_89(bParam0) == 0)
			{
				if (Function_31(bParam0) == 1)
				{
					Function_91(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_88(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_90(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_90(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_90(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_90(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_90(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_90(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_90(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_90(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_31(bParam0) == 1)
			{
				Function_91(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_91(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_90(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_90(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_90(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_91(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_90(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_90(6, 9);
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

bool Function_88(int iParam0) //Position: 0x493B / 18747
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_89(bool bParam0) //Position: 0x4951 / 18769
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_90(int iParam0, bool bParam1) //Position: 0x4970 / 18800
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

int Function_91(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x49D7 / 18903
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
	Function_71(iParam0, TO_FLOAT(bParam1), 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_59(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_92() //Position: 0x4BF7 / 19447
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
	PLAYSTAT_INT("HC_MONEY", Function_30(0));
	PLAYSTAT_INT("HC_FAME", Function_30(3));
	PLAYSTAT_INT("HC_HONOR", Function_30(1));
	return;
}

void Function_93() //Position: 0x4D4F / 19791
{
	int iVar0;
	int iVar1;
	
	if (!Function_42(Global_6269))
	{
		return;
	}
	iVar0 = Function_30(24);
	iVar1 = Function_41(Global_6269);
	if (!Function_42(iVar0) && Function_96(iVar1) < 0)
	{
		Function_58(24, Global_6269, 0);
		Function_94(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_96(Function_41(iVar0)))
	{
		Function_58(24, Global_6269, 0);
		Function_94(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_94(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4DCF / 19919
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
		Function_95(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x5121 / 20769
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_96(int iParam0) //Position: 0x51A4 / 20900
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_97() //Position: 0x51BE / 20926
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_98() //Position: 0x51E9 / 20969
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x5217 / 21015
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
	
	if (!Function_42(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_120(iParam0);
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
				bVar0 = (Function_30(42) - Global_34165.f_116);
				bVar1 = (Function_30(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_69(49)) - Global_34165.f_124);
				bVar3 = (Function_30(49) - Global_34165.f_128);
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
				bVar4 = (Function_30(355) - Global_34165.f_116);
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
		iVar15 = Function_119(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_100(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x54B3 / 21683
{
	int iVar0;
	bool bVar1;
	
	if (Function_118(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
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
	iVar0 = Function_30(3);
	Function_115();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_113(3, bVar1);
		if (!bParam2)
		{
			if (!Function_112(Global_76848, 4))
			{
				Function_107(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_91(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_68(3));
	iVar0 = Function_30(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
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

void Function_101(int iParam0, int iParam1) //Position: 0x5682 / 22146
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_102(int iParam0, char* cParam1, bool bParam2) //Position: 0x58E0 / 22752
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
	Function_94(iParam0, cParam1, 0, 1);
	iVar1 = Function_103();
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

int Function_103() //Position: 0x5A65 / 23141
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
	Function_104();
	return 0;
}

void Function_104() //Position: 0x5B04 / 23300
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
		Function_105(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5BB3 / 23475
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

var Function_106(int iParam0) //Position: 0x5C11 / 23569
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

void Function_107(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5CA0 / 23712
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_109(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_108(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_108(char* cParam0, int iParam1) //Position: 0x5D0C / 23820
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

bool Function_109(bool bParam0, var uParam1, int iParam2) //Position: 0x5D43 / 23875
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
		if (Function_111(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_110(uVar0))
		{
			case 0x00000002:
				if (!Function_112(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_110(char* cParam0) //Position: 0x5DBB / 23995
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

int Function_111(int iParam0) //Position: 0x5E5C / 24156
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_48(&bVar1, 2147483648);
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

bool Function_112(var uParam0, int iParam1) //Position: 0x5E99 / 24217
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_113(int iParam0, bool bParam1) //Position: 0x5EAC / 24236
{
	bool bVar0;
	int iVar1;
	
	Function_91(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_114(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_114(int iParam0, int iParam1) //Position: 0x6049 / 24649
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

void Function_115() //Position: 0x608A / 24714
{
	Function_117(3, 0.0f);
	Function_116(3, 10000.0f);
	return;
}

int Function_116(int iParam0, int iParam1) //Position: 0x60A0 / 24736
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_117(int iParam0, int iParam1) //Position: 0x60E0 / 24800
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_118(int iParam0) //Position: 0x6120 / 24864
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_119(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x612F / 24879
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

int Function_120(int iParam0) //Position: 0x62F7 / 25335
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

var Function_121() //Position: 0x638C / 25484
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x63B1 / 25521
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_42(iParam0))
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
			Function_130(21, bParam2, 0);
			Function_130(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(int iParam0) //Position: 0x644F / 25679
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
			Function_124(4, 0, 0);
		}
	}
	return;
}

void Function_124(bool bParam0, bool bParam1, int iParam2) //Position: 0x64B6 / 25782
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_125(Global_16524, bVar0, 1);
	}
	return;
}

void Function_125(int iParam0, bool bParam1, bool bParam2) //Position: 0x659C / 26012
{
	int iVar0;
	
	Function_127(iParam0);
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
	Function_126();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_126() //Position: 0x6715 / 26389
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_127(int iParam0) //Position: 0x6721 / 26401
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

void Function_128(bool bParam0, bool bParam1) //Position: 0x6767 / 26471
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

void Function_129(bool bParam0, bool bParam1) //Position: 0x67AA / 26538
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

int Function_130(bool bParam0, bool bParam1, int iParam2) //Position: 0x67B9 / 26553
{
	if (!Function_131(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_56(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_56(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_56(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_131(int iParam0) //Position: 0x6810 / 26640
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_132(bool bParam0) //Position: 0x6822 / 26658
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

void Function_133() //Position: 0x6896 / 26774
{
	Function_134();
	return;
}

void Function_134() //Position: 0x689F / 26783
{
	Function_139(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

var Function_135() //Position: 0x68B1 / 26801
{
	bool bVar0;
	
	return bVar0;
}

void Function_136() //Position: 0x68B9 / 26809
{
	Local_4.f_200 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Horsegroupset", 0);
	(*&Local_4 + 188)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PlayerHorse01", 976, -66.56144f, 116.8679f, 1414.94f, 0.0f, -26.54678f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_200, (*&Local_4 + 188)[02]);
	ACCESSORIZE_HORSE((*&Local_4 + 188)[02], 3);
	return;
}

void Function_137(int iParam0, int iParam1) //Position: 0x6929 / 26921
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_138(bool bParam0) //Position: 0x6946 / 26950
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (GET_ATTACHED_HOGTIE_VICTIM(Global_34573) == bParam0)
			{
				FREE_FROM_HOGTIE(bParam0);
			}
		}
		DESTROY_ACTOR(bParam0);
	}
	return;
}

void Function_139(bool bParam0) //Position: 0x6971 / 26993
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_140(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0x6997 / 27031
{
	if (Function_142(uParam0[iParam13], 4))
	{
		if (Function_142(uParam0[iParam13], 1))
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
			Function_141(uParam0[iParam13], 1);
			Function_141(uParam0[iParam13], 2);
			Function_141(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_141(var uParam0, int iParam1) //Position: 0x6AC5 / 27333
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_142(var uParam0, int iParam1) //Position: 0x6ADF / 27359
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_143(bool bParam0) //Position: 0x6AFC / 27388
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6B30 / 27440
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_171());
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
	Function_170();
	CLEAR_PRINTED_OBJECTIVE();
	Function_169();
	Function_167(0);
	Function_166();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(50f);
	Function_165();
	Function_164();
	Function_170();
	ENABLE_JOURNAL_REPLAY(1);
	Function_132(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(false, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, 0);
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
		Function_163(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_159(Global_28178);
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
	Function_158();
	Function_26(1178687);
	Function_156(33039);
	Function_155(0x218003f);
	Function_154(4194560);
	Function_153();
	Function_152();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_147(0, 1, 1);
	}
	else
	{
		Function_147(0, 1, 1);
	}
	Function_145();
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
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_48(&Global_12976 + 36 + 20, 16);
}

void Function_145() //Position: 0x6D21 / 27937
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_146(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x6D4B / 27979
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_147(int iParam0, bool bParam1, int iParam2) //Position: 0x6D62 / 28002
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
		if (Function_88(Global_29006))
		{
			Function_151(&(Global_29008[Global_29006]), 131072);
			Function_146(&(Global_29008[Global_29006]), 2097152);
			Function_149(Global_29006);
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
				if (Function_148(&(Global_29008[iVar0]), 4) || Function_148(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_146(&(Global_29008[iVar0]), 2097155);
					Function_151(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_46())
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

bool Function_148(var uParam0, int iParam1) //Position: 0x6E6D / 28269
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_149(int iParam0) //Position: 0x6E89 / 28297
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_150())
			{
				return;
			}
		}
		if (!Function_148(&(Global_29008[iParam0]), 2048))
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

bool Function_150() //Position: 0x6F08 / 28424
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_148(&(Global_29008[iVar0]), 4) || Function_148(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_151(var uParam0, int iParam1) //Position: 0x6F71 / 28529
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_152() //Position: 0x6F80 / 28544
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

void Function_153() //Position: 0x6FA6 / 28582
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

void Function_154(int iParam0) //Position: 0x6FCC / 28620
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_155(int iParam0) //Position: 0x6FE9 / 28649
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_156(int iParam0) //Position: 0x6FFC / 28668
{
	Function_157(&Global_28842, iParam0);
	return;
}

void Function_157(var uParam0, var uParam1) //Position: 0x700A / 28682
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_158() //Position: 0x7025 / 28709
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_159(int iParam0) //Position: 0x7097 / 28823
{
	int iVar0;
	int iVar1;
	
	if (!Function_162(iParam0))
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
		Function_160(78, 1, 1);
		if (!Function_112(Global_76847, 64))
		{
			Function_107(Global_34573, 64, 2, 0);
		}
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(Global_34573);
		DECOR_SET_BOOL(Global_34573, "zMarston", true);
		DECOR_SET_BOOL(Global_34573, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
	}
	return;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x71C5 / 29125
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_161(bParam0), Function_56()) == 0)
		{
			ADD_ITEM(Function_161(bParam0), Function_56(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_161(bParam0), Function_56(), iParam2);
	return 1;
}

var Function_161(bool bParam0) //Position: 0x7210 / 29200
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

bool Function_162(int iParam0) //Position: 0x7301 / 29441
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_163(bool bParam0) //Position: 0x7317 / 29463
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

void Function_164() //Position: 0x7393 / 29587
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

void Function_165() //Position: 0x73D4 / 29652
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

void Function_166() //Position: 0x7415 / 29717
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_167(int iParam0) //Position: 0x7429 / 29737
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_168())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_168() //Position: 0x7465 / 29797
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

void Function_169() //Position: 0x748A / 29834
{
	Global_8722 = 0.0f;
	return;
}

void Function_170() //Position: 0x7494 / 29844
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

int Function_171() //Position: 0x74BF / 29887
{
	bool bVar0;
	
	bVar0 = Function_56();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_172() //Position: 0x74D9 / 29913
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_173(bool bParam0) //Position: 0x74E2 / 29922
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

void Function_174() //Position: 0x753A / 30010
{
	var uVar0[5];
	int iVar6;
	
	if (Function_214())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Uncle";
		uVar0[3] = "Jack and Abigail";
		uVar0[4] = "Final Cutscene";
		iVar6 = Function_200(&uLocal_323, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_199(&iVar6, &bLocal_337, &iLocal_338, &Local_330))
		{
			Function_192();
			Function_191();
		}
		if (iVar6 == 0)
		{
			SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 0);
			Function_160(20, 0, 0);
			Function_190(1, 1);
			Function_190(3, 1);
			Function_192();
			Function_191();
			Function_189(&bLocal_449, 8);
		}
		else if (iVar6 == 1)
		{
			Function_192();
			Function_191();
			Function_184(bLocal_337);
			Function_176(StackVal, StackVal, 5, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
		}
		else if (iVar6 == 2)
		{
			Function_192();
			Function_191();
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_337 = false;
			iLocal_338 = 0;
			Local_330 = 1000;
		}
		else if (iVar6 == 3)
		{
			Function_192();
			Function_191();
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_337 = true;
			iLocal_338 = 0;
			Local_330 = 1000;
		}
		else if (iVar6 == 4)
		{
			Function_192();
			Function_191();
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_337 = 101;
			iLocal_338 = 0;
			Local_330 = 1000;
		}
	}
	return;
}

void Function_175(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x769A / 30362
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

void Function_176(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0x76C3 / 30403
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_181(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_177(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_177(int iParam0) //Position: 0x7700 / 30464
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_180("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_179(2) || Function_179(8)) || Function_179(9)) || Function_179(10))
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
		Function_180("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_180("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_180("");
	}
	else if (iParam0 == 8)
	{
		Function_178();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_178();
	}
	return;
}

void Function_178() //Position: 0x77F7 / 30711
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_179(int iParam0) //Position: 0x7803 / 30723
{
	int iVar0;
	
	if (!Function_42(iParam0))
	{
		return 0;
	}
	iVar0 = Function_41(iParam0);
	if (!Function_20(Function_41(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_180(bool bParam0) //Position: 0x7839 / 30777
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_181(vector3 vParam0, var uParam3, var uParam4) //Position: 0x78A3 / 30883
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_183(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_182(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_182(int iParam0) //Position: 0x7926 / 31014
{
	if (!Function_88(iParam0))
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

var Function_183(vector3 vParam0, bool bParam3) //Position: 0x7DD4 / 32212
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

vector3 Function_184(int iParam0) //Position: 0x7E3F / 32319
{
	Function_185(iParam0 + 1);
	return StackVal, StackVal, Function_185(iParam0 + 1);
}

vector3 Function_185(int iParam0) //Position: 0x7E4C / 32332
{
	iParam0 = iParam0;
	Function_186((*&Local_4 + 440)[0]);
	return StackVal, StackVal, Function_186((*&Local_4 + 440)[0]);
}

vector3 Function_186(bool bParam0) //Position: 0x7E61 / 32353
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

int Function_187(int iParam0) //Position: 0x7E88 / 32392
{
	return Function_188(iParam0 + 1);
}

int Function_188(int iParam0) //Position: 0x7E95 / 32405
{
	iParam0 = iParam0;
	return GET_OBJECT_HEADING((*&Local_4 + 440)[0]);
}

void Function_189(bool bParam0, int iParam1) //Position: 0x7EAA / 32426
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_177(iParam1);
	*bParam0 = 1;
	return;
}

void Function_190(bool bParam0, bool bParam1) //Position: 0x7ECD / 32461
{
	switch (bParam0)
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

void Function_191() //Position: 0x8042 / 32834
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_192() //Position: 0x8057 / 32855
{
	Function_194();
	Function_193(10, 3);
	return;
}

void Function_193(int iParam0, int iParam1) //Position: 0x8066 / 32870
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

void Function_194() //Position: 0x819D / 33181
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_198())
	{
		Function_197(10, 3);
	}
	else
	{
		Function_195();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_56(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_56());
	UI_POP("nDebugMenu");
	return;
}

void Function_195() //Position: 0x81E8 / 33256
{
	Function_196(25, 2);
	return;
}

void Function_196(int iParam0, int iParam1) //Position: 0x81F4 / 33268
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

void Function_197(int iParam0, int iParam1) //Position: 0x83F2 / 33778
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

bool Function_198() //Position: 0x8529 / 34089
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

bool Function_199(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8590 / 34192
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_192();
			Function_191();
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
				SET_PLAYER_CONTROL(false, 1, 0, 0);
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
		Function_180("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8636 / 34358
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_213(&Var15, &Var0);
	uVar20 = Function_212(*uParam1, &Var15);
	Function_211(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_210(uParam0, uVar20);
	Function_208(StackVal, uParam0, Var15.f_12);
	Function_206(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_205(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_202(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_201(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_201(int iParam0, int iParam1, int iParam2) //Position: 0x86FD / 34557
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

bool Function_202(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x8759 / 34649
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
				Function_204(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_204(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_201(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_203(bParam1->f_32);
	}
	else
	{
		Function_203(bParam1->f_32);
	}
	return 0;
}

void Function_203(bool bParam0) //Position: 0x88DF / 35039
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

void Function_204(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x8919 / 35097
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

var Function_205(int iParam0, var uParam1, int iParam2) //Position: 0x89C7 / 35271
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_206(var uParam0, int iParam1, int iParam2) //Position: 0x89EB / 35307
{
	switch (Function_207())
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

int Function_207() //Position: 0x8A87 / 35463
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

void Function_208(var uParam0, int iParam1, int iParam2) //Position: 0x8AC3 / 35523
{
	switch (Function_209(uParam0))
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

int Function_209(bool bParam0) //Position: 0x8B5B / 35675
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_56()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, false))
	{
		if (!Function_14(*bParam0, 0x40000000))
		{
			Function_129(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, false))
	{
		if (!Function_14(*bParam0, 0x40000000))
		{
			Function_129(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_48(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_56()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, false))
	{
		if (!Function_14(*bParam0, 0x20000000))
		{
			Function_129(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, false))
	{
		if (!Function_14(*bParam0, 0x20000000))
		{
			Function_129(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_48(bParam0, 0x20000000);
	return 0;
}

var Function_210(var uParam0, int iParam1) //Position: 0x8CA6 / 36006
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_211(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8DF5 / 36341
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

var Function_212(int iParam0, int iParam1) //Position: 0x8E88 / 36488
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_213(var uParam0, var uParam1) //Position: 0x8EA2 / 36514
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_214() //Position: 0x8EF0 / 36592
{
	return Global_30920;
}

bool Function_215() //Position: 0x8EF9 / 36601
{
	if (IS_EXITFLAG_SET())
	{
		Function_184(bLocal_337);
		Function_176(StackVal, StackVal, 4, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
		return 0;
	}
	Function_499(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_194, bLocal_337, iLocal_338, &bLocal_451, &bLocal_449, &bLocal_450);
	if (bLocal_337 == 99 && bLocal_337 == 100)
	{
		if (Function_478(&Local_381, &uLocal_341, &uLocal_433, bLocal_339, uLocal_340))
		{
			Function_184(bLocal_337);
			Function_176(StackVal, StackVal, 5, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_184(bLocal_337);
			Function_176(StackVal, StackVal, 1, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_184(bLocal_337);
			Function_176(StackVal, StackVal, 2, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_460))
		{
			Function_180("Zombie01_COMPANION_DEAD");
			Function_184(bLocal_337);
			Function_176(StackVal, StackVal, 5, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
			return 1;
		}
		Function_477();
	}
	switch (bLocal_337)
	{
		case 0x00000063:
			Function_365();
			break;
		
		case 0x00000000:
			Function_348();
			break;
		
		case 0x00000001:
			Function_303();
			break;
		
		case 0x00000065:
			Function_219();
			break;
		
		case 0x00000064:
			if (Function_218(&bLocal_450))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_217(&bLocal_337, &iLocal_338, &Local_330))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_449)
	{
		Function_189(&bLocal_449, 8);
		Function_1();
		return 0;
	}
	if (bLocal_450 && bLocal_337 == 100)
	{
		Function_184(bLocal_337);
		Function_176(StackVal, StackVal, 5, &bLocal_450, &bLocal_337, Function_187(bLocal_337), Function_184(bLocal_337), 0);
	}
	if (bLocal_451)
	{
		Function_216(&bLocal_451, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_216(var uParam0, int iParam1) //Position: 0x90AA / 37034
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_177(iParam1);
	*uParam0 = 1;
	return;
}

bool Function_217(var uParam0, var uParam1, int iParam2) //Position: 0x90CD / 37069
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

bool Function_218(int iParam0) //Position: 0x910D / 37133
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0x9120 / 37152
{
	switch (iLocal_338)
	{
		case 0x00000000:
			Function_299(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(6, false, 0));
			if (!iLocal_438[1])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_338 = 1;
			}
			else
			{
				iLocal_338 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_338 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_338 = 3;
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/OUTBREAK_4_PT_a_cs/OUTBREAK_4_PT_a_cs", &Local_330, &Local_194, &bLocal_337, 56325, 56318, 56311, 56304, 56044, 56037, 0, 2, 1, 1, 2, 0, 1))
			{
				if (IS_OBJECT_VALID(bLocal_464))
				{
					DESTROY_OBJECT(bLocal_464);
				}
				SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 0);
				Function_160(20, 0, 0);
				Function_190(1, 1);
				Function_190(3, 1);
				_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 24.0f, 0);
				Function_130(4, 0, 0);
				Function_130(21, 0, 0);
				_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 12.0f, 0);
				Function_130(16, 0, 0);
				ACTOR_SET_NEXT_WEAPON(Global_34573, 16);
				Function_138((*&Local_4 + 116)[22]);
				Function_138((*&Local_4 + 116)[12]);
				Function_279(&iLocal_454);
				iLocal_338 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_277(&iLocal_454) < 1.0f)
			{
				if (Function_280("$/cutscene/OUTBREAK_4_PT_b_cs/OUTBREAK_4_PT_b_cs", &Local_330, &Local_194, &bLocal_337, 51588, 56318, 46142, 39309, 56044, 56037, 0, 2, 1, 2, 2, 0, 1))
				{
					bLocal_462 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("BeechersHope_layout"), Function_135(), 1204, -116.61f, 118.87f, 1374.64f, 0.0f, 85.0f, 0.0f);
					ACTOR_ENABLE_VARIABLE_MESH(bLocal_462, 23, false);
					ACTOR_ENABLE_VARIABLE_MESH(bLocal_462, 29, true);
					ACTOR_ENABLE_VARIABLE_MESH(bLocal_462, 30, false);
					SET_ANIM_SET_FOR_ACTOR(bLocal_462, "DLC_outbreak_dead", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_462, "DLC_outbreak_dead");
					SET_ACTOR_HEALTH(bLocal_462, 0.0f);
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_462), 1);
					SUSPEND_MOVER(bLocal_462);
					Function_225(0, 1);
					Function_221(1);
					Function_137(6, 1);
					Global_3418 = 0;
					HUD_ENABLE(true);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					Function_220(1.0f);
					Function_279(&iLocal_454);
					iLocal_338 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			bLocal_449 = true;
			break;
	}
	return;
}

void Function_220(bool bParam0) //Position: 0x93BF / 37823
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

void Function_221(bool bParam0) //Position: 0x93DC / 37852
{
	bool bVar0;
	
	bVar0 = Function_224(Global_30717[1], "beechersHope", "stable01", 97);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!IS_DOOR_LOCKED(bVar0))
		{
			Function_223(bVar0, 0);
		}
		if (IS_DOOR_OPENED(bVar0))
		{
			CLOSE_DOOR_FAST(bVar0);
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01 door97");
	}
	bVar0 = Function_224(Global_30717[1], "beechersHope", "stable01", 97);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!IS_DOOR_LOCKED(bVar0))
		{
			Function_223(bVar0, 0);
		}
		if (IS_DOOR_OPENED(bVar0))
		{
			CLOSE_DOOR_FAST(bVar0);
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01 door97");
	}
	bVar0 = Function_224(Global_30717[1], "beechersHope", "stable01props", 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (bParam0)
		{
			if (IS_DOOR_LOCKED(bVar0))
			{
				Function_222(bVar0, 0);
			}
			if (!IS_DOOR_OPENED(bVar0))
			{
				OPEN_DOOR_DIRECTION(bVar0, false);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(bVar0))
			{
				Function_223(bVar0, 0);
			}
			if (IS_DOOR_OPENED(bVar0))
			{
				CLOSE_DOOR_FAST(bVar0);
			}
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01props door01");
	}
	bVar0 = Function_224(Global_30717[1], "beechersHope", "stable01props", 2);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (bParam0)
		{
			if (IS_DOOR_LOCKED(bVar0))
			{
				Function_222(bVar0, 0);
			}
			if (!IS_DOOR_OPENED(bVar0))
			{
				OPEN_DOOR_DIRECTION(bVar0, true);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(bVar0))
			{
				Function_223(bVar0, 0);
			}
			if (IS_DOOR_OPENED(bVar0))
			{
				CLOSE_DOOR_FAST(bVar0);
			}
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01props door02");
	}
	bVar0 = Function_224(Global_30717[1], "beechersHope", "stable01props", 3);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (bParam0)
		{
			if (IS_DOOR_LOCKED(bVar0))
			{
				Function_222(bVar0, 0);
			}
			if (!IS_DOOR_OPENED(bVar0))
			{
				OPEN_DOOR_DIRECTION(bVar0, true);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(bVar0))
			{
				Function_223(bVar0, 0);
			}
			if (IS_DOOR_OPENED(bVar0))
			{
				CLOSE_DOOR_FAST(bVar0);
			}
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01props door03");
	}
	return;
}

void Function_222(bool bParam0, bool bParam1) //Position: 0x96A1 / 38561
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

void Function_223(bool bParam0, bool bParam1) //Position: 0x96F2 / 38642
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

bool Function_224(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x9746 / 38726
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_88(iParam0))
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

void Function_225(bool bParam0, bool bParam1) //Position: 0x97E2 / 38882
{
	if (!IS_OBJECT_VALID(bLocal_467))
	{
		bLocal_467 = Function_224(Global_30717[1], "beechersHope", "house01", 2);
	}
	if (!IS_OBJECT_VALID(bLocal_468))
	{
		bLocal_468 = Function_224(Global_30717[1], "beechersHope", "house01", 5);
	}
	if (!IS_OBJECT_VALID(bLocal_469))
	{
		bLocal_469 = Function_224(Global_30717[1], "beechersHope", "house01", 1);
	}
	if (!IS_OBJECT_VALID(bLocal_470))
	{
		bLocal_470 = Function_224(Global_30717[1], "beechersHope", "house01", 3);
	}
	if (IS_OBJECT_VALID(bLocal_467))
	{
		if (bParam0)
		{
			if (IS_DOOR_LOCKED(bLocal_467))
			{
				Function_222(bLocal_467, 0);
			}
			if (!IS_DOOR_OPENED(bLocal_467))
			{
				OPEN_DOOR_DIRECTION(bLocal_467, true);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(bLocal_467))
			{
				Function_223(bLocal_467, 0);
			}
			if (IS_DOOR_OPENED(bLocal_467))
			{
				CLOSE_DOOR_FAST(bLocal_467);
			}
			if (!bParam1)
			{
				SET_DOOR_LOCK_VISIBLE(bLocal_467, 0);
			}
			else
			{
				SET_DOOR_LOCK_VISIBLE(bLocal_467, 1);
			}
		}
	}
	if (IS_OBJECT_VALID(bLocal_468))
	{
		if (IS_DOOR_LOCKED(bLocal_468))
		{
			Function_222(bLocal_468, 0);
		}
		if (!IS_DOOR_OPENED(bLocal_468))
		{
			OPEN_DOOR_DIRECTION(bLocal_468, true);
		}
	}
	if (IS_OBJECT_VALID(bLocal_469))
	{
		if (!IS_DOOR_LOCKED(bLocal_469))
		{
			Function_223(bLocal_469, 0);
		}
		if (IS_DOOR_OPENED(bLocal_469))
		{
			CLOSE_DOOR_FAST(bLocal_469);
		}
	}
	if (IS_OBJECT_VALID(bLocal_470))
	{
		if (!IS_DOOR_LOCKED(bLocal_470))
		{
			Function_223(bLocal_470, 0);
		}
		if (IS_DOOR_OPENED(bLocal_470))
		{
			CLOSE_DOOR_FAST(bLocal_470);
		}
	}
	return;
}

int Function_226() //Position: 0x998D / 39309
{
	switch (bLocal_337)
	{
		case 0x00000063:
			Function_241();
			return 1;
			break;
		
		case 0x00000001:
			Function_229();
			Function_228(0, (*&Local_4 + 240)[5]);
			return 1;
			break;
		
		case 0x00000065:
			Function_227(Global_34573, (*&Local_4 + 548)[1], 1, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, 1);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			Function_228(0, (*&Local_4 + 220)[1]);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_227(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9A0B / 39435
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
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, vVar0, iParam2, bParam3, iParam4);
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

void Function_228(bool bParam0, bool bParam1) //Position: 0x9B12 / 39698
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 29)
		{
			if (bParam0)
			{
				if (IS_VOLUME_VALID(bParam1))
				{
					if (IS_OBJECT_IN_VOLUME(bVar1, bParam1))
					{
						HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar1));
					}
				}
				else
				{
					HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar1));
				}
			}
			else if (IS_VOLUME_VALID(bParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bVar1, bParam1))
				{
					SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar1));
				}
			}
			else
			{
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar1));
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_229() //Position: 0x9BA1 / 39841
{
	bool bVar0;
	bool bVar1;
	
	Function_240(0, 0);
	Function_227(Global_34573, (*&Local_4 + 716)[3], 1, 1, 1);
	Function_130(21, 0, 0);
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 21, 1);
	ACTOR_POP_NEXT_GAIT(Global_34573, 2, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	if (!IS_ACTOR_VALID((*&Local_4 + 204)[02]))
	{
		Function_239();
	}
	if (!SQUAD_IS_VALID(Local_4.f_184))
	{
		Function_238();
	}
	SET_PATH_LOOPING(Local_4.f_748, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 172)[02], Local_4.f_748, 4, 1, 0, 0, 0);
	TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE((*&Local_4 + 172)[02], 7.0f);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 172)[02], 1);
	SET_ACTOR_FACTION((*&Local_4 + 172)[02], 20);
	MEMORY_CONSIDER_AS((*&Local_4 + 172)[02], Global_34573, false);
	if (IS_ACTOR_VALID((*&Local_4 + 116)[12]))
	{
		DESTROY_ACTOR((*&Local_4 + 116)[12]);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 116)[22]))
	{
		DESTROY_ACTOR((*&Local_4 + 116)[22]);
	}
	if (!SQUAD_IS_VALID(Local_4.f_168))
	{
		Function_237();
		Function_236(Local_4.f_168, 0, 3212836864, 0, 1);
	}
	Function_227((*&Local_4 + 148)[02], (*&Local_4 + 716)[2], 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 148)[02], 1);
	TASK_MELEE_ATTACK((*&Local_4 + 148)[02], Global_34573, -1.0f);
	SET_ACTOR_FACTION((*&Local_4 + 148)[02], 32);
	MEMORY_CONSIDER_AS_ENEMY((*&Local_4 + 148)[02], Global_34573);
	MEMORY_FORCE_MELEE((*&Local_4 + 148)[02], 1);
	MEMORY_PREFER_MELEE((*&Local_4 + 148)[02], 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 148)[02], 0, 1);
	CLEAR_LINKED_ANIM_TARGET((*&Local_4 + 148)[02]);
	MEMORY_CONSIDER_AS((*&Local_4 + 148)[02], Global_34573, 4);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 148)[02], 1);
	DECOR_SET_BOOL((*&Local_4 + 148)[02], "bDisableCutFree", true);
	DECOR_SET_BOOL((*&Local_4 + 148)[02], "ActionArea_DisableHogtie", true);
	UNK_0x99AFD2D1((*&Local_4 + 148)[02], 1, 0);
	TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 148)[02], 1);
	Function_235((*&Local_4 + 148)[02], (*&Local_4 + 716)[3]);
	if (!HUD_IS_FADED())
	{
		ACTOR_POP_NEXT_GAIT((*&Local_4 + 148)[02], 2, 0);
	}
	if (Function_234(&Local_194))
	{
		CREATE_DECAL(0, *(&Local_4 + 292[56]), 0.25f, 1, 1);
		bVar0 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_193, Function_135(), 1228, *(&Local_4 + 292[46]), 0.0f, 0.0f, 0.0f, "dead_ground_male");
		PROP_ENABLE_VARIABLE_MESH(GET_PHYSINST_FROM_OBJECT(bVar0), 23, 0);
		PROP_ENABLE_VARIABLE_MESH(GET_PHYSINST_FROM_OBJECT(bVar0), 29, 1);
		PROP_ENABLE_VARIABLE_MESH(GET_PHYSINST_FROM_OBJECT(bVar0), 30, 0);
	}
	if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 148)[02])))
	{
		bVar1 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 148)[02], 322, 0f, 2, 0);
		SET_BLIP_NAME(bVar1, "Zombie01_Blip_Wife");
		SET_BLIP_IMPAIRMENT_MASK(bVar1, 2048);
	}
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 148)[02], 1);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 148)[02], 0, 0);
	DECOR_SET_BOOL((*&Local_4 + 148)[02], "nNoGrapple", true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 148)[02]);
	bLocal_473 = CREATE_EVENT_TRAP(Function_135(), 47, (*&Local_4 + 148)[02]);
	EVENT_TRAP_ON_TARGET(bLocal_473, (*&Local_4 + 148)[02]);
	EVENT_TRAP_STORE_EVENTS(bLocal_473, 1);
	bLocal_475 = CREATE_EVENT_TRAP(Function_135(), 50, (*&Local_4 + 148)[02]);
	EVENT_TRAP_ON_TARGET(bLocal_475, (*&Local_4 + 148)[02]);
	EVENT_TRAP_STORE_EVENTS(bLocal_475, 1);
	(*&Local_4 + 148)[12] = (*&Local_4 + 148)[12];
	Function_227((*&Local_4 + 148)[12], (*&Local_4 + 716)[1], 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 148)[12], 1);
	TASK_MELEE_ATTACK((*&Local_4 + 148)[12], (*&Local_4 + 172)[02], -1.0f);
	SET_ACTOR_FACTION((*&Local_4 + 148)[12], 32);
	MEMORY_CONSIDER_AS_ENEMY((*&Local_4 + 148)[12], Global_34573);
	MEMORY_FORCE_MELEE((*&Local_4 + 148)[12], 1);
	MEMORY_PREFER_MELEE((*&Local_4 + 148)[12], 1);
	CLEAR_LINKED_ANIM_TARGET((*&Local_4 + 148)[12]);
	MEMORY_CONSIDER_AS((*&Local_4 + 148)[12], Global_34573, 4);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 148)[12], 1);
	DECOR_SET_BOOL((*&Local_4 + 148)[12], "bDisableCutFree", true);
	DECOR_SET_BOOL((*&Local_4 + 148)[12], "ActionArea_DisableHogtie", true);
	UNK_0x99AFD2D1((*&Local_4 + 148)[12], 1, 0);
	TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 148)[12], 1);
	if (!HUD_IS_FADED())
	{
		ACTOR_POP_NEXT_GAIT((*&Local_4 + 148)[12], 2, 0);
	}
	Function_230((*&Local_4 + 148)[12], (*&Local_4 + 172)[02]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 116)[22], 1);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 116)[22], 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 148)[12], 1);
	bLocal_472 = CREATE_EVENT_TRAP(Function_135(), 47, (*&Local_4 + 148)[12]);
	EVENT_TRAP_ON_TARGET(bLocal_472, (*&Local_4 + 148)[12]);
	EVENT_TRAP_STORE_EVENTS(bLocal_472, 1);
	bLocal_474 = CREATE_EVENT_TRAP(Function_135(), 50, (*&Local_4 + 148)[12]);
	EVENT_TRAP_ON_TARGET(bLocal_474, (*&Local_4 + 148)[12]);
	EVENT_TRAP_STORE_EVENTS(bLocal_474, 1);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 148)[12], 0, 0);
	DECOR_SET_BOOL((*&Local_4 + 148)[12], "nNoGrapple", true);
	MEMORY_REPORT_POSITION_AUTO((*&Local_4 + 148)[12], Global_34573, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 148)[12]);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_230(bool bParam0, bool bParam1) //Position: 0xA0D4 / 41172
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_231(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_231(bool bParam0, vector3 vParam1) //Position: 0xA0EE / 41198
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_232(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_232(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_232(bool bParam0, vector3 vParam1) //Position: 0xA126 / 41254
{
	vector3 vVar0;
	
	Function_233(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_233(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_233(bool bParam0) //Position: 0xA1A9 / 41385
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_234(int iParam0) //Position: 0xA1BA / 41402
{
	return iParam0->f_20;
}

void Function_235(var uParam0, bool bParam1) //Position: 0xA1C4 / 41412
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	Function_231(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_236(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0xA1DB / 41435
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			if (bParam1)
			{
				TASK_CROUCH(bVar1, bParam2);
			}
			else
			{
				TASK_STAND_STILL(bVar1, bParam2, iParam3, 0);
			}
			TASK_PRIORITY_SET(bVar1, iParam4);
		}
		bVar0++;
	}
}

void Function_237() //Position: 0xA247 / 41543
{
	Local_4.f_168 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "FamilyZombie"));
	(*&Local_4 + 148)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "WifeZombie", 1231, -90.09449f, 118.018f, 1391.062f, -0.09691571f, -132.5405f, 0.1070698f);
	SQUAD_JOIN((*&Local_4 + 148)[02], Local_4.f_168);
	TASK_STAND_STILL((*&Local_4 + 148)[02], -1.0f, 0, 0);
	(*&Local_4 + 148)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nSonZombie", 1280, -109.7439f, 117.718f, 1401.836f, 0.0f, -25.95586f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 148)[12], Local_4.f_168);
	TASK_STAND_STILL((*&Local_4 + 148)[12], -1.0f, 0, 0);
	return;
}

void Function_238() //Position: 0xA309 / 41737
{
	Local_4.f_184 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RufusGroup"));
	(*&Local_4 + 172)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Rufus", 1041, -105.253f, 117.8735f, 1395.675f, 0.0f, -0.5905757f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 172)[02], Local_4.f_184);
	return;
}

void Function_239() //Position: 0xA363 / 41827
{
	Local_4.f_216 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "IntroWagonset", 0);
	(*&Local_4 + 204)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DisabledWagon", 1196, -80.62669f, 116.8944f, 1428f, 0.0f, -137.8341f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_216, (*&Local_4 + 204)[02]);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 204)[02], false, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 204)[02], true, 0);
	return;
}

void Function_240(int iParam0, bool bParam1) //Position: 0xA3E1 / 41953
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = GET_PLAYER_ACTOR(iParam0);
	if (IS_ACTOR_VALID(bVar1))
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
		bVar0 = false;
		while (bVar0 < (7 - 1))
		{
			DELETE_WEAPON_FROM_ACTOR(bVar1, GET_WEAPON_EQUIPPED(bVar1, bVar0));
			bVar0++;
		}
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player weapons");
		PRINTNL();
		if (bParam1)
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(bVar1);
			PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player inventory");
			PRINTNL();
		}
	}
	else
	{
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Player actor not valid!");
	}
	return;
}

void Function_241() //Position: 0xA4E0 / 42208
{
	bool bVar0;
	
	Function_299(0);
	if (!IS_ACTOR_VALID((*&Local_4 + 204)[02]))
	{
		Function_239();
	}
	if (!IS_ACTORSET_VALID(Local_4.f_200))
	{
		Function_136();
		TASK_STAND_STILL((*&Local_4 + 188)[02], -1.0f, 0, 0);
		TASK_PRIORITY_SET((*&Local_4 + 188)[02], 1);
		AI_IGNORE_ACTOR((*&Local_4 + 188)[02]);
		SET_ACTOR_RIDEABLE((*&Local_4 + 188)[02], 0);
	}
	if (!SQUAD_IS_VALID(Local_4.f_144))
	{
		Function_254();
	}
	Function_227((*&Local_4 + 116)[02], (*&Local_4 + 440)[4], 1, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 116)[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 116)[02], 32);
	SET_ANIM_SET_FOR_ACTOR((*&Local_4 + 116)[02], "DLC_uncle_roar", 0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_ACTION_PERFORM(false, "z_dlc_z_roar");
	TASK_STAND_STILL(false, 1.0f, 0, 0);
	TASK_ACTION_PERFORM(false, "z_dlc_z_roar");
	TASK_GO_NEAR_ACTOR(false, Global_34573, 2.0f, 1);
	TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 116)[02], bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_4 + 116)[02], 0, 1);
	TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 116)[02], 1);
	if (Function_234(&Local_194) && HUD_IS_FADED())
	{
		Function_227((*&Local_4 + 116)[12], (*&Local_4 + 440)[3], 1, 1, 1);
		if (!IS_OBJECT_VALID(bLocal_465))
		{
			bLocal_465 = CREATE_GRINGO_IN_LAYOUT(bLocal_193, Function_135(), "DLC_Outbreak3", *(&Local_4 + 292[36]), *(&Local_4 + 292[36] + 12));
			SNAP_OBJECT_TO_GROUND(bLocal_465, 1.0f, true, 1092616192);
			CREATE_DECAL(0, *(&Local_4 + 292[56]), 0.25f, 1, 1);
		}
		SNAP_ACTOR_TO_GRINGO((*&Local_4 + 116)[12], bLocal_465, "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO((*&Local_4 + 116)[12], GET_GRINGO_FROM_OBJECT(bLocal_465), "UseCase1", 4294967295, 1);
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 116)[12]), 1);
	}
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 116)[12], 20);
	Function_247(&(Local_381[017]), (*&Local_4 + 116)[12], "Zombie01_wife", 0, 0x5f5e100, 1);
	Function_227((*&Local_4 + 116)[22], (*&Local_4 + 440)[2], 1, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[22]);
	bLocal_463 = CREATE_GRINGO_IN_LAYOUT(bLocal_193, Function_135(), "wringhands_no_cry", *(&Local_4 + 292[26]), *(&Local_4 + 292[26] + 12));
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[22]);
	SNAP_ACTOR_TO_GRINGO((*&Local_4 + 116)[22], bLocal_463, "UseCase1", 1, 0, 0);
	TASK_USE_GRINGO((*&Local_4 + 116)[22], GET_GRINGO_FROM_OBJECT(bLocal_463), "UseCase1", 4294967295, 1);
	SET_DRAW_ACTOR((*&Local_4 + 116)[22], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 116)[22], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS((*&Local_4 + 116)[22], 0);
	Function_247(&(Local_381[117]), (*&Local_4 + 116)[22], "Zombie01_son", 0, 0x5f5e100, 1);
	Function_227(Global_34573, (*&Local_4 + 440)[1], 1, 1, 1);
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "rfl_brk", 0);
	DELETE_WEAPON_FROM_ACTOR(Global_34573, 4);
	_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 12.0f, 1);
	ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 16, 0);
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	DECOR_SET_BOOL(Global_34573, "nNoGrapple", true);
	RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, 0);
	Function_245(&uLocal_341, bLocal_193);
	Function_225(1, 1);
	Function_221(0);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	if (!Function_244(&iLocal_479))
	{
		Function_242(&iLocal_479);
	}
	return;
}

void Function_242(int iParam0) //Position: 0xA8A5 / 43173
{
	if (!Function_244(iParam0))
	{
		Function_243(iParam0, 0.0f);
	}
	return;
}

void Function_243(int iParam0, float fParam1) //Position: 0xA8BA / 43194
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_129(iParam0, 1);
	Function_48(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_244(int iParam0) //Position: 0xA8DB / 43227
{
	return Function_14(*iParam0, 1);
}

int Function_245(var uParam0, bool bParam1) //Position: 0xA8E8 / 43240
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_246(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_246(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_246(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_246(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_246(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xAF88 / 44936
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
	Function_129(iParam0 + 8, bParam4);
	return 1;
}

int Function_247(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0xB04B / 45131
{
	if (!Function_253(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_252(uParam0, uParam2))
	{
		return 0;
	}
	Function_251(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_248(uParam0, iParam4, iParam5);
	return 1;
}

void Function_248(var uParam0, int iParam1, int iParam2) //Position: 0xB087 / 45191
{
	if (iParam1 != 100000000)
	{
		Function_250(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_249(uParam0, iParam2);
	}
	return;
}

void Function_249(int iParam0, bool bParam1) //Position: 0xB0AA / 45226
{
	iParam0->f_40 = 0;
	Function_250(iParam0, 2, bParam1);
	Function_250(iParam0, 4, bParam1);
	Function_250(iParam0, 8, bParam1);
	Function_250(iParam0, 16, bParam1);
	Function_250(iParam0, 32, bParam1);
	Function_250(iParam0, 64, bParam1);
	Function_250(iParam0, 128, bParam1);
	Function_250(iParam0, 256, bParam1);
	Function_250(iParam0, 512, bParam1);
	Function_250(iParam0, 1024, bParam1);
	return;
}

void Function_250(int iParam0, int iParam1, bool bParam2) //Position: 0xB110 / 45328
{
	bool bVar0;
	
	Function_129(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_129(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_48(iParam0 + 40, bVar0);
	}
	else
	{
		Function_129(iParam0 + 40, bVar0);
	}
	return;
}

void Function_251(var uParam0, int iParam1) //Position: 0xB14C / 45388
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_252(int iParam0, bool bParam1) //Position: 0xB158 / 45400
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

bool Function_253(int iParam0, bool bParam1) //Position: 0xB1E1 / 45537
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

void Function_254() //Position: 0xB36D / 45933
{
	Local_4.f_144 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Family"));
	(*&Local_4 + 116)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Uncle", 1228, -98.81227f, 119.4985f, 1354.129f, -179.8569f, -59.82616f, 179.8575f);
	SQUAD_JOIN((*&Local_4 + 116)[02], Local_4.f_144);
	(*&Local_4 + 116)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Wife", 1276, -101.8319f, 119.5159f, 1357.251f, 0.0f, -32.68151f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 116)[12], Local_4.f_144);
	(*&Local_4 + 116)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Son", 1279, -107.2941f, 119.53f, 1368.686f, 0.0f, 133.9471f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 116)[22], Local_4.f_144);
	return;
}

int Function_255() //Position: 0xB43E / 46142
{
	switch (bLocal_337)
	{
		case 0x00000063:
			if (!Function_268() && !Function_262(&bLocal_201))
			{
				return 0;
			}
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
			}
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				if (!DECOR_CHECK_EXIST((*&Local_4 + 116)[02], "bCutHidden"))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 116)[02]);
					DECOR_SET_BOOL((*&Local_4 + 116)[02], "bCutHidden", true);
				}
			}
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				if (!DECOR_CHECK_EXIST((*&Local_4 + 188)[02], "bCutHidden"))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 188)[02]);
					DECOR_SET_BOOL((*&Local_4 + 188)[02], "bCutHidden", true);
				}
			}
			break;
		
		case 0x00000065:
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
			{
				Function_256();
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_256() //Position: 0xB533 / 46387
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_257(bVar1))
			{
				Function_80();
				bVar2 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_135(), "blood_zombie_shotgun_exit", "head", bVar1, Function_80(), bVar1);
				if (IS_OBJECT_VALID(bVar2))
				{
					Function_80();
					UNK_0x6745191B(bVar2, Function_80());
				}
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 23, false);
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 30, false);
				return;
			}
		}
		iVar0++;
	}
	return;
}

bool Function_257(bool bParam0) //Position: 0xB5C0 / 46528
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_258(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_258(bool bParam0, int iParam1) //Position: 0xB60B / 46603
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

var Function_259() //Position: 0xB64D / 46669
{
	var uVar0;
	
	Function_261(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Zombie01_layout");
	Local_4.f_236 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -120.0f, 118.8691f, 1381.029f, 41.33096f, -90.91557f, -39.58593f, 32.10567f, 12.2545f, 38.76885f);
	ADD_TO_VOLUME_SET(Local_4.f_236, (*&Local_4 + 220)[0]);
	(*&Local_4 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -99.0854f, 120.6755f, 1355.911f, 177.7992f, -147.8449f, -178.5149f, 5.495292f, 3.567515f, 5.933247f);
	ADD_TO_VOLUME_SET(Local_4.f_236, (*&Local_4 + 220)[1]);
	(*&Local_4 + 220)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -103.3133f, 122.7773f, 1364.703f, 0.0f, -32.11531f, 0.0f, 45.93721f, 12.84925f, 54.25098f);
	ADD_TO_VOLUME_SET(Local_4.f_236, (*&Local_4 + 220)[2]);
	Local_4.f_268 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageOneVolumes_set");
	(*&Local_4 + 240)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Obj02VolReturn", 2, -95.63145f, 122.7773f, 1392.872f, 0.0f, -32.11531f, 0.0f, 157.1402f, 33.40461f, 121.1155f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 240)[0]);
	(*&Local_4 + 240)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Obj02VolFail", 2, -95.63145f, 122.7773f, 1392.872f, 0.0f, -32.11531f, 0.0f, 245.3514f, 52.15641f, 189.1042f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 240)[1]);
	(*&Local_4 + 240)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseRestrict", 2, -67.38859f, 117.8693f, 1406.081f, 0.0f, -25.32704f, 0.0f, 1.0f, 3.628846f, 2.012245f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 240)[2]);
	(*&Local_4 + 240)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFrontDoor", 2, -111.7704f, 120.4601f, 1366.87f, 0.0f, -31.57249f, 0.0f, 1.36704f, 3.266641f, 2.05411f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 240)[3]);
	(*&Local_4 + 240)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BackDoor", 2, -101.0252f, 120.3626f, 1350.905f, 0.0f, -31.57249f, 0.0f, 1.36704f, 3.266641f, 2.42411f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 240)[4]);
	(*&Local_4 + 240)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nHideUncle", 2, -113.0215f, 119.947f, 1377.137f, 0.0f, -31.57249f, 0.0f, 5.561775f, 3.969853f, 5.410573f);
	ADD_TO_VOLUME_SET(Local_4.f_268, (*&Local_4 + 240)[5]);
	Local_4.f_284 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageOneConvoVols_set");
	(*&Local_4 + 272)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JacksBedroom", 2, -106.3705f, 120.2085f, 1367.589f, 0.0f, -31.57249f, 0.0f, 4.690285f, 4.913627f, 3.616837f);
	ADD_TO_VOLUME_SET(Local_4.f_284, (*&Local_4 + 272)[0]);
	(*&Local_4 + 272)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "InsideHouse", 2, -105.8779f, 118.8691f, 1359.17f, 0.0f, -31.57249f, 0.0f, 13.43062f, 7.856521f, 18.16065f);
	ADD_TO_VOLUME_SET(Local_4.f_284, (*&Local_4 + 272)[1]);
	Local_4.f_288 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	*(&Local_4 + 292[06]) = { -97.40059f, 119.521f, 1355.153f };
	*(&Local_4 + 292[06] + 12) = { 0.0f, 436.7617f, 0.0f };
	(*&Local_4 + 440)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -97.40059f, 119.521f, 1355.153f, 0.0f, 436.7617f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[0], Local_4.f_288);
	*(&Local_4 + 292[16]) = { -118.237f, 118.9235f, 1371.51f };
	*(&Local_4 + 292[16] + 12) = { 0.0f, -147.6835f, 0.0f };
	(*&Local_4 + 440)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -118.237f, 118.9235f, 1371.51f, 0.0f, -147.6835f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[1], Local_4.f_288);
	*(&Local_4 + 292[26]) = { -107.3499f, 119.5209f, 1368.729f };
	*(&Local_4 + 292[26] + 12) = { 0.0f, 497.1168f, 0.0f };
	(*&Local_4 + 440)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "SonEnd01", -107.3499f, 119.5209f, 1368.729f, 0.0f, 497.1168f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[2], Local_4.f_288);
	*(&Local_4 + 292[36]) = { -113.4363f, 119.0699f, 1376.616f };
	*(&Local_4 + 292[36] + 12) = { 0.0f, -159.1188f, 0.0f };
	(*&Local_4 + 440)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nWifeEnd01", -113.4363f, 119.0699f, 1376.616f, 0.0f, -159.1188f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[3], Local_4.f_288);
	*(&Local_4 + 292[46]) = { -115.66f, 118.9023f, 1376.9f };
	*(&Local_4 + 292[46] + 12) = { 0.0f, 24.69647f, 0.0f };
	(*&Local_4 + 440)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleEnd01", -115.66f, 118.9023f, 1376.9f, 0.0f, 24.69647f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[4], Local_4.f_288);
	*(&Local_4 + 292[56]) = { -113.6092f, 118.9506f, 1377.039f };
	*(&Local_4 + 292[56] + 12) = { 0.0f, -159.1188f, 0.0f };
	(*&Local_4 + 440)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeEnd01Blood", -113.6092f, 118.9506f, 1377.039f, 0.0f, -159.1188f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[5], Local_4.f_288);
	Local_4.f_468 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	*(&Local_4 + 472[06]) = { -111.9167f, 119.4843f, 1367.233f };
	*(&Local_4 + 472[06] + 12) = { -0.4908393f, 693.2698f, 0.960059f };
	(*&Local_4 + 548)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -111.9167f, 119.4843f, 1367.233f, -0.4908393f, 693.2698f, 0.960059f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 548)[0], Local_4.f_468);
	*(&Local_4 + 472[16]) = { -115.942f, 118.869f, 1385.209f };
	*(&Local_4 + 472[16] + 12) = { 0.5521672f, 577.4448f, 0.4035577f };
	(*&Local_4 + 548)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -115.942f, 118.869f, 1385.209f, 0.5521672f, 577.4448f, 0.4035577f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 548)[1], Local_4.f_468);
	*(&Local_4 + 472[26]) = { -111.3223f, 121.5405f, 1366.133f };
	*(&Local_4 + 472[26] + 12) = { -0.4908393f, 693.2698f, 0.960059f };
	(*&Local_4 + 548)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CameraFocusLast", -111.3223f, 121.5405f, 1366.133f, -0.4908393f, 693.2698f, 0.960059f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 548)[2], Local_4.f_468);
	Local_4.f_564 = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", Local_4, 8, 0);
	*(&Local_4 + 568[06]) = { -69.03903f, 117.9838f, 1415.278f };
	*(&Local_4 + 568[06] + 12) = { 0.0f, -171.9329f, 0.0f };
	(*&Local_4 + 716)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "LassoPos", -69.03903f, 117.9838f, 1415.278f, 0.0f, -171.9329f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[0], Local_4.f_564);
	*(&Local_4 + 568[16]) = { -109.4612f, 117.7173f, 1401.953f };
	*(&Local_4 + 568[16] + 12) = { 0.0f, -50.86387f, 0.0f };
	(*&Local_4 + 716)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportSonCS", -109.4612f, 117.7173f, 1401.953f, 0.0f, -50.86387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[1], Local_4.f_564);
	*(&Local_4 + 568[26]) = { -90.09449f, 118.018f, 1391.062f };
	*(&Local_4 + 568[26] + 12) = { 0.0f, -142.6257f, 0.0f };
	(*&Local_4 + 716)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportWifeCS", -90.09449f, 118.018f, 1391.062f, 0.0f, -142.6257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[2], Local_4.f_564);
	*(&Local_4 + 568[36]) = { -69.49256f, 116.8503f, 1405.535f };
	*(&Local_4 + 568[36] + 12) = { 0.0f, 64.9786f, 0.0f };
	(*&Local_4 + 716)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportPlayerCS", -69.49256f, 116.8503f, 1405.535f, 0.0f, 64.9786f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[3], Local_4.f_564);
	*(&Local_4 + 568[46]) = { -463.2997f, 152.8353f, 1367.753f };
	*(&Local_4 + 568[46] + 12) = { 0.0f, -171.9329f, 0.0f };
	(*&Local_4 + 716)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RufusFleeGoto", -463.2997f, 152.8353f, 1367.753f, 0.0f, -171.9329f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[4], Local_4.f_564);
	*(&Local_4 + 568[56]) = { -100.9118f, 118.8691f, 1340.912f };
	*(&Local_4 + 568[56] + 12) = { 0.0f, -171.9329f, 0.0f };
	(*&Local_4 + 716)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleUncleCorpse", -100.9118f, 118.8691f, 1340.912f, 0.0f, -171.9329f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 716)[5], Local_4.f_564);
	Local_4.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_wring_hands", "stand_wring_hands", -101.8665f, 119.5159f, 1357.228f, 0.0f, -35.47153f, 0.0f);
}

void BëS`D®tÂÖö¬Bí!üD­XOÂè  Bí¼øD¬K£Â(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193) //Position: 0xC21F / 49695
{
	(StackVal - 4676)->f_44031 = StackVal;
	Local_4.f_748 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
	return;
}

void Function_261(int iParam0, int iParam1) //Position: 0xC259 / 49753
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

bool Function_262(bool bParam0) //Position: 0xC2A2 / 49826
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_267();
	iVar1 = 0;
	if (!Function_142(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_266(bParam0[iVar03], 8);
		}
		else if (Function_265())
		{
			iVar1 = 1;
			Function_266(bParam0[iVar03], 8);
		}
		Function_266(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_142(bParam0[iVar03], 4))
		{
			if (!Function_142(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_142(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_142(bParam0[03], 8) || iVar1));
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
				Function_266(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_142(bParam0[iVar03], 4))
		{
			if (!Function_142(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
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
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
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
	Function_263();
	return 1;
}

void Function_263() //Position: 0xC61D / 50717
{
	if (!Function_264(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_264(int iParam0) //Position: 0xC65D / 50781
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_265() //Position: 0xC679 / 50809
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

void Function_266(var uParam0, int iParam1) //Position: 0xC6A4 / 50852
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_267() //Position: 0xC6B5 / 50869
{
	if (!Function_264(128))
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

bool Function_268() //Position: 0xC6F7 / 50935
{
	Function_271(&Local_4 + 4, 1228, 2, 0);
	Function_271(&Local_4 + 4, 1276, 2, 0);
	Function_271(&Local_4 + 4, 1279, 2, 0);
	Function_271(&Local_4 + 4, 1231, 2, 0);
	Function_271(&Local_4 + 4, 1280, 2, 0);
	Function_271(&Local_4 + 4, 1041, 2, 0);
	Function_271(&Local_4 + 4, 976, 2, 0);
	Function_271(&Local_4 + 4, 1196, 2, 0);
	Function_269(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_wring_hands", 1, 0);
	if (Function_262(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_269(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC7B8 / 51128
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_270(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_266(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_270(var uParam0, int iParam1, int iParam2) //Position: 0xC7F0 / 51184
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_142(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_266(uParam0[iVar03], 4);
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

var Function_271(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC8B4 / 51380
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_142(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_266(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_266(bParam0[iVar03], 8);
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

int Function_272() //Position: 0xC984 / 51588
{
	bool bVar0;
	
	Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_273(StackVal, StackVal, Global_6289, Global_34574, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_273(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xC9DF / 51679
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
	if (IS_VOLUME_VALID(*bParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*bParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*bParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*bParam4))
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
				Function_274(bVar1, bParam0);
			}
		}
		if (!Function_78(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *bParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *bParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*bParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*bParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*bParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*bParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*bParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*bParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*bParam4);
		if (bParam9)
		{
			Global_63117 = *bParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_274(bool bParam0, bool bParam1) //Position: 0xCC4D / 52301
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

void Function_275(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xCCC2 / 52418
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
	Function_191();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_56();
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
			if (Function_46())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
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
				Function_233(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_135(), 2, Function_233(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_91(19, 1, 0, 0);
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
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_276()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_276()));
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
	if (Function_264(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_143(0x4000000);
	}
	if (Function_264(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_143(0x8000000);
	}
}

var Function_276() //Position: 0xCF70 / 53104
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

float Function_277(int iParam0) //Position: 0xCFEF / 53231
{
	if (Function_244(iParam0))
	{
		if (Function_278(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_278(int iParam0) //Position: 0xD0B7 / 53431
{
	return Function_14(*iParam0, 2);
}

void Function_279(int iParam0) //Position: 0xD0C4 / 53444
{
	Function_243(iParam0, 0.0f);
	return;
}

bool Function_280(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xD0D0 / 53456
{
	if (!bParam15)
	{
		Function_288(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_234(iParam2) || iParam2->f_24 < 1))
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
				Function_279(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_287())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_286(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_279(iParam1 + 4);
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
					Function_286(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_277(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_277(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_284(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_286(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_279(iParam1 + 4);
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
						Function_220(1.0f);
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
						Function_282();
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
					Function_281(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_234(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_281(bool bParam0) //Position: 0xD6E4 / 55012
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_158();
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

void Function_282() //Position: 0xD793 / 55187
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_283();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_283() //Position: 0xD7D8 / 55256
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_284(bool bParam0, bool bParam1) //Position: 0xD7EA / 55274
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_135(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_285(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_285(bool bParam0) //Position: 0xD86A / 55402
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int Function_286(bool bParam0) //Position: 0xD899 / 55449
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
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
		iVar0++;
	}
	return 1;
}

bool Function_287() //Position: 0xD951 / 55633
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

void Function_288(var uParam0, bool bParam1) //Position: 0xD98B / 55691
{
	Function_289(uParam0, bParam1, 0);
	return;
}

void Function_289(var uParam0, bool bParam1, bool bParam2) //Position: 0xD999 / 55705
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
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_91(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
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
						Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_91(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_290() //Position: 0xDAE5 / 56037
{
	return 1;
}

int Function_291() //Position: 0xDAEC / 56044
{
	Function_292(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_292(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xDB00 / 56064
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_56();
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
			if (Function_46())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_91(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_191();
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
	Function_281(iParam9);
}

int Function_293() //Position: 0xDBF0 / 56304
{
	return 1;
}

int Function_294() //Position: 0xDBF7 / 56311
{
	return 1;
}

int Function_295() //Position: 0xDBFE / 56318
{
	return 1;
}

int Function_296() //Position: 0xDC05 / 56325
{
	switch (bLocal_337)
	{
		case 0x00000063:
			if (!SQUAD_IS_VALID(Local_4.f_144))
			{
				Function_254();
			}
			Function_298((*&Local_4 + 116)[12], 1, 1);
			Function_227((*&Local_4 + 116)[12], (*&Local_4 + 440)[3], 1, 1, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[12]);
			SET_ACTOR_FACTION((*&Local_4 + 116)[12], 20);
			if (!IS_OBJECT_VALID(bLocal_465))
			{
				bLocal_465 = CREATE_GRINGO_IN_LAYOUT(bLocal_193, Function_135(), "DLC_Outbreak3", *(&Local_4 + 292[36]), *(&Local_4 + 292[36] + 12));
				SNAP_OBJECT_TO_GROUND(bLocal_465, 1.0f, true, 1092616192);
				CREATE_DECAL(0, *(&Local_4 + 292[56]), 0.25f, 1, 1);
			}
			SNAP_ACTOR_TO_GRINGO((*&Local_4 + 116)[12], bLocal_465, "UseCase1", 1, 0, 0);
			TASK_USE_GRINGO((*&Local_4 + 116)[12], GET_GRINGO_FROM_OBJECT(bLocal_465), "UseCase1", 4294967295, 1);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 116)[12]), 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_273(StackVal, StackVal, bLocal_193, *(&Local_4 + 292[06]), &Local_4 + 220[0], 0, 0, 0, 0, 1, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(Global_34573);
			Function_228(1, (*&Local_4 + 240)[5]);
			if (!IS_ACTORSET_VALID(Local_4.f_200))
			{
				Function_136();
				TASK_STAND_STILL((*&Local_4 + 188)[02], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_4 + 188)[02], 1);
				AI_IGNORE_ACTOR((*&Local_4 + 188)[02]);
				SET_ACTOR_RIDEABLE((*&Local_4 + 188)[02], 0);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_297(Global_34573);
			Function_273(StackVal, StackVal, bLocal_193, Function_297(Global_34573), &Local_4 + 220[1], 0, 0, 0, 0, 1, 1);
			Function_228(1, (*&Local_4 + 220)[1]);
			return 1;
			break;
		
		default:
			Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_297(Global_34573);
			Function_273(StackVal, StackVal, bLocal_193, Function_297(Global_34573), &Local_330 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

vector3 Function_297(bool bParam0) //Position: 0xDDF3 / 56819
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

void Function_298(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDE5D / 56925
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
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
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
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

void Function_299(bool bParam0) //Position: 0xDEF7 / 57079
{
	Function_300(0, 0x40400000);
	Function_165();
	Function_164();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_300(bool bParam0, float fParam1) //Position: 0xDF2B / 57131
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_302();
	Function_301();
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

void Function_301() //Position: 0xE029 / 57385
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_302() //Position: 0xE05B / 57435
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

void Function_303() //Position: 0xE158 / 57688
{
	Function_347(5, 30, 0, 23, 59, 59);
	if (iLocal_338 < 2 && iLocal_338 > 105)
	{
		if (iLocal_338 == 10)
		{
			if (Function_343())
			{
				Function_28("Zombie01_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_338 = 13;
			}
		}
		if (!DECOR_CHECK_EXIST(Global_34573, "nNoGrapple"))
		{
			DECOR_SET_BOOL(Global_34573, "nNoGrapple", true);
		}
		if (GET_WEAPON_IN_HAND(Global_34573) != 21)
		{
			ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 3, 1);
		}
		else if (GET_WEAPON_IN_HAND(Global_34573) == 21)
		{
			ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 3, 0);
		}
		if (!Function_244(&iLocal_476))
		{
			Function_242(&iLocal_476);
		}
		else if (Function_277(&iLocal_476) < 0.5f)
		{
			Function_225(1, 1);
			Function_279(&iLocal_476);
		}
	}
	switch (iLocal_338)
	{
		case 0x00000000:
			Function_299(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_227(Global_34573, (*&Local_4 + 440)[1], 1, 1, 1);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(4, false, 0));
			if (!iLocal_438[0])
			{
				Function_279(&iLocal_454);
				iLocal_338 = 1;
			}
			else
			{
				Function_279(&iLocal_454);
				iLocal_338 = 4;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_342(Global_30717[1]))
			{
				Function_279(&iLocal_454);
				iLocal_338 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_340(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_194, bLocal_337))
			{
				Function_279(&iLocal_454);
				iLocal_338 = 3;
			}
			else
			{
				Function_279(&iLocal_454);
				iLocal_338 = 4;
			}
			Function_185(bLocal_337);
			Function_332(StackVal, StackVal, Function_185(bLocal_337), bLocal_337, Global_30717[1], Function_188(bLocal_337), 0);
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/OUTBREAK_3_CS_SEQ/OUTBREAK_3_CS_SEQ", &Local_330, &Local_194, &bLocal_337, 56325, 63857, 46142, 39309, 56044, 56037, 0, 2, 1, 2, 2, 0, 1))
			{
				Function_279(&iLocal_454);
				iLocal_338 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_234(&Local_194))
			{
				Function_229();
			}
			ADD_COMPANION_PERMANENT();
			bLocal_464 = CREATE_PROP_IN_LAYOUT(bLocal_193, Function_135(), "shotgun_doubleBarrel01x", -119.351f, 118.875f, 1372.24f, -180.0f, 56.5379f, -180.0f, 0);
			iLocal_471 = 0;
			Function_220(1.0f);
			Function_243(&iLocal_479, 15.0f);
			Function_279(&iLocal_454);
			iLocal_338 = 6;
			break;
		
		case 0x00000006:
			if ((!iLocal_471 && !GET_WEAPON_IN_HAND(Global_34573) != 21) && (!HUD_IS_FADED() || HUD_IS_FADING()))
			{
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 21, 1);
				iLocal_471 = 1;
			}
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				Function_28("Zombie01_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				Function_328(&iLocal_488, 7.0f);
				Function_279(&iLocal_454);
				iLocal_338 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_327(Global_34573, (*&Local_4 + 148)[02], 25.0f))
			{
				Function_324(&bLocal_457, 150.0f, 200.0f, (*&Local_4 + 148)[12], "Zombie01_Return_Son", "Zombie01_Fail_Son", &bLocal_450, 0, 0, 0, 322, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 240)[0])))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT((*&Local_4 + 240)[0]));
				}
			}
			else
			{
				Function_317(&bLocal_457, (*&Local_4 + 240)[0], (*&Local_4 + 240)[1], "Zombie01_Return_Home", "Zombie01_Fail_Home", &bLocal_450, 0, bLocal_193, Local_4, 330, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 240)[0])) && !DECOR_CHECK_EXIST((*&Local_4 + 240)[0], "bNamedBlip"))
			{
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 240)[0]), "behv_region");
				DECOR_SET_BOOL((*&Local_4 + 240)[0], "bNamedBlip", true);
			}
			else if (DECOR_CHECK_EXIST((*&Local_4 + 240)[0], "bNamedBlip") && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_4 + 240)[0])))
			{
				DECOR_REMOVE((*&Local_4 + 240)[0], "bNamedBlip");
			}
			if (!iLocal_471 && !GET_WEAPON_IN_HAND(Global_34573) != 21)
			{
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 21, 1);
				iLocal_471 = 1;
			}
			if (Function_277(&iLocal_454) < 1.0f && !DECOR_CHECK_EXIST(bLocal_193, "lassohelp01"))
			{
				Function_316("Zombie01_help_hogtie_01", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(bLocal_193, "lassohelp01", true);
			}
			Function_309();
			if (IS_PHYSINST_IN_LEVEL(GET_PHYSINST_FROM_OBJECT(bLocal_464)) && !DECOR_CHECK_EXIST(bLocal_464, "nactivated"))
			{
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_464));
				DECOR_SET_BOOL(bLocal_464, "nactivated", true);
			}
			if (IS_ACTOR_HOGTIED((*&Local_4 + 148)[02]))
			{
				if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[02])))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[02]));
					}
					TASK_MELEE_ATTACK((*&Local_4 + 148)[12], Global_34573, -1.0f);
					bLocal_492 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 148)[12], 322, 0f, 2, 0);
					SET_BLIP_NAME(bLocal_492, "Zombie01_Blip_Son");
					SET_BLIP_IMPAIRMENT_MASK(bLocal_492, 2048);
					Function_28("Zombie01_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_279(&iLocal_454);
					iLocal_338 = 11;
				}
				else if (!DECOR_CHECK_EXIST((*&Local_4 + 148)[12], "bPlayerAttackedMe"))
				{
					TASK_MELEE_ATTACK((*&Local_4 + 148)[12], Global_34573, -1.0f);
					TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 172)[02], &Local_4 + 568[46], 4.203895E-45f);
					DECOR_SET_BOOL((*&Local_4 + 148)[12], "bPlayerAttackedMe", true);
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_277(&iLocal_454) < 0.5f)
			{
				Function_28("Zombie01_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_338 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_317(&bLocal_457, (*&Local_4 + 240)[0], (*&Local_4 + 240)[1], "Zombie01_Return_Home", "Zombie01_Fail_Home", &bLocal_450, 0, bLocal_193, Local_4, 330, 1);
			Function_309();
			if (Function_277(&iLocal_488) < 10.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 148)[12], "MAJOR_ANGER", Global_34573, 1, 1, 0, 0, 0);
				Function_279(&iLocal_488);
			}
			if (IS_ACTOR_HOGTIED((*&Local_4 + 148)[12]) && GET_CURR_ACTION_NODE_PLAY_TIME(Global_34573) < 3.0f)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[12])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[12]));
				}
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				iLocal_338 = 105;
			}
			break;
		
		case 0x0000000D:
			Function_317(&bLocal_457, (*&Local_4 + 240)[0], (*&Local_4 + 240)[1], "Zombie01_Return_Home", "Zombie01_Fail_Home", &bLocal_450, 0, bLocal_193, Local_4, 330, 1);
			Function_309();
			if (!IS_ACTOR_HOGTIED((*&Local_4 + 148)[02]))
			{
				if (Function_277(&iLocal_488) < 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 148)[02], "MAJOR_ANGER", Global_34573, 1, 1, 0, 0, 0);
					Function_279(&iLocal_488);
				}
			}
			else if (!IS_ACTOR_HOGTIED((*&Local_4 + 148)[12]))
			{
				if (Function_277(&iLocal_488) < 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 148)[12], "MAJOR_ANGER", Global_34573, 1, 1, 0, 0, 0);
					Function_279(&iLocal_488);
				}
			}
			if ((IS_ACTOR_HOGTIED((*&Local_4 + 148)[12]) && IS_ACTOR_HOGTIED((*&Local_4 + 148)[02])) && GET_CURR_ACTION_NODE_PLAY_TIME(Global_34573) < 3.0f)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[12])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[12]));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[02])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[02]));
				}
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				iLocal_338 = 105;
			}
			break;
		
		case 0x00000069:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
				{
					FREE_FROM_HOGTIE(GET_ATTACHED_HOGTIE_VICTIM(Global_34573));
				}
				else if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
				{
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_227(Global_34573, (*&Local_4 + 440)[0], 1, 1, 1);
					DELETE_WEAPON_FROM_ACTOR(Global_34573, 21);
					Function_124(3, 0, 0);
					Function_279(&iLocal_454);
					iLocal_338 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Function_186((*&Local_4 + 220)[0]);
			Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_4_PT_a_cs/OUTBREAK_4_PT_a_cs", &uLocal_453, Function_186((*&Local_4 + 220)[0]), 0, 10.0f, 200.0f, 2, 2, 2, 2, 1, 1);
			if (Function_277(&iLocal_454) < 3.0f)
			{
				Function_138((*&Local_4 + 148)[12]);
				Function_138((*&Local_4 + 148)[02]);
				iLocal_438[1] = 1;
				bLocal_337 = 101;
				iLocal_338 = 0;
			}
			break;
	}
	return;
}

bool Function_304(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0xEB24 / 60196
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_307(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_308()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
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
				if (!Function_78(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
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
					Function_305();
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
	else if ((!Function_307(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_308()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_307(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_305() //Position: 0xED6A / 60778
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_306(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_306(char* cParam0, vector3 vParam1) //Position: 0xEDBE / 60862
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

bool Function_307(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xEEE6 / 61158
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_297(bParam0);
		if (VDIST(Function_297(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_308() //Position: 0xEF70 / 61296
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_309() //Position: 0xEF7F / 61311
{
	if (!DECOR_CHECK_EXIST(bLocal_193, "Zombie01_help_hogtie_02"))
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_473))
		{
			HUD_CLEAR_HELP_QUEUE();
			Function_316("Zombie01_help_hogite_02", 0x41200000, 1, 0, 2, 1, 0);
			DECOR_SET_BOOL(bLocal_193, "Zombie01_help_hogtie_02", true);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_475))
	{
		if (!DECOR_CHECK_EXIST(bLocal_193, "DX_obj02_wife_hog"))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_315();
			}
			DECOR_SET_BOOL(bLocal_193, "DX_obj02_wife_hog", true);
			Function_230((*&Local_4 + 148)[12], Global_34573);
			TASK_GO_NEAR_COORD((*&Local_4 + 148)[12], &Global_34574, 5.0f, 4);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_474))
	{
		if (!DECOR_CHECK_EXIST(bLocal_193, "DX_obj02_son_hog"))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_314();
			}
			DECOR_SET_BOOL(bLocal_193, "DX_obj02_son_hog", true);
		}
	}
	if (Function_277(&iLocal_479) <= (15.0f - 5.0f) && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Function_310();
		Function_279(&iLocal_479);
	}
	return;
}

void Function_310() //Position: 0xF0CB / 61643
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z01_YellsAtTheFams", "Z01_YellsAtTheFams", 1, 2, 1, 0, 1);
		Function_233(Global_34573);
		Function_233((*&Local_4 + 116)[12]);
		Function_233(Global_34573);
		Function_233((*&Local_4 + 116)[22]);
		if (VDIST(Function_233(Global_34573), Function_233((*&Local_4 + 116)[12])) > VDIST(Function_233(Global_34573), Function_233((*&Local_4 + 116)[22])))
		{
			Function_311(9);
		}
		else
		{
			Function_311(17);
		}
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_311(int iParam0) //Position: 0xF14B / 61771
{
	Function_312(0, Global_34573, iParam0, 0);
	Function_312(1, (*&Local_4 + 116)[22], iParam0, 0);
	Function_312(2, (*&Local_4 + 116)[12], iParam0, 0);
	Function_312(3, (*&Local_4 + 148)[02], iParam0, 0);
	Function_312(4, (*&Local_4 + 148)[12], iParam0, 0);
	return;
}

void Function_312(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xF193 / 61843
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_14(uParam2, Function_313(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_313(bool bParam0) //Position: 0xF1B8 / 61880
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_314() //Position: 0xF1C4 / 61892
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z01_HogtiesJack", "Z01_HogtiesJack", 1, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_315() //Position: 0xF20B / 61963
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z01_HogtiesAbi", "Z01_HogtiesAbi", 1, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_316(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF250 / 62032
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

int Function_317(var uParam0, bool bParam1, bool bParam2, bool bParam3, char* cParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0xF2CB / 62155
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_180(cParam4);
		*uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_323(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_28(bParam3, 7.5f, 0, 2, bParam6, 0, 0, 0);
				Function_322(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_321(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_321(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_323(64))
	{
		Function_320(64);
		if (!Function_319())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_318();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_321(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_321(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_318() //Position: 0xF440 / 62528
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(iVar0);
	if (STRING_LENGTH(bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(bVar1, 7.5f, 1, 2, false, 0, 0, 0);
	}
	return;
}

bool Function_319() //Position: 0xF46B / 62571
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

void Function_320(bool bParam0) //Position: 0xF4AF / 62639
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_48(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_321(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xF512 / 62738
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

void Function_322(bool bParam0) //Position: 0xF5B3 / 62899
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_129(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_323(bool bParam0) //Position: 0xF616 / 62998
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

int Function_324(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, char* cParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xF65D / 63069
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_327(Global_34573, bParam3, uParam2))
	{
		Function_180(cParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_327(Global_34573, bParam3, iParam1))
	{
		if (!Function_323(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_28(bParam4, 7.5f, 0, 2, bParam7, 0, 0, 0);
				}
				Function_322(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_321(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_321(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_323(2))
	{
		Function_320(2);
		if (!Function_319())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_318();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_326(bParam3);
				Function_325(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_321(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_321(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_325(bool bParam0) //Position: 0xF7F2 / 63474
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

void Function_326(bool bParam0) //Position: 0xF81E / 63518
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

bool Function_327(bool bParam0, bool bParam1, int iParam2) //Position: 0xF84A / 63562
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
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

void Function_328(int iParam0, float fParam1) //Position: 0xF95B / 63835
{
	if (!Function_244(iParam0))
	{
		Function_243(iParam0, fParam1);
	}
	return;
}

int Function_329() //Position: 0xF971 / 63857
{
	switch (bLocal_337)
	{
		case 0x00000063:
			return 1;
			break;
		
		case 0x00000001:
			Function_331();
			if (IS_ACTOR_VALID((*&Local_4 + 116)[12]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 116)[12]);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
			{
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 116)[02], (*&Local_4 + 240)[5]))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 116)[02]);
					Function_330((*&Local_4 + 116)[02]);
				}
			}
			if (IS_ACTOR_VALID((*&Local_4 + 188)[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 188)[02]);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_330(bool bParam0) //Position: 0xFA05 / 64005
{
	vector3 vVar0;
	bool bVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_OBJECT_NAMED_BONE_POSITION(bParam0, "head", &vVar0))
		{
			bVar3 = CREATE_VOLUME_IN_LAYOUT(bLocal_193, Function_135(), 2, vVar0, 0.0f, 0.0f, 0.0f, 0.25f, 0.25f, 0.25f);
			RESET_RMPTFX_IN_VOLUME(bVar3);
			DESTROY_VOLUME(bVar3);
		}
	}
	return;
}

int Function_331() //Position: 0xFA4F / 64079
{
	int iVar0;
	var uVar1;
	var uVar4;
	bool bVar7;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(iVar0, &uVar1, &uVar4))
		{
			bVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(iVar0);
		}
		iVar0++;
	}
	return 1;
}

void Function_332(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0xFA7D / 64125
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
	if (iParam3 != Global_34165.f_48 && !Function_339())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_338(0);
	Function_337();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_97())
	{
		Function_335(iParam3);
	}
	Function_334(uParam4, iVar0, iVar1);
	Function_333();
}

void Function_333() //Position: 0xFB25 / 64293
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

void Function_334(int iParam0, bool bParam1, bool bParam2) //Position: 0xFB66 / 64358
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
	if (Function_88(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_49();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_335(bool bParam0) //Position: 0xFCCC / 64716
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_336() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_30(0));
	PLAYSTAT_INT("HC_FAME", Function_30(3));
	PLAYSTAT_INT("HC_HONOR", Function_30(1));
	return;
}

struct<16> Function_336() //Position: 0xFE5A / 65114
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_3422)
	{
		if (IS_SCRIPT_VALID(Global_3422[iVar040].f_108))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[iVar040] + 12) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_337() //Position: 0xFE9F / 65183
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_338(bool bParam0) //Position: 0xFEC3 / 65219
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

bool Function_339() //Position: 0xFEF2 / 65266
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_340(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0xFF0D / 65293
{
	if (Function_341(&iParam0) == iParam7 || Function_339())
	{
		return 1;
	}
	return 0;
}

int Function_341(int iParam0) //Position: 0xFF2C / 65324
{
	if (Function_234(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_342(int iParam0) //Position: 0xFF44 / 65348
{
	if (!Function_88(iParam0))
	{
		return 1;
	}
	return Function_148(&(Global_29008[iParam0]), 4);
}

bool Function_343() //Position: 0xFF60 / 65376
{
	if (!DECOR_CHECK_EXIST((*&Local_4 + 148)[12], "bPlayerAttackedMe"))
	{
		if ((GET_LASSO_TARGET(Global_34573) != (*&Local_4 + 148)[12] || GET_LAST_ATTACKER((*&Local_4 + 148)[12]) != Global_34573) || Function_344(Global_34573, (*&Local_4 + 148)[12], 10.0f))
		{
			TASK_MELEE_ATTACK((*&Local_4 + 148)[12], Global_34573, -1.0f);
			TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 172)[02], &Local_4 + 568[46], 4.203895E-45f);
			DECOR_SET_BOOL((*&Local_4 + 148)[12], "bPlayerAttackedMe", true);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 148)[12])))
			{
				bLocal_492 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 148)[12], 322, 0f, 2, 0);
				SET_BLIP_NAME(bLocal_492, "Zombie01_Blip_Son");
				SET_BLIP_IMPAIRMENT_MASK(bLocal_492, 2048);
			}
			return 1;
		}
	}
	return 0;
}

int Function_344(var uParam0, var uParam1, float fParam2) //Position: 0x10064 / 65636
{
	float fVar0;
	
	fVar0 = Function_345(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_345(bool bParam0, bool bParam1) //Position: 0x10081 / 65665
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_346(&uVar0, &uVar3);
	return iVar6;
}

var Function_346(var uParam0, bool bParam1) //Position: 0x100A0 / 65696
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_347(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x100BE / 65726
{
	bool bVar0;
	bool bVar1;
	
	if (((((bParam0 > 0 || bParam1 > 0) || iParam2 > 0) || bParam3 > 0) || bParam4 > 0) || iParam5 > 0)
	{
		return 0;
	}
	bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
	bVar1 = MAKE_TIME_OF_DAY(bParam3, bParam4, iParam5);
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if (IS_LATER_THAN(GET_TIME_OF_DAY(), bVar0) && IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar1))
		{
			SET_TIME_ACCELERATION(0.0f);
			return 1;
		}
	}
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar0) || IS_LATER_THAN(GET_TIME_OF_DAY(), bVar1))
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return 0;
}

void Function_348() //Position: 0x10143 / 65859
{
	Function_347(5, 30, 0, 23, 59, 59);
	if (iLocal_338 < 2 && iLocal_338 > 105)
	{
		Function_186((*&Local_4 + 220)[0]);
		if (!Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_3_CS_SEQ/OUTBREAK_3_CS_SEQ", &uLocal_453, Function_186((*&Local_4 + 220)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1))
		{
		}
		if (!DECOR_CHECK_EXIST(Global_34573, "nNoGrapple"))
		{
			DECOR_SET_BOOL(Global_34573, "nNoGrapple", true);
		}
		if (!Function_244(&iLocal_476))
		{
			Function_242(&iLocal_476);
		}
		else if (Function_277(&iLocal_476) < 0.5f)
		{
			Function_225(1, 1);
			Function_279(&iLocal_476);
		}
	}
	switch (iLocal_338)
	{
		case 0x00000000:
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_227(Global_34573, (*&Local_4 + 440)[1], 1, 1, 1);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(4, false, 0));
			Function_279(&iLocal_454);
			iLocal_338 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_342(Global_30717[1]))
			{
				Function_279(&iLocal_454);
				iLocal_338 = 2;
			}
			break;
		
		case 0x00000002:
			Function_185(bLocal_337);
			Function_332(StackVal, StackVal, Function_185(bLocal_337), bLocal_337, Global_30717[1], Function_188(bLocal_337), 0);
			if (Function_234(&Local_194) || HUD_IS_FADED())
			{
				Function_241();
			}
			ADD_COMPANION_PERMANENT();
			Function_279(&iLocal_454);
			iLocal_338 = 6;
			break;
		
		case 0x00000006:
			if (!Function_234(&Local_194) || (Function_364((*&Local_4 + 116)[02], 1, 5.0f) && Function_364((*&Local_4 + 116)[12], 1, 5.0f)))
			{
				Function_220(1.0f);
			}
			if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && IS_WEAPON_DRAWN(Global_34573))
			{
				Function_28("Zombie01_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR((*&Local_4 + 116)[02], 322, 0, 2, 0), "Zombie01_Blip_Uncle");
				SET_ACTOR_FACTION((*&Local_4 + 116)[02], 32);
				Function_298((*&Local_4 + 116)[12], 1, 1);
				Function_279(&iLocal_454);
				iLocal_338 = 7;
			}
			else if (!IS_WEAPON_DRAWN(Global_34573))
			{
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 16, 1);
			}
			break;
		
		case 0x00000007:
			if (Function_277(&iLocal_454) < 1.0f)
			{
				Function_316("tut_weapon_zoom", 0x41200000, 1, 0, 2, 1, 0);
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				Function_243(&iLocal_479, 15.0f);
				Function_279(&iLocal_454);
				iLocal_338 = 8;
			}
			break;
		
		case 0x00000008:
			Function_324(&bLocal_457, 60.0f, 200.0f, (*&Local_4 + 116)[12], "Zombie01_Return_Wife", "Zombie01_Fail_Wife", &bLocal_450, 0, bLocal_193, Local_4, 325, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 116)[12])) && !DECOR_CHECK_EXIST((*&Local_4 + 116)[12], "bNamedBlip"))
			{
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_4 + 116)[12]), "Zombie01_Blip_Wife");
				DECOR_SET_BOOL((*&Local_4 + 116)[12], "bNamedBlip", true);
			}
			else if (DECOR_CHECK_EXIST((*&Local_4 + 116)[12], "bNamedBlip") && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 116)[12])))
			{
				DECOR_REMOVE((*&Local_4 + 116)[12], "bNamedBlip");
			}
			if (!DECOR_CHECK_EXIST(bLocal_193, "aimtutorial"))
			{
				if (Function_363(0, 1, 0))
				{
					HUD_CLEAR_HELP_QUEUE();
					if (GET_PLAYER_COMBATMODE() == 1)
					{
						Function_316("tut_weapon_aim_expert", 0x41200000, 1, 0, 2, 1, 0);
					}
					else if (GET_PLAYER_COMBATMODE() == 2)
					{
						Function_316("tut_weapon_aim_normal", 0x41200000, 1, 0, 2, 1, 0);
					}
					else
					{
						Function_316("tut_weapon_aim_casual", 0x41200000, 1, 0, 2, 1, 0);
					}
					DECOR_SET_BOOL(bLocal_193, "aimtutorial", true);
					Function_362(&Global_76848, 256);
				}
			}
			if (!IS_ACTOR_ALIVE((*&Local_4 + 116)[02]))
			{
				if (!Function_244(&iLocal_485))
				{
					Function_242(&iLocal_485);
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!DECOR_CHECK_EXIST(bLocal_193, "bYellsZombieUnkle"))
					{
						if (Function_277(&iLocal_485) < 0.5f)
						{
							Function_361();
							DECOR_SET_BOOL(bLocal_193, "bYellsZombieUnkle", true);
						}
					}
					else if (Function_277(&iLocal_485) < 1.5f)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*&Local_4 + 116)[02])))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR((*&Local_4 + 116)[02]));
						}
						Function_191();
						Function_360(&(Local_381[117]));
						Function_360(&(Local_381[017]));
						AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
						iLocal_338 = 106;
					}
				}
			}
			else if (!DECOR_CHECK_EXIST((*&Local_4 + 116)[02], "nbAttacked"))
			{
				if (GET_LAST_ATTACKER((*&Local_4 + 116)[02]) == Global_34573)
				{
					RESET_ANIM_SET_FOR_ACTOR((*&Local_4 + 116)[02], 1);
					TASK_MELEE_ATTACK((*&Local_4 + 116)[02], Global_34573, -1.0f);
					DECOR_SET_BOOL((*&Local_4 + 116)[02], "nbAttacked", true);
				}
				Function_350();
				Function_349();
			}
			break;
		
		case 0x0000006A:
			Local_330 = 1000;
			iLocal_438[0] = 1;
			bLocal_337 = true;
			iLocal_338 = 2;
			break;
	}
	return;
}

void Function_349() //Position: 0x106F1 / 67313
{
	if (IS_ACTOR_VALID((*&Local_4 + 116)[02]))
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 116)[02]))
		{
			if ((IS_ACTOR_IN_VOLUME((*&Local_4 + 116)[02], (*&Local_4 + 240)[3]) || IS_ACTOR_IN_VOLUME((*&Local_4 + 116)[02], (*&Local_4 + 240)[4])) && !DECOR_CHECK_EXIST((*&Local_4 + 116)[02], "bPathOff"))
			{
				AI_SET_NAV_PATHFINDING_ENABLED((*&Local_4 + 116)[02], 0);
				DECOR_SET_BOOL((*&Local_4 + 116)[02], "bPathOff", true);
			}
			else if (DECOR_CHECK_EXIST((*&Local_4 + 116)[02], "bPathOff"))
			{
				AI_SET_NAV_PATHFINDING_ENABLED((*&Local_4 + 116)[02], 1);
				DECOR_REMOVE((*&Local_4 + 116)[02], "bPathOff");
			}
		}
	}
	return;
}

void Function_350() //Position: 0x107AC / 67500
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
	{
		return;
	}
	if (!Function_244(&iLocal_479))
	{
		Function_242(&iLocal_479);
	}
	if (!Function_244(&iLocal_482))
	{
		Function_328(&iLocal_482, 15.0f);
	}
	if (Function_277(&iLocal_482) <= 15.0f)
	{
		if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != (*&Local_4 + 116)[22] || GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != (*&Local_4 + 116)[22])
		{
			Function_358();
			Function_279(&iLocal_482);
		}
		else if (GET_LAST_ATTACKER((*&Local_4 + 116)[22]) != Global_34573 || GET_LAST_ATTACK_TARGET(Global_34573) != (*&Local_4 + 116)[22])
		{
			Function_357();
			Function_279(&iLocal_482);
		}
		else if (AI_HAS_ACTOR_BUMPED_INTO_ME((*&Local_4 + 116)[22], Global_34573, 1.0f))
		{
			Function_356();
			Function_279(&iLocal_482);
		}
	}
	if (IS_ACTOR_IN_VOLUME((*&Local_4 + 116)[02], (*&Local_4 + 272)[1]) && !DECOR_CHECK_EXIST((*&Local_4 + 116)[02], "Z01_PLAY_UnklEntersHouse"))
	{
		Function_355();
		DECOR_SET_BOOL((*&Local_4 + 116)[02], "Z01_PLAY_UnklEntersHouse", true);
		Function_279(&iLocal_479);
	}
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 272)[1]))
	{
		if (!DECOR_CHECK_EXIST(bLocal_193, "Z01_PLAY_BakInB4Kill"))
		{
			Function_354();
			DECOR_SET_BOOL(bLocal_193, "Z01_PLAY_BakInB4Kill", true);
			Function_279(&iLocal_479);
		}
		else if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !DECOR_CHECK_EXIST(bLocal_193, "Z01_PLAY_JonBakInNoKil"))
		{
			Function_353();
			DECOR_SET_BOOL(bLocal_193, "Z01_PLAY_JonBakInNoKil", true);
			Function_279(&iLocal_479);
		}
	}
	if ((Function_277(&iLocal_454) < 30.0f && Function_277(&iLocal_479) <= 15.0f) && !DECOR_CHECK_EXIST(bLocal_193, "Z01_PLAY_NotKillnUncle"))
	{
		Function_352();
		DECOR_SET_BOOL(bLocal_193, "Z01_PLAY_NotKillnUncle", true);
		Function_279(&iLocal_479);
	}
	if (Function_277(&iLocal_479) <= 15.0f)
	{
		if (RAND_FLOAT_RANGE(0.0f, 100000.0f) < 50000.0f)
		{
			Function_361();
		}
		else
		{
			Function_351();
		}
		Function_279(&iLocal_479);
		Function_243(&iLocal_482, 15.0f);
	}
	return;
}

void Function_351() //Position: 0x10A1B / 68123
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_WindShout", "Z01_WindShout", 0, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_352() //Position: 0x10A5E / 68190
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_NotKillnUncle", "Z01_NotKillnUncle", 0, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_353() //Position: 0x10AA9 / 68265
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z01_JonBakInNoKil", "Z01_JonBakInNoKil", 1, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354() //Position: 0x10AF4 / 68340
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_BakInB4Kill", "Z01_BakInB4Kill", 0, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_355() //Position: 0x10B3B / 68411
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_UnklEntersHouse", "Z01_UnklEntersHouse", 0, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_356() //Position: 0x10B8A / 68490
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_JonBumpsJak", "Z01_JonBumpsJak", 0, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_357() //Position: 0x10BD1 / 68561
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_JonHitsJak", "Z01_JonHitsJak", 0, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_358() //Position: 0x10C16 / 68630
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z01_JonTargetsJak", "Z01_JonTargetsJak", 0, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_359() //Position: 0x10C61 / 68705
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_360(int iParam0) //Position: 0x10C6E / 68718
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

void Function_361() //Position: 0x10D22 / 68898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z01_YellsZombieUnkle", "Z01_YellsZombieUnkle", 1, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362(var uParam0, int iParam1) //Position: 0x10D73 / 68979
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_363(int iParam0, int iParam1, bool bParam2) //Position: 0x10D82 / 68994
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

int Function_364(bool bParam0, bool bParam1, float fParam2) //Position: 0x10DFF / 69119
{
	float fVar0;
	bool bVar1;
	
	if (Function_46() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_365() //Position: 0x10E9C / 69276
{
	switch (iLocal_338)
	{
		case 0x00000006:
			Function_469(&Local_194, 1);
			bLocal_193 = CREATE_LAYOUT("Zombie01_DYNAMICLAYOUT");
			Function_155(0x4000000);
			Function_143(114696);
			Function_467(1);
			Function_466();
			Global_63097 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_339 = CREATE_OBJECT_ITERATOR(bLocal_193);
			if (Function_465())
			{
				Function_194();
			}
			Function_26(0x8000000);
			AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
			ENABLE_CHILD_SECTOR("dlc_beh_fireplace01x");
			DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
			DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
			Function_240(0, 0);
			Function_464(20, 0);
			Function_190(1, 0);
			Function_190(3, 0);
			Function_132(0);
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, -99.751f, 119.489f, 1358.906f, 420.0682f, 1, true, 1);
			if (!Function_234(&Local_194) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ"))
			{
				Function_463(4, 1);
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, false, 0));
				SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 10);
				SET_WEAPONENUM_LOCKED(4, 0);
				Function_130(4, 0, 0);
				iLocal_338 = 25;
			}
			else
			{
				Function_463(13, 1);
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(4, false, 0));
				SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 21);
				SET_WEAPONENUM_LOCKED(16, 0);
				_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 12.0f, 0);
				Function_130(16, 0, 0);
				SET_WEAPONENUM_LOCKED(21, 0);
				iLocal_338 = 9;
			}
			break;
		
		case 0x00000019:
			if (Function_462() && Function_262(&bLocal_262))
			{
				if (!IS_LAYOUTREF_VALID(Local_493))
				{
					Function_460();
				}
				else if (Function_388())
				{
					Function_387();
					Function_139(&bLocal_262);
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, -99.751f, 119.489f, 1358.906f, 420.0682f, 1, true, 1);
					iLocal_338 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_342(Global_30717[1]))
				{
					Function_225(0, 1);
					DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
					DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
					Function_279(&Local_330 + 4);
					iLocal_338 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_376())
			{
				Function_279(&iLocal_454);
				if (HUD_IS_FADING() || HUD_IS_FADED())
				{
					iLocal_338 = 9;
				}
				else
				{
					bLocal_337 = false;
					iLocal_338 = 2;
					Function_374(&Local_194, &bLocal_337, &iLocal_338);
				}
			}
			break;
		
		case 0x00000009:
			if (Function_366())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
				}
				iLocal_338 = 10;
			}
			break;
		
		case 0x0000000A:
			bLocal_337 = iLocal_192;
			iLocal_338 = 0;
			Function_374(&Local_194, &bLocal_337, &iLocal_338);
			switch (bLocal_337)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

bool Function_366() //Position: 0x111DF / 70111
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_268())
		{
			iVar0 = 0;
		}
		if (!Function_262(&bLocal_201))
		{
			iVar0 = 0;
		}
		if (!IS_ACTOR_VALID(bLocal_461))
		{
			bLocal_461 = Function_367(1, 1, 0, 0, 0, 0, 1, 0);
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool Function_367(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x11222 / 70178
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
	if (Global_3381)
	{
		Function_373(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_372())
		{
			return "";
		}
	}
	if (!Function_370())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_158();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_186(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_186(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_186(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_186(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_369(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_369(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_46() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
				if (!Function_78(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
		Function_368(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_46() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_368(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x11578 / 71032
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_369(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x115B5 / 71093
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

bool Function_370() //Position: 0x11650 / 71248
{
	if (Function_371() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_371() //Position: 0x11666 / 71270
{
	return Global_12976.f_152;
}

bool Function_372() //Position: 0x11671 / 71281
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_373(var uParam0, bool bParam1, bool bParam2) //Position: 0x11691 / 71313
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_129(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_129(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_374(int iParam0, int iParam1, int iParam2) //Position: 0x116BE / 71358
{
	if (Function_234(iParam0))
	{
		*iParam1 = Function_341(iParam0);
		if (*iParam1 == 4294967295)
		{
			*iParam1 = 0;
		}
		if (*iParam1 == 99)
		{
			*iParam1 = 0;
			*iParam2 = 0;
		}
		Function_375();
	}
	return;
}

void Function_375() //Position: 0x116F2 / 71410
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

bool Function_376() //Position: 0x11743 / 71491
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (Local_330 > 1006)
	{
		if (!IS_LAYOUTREF_VALID(Local_4))
		{
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_342(Global_30717[1]))
				{
					if (Function_268())
					{
						if (Function_262(&bLocal_201))
						{
							if (!IS_LAYOUTREF_VALID(Local_4))
							{
								Function_225(0, 1);
							}
						}
					}
				}
			}
		}
	}
	Function_289(&Local_330, 1, "Intro01");
	switch (Local_330)
	{
		case 0x000003E8:
			if (!iLocal_491)
			{
				Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				Function_273(StackVal, Function_259(), bLocal_193, *(&Local_4 + 292[06]), &Local_4 + 220[2], 0, 0, 0, 0, 1, 1);
				Function_298(Global_34573, 1, 1);
				iLocal_491 = 1;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Local_330 = 1105;
				return 0;
			}
			STREAMING_UNLOAD_BOUNDS();
			STREAMING_UNLOAD_SCENE();
			iLocal_491 = 0;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ", 0, 2, 1, 2, 2);
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar0, &vVar3))
			{
				VSCALE(&vVar3, (360.0f / 6.28f));
				STREAMING_OVERRIDE_MAIN_POI(vVar0, vVar3);
			}
			Function_279(&Local_330 + 4);
			Local_330 = 1053;
			break;
		
		case 0x0000041D:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_RELEASE_MAIN_POI();
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_656 = CUTSCENE_MANAGER_GET_CURRENT_FRAME();
				Function_279(&Local_330 + 4);
				Local_330 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_GET_CURRENT_FRAME() <= 3270 && !IS_OBJECT_VALID(bLocal_466))
			{
				bLocal_466 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, Function_135(), "env_lightningForked_stormy", -74.266f, 119.127f, 1388.855f);
				UNK_0x6745191B(bLocal_466, 0.0f, 0.0f, 0.0f);
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (IS_OBJECT_VALID(bLocal_466))
				{
					DESTROY_OBJECT(bLocal_466);
				}
				DEEQUIP_ACCESSORY(Global_34573, 0);
				iLocal_491 = 0;
				Function_279(&Local_330 + 4);
				Local_330 = 1005;
			}
			else
			{
				if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 5.0f && !iLocal_491)
				{
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_491 = 1;
				}
				Function_386(19, 21, 0, iLocal_656);
				if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					Local_330.f_16 = Function_382(bLocal_193, 0, 1, 0, 0);
					if (IS_OBJECT_VALID(Local_330.f_16))
					{
					}
					else
					{
						LOG_ERROR("Marshal01_Outro - Failed to create Marshal01_Outro_cutscene");
					}
					CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_330.f_16, 1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_330.f_16, 0);
				}
			}
			break;
		
		case 0x000003ED:
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_491)
			{
				UI_PUSH("nCutscenes");
				iLocal_491 = 1;
			}
			if (Function_277(&Local_330 + 4) < 4.5f)
			{
				Function_186(Global_34573);
				if (Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_1_PT_1B_SEQ/OUTBREAK_1_PT_1B_SEQ", &uLocal_453, Function_186(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
				{
					STREAMING_RELEASE_MAIN_POI();
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_656 = CUTSCENE_MANAGER_GET_CURRENT_FRAME();
					iLocal_657 = 0;
					Function_279(&Local_330 + 4);
					Local_330 = 1006;
				}
				else
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					Local_330 = 1105;
				}
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_1B_SEQ/OUTBREAK_1_PT_1B_SEQ"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Local_330 = 1105;
			}
			else
			{
				Function_186(Global_34573);
				Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_1_PT_1B_SEQ/OUTBREAK_1_PT_1B_SEQ", &uLocal_453, Function_186(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			}
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(true, false, 0));
				Function_240(0, 0);
				SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 21);
				SET_WEAPONENUM_LOCKED(16, 0);
				_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 12.0f, 0);
				Function_130(16, 0, 0);
				SET_WEAPONENUM_LOCKED(21, 0);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				iLocal_491 = 0;
				if (!IS_ACTOR_VALID((*&Local_4 + 204)[02]))
				{
					Function_239();
				}
				if (!SQUAD_IS_VALID(Local_4.f_144))
				{
					Function_254();
				}
				Function_227((*&Local_4 + 116)[12], (*&Local_4 + 440)[3], 1, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[12]);
				SET_ACTOR_FACTION((*&Local_4 + 116)[12], 20);
				if (!IS_OBJECT_VALID(bLocal_465))
				{
					bLocal_465 = CREATE_GRINGO_IN_LAYOUT(bLocal_193, Function_135(), "DLC_Outbreak3", *(&Local_4 + 292[36]), *(&Local_4 + 292[36] + 12));
					SNAP_OBJECT_TO_GROUND(bLocal_465, 1.0f, true, 1092616192);
					CREATE_DECAL(0, *(&Local_4 + 292[56]), 0.25f, 1, 1);
				}
				SNAP_ACTOR_TO_GRINGO((*&Local_4 + 116)[12], bLocal_465, "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO((*&Local_4 + 116)[12], GET_GRINGO_FROM_OBJECT(bLocal_465), "UseCase1", 4294967295, 1);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 116)[12]), 1);
				Function_298((*&Local_4 + 116)[12], 1, 1);
				Function_279(&Local_330 + 4);
				Local_330 = 1007;
			}
			else
			{
				Function_386(21, 23, 59, iLocal_656);
				if (!iLocal_658)
				{
					iLocal_657++;
					if (iLocal_657 > 2)
					{
						Function_463(0, 1);
						iLocal_658 = 1;
					}
				}
				if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					Local_330.f_16 = Function_379(bLocal_193, 0, 1, 0, 0);
					if (IS_OBJECT_VALID(Local_330.f_16))
					{
					}
					else
					{
						LOG_ERROR("Marshal01_Outro - Failed to create CREATE_ZOMBIE01_OUTSIDE02_CUTSCENE");
					}
					CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_330.f_16, 1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_330.f_16, 0);
				}
			}
			break;
		
		case 0x000003EF:
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_491)
			{
				UI_PUSH("nCutscenes");
				iLocal_491 = 1;
			}
			if (Function_277(&Local_330 + 4) < 5.0f)
			{
				Function_186(Global_34573);
				if (Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_1_PT_2_SEQ/OUTBREAK_1_PT_2_SEQ", &uLocal_453, Function_186(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
				{
					CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
					STREAMING_RELEASE_MAIN_POI();
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_656 = CUTSCENE_MANAGER_GET_CURRENT_FRAME();
					iLocal_657 = 0;
					Function_279(&Local_330 + 4);
					iLocal_491 = 0;
					iLocal_658 = 0;
					Local_330 = 1008;
				}
				else if (Function_277(&Local_330 + 4) < 59.0f)
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					Local_330 = 1105;
					return 0;
				}
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_2_SEQ/OUTBREAK_1_PT_2_SEQ"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Local_330 = 1105;
				return 0;
			}
			Function_186(Global_34573);
			Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_1_PT_2_SEQ/OUTBREAK_1_PT_2_SEQ", &uLocal_453, Function_186(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			break;
		
		case 0x000003F0:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_292(0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_298(Global_34573, 0, 1);
				Function_279(&Local_330 + 4);
				return 1;
			}
			if (!iLocal_491)
			{
				if (IS_OBJECT_VALID(Local_330.f_16))
				{
					DESTROY_OBJECT(Local_330.f_16);
				}
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 116)[12]);
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 116)[22]);
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 116)[02]);
				iLocal_491 = 1;
			}
			if (!iLocal_658)
			{
				iLocal_657++;
				if (iLocal_657 > 2)
				{
					Function_463(21, 0);
					iLocal_658 = 1;
				}
			}
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
			{
				Function_377(13, 0, 10, 0, 1);
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			Function_386(3, 4, 0, iLocal_656);
			if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_241();
			}
			break;
		
		case 0x00000451:
			if (HUD_IS_FADED())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else if (!IS_LAYOUTREF_VALID(Local_4))
				{
					if (STREAMING_IS_WORLD_LOADED())
					{
						if (Function_342(Global_30717[1]))
						{
							if (Function_268())
							{
								if (Function_262(&bLocal_201))
								{
									if (!IS_LAYOUTREF_VALID(Local_4))
									{
									}
								}
							}
						}
					}
				}
				else
				{
					if (!SQUAD_IS_VALID(Local_4.f_144))
					{
						Function_254();
					}
					Function_298((*&Local_4 + 116)[12], 1, 1);
					Function_227((*&Local_4 + 116)[12], (*&Local_4 + 440)[3], 1, 1, 1);
					DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[12]);
					SET_ACTOR_FACTION((*&Local_4 + 116)[12], 20);
					if (!IS_OBJECT_VALID(bLocal_465))
					{
						bLocal_465 = CREATE_GRINGO_IN_LAYOUT(bLocal_193, Function_135(), "DLC_Outbreak3", *(&Local_4 + 292[36]), *(&Local_4 + 292[36] + 12));
						SNAP_OBJECT_TO_GROUND(bLocal_465, 1.0f, true, 1092616192);
						CREATE_DECAL(0, *(&Local_4 + 292[56]), 0.25f, 1, 1);
					}
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 116)[12], bLocal_465, "UseCase1", 1, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 116)[12], GET_GRINGO_FROM_OBJECT(bLocal_465), "UseCase1", 4294967295, 1);
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_4 + 116)[12]), 1);
					if (IS_OBJECT_VALID(bLocal_466))
					{
						DESTROY_OBJECT(bLocal_466);
					}
					if (!IS_ACTOR_VALID((*&Local_4 + 204)[02]))
					{
						Function_239();
					}
					if (IS_OBJECT_VALID(Local_330.f_16))
					{
						DESTROY_OBJECT(Local_330.f_16);
					}
					Function_463(13, 1);
					Function_292(0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					DELETE_WEAPON_FROM_ACTOR(Global_34573, 4);
					SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 21);
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(22, false, 0));
					SET_WEAPONENUM_LOCKED(16, 0);
					_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 12.0f, 0);
					Function_130(16, 0, 0);
					SET_WEAPONENUM_LOCKED(21, 0);
					SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
					Function_298(Global_34573, 0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_377(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x12238 / 74296
{
	int iVar0;
	bool bVar1;
	
	Function_127(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_378(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_125(StackVal, bVar1, bParam4);
		}
	}
}

void Function_378(int iParam0, int iParam1) //Position: 0x122AA / 74410
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_127(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_125(iParam0, iVar0, iParam1);
	return;
}

var Function_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x122CF / 74447
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_135(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Zombie01_Outside02", 1, 1);
	}
	Function_380(&bVar0);
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

void Function_380(int iParam0) //Position: 0x1234D / 74573
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_381(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 60.0f, 0);
	return;
}

void Function_381(int iParam0) //Position: 0x12376 / 74614
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 28.43486f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -231.847f, 200.8657f, 1661.782f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.257949f, 2.647881f, -0.016713f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_382(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x123DD / 74717
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_135(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Zombie01_Outside01", 2, 1);
	}
	Function_383(&bVar0);
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

void Function_383(int iParam0) //Position: 0x1245B / 74843
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_385(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_384(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_384(int iParam0) //Position: 0x12490 / 74896
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36.03296f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -100.3975f, 119.7329f, 1383.078f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.147675f, 0.188491f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_385(int iParam0) //Position: 0x124F3 / 74995
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36.03296f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -99.58214f, 119.8001f, 1380.495f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.147675f, 0.178642f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_386(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x12556 / 75094
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = (TO_FLOAT(CUTSCENE_MANAGER_GET_CURRENT_FRAME()) / TO_FLOAT((CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - iParam3)));
	bVar1 = false;
	bVar2 = (FLOOR((((TO_FLOAT(bParam1) - TO_FLOAT(bParam0)) * 60.0f) * fVar0)) + iParam2);
	while (bVar2 >= 60)
	{
		bVar1++;
		bVar2 = (bVar2 - 60);
	}
	bVar1 = (bVar1 + bParam0);
	if (bVar1 <= 0 && bVar2 <= 0)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(bVar1, bVar2, 0));
	}
}

void Function_387() //Position: 0x125C4 / 75204
{
	Function_139(&Local_493 + 4);
	RELEASE_LAYOUT_REF(Local_493);
	return;
}

bool Function_388() //Position: 0x125D8 / 75224
{
	Function_289(&Local_330, 1, 0);
	switch (Local_330)
	{
		case 0x000003E8:
			Function_275(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_459();
			bLocal_665 = (*&Local_493 + 104)[02];
			bLocal_663 = (*&Local_493 + 104)[12];
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_665, 0);
			TASK_STAND_STILL(bLocal_665, -1.0f, 0, 0);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_665, false);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_663, false);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_665);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_663);
			Function_454();
			bLocal_666 = (*&Local_493 + 128)[02];
			bLocal_664 = (*&Local_493 + 128)[12];
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_666, 0);
			TASK_STAND_STILL(bLocal_666, -1.0f, 0, 0);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_666, false);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_664, false);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_666);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_664);
			fLocal_673 = ANIMAL_SPECIES_TUNING_GET_ATTRIB_FLOAT(23, 67, 0);
			ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT(23, 67, -1.0f, false);
			Function_500(1);
			AUDIO_MUSIC_ONE_SHOT("INTRO_SONG_01_P1", "IDLE", 0.0f, 0.0f, 1, 1);
			if (!Function_244(&Local_330 + 4))
			{
				Function_242(&Local_330 + 4);
			}
			else
			{
				Function_279(&Local_330 + 4);
			}
			STREAMING_OVERRIDE_MAIN_POI(39.12394f, 120.3175f, 1315.23f, -0.509f, 112.706f, 0.0f);
			Local_330 = 1013;
			break;
		
		case 0x000003F5:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_277(&Local_330 + 4) < 1.0f)
				{
					if (AUDIO_MUSIC_IS_PREPARED())
					{
						Local_330.f_16 = Function_421(Local_493, 0, Global_34573, bLocal_663, bLocal_664, 1, 0, 0);
						if (IS_OBJECT_VALID(Local_330.f_16))
						{
						}
						else
						{
							LOG_ERROR("Zombie01_Intro - Failed to create Zombie01_Intro_cutscene");
						}
						iLocal_659 = 0;
						iLocal_660 = 0;
						iLocal_661 = 0;
						STREAMING_RELEASE_MAIN_POI();
						Function_279(&Local_330 + 4);
						Local_330 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			if (Function_415())
			{
				vLocal_667 = { -89.268f, 117.497f, 1379.306f };
				TELEPORT_ACTOR(Global_34573, &vLocal_667, 1, 1, 1);
				Local_330 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (HUD_IS_FADED() && Function_277(&Local_330 + 4) < 43.0f)
			{
				if (IS_OBJECT_VALID(Local_330.f_16))
				{
					DESTROY_OBJECT(Local_330.f_16);
				}
				Function_500(1);
				AUDIO_MUSIC_ONE_SHOT("INTRO_SONG_01_P2", "IDLE", 0.0f, 0.0f, 1, 1);
				Function_279(&Local_330 + 4);
				Local_330 = 1023;
			}
			break;
		
		case 0x000003FF:
			if (STREAMING_IS_WORLD_LOADED() && AUDIO_MUSIC_IS_PREPARED())
			{
				Local_330.f_16 = Function_403(Local_493, 0, bLocal_664, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_330.f_16))
				{
				}
				else
				{
					LOG_ERROR("Zombie01_Intro - Failed to create Zombie01_Intro_cutscene");
				}
				AUDIO_MUSIC_PLAY_PREPARED();
				AUDIO_MUSIC_RELEASE_CONTROL(30000, 1);
				if (!Function_244(&Local_330 + 4))
				{
					Function_242(&Local_330 + 4);
				}
				else
				{
					Function_279(&Local_330 + 4);
				}
				STREAMING_RELEASE_MAIN_POI();
				STREAMING_UNLOAD_BOUNDS();
				Function_225(0, 1);
				HUD_FADE_IN(0.0f, 1065353216);
				iLocal_662 = 0;
				iLocal_676 = 0;
				Local_330 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (Function_391() && Function_389())
			{
				Function_279(&Local_330 + 4);
				Local_330 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_665))
				{
					DESTROY_ACTOR(bLocal_665);
					DESTROY_ACTOR(bLocal_663);
				}
				DESTROY_ACTOR(bLocal_666);
				DESTROY_ACTOR(bLocal_664);
				if (IS_ACTOR_VALID((*&Local_493 + 176)[02]))
				{
					DESTROY_ACTOR((*&Local_493 + 176)[02]);
				}
				if (IS_ACTOR_VALID((*&Local_493 + 152)[02]))
				{
					DESTROY_ACTOR((*&Local_493 + 152)[02]);
				}
				if (IS_ACTOR_VALID((*&Local_493 + 152)[12]))
				{
					DESTROY_ACTOR((*&Local_493 + 152)[12]);
				}
				UNK_0xE613AE52(0.0f);
				UNK_0xF55B50ED(0);
				UNK_0x6336182D("un_intro_logo");
				ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT(23, 67, fLocal_673, false);
				if (bLocal_671)
				{
					DYNAMICMIXER_DETRIGGERSTATE(uLocal_672, 0);
				}
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				vLocal_667 = { -89.268f, 117.497f, 1379.306f };
				TELEPORT_ACTOR(Global_34573, &vLocal_667, 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				if (IS_OBJECT_VALID(bLocal_466))
				{
					DESTROY_OBJECT(bLocal_466);
				}
				STREAMING_RELEASE_MAIN_POI();
				STREAMING_UNLOAD_BOUNDS();
				vLocal_667 = { -89.268f, 117.497f, 1379.306f };
				TELEPORT_ACTOR(Global_34573, &vLocal_667, 1, 1, 1);
				Function_292(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (IS_OBJECT_VALID(Local_330.f_16))
				{
					DESTROY_OBJECT(Local_330.f_16);
				}
				Local_330 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				UI_EXIT("Splash_Message_OverFade");
				Local_330 = 1104;
			}
			break;
	}
	return 0;
}

int Function_389() //Position: 0x12AD4 / 76500
{
	switch (iLocal_676)
	{
		case 0x00000000:
			UNK_0xE613AE52(0.0f);
			UNK_0x84F3DD81(0.0f, 0.0f);
			if (GET_CAMERA_ASPECT_RATIO(GET_GAME_CAMERA()) > 1.4f)
			{
				UNK_0x3A6960B2(0.33f);
			}
			else
			{
				UNK_0x3A6960B2(0.5f);
			}
			UNK_0x6336182D("un_intro_rgp");
			UNK_0xF55B50ED(1);
			iLocal_676 = 6;
			break;
		
		case 0x00000006:
			if (Function_277(&Local_330 + 4) < 0.5f)
			{
				fLocal_674 = 0.0f;
				fLocal_675 = GET_CURRENT_GAME_TIME();
				UNK_0xE613AE52(0.0f);
				UNK_0x6336182D("un_intro_rgp");
				iLocal_676 = 7;
			}
			break;
		
		case 0x00000007:
			Function_390(fLocal_675, 1);
			if (Function_277(&Local_330 + 4) < 3.0f)
			{
				fLocal_675 = GET_CURRENT_GAME_TIME();
				iLocal_676 = 8;
			}
			break;
		
		case 0x00000008:
			Function_390(fLocal_675, 0);
			if (Function_277(&Local_330 + 4) < 7.5f)
			{
				fLocal_674 = 0.0f;
				fLocal_675 = GET_CURRENT_GAME_TIME();
				UNK_0x6336182D("un_intro_rsdp");
				UNK_0xE613AE52(fLocal_674);
				UNK_0xF55B50ED(1);
				iLocal_676 = 9;
			}
			break;
		
		case 0x00000009:
			Function_390(fLocal_675, 1);
			if (Function_277(&Local_330 + 4) < 10.0f)
			{
				fLocal_675 = GET_CURRENT_GAME_TIME();
				iLocal_676 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_390(fLocal_675, 0);
			if (Function_277(&Local_330 + 4) < 17.45f)
			{
				fLocal_674 = 1.0f;
				fLocal_675 = GET_CURRENT_GAME_TIME();
				UNK_0xE613AE52(fLocal_674);
				UNK_0xF55B50ED(1);
				if (GET_CAMERA_ASPECT_RATIO(GET_GAME_CAMERA()) > 1.4f)
				{
					UNK_0x3A6960B2(0.56f);
				}
				else
				{
					UNK_0x3A6960B2(0.85f);
				}
				UNK_0x6336182D("un_intro_logo");
				iLocal_676 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_186(Global_34573);
			Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ", &uLocal_453, Function_186(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			if (Function_277(&Local_330 + 4) < 21.5f)
			{
				fLocal_675 = GET_CURRENT_GAME_TIME();
				iLocal_676 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_390(fLocal_675, 0);
			Function_186(Global_34573);
			Function_304(StackVal, StackVal, "$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ", &uLocal_453, Function_186(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			if (Function_277(&Local_330 + 4) < 22.0f)
			{
				UNK_0xE613AE52(0.0f);
				UNK_0xF55B50ED(0);
				return 1;
				iLocal_676 = 106;
			}
			break;
	}
	return 0;
}

void Function_390(float fParam0, bool bParam1) //Position: 0x12D7A / 77178
{
	if (bParam1)
	{
		if (fLocal_674 > 1.0f)
		{
			fLocal_674 = ((GET_CURRENT_GAME_TIME() - fParam0) / 0.5f);
			if (fLocal_674 < 1.0f)
			{
				fLocal_674 = 1.0f;
			}
			UNK_0xE613AE52(fLocal_674);
		}
	}
	else if (fLocal_674 < 0.0f)
	{
		fLocal_674 = ((fParam0 + 0.5f) - GET_CURRENT_GAME_TIME());
		fLocal_674 = (fLocal_674 / 0.5f);
		if (fLocal_674 > 0.0f)
		{
			fLocal_674 = 0.0f;
		}
		UNK_0xE613AE52(fLocal_674);
	}
	return;
}

int Function_391() //Position: 0x12DE6 / 77286
{
	if (IS_ACTOR_VALID(bLocal_663))
	{
		Function_233(bLocal_663);
		STREAMING_LOAD_BOUNDS_EXT(0, Function_233(bLocal_663), 50.0f, 1);
	}
	if (IS_ACTOR_VALID(bLocal_664))
	{
		Function_233(bLocal_664);
		STREAMING_LOAD_BOUNDS_EXT(1, Function_233(bLocal_664), 50.0f, 1);
	}
	if (IS_ACTOR_VALID((*&Local_493 + 152)[02]))
	{
		STREAMING_LOAD_BOUNDS_EXT(2, -103.691f, 120.277f, 1362.156f, 50.0f, 1);
	}
	switch (iLocal_662)
	{
		case 0x00000000:
			if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_663, false) != bLocal_665)
			{
				SET_ACTOR_IN_VEHICLE(bLocal_665, bLocal_663, false);
			}
			if (GET_ACTOR_IN_VEHICLE_SEAT(bLocal_664, false) != bLocal_666)
			{
				SET_ACTOR_IN_VEHICLE(bLocal_666, bLocal_664, false);
			}
			Function_400();
			SNAP_ACTOR_TO_GRINGO((*&Local_493 + 152)[02], Local_493.f_612, "UseCase1", 1, 0, 0);
			TASK_USE_GRINGO((*&Local_493 + 152)[02], GET_GRINGO_FROM_OBJECT(Local_493.f_612), "UseCase1", 4294967295, 1);
			SNAP_ACTOR_TO_GRINGO((*&Local_493 + 152)[12], Local_493.f_616, "UseCase1", 1, 0, 0);
			TASK_USE_GRINGO((*&Local_493 + 152)[12], GET_GRINGO_FROM_OBJECT(Local_493.f_616), "UseCase1", 4294967295, 1);
			iLocal_662 = 6;
			break;
		
		case 0x00000006:
			Function_186((*&Local_493 + 320)[3]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186((*&Local_493 + 320)[3]), 50.0f, 1);
			if (Function_277(&Local_330 + 4) < 1.0f)
			{
				Function_395(bLocal_665, bLocal_663, (*&Local_493 + 320)[3], Local_493.f_624, 1, 4, 6.0f, 1);
				Function_227(Global_34573, (*&Local_493 + 500)[0], 1, 1, 1);
				iLocal_662 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_277(&Local_330 + 4) < 10.5f)
			{
				DESTROY_ACTOR(bLocal_665);
				DESTROY_ACTOR(bLocal_663);
				Function_227(bLocal_664, (*&Local_493 + 472)[3], 1, 1, 1);
				TASK_GO_NEAR_OBJECT(bLocal_666, (*&Local_493 + 472)[4], 2.0f, 2, 0, 1);
				AI_ACTOR_FORCE_SPEED(bLocal_666, 2);
				SET_ACTOR_SPEED(bLocal_666, 8.0f);
				SET_ACTOR_SPEED(bLocal_664, 8.0f);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, bLocal_664), 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, bLocal_664), 2);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, bLocal_664), 8.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, bLocal_664), 8.0f);
				AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_666, 0);
				AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_664, 0);
				iLocal_662 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_277(&Local_330 + 4) < 12.5f)
			{
				TASK_STAND_STILL(bLocal_666, -1.0f, 0, 0);
				iLocal_662 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&Local_330 + 4) < 14.0f)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_666, 0);
				Function_392(bLocal_666);
				iLocal_662 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_277(&Local_330 + 4) < 17.4f)
			{
				STREAMING_UNLOAD_BOUNDS();
				HUD_FADE_OUT(0.0f, 1.0f, 0);
				iLocal_662 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_277(&Local_330 + 4) < 22.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_392(bool bParam0) //Position: 0x130B5 / 78005
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar6;
	
	ACTOR_DISMOUNT_NOW(bParam0);
	vVar0 = { -1.0f, 0.0f, 0.25f };
	UNK_0xB89CC342(bParam0, &vVar0, &uVar3);
	Function_394(&uVar3, &vVar6);
	TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar6, Function_393(bParam0), 1, true, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bParam0, Local_493.f_644, 1, 1, 0, 1, 0);
	ACTOR_POP_NEXT_GAIT(bParam0, 1, 0);
	return;
}

var Function_393(bool bParam0) //Position: 0x13105 / 78085
{
	return GET_HEADING(bParam0);
}

int Function_394(int iParam0, bool bParam1) //Position: 0x13110 / 78096
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, bParam1, &uVar0))
	{
		if (!Function_78(StackVal, StackVal, *bParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, bParam1, &uVar0))
	{
		if (!Function_78(StackVal, StackVal, *bParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_395(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, bool bParam7) //Position: 0x1317B / 78203
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("bad wagon!");
		return;
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("invalid driver!");
		return;
	}
	if (bParam4)
	{
		Function_227(bParam1, bParam2, 0, 0, 0);
	}
	START_VEHICLE(bParam1);
	AI_CLEAR_NAV_MATERIAL_USAGE(bParam0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bParam0, bParam3, iParam5, 1, 0, 0, 0);
	AI_ACTOR_FORCE_SPEED(bParam0, iParam5);
	ACTOR_POP_NEXT_GAIT(bParam0, 3, 0);
	SET_ACTOR_SPEED(bParam0, fParam6);
	if (bParam7)
	{
		Function_396(bParam1, iParam5, fParam6, bParam3);
	}
}

void Function_396(bool bParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x1320B / 78347
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bParam0))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_ACTOR_FORCE_SPEED(bVar1, iParam1);
			SET_ACTOR_SPEED(bVar1, fParam2);
			ACTOR_POP_NEXT_GAIT(bVar1, 4, 0);
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
		}
		bVar0++;
	}
	SET_VEHICLE_ALLOWED_TO_DRIVE(bParam0, 1);
	SET_ACTOR_SPEED(bParam0, fParam2);
	GET_PATH_POINT(bParam3, Function_397(bParam0, bParam3), &vVar2);
	Function_233(bParam0);
	vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_233(bParam0), vVar2, StackVal) };
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(bParam0), &vVar5);
}

var Function_397(var uParam0, bool bParam1) //Position: 0x13289 / 78473
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	bVar0 = Function_399(uParam0, bParam1);
	GET_PATH_POINT(bParam1, bVar0, &vVar1);
	if (Function_398(StackVal, StackVal, uParam0, vVar1) < 0.0f)
	{
		bVar0++;
	}
	if (bVar0 > GET_PATH_NUM_POINTS(bParam1))
	{
		bVar0 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	}
	return bVar0;
}

float Function_398(bool bParam0, vector3 vParam1) //Position: 0x132CD / 78541
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar6;
	float fVar9;
	
	if (GET_OBJECT_AXIS(bParam0, &uVar3, 2))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
		fVar9 = VDOT(&vVar6, &uVar3);
	}
	return fVar9;
}

int Function_399(bool bParam0, bool bParam1) //Position: 0x13300 / 78592
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = false;
	bVar4 = 4294967295;
	bVar5 = 99999.9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, bVar0, &vVar1);
		Function_233(bParam0);
		bVar6 = VDIST(Function_233(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

void Function_400() //Position: 0x13354 / 78676
{
	Local_493.f_172 = CREATE_ACTORSET_IN_LAYOUT(Local_493, "FamilyGroupset", 0);
	(*&Local_493 + 152)[02] = CREATE_ACTOR_IN_LAYOUT(Local_493, "SonIntro", 638, -98.85898f, 118.1876f, 1736.197f, 0.0f, 8.498847f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_493.f_172, (*&Local_493 + 152)[02]);
	(*&Local_493 + 152)[12] = Function_401(Local_493, "nWifeIntro", 698, Function_135(), 976, -98.72256f, 118.1979f, 1733.032f, 0.0f, 79.61429f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_493.f_172, (*&Local_493 + 152)[12]);
	return;
}

var Function_401(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x13404 / 78852
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_402(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_402(bParam4))
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

bool Function_402(bool bParam0) //Position: 0x13529 / 79145
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_403(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x13540 / 79168
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_135(), 10, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Zombie01_Intro02", 10, 1);
	}
	Function_404(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_404(var uParam0, int iParam1) //Position: 0x135C0 / 79296
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_414(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_413(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_412(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_411(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_410(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_409(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_408(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_407(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_406(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 9);
	Function_405(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 4.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 4, 5, 4.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 6, 7, 3.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 8, 9, 4.0f, 4, 0);
	return;
}

void Function_405(var uParam0, bool bParam1) //Position: 0x1369C / 79516
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23.93401f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 3.441198f, 1.224381f, -0.807036f, 0.432583f, 63.79438f, 0.707775f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.004326f, 0.775918f, -0.031697f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_406(var uParam0, bool bParam1) //Position: 0x13720 / 79648
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23.93401f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 3.555627f, 1.221698f, -0.630054f, 0.402044f, 64.4856f, 0.715796f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.004326f, 0.787993f, -0.031697f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_407(int iParam0) //Position: 0x137A4 / 79780
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.88194f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -105.9294f, 119.7099f, 1408.374f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.030365f, 0.124689f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_408(int iParam0) //Position: 0x1380E / 79886
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.88194f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -106.1009f, 119.701f, 1408.689f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.030365f, 0.143723f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_409(int iParam0) //Position: 0x13878 / 79992
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.11528f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -115.8965f, 121.0091f, 1353.614f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.010622f, -2.178065f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_410(int iParam0) //Position: 0x138E2 / 80098
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.11528f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -116.4481f, 121.0018f, 1353.229f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.010622f, -2.178065f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_411(int iParam0) //Position: 0x1394C / 80204
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.9631f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -114.3837f, 120.9872f, 1367.108f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.01545f, 3.101486f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_412(int iParam0) //Position: 0x139B6 / 80310
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.9631f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -114.3751f, 120.9908f, 1366.876f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.01545f, 3.103958f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_413(int iParam0) //Position: 0x13A20 / 80416
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37.2252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -164.2681f, 131.4014f, 1294.022f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.020975f, -2.094627f, -0.015359f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_414(var uParam0) //Position: 0x13A8E / 80526
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 37.2252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -163.2467f, 131.4335f, 1292.188f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.020975f, -2.078669f, -0.015359f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

bool Function_415() //Position: 0x13AFC / 80636
{
	if (IS_ACTOR_VALID(bLocal_663))
	{
		Function_233(bLocal_663);
		STREAMING_LOAD_BOUNDS_EXT(0, Function_233(bLocal_663), 100.0f, 1);
	}
	if (IS_ACTOR_VALID(bLocal_664))
	{
		Function_233(bLocal_664);
		STREAMING_LOAD_BOUNDS_EXT(1, Function_233(bLocal_664), 100.0f, 1);
	}
	Function_420();
	Function_418();
	switch (iLocal_659)
	{
		case 0x00000000:
			Function_227(Global_34573, (*&Local_493 + 500)[3], 1, 1, 1);
			SET_ACTOR_IN_VEHICLE(bLocal_665, bLocal_663, false);
			SET_ACTOR_IN_VEHICLE(bLocal_666, bLocal_664, false);
			Function_417(bLocal_664, 0);
			HUD_FADE_IN(1.0f, 1065353216);
			AUDIO_MUSIC_PLAY_PREPARED();
			AUDIO_MUSIC_RELEASE_CONTROL(47000, 1);
			iLocal_659 = 6;
			break;
		
		case 0x00000006:
			Function_186((*&Local_493 + 320)[0]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186((*&Local_493 + 320)[0]), 100.0f, 1);
			if (Function_277(&Local_330 + 4) < 2.0f)
			{
				Function_395(bLocal_665, bLocal_663, (*&Local_493 + 320)[0], Local_493.f_632, 0, 4, 0x41000000, 1);
				Function_227(Global_34573, (*&Local_493 + 500)[5], 1, 1, 1);
				iLocal_659 = 7;
			}
			break;
		
		case 0x00000007:
			Function_186((*&Local_493 + 472)[0]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186((*&Local_493 + 472)[0]), 100.0f, 1);
			if (Function_277(&Local_330 + 4) < (8.0f - 1.5f) && !IS_OBJECT_VALID(bLocal_466))
			{
				bLocal_466 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_493, Function_135(), "env_lightningForked_stormy", -174.437f, 147.041f, 1709.752f);
				UNK_0x6745191B(bLocal_466, 0.0f, 0.0f, 0.0f);
			}
			if (Function_277(&Local_330 + 4) <= 6.0f && !bLocal_671)
			{
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE_CUTSCENE_INGAME_INTRO", &uLocal_672);
				bLocal_671 = true;
			}
			if (Function_277(&Local_330 + 4) < 8.0f)
			{
				Function_395(bLocal_666, bLocal_664, (*&Local_493 + 472)[0], Local_493.f_620, 0, 4, 0x41000000, 1);
				iLocal_670 = 0;
				iLocal_659 = 8;
			}
			break;
		
		case 0x00000008:
			Function_186((*&Local_493 + 320)[1]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186((*&Local_493 + 320)[1]), 100.0f, 1);
			if (Function_277(&Local_330 + 4) < (12.0f - 2.0f) && !iLocal_670)
			{
				iLocal_670 = 1;
				Function_227(Global_34573, (*&Local_493 + 500)[2], 1, 1, 1);
			}
			if (Function_277(&Local_330 + 4) < (12.0f - 0.5f) && !DECOR_CHECK_EXIST(bLocal_664, "bVisible"))
			{
				Function_417(bLocal_664, 1);
				DECOR_SET_BOOL(bLocal_664, "bVisible", true);
			}
			if (Function_277(&Local_330 + 4) < 12.0f)
			{
				Function_227(bLocal_663, (*&Local_493 + 320)[1], 0, 0, 0);
				TASK_STAND_STILL(bLocal_665, -1.0f, 0, 0);
				iLocal_659 = 9;
			}
			break;
		
		case 0x00000009:
			Function_186((*&Local_493 + 320)[1]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186((*&Local_493 + 320)[1]), 100.0f, 1);
			if (Function_277(&Local_330 + 4) < 12.5f)
			{
				Function_395(bLocal_665, bLocal_663, (*&Local_493 + 320)[1], Local_493.f_636, 0, 4, 0x41000000, 1);
				iLocal_659 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_186((*&Local_493 + 320)[1]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186((*&Local_493 + 320)[1]), 50.0f, 1);
			if (Function_277(&Local_330 + 4) < 16.0f)
			{
				Function_227(bLocal_664, (*&Local_493 + 472)[1], 1, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_666, 1);
				TASK_STAND_STILL(bLocal_666, -1.0f, 0, 0);
				Function_227(Global_34573, (*&Local_493 + 500)[1], 1, 1, 1);
				iLocal_659 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_186((*&Local_493 + 472)[1]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186((*&Local_493 + 472)[1]), 50.0f, 1);
			if (Function_277(&Local_330 + 4) < 22.0f)
			{
				Function_395(bLocal_666, bLocal_664, (*&Local_493 + 472)[1], Local_493.f_640, 0, 4, 0x41000000, 1);
				Function_227(Global_34573, (*&Local_493 + 500)[1], 1, 1, 1);
				iLocal_659 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_186((*&Local_493 + 472)[1]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186((*&Local_493 + 472)[1]), 50.0f, 1);
			if (Function_277(&Local_330 + 4) < 26.0f)
			{
				Function_227(Global_34573, (*&Local_493 + 500)[0], 1, 1, 1);
				Function_227(bLocal_663, (*&Local_493 + 320)[3], 1, 1, 1);
				TASK_STAND_STILL(bLocal_665, -1.0f, 0, 0);
				iLocal_659 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_186((*&Local_493 + 472)[3]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186((*&Local_493 + 472)[3]), 50.0f, 1);
			if (Function_277(&Local_330 + 4) < 31.0f)
			{
				Function_395(bLocal_665, bLocal_663, (*&Local_493 + 320)[3], Local_493.f_628, 0, 4, 0x41000000, 1);
				iLocal_659 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_186((*&Local_493 + 472)[2]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186((*&Local_493 + 472)[2]), 50.0f, 1);
			if (Function_277(&Local_330 + 4) < 34.0f)
			{
				Function_395(bLocal_666, bLocal_664, (*&Local_493 + 472)[2], Local_493.f_628, 1, 4, 0x41000000, 1);
				Function_416();
				TASK_GO_NEAR_OBJECT((*&Local_493 + 176)[02], Local_493.f_552, 2.0f, 2, 1, 1);
				TASK_PRIORITY_SET((*&Local_493 + 176)[02], 1);
				iLocal_659 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_277(&Local_330 + 4) < 40.0f)
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				if (bLocal_671)
				{
					DYNAMICMIXER_DETRIGGERSTATE(uLocal_672, 0);
				}
				iLocal_659 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_277(&Local_330 + 4) < 40.5f)
			{
				STREAMING_OVERRIDE_MAIN_POI(-163.9361f, 131.6873f, 1289.087f, -1.637f, -121.672f, -0.88f);
				TASK_STAND_STILL(bLocal_665, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_666, -1.0f, 0, 0);
				DESTROY_ACTOR((*&Local_493 + 176)[02]);
				STREAMING_UNLOAD_BOUNDS();
				return 1;
			}
			break;
	}
	return 0;
}

void Function_416() //Position: 0x140A4 / 82084
{
	Local_493.f_188 = CREATE_ACTORSET_IN_LAYOUT(Local_493, "CougarGroupset", 0);
	(*&Local_493 + 176)[02] = CREATE_ACTOR_IN_LAYOUT(Local_493, "CougarZombie", 1244, -128.6675f, 119.0184f, 1559.332f, 0.0f, 24.98631f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_493.f_188, (*&Local_493 + 176)[02]);
	return;
}

void Function_417(bool bParam0, bool bParam1) //Position: 0x1410E / 82190
{
	bool bVar0;
	bool bVar1;
	
	SET_DRAW_ACTOR(bParam0, bParam1);
	if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false)))
	{
		SET_DRAW_ACTOR(GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false), bParam1);
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bParam0))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_DRAW_ACTOR(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_418() //Position: 0x14160 / 82272
{
	switch (iLocal_661)
	{
		case 0x00000000:
			if (Function_277(&Local_330 + 4) < 7.25f)
			{
				Function_419("nZINTRO_01", -1.0f, 0, 2, 1, 0);
				iLocal_661 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_277(&Local_330 + 4) < 12.5f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_661 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_277(&Local_330 + 4) < 13.0f)
			{
				Function_419("nZINTRO_02", -1.0f, 0, 2, 1, 0);
				iLocal_661 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_277(&Local_330 + 4) < 18.0f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_661 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&Local_330 + 4) < 18.75f)
			{
				Function_419("nZINTRO_03", -1.0f, 0, 2, 1, 0);
				iLocal_661 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_277(&Local_330 + 4) < 22.5f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_661 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_277(&Local_330 + 4) < 23.0f)
			{
				Function_419("nZINTRO_04", -1.0f, 0, 2, 1, 0);
				iLocal_661 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_277(&Local_330 + 4) < 30.25f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_661 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_277(&Local_330 + 4) < 31.0f)
			{
				Function_419("nZINTRO_05", -1.0f, 0, 2, 1, 0);
				iLocal_661 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_277(&Local_330 + 4) < 34.0f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_661 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_277(&Local_330 + 4) < 36.25f)
			{
				Function_419("nZINTRO_06", -1.0f, 0, 2, 1, 0);
				iLocal_661 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_277(&Local_330 + 4) < 38.5f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_661 = 106;
			}
			break;
	}
	return;
}

void Function_419(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1436A / 82794
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

void Function_420() //Position: 0x143E1 / 82913
{
	switch (iLocal_660)
	{
		case 0x00000000:
			if (Function_277(&Local_330 + 4) < (2.0f + 0.5f))
			{
				Function_396(bLocal_663, 4, 8.0f, Local_493.f_632);
				iLocal_660 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_277(&Local_330 + 4) < (8.0f + 1.5f))
			{
				Function_396(bLocal_664, 4, 8.0f, Local_493.f_620);
				iLocal_660 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_277(&Local_330 + 4) < (12.5f + 0.5f))
			{
				Function_396(bLocal_663, 4, 8.0f, Local_493.f_636);
				iLocal_660 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_277(&Local_330 + 4) < (22.0f + 0.5f))
			{
				Function_396(bLocal_664, 4, 8.0f, Local_493.f_640);
				iLocal_660 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&Local_330 + 4) < (31.0f + 0.5f))
			{
				Function_396(bLocal_663, 4, 8.0f, Local_493.f_628);
				iLocal_660 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_277(&Local_330 + 4) < (34.0f + 0.5f))
			{
				Function_396(bLocal_664, 4, 8.0f, Local_493.f_628);
				iLocal_660 = 106;
			}
			break;
	}
	return;
}

var Function_421(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x14533 / 83251
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_135(), 31, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Zombie01_Intro", 31, 1);
	}
	Function_422(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_422(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x145B5 / 83381
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_453(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_452(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_451(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_450(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_449(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_448(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_447(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_446(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_445(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 9);
	Function_444(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 10);
	Function_443(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 11);
	Function_442(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 12);
	Function_441(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 13);
	Function_440(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 14);
	Function_439(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 15);
	Function_438(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 16);
	Function_437(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 17);
	Function_436(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 18);
	Function_435(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 19);
	Function_434(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 20);
	Function_433(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 21);
	Function_432(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 22);
	Function_431(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 23);
	Function_430(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 24);
	Function_429(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 25);
	Function_428(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 26);
	Function_427(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 27);
	Function_426(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 28);
	Function_425(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 29);
	Function_424(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 30);
	Function_423(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 0.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 2.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 2.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 4, 5, 2.5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 6, 7, 4.0f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 8, 1.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 9, 10, 2.0f, 6, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 11, 12, 4.0f, 7, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 13, 14, 1.0f, 8, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 15, 16, 3.0f, 9, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 17, 18, 2.0f, 10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 19, 1.0f, 11);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 20, 4.0f, 12);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 21, 22, 2.0f, 13, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 23, 24, 2.0f, 14, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 25, 26, 2.0f, 15, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 27, 28, 3.0f, 16, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 29, 30, 2.0f, 17, 0);
}

void Function_423(int iParam0) //Position: 0x148A9 / 84137
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 38.82442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -122.8229f, 126.9981f, 1534.267f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.825664f, 0.797489f, -0.063715f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_424(int iParam0) //Position: 0x14917 / 84247
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 38.82442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -122.8229f, 126.9981f, 1534.267f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.86559f, 0.782259f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_425(int iParam0) //Position: 0x14981 / 84353
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -136.7268f, 121.3001f, 1560.136f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.06306f, -0.268019f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_426(int iParam0) //Position: 0x149EB / 84459
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -137.6447f, 121.3469f, 1560.648f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.06306f, -0.268019f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_427(int iParam0) //Position: 0x14A55 / 84565
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -113.3634f, 119.2625f, 1432.468f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.068206f, 2.995783f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_428(int iParam0) //Position: 0x14ABF / 84671
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -113.2732f, 119.1296f, 1430.513f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.068206f, 2.995783f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_429(int iParam0) //Position: 0x14B29 / 84777
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.0299f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -382.7564f, 145.0078f, 1357.588f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.08349f, -1.06691f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_430(int iParam0) //Position: 0x14B93 / 84883
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.0299f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -382.2203f, 144.5053f, 1357.291f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.08349f, -1.06691f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_431(int iParam0) //Position: 0x14BFD / 84989
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 16.75354f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -355.0955f, 137.4087f, 1342.875f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.138792f, 2.222839f, 1E-06f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_432(int iParam0) //Position: 0x14C64 / 85092
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 16.75354f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -354.9489f, 137.3454f, 1342.296f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.138792f, 2.186475f, 1E-06f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_433(var uParam0, bool bParam1) //Position: 0x14CCB / 85195
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 28.07796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.275767f, 0.769731f, -7.145361f, 17.91685f, 175.8783f, 0.709837f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.348552f, -0.597201f, 0.006745f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_434(var uParam0, bool bParam1) //Position: 0x14D4F / 85327
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 21.00769f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.823505f, 0.420028f, -7.119478f, 4.706676f, -166.8265f, -0.114076f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.089357f, -0.385611f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_435(var uParam0, bool bParam1) //Position: 0x14DCF / 85455
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.308218f, 2.93f, -1.831971f, -10.25594f, -8.223491f, -1.760241f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.163453f, -1.321959f, -0.007228f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_436(var uParam0, bool bParam1) //Position: 0x14E53 / 85587
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.308218f, 2.93f, -1.831971f, -10.25594f, -8.223491f, -1.760241f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.163453f, -1.321959f, -0.007228f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_437(var uParam0, bool bParam1) //Position: 0x14ED7 / 85719
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.368544f, 2.505008f, -2.817437f, 14.85605f, 149.0269f, 1.704492f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.298626f, -1.071758f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_438(var uParam0, bool bParam1) //Position: 0x14F57 / 85847
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 17.53701f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.505638f, 2.434298f, -3.031056f, 12.50784f, 147.342f, 1.752277f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.2568f, -1.100172f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_439(var uParam0, bool bParam1) //Position: 0x14FD7 / 85975
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.083646f, 1.166111f, -2.727159f, -3.039999f, -138.4459f, -0.913295f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.031558f, 0.202027f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_440(var uParam0, bool bParam1) //Position: 0x15057 / 86103
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.560697f, 1.268597f, -7.660202f, -0.727198f, -135.1523f, -0.982107f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.007851f, 0.260145f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_441(int iParam0) //Position: 0x150D7 / 86231
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 27.93789f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -235.9659f, 132.1998f, 1317.964f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.092178f, -0.495739f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_442(int iParam0) //Position: 0x15141 / 86337
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 27.93789f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -236.3858f, 132.2711f, 1318.556f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.098692f, -0.475985f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_443(var uParam0, bool bParam1) //Position: 0x151AB / 86443
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.58285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4.458053f, 0.847403f, 1.857898f, -2.412897f, 106.1102f, 0.788906f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.036813f, -1.811551f, -0.011358f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_444(var uParam0, bool bParam1) //Position: 0x1522F / 86575
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.56265f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 3.451633f, 1.068114f, -6.565561f, -2.623803f, 114.6761f, 0.727656f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.04215f, -1.662401f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_445(var uParam0, bool bParam1) //Position: 0x152AF / 86703
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.92159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.072242f, 0.392939f, -6.686222f, -1.8789f, 163.3209f, 0.323893f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.020863f, -0.813795f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_446(int iParam0) //Position: 0x1532F / 86831
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.45504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -190.3892f, 139.4305f, 1705.412f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.274532f, -1.817516f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_447(int iParam0) //Position: 0x15399 / 86937
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46.45504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -190.975f, 139.5952f, 1704.511f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.215081f, -1.772147f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_448(int iParam0) //Position: 0x15403 / 87043
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.20287f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -271.5614f, 150.0491f, 1683.264f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.087707f, -1.729516f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_449(int iParam0) //Position: 0x1546D / 87149
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.1936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -274.3018f, 150.2933f, 1682.822f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.087707f, -1.729516f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_450(int iParam0) //Position: 0x154D7 / 87255
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.66177f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -204.3413f, 130.6037f, 1616.557f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.016896f, -0.358849f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_451(int iParam0) //Position: 0x15541 / 87361
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.66177f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -203.5676f, 130.5971f, 1617.211f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.016896f, -0.312649f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_452(int iParam0) //Position: 0x155AB / 87467
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47.97706f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 38.92046f, 120.3155f, 1315.316f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.008875f, 1.967088f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_453(var uParam0) //Position: 0x1560E / 87566
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 47.97706f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 39.12394f, 120.3175f, 1315.23f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.008875f, 1.967088f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_454() //Position: 0x15671 / 87665
{
	Local_493.f_148 = CREATE_ACTORSET_IN_LAYOUT(Local_493, "WagonGroup02set", 0);
	(*&Local_493 + 128)[02] = CREATE_ACTOR_IN_LAYOUT(Local_493, "PlayerClone02", 1282, -113.9555f, 119.3169f, 1719.207f, 11.7933f, -81.17902f, -9.700644f);
	ADD_ACTORSET_MEMBER(Local_493.f_148, (*&Local_493 + 128)[02]);
	(*&Local_493 + 128)[12] = Function_455(Local_493, "Wagon02", 1196, 976, -110.39f, 117.9389f, 1704.054f, 0.5489022f, 28.95583f, 0.02664249f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_493.f_148, (*&Local_493 + 128)[12]);
	return;
}

var Function_455(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x1573D / 87869
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
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
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_458(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_457(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_456(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
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

bool Function_456(int iParam0, int iParam1) //Position: 0x15971 / 88433
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

var Function_457(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x159A3 / 88483
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_458(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x159BB / 88507
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

void Function_459() //Position: 0x159E2 / 88546
{
	Local_493.f_124 = CREATE_ACTORSET_IN_LAYOUT(Local_493, "WagonGroup01set", 0);
	(*&Local_493 + 104)[02] = CREATE_ACTOR_IN_LAYOUT(Local_493, "PlayerClone01", 1282, -98.85898f, 118.1876f, 1736.197f, 0.0f, 8.498847f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_493.f_124, (*&Local_493 + 104)[02]);
	(*&Local_493 + 104)[12] = Function_455(Local_493, "Wagon01", 1196, 976, -98.72256f, 118.1979f, 1733.032f, 0.0f, 79.61429f, 0.0f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_493.f_124, (*&Local_493 + 104)[12]);
	return;
}

void Function_460() //Position: 0x15A9E / 88734
{
	var uVar0;
	
	Function_261(4, 1);
	uVar0 = uVar0;
	Local_493 = CREATE_LAYOUT("Zombie01Intro_layout");
	Local_493.f_192 = CREATE_OBJECTSET_IN_LAYOUT("WagonTeleports01Set", Local_493, 8, 0);
	*(&Local_493 + 196[06]) = { -98.71005f, 118.1972f, 1733.042f };
	*(&Local_493 + 196[06] + 12) = { 0.0f, 77.31985f, 0.0f };
	(*&Local_493 + 320)[0] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon01_Tele01", -98.71005f, 118.1972f, 1733.042f, 0.0f, 77.31985f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 320)[0], Local_493.f_192);
	*(&Local_493 + 196[16]) = { -251.5009f, 127.6625f, 1290.41f };
	*(&Local_493 + 196[16] + 12) = { 15.61252f, 281.9437f, -13.72014f };
	(*&Local_493 + 320)[1] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon01_Tele02", -251.5009f, 127.6625f, 1290.41f, 15.61252f, 281.9437f, -13.72014f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 320)[1], Local_493.f_192);
	*(&Local_493 + 196[26]) = { -111.7816f, 118.3498f, 1465.095f };
	*(&Local_493 + 196[26] + 12) = { 0.0f, 377.0617f, 0.0f };
	(*&Local_493 + 320)[2] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon01_Tele03", -111.7816f, 118.3498f, 1465.095f, 0.0f, 377.0617f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 320)[2], Local_493.f_192);
	*(&Local_493 + 196[36]) = { -112.687f, 118.3479f, 1461.432f };
	*(&Local_493 + 196[36] + 12) = { 0.0f, 369.9934f, 0.0f };
	(*&Local_493 + 320)[3] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon01_Tele04", -112.687f, 118.3479f, 1461.432f, 0.0f, 369.9934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 320)[3], Local_493.f_192);
	*(&Local_493 + 196[46]) = { -131.0294f, 118.2951f, 1507.086f };
	*(&Local_493 + 196[46] + 12) = { 0.0f, 356.8519f, 0.0f };
	(*&Local_493 + 320)[4] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon01_Tele05", -131.0294f, 118.2951f, 1507.086f, 0.0f, 356.8519f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 320)[4], Local_493.f_192);
	Local_493.f_344 = CREATE_OBJECTSET_IN_LAYOUT("WagonTeleports02Set", Local_493, 8, 0);
	*(&Local_493 + 348[06]) = { -110.4373f, 117.9379f, 1703.936f };
	*(&Local_493 + 348[06] + 12) = { 6.011225f, 37.78076f, 4.850446f };
	(*&Local_493 + 472)[0] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon02_Tele01", -110.4373f, 117.9379f, 1703.936f, 6.011225f, 37.78076f, 4.850446f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 472)[0], Local_493.f_344);
	*(&Local_493 + 348[16]) = { -420.8987f, 147.495f, 1375.022f };
	*(&Local_493 + 348[16] + 12) = { 0.7987052f, -65.66412f, -1.974732f };
	(*&Local_493 + 472)[1] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon02_Tele02", -420.8987f, 147.495f, 1375.022f, 0.7987052f, -65.66412f, -1.974732f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 472)[1], Local_493.f_344);
	*(&Local_493 + 348[26]) = { -116.5459f, 118.2126f, 1564.995f };
	*(&Local_493 + 348[26] + 12) = { 4.090935f, 17.71888f, 6.760347f };
	(*&Local_493 + 472)[2] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon02_Tele03", -116.5459f, 118.2126f, 1564.995f, 4.090935f, 17.71888f, 6.760347f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 472)[2], Local_493.f_344);
	*(&Local_493 + 348[36]) = { -110.3335f, 117.8137f, 1407.175f };
	*(&Local_493 + 348[36] + 12) = { 0.0f, 352.4897f, 0.0f };
	(*&Local_493 + 472)[3] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon02_Tele04", -110.3335f, 117.8137f, 1407.175f, 0.0f, 352.4897f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 472)[3], Local_493.f_344);
	*(&Local_493 + 348[46]) = { -105.0253f, 117.8754f, 1391.755f };
	*(&Local_493 + 348[46] + 12) = { 0.0f, 343.621f, 0.0f };
	(*&Local_493 + 472)[4] = CREATE_POINT_IN_LAYOUT(Local_493, "Wagon02_GotoEnd", -105.0253f, 117.8754f, 1391.755f, 0.0f, 343.621f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 472)[4], Local_493.f_344);
	Local_493.f_496 = CREATE_OBJECTSET_IN_LAYOUT("PlayerTeleportsSet", Local_493, 8, 0);
	(*&Local_493 + 500)[0] = CREATE_POINT_IN_LAYOUT(Local_493, "PlayerTeleport04", -104.1065f, 117.8353f, 1439.91f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 500)[0], Local_493.f_496);
	(*&Local_493 + 500)[1] = CREATE_POINT_IN_LAYOUT(Local_493, "PlayerTeleport03", -427.6012f, 147.9779f, 1368.519f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 500)[1], Local_493.f_496);
	(*&Local_493 + 500)[2] = CREATE_POINT_IN_LAYOUT(Local_493, "PlayerTeleport02", -239.7236f, 127.6356f, 1293.901f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 500)[2], Local_493.f_496);
	(*&Local_493 + 500)[3] = CREATE_POINT_IN_LAYOUT(Local_493, "PlayerTeleport01", -113.9654f, 119.3208f, 1719.233f, 0.0f, 23.08274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 500)[3], Local_493.f_496);
	(*&Local_493 + 500)[4] = CREATE_POINT_IN_LAYOUT(Local_493, "PlayerTeleport05", -124.0483f, 118.4134f, 1510.985f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 500)[4], Local_493.f_496);
	(*&Local_493 + 500)[5] = CREATE_POINT_IN_LAYOUT(Local_493, "PlayerTeleport06", -114.128f, 119.508f, 1719.822f, 0.0f, 23.08274f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_493 + 500)[5], Local_493.f_496);
	*(&Local_493 + 528) = { -141.2719f, 118.4627f, 1534.728f };
	*(&Local_493 + 528 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_493.f_552 = CREATE_POINT_IN_LAYOUT(Local_493, "CougarGoto", -141.2719f, 118.4627f, 1534.728f, 0.0f, 0.0f, 0.0f);
	*(&Local_493 + 556) = { 0.0f, 0.0f, 0.0f };
	*(&Local_493 + 556 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_493.f_580 = CREATE_POINT_IN_LAYOUT(Local_493, "nFindComfy", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_493 + 584) = { 0.0f, 0.0f, 0.0f };
	*(&Local_493 + 584 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_493.f_608 = CREATE_POINT_IN_LAYOUT(Local_493, "Flag1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_493.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_493, "sit_chair_couch", "sit_chair_couch", -103.375f, 119.5919f, 1363.564f, 0.0f, -213.6582f, 0.0f);
	Local_493.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_493, "sit_chair_comfy", "sit_chair_comfy", -104.8212f, 119.4998f, 1361.017f, 0.0f, 23.31212f, 0.0f);
}

struct<8> BëeD¯´ÂÖ~XBë]D®Ð%ÂÊ8BëRîD®]-,GLíD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193) //Position: 0x164FF / 91391
{
	stradd(StackVal, StackVal, 77);
}

int Function_462() //Position: 0x16822 / 92194
{
	Function_271(&Local_493 + 4, 1282, 2, 0);
	Function_271(&Local_493 + 4, 1196, 2, 0);
	Function_271(&Local_493 + 4, 976, 2, 0);
	Function_271(&Local_493 + 4, 638, 2, 0);
	Function_271(&Local_493 + 4, 698, 2, 0);
	Function_271(&Local_493 + 4, 1244, 2, 0);
	Function_269(&Local_493 + 4, "$/content/scripting/gringo/simplegringo/sit_chair_couch", 1, 0);
	Function_269(&Local_493 + 4, "$/content/scripting/gringo/simplegringo/sit_chair_comfy", 1, 0);
	if (Function_262(&Local_493 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_463(int iParam0, int iParam1) //Position: 0x16914 / 92436
{
	Function_127(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_378(StackVal, iParam1);
	}
	return;
}

int Function_464(bool bParam0, bool bParam1) //Position: 0x16945 / 92485
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_161(bParam0), Function_56()) >= 0)
		{
			DELETE_ITEM(Function_161(bParam0), Function_56(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_161(bParam0), Function_56(), 1);
	return 1;
}

bool Function_465() //Position: 0x1698C / 92556
{
	return Global_30920;
}

void Function_466() //Position: 0x16995 / 92565
{
	Function_269(&bLocal_201, "dead_ground_male", 5, 0);
	Function_269(&bLocal_201, "custom/dead_ground_male", 8, 0);
	Function_269(&bLocal_201, "z_dlc_z_roar", 5, 0);
	Function_269(&bLocal_201, "custom/z_dlc_z_roar", 8, 0);
	Function_269(&bLocal_201, "rfl_brk", 5, 0);
	Function_269(&bLocal_201, "DLC_uncle_roar", 5, 0);
	Function_269(&bLocal_201, "DLC_outbreak_dead", 5, 0);
	Function_269(&bLocal_201, "custom/DLC_outbreak_dead", 8, 0);
	Function_269(&bLocal_201, "wringhands_no_cry", 1, 0);
	Function_269(&bLocal_201, "DLC_Outbreak3", 1, 0);
	Function_269(&bLocal_201, "shotgun_doubleBarrel01x", 0, 0);
	Function_271(&bLocal_201, 1232, 3, 0);
	Function_271(&bLocal_201, 1230, 3, 0);
	Function_271(&bLocal_201, 1204, 3, 0);
	Function_271(&bLocal_201, 21, 3, 0);
	Function_271(&bLocal_201, 10, 3, 0);
	Function_271(&bLocal_201, 16, 3, 0);
	Function_269(&bLocal_201, "dlc_zombiepack_zombie01", 10, 0);
	Function_269(&bLocal_262, "dlc_zombiepack_zombie01_intro", 10, 0);
	return;
}

void Function_467(int iParam0) //Position: 0x16B5C / 93020
{
	Function_468(&Global_28842, iParam0);
	return;
}

void Function_468(var uParam0, int iParam1) //Position: 0x16B6A / 93034
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_469(int iParam0, bool bParam1) //Position: 0x16B8D / 93069
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_475(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_234(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		Function_98();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_15(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_234(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_172();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_191();
	Function_283();
	Function_180("");
	Function_474(0);
	Function_473();
	Function_165();
	Function_164();
	ENABLE_JOURNAL_REPLAY(0);
	Function_472();
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_367(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_300(0, 0x40400000);
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
	SET_ACTOR_FACTION(Global_34573, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_471(13);
	Function_471(14);
	Function_471(25);
	Function_471(24);
	Function_471(12);
	Function_471(27);
	Function_471(26);
	Function_471(15);
	Function_470();
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

void Function_470() //Position: 0x16FC5 / 94149
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

void Function_471(int iParam0) //Position: 0x17039 / 94265
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_472() //Position: 0x17059 / 94297
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

void Function_473() //Position: 0x17096 / 94358
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_474(int iParam0) //Position: 0x170AA / 94378
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_168())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_475(int iParam0, int iParam1) //Position: 0x170DF / 94431
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
			Function_476(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_476(int iParam0) //Position: 0x17161 / 94561
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

void Function_477() //Position: 0x171AF / 94639
{
	return;
}

bool Function_478(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x171B5 / 94645
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
		Function_498(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_497(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_496(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_496(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_482(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_498(iParam2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_481(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_480(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_481(&bVar17);
														strcpy(&Var18, "", 64);
														Function_479(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_180(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_480(StackVal, iParam2, bVar17);
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
	Function_498(iParam2, 0);
	return 0;
}

void Function_479(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1754E / 95566
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

void Function_480(var uParam0, int iParam1, bool bParam2) //Position: 0x17639 / 95801
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
			Function_48(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_48(&bParam2, 2);
			break;
	}
	Function_48(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_481(bool bParam0) //Position: 0x176AF / 95919
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_48(&iVar0, 1);
	Function_48(&iVar0, 2);
	Function_48(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_482(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x176D1 / 95953
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
			return Function_493(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_486(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_493(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_483(iParam0, bVar2);
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
						bVar2 = Function_493(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_483(iParam0, bVar2);
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

var Function_483(int iParam0, bool bParam1) //Position: 0x1781B / 96283
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_485(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_484(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_485(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_484(256);
			}
		}
	}
	return bParam1;
}

bool Function_484(int iParam0) //Position: 0x1794E / 96590
{
	return 2 | iParam0;
}

int Function_485(int iParam0) //Position: 0x17958 / 96600
{
	return 4 | iParam0;
}

int Function_486(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x17962 / 96610
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
				iParam3 = Function_492(iParam0, iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_129(&iParam3, 2);
					Function_48(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_484(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_487(iParam0, iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_129(&iParam3, 2);
					Function_48(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_484(16);
		}
	}
	return 0;
}

int Function_487(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x17A14 / 96788
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_491(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_490(iVar0, 3, 1, bParam3))
			{
				if (!Function_496(iParam0, 8, 1))
				{
					return Function_489(64, 1024, bParam2);
				}
			}
			return Function_488(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_490(iVar0, 2, 1, bParam3))
			{
				if (!Function_496(iParam0, 32, 1))
				{
					return Function_489(64, 1024, bParam2);
				}
			}
			return Function_488(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_490(iVar0, 1, 1, bParam3))
			{
				if (!Function_496(iParam0, 64, 1))
				{
					return Function_489(64, 1024, bParam2);
				}
			}
			return Function_488(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_490(iVar0, 3, 1, bParam3))
			{
				if (!Function_496(iParam0, 128, 1))
				{
					return Function_489(64, 1024, bParam2);
				}
			}
			return Function_488(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_490(iVar0, 1, 1, bParam3))
			{
				if (!Function_496(iParam0, 1024, 1))
				{
					return Function_489(64, 1024, bParam2);
				}
			}
			return Function_488(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_490(iVar0, 1, 1, bParam3))
			{
				if (!Function_496(iParam0, 1024, 1))
				{
					return Function_489(64, 1024, bParam2);
				}
			}
			return Function_488(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_488(int iParam0, int iParam1, bool bParam2) //Position: 0x17BCE / 97230
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_489(int iParam0, int iParam1, bool bParam2) //Position: 0x17BE3 / 97251
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_490(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x17BF8 / 97272
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_491(int iParam0) //Position: 0x17C15 / 97301
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

int Function_492(var uParam0, int iParam1, bool bParam2) //Position: 0x17C84 / 97412
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_491(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_490(iVar0, 3, 1, bParam2))
			{
				if (!Function_496(uParam0, 8, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000009:
			if (Function_490(iVar0, 3, 1, bParam2))
			{
				if (!Function_496(uParam0, 8, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x0000006E:
			if (Function_490(iVar0, 2, 1, bParam2))
			{
				if (!Function_496(uParam0, 16, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x0000005B:
			if (Function_490(iVar0, 2, 1, bParam2))
			{
				if (!Function_496(uParam0, 32, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000031:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(uParam0, 64, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000007:
			if (Function_490(iVar0, 3, 1, bParam2))
			{
				if (!Function_496(uParam0, 128, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000008:
			if (Function_490(iVar0, 2, 1, bParam2))
			{
				if (!Function_496(uParam0, 256, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000014:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(uParam0, 512, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000018:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(uParam0, 512, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000057:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(uParam0, 1024, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000058:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(uParam0, 1024, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_493(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x17E9F / 97951
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
						return Function_492(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_496(iParam0, 2, 1))
					{
						return Function_485(8);
					}
					return Function_484(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_496(iParam0, 4, 1))
					{
						return Function_485(16);
					}
					return Function_484(16);
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
							return Function_487(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_496(iParam0, 2, 1))
						{
							return Function_485(128);
						}
						return Function_484(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_496(iParam0, 4, 1))
						{
							return Function_485(256);
						}
						return Function_484(256);
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
						return Function_487(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_496(iParam0, 2, 1))
					{
						return Function_485(8);
					}
					return Function_484(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_496(iParam0, 4, 1))
					{
						return Function_485(16);
					}
					return Function_484(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_495(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_496(iParam0, 2, 1))
					{
						return Function_485(8);
					}
					return Function_484(8);
				}
				if (!Function_496(iParam0, 4, 1))
				{
					return Function_485(16);
				}
				return Function_484(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_487(iParam0, uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_129(&iParam4, 2);
								Function_48(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_494(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_484(128);
							}
							if (!Function_496(iParam0, 2, 1))
							{
								return Function_485(8);
							}
							return Function_484(8);
						}
						if (iParam4 == 2)
						{
							if (Function_494(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_484(256);
							}
							if (!Function_496(iParam0, 4, 1))
							{
								return Function_485(16);
							}
							return Function_484(16);
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

bool Function_494(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1815F / 98655
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

int Function_495(int iParam0, var uParam1, bool bParam2) //Position: 0x18218 / 98840
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_491(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_490(iVar0, 2, 1, bParam2))
			{
				if (!Function_496(iParam0, 16, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x0000005B:
			if (Function_490(iVar0, 2, 1, bParam2))
			{
				if (!Function_496(iParam0, 32, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000057:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(iParam0, 1024, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		case 0x00000058:
			if (Function_490(iVar0, 1, 1, bParam2))
			{
				if (!Function_496(iParam0, 1024, 1))
				{
					return Function_485(64);
				}
			}
			return Function_484(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_496(int iParam0, bool bParam1, bool bParam2) //Position: 0x1832C / 99116
{
	if (bParam2)
	{
		if (!Function_14(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(iParam0->f_40, bParam1);
}

int Function_497(int iParam0) //Position: 0x18354 / 99156
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_135());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_135());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_498(int iParam0, bool bParam1) //Position: 0x18385 / 99205
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

void Function_499(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x183A9 / 99241
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_46())
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

void Function_500(int iParam0) //Position: 0x183E7 / 99303
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

