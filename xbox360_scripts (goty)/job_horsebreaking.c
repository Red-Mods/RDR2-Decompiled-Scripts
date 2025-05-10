//Decompiled with MagicRDR v1.0
//Function Count : 238
//Statics Count : 555
//Natives Count : 406
//Parameters Count : 10

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0.0f;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	float fLocal_25 = 0.0f;
	float fLocal_26 = 0.0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	bool bLocal_32 = false;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 1;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	float fLocal_59 = 0.0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
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
	var uLocal_101 = 5;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	float fLocal_121 = 0.0f;
	float fLocal_122 = 0.0f;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 2;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	struct<329> Local_143 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	int iLocal_493 = 0;
	bool bLocal_494 = false;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	bool bLocal_497 = false;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	bool bLocal_500 = false;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	bool bLocal_503 = false;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	vector3 vLocal_506 = { 0.0f, 0.0f, 0.0f };
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
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar1;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	iLocal_21 = 0;
	fLocal_22 = 12.0f;
	fLocal_23 = 16.0f;
	fLocal_24 = 26.0f;
	fLocal_25 = 30.0f;
	fLocal_26 = 1.0f;
	bLocal_32 = RAND_FLOAT_RANGE(3.0f, 8.0f);
	iLocal_33 = 1;
	iLocal_34 = 0;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_58 = 0;
	fLocal_59 = 0.0f;
	iLocal_85 = 0;
	iLocal_86 = 0;
	fLocal_121 = 0.5f;
	fLocal_122 = 0.0f;
	iLocal_137 = 0;
	bLocal_138 = false;
	iLocal_406 = 0;
	iLocal_407 = 0;
	iLocal_408 = 0;
	bLocal_409 = false;
	iLocal_410 = 0;
	bLocal_411 = false;
	iLocal_412 = 0;
	bLocal_413 = false;
	bLocal_414 = false;
	iLocal_415 = 0;
	iLocal_542 = 0;
	iLocal_543 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_493 = 1;
	bVar1 = false;
	Function_237(&iLocal_471, 976, 2, 0);
	Function_237(&iLocal_471, 113, 2, 0);
	Function_237(&iLocal_471, 646, 2, 0);
	if (!bVar1)
	{
		bLocal_470 = Function_232(StackVal, 2, 6);
		Function_231(bLocal_470, 1);
		bVar1 = true;
	}
	Function_230(28);
	Function_226(StackVal, 0, 10);
	while (!Function_221(&iLocal_130) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	STREAMING_LOAD_BOUNDS(Global_34574, 150.0f, 1);
	while (!IS_EXITFLAG_SET() && !iLocal_412)
	{
		if (bVar1)
		{
			Function_193(bLocal_470);
			if (!Function_192(bLocal_470) != 2)
			{
				if (bLocal_138)
				{
					iLocal_493 = 11;
					bLocal_409 = false;
				}
				else
				{
					iLocal_493 = 10;
					bLocal_409 = true;
				}
			}
		}
		if (iLocal_493 == 11 && iLocal_493 == 10)
		{
			Function_99(&ScriptParam_0);
		}
		else
		{
			iLocal_412 = 1;
		}
		WAIT(false);
	}
	if (StackVal == Global_30640[1])
	{
		Function_91(&Global_6364, &Global_7287, 0, 0);
	}
	else if (StackVal == Global_30693[0])
	{
		Function_91(&Global_6815, &Global_7954, 3, 0);
	}
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	if (IS_BLIP_VALID(bLocal_452))
	{
		REMOVE_BLIP(bLocal_452);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "HB_Fail_Attack"))
	{
		DECOR_REMOVE(Global_34573, "HB_Fail_Attack");
	}
	if (IS_LAYOUTREF_VALID(bLocal_453))
	{
		RELEASE_LAYOUT_REF(bLocal_453);
	}
	if (IS_LAYOUTREF_VALID(bLocal_454))
	{
		RELEASE_LAYOUT_REF(bLocal_454);
	}
	if (IS_ACTOR_VALID(bLocal_451))
	{
		RELEASE_ACTOR(bLocal_451);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_456);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_456);
	Function_90();
	Function_89();
	Function_88();
	Function_87();
	Function_86();
	Function_82(&iLocal_471);
	if (!iLocal_410)
	{
		Function_81(bLocal_470);
	}
	else if (bLocal_409)
	{
		if (Global_3382 || Global_3380)
		{
			Function_19(bLocal_470, 1, 1, 0);
		}
		else
		{
			Function_19(bLocal_470, 1, 1, 0);
		}
	}
	else
	{
		Global_13172[bLocal_47011].f_36 = GET_TIME_OF_DAY();
		Function_11(bLocal_470);
	}
	if (Function_8(bLocal_470))
	{
		Function_81(bLocal_470);
	}
	Function_6(28);
	iLocal_410 = 0;
	Function_2(0, !IS_GAME_RESETTING());
	TASK_SEQUENCE_RELEASE(bLocal_449, 1);
	if (IS_OBJECT_VALID(bLocal_468))
	{
		DESTROY_OBJECT(bLocal_468);
	}
	TASK_CLEAR(Function_1());
	ENABLE_AMBIENT_SPAWNING(true);
	TERMINATE_THIS_SCRIPT();
	return;
}

var Function_1() //Position: 0x2D6 / 726
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_2(bool bParam0, bool bParam1) //Position: 0x2EB / 747
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	RESET_FACTIONS();
	if (bParam0)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	Function_5();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_4();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	if (bParam1)
	{
		Function_3(1.0f);
	}
	Function_82(&iLocal_130);
	Function_6(8192);
	return;
}

void Function_3(bool bParam0) //Position: 0x350 / 848
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

void Function_4() //Position: 0x36D / 877
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_5() //Position: 0x382 / 898
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_6(bool bParam0) //Position: 0x396 / 918
{
	if (Function_7(bParam0, 1) && !Function_7(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_7(bool bParam0, int iParam1) //Position: 0x3C3 / 963
{
	return (bParam0 && iParam1) == 0;
}

bool Function_8(bool bParam0) //Position: 0x3D0 / 976
{
	if (!Function_10(bParam0))
	{
		return 0;
	}
	if (!Function_9(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x3F4 / 1012
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x409 / 1033
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_11(bool bParam0) //Position: 0x420 / 1056
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_8(bParam0))
	{
		return;
	}
	iVar0 = Function_18(bParam0);
	if (StackVal == 2)
	{
		Function_15("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x4C6 / 1222
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

bool Function_13() //Position: 0x505 / 1285
{
	if (Function_7(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

struct<24> Function_14(char* cParam0) //Position: 0x520 / 1312
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

void Function_15(char* cParam0, bool bParam1) //Position: 0x776 / 1910
{
	struct<4> Var0;
	
	if (!Function_8(bParam1))
	{
		return;
	}
	switch (Function_18(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_16(Function_17(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_18(bParam1), Function_17(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_18(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_16(int iParam0) //Position: 0x89A / 2202
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

int Function_17(bool bParam0) //Position: 0x8D4 / 2260
{
	if (!Function_10(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

int Function_18(bool bParam0) //Position: 0x8F4 / 2292
{
	if (!Function_10(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_19(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x90F / 2319
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_8(bParam0))
	{
		Function_79();
		return;
	}
	bVar0 = Function_18(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_78())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_17(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		if (Function_78())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_72();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_78())
	{
		Function_71();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_15("DEED_COMPLETE", bParam0);
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
			Function_65(bParam0);
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
						switch (Function_17(bParam0))
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
			Function_23(1);
			Function_21(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_20(bParam0, &Var14);
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

void Function_20(int iParam0, int iParam1) //Position: 0xB63 / 2915
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_21(int iParam0, int iParam1) //Position: 0xB9D / 2973
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_22())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_22() //Position: 0xBDF / 3039
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_23(bool bParam0) //Position: 0xBE8 / 3048
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_54();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_25();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_24(&Global_63095, 1);
		Function_24(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_24(int iParam0, int iParam1) //Position: 0xC39 / 3129
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_25() //Position: 0xC4C / 3148
{
	Function_52();
	Function_51();
	Function_51();
	Function_50();
	Function_50();
	Function_49();
	Function_49();
	Function_32(0);
	Function_32(0);
	if (!Function_22())
	{
		Function_30();
		Function_29();
		Function_28();
		Function_27();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_26();
	return;
}

void Function_26() //Position: 0xC9E / 3230
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

void Function_27() //Position: 0xDA4 / 3492
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

void Function_28() //Position: 0xDD7 / 3543
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

void Function_29() //Position: 0xF65 / 3941
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

void Function_30() //Position: 0x1119 / 4377
{
	Function_31(&Global_28260, 1, 0);
	return;
}

void Function_31(int iParam0, bool bParam1, int iParam2) //Position: 0x1127 / 4391
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
	
	bVar0 = Function_1();
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

struct<8> Function_32(int iParam0) //Position: 0x1318 / 4888
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
					iVar2 = ((Function_48((50 + iVar4)) + Function_48((183 + iVar4))) + Function_48((90 + iVar4)));
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
	Function_33(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_33(int iParam0, bool bParam1, bool bParam2) //Position: 0x13BE / 5054
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
		Function_47(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_46(iParam0);
	if (bParam2)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1659 / 5721
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_45(390))), 32);
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
					bVar19 = (Function_44(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_44(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_39(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_36(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_35(), &Var9);
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

var Function_35() //Position: 0x1C86 / 7302
{
	int iVar0;
	
	return iVar0;
}

var Function_36(int iParam0) //Position: 0x1C8E / 7310
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_37(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C9F / 7327
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_38(char* cParam0, bool bParam1) //Position: 0x1D94 / 7572
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_39(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1DAD / 7597
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_41(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_40(Function_41(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_40(int iParam0, int iParam1) //Position: 0x1E12 / 7698
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_41(int iParam0, bool bParam1) //Position: 0x1E24 / 7716
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1E36 / 7734
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x1F66 / 8038
{
	return Global_35278[iParam020].f_48;
}

float Function_44(int iParam0) //Position: 0x1F75 / 8053
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_45(int iParam0) //Position: 0x1FAE / 8110
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_46(int iParam0) //Position: 0x1FEB / 8171
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

int Function_47(int iParam0, bool bParam1, bool bParam2) //Position: 0x2185 / 8581
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

int Function_48(bool bParam0) //Position: 0x23C9 / 9161
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_49() //Position: 0x240A / 9226
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
		iVar2 = ((Function_48((50 + iVar3) + 15) + Function_48((183 + iVar3) + 15)) + Function_48((90 + iVar3) + 15));
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
	Function_33(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_50() //Position: 0x2493 / 9363
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
			iVar2 = ((Function_48((50 + iVar3) + 8) + Function_48((183 + iVar3) + 8)) + Function_48((90 + iVar3) + 8));
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
	Function_33(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_51() //Position: 0x252A / 9514
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
		iVar2 = ((Function_48((50 + iVar3)) + Function_48((183 + iVar3))) + Function_48((90 + iVar3)));
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
	Function_33(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_52() //Position: 0x25A9 / 9641
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_53(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_33(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x25E2 / 9698
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
	Function_47(iParam0, bParam1, 1);
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_34(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_54() //Position: 0x27EC / 10220
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_62(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_62(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_56(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_56(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_55(StackVal, StackVal, vVar0))
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

bool Function_55(vector3 vParam0) //Position: 0x28A7 / 10407
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_56(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x28BF / 10431
{
	int iVar0;
	
	iVar0 = Function_60(uParam2, uParam3);
	if (Function_59(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_58(&Global_63095, 1);
			Function_24(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_58(&Global_63095, 2);
			Function_24(&Global_63095, 1);
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
		Function_58(&Global_63095, 2);
		Function_24(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_57();
	return StackVal, StackVal, Function_57();
}

vector3 Function_57() //Position: 0x29A6 / 10662
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_58(var uParam0, int iParam1) //Position: 0x29AF / 10671
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_59(int iParam0) //Position: 0x29BE / 10686
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_60(bool bParam0, bool bParam1) //Position: 0x29D4 / 10708
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
				fVar2 = Function_61(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_61(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_59(bVar0) && !bParam1)
	{
		bVar0 = Function_60(bParam0, 1);
	}
	return bVar0;
}

float Function_61(vector3 vParam0, vector3 vParam3) //Position: 0x2A9B / 10907
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_62(var uParam0, int iParam1) //Position: 0x2AB8 / 10936
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_64(Global_34573, &vVar4);
	if (!Function_63(Global_30640[0]))
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
	if (!Function_63(Global_30640[2]))
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
	if (!Function_63(Global_30640[1]))
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
	if (!Function_63(Global_30658[1]))
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
	if (!Function_63(Global_30658[3]))
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
	if (!Function_63(Global_30658[2]))
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
	if (!Function_63(Global_30658[4]))
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
	if (!Function_63(Global_30668[0]))
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
	if (!Function_63(Global_30668[1]))
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
	if (!Function_63(Global_30668[2]))
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
	if (!Function_63(Global_30679[0]))
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
	if (!Function_63(Global_30685[0]))
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
	if (!Function_63(Global_30685[1]))
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
	if (!Function_63(Global_30685[2]))
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
	if (!Function_63(Global_30693[0]))
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
	if (!Function_63(Global_30693[1]))
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
	if (!Function_63(Global_30693[2]))
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
	if (!Function_63(Global_30707[2]))
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
	if (!Function_63(Global_30707[3]))
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
	if (!Function_63(Global_30707[0]))
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
	if (!Function_63(Global_30717[0]))
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
	if (!Function_63(Global_30723[2]))
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
	if (!Function_63(Global_30723[1]))
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
	if (!Function_63(Global_30723[0]))
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
	if (!Function_63(Global_30679[1]))
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
	if (!Function_63(Global_30707[1]))
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
	Function_58(&Global_63095, 2);
	Function_24(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_55(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_63(int iParam0) //Position: 0x32DD / 13021
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_7(uVar0, 0x1000000) || Function_7(uVar0, 0x2000000)) || Function_7(uVar0, 0x4000000)) || !Function_7(uVar0, 0x10000000));
}

void Function_64(bool bParam0, int iParam1) //Position: 0x3318 / 13080
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_65(bool bParam0) //Position: 0x3325 / 13093
{
	int iVar0;
	int iVar1;
	
	if (!Function_10(bParam0))
	{
		return;
	}
	switch (Function_18(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_17(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_70(12, 1, 0, 0);
				Function_69(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_70(13, 1, 0, 0);
				Function_69(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_70(14, 1, 0, 0);
				Function_69(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_70(15, 1, 0, 0);
				Function_69(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_70(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_17(bParam0))
			{
				case 0x00000000:
					if (Function_68(bParam0) == 1)
					{
						iVar0 = Function_67(bParam0);
						if (Function_66(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_69(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_69(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_69(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_69(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_69(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_69(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_69(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_69(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_69(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_69(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_69(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_69(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_69(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_69(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_69(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_69(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_69(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_69(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_69(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_69(4, 19);
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
								Function_70(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_70(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_70(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_67(bParam0) == 0)
			{
				if (Function_68(bParam0) == 1)
				{
					Function_70(458, 1, 0, 0);
					iVar0 = Function_17(bParam0);
					if (Function_66(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_69(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_69(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_69(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_69(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_69(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_69(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_69(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_69(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_68(bParam0) == 1)
			{
				Function_70(400, 1, 0, 0);
			}
			switch (Function_17(bParam0))
			{
				case 0x00000001:
					Function_70(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_69(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_69(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_69(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_70(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_69(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_69(6, 9);
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

bool Function_66(int iParam0) //Position: 0x3801 / 14337
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_67(bool bParam0) //Position: 0x3817 / 14359
{
	if (!Function_10(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_68(bool bParam0) //Position: 0x3836 / 14390
{
	if (!Function_10(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_69(int iParam0, bool bParam1) //Position: 0x3850 / 14416
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

int Function_70(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x38B7 / 14519
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
	Function_47(iParam0, TO_FLOAT(bParam1), 1);
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_71() //Position: 0x3AD7 / 15063
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
	PLAYSTAT_INT("HC_MONEY", Function_48(0));
	PLAYSTAT_INT("HC_FAME", Function_48(3));
	PLAYSTAT_INT("HC_HONOR", Function_48(1));
	return;
}

void Function_72() //Position: 0x3C2F / 15407
{
	int iVar0;
	int iVar1;
	
	if (!Function_77(Global_6269))
	{
		return;
	}
	iVar0 = Function_48(24);
	iVar1 = Function_76(Global_6269);
	if (!Function_77(iVar0) && Function_75(iVar1) < 0)
	{
		Function_33(24, Global_6269, 0);
		Function_73(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_75(Function_76(iVar0)))
	{
		Function_33(24, Global_6269, 0);
		Function_73(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_73(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3CAF / 15535
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
		Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_74(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4003 / 16387
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

int Function_75(int iParam0) //Position: 0x4086 / 16518
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_76(int iParam0) //Position: 0x40A0 / 16544
{
	if (!Function_77(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_77(int iParam0) //Position: 0x40BA / 16570
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_78() //Position: 0x40D0 / 16592
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_79() //Position: 0x40FB / 16635
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
			Function_80(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_80(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4342 / 17218
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_81(bool bParam0) //Position: 0x436B / 17259
{
	int iVar0;
	
	if (!Function_8(bParam0))
	{
		Function_79();
		return;
	}
	iVar0 = Function_18(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_15("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_82(int iParam0) //Position: 0x43BE / 17342
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_83(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x43E4 / 17380
{
	if (Function_85(uParam0[iParam13], 4))
	{
		if (Function_85(uParam0[iParam13], 1))
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
			Function_84(uParam0[iParam13], 1);
			Function_84(uParam0[iParam13], 2);
			Function_84(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_84(var uParam0, int iParam1) //Position: 0x4512 / 17682
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_85(int iParam0, int iParam1) //Position: 0x452C / 17708
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_86() //Position: 0x4549 / 17737
{
	RELEASE_LAYOUT_REF(Local_316);
	return;
}

void Function_87() //Position: 0x4555 / 17749
{
	RELEASE_LAYOUT_REF(Local_226);
	return;
}

void Function_88() //Position: 0x4560 / 17760
{
	RELEASE_LAYOUT_REF(Local_143);
	return;
}

void Function_89() //Position: 0x456B / 17771
{
	if (IS_OBJECTSET_VALID(bLocal_455))
	{
		DESTROY_OBJECTSET(bLocal_455);
	}
	return;
}

void Function_90() //Position: 0x4580 / 17792
{
	DESTROY_CAMERA(bLocal_139);
	return;
}

void Function_91(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x458B / 17803
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_98(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_98(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_98(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_97(uParam0[iVar02], 8);
	}
	Function_97(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_96(StackVal);
	if (bParam3)
	{
		Function_92(uParam0, uParam1, iParam2, 0);
	}
}

void Function_92(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4625 / 17957
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_95(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_94(Global_29007), Function_93(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_98(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_98(uParam0[iParam22], 1) && !bParam3)
	{
		Function_95(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_94(Global_29007), Function_93(Global_29007), false, 0);
	}
}

int Function_93(int iParam0) //Position: 0x4774 / 18292
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

int Function_94(int iParam0) //Position: 0x479F / 18335
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

void Function_95(var uParam0, int iParam1) //Position: 0x47D3 / 18387
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_96(bool bParam0) //Position: 0x47E2 / 18402
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

void Function_97(var uParam0, int iParam1) //Position: 0x487C / 18556
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_98(var uParam0, int iParam1) //Position: 0x4893 / 18579
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_99(int iParam0) //Position: 0x48AF / 18607
{
	bool bVar0;
	var uVar1;
	int iVar5;
	bool bVar6;
	
	switch (iLocal_543)
	{
		case 0x00000000:
			if (Function_221(&iLocal_471))
			{
				if (!IS_LAYOUTREF_VALID(bLocal_454))
				{
					Function_179();
				}
				memcpy(&uVar1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177("hb_horse"), 4);
				Function_175(bLocal_454, "f_horsestart");
				vLocal_416 = { StackVal, StackVal, Function_175(bLocal_454, "f_horsestart") };
				Function_175(bLocal_454, "f_helperstart");
				vLocal_419 = { StackVal, StackVal, Function_175(bLocal_454, "f_helperstart") };
				if (!IS_LAYOUTREF_VALID(bLocal_453))
				{
					bLocal_453 = CREATE_LAYOUT("RidingLayout");
				}
				if (!IS_ACTOR_VALID(bLocal_451))
				{
					bLocal_451 = CREATE_ACTOR_IN_LAYOUT(bLocal_453, &uVar1, 976, vLocal_416, 0.0f, 0.0f, 0.0f);
					DECOR_SET_BOOL(bLocal_451, "break", true);
					REFERENCE_ACTOR(bLocal_451);
					SET_ACTOR_MIN_SPEED(bLocal_451, 1);
					SET_ACTOR_MAX_SPEED(bLocal_451, 2);
					SET_ACTOR_RIDEABLE(bLocal_451, 0);
					Function_174();
					bLocal_449 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, uLocal_467, 2, 1, 0, 1, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_451, bLocal_449, 4294967295);
					TASK_PRIORITY_SET(bLocal_451, 1);
					SET_ACTOR_UPDATE_PRIORITY(bLocal_451, false);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_451, 1);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_451, 11, 0);
				}
				if (Function_173(bLocal_451, 1, 0x41700000))
				{
					Function_169();
					Function_168();
					iLocal_543 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0))
			{
				if (Function_163(iParam0->f_12))
				{
					Function_162();
					ENABLE_AMBIENT_SPAWNING(false);
					AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
					if (!iLocal_408)
					{
						Function_175(bLocal_454, "f_playerstart");
						vLocal_422 = { StackVal, StackVal, Function_175(bLocal_454, "f_playerstart") };
						Function_175(bLocal_454, "f_stableplayerpos");
						vLocal_443 = { StackVal, StackVal, Function_175(bLocal_454, "f_stableplayerpos") };
						Function_175(bLocal_454, "f_helperstablepos");
						vLocal_446 = { StackVal, StackVal, Function_175(bLocal_454, "f_helperstablepos") };
						if (Function_55(StackVal, StackVal, vLocal_416))
						{
						}
						else
						{
							iLocal_408 = 1;
						}
					}
					else
					{
						DESTROY_GC_OBJECTS(1, 1);
						iLocal_543 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_456);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_456);
			CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_456, 15);
			memcpy(&uVar1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177("hb_rancher"), 4);
			if (!IS_ACTOR_VALID(bLocal_450))
			{
				Function_159(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_410 = 0;
				iLocal_412 = 1;
				bLocal_409 = false;
			}
			TELEPORT_ACTOR_WITH_HEADING(bLocal_450, vLocal_419, 0.0f, 1, 1, 1);
			TASK_PRIORITY_SET(bLocal_450, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_450, 1);
			TASK_STAND_STILL(bLocal_450, -1.0f, 0, 0);
			TELEPORT_ACTOR(Global_34573, &vLocal_422, 1, 1, 1);
			SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bLocal_450), 1.0f, false, 1092616192);
			DECOR_SET_INT(Global_34573, "HorseBreak", 4294967295);
			Function_155(bLocal_450, Global_34573);
			Function_155(Global_34573, bLocal_450);
			bLocal_458 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_453, "friendlySqd"));
			SQUAD_JOIN(bLocal_450, bLocal_458);
			SQUAD_JOIN(Global_34573, bLocal_458);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
			iLocal_543 = 4;
			break;
		
		case 0x00000003:
			iLocal_543 = 4;
			break;
		
		case 0x00000004:
			Function_154(StackVal);
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_151())
			{
				REMOVE_CAMERA_FROM_CHANNEL(bLocal_468, 0);
				REMOVE_CAMERA_FROM_CHANNEL(bLocal_469, 0);
				iLocal_543 = 5;
			}
			break;
		
		case 0x00000005:
			Function_159(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			Function_150("JOB_HORSE_HopFence", 3.0f, 1, 2, 0, 0, 0, 0);
			SAY_SINGLE_LINE_CONTEXT(bLocal_450, 192, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_410 = 1;
			iLocal_543 = 6;
			break;
		
		case 0x00000006:
			if (!bLocal_411)
			{
				if (!IS_BLIP_VALID(bLocal_452))
				{
					bLocal_452 = ADD_BLIP_FOR_ACTOR(bLocal_451, 325, 0, 2, 0);
				}
				if (!IS_WEAPON_DRAWN(Global_34573))
				{
					if (!Function_149(&bLocal_500))
					{
						Function_147(&bLocal_500);
					}
					if (!ACTOR_HAS_WEAPON_IN_HAND(Global_34573, 21))
					{
						if (Function_145(&bLocal_500, 10.0f))
						{
							if (Function_144(Global_34573, bLocal_455))
							{
								if (!iLocal_544)
								{
									Function_143("JOB_HORSE_LassoHint", 0x41200000, 1, 0, 2, 1, 0);
									iLocal_544 = 1;
								}
								SAY_SINGLE_LINE_CONTEXT(bLocal_450, 193, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
							}
						}
					}
				}
				if (GET_LASSO_TARGET(Global_34573) == bLocal_451)
				{
					Function_147(&bLocal_497);
					if (!IS_ACTOR_RIDEABLE(bLocal_451))
					{
						SET_ACTOR_RIDEABLE(bLocal_451, 1);
					}
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_HBREAK_LASSOED_HORSE_APPROACHING_TO_BREAK", false, false, 0, 0, true, false);
				}
				else if (IS_ACTOR_RIDEABLE(bLocal_451))
				{
					SET_ACTOR_RIDEABLE(bLocal_451, 0);
				}
				Function_154(StackVal);
				if (Function_144(Global_34573, bLocal_455))
				{
					if (GET_MOUNT(Global_34573) == bLocal_451)
					{
						if (IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(0, 0, 0, 0);
						}
						Function_142(&bLocal_494);
						if (IS_BLIP_VALID(bLocal_452))
						{
							REMOVE_BLIP(bLocal_452);
						}
						TASK_CLEAR(bLocal_451);
						SAY_SINGLE_LINE_CONTEXT(bLocal_450, 195, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						iLocal_543 = 7;
					}
					else if (IS_ACTOR_VALID(bLocal_451))
					{
						if (!GET_TASK_STATUS(bLocal_451, 36) != 1)
						{
							TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_451, bLocal_449, 4294967295);
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!GET_MOUNT(Global_34573) != bLocal_451)
			{
				iLocal_406++;
				SAY_SINGLE_LINE_CONTEXT(bLocal_450, 197, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_147(&bLocal_500);
				iLocal_543 = 6;
			}
			if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Global_34573), "HorseBreak") == 1)
			{
				if (!iLocal_415)
				{
					bVar0 = TASK_SEQUENCE_OPEN();
					if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
					{
						TASK_GO_TO_COORD(false, &vLocal_446, 4);
					}
					TASK_FACE_ACTOR(false, Function_1(), 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_450, bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					iLocal_415 = 1;
				}
				iLocal_543 = 9;
			}
			if (IS_ACTOR_RIDEABLE(bLocal_451))
			{
				SET_ACTOR_RIDEABLE(bLocal_451, 0);
			}
			Function_154(StackVal);
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			bLocal_466 = Function_141(bLocal_454, Function_35(), uLocal_457, bLocal_451, 4, 330, 4294967295, 0, 0, 1);
			Function_154(StackVal);
			if (!IS_ACTOR_RIDEABLE(bLocal_451))
			{
				SET_ACTOR_RIDEABLE(bLocal_451, 1);
			}
			if (bLocal_414)
			{
				OPEN_DOOR_DIRECTION(uLocal_459[4], true);
				OPEN_DOOR_DIRECTION(uLocal_459[5], false);
			}
			Function_150("JOB_HORSE_Stable", 3.0f, 1, 2, 0, 0, 0, 0);
			iLocal_543 = 10;
			break;
		
		case 0x0000000A:
			Function_154(StackVal);
			if (!GET_MOUNT(Global_34573) != bLocal_451)
			{
				iLocal_543 = 16;
				Function_150("JOB_HORSE_Fail_UnMounted_Horse", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (Function_137(bLocal_466, 0, 1, 0, 0, 0))
			{
				if (IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				Function_136(bLocal_466);
				SET_CAMERA_POSITION(bLocal_468, vLocal_431);
				SET_CAMERA_DIRECTION(bLocal_468, vLocal_434, 1);
				if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_468, false))
				{
					SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_468, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
				}
				iLocal_543 = 13;
			}
			break;
		
		case 0x0000000D:
			SET_CAMERA_POSITION(bLocal_469, vLocal_437);
			SET_CAMERA_DIRECTION(bLocal_469, vLocal_440, 1);
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_469, false))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_469, 0, 5.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_DISMOUNT(false, 1);
			TASK_FACE_COORD(false, &vLocal_443, 0);
			if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
			{
				TASK_GO_TO_COORD(false, &vLocal_443, 1);
			}
			TASK_FACE_ACTOR(false, bLocal_450, 0, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(Global_34573, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
			{
				TASK_GO_TO_COORD_AND_STAY(bLocal_451, &vLocal_506 + 36, 1, 0.0f);
			}
			else
			{
				TASK_STAND_STILL(bLocal_451, -1.0f, 0, 0);
			}
			Function_155(bLocal_450, Global_34573);
			Function_147(&bLocal_500);
			iLocal_543 = 11;
			break;
		
		case 0x0000000B:
			if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
			{
				iVar5 = Function_134(StackVal, StackVal, Global_34573, vLocal_443, 1.0f);
			}
			else
			{
				iVar5 = 1;
			}
			if ((StackVal || Function_154(iVar5) == 0) || Function_132(&bLocal_500) < 10.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_450, 196, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				Function_147(&bLocal_500);
				iLocal_543 = 12;
			}
			break;
		
		case 0x0000000C:
			if ((StackVal || Function_154(!IS_AMBIENT_SPEECH_PLAYING(bLocal_450)) == 0) || Function_132(&bLocal_500) < 5.0f)
			{
				iLocal_543 = 14;
			}
			break;
		
		case 0x0000000E:
			iParam0->f_28 = (Function_130(0, 0, 1, 0, 0) - iLocal_406);
			if (Function_129() > 4)
			{
				iParam0->f_28 *= 2;
			}
			if (iParam0->f_28 < 5)
			{
				iParam0->f_28 = 5;
			}
			Function_128(iParam0->f_28, 1);
			Function_100(StackVal, 2);
			iLocal_543 = 15;
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_450) && !HUD_IS_SHOWING_OBJECTIVE())
			{
				bLocal_409 = true;
				iLocal_412 = 1;
				iLocal_493 = 10;
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				TASK_STAND_STILL(bLocal_451, -1.0f, 0, 0);
				TASK_CLEAR(bLocal_450);
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
			if (IS_BLIP_VALID(bLocal_452))
			{
				REMOVE_BLIP(bLocal_452);
			}
			if (IS_OBJECT_VALID(bLocal_466))
			{
				bVar6 = GET_BLIP_ON_OBJECT(bLocal_466);
				if (IS_BLIP_VALID(bVar6))
				{
					REMOVE_BLIP(bVar6);
				}
			}
			iLocal_543 = 17;
			break;
		
		case 0x00000011:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				bLocal_409 = false;
				iLocal_412 = 1;
				TASK_CLEAR(bLocal_450);
				TASK_CLEAR(bLocal_451);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
			}
			break;
	}
	return;
}

void Function_100(int iParam0, int iParam1) //Position: 0x52FD / 21245
{
	if (!Function_127(3))
	{
		return;
	}
	if (Function_22())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			if (iParam1 == Global_30668[0])
			{
				Function_102(5, 2, 0, 0, 1);
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_102(9, 16, 0, 0, 1);
			}
			else if (iParam1 == Global_30693[0])
			{
				Function_102(7, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30693[0])
			{
				Function_102(8, 4, 0, 0, 1);
			}
			else if (iParam1 == Global_30640[1])
			{
				if (IS_PS3() || Function_101())
				{
					Function_102(4, 2, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_101() //Position: 0x53A0 / 21408
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_7(GET_GAME_EDITION(), 16);
	}
	return 0;
}

void Function_102(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x53D0 / 21456
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_127(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_125(bParam0, 2))
	{
		Function_70(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_143(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_123(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_124(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_23(1);
				Function_21(1, 0);
			}
			else
			{
				Function_121();
			}
		}
		Function_116(bParam0);
		if (StackVal && !Function_7(((((!Function_115() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_7((((Function_115() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_114(Global_76846, 2))
			{
				Function_109(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_104();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_103(3, bParam1);
				break;
			
			case 0x00000005:
				Function_103(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_103(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_103(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_103(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_103(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_69(2, 24);
				break;
			
			case 0x00000003:
				Function_69(2, 25);
				break;
			
			case 0x0000000F:
				Function_69(2, 26);
				break;
			
			case 0x0000000D:
				Function_69(2, 27);
				break;
			
			case 0x0000000E:
				Function_69(2, 28);
				break;
			}
	}
}

void Function_103(int iParam0, bool bParam1) //Position: 0x5666 / 22118
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

void Function_104() //Position: 0x56D1 / 22225
{
	if (Function_126(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_108(Global_28180);
			Global_28180.f_8 = Function_105(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_108(Global_28180);
			Global_28180.f_8 = Function_105(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_105(int iParam0, int iParam1) //Position: 0x574C / 22348
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
					if (Function_107(6, 0) || Function_107(12, 0))
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
					if (Function_106(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_107(5, 0))
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
					if (Function_106(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_106(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_106(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_106(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_107(26, 0))
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
					if (Function_106(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_106(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_106(27) && iVar18)
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
					if (Function_106(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_106(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_106(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_106(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_107(17, 0) && iVar15)
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
					if (Function_106(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_107(6, 0) && Function_106(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_106(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_107(9, 0) && Function_106(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_106(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_107(8, 0) && iVar19)
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
	if (Function_55(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_55(StackVal, StackVal, vVar3))
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
	if (!Function_55(StackVal, StackVal, vVar3))
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

int Function_106(int iParam0) //Position: 0x633D / 25405
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_107(int iParam0, bool bParam1) //Position: 0x6352 / 25426
{
	int iVar0;
	
	iVar0 = Function_76(iParam0);
	if (!Function_10(iVar0))
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

int Function_108(int iParam0) //Position: 0x638F / 25487
{
	int iVar0;
	int iVar1;
	
	if (!Function_126(iParam0))
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

void Function_109(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x63DE / 25566
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_111(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_110(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_110(char* cParam0, int iParam1) //Position: 0x644A / 25674
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

bool Function_111(bool bParam0, var uParam1, int iParam2) //Position: 0x6481 / 25729
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
		if (Function_113(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_112(uVar0))
		{
			case 0x00000002:
				if (!Function_114(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_112(char* cParam0) //Position: 0x64F9 / 25849
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

int Function_113(int iParam0) //Position: 0x659A / 26010
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_24(&iVar1, 2147483648);
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

bool Function_114(int iParam0, int iParam1) //Position: 0x65D7 / 26071
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_115() //Position: 0x65EA / 26090
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_116(bool bParam0) //Position: 0x6617 / 26135
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
			if (Function_123(bParam0, Function_120(bVar24)))
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
			if (Function_123(bParam0, Function_120(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_119(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_118(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_117(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_117(int iParam0) //Position: 0x67C7 / 26567
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

void Function_118(char* cParam0, int iParam1) //Position: 0x681E / 26654
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

var Function_119(int iParam0) //Position: 0x6843 / 26691
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

int Function_120(bool bParam0) //Position: 0x6899 / 26777
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_121() //Position: 0x68A5 / 26789
{
	return;
}

bool Function_122(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x68AB / 26795
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

bool Function_123(bool bParam0, int iParam1) //Position: 0x694F / 26959
{
	int iVar0;
	
	if (!Function_126(bParam0))
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

void Function_124(int iParam0, int iParam1) //Position: 0x69AE / 27054
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0, int iParam1) //Position: 0x6A03 / 27139
{
	int iVar0;
	
	if (!Function_126(iParam0))
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

bool Function_126(int iParam0) //Position: 0x6A30 / 27184
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x6A46 / 27206
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_128(bool bParam0, bool bParam1) //Position: 0x6A62 / 27234
{
	bool bVar0;
	
	bVar0 = Function_48(0);
	if ((Function_48(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_70(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_48(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_70(597, bParam0, 0, 0);
	}
	if ((Function_48(597) + Function_48(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_129() //Position: 0x6B2D / 27437
{
	return Global_12976.f_152;
}

int Function_130(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6B38 / 27448
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
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_48(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_131(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_131(bool bParam0) //Position: 0x6C3A / 27706
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

float Function_132(bool bParam0) //Position: 0x6D2B / 27947
{
	if (Function_149(bParam0))
	{
		if (Function_133(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_133(int iParam0) //Position: 0x6DF3 / 28147
{
	return Function_7(*iParam0, 2);
}

int Function_134(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6E00 / 28160
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_135(bParam0);
		if (VDIST(Function_135(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_135(bool bParam0) //Position: 0x6E8A / 28298
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

void Function_136(bool bParam0) //Position: 0x6EF4 / 28404
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

bool Function_137(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6F7E / 28542
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
				Function_140(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_139(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_139(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_138(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_138(&iVar6, &vVar3);
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

int Function_138(int iParam0, int iParam1) //Position: 0x7190 / 29072
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_55(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_55(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_139(bool bParam0, bool bParam1) //Position: 0x71FB / 29179
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x721A / 29210
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
	else if (!bParam1 || Function_139(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

var Function_141(bool bParam0, char* cParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x7277 / 29303
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, cParam1, bParam2, bParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

void Function_142(bool bParam0) //Position: 0x72F4 / 29428
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7308 / 29448
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_144(bool bParam0, bool bParam1) //Position: 0x7383 / 29571
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

bool Function_145(bool bParam0, int iParam1) //Position: 0x73D5 / 29653
{
	if (Function_146(bParam0, iParam1))
	{
		Function_142(bParam0);
		return 1;
	}
	return 0;
}

bool Function_146(bool bParam0, float fParam1) //Position: 0x73ED / 29677
{
	if (Function_149(bParam0))
	{
		if (Function_132(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_147(bool bParam0) //Position: 0x7409 / 29705
{
	Function_148(bParam0, 0.0f);
	return;
}

void Function_148(var uParam0, float fParam1) //Position: 0x7415 / 29717
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_58(uParam0, 1);
	Function_24(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_149(bool bParam0) //Position: 0x7436 / 29750
{
	return Function_7(*bParam0, 1);
}

void Function_150(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7443 / 29763
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
			Var0 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_151() //Position: 0x74C8 / 29896
{
	bool bVar0;
	
	switch (iLocal_542)
	{
		case 0x00000000:
			if (STREAMING_ARE_BOUNDS_LOADED(Global_34574, 150.0f))
			{
				STREAMING_UNLOAD_BOUNDS();
				bLocal_469 = CREATE_CAMERA_IN_LAYOUT(bLocal_453, "downCamera", 2);
				Function_153();
				SET_CAMERA_POSITION(bLocal_469, vLocal_425);
				SET_CAMERA_DIRECTION(bLocal_469, vLocal_428, 1);
				SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_469, 0, 7.0f, 0.0f, 6, 0, 0, 0, 0, 0);
				iLocal_542 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_152(4.0f))
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_450, 191, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				iLocal_542 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_542 = 3;
			break;
		
		case 0x00000003:
			if (Function_152(1.5f))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(false, &vLocal_506 + 24, 0);
				TASK_GO_TO_COORD(false, &vLocal_506 + 24, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_450, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				iLocal_542 = 4;
			}
			break;
		
		case 0x00000004:
			if (GET_TASK_STATUS(bLocal_450, 0) == 0)
			{
				TASK_FACE_ACTOR(bLocal_450, Global_34573, 1, 3212836864);
				iLocal_542 = 5;
			}
			break;
		
		case 0x00000005:
			REMOVE_CAMERA_FROM_CHANNEL(bLocal_468, 0);
			REMOVE_CAMERA_FROM_CHANNEL(bLocal_469, 0);
			TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_451, bLocal_449, 4294967295);
			CAMERA_RESET(0);
			TASK_CLEAR(Global_34573);
			return 1;
			break;
	}
	return 0;
}

bool Function_152(int iParam0) //Position: 0x7603 / 30211
{
	if (!Function_149(&bLocal_140))
	{
		Function_147(&bLocal_140);
	}
	else if (Function_145(&bLocal_140, iParam0))
	{
		return 1;
	}
	return 0;
}

void Function_153() //Position: 0x7627 / 30247
{
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		vLocal_425 = { -3294.864f, 17.42f, 2716.469f };
		vLocal_428 = { 0.889f, -0.032f, 0.458f };
		vLocal_431 = { -3299.569f, 18.946f, 2681.378f };
		vLocal_434 = { -0.194f, -0.033f, -0.98f };
		vLocal_437 = { -3301.032f, 18.907f, 2685.031f };
		vLocal_440 = { 0.392f, -0.029f, -0.92f };
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		vLocal_425 = { -2639.4f, 32.432f, 4244.452f };
		vLocal_428 = { 0.188f, -0.147f, 0.971f };
		vLocal_431 = { -2617.708f, 32.171f, 4250.527f };
		vLocal_434 = { -0.987f, 0.007f, -0.161f };
		vLocal_437 = { -2618.443f, 32.177f, 4249.91f };
		vLocal_440 = { -1.0f, 0.015f, 0.016f };
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		vLocal_425 = { -62.444f, 122.71f, 1427.971f };
		vLocal_428 = { -0.178f, -0.511f, -0.841f };
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(2)");
	}
	return;
}

int Function_154(bool bParam0) //Position: 0x7877 / 30839
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = (IS_AI_ACTOR_UNALERTED(bLocal_450) && !IS_AI_ACTOR_IN_COMBAT(bLocal_450));
	bVar2 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bLocal_450;
	if (Global_3404 != 1 || Global_3403 != 1)
	{
		iVar0 = 7;
	}
	if (GET_LAST_ATTACKER(bLocal_450) == Global_34573)
	{
		iVar0 = 1;
	}
	else if (!bVar1 && bVar2)
	{
		iVar0 = 2;
	}
	else if (GET_LAST_ATTACKER(bLocal_451) != Global_34573 && GET_LAST_HIT_WEAPON(bLocal_451) == 21)
	{
		iVar0 = 3;
	}
	else if (!IS_ACTOR_ALIVE(bLocal_451))
	{
		iVar0 = 4;
	}
	if (iLocal_543 <= 9)
	{
		if (!Function_144(bLocal_451, bLocal_455))
		{
			if (!GET_MOUNT(Global_34573) != bLocal_451)
			{
				iVar0 = 5;
			}
		}
		if (!Function_144(Global_34573, bLocal_455))
		{
			if (!Function_149(&bLocal_503))
			{
				Function_147(&bLocal_503);
			}
			if (Function_145(&bLocal_503, 8.0f))
			{
				iLocal_407++;
				if (iLocal_407 <= 3)
				{
					Function_143("JOB_HORSE_OutOfPenWarning", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					iVar0 = 6;
				}
			}
		}
		else if (Function_149(&bLocal_503))
		{
			Function_142(&bLocal_503);
			iLocal_407 = 0;
		}
	}
	else if (iLocal_543 > 9)
	{
		if (Global_29006 != bParam0)
		{
			if (!Function_149(&bLocal_503))
			{
				Function_147(&bLocal_503);
			}
			if (Function_145(&bLocal_503, 8.0f))
			{
				if (iLocal_407 <= 1)
				{
					Function_143("JOB_HORSE_GetToStable", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					iVar0 = 8;
				}
				iLocal_407++;
			}
		}
		else if (Function_149(&bLocal_503))
		{
			Function_142(&bLocal_503);
			iLocal_407 = 0;
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			break;
		
		case 0x00000007:
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_BrokeLaw", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_AttackHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_ThreatenedHelper", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_AttackHorse", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			DECOR_SET_INT(Global_34573, "HB_Fail_Attack", true);
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_KillHorse", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000006:
			SAY_SINGLE_LINE_CONTEXT(bLocal_450, 194, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_PlayerLeftPen", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000005:
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_HorseLeftPen", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000008:
			iLocal_543 = 16;
			Function_150("JOB_HORSE_Fail_SlowStable", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
	}
	return iVar0;
}

void Function_155(bool bParam0, bool bParam1) //Position: 0x7C73 / 31859
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_156(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_156(bool bParam0, vector3 vParam1) //Position: 0x7C8D / 31885
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_157(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_157(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_157(bool bParam0, vector3 vParam1) //Position: 0x7CC5 / 31941
{
	vector3 vVar0;
	
	Function_158(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_158(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_158(bool bParam0) //Position: 0x7D48 / 32072
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_159(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x7D59 / 32089
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
		bVar0 = Function_1();
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
			if (Function_22())
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
		Function_70(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_4();
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
	Function_160(iParam9);
}

void Function_160(bool bParam0) //Position: 0x7E49 / 32329
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
		Function_161();
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

void Function_161() //Position: 0x7EF8 / 32504
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

void Function_162() //Position: 0x7F6A / 32618
{
	bool bVar0;
	int iVar1;
	
	if (bLocal_413)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			bVar0 = uLocal_459[iVar1];
			if (IS_DOOR_VALID(bVar0))
			{
				CLOSE_DOOR_FAST(bVar0);
			}
			iVar1++;
		}
	}
	return;
}

bool Function_163(bool bParam0) //Position: 0x7F9E / 32670
{
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		return 1;
	}
	if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		if (IS_PERS_CHAR_VALID(bParam0))
		{
			if (Function_167(&(Global_6364[02])))
			{
				if (!IS_ACTOR_VALID(bLocal_450))
				{
					bLocal_450 = CREATE_ACTOR_IN_LAYOUT(bLocal_454, "FakeHorsebreakingJobGiver", 234, vLocal_419, 0.0f, 0.0f, 0.0f);
				}
				return 1;
			}
			bLocal_450 = Function_164(&Global_6364, &Global_7287, 0, 0, 0, 1);
			if (IS_ACTOR_VALID(bLocal_450))
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
			if (Function_167(&(Global_6815[32])))
			{
				if (!IS_ACTOR_VALID(bLocal_450))
				{
					bLocal_450 = CREATE_ACTOR_IN_LAYOUT(bLocal_454, "FakeHorsebreakingJobGiver", 273, vLocal_419, 0.0f, 0.0f, 0.0f);
				}
				return 1;
			}
			bLocal_450 = Function_164(&Global_6815, &Global_7954, 3, 0, 0, 1);
			if (IS_ACTOR_VALID(bLocal_450))
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

bool Function_164(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x81A8 / 33192
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_98(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_98(uParam0[iVar02], 2))
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
			if (!Function_98(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_95(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_166(StackVal, StackVal, StackVal, Global_6289, Function_35(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_98(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_95(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_95(uParam0[iVar02], 1);
	Function_165(StackVal, 1);
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

int Function_165(bool bParam0, bool bParam1) //Position: 0x833E / 33598
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

var Function_166(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x83E0 / 33760
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_35(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

bool Function_167(var uParam0) //Position: 0x84F9 / 34041
{
	return Function_98(uParam0, 1);
}

void Function_168() //Position: 0x8505 / 34053
{
	bool bVar0;
	
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("RidgewoodFarm_layout");
		bLocal_468 = CREATE_CAMERA_IN_LAYOUT(bVar0, "upCamera", 2);
		SET_CAMERA_POSITION(bLocal_468, -3302.57f, 17.947f, 2714.277f);
		SET_CAMERA_DIRECTION(bLocal_468, 0.305f, 0.044f, 0.951f, 1);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("Chuparosa_layout");
		bLocal_468 = CREATE_CAMERA_IN_LAYOUT(bVar0, "upCamera", 2);
		SET_CAMERA_POSITION(bLocal_468, -2639.184f, 33.658f, 4246.895f);
		SET_CAMERA_DIRECTION(bLocal_468, 0.588f, 0.153f, 0.795f, 1);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		bVar0 = FIND_NAMED_LAYOUT("BeechersHope_layout");
		bLocal_468 = CREATE_CAMERA_IN_LAYOUT(bVar0, "upCamera", 2);
		SET_CAMERA_POSITION(bLocal_468, -70.071f, 125.952f, 1415.838f);
		SET_CAMERA_DIRECTION(bLocal_468, -0.442f, -0.093f, 0.892f, 1);
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(2)");
	}
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_468, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_169() //Position: 0x875C / 34652
{
	STREAMING_SET_CUTSCENE_MODE(1);
	Function_170(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
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

void Function_170(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x87BD / 34749
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
	Function_4();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_1();
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
			if (Function_22())
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
				Function_158(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_35(), 2, Function_158(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_70(19, 1, 0, 0);
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
	if (uParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_172()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_172()));
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
	if (Function_171(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_230(0x4000000);
	}
	if (Function_171(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_230(0x8000000);
	}
}

bool Function_171(int iParam0) //Position: 0x8A6B / 35435
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_172() //Position: 0x8A87 / 35463
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

bool Function_173(bool bParam0, bool bParam1, float fParam2) //Position: 0x8B06 / 35590
{
	float fVar0;
	bool bVar1;
	
	if (Function_22() || !bParam1)
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

void Function_174() //Position: 0x8BA3 / 35747
{
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_INIT_CUTSCENE_DATA: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		Function_175(bLocal_454, "f_playerstart");
		vLocal_506 = { StackVal, StackVal, Function_175(bLocal_454, "f_playerstart") };
		Function_175(bLocal_454, "f_helperstart");
		*(&vLocal_506 + 12) = { StackVal, StackVal, Function_175(bLocal_454, "f_helperstart") };
		Function_175(bLocal_454, "f_helpergatepos");
		*(&vLocal_506 + 24) = { StackVal, StackVal, Function_175(bLocal_454, "f_helpergatepos") };
		Function_175(bLocal_454, "f_cameraintro");
		*(&vLocal_506 + 48) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraintro") };
		*(&vLocal_506 + 60) = { 0.946f, -0.163f, -0.279f };
		Function_175(bLocal_454, "f_camerawatchhorse");
		*(&vLocal_506 + 72) = { StackVal, StackVal, Function_175(bLocal_454, "f_camerawatchhorse") };
		*(&vLocal_506 + 84) = { 0.871f, -0.188f, -0.453f };
		Function_175(bLocal_454, "f_cameraDialog");
		*(&vLocal_506 + 96) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraDialog") };
		*(&vLocal_506 + 108) = { 0.764f, -0.128f, 0.632f };
		Function_175(bLocal_454, "f_cameraintro");
		*(&vLocal_506 + 120) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraintro") };
		*(&vLocal_506 + 132) = { 0.936f, -0.09f, -0.34f };
		Function_175(bLocal_454, "f_stablepos");
		*(&vLocal_506 + 36) = { StackVal, StackVal, Function_175(bLocal_454, "f_stablepos") };
		uLocal_467 = Local_143.f_328;
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_175(bLocal_454, "f_playerstart");
		vLocal_506 = { StackVal, StackVal, Function_175(bLocal_454, "f_playerstart") };
		Function_175(bLocal_454, "f_helperstart");
		*(&vLocal_506 + 12) = { StackVal, StackVal, Function_175(bLocal_454, "f_helperstart") };
		Function_175(bLocal_454, "f_helpergatepos");
		*(&vLocal_506 + 24) = { StackVal, StackVal, Function_175(bLocal_454, "f_helpergatepos") };
		Function_175(bLocal_454, "f_cameraintro");
		*(&vLocal_506 + 48) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraintro") };
		*(&vLocal_506 + 60) = { -0.031f, -0.13f, 0.991f };
		Function_175(bLocal_454, "f_camerawatchhorse");
		*(&vLocal_506 + 72) = { StackVal, StackVal, Function_175(bLocal_454, "f_camerawatchhorse") };
		*(&vLocal_506 + 84) = { 0.114f, -0.222f, 0.968f };
		Function_175(bLocal_454, "f_cameraDialog");
		*(&vLocal_506 + 96) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraDialog") };
		*(&vLocal_506 + 108) = { 0.176f, -0.276f, -0.945f };
		Function_175(bLocal_454, "f_cameraintro");
		*(&vLocal_506 + 120) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraintro") };
		*(&vLocal_506 + 132) = { 0.725f, -0.12f, 0.678f };
		Function_175(bLocal_454, "f_stablepos");
		*(&vLocal_506 + 36) = { StackVal, StackVal, Function_175(bLocal_454, "f_stablepos") };
		uLocal_467 = Local_226.f_356;
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		Function_175(bLocal_454, "f_playerstart");
		vLocal_506 = { StackVal, StackVal, Function_175(bLocal_454, "f_playerstart") };
		Function_175(bLocal_454, "f_helperstart");
		*(&vLocal_506 + 12) = { StackVal, StackVal, Function_175(bLocal_454, "f_helperstart") };
		Function_175(bLocal_454, "f_helpergatepos");
		*(&vLocal_506 + 24) = { StackVal, StackVal, Function_175(bLocal_454, "f_helpergatepos") };
		Function_175(bLocal_454, "f_cameraintro");
		*(&vLocal_506 + 48) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraintro") };
		*(&vLocal_506 + 60) = { 0.271f, -0.213f, 0.939f };
		Function_175(bLocal_454, "f_camerawatchhorse");
		*(&vLocal_506 + 72) = { StackVal, StackVal, Function_175(bLocal_454, "f_camerawatchhorse") };
		*(&vLocal_506 + 84) = { 0.934f, -0.356f, 0.033f };
		Function_175(bLocal_454, "f_cameraDialog");
		*(&vLocal_506 + 96) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraDialog") };
		*(&vLocal_506 + 108) = { -0.991f, -0.074f, -0.112f };
		Function_175(bLocal_454, "f_cameraintro");
		*(&vLocal_506 + 120) = { StackVal, StackVal, Function_175(bLocal_454, "f_cameraintro") };
		*(&vLocal_506 + 132) = { 0.996f, -0.069f, 0.061f };
		Function_175(bLocal_454, "f_stablepos");
		*(&vLocal_506 + 36) = { StackVal, StackVal, Function_175(bLocal_454, "f_stablepos") };
		uLocal_467 = Local_316.f_356;
	}
	else
	{
		LOG_ERROR("HORSEBREAKING_INIT_CUTSCENE_DATA: Job should not be available in this region.(2)");
	}
	return;
}

vector3 Function_175(bool bParam0, bool bParam1) //Position: 0x90C2 / 37058
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
				Function_176(bVar4);
				vVar0 = { StackVal, StackVal, Function_176(bVar4) };
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
	Function_158(Function_1());
	return StackVal, StackVal, Function_158(Function_1());
}

vector3 Function_176(bool bParam0) //Position: 0x91A6 / 37286
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

struct<32> Function_177(bool bParam0) //Position: 0x91CD / 37325
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_178("0", &cVar8, ""), 4);
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

struct<32> Function_178(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9237 / 37431
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_179() //Position: 0x9256 / 37462
{
	bool bVar0;
	
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		LOG_ERROR("HORSEBREAKING_GET_LOCATION_LAYOUT: Job should not be available in this region.(1)");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("RidgewoodFarm_layout"))
	{
		Function_191();
		Function_190();
		Function_189();
		bLocal_454 = Local_143;
		bLocal_456 = Function_191();
		uLocal_457 = Local_143.f_12;
		Function_188(bLocal_454);
		Unknown_Function();
		bVar0 = FIND_NAMED_LAYOUT("RidgewoodFarm_layout");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		Function_186();
		bLocal_454 = Local_226;
		bLocal_456 = Function_186();
		uLocal_457 = Local_226.f_12;
		Function_188(bLocal_454);
		Unknown_Function();
		bVar0 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("BeechersHope_layout"))
	{
		Function_184();
		Function_183();
		Function_180();
		bLocal_454 = Local_316;
		bLocal_456 = Function_184();
		uLocal_457 = Local_316.f_12;
		Function_188(bLocal_454);
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

void Function_180() //Position: 0x94C7 / 38087
{
	uLocal_459[4] = Function_181("beechershope", "stable01", 96);
	uLocal_459[5] = Function_181("beechershope", "stable01", 97);
	bLocal_414 = true;
	return;
}

int Function_181(var uParam0, char* cParam1, int iParam2) //Position: 0x951B / 38171
{
	return Function_182(Global_29006, uParam0, cParam1, iParam2);
}

int Function_182(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x952D / 38189
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_66(iParam0))
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

void Function_183() //Position: 0x95C9 / 38345
{
	uLocal_459[0] = Function_181("beechershope", "stable01", 94);
	uLocal_459[1] = Function_181("beechershope", "stable01", 95);
	uLocal_459[2] = Function_181("beechershope", "stable01", 98);
	uLocal_459[3] = Function_181("beechershope", "stable01", 99);
	bLocal_413 = true;
	return;
}

vector3 Function_184() //Position: 0x9667 / 38503
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_316 = CREATE_LAYOUT("horsebreaking_beh_layout");
	Local_316.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_316, "v_pen", 3, -43.93288f, 118.6123f, 1422.629f, 0.0f, 20.0f, 0.0f, 16.96518f, 3.0f, 14.62182f);
	Local_316.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_316, "v_playerBounds", 3, -44.66626f, 118.6123f, 1423.172f, 0.0f, 20.0f, 0.0f, 24.48617f, 3.0f, 20.88202f);
	Local_316.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_316, "v_stable", 2, -60.80671f, 117.6364f, 1414.156f, 1.381116f, -28.94535f, -0.8704333f, 2.525596f, 3.0f, 7.0f);
	Local_316.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_316, "HorseBreaking_StayOutVolume", 3, -43.93288f, 118.6123f, 1422.629f, 0.0f, 20.0f, 0.0f, 9.548944f, 3.0f, 7.134239f);
	*(&Local_316 + 20) = { -64.9892f, 117.0433f, 1421.941f };
	*(&Local_316 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_44 = CREATE_POINT_IN_LAYOUT(Local_316, "f_playerstart", -64.9892f, 117.0433f, 1421.941f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 48) = { -65.17418f, 117.0433f, 1420.397f };
	*(&Local_316 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_72 = CREATE_POINT_IN_LAYOUT(Local_316, "f_helperstart", -65.17418f, 117.0433f, 1420.397f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 76) = { -44.15268f, 116.9848f, 1422.039f };
	*(&Local_316 + 76 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_100 = CREATE_POINT_IN_LAYOUT(Local_316, "f_horsestart", -44.15268f, 116.9848f, 1422.039f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 104) = { -62.53255f, 116.9848f, 1420.284f };
	*(&Local_316 + 104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_128 = CREATE_POINT_IN_LAYOUT(Local_316, "f_helpergatepos", -62.53255f, 116.9848f, 1420.284f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 132) = { -65.1827f, 116.9848f, 1411.965f };
	*(&Local_316 + 132 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_156 = CREATE_POINT_IN_LAYOUT(Local_316, "f_stablepos", -65.1827f, 116.9848f, 1411.965f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 160) = { -60.53358f, 116.9848f, 1416.488f };
	*(&Local_316 + 160 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_184 = CREATE_POINT_IN_LAYOUT(Local_316, "f_helperstablepos", -60.53358f, 116.9848f, 1416.488f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 188) = { -58.88554f, 116.9848f, 1413.466f };
	*(&Local_316 + 188 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_212 = CREATE_POINT_IN_LAYOUT(Local_316, "f_stableplayerpos", -58.88554f, 116.9848f, 1413.466f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 216) = { -60.51863f, 116.9848f, 1416.478f };
	*(&Local_316 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_240 = CREATE_POINT_IN_LAYOUT(Local_316, "f_helperstablegoto", -60.51863f, 116.9848f, 1416.478f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 244) = { -52.16951f, 121.6348f, 1413.421f };
	*(&Local_316 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_268 = CREATE_POINT_IN_LAYOUT(Local_316, "f_camerastable", -52.16951f, 121.6348f, 1413.421f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 272) = { -58.52735f, 121.6348f, 1432.056f };
	*(&Local_316 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_296 = CREATE_POINT_IN_LAYOUT(Local_316, "f_camerawatchhorse", -58.52735f, 121.6348f, 1432.056f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 300) = { -69.0267f, 120.3079f, 1424.512f };
	*(&Local_316 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_324 = CREATE_POINT_IN_LAYOUT(Local_316, "f_cameraintro", -69.0267f, 120.3079f, 1424.512f, 0.0f, 0.0f, 0.0f);
	*(&Local_316 + 328) = { -57.78021f, 120.9089f, 1423.621f };
	*(&Local_316 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_316.f_352 = CREATE_POINT_IN_LAYOUT(Local_316, "f_cameraDialog", -57.78021f, 120.9089f, 1423.621f, 0.0f, 0.0f, 0.0f);
}

void Â^TBèÑ-D±ö¬,GcL<Ddz-  8n            (int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x9BCF / 39887
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

struct<8> Function_186() //Position: 0x9C33 / 39987
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_226 = CREATE_LAYOUT("horsebreaking_chu_layout");
	Local_226.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_226, "v_pen", 2, -2631.415f, 29.88759f, 4258.307f, 0.0f, -40.17725f, 0.0f, 23.78081f, 6.0f, 36.43158f);
	Local_226.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_226, "v_playerBounds", 2, -2633.351f, 30.48789f, 4258.207f, 0.0f, 49.87139f, 0.0f, 43.0172f, 7.760196f, 31.19706f);
	Local_226.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_226, "v_stable", 2, -2623.267f, 30.3647f, 4250.163f, 0.0f, 47.19747f, 0.0f, 4.997247f, 5.82498f, 4.690561f);
	Local_226.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_226, "HorseBreaking_StayOutVolume", 2, -2630.178f, 29.88759f, 4260.932f, 0.0f, -40.17725f, 0.0f, 7.0f, 6.0f, 11.0f);
	*(&Local_226 + 20) = { -2639.281f, 30.73836f, 4246.451f };
	*(&Local_226 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_44 = CREATE_POINT_IN_LAYOUT(Local_226, "f_playerstart", -2639.281f, 30.73836f, 4246.451f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 48) = { -2638.156f, 30.73836f, 4247.269f };
	*(&Local_226 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_72 = CREATE_POINT_IN_LAYOUT(Local_226, "f_helperstart", -2638.156f, 30.73836f, 4247.269f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 76) = { -2621.17f, 30.73836f, 4253.298f };
	*(&Local_226 + 76 + 12) = { 0.0f, 81.05766f, 0.0f };
	Local_226.f_100 = CREATE_POINT_IN_LAYOUT(Local_226, "f_horsestart", -2621.17f, 30.73836f, 4253.298f, 0.0f, 81.05766f, 0.0f);
	*(&Local_226 + 104) = { -2635.292f, 30.73836f, 4247.353f };
	*(&Local_226 + 104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_128 = CREATE_POINT_IN_LAYOUT(Local_226, "f_helpergatepos", -2635.292f, 30.73836f, 4247.353f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 132) = { -2625.253f, 30.73836f, 4248.132f };
	*(&Local_226 + 132 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_156 = CREATE_POINT_IN_LAYOUT(Local_226, "f_stablepos", -2625.253f, 30.73836f, 4248.132f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 160) = { -2636.928f, 30.73836f, 4248.027f };
	*(&Local_226 + 160 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_184 = CREATE_POINT_IN_LAYOUT(Local_226, "f_helperstablepos", -2636.928f, 30.73836f, 4248.027f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 188) = { -2627.227f, 30.73836f, 4250.09f };
	*(&Local_226 + 188 + 12) = { 0.0f, 65.34818f, 0.0f };
	Local_226.f_212 = CREATE_POINT_IN_LAYOUT(Local_226, "f_stableplayerpos", -2627.227f, 30.73836f, 4250.09f, 0.0f, 65.34818f, 0.0f);
	*(&Local_226 + 216) = { -2629.909f, 30.73836f, 4248.793f };
	*(&Local_226 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_240 = CREATE_POINT_IN_LAYOUT(Local_226, "f_helperstablegoto", -2629.909f, 30.73836f, 4248.793f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 244) = { -2625.052f, 37.0547f, 4258.85f };
	*(&Local_226 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_268 = CREATE_POINT_IN_LAYOUT(Local_226, "f_camerastable", -2625.052f, 37.0547f, 4258.85f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 272) = { -2619.128f, 37.03808f, 4264.715f };
	*(&Local_226 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_296 = CREATE_POINT_IN_LAYOUT(Local_226, "f_camerawatchhorse", -2619.128f, 37.03808f, 4264.715f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 300) = { -2634.054f, 32.57742f, 4240.912f };
	*(&Local_226 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_324 = CREATE_POINT_IN_LAYOUT(Local_226, "f_cameraintro", -2634.054f, 32.57742f, 4240.912f, 0.0f, 0.0f, 0.0f);
	*(&Local_226 + 328) = { -2629.604f, 34.82276f, 4243.826f };
	*(&Local_226 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_226.f_352 = CREATE_POINT_IN_LAYOUT(Local_226, "f_cameraDialog", -2629.604f, 34.82276f, 4243.826f, 0.0f, 0.0f, 0.0f);
}

void AôlEÏÅ#úÕAôlEñãÅ$d»AôlEôf,Gc:âDdz-  8 ,	c 8,c 8 ,CU98,C^c @8(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0xA15F / 41311
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

void Function_188(bool bParam0) //Position: 0xA23D / 41533
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_177("penVols"), 4);
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bLocal_455 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, bParam0, 4294967295, 0);
	return;
}

void Function_189() //Position: 0xA26C / 41580
{
	uLocal_459[4] = Function_181("ridgewoodfarm", "barn01", 1);
	uLocal_459[5] = Function_181("ridgewoodfarm", "barn01", 2);
	bLocal_414 = true;
	return;
}

void Function_190() //Position: 0xA2BC / 41660
{
	uLocal_459[0] = Function_182(Global_30640[1], "ridgewoodfarm", "fence01", 13);
	uLocal_459[1] = Function_182(Global_30640[1], "ridgewoodfarm", "fence01", 14);
	uLocal_459[2] = Function_182(Global_30640[1], "ridgewoodfarm", "fence01", 15);
	uLocal_459[3] = Function_182(Global_30640[1], "ridgewoodfarm", "fence01", 16);
	bLocal_413 = true;
	return;
}

struct<8> Function_191() //Position: 0xA372 / 41842
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_143 = CREATE_LAYOUT("horsebreaking_rwf_layout");
	Local_143.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_143, "v_pen", 3, -3288.777f, 15.69201f, 2734.723f, 0.0f, -38.60373f, 0.0f, 15.9265f, 3.0f, 4.914371f);
	Local_143.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_143, "v_playerBounds", 3, -3291.02f, 17.30809f, 2735.659f, 0.0f, -36.19659f, 0.0f, 37.91158f, 3.508656f, 17.47989f);
	Local_143.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_143, "v_stable", 2, -3300.393f, 18.23438f, 2673.137f, 0.0f, 109.5142f, 0.0f, 4.767694f, 3.0f, 3.550467f);
	Local_143.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_143, "HorseBreaking_StayOutVolume", 3, -3288.736f, 16.16476f, 2733.746f, 0.0f, -39.76477f, 0.0f, 12.85629f, 3.0f, 4.214271f);
	*(&Local_143 + 20) = { -3290.872f, 16.41982f, 2717.622f };
	*(&Local_143 + 20 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_44 = CREATE_POINT_IN_LAYOUT(Local_143, "f_playerstart", -3290.872f, 16.41982f, 2717.622f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 48) = { -3293.613f, 16.18635f, 2717.757f };
	*(&Local_143 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_72 = CREATE_POINT_IN_LAYOUT(Local_143, "f_helperstart", -3293.613f, 16.18635f, 2717.757f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 76) = { -3278.02f, 15.90541f, 2739.603f };
	*(&Local_143 + 76 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_100 = CREATE_POINT_IN_LAYOUT(Local_143, "f_horsestart", -3278.02f, 15.90541f, 2739.603f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 104) = { -3296.125f, 16.28855f, 2717.553f };
	*(&Local_143 + 104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_128 = CREATE_POINT_IN_LAYOUT(Local_143, "f_helpergatepos", -3296.125f, 16.28855f, 2717.553f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 132) = { -3301.821f, 17.88778f, 2668.992f };
	*(&Local_143 + 132 + 12) = { 0.0f, 19.17371f, 0.0f };
	Local_143.f_156 = CREATE_POINT_IN_LAYOUT(Local_143, "f_stablepos", -3301.821f, 17.88778f, 2668.992f, 0.0f, 19.17371f, 0.0f);
	*(&Local_143 + 160) = { -3300.805f, 17.9204f, 2679.363f };
	*(&Local_143 + 160 + 12) = { 0.0f, -123.2042f, 0.0f };
	Local_143.f_184 = CREATE_POINT_IN_LAYOUT(Local_143, "f_helperstablepos", -3300.805f, 17.9204f, 2679.363f, 0.0f, -123.2042f, 0.0f);
	*(&Local_143 + 188) = { -3299.295f, 17.88778f, 2678.713f };
	*(&Local_143 + 188 + 12) = { 0.0f, 132.5602f, 0.0f };
	Local_143.f_212 = CREATE_POINT_IN_LAYOUT(Local_143, "f_stableplayerpos", -3299.295f, 17.88778f, 2678.713f, 0.0f, 132.5602f, 0.0f);
	*(&Local_143 + 216) = { -3295.028f, 19.626f, 2683.082f };
	*(&Local_143 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_240 = CREATE_POINT_IN_LAYOUT(Local_143, "f_camerastable", -3295.028f, 19.626f, 2683.082f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 244) = { -3286.944f, 24.05286f, 2719.736f };
	*(&Local_143 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_268 = CREATE_POINT_IN_LAYOUT(Local_143, "f_camerawatchhorse", -3286.944f, 24.05286f, 2719.736f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 272) = { -3291.379f, 22.20231f, 2706.601f };
	*(&Local_143 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_296 = CREATE_POINT_IN_LAYOUT(Local_143, "f_cameraintro", -3291.379f, 22.20231f, 2706.601f, 0.0f, 0.0f, 0.0f);
	*(&Local_143 + 300) = { -3301.395f, 22.37455f, 2710.274f };
	*(&Local_143 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_143.f_324 = CREATE_POINT_IN_LAYOUT(Local_143, "f_cameraDialog", -3301.395f, 22.37455f, 2710.274f, 0.0f, 0.0f, 0.0f);
}

int Function_192(int iParam0) //Position: 0xA899 / 43161
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_193(int iParam0) //Position: 0xA8B3 / 43187
{
	int iVar0[3];
	int iVar4;
	
	if (Function_219(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_205(&uLocal_123, &iVar0, "RDR JOB MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_204(iParam0);
			iLocal_137 = 1;
			Function_197();
			Function_196();
		}
		else if (iVar4 == 1)
		{
			Function_195(iParam0);
			bLocal_138 = true;
			Function_197();
			Function_196();
		}
		else if (iVar4 == 2)
		{
			Function_197();
			Function_194(iParam0);
			Function_197();
		}
	}
	return;
}

void Function_194(int iParam0) //Position: 0xA946 / 43334
{
	Function_81(iParam0);
	return;
}

void Function_195(var uParam0) //Position: 0xA951 / 43345
{
	bLocal_138 = true;
	if (bLocal_138)
	{
		Function_11(uParam0);
	}
	return;
}

void Function_196() //Position: 0xA964 / 43364
{
	return;
}

void Function_197() //Position: 0xA96A / 43370
{
	Function_199();
	Function_198(10, 3);
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0xA979 / 43385
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

void Function_199() //Position: 0xAAB0 / 43696
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_203())
	{
		Function_202(10, 3);
	}
	else
	{
		Function_200();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_1(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_1());
	UI_POP("nDebugMenu");
	return;
}

void Function_200() //Position: 0xAAFB / 43771
{
	Function_201(25, 2);
	return;
}

void Function_201(int iParam0, int iParam1) //Position: 0xAB07 / 43783
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

void Function_202(int iParam0, int iParam1) //Position: 0xAD05 / 44293
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

bool Function_203() //Position: 0xAE3C / 44604
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
				if (!Function_7(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_204(int iParam0) //Position: 0xAEA3 / 44707
{
	iLocal_137 = 1;
	if (iLocal_137)
	{
		Function_19(iParam0, 1, 1, 0);
	}
	return;
}

var Function_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAEB9 / 44729
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

void Function_206(int iParam0, int iParam1, int iParam2) //Position: 0xAF80 / 44928
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

bool Function_207(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAFDC / 45020
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

void Function_208(bool bParam0) //Position: 0xB162 / 45410
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

void Function_209(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB19C / 45468
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

var Function_210(int iParam0, var uParam1, int iParam2) //Position: 0xB24A / 45642
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_211(var uParam0, int iParam1, int iParam2) //Position: 0xB26E / 45678
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

int Function_212() //Position: 0xB30A / 45834
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

void Function_213(var uParam0, int iParam1, int iParam2) //Position: 0xB346 / 45894
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

int Function_214(int iParam0) //Position: 0xB3DE / 46046
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_1()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_7(*iParam0, 0x40000000))
		{
			Function_58(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_7(*iParam0, 0x40000000))
		{
			Function_58(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_24(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_1()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_7(*iParam0, 0x20000000))
		{
			Function_58(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_7(*iParam0, 0x20000000))
		{
			Function_58(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_24(iParam0, 0x20000000);
	return 0;
}

var Function_215(var uParam0, int iParam1) //Position: 0xB529 / 46377
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

void Function_216(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB678 / 46712
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

var Function_217(int iParam0, int iParam1) //Position: 0xB70B / 46859
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_218(var uParam0, int iParam1) //Position: 0xB725 / 46885
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

bool Function_219(int iParam0) //Position: 0xB773 / 46963
{
	if (!Function_220(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_220(int iParam0) //Position: 0xB787 / 46983
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

bool Function_221(int iParam0) //Position: 0xB7AB / 47019
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_225();
	iVar1 = 0;
	if (!Function_85(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_224(iParam0[iVar03], 8);
		}
		else if (Function_223())
		{
			iVar1 = 1;
			Function_224(iParam0[iVar03], 8);
		}
		Function_224(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_85(iParam0[iVar03], 4))
		{
			if (!Function_85(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_85(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_85(iParam0[03], 8) || iVar1));
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
				Function_224(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_85(iParam0[iVar03], 4))
		{
			if (!Function_85(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
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
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_224(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_224(iParam0[iVar03], 2);
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
	Function_222();
	return 1;
}

void Function_222() //Position: 0xBB26 / 47910
{
	if (!Function_171(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_223() //Position: 0xBB66 / 47974
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

void Function_224(var uParam0, int iParam1) //Position: 0xBB91 / 48017
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_225() //Position: 0xBBA2 / 48034
{
	if (!Function_171(128))
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

void Function_226(bool bParam0, int iParam1, int iParam2) //Position: 0xBBE4 / 48100
{
	if (bParam0)
	{
		PRINTSTRING("CALLING DESTROY GC OBJECTS!");
		PRINTNL();
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAR_ALL_CORPSES();
	Function_4();
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(iParam1);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_229();
	STREAMING_EVICT_ALL();
	iParam2 = iParam2;
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_227(&iLocal_130, "jobs", 10, 0);
	Function_230(8192);
	return;
}

var Function_227(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBC54 / 48212
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_228(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_224(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_228(var uParam0, int iParam1, int iParam2) //Position: 0xBC8C / 48268
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_85(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_224(uParam0[iVar03], 4);
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

void Function_229() //Position: 0xBD50 / 48464
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_230(int iParam0) //Position: 0xBD64 / 48484
{
	int iVar0;
	
	if (Function_7(iParam0, 1) && Function_7(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_231(int iParam0, int iParam1) //Position: 0xBD98 / 48536
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_8(iParam0))
	{
		Function_79();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_18(iParam0);
	if (StackVal != 2)
	{
		Function_15("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_23(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_17(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_12(Global_6269) };
		}
		cVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(cVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar12);
		APPEND_JOURNAL_ENTRY(cVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

int Function_232(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBEA8 / 48808
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_236(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_233(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_233(bParam0, bParam1, bParam2, 4294967295);
}

int Function_233(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBF06 / 48902
{
	var uVar0;
	
	if (!Function_235(bParam2))
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
	uVar0 = Function_236(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_234(uVar0);
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

int Function_234(int iParam0) //Position: 0xC05C / 49244
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

bool Function_235(int iParam0) //Position: 0xC09A / 49306
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_236(int iParam0, int iParam1, int iParam2) //Position: 0xC0AF / 49327
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_237(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC0CF / 49359
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_85(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_224(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_224(uParam0[iVar03], 8);
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

