//Decompiled with MagicRDR v1.0
//Function Count : 230
//Statics Count : 537
//Natives Count : 396
//Parameters Count : 10

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0.0f;
	float fLocal_5 = 0.0f;
	float fLocal_6 = 0.0f;
	float fLocal_7 = 0.0f;
	float fLocal_8 = 0.0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0.0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 5;
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
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	float fLocal_103 = 0.0f;
	float fLocal_104 = 0.0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 2;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<329> Local_125 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	int iLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	int iLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	int iLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	vector3 vLocal_488 = { 0.0f, 0.0f, 0.0f };
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar1;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	iLocal_3 = 0;
	fLocal_4 = 12.0f;
	fLocal_5 = 16.0f;
	fLocal_6 = 26.0f;
	fLocal_7 = 30.0f;
	fLocal_8 = 1.0f;
	bLocal_14 = RAND_FLOAT_RANGE(3.0f, 8.0f);
	iLocal_15 = 1;
	iLocal_16 = 0;
	iLocal_31 = 0;
	iLocal_32 = 0;
	iLocal_40 = 0;
	fLocal_41 = 0.0f;
	iLocal_67 = 0;
	iLocal_68 = 0;
	fLocal_103 = 0,5f;
	fLocal_104 = 0.0f;
	iLocal_119 = 0;
	bLocal_120 = false;
	iLocal_388 = 0;
	iLocal_389 = 0;
	iLocal_390 = 0;
	bLocal_391 = false;
	iLocal_392 = 0;
	bLocal_393 = false;
	iLocal_394 = 0;
	bLocal_395 = false;
	bLocal_396 = false;
	iLocal_397 = 0;
	iLocal_524 = 0;
	iLocal_525 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_475 = 1;
	bVar1 = false;
	Function_229(&iLocal_453, 976, 2, 0);
	Function_229(&iLocal_453, 113, 2, 0);
	Function_229(&iLocal_453, 646, 2, 0);
	if (!bVar1)
	{
		bLocal_452 = Function_224(StackVal, 2, 6);
		Function_223(bLocal_452, 1);
		bVar1 = true;
	}
	Function_222(28);
	Function_218(StackVal, 0, 10);
	while (!Function_213(&iLocal_112) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	STREAMING_LOAD_BOUNDS(Global_34574, 150.0f, 1);
	while (!IS_EXITFLAG_SET() && !iLocal_394)
	{
		if (bVar1)
		{
			Function_185(bLocal_452);
			if (!Function_184(bLocal_452) != 2)
			{
				if (bLocal_120)
				{
					iLocal_475 = 11;
					bLocal_391 = false;
				}
				else
				{
					iLocal_475 = 10;
					bLocal_391 = true;
				}
			}
		}
		if (iLocal_475 == 11 && iLocal_475 == 10)
		{
			Function_93(&ScriptParam_0);
		}
		else
		{
			iLocal_394 = 1;
		}
		WAIT(false);
	}
	if (StackVal == Global_30640[1])
	{
		Function_85(&Global_6364, &Global_7287, 0, 0);
	}
	else if (StackVal == Global_30693[0])
	{
		Function_85(&Global_6815, &Global_7954, 3, 0);
	}
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	if (IS_BLIP_VALID(bLocal_434))
	{
		REMOVE_BLIP(bLocal_434);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "HB_Fail_Attack"))
	{
		DECOR_REMOVE(Global_34573, "HB_Fail_Attack");
	}
	if (IS_LAYOUTREF_VALID(bLocal_435))
	{
		RELEASE_LAYOUT_REF(bLocal_435);
	}
	if (IS_LAYOUTREF_VALID(bLocal_436))
	{
		RELEASE_LAYOUT_REF(bLocal_436);
	}
	if (IS_ACTOR_VALID(bLocal_433))
	{
		RELEASE_ACTOR(bLocal_433);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_438);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_438);
	Function_84();
	Function_83();
	Function_82();
	Function_81();
	Function_80();
	Function_76(&iLocal_453);
	if (!iLocal_392)
	{
		Function_75(bLocal_452);
	}
	else if (bLocal_391)
	{
		if (Global_3382 || Global_3380)
		{
			Function_17(bLocal_452, 1, 1, 0);
		}
		else
		{
			Function_17(bLocal_452, 1, 1, 0);
		}
	}
	else
	{
		Global_13172[bLocal_45211].f_36 = GET_TIME_OF_DAY();
		Function_10(bLocal_452);
	}
	if (Function_7(bLocal_452))
	{
		Function_75(bLocal_452);
	}
	Function_5(28);
	iLocal_392 = 0;
	Function_1(0, !IS_GAME_RESETTING());
	TASK_SEQUENCE_RELEASE(bLocal_431, 1);
	if (IS_OBJECT_VALID(bLocal_450))
	{
		DESTROY_OBJECT(bLocal_450);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0x2CC / 716
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	RESET_FACTIONS();
	if (bParam0)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	Function_4();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	Function_3();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	if (bParam1)
	{
		Function_2(1.0f);
	}
	Function_76(&iLocal_112);
	Function_5(8192);
	return;
}

void Function_2(bool bParam0) //Position: 0x331 / 817
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

void Function_3() //Position: 0x34E / 846
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_4() //Position: 0x363 / 867
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_5(bool bParam0) //Position: 0x377 / 887
{
	if (Function_6(bParam0, 1) && !Function_6(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_6(bool bParam0, int iParam1) //Position: 0x3A4 / 932
{
	return (bParam0 && iParam1) == 0;
}

bool Function_7(bool bParam0) //Position: 0x3B1 / 945
{
	if (!Function_9(bParam0))
	{
		return 0;
	}
	if (!Function_8(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_8(int iParam0) //Position: 0x3D5 / 981
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x3EA / 1002
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_10(bool bParam0) //Position: 0x401 / 1025
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_7(bParam0))
	{
		return;
	}
	iVar0 = Function_16(bParam0);
	if (StackVal == 2)
	{
		Function_13("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_11(int iParam0) //Position: 0x4A7 / 1191
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_12(char* cParam0) //Position: 0x4D1 / 1233
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

void Function_13(char* cParam0, bool bParam1) //Position: 0x727 / 1831
{
	struct<4> Var0;
	
	if (!Function_7(bParam1))
	{
		return;
	}
	switch (Function_16(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_14(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_16(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_16(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_14(int iParam0) //Position: 0x84B / 2123
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_15(bool bParam0) //Position: 0x870 / 2160
{
	if (!Function_9(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_16(bool bParam0) //Position: 0x890 / 2192
{
	if (!Function_9(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_17(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8AB / 2219
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_7(bParam0))
	{
		Function_73();
		return;
	}
	iVar0 = Function_16(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_67();
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
		Function_13("DEED_COMPLETE", bParam0);
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
			Function_61(bParam0);
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
			Function_21(1);
			Function_19(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_18(bParam0, &Var14);
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

void Function_18(int iParam0, int iParam1) //Position: 0xABD / 2749
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0xAF7 / 2807
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_20())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_20() //Position: 0xB39 / 2873
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(bool bParam0) //Position: 0xB42 / 2882
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_53();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_23();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_22(&Global_63095, 1);
		Function_22(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_22(int iParam0, int iParam1) //Position: 0xB93 / 2963
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_23() //Position: 0xBA6 / 2982
{
	Function_51();
	Function_50();
	Function_50();
	Function_49();
	Function_49();
	Function_48();
	Function_48();
	Function_31();
	Function_31();
	if (!Function_20())
	{
		Function_28();
		Function_27();
		Function_26();
		Function_25();
	}
	Function_24();
	return;
}

void Function_24() //Position: 0xBD9 / 3033
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

void Function_25() //Position: 0xCDF / 3295
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

void Function_26() //Position: 0xD12 / 3346
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

void Function_27() //Position: 0xEA0 / 3744
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

void Function_28() //Position: 0x1054 / 4180
{
	Function_29(&Global_28260, 1, 0);
	return;
}

void Function_29(int iParam0, bool bParam1, var uParam2) //Position: 0x1062 / 4194
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
	void fVar13;
	
	bVar0 = Function_30();
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

var Function_30() //Position: 0x1253 / 4691
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_31() //Position: 0x1268 / 4712
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
				iVar2 = ((Function_47((50 + iVar4)) + Function_47((183 + iVar4))) + Function_47((90 + iVar4)));
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
	Function_32(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x1303 / 4867
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
		Function_46(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_45(iParam0);
	if (bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x159E / 5534
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_44(390))), 32);
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
					bVar19 = (Function_43(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_43(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_38(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_34(), &Var9);
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

var Function_34() //Position: 0x1BCB / 7115
{
	int iVar0;
	
	return iVar0;
}

var Function_35(int iParam0) //Position: 0x1BD3 / 7123
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1BE4 / 7140
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0, char* cParam1) //Position: 0x1CD9 / 7385
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1CF2 / 7410
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_40(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1D57 / 7511
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1D69 / 7529
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1D7B / 7547
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x1EAB / 7851
{
	return Global_35278[iParam020].f_48;
}

float Function_43(int iParam0) //Position: 0x1EBA / 7866
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_44(int iParam0) //Position: 0x1EF3 / 7923
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_45(int iParam0) //Position: 0x1F30 / 7984
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

int Function_46(int iParam0, bool bParam1, bool bParam2) //Position: 0x20CA / 8394
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

int Function_47(bool bParam0) //Position: 0x22E4 / 8932
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_48() //Position: 0x2325 / 8997
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
		iVar2 = ((Function_47((50 + iVar3) + 15) + Function_47((183 + iVar3) + 15)) + Function_47((90 + iVar3) + 15));
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
	Function_32(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_49() //Position: 0x23AE / 9134
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
			iVar2 = ((Function_47((50 + iVar3) + 8) + Function_47((183 + iVar3) + 8)) + Function_47((90 + iVar3) + 8));
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
	Function_32(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_50() //Position: 0x2445 / 9285
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
		iVar2 = ((Function_47((50 + iVar3)) + Function_47((183 + iVar3))) + Function_47((90 + iVar3)));
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
	Function_32(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_51() //Position: 0x24C4 / 9412
{
	Function_52(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_32(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_52(int iParam0, bool bParam1, int iParam2) //Position: 0x24EA / 9450
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
	Function_46(iParam0, bParam1, 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_33(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_53() //Position: 0x26F4 / 9972
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_55(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_55(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_54(StackVal, StackVal, vVar0))
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

bool Function_54(vector3 vParam0) //Position: 0x2795 / 10133
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_55(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x27AD / 10157
{
	int iVar0;
	
	iVar0 = Function_59(uParam2, uParam3);
	if (Function_58(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_57(&Global_63095, 1);
			Function_22(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_57(&Global_63095, 2);
			Function_22(&Global_63095, 1);
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
		Function_57(&Global_63095, 2);
		Function_22(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_56();
	return StackVal, StackVal, Function_56();
}

vector3 Function_56() //Position: 0x2894 / 10388
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_57(var uParam0, int iParam1) //Position: 0x289D / 10397
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_58(int iParam0) //Position: 0x28AC / 10412
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_59(bool bParam0, bool bParam1) //Position: 0x28C2 / 10434
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
				fVar2 = Function_60(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_60(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_58(bVar0) && !bParam1)
	{
		bVar0 = Function_59(bParam0, 1);
	}
	return bVar0;
}

float Function_60(vector3 vParam0, vector3 vParam3) //Position: 0x2989 / 10633
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_61(bool bParam0) //Position: 0x29A6 / 10662
{
	int iVar0;
	int iVar1;
	
	if (!Function_9(bParam0))
	{
		return;
	}
	switch (Function_16(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_66(12, 1, 0, 0);
				Function_65(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_66(13, 1, 0, 0);
				Function_65(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_66(14, 1, 0, 0);
				Function_65(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_66(15, 1, 0, 0);
				Function_65(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_66(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_64(bParam0) == 1)
					{
						iVar0 = Function_63(bParam0);
						if (Function_62(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_65(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_65(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_65(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_65(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_65(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_65(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_65(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_65(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_65(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_65(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_65(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_65(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_65(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_65(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_65(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_65(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_65(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_65(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_65(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_65(4, 19);
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
								Function_66(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_66(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_66(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_63(bParam0) == 0)
			{
				if (Function_64(bParam0) == 1)
				{
					Function_66(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_62(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_65(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_65(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_65(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_65(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_65(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_65(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_65(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_65(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_64(bParam0) == 1)
			{
				Function_66(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_66(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_65(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_65(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_65(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_66(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_65(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_65(6, 9);
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

bool Function_62(int iParam0) //Position: 0x2E82 / 11906
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_63(bool bParam0) //Position: 0x2E98 / 11928
{
	if (!Function_9(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_64(bool bParam0) //Position: 0x2EB7 / 11959
{
	if (!Function_9(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_65(int iParam0, bool bParam1) //Position: 0x2ED1 / 11985
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

int Function_66(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2F38 / 12088
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
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_67() //Position: 0x3158 / 12632
{
	int iVar0;
	int iVar1;
	
	if (!Function_72(Global_6269))
	{
		return;
	}
	iVar0 = Function_47(24);
	iVar1 = Function_71(Global_6269);
	if (!Function_72(iVar0) && Function_70(iVar1) < 0)
	{
		Function_32(24, Global_6269, 0);
		Function_68(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_70(Function_71(iVar0)))
	{
		Function_32(24, Global_6269, 0);
		Function_68(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_68(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x31D8 / 12760
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
		Function_69(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_69(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x352A / 13610
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

int Function_70(int iParam0) //Position: 0x35AD / 13741
{
	if (!Function_7(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_71(int iParam0) //Position: 0x35C7 / 13767
{
	if (!Function_72(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_72(int iParam0) //Position: 0x35E1 / 13793
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_73() //Position: 0x35F7 / 13815
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
			Function_74(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_74(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x383E / 14398
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_75(bool bParam0) //Position: 0x3867 / 14439
{
	int iVar0;
	
	if (!Function_7(bParam0))
	{
		Function_73();
		return;
	}
	iVar0 = Function_16(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_13("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_76(int iParam0) //Position: 0x38BA / 14522
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_77(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_77(var uParam0, int iParam1) //Position: 0x38E0 / 14560
{
	if (Function_79(uParam0[iParam13], 4))
	{
		if (Function_79(uParam0[iParam13], 1))
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
			Function_78(uParam0[iParam13], 1);
			Function_78(uParam0[iParam13], 2);
			Function_78(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x3A0E / 14862
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_79(int iParam0, int iParam1) //Position: 0x3A28 / 14888
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_80() //Position: 0x3A45 / 14917
{
	RELEASE_LAYOUT_REF(Local_298);
	return;
}

void Function_81() //Position: 0x3A51 / 14929
{
	RELEASE_LAYOUT_REF(Local_208);
	return;
}

void Function_82() //Position: 0x3A5C / 14940
{
	RELEASE_LAYOUT_REF(Local_125);
	return;
}

void Function_83() //Position: 0x3A67 / 14951
{
	if (IS_OBJECTSET_VALID(bLocal_437))
	{
		DESTROY_OBJECTSET(bLocal_437);
	}
	return;
}

void Function_84() //Position: 0x3A7C / 14972
{
	DESTROY_CAMERA(bLocal_121);
	return;
}

void Function_85(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3A87 / 14983
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_92(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_92(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_92(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_91(uParam0[iVar02], 8);
	}
	Function_91(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_90(StackVal);
	if (bParam3)
	{
		Function_86(uParam0, uParam1, iParam2, 0);
	}
}

void Function_86(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3B21 / 15137
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_89(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_88(Global_29007), Function_87(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_92(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_92(uParam0[iParam22], 1) && !bParam3)
	{
		Function_89(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_88(Global_29007), Function_87(Global_29007), false, 0);
	}
}

int Function_87(int iParam0) //Position: 0x3C70 / 15472
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

int Function_88(int iParam0) //Position: 0x3C9B / 15515
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

void Function_89(var uParam0, int iParam1) //Position: 0x3CCF / 15567
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_90(bool bParam0) //Position: 0x3CDE / 15582
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

void Function_91(var uParam0, int iParam1) //Position: 0x3D78 / 15736
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_92(var uParam0, int iParam1) //Position: 0x3D8F / 15759
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_93(int iParam0) //Position: 0x3DAB / 15787
{
	bool bVar0;
	var uVar1;
	int iVar5;
	bool bVar6;
	
	switch (iLocal_525)
	{
		case 0x00000000:
			if (Function_213(&iLocal_453))
			{
				if (!IS_LAYOUTREF_VALID(bLocal_436))
				{
					Function_171();
				}
				memcpy(&uVar1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_169("hb_horse"), 4);
				Function_167(bLocal_436, "f_horsestart");
				vLocal_398 = { StackVal, StackVal, Function_167(bLocal_436, "f_horsestart") };
				Function_167(bLocal_436, "f_helperstart");
				vLocal_401 = { StackVal, StackVal, Function_167(bLocal_436, "f_helperstart") };
				if (!IS_LAYOUTREF_VALID(bLocal_435))
				{
					bLocal_435 = CREATE_LAYOUT("RidingLayout");
				}
				if (!IS_ACTOR_VALID(bLocal_433))
				{
					bLocal_433 = CREATE_ACTOR_IN_LAYOUT(bLocal_435, &uVar1, 976, vLocal_398, 0.0f, 0.0f, 0.0f);
					DECOR_SET_BOOL(bLocal_433, "break", true);
					REFERENCE_ACTOR(bLocal_433);
					SET_ACTOR_MIN_SPEED(bLocal_433, 1);
					SET_ACTOR_MAX_SPEED(bLocal_433, 2);
					SET_ACTOR_RIDEABLE(bLocal_433, 0);
					Function_166();
					bLocal_431 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, bLocal_449, 2, 1, 0, 1, false);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_433, bLocal_431, 4294967295);
					TASK_PRIORITY_SET(bLocal_433, true);
					SET_ACTOR_UPDATE_PRIORITY(bLocal_433, false);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_433, true);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_433, 11, false);
				}
				if (Function_165(bLocal_433, 1, 0x41700000))
				{
					Function_161();
					Function_160();
					iLocal_525 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0))
			{
				if (Function_155(iParam0->f_12))
				{
					Function_154();
					ENABLE_AMBIENT_SPAWNING(false);
					AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
					if (!iLocal_390)
					{
						Function_167(bLocal_436, "f_playerstart");
						vLocal_404 = { StackVal, StackVal, Function_167(bLocal_436, "f_playerstart") };
						Function_167(bLocal_436, "f_stableplayerpos");
						vLocal_425 = { StackVal, StackVal, Function_167(bLocal_436, "f_stableplayerpos") };
						Function_167(bLocal_436, "f_helperstablepos");
						vLocal_428 = { StackVal, StackVal, Function_167(bLocal_436, "f_helperstablepos") };
						if (Function_54(StackVal, StackVal, vLocal_398))
						{
						}
						else
						{
							iLocal_390 = 1;
						}
					}
					else
					{
						DESTROY_GC_OBJECTS(1, 1);
						iLocal_525 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_438);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_438);
			CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_438, 15);
			memcpy(&uVar1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_169("hb_rancher"), 4);
			if (!IS_ACTOR_VALID(bLocal_432))
			{
				Function_152(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_392 = 0;
				iLocal_394 = 1;
				bLocal_391 = false;
			}
			TELEPORT_ACTOR_WITH_HEADING(bLocal_432, vLocal_401, 0.0f, 1, true, 1);
			TASK_PRIORITY_SET(bLocal_432, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_432, true);
			TASK_STAND_STILL(bLocal_432, -1.0f, 0, 0);
			TELEPORT_ACTOR(Global_34573, &vLocal_404, 1, 1, 1);
			SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bLocal_432), 1.0f, false, 1092616192);
			DECOR_SET_INT(Global_34573, "HorseBreak", 4294967295);
			Function_148(bLocal_432, Global_34573);
			Function_148(Global_34573, bLocal_432);
			bLocal_440 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_435, "friendlySqd"));
			SQUAD_JOIN(bLocal_432, bLocal_440);
			SQUAD_JOIN(Global_34573, bLocal_440);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
			iLocal_525 = 4;
			break;
		
		case 0x00000003:
			iLocal_525 = 4;
			break;
		
		case 0x00000004:
			Function_147(StackVal);
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_144())
			{
				REMOVE_CAMERA_FROM_CHANNEL(bLocal_450, 0);
				REMOVE_CAMERA_FROM_CHANNEL(bLocal_451, 0);
				iLocal_525 = 5;
			}
			break;
		
		case 0x00000005:
			Function_152(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			Function_143("JOB_HORSE_HopFence", 3.0f, 1, 2, 0, 0, 0);
			SAY_SINGLE_LINE_CONTEXT(bLocal_432, 192, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_392 = 1;
			iLocal_525 = 6;
			break;
		
		case 0x00000006:
			if (!bLocal_393)
			{
				if (!IS_BLIP_VALID(bLocal_434))
				{
					bLocal_434 = ADD_BLIP_FOR_ACTOR(bLocal_433, 325, 0, 2, 0);
				}
				if (!IS_WEAPON_DRAWN(Global_34573))
				{
					if (!Function_142(&iLocal_482))
					{
						Function_140(&iLocal_482);
					}
					if (!ACTOR_HAS_WEAPON_IN_HAND(Global_34573, 21))
					{
						if (Function_138(&iLocal_482, 10.0f))
						{
							if (Function_137(Global_34573, bLocal_437))
							{
								if (!iLocal_526)
								{
									Function_136("JOB_HORSE_LassoHint", 0x41200000, 1, 0, 2, 1, 0);
									iLocal_526 = 1;
								}
								SAY_SINGLE_LINE_CONTEXT(bLocal_432, 193, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
							}
						}
					}
				}
				if (GET_LASSO_TARGET(Global_34573) == bLocal_433)
				{
					Function_140(&iLocal_479);
					if (!IS_ACTOR_RIDEABLE(bLocal_433))
					{
						SET_ACTOR_RIDEABLE(bLocal_433, 1);
					}
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_HBREAK_LASSOED_HORSE_APPROACHING_TO_BREAK", false, false, 0, 0, true, false);
				}
				else if (IS_ACTOR_RIDEABLE(bLocal_433))
				{
					SET_ACTOR_RIDEABLE(bLocal_433, 0);
				}
				Function_147(StackVal);
				if (Function_137(Global_34573, bLocal_437))
				{
					if (GET_MOUNT(Global_34573) == bLocal_433)
					{
						if (IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(0, 0, 0, 0);
						}
						Function_135(&iLocal_476);
						if (IS_BLIP_VALID(bLocal_434))
						{
							REMOVE_BLIP(bLocal_434);
						}
						TASK_CLEAR(bLocal_433);
						SAY_SINGLE_LINE_CONTEXT(bLocal_432, 195, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						iLocal_525 = 7;
					}
					else if (IS_ACTOR_VALID(bLocal_433))
					{
						if (!GET_TASK_STATUS(bLocal_433, 36) != 1)
						{
							TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_433, bLocal_431, 4294967295);
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!GET_MOUNT(Global_34573) != bLocal_433)
			{
				iLocal_388++;
				SAY_SINGLE_LINE_CONTEXT(bLocal_432, 197, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_140(&iLocal_482);
				iLocal_525 = 6;
			}
			if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Global_34573), "HorseBreak") == 1)
			{
				if (!iLocal_397)
				{
					bVar0 = TASK_SEQUENCE_OPEN();
					if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
					{
						TASK_GO_TO_COORD(false, &vLocal_428, 4);
					}
					TASK_FACE_ACTOR(false, Function_30(), 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_432, bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					iLocal_397 = 1;
				}
				iLocal_525 = 9;
			}
			if (IS_ACTOR_RIDEABLE(bLocal_433))
			{
				SET_ACTOR_RIDEABLE(bLocal_433, 0);
			}
			Function_147(StackVal);
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			bLocal_448 = Function_134(bLocal_436, Function_34(), uLocal_439, bLocal_433, 4, 330, 4294967295, 0, 0, 1);
			Function_147(StackVal);
			if (!IS_ACTOR_RIDEABLE(bLocal_433))
			{
				SET_ACTOR_RIDEABLE(bLocal_433, 1);
			}
			if (bLocal_396)
			{
				OPEN_DOOR_DIRECTION(uLocal_441[4], true);
				OPEN_DOOR_DIRECTION(uLocal_441[5], false);
			}
			Function_143("JOB_HORSE_Stable", 3.0f, 1, 2, 0, 0, 0);
			iLocal_525 = 10;
			break;
		
		case 0x0000000A:
			Function_147(StackVal);
			if (!GET_MOUNT(Global_34573) != bLocal_433)
			{
				iLocal_525 = 16;
				Function_143("JOB_HORSE_Fail_UnMounted_Horse", 0x40f00000, 1, 2, 0, 0, 0);
			}
			if (Function_130(bLocal_448, 0, 1, 0, 0, 0))
			{
				if (IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				Function_129(bLocal_448);
				SET_CAMERA_POSITION(bLocal_450, vLocal_413);
				SET_CAMERA_DIRECTION(bLocal_450, vLocal_416, 1);
				if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_450, false))
				{
					SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_450, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
				}
				iLocal_525 = 13;
			}
			break;
		
		case 0x0000000D:
			SET_CAMERA_POSITION(bLocal_451, vLocal_419);
			SET_CAMERA_DIRECTION(bLocal_451, vLocal_422, 1);
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_451, false))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_451, 0, 5.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_DISMOUNT(false, 1);
			TASK_FACE_COORD(false, &vLocal_425, 0);
			if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
			{
				TASK_GO_TO_COORD(false, &vLocal_425, 1);
			}
			TASK_FACE_ACTOR(false, bLocal_432, 0, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(Global_34573, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
			{
				TASK_GO_TO_COORD_AND_STAY(bLocal_433, &vLocal_488 + 36, 1, 0.0f);
			}
			else
			{
				TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
			}
			Function_148(bLocal_432, Global_34573);
			Function_140(&iLocal_482);
			iLocal_525 = 11;
			break;
		
		case 0x0000000B:
			if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
			{
				iVar5 = Function_127(StackVal, StackVal, Global_34573, vLocal_425, 1.0f);
			}
			else
			{
				iVar5 = 1;
			}
			if ((StackVal || Function_147(iVar5) == 0) || Function_125(&iLocal_482) < 10.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_432, 196, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				Function_140(&iLocal_482);
				iLocal_525 = 12;
			}
			break;
		
		case 0x0000000C:
			if ((StackVal || Function_147(!IS_AMBIENT_SPEECH_PLAYING(bLocal_432)) == 0) || Function_125(&iLocal_482) < 5.0f)
			{
				iLocal_525 = 14;
			}
			break;
		
		case 0x0000000E:
			iParam0->f_28 = (Function_123(0, 0, 1, 0, 0) - iLocal_388);
			if (Function_122() > 4)
			{
				iParam0->f_28 *= 2;
			}
			if (iParam0->f_28 < 5)
			{
				iParam0->f_28 = 5;
			}
			Function_121(iParam0->f_28, 1);
			Function_94(StackVal, 2);
			iLocal_525 = 15;
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_432) && !HUD_IS_SHOWING_OBJECTIVE())
			{
				bLocal_391 = true;
				iLocal_394 = 1;
				iLocal_475 = 10;
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				TASK_STAND_STILL(bLocal_433, -1.0f, 0, 0);
				TASK_CLEAR(bLocal_432);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "HorseBreak"))
				{
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "HorseBreak");
				}
			}
			break;
		
		case 0x00000010:
			if (Global_29004 == 0)
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29004 == 1)
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29004 == 2)
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			if (IS_BLIP_VALID(bLocal_434))
			{
				REMOVE_BLIP(bLocal_434);
			}
			if (IS_OBJECT_VALID(bLocal_448))
			{
				bVar6 = GET_BLIP_ON_OBJECT(bLocal_448);
				if (IS_BLIP_VALID(bVar6))
				{
					REMOVE_BLIP(bVar6);
				}
			}
			iLocal_525 = 17;
			break;
		
		case 0x00000011:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				bLocal_391 = false;
				iLocal_394 = 1;
				TASK_CLEAR(bLocal_432);
				TASK_CLEAR(bLocal_433);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
			}
			break;
	}
	return;
}

void Function_94(int iParam0, int iParam1) //Position: 0x47F9 / 18425
{
	if (!Function_120(3))
	{
		return;
	}
	if (Function_20())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			if (iParam1 == Global_30668[0])
			{
				Function_95(5, 2, 0, 0, 1);
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_95(9, 16, 0, 0, 1);
			}
			else if (iParam1 == Global_30693[0])
			{
				Function_95(7, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30693[0])
			{
				Function_95(8, 4, 0, 0, 1);
			}
			else if (iParam1 == Global_30640[1])
			{
				if (IS_PS3())
				{
					Function_95(4, 2, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_95(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4898 / 18584
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_119(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_120(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_118(bParam0, 2))
	{
		Function_66(456, 1, 0, 0);
		Function_117(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_136(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_116(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_117(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_115(0, 0, 1, 1))
			{
				Function_21(1);
				Function_19(1, 0);
			}
			else
			{
				Function_114();
			}
		}
		Function_109(bParam0);
		if (StackVal && !Function_6(((((!Function_108() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_6((((Function_108() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_107(Global_76846, 2))
		{
			Function_102(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_97();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_96(3, bParam1);
				break;
			
			case 0x00000005:
				Function_96(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_96(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_96(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_96(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_96(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_65(2, 24);
				break;
			
			case 0x00000003:
				Function_65(2, 25);
				break;
			
			case 0x0000000F:
				Function_65(2, 26);
				break;
			
			case 0x0000000D:
				Function_65(2, 27);
				break;
			
			case 0x0000000E:
				Function_65(2, 28);
				break;
			}
	}
}

void Function_96(int iParam0, bool bParam1) //Position: 0x4B27 / 19239
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

void Function_97() //Position: 0x4B86 / 19334
{
	if (Function_119(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_101(Global_28180);
			Global_28180.f_8 = Function_98(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_101(Global_28180);
			Global_28180.f_8 = Function_98(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_98(int iParam0, int iParam1) //Position: 0x4C01 / 19457
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
					if (Function_100(6, 0) || Function_100(12, 0))
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
					if (Function_99(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_100(5, 0))
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
					if (Function_99(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_99(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_99(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_99(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_100(26, 0))
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
					if (Function_99(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_99(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_99(27) && iVar18)
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
					if (Function_99(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_99(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_99(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_99(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_100(17, 0) && iVar15)
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
					if (Function_99(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_100(6, 0) && Function_99(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_99(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_100(9, 0) && Function_99(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_99(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_100(8, 0) && iVar19)
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
	if (Function_54(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_54(StackVal, StackVal, vVar3))
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
	if (!Function_54(StackVal, StackVal, vVar3))
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

int Function_99(int iParam0) //Position: 0x57F2 / 22514
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_100(int iParam0, bool bParam1) //Position: 0x5807 / 22535
{
	int iVar0;
	
	iVar0 = Function_71(iParam0);
	if (!Function_9(iVar0))
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

int Function_101(int iParam0) //Position: 0x5844 / 22596
{
	int iVar0;
	int iVar1;
	
	if (!Function_119(iParam0))
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

void Function_102(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x5893 / 22675
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_104(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_103(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_103(char* cParam0, int iParam1) //Position: 0x58FF / 22783
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

bool Function_104(bool bParam0, var uParam1, int iParam2) //Position: 0x5936 / 22838
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
		if (Function_106(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_105(uVar0))
		{
			case 0x00000002:
				if (!Function_107(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_105(char* cParam0) //Position: 0x59AE / 22958
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

int Function_106(int iParam0) //Position: 0x5A4F / 23119
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_22(&iVar1, 2147483648);
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

bool Function_107(int iParam0, int iParam1) //Position: 0x5A8C / 23180
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_108() //Position: 0x5A9F / 23199
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_109(bool bParam0) //Position: 0x5ACC / 23244
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
			if (Function_116(bParam0, Function_113(bVar24)))
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
			if (Function_116(bParam0, Function_113(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_112(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_111(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_110(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_110(int iParam0) //Position: 0x5C7C / 23676
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_119(iParam0))
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

void Function_111(bool bParam0, bool bParam1) //Position: 0x5CD3 / 23763
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

var Function_112(int iParam0) //Position: 0x5CF8 / 23800
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_119(iParam0))
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

int Function_113(bool bParam0) //Position: 0x5D4E / 23886
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_114() //Position: 0x5D5A / 23898
{
	return;
}

bool Function_115(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5D60 / 23904
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_116(bool bParam0, int iParam1) //Position: 0x5E04 / 24068
{
	int iVar0;
	
	if (!Function_119(bParam0))
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

void Function_117(int iParam0, int iParam1) //Position: 0x5E63 / 24163
{
	if (!Function_119(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_118(int iParam0, int iParam1) //Position: 0x5EB8 / 24248
{
	int iVar0;
	
	if (!Function_119(iParam0))
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

bool Function_119(int iParam0) //Position: 0x5EE5 / 24293
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_120(int iParam0) //Position: 0x5EFB / 24315
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_121(bool bParam0, bool bParam1) //Position: 0x5F17 / 24343
{
	bool bVar0;
	
	bVar0 = Function_47(0);
	if ((Function_47(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_66(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_47(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_66(597, bParam0, 0, 0);
	}
	if ((Function_47(597) + Function_47(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_122() //Position: 0x5FE2 / 24546
{
	return Global_12976.f_152;
}

int Function_123(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5FED / 24557
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_47(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_124(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_124(bool bParam0) //Position: 0x60EF / 24815
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

float Function_125(int iParam0) //Position: 0x61E0 / 25056
{
	if (Function_142(iParam0))
	{
		if (Function_126(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_126(int iParam0) //Position: 0x62A8 / 25256
{
	return Function_6(*iParam0, 2);
}

int Function_127(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x62B5 / 25269
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_128(bParam0);
		if (VDIST(Function_128(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_128(bool bParam0) //Position: 0x633F / 25407
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

void Function_129(bool bParam0) //Position: 0x63A9 / 25513
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

bool Function_130(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6433 / 25651
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
				Function_133(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_132(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_132(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_131(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_131(&iVar6, &vVar3);
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

int Function_131(int iParam0, int iParam1) //Position: 0x6645 / 26181
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_54(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_54(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_132(bool bParam0, bool bParam1) //Position: 0x66B0 / 26288
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_133(bool bParam0, bool bParam1) //Position: 0x66CF / 26319
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
	else if (!bParam1 || Function_132(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

var Function_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x672C / 26412
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

void Function_135(int iParam0) //Position: 0x67A9 / 26537
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_136(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x67BD / 26557
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

bool Function_137(bool bParam0, bool bParam1) //Position: 0x6808 / 26632
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	bVar1 = false;
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		return 0;
	}
	bVar2 = GET_OBJECTSET_SIZE(bParam1);
	bVar1 = false;
	while (bVar1 < (bVar2 - 1))
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam1);
		bVar4 = GET_VOLUME_FROM_OBJECT(bVar3);
		if (IS_ACTOR_IN_VOLUME(bParam0, bVar4))
		{
			iVar0 = 1;
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_138(int iParam0, int iParam1) //Position: 0x685A / 26714
{
	if (Function_139(iParam0, iParam1))
	{
		Function_135(iParam0);
		return 1;
	}
	return 0;
}

bool Function_139(int iParam0, float fParam1) //Position: 0x6872 / 26738
{
	if (Function_142(iParam0))
	{
		if (Function_125(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_140(int iParam0) //Position: 0x688E / 26766
{
	Function_141(iParam0, 0.0f);
	return;
}

void Function_141(var uParam0, float fParam1) //Position: 0x689A / 26778
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_57(uParam0, 1);
	Function_22(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_142(int iParam0) //Position: 0x68BB / 26811
{
	return Function_6(*iParam0, 1);
}

void Function_143(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x68C8 / 26824
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

bool Function_144() //Position: 0x691B / 26907
{
	bool bVar0;
	
	switch (iLocal_524)
	{
		case 0x00000000:
			if (STREAMING_ARE_BOUNDS_LOADED(Global_34574, 150.0f))
			{
				STREAMING_UNLOAD_BOUNDS();
				bLocal_451 = CREATE_CAMERA_IN_LAYOUT(bLocal_435, "downCamera", 2);
				Function_146();
				SET_CAMERA_POSITION(bLocal_451, vLocal_407);
				SET_CAMERA_DIRECTION(bLocal_451, vLocal_410, 1);
				SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_451, 0, 7.0f, 0.0f, 6, 0, 0, 0, 0, 0);
				iLocal_524 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_145(4.0f))
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_432, 191, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				iLocal_524 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_524 = 3;
			break;
		
		case 0x00000003:
			if (Function_145(1,5f))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &vLocal_488 + 24, 0);
				TASK_GO_TO_COORD(false, &vLocal_488 + 24, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_432, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				iLocal_524 = 4;
			}
			break;
		
		case 0x00000004:
			if (GET_TASK_STATUS(bLocal_432, 0) == 0)
			{
				TASK_FACE_ACTOR(bLocal_432, Global_34573, 1, 3212836864);
				iLocal_524 = 5;
			}
			break;
		
		case 0x00000005:
			REMOVE_CAMERA_FROM_CHANNEL(bLocal_450, 0);
			REMOVE_CAMERA_FROM_CHANNEL(bLocal_451, 0);
			TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_433, bLocal_431, 4294967295);
			CAMERA_RESET(0);
			TASK_CLEAR(Global_34573);
			return 1;
			break;
	}
	return 0;
}

bool Function_145(int iParam0) //Position: 0x6A56 / 27222
{
	if (!Function_142(&iLocal_122))
	{
		Function_140(&iLocal_122);
	}
	else if (Function_138(&iLocal_122, iParam0))
	{
		return 1;
	}
	return 0;
}

void Function_146() //Position: 0x6A7A / 27258
{
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		vLocal_407 = { -3294,864f, 17,42f, 2716,469f };
		vLocal_410 = { 0,889f, -0,032f, 0,458f };
		vLocal_413 = { -3299,569f, 18,946f, 2681,378f };
		vLocal_416 = { -0,194f, -0,033f, -0,98f };
		vLocal_419 = { -3301,032f, 18,907f, 2685,031f };
		vLocal_422 = { 0,392f, -0,029f, -0,92f };
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		vLocal_407 = { -2639,4f, 32,432f, 4244,452f };
		vLocal_410 = { 0,188f, -0,147f, 0,971f };
		vLocal_413 = { -2617,708f, 32,171f, 4250,527f };
		vLocal_416 = { -0,987f, 0,007f, -0,161f };
		vLocal_419 = { -2618,443f, 32,177f, 4249,91f };
		vLocal_422 = { -1.0f, 0,015f, 0,016f };
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		vLocal_407 = { -62,444f, 122,71f, 1427,971f };
		vLocal_410 = { -0,178f, -0,511f, -0,841f };
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(2)");
	}
	return;
}

int Function_147(bool bParam0) //Position: 0x6CCA / 27850
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = (IS_AI_ACTOR_UNALERTED(bLocal_432) && !IS_AI_ACTOR_IN_COMBAT(bLocal_432));
	bVar2 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bLocal_432;
	if (Global_3404 != 1 || Global_3403 != 1)
	{
		iVar0 = 7;
	}
	if (GET_LAST_ATTACKER(bLocal_432) == Global_34573)
	{
		iVar0 = 1;
	}
	else if (!bVar1 && bVar2)
	{
		iVar0 = 2;
	}
	else if (GET_LAST_ATTACKER(bLocal_433) != Global_34573 && GET_LAST_HIT_WEAPON(bLocal_433) == 21)
	{
		iVar0 = 3;
	}
	else if (!IS_ACTOR_ALIVE(bLocal_433))
	{
		iVar0 = 4;
	}
	if (iLocal_525 <= 9)
	{
		if (!Function_137(bLocal_433, bLocal_437))
		{
			if (!GET_MOUNT(Global_34573) != bLocal_433)
			{
				iVar0 = 5;
			}
		}
		if (!Function_137(Global_34573, bLocal_437))
		{
			if (!Function_142(&iLocal_485))
			{
				Function_140(&iLocal_485);
			}
			if (Function_138(&iLocal_485, 8.0f))
			{
				iLocal_389++;
				if (iLocal_389 <= 3)
				{
					Function_136("JOB_HORSE_OutOfPenWarning", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					iVar0 = 6;
				}
			}
		}
		else if (Function_142(&iLocal_485))
		{
			Function_135(&iLocal_485);
			iLocal_389 = 0;
		}
	}
	else if (iLocal_525 > 9)
	{
		if (Global_29006 != bParam0)
		{
			if (!Function_142(&iLocal_485))
			{
				Function_140(&iLocal_485);
			}
			if (Function_138(&iLocal_485, 8.0f))
			{
				if (iLocal_389 <= 1)
				{
					Function_136("JOB_HORSE_GetToStable", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					iVar0 = 8;
				}
				iLocal_389++;
			}
		}
		else if (Function_142(&iLocal_485))
		{
			Function_135(&iLocal_485);
			iLocal_389 = 0;
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			break;
		
		case 0x00000007:
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_BrokeLaw", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000001:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_AttackHelper", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000002:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_ThreatenedHelper", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_AttackHorse", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000004:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_KillHorse", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000006:
			SAY_SINGLE_LINE_CONTEXT(bLocal_432, 194, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_PlayerLeftPen", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000005:
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_HorseLeftPen", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000008:
			iLocal_525 = 16;
			Function_143("JOB_HORSE_Fail_SlowStable", 0x40f00000, 1, 2, 0, 0, 0);
			break;
	}
	return iVar0;
}

void Function_148(bool bParam0, bool bParam1) //Position: 0x70BE / 28862
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_149(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_149(bool bParam0, vector3 vParam1) //Position: 0x70D8 / 28888
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_150(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_150(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_150(bool bParam0, vector3 vParam1) //Position: 0x7110 / 28944
{
	vector3 vVar0;
	
	Function_151(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_151(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_151(bool bParam0) //Position: 0x7193 / 29075
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_152(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x71A4 / 29092
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
		bVar0 = Function_30();
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
			if (Function_20())
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
		Function_66(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_3();
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
	Function_153(iParam9);
}

void Function_153(bool bParam0) //Position: 0x7294 / 29332
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

void Function_154() //Position: 0x7339 / 29497
{
	bool bVar0;
	int iVar1;
	
	if (bLocal_395)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			bVar0 = uLocal_441[iVar1];
			if (IS_DOOR_VALID(bVar0))
			{
				CLOSE_DOOR_FAST(bVar0);
			}
			iVar1++;
		}
	}
	return;
}

bool Function_155(bool bParam0) //Position: 0x736D / 29549
{
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		return 1;
	}
	if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		if (IS_PERS_CHAR_VALID(bParam0))
		{
			if (Function_159(&(Global_6364[02])))
			{
				if (!IS_ACTOR_VALID(bLocal_432))
				{
					bLocal_432 = CREATE_ACTOR_IN_LAYOUT(bLocal_436, "FakeHorsebreakingJobGiver", 234, vLocal_401, 0.0f, 0.0f, 0.0f);
				}
				return 1;
			}
			bLocal_432 = Function_156(&Global_6364, &Global_7287, 0, 0, 0, 1);
			if (IS_ACTOR_VALID(bLocal_432))
			{
				return 1;
			}
			return 0;
		}
		LOG_ERROR("Pers_Char not valid");
		return 0;
	}
	if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		if (IS_PERS_CHAR_VALID(bParam0))
		{
			if (Function_159(&(Global_6815[32])))
			{
				if (!IS_ACTOR_VALID(bLocal_432))
				{
					bLocal_432 = CREATE_ACTOR_IN_LAYOUT(bLocal_436, "FakeHorsebreakingJobGiver", 273, vLocal_401, 0.0f, 0.0f, 0.0f);
				}
				return 1;
			}
			bLocal_432 = Function_156(&Global_6815, &Global_7954, 3, 0, 0, 1);
			if (IS_ACTOR_VALID(bLocal_432))
			{
				return 1;
			}
			return 0;
		}
		LOG_ERROR("Pers_Char not valid");
		return 0;
	}
	if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		return 1;
	}
	LOG_ERROR("HORSEBREAKING_CREATE_JOBGIVER: Job should not be available in this region.(2)");
	return 0;
}

bool Function_156(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x7574 / 30068
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_92(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_92(uParam0[iVar02], 2))
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
			if (!Function_92(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_89(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_158(StackVal, StackVal, StackVal, Global_6289, Function_34(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_92(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_89(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_89(uParam0[iVar02], 1);
	Function_157(StackVal, 1);
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

int Function_157(bool bParam0, bool bParam1) //Position: 0x770A / 30474
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

var Function_158(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x77AC / 30636
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

bool Function_159(var uParam0) //Position: 0x78C5 / 30917
{
	return Function_92(uParam0, 1);
}

void Function_160() //Position: 0x78D1 / 30929
{
	bool bVar0;
	
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("RidgewoodFarm_layout");
		bLocal_450 = CREATE_CAMERA_IN_LAYOUT(bVar0, "upCamera", 2);
		SET_CAMERA_POSITION(bLocal_450, -3302,57f, 17,947f, 2714,277f);
		SET_CAMERA_DIRECTION(bLocal_450, 0,305f, 0,044f, 0,951f, 1);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("Chuparosa_layout");
		bLocal_450 = CREATE_CAMERA_IN_LAYOUT(bVar0, "upCamera", 2);
		SET_CAMERA_POSITION(bLocal_450, -2639,184f, 33,658f, 4246,895f);
		SET_CAMERA_DIRECTION(bLocal_450, 0,588f, 0,153f, 0,795f, 1);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("BeechersHope_layout");
		bLocal_450 = CREATE_CAMERA_IN_LAYOUT(bVar0, "upCamera", 2);
		SET_CAMERA_POSITION(bLocal_450, -70,071f, 125,952f, 1415,838f);
		SET_CAMERA_DIRECTION(bLocal_450, -0,442f, -0,093f, 0,892f, 1);
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(2)");
	}
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_450, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_161() //Position: 0x7B28 / 31528
{
	STREAMING_SET_CUTSCENE_MODE(1);
	Function_162(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	if (IS_PLAYER_CONTROLLABLE(0))
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "CUT_SCENE_ON"))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Global_34573), "CUT_SCENE_ON", true);
	}
	HUD_ENABLE(false);
	return;
}

void Function_162(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x7B89 / 31625
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
	Function_3();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_30();
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
			if (Function_20())
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
				Function_151(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_34(), 2, Function_151(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_66(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_164()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_164()));
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
	if (Function_163(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_222(0x4000000);
	}
	if (Function_163(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_222(0x8000000);
	}
}

bool Function_163(int iParam0) //Position: 0x7E32 / 32306
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_164() //Position: 0x7E4E / 32334
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

bool Function_165(bool bParam0, bool bParam1, float fParam2) //Position: 0x7ECD / 32461
{
	float fVar0;
	bool bVar1;
	
	if (Function_20() || !bParam1)
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

void Function_166() //Position: 0x7F6A / 32618
{
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_INIT_CUTSCENE_DATA: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		Function_167(bLocal_436, "f_playerstart");
		vLocal_488 = { StackVal, StackVal, Function_167(bLocal_436, "f_playerstart") };
		Function_167(bLocal_436, "f_helperstart");
		*(&vLocal_488 + 12) = { StackVal, StackVal, Function_167(bLocal_436, "f_helperstart") };
		Function_167(bLocal_436, "f_helpergatepos");
		*(&vLocal_488 + 24) = { StackVal, StackVal, Function_167(bLocal_436, "f_helpergatepos") };
		Function_167(bLocal_436, "f_cameraintro");
		*(&vLocal_488 + 48) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraintro") };
		*(&vLocal_488 + 60) = { 0,946f, -0,163f, -0,279f };
		Function_167(bLocal_436, "f_camerawatchhorse");
		*(&vLocal_488 + 72) = { StackVal, StackVal, Function_167(bLocal_436, "f_camerawatchhorse") };
		*(&vLocal_488 + 84) = { 0,871f, -0,188f, -0,453f };
		Function_167(bLocal_436, "f_cameraDialog");
		*(&vLocal_488 + 96) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraDialog") };
		*(&vLocal_488 + 108) = { 0,764f, -0,128f, 0,632f };
		Function_167(bLocal_436, "f_cameraintro");
		*(&vLocal_488 + 120) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraintro") };
		*(&vLocal_488 + 132) = { 0,936f, -0,09f, -0,34f };
		Function_167(bLocal_436, "f_stablepos");
		*(&vLocal_488 + 36) = { StackVal, StackVal, Function_167(bLocal_436, "f_stablepos") };
		bLocal_449 = Local_125.f_328;
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_167(bLocal_436, "f_playerstart");
		vLocal_488 = { StackVal, StackVal, Function_167(bLocal_436, "f_playerstart") };
		Function_167(bLocal_436, "f_helperstart");
		*(&vLocal_488 + 12) = { StackVal, StackVal, Function_167(bLocal_436, "f_helperstart") };
		Function_167(bLocal_436, "f_helpergatepos");
		*(&vLocal_488 + 24) = { StackVal, StackVal, Function_167(bLocal_436, "f_helpergatepos") };
		Function_167(bLocal_436, "f_cameraintro");
		*(&vLocal_488 + 48) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraintro") };
		*(&vLocal_488 + 60) = { -0,031f, -0,13f, 0,991f };
		Function_167(bLocal_436, "f_camerawatchhorse");
		*(&vLocal_488 + 72) = { StackVal, StackVal, Function_167(bLocal_436, "f_camerawatchhorse") };
		*(&vLocal_488 + 84) = { 0,114f, -0,222f, 0,968f };
		Function_167(bLocal_436, "f_cameraDialog");
		*(&vLocal_488 + 96) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraDialog") };
		*(&vLocal_488 + 108) = { 0,176f, -0,276f, -0,945f };
		Function_167(bLocal_436, "f_cameraintro");
		*(&vLocal_488 + 120) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraintro") };
		*(&vLocal_488 + 132) = { 0,725f, -0,12f, 0,678f };
		Function_167(bLocal_436, "f_stablepos");
		*(&vLocal_488 + 36) = { StackVal, StackVal, Function_167(bLocal_436, "f_stablepos") };
		bLocal_449 = Local_208.f_356;
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		Function_167(bLocal_436, "f_playerstart");
		vLocal_488 = { StackVal, StackVal, Function_167(bLocal_436, "f_playerstart") };
		Function_167(bLocal_436, "f_helperstart");
		*(&vLocal_488 + 12) = { StackVal, StackVal, Function_167(bLocal_436, "f_helperstart") };
		Function_167(bLocal_436, "f_helpergatepos");
		*(&vLocal_488 + 24) = { StackVal, StackVal, Function_167(bLocal_436, "f_helpergatepos") };
		Function_167(bLocal_436, "f_cameraintro");
		*(&vLocal_488 + 48) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraintro") };
		*(&vLocal_488 + 60) = { 0,271f, -0,213f, 0,939f };
		Function_167(bLocal_436, "f_camerawatchhorse");
		*(&vLocal_488 + 72) = { StackVal, StackVal, Function_167(bLocal_436, "f_camerawatchhorse") };
		*(&vLocal_488 + 84) = { 0,934f, -0,356f, 0,033f };
		Function_167(bLocal_436, "f_cameraDialog");
		*(&vLocal_488 + 96) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraDialog") };
		*(&vLocal_488 + 108) = { -0,991f, -0,074f, -0,112f };
		Function_167(bLocal_436, "f_cameraintro");
		*(&vLocal_488 + 120) = { StackVal, StackVal, Function_167(bLocal_436, "f_cameraintro") };
		*(&vLocal_488 + 132) = { 0,996f, -0,069f, 0,061f };
		Function_167(bLocal_436, "f_stablepos");
		*(&vLocal_488 + 36) = { StackVal, StackVal, Function_167(bLocal_436, "f_stablepos") };
		bLocal_449 = Local_298.f_356;
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_INIT_CUTSCENE_DATA: Job should not be available in this region.(2)");
	}
	return;
}

vector3 Function_167(bool bParam0, bool bParam1) //Position: 0x849D / 33949
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	bVar6 = false;
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	bVar3 = CREATE_OBJECT_ITERATOR(bParam0);
	if (IS_ITERATOR_VALID(bVar3))
	{
		ITERATE_ON_OBJECT_TYPE(bVar3, 4294967295);
		bVar4 = START_OBJECT_ITERATOR(bVar3);
		while (IS_OBJECT_VALID(bVar4) && !bVar6)
		{
			bVar5 = GET_OBJECT_NAME(bVar4);
			if (STRINGS_ARE_EQUAL(bVar5, bParam1))
			{
				bVar6 = true;
				Function_168(bVar4);
				vVar0 = { StackVal, StackVal, Function_168(bVar4) };
			}
			else
			{
				bVar4 = OBJECT_ITERATOR_NEXT(bVar3);
			}
		}
		DESTROY_ITERATOR(bVar3);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("\Failed to create iterator inside HORSEBREAKING_GET_FLAG_POSITION. Returning player position");
	Function_151(Function_30());
	return StackVal, StackVal, Function_151(Function_30());
}

vector3 Function_168(bool bParam0) //Position: 0x8581 / 34177
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

struct<32> Function_169(bool bParam0) //Position: 0x85A8 / 34216
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(bParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_170(char* cParam0, char* cParam1, char* cParam2) //Position: 0x8612 / 34322
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_171() //Position: 0x8631 / 34353
{
	bool bVar0;
	
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		Function_183();
		Function_182();
		Function_181();
		bLocal_436 = Local_125;
		bLocal_438 = Function_183();
		uLocal_439 = Local_125.f_12;
		Function_180(bLocal_436);
		Unknown_Function();
		bVar0 = FIND_NAMED_LAYOUT("RidgewoodFarm_layout");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_178();
		bLocal_436 = Local_208;
		bLocal_438 = Function_178();
		uLocal_439 = Local_208.f_12;
		Function_180(bLocal_436);
		Unknown_Function();
		bVar0 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		Function_176();
		Function_175();
		Function_172();
		bLocal_436 = Local_298;
		bLocal_438 = Function_176();
		uLocal_439 = Local_298.f_12;
		Function_180(bLocal_436);
		Unknown_Function();
		bVar0 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("AgaveViejo_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(2)");
	}
	return bVar0;
}

void Function_172() //Position: 0x88A2 / 34978
{
	uLocal_441[4] = Function_173("beechershope", "stable01", 96);
	uLocal_441[5] = Function_173("beechershope", "stable01", 97);
	bLocal_396 = true;
	return;
}

int Function_173(var uParam0, char* cParam1, int iParam2) //Position: 0x88F6 / 35062
{
	return Function_174(Global_29006, uParam0, cParam1, iParam2);
}

int Function_174(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x8908 / 35080
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_62(iParam0))
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

void Function_175() //Position: 0x89A4 / 35236
{
	uLocal_441[0] = Function_173("beechershope", "stable01", 94);
	uLocal_441[1] = Function_173("beechershope", "stable01", 95);
	uLocal_441[2] = Function_173("beechershope", "stable01", 98);
	uLocal_441[3] = Function_173("beechershope", "stable01", 99);
	bLocal_395 = true;
	return;
}

vector3 Function_176() //Position: 0x8A42 / 35394
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_298 = CREATE_LAYOUT("horsebreaking_beh_layout");
	Local_298.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_298, "v_pen", 3, -43,93288f, 118,6123f, 1422,629f, 0.0f, 20.0f, 0.0f, 16,96518f, 3.0f, 14,62182f);
	Local_298.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_298, "v_playerBounds", 3, -44,66626f, 118,6123f, 1423,172f, 0.0f, 20.0f, 0.0f, 24,48617f, 3.0f, 20,88202f);
	Local_298.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_298, "v_stable", 2, -60,80671f, 117,6364f, 1414,156f, 1,381116f, -28,94535f, -0,8704333f, 2,525596f, 3.0f, 7.0f);
	Local_298.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_298, "HorseBreaking_StayOutVolume", 3, -43,93288f, 118,6123f, 1422,629f, 0.0f, 20.0f, 0.0f, 9,548944f, 3.0f, 7,134239f);
	*(&Local_298 + 20) = { -64,9892f, 117,0433f, 1421,941f };
	*(&Local_298 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_44 = CREATE_POINT_IN_LAYOUT(Local_298, "f_playerstart", -64,9892f, 117,0433f, 1421,941f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 48) = { -65,17418f, 117,0433f, 1420,397f };
	*(&Local_298 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_72 = CREATE_POINT_IN_LAYOUT(Local_298, "f_helperstart", -65,17418f, 117,0433f, 1420,397f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 76) = { -44,15268f, 116,9848f, 1422,039f };
	*(&Local_298 + 76 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_100 = CREATE_POINT_IN_LAYOUT(Local_298, "f_horsestart", -44,15268f, 116,9848f, 1422,039f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 104) = { -62,53255f, 116,9848f, 1420,284f };
	*(&Local_298 + 104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_128 = CREATE_POINT_IN_LAYOUT(Local_298, "f_helpergatepos", -62,53255f, 116,9848f, 1420,284f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 132) = { -65,1827f, 116,9848f, 1411,965f };
	*(&Local_298 + 132 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_156 = CREATE_POINT_IN_LAYOUT(Local_298, "f_stablepos", -65,1827f, 116,9848f, 1411,965f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 160) = { -60,53358f, 116,9848f, 1416,488f };
	*(&Local_298 + 160 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_184 = CREATE_POINT_IN_LAYOUT(Local_298, "f_helperstablepos", -60,53358f, 116,9848f, 1416,488f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 188) = { -58,88554f, 116,9848f, 1413,466f };
	*(&Local_298 + 188 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_212 = CREATE_POINT_IN_LAYOUT(Local_298, "f_stableplayerpos", -58,88554f, 116,9848f, 1413,466f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 216) = { -60,51863f, 116,9848f, 1416,478f };
	*(&Local_298 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_240 = CREATE_POINT_IN_LAYOUT(Local_298, "f_helperstablegoto", -60,51863f, 116,9848f, 1416,478f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 244) = { -52,16951f, 121,6348f, 1413,421f };
	*(&Local_298 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_268 = CREATE_POINT_IN_LAYOUT(Local_298, "f_camerastable", -52,16951f, 121,6348f, 1413,421f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 272) = { -58,52735f, 121,6348f, 1432,056f };
	*(&Local_298 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_296 = CREATE_POINT_IN_LAYOUT(Local_298, "f_camerawatchhorse", -58,52735f, 121,6348f, 1432,056f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 300) = { -69,0267f, 120,3079f, 1424,512f };
	*(&Local_298 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_324 = CREATE_POINT_IN_LAYOUT(Local_298, "f_cameraintro", -69,0267f, 120,3079f, 1424,512f, 0.0f, 0.0f, 0.0f);
	*(&Local_298 + 328) = { -57,78021f, 120,9089f, 1423,621f };
	*(&Local_298 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_298.f_352 = CREATE_POINT_IN_LAYOUT(Local_298, "f_cameraDialog", -57,78021f, 120,9089f, 1423,621f, 0.0f, 0.0f, 0.0f);
}

void Â^TBèÑ-D±ö¬,GYL*Ddz-  8n            (int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x8FAB / 36779
{
	Jump @99; //curOff = 60
	Jump @99; //curOff = 63
	if (!iParam0 != 4)
	{
	}
	Jump @99; //curOff = 74
	if (!iParam0 != 3)
	{
	}
	Jump @99; //curOff = 85
	if (!iParam0 != 3)
	{
	}
	return;
}

struct<8> Function_178() //Position: 0x900F / 36879
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_208 = CREATE_LAYOUT("horsebreaking_chu_layout");
	Local_208.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_208, "v_pen", 2, -2631,415f, 29,88759f, 4258,307f, 0.0f, -40,17725f, 0.0f, 23,78081f, 6.0f, 36,43158f);
	Local_208.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_208, "v_playerBounds", 2, -2633,351f, 30,48789f, 4258,207f, 0.0f, 49,87139f, 0.0f, 43,0172f, 7,760196f, 31,19706f);
	Local_208.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_208, "v_stable", 2, -2623,267f, 30,3647f, 4250,163f, 0.0f, 47,19747f, 0.0f, 4,997247f, 5,82498f, 4,690561f);
	Local_208.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_208, "HorseBreaking_StayOutVolume", 2, -2630,178f, 29,88759f, 4260,932f, 0.0f, -40,17725f, 0.0f, 7.0f, 6.0f, 11.0f);
	*(&Local_208 + 20) = { -2639,281f, 30,73836f, 4246,451f };
	*(&Local_208 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_44 = CREATE_POINT_IN_LAYOUT(Local_208, "f_playerstart", -2639,281f, 30,73836f, 4246,451f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 48) = { -2638,156f, 30,73836f, 4247,269f };
	*(&Local_208 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_72 = CREATE_POINT_IN_LAYOUT(Local_208, "f_helperstart", -2638,156f, 30,73836f, 4247,269f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 76) = { -2621,17f, 30,73836f, 4253,298f };
	*(&Local_208 + 76 + 12) = { 0.0f, 81,05766f, 0.0f };
	Local_208.f_100 = CREATE_POINT_IN_LAYOUT(Local_208, "f_horsestart", -2621,17f, 30,73836f, 4253,298f, 0.0f, 81,05766f, 0.0f);
	*(&Local_208 + 104) = { -2635,292f, 30,73836f, 4247,353f };
	*(&Local_208 + 104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_128 = CREATE_POINT_IN_LAYOUT(Local_208, "f_helpergatepos", -2635,292f, 30,73836f, 4247,353f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 132) = { -2625,253f, 30,73836f, 4248,132f };
	*(&Local_208 + 132 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_156 = CREATE_POINT_IN_LAYOUT(Local_208, "f_stablepos", -2625,253f, 30,73836f, 4248,132f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 160) = { -2636,928f, 30,73836f, 4248,027f };
	*(&Local_208 + 160 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_184 = CREATE_POINT_IN_LAYOUT(Local_208, "f_helperstablepos", -2636,928f, 30,73836f, 4248,027f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 188) = { -2627,227f, 30,73836f, 4250,09f };
	*(&Local_208 + 188 + 12) = { 0.0f, 65,34818f, 0.0f };
	Local_208.f_212 = CREATE_POINT_IN_LAYOUT(Local_208, "f_stableplayerpos", -2627,227f, 30,73836f, 4250,09f, 0.0f, 65,34818f, 0.0f);
	*(&Local_208 + 216) = { -2629,909f, 30,73836f, 4248,793f };
	*(&Local_208 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_240 = CREATE_POINT_IN_LAYOUT(Local_208, "f_helperstablegoto", -2629,909f, 30,73836f, 4248,793f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 244) = { -2625,052f, 37,0547f, 4258,85f };
	*(&Local_208 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_268 = CREATE_POINT_IN_LAYOUT(Local_208, "f_camerastable", -2625,052f, 37,0547f, 4258,85f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 272) = { -2619,128f, 37,03808f, 4264,715f };
	*(&Local_208 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_296 = CREATE_POINT_IN_LAYOUT(Local_208, "f_camerawatchhorse", -2619,128f, 37,03808f, 4264,715f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 300) = { -2634,054f, 32,57742f, 4240,912f };
	*(&Local_208 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_324 = CREATE_POINT_IN_LAYOUT(Local_208, "f_cameraintro", -2634,054f, 32,57742f, 4240,912f, 0.0f, 0.0f, 0.0f);
	*(&Local_208 + 328) = { -2629,604f, 34,82276f, 4243,826f };
	*(&Local_208 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_208.f_352 = CREATE_POINT_IN_LAYOUT(Local_208, "f_cameraDialog", -2629,604f, 34,82276f, 4243,826f, 0.0f, 0.0f, 0.0f);
}

void AôlEÏÅ#úÕAôlEñãÅ$d»AôlEôf,GY:ÐDdz-  8 ,	c 8,wc 8 ,CK98,CTc @8(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x953B / 38203
{
	ITERATE_ON_OBJECT_TYPE(StackVal, 4294967295);
	bParam6 = START_OBJECT_ITERATOR(bParam5);
	while (IS_OBJECT_VALID(bParam6))
	{
		bParam7 = GET_OBJECT_NAME(bParam6);
		if (STRING_CONTAINS_STRING(bParam7, bParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bParam6, bParam2);
		}
		bParam6 = OBJECT_ITERATOR_NEXT(bParam5);
	}
	DESTROY_ITERATOR(bParam5);
	Jump @221; //curOff = 147
	LOG_ERROR("Unable to create iterator inside HORSEBREAKING_FIND_PLAYER_BOUNDS");
	return;
}

void Function_180(bool bParam0) //Position: 0x9619 / 38425
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_169("penVols"), 4);
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bLocal_437 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, bParam0, 4294967295, 0);
	return;
}

void Function_181() //Position: 0x9648 / 38472
{
	uLocal_441[4] = Function_173("ridgewoodfarm", "barn01", 1);
	uLocal_441[5] = Function_173("ridgewoodfarm", "barn01", 2);
	bLocal_396 = true;
	return;
}

void Function_182() //Position: 0x9698 / 38552
{
	uLocal_441[0] = Function_174(Global_30640[1], "ridgewoodfarm", "fence01", 13);
	uLocal_441[1] = Function_174(Global_30640[1], "ridgewoodfarm", "fence01", 14);
	uLocal_441[2] = Function_174(Global_30640[1], "ridgewoodfarm", "fence01", 15);
	uLocal_441[3] = Function_174(Global_30640[1], "ridgewoodfarm", "fence01", 16);
	bLocal_395 = true;
	return;
}

struct<8> Function_183() //Position: 0x974E / 38734
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_125 = CREATE_LAYOUT("horsebreaking_rwf_layout");
	Local_125.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_125, "v_pen", 3, -3288,777f, 15,69201f, 2734,723f, 0.0f, -38,60373f, 0.0f, 15,9265f, 3.0f, 4,914371f);
	Local_125.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_125, "v_playerBounds", 3, -3291,02f, 17,30809f, 2735,659f, 0.0f, -36,19659f, 0.0f, 37,91158f, 3,508656f, 17,47989f);
	Local_125.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_125, "v_stable", 2, -3300,393f, 18,23438f, 2673,137f, 0.0f, 109,5142f, 0.0f, 4,767694f, 3.0f, 3,550467f);
	Local_125.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_125, "HorseBreaking_StayOutVolume", 3, -3288,736f, 16,16476f, 2733,746f, 0.0f, -39,76477f, 0.0f, 12,85629f, 3.0f, 4,214271f);
	*(&Local_125 + 20) = { -3290,872f, 16,41982f, 2717,622f };
	*(&Local_125 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_44 = CREATE_POINT_IN_LAYOUT(Local_125, "f_playerstart", -3290,872f, 16,41982f, 2717,622f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 48) = { -3293,613f, 16,18635f, 2717,757f };
	*(&Local_125 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_72 = CREATE_POINT_IN_LAYOUT(Local_125, "f_helperstart", -3293,613f, 16,18635f, 2717,757f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 76) = { -3278,02f, 15,90541f, 2739,603f };
	*(&Local_125 + 76 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_100 = CREATE_POINT_IN_LAYOUT(Local_125, "f_horsestart", -3278,02f, 15,90541f, 2739,603f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 104) = { -3296,125f, 16,28855f, 2717,553f };
	*(&Local_125 + 104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_128 = CREATE_POINT_IN_LAYOUT(Local_125, "f_helpergatepos", -3296,125f, 16,28855f, 2717,553f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 132) = { -3301,821f, 17,88778f, 2668,992f };
	*(&Local_125 + 132 + 12) = { 0.0f, 19,17371f, 0.0f };
	Local_125.f_156 = CREATE_POINT_IN_LAYOUT(Local_125, "f_stablepos", -3301,821f, 17,88778f, 2668,992f, 0.0f, 19,17371f, 0.0f);
	*(&Local_125 + 160) = { -3300,805f, 17,9204f, 2679,363f };
	*(&Local_125 + 160 + 12) = { 0.0f, -123,2042f, 0.0f };
	Local_125.f_184 = CREATE_POINT_IN_LAYOUT(Local_125, "f_helperstablepos", -3300,805f, 17,9204f, 2679,363f, 0.0f, -123,2042f, 0.0f);
	*(&Local_125 + 188) = { -3299,295f, 17,88778f, 2678,713f };
	*(&Local_125 + 188 + 12) = { 0.0f, 132,5602f, 0.0f };
	Local_125.f_212 = CREATE_POINT_IN_LAYOUT(Local_125, "f_stableplayerpos", -3299,295f, 17,88778f, 2678,713f, 0.0f, 132,5602f, 0.0f);
	*(&Local_125 + 216) = { -3295,028f, 19,626f, 2683,082f };
	*(&Local_125 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_240 = CREATE_POINT_IN_LAYOUT(Local_125, "f_camerastable", -3295,028f, 19,626f, 2683,082f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 244) = { -3286,944f, 24,05286f, 2719,736f };
	*(&Local_125 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_268 = CREATE_POINT_IN_LAYOUT(Local_125, "f_camerawatchhorse", -3286,944f, 24,05286f, 2719,736f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 272) = { -3291,379f, 22,20231f, 2706,601f };
	*(&Local_125 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_296 = CREATE_POINT_IN_LAYOUT(Local_125, "f_cameraintro", -3291,379f, 22,20231f, 2706,601f, 0.0f, 0.0f, 0.0f);
	*(&Local_125 + 300) = { -3301,395f, 22,37455f, 2710,274f };
	*(&Local_125 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_125.f_324 = CREATE_POINT_IN_LAYOUT(Local_125, "f_cameraDialog", -3301,395f, 22,37455f, 2710,274f, 0.0f, 0.0f, 0.0f);
}

int Function_184(int iParam0) //Position: 0x9C75 / 40053
{
	if (!Function_7(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_185(int iParam0) //Position: 0x9C8F / 40079
{
	int iVar0[3];
	int iVar4;
	
	if (Function_211(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_197(&uLocal_105, &iVar0, "RDR JOB MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_196(iParam0);
			iLocal_119 = 1;
			Function_189();
			Function_188();
		}
		else if (iVar4 == 1)
		{
			Function_187(iParam0);
			bLocal_120 = true;
			Function_189();
			Function_188();
		}
		else if (iVar4 == 2)
		{
			Function_189();
			Function_186(iParam0);
			Function_189();
		}
	}
	return;
}

void Function_186(int iParam0) //Position: 0x9D22 / 40226
{
	Function_75(iParam0);
	return;
}

void Function_187(var uParam0) //Position: 0x9D2D / 40237
{
	bLocal_120 = true;
	if (bLocal_120)
	{
		Function_10(uParam0);
	}
	return;
}

void Function_188() //Position: 0x9D40 / 40256
{
	return;
}

void Function_189() //Position: 0x9D46 / 40262
{
	Function_191();
	Function_190(10, 3);
	return;
}

void Function_190(int iParam0, int iParam1) //Position: 0x9D55 / 40277
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

void Function_191() //Position: 0x9E8C / 40588
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_195())
	{
		Function_194(10, 3);
	}
	else
	{
		Function_192();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_30(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_30());
	UI_POP("nDebugMenu");
	return;
}

void Function_192() //Position: 0x9ED7 / 40663
{
	Function_193(25, 2);
	return;
}

void Function_193(int iParam0, int iParam1) //Position: 0x9EE3 / 40675
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

void Function_194(int iParam0, int iParam1) //Position: 0xA0E1 / 41185
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

bool Function_195() //Position: 0xA218 / 41496
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
				if (!Function_6(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_196(int iParam0) //Position: 0xA27F / 41599
{
	iLocal_119 = 1;
	if (iLocal_119)
	{
		Function_17(iParam0, 1, 1, 0);
	}
	return;
}

var Function_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA295 / 41621
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_210(&Var15, &Var0);
	uVar20 = Function_209(*uParam1, &Var15);
	Function_208(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_207(uParam0, uVar20);
	Function_205(StackVal, uParam0, Var15.f_12);
	Function_203(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_202(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_199(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_198(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_198(int iParam0, int iParam1, int iParam2) //Position: 0xA35C / 41820
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

bool Function_199(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA3B8 / 41912
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
				Function_201(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_201(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_198(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_200(bParam1->f_32);
	}
	else
	{
		Function_200(bParam1->f_32);
	}
	return 0;
}

void Function_200(bool bParam0) //Position: 0xA53E / 42302
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

void Function_201(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xA578 / 42360
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

var Function_202(int iParam0, var uParam1, int iParam2) //Position: 0xA626 / 42534
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_203(var uParam0, int iParam1, int iParam2) //Position: 0xA64A / 42570
{
	switch (Function_204())
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

int Function_204() //Position: 0xA6E6 / 42726
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

void Function_205(var uParam0, int iParam1, int iParam2) //Position: 0xA722 / 42786
{
	switch (Function_206(uParam0))
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

int Function_206(int iParam0) //Position: 0xA7BA / 42938
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_30()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_6(*iParam0, 0x40000000))
		{
			Function_57(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_6(*iParam0, 0x40000000))
		{
			Function_57(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_22(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_30()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_6(*iParam0, 0x20000000))
		{
			Function_57(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_6(*iParam0, 0x20000000))
		{
			Function_57(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_22(iParam0, 0x20000000);
	return 0;
}

var Function_207(var uParam0, int iParam1) //Position: 0xA905 / 43269
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

void Function_208(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAA54 / 43604
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

var Function_209(int iParam0, int iParam1) //Position: 0xAAE7 / 43751
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_210(var uParam0, int iParam1) //Position: 0xAB01 / 43777
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

bool Function_211(int iParam0) //Position: 0xAB4F / 43855
{
	if (!Function_212(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_212(int iParam0) //Position: 0xAB63 / 43875
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

bool Function_213(int iParam0) //Position: 0xAB87 / 43911
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_217();
	iVar1 = 0;
	if (!Function_79(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_216(iParam0[iVar03], 8);
		}
		else if (Function_215())
		{
			iVar1 = 1;
			Function_216(iParam0[iVar03], 8);
		}
		Function_216(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_79(iParam0[iVar03], 4))
		{
			if (!Function_79(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_79(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_79(iParam0[03], 8) || iVar1));
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
				Function_216(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_79(iParam0[iVar03], 4))
		{
			if (!Function_79(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_216(iParam0[iVar03], 2);
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
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_216(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_216(iParam0[iVar03], 2);
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
	Function_214();
	return 1;
}

void Function_214() //Position: 0xAF02 / 44802
{
	if (!Function_163(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_215() //Position: 0xAF42 / 44866
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

void Function_216(var uParam0, int iParam1) //Position: 0xAF6D / 44909
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_217() //Position: 0xAF7E / 44926
{
	if (!Function_163(128))
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

void Function_218(bool bParam0, int iParam1, int iParam2) //Position: 0xAFC0 / 44992
{
	if (bParam0)
	{
		PRINTSTRING("CALLING DESTROY GC OBJECTS!");
		PRINTNL();
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAR_ALL_CORPSES();
	Function_3();
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(iParam1);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_221();
	STREAMING_EVICT_ALL();
	iParam2 = iParam2;
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_219(&iLocal_112, "jobs", 10, 0);
	Function_222(8192);
	return;
}

var Function_219(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB030 / 45104
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_220(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_216(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_220(var uParam0, int iParam1, int iParam2) //Position: 0xB068 / 45160
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_79(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_216(uParam0[iVar03], 4);
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

void Function_221() //Position: 0xB12C / 45356
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_222(int iParam0) //Position: 0xB140 / 45376
{
	int iVar0;
	
	if (Function_6(iParam0, 1) && Function_6(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0xB174 / 45428
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_7(iParam0))
	{
		Function_73();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_16(iParam0);
	if (StackVal != 2)
	{
		Function_13("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_21(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_15(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

int Function_224(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB284 / 45700
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_228(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_225(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_225(bParam0, bParam1, bParam2, 4294967295);
}

int Function_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB2E2 / 45794
{
	var uVar0;
	
	if (!Function_227(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_228(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_226(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_226(int iParam0) //Position: 0xB437 / 46135
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_227(int iParam0) //Position: 0xB475 / 46197
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_228(int iParam0, int iParam1, int iParam2) //Position: 0xB48A / 46218
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_229(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB4AA / 46250
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_79(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_216(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_216(uParam0[iVar03], 8);
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

