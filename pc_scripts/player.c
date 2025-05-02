//Decompiled with MagicRDR v1.0
//Function Count : 397
//Statics Count : 334
//Natives Count : 641
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	bool bLocal_4 = false;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	float fLocal_8 = 0.0f;
	float fLocal_9 = 0.0f;
	float fLocal_10 = 0.0f;
	float fLocal_11 = 0.0f;
	float fLocal_12 = 0.0f;
	float fLocal_13 = 0.0f;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 2;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 11;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 11;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = false;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	float fLocal_142 = 0.0f;
	int iLocal_143 = 0;
	bool bLocal_144 = false;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	bool bLocal_148 = false;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	bool bLocal_151 = false;
	float fLocal_152 = 0.0f;
	struct<537> Local_153 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<2> Var0;
	var uVar2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	bool bVar22;
	bool bVar23;
	float fVar24;
	int iVar25;
	var uVar26;
	bool bVar27;
	var uVar28;
	bool bVar31;
	bool bVar32;
	int iVar33;
	var uVar34;
	float fVar35;
	float fVar36;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_4 = false;
	iLocal_5 = 0;
	iLocal_6 = 0;
	fLocal_10 = 7,5f;
	fLocal_11 = 4.0f;
	fLocal_12 = 1,25f;
	fLocal_13 = 0,25f;
	iLocal_33 = 0;
	iLocal_34 = 0;
	iLocal_138 = 0;
	bLocal_139 = false;
	iLocal_140 = 0;
	iLocal_141 = 0;
	fLocal_142 = -1.0f;
	iLocal_143 = 0;
	bLocal_144 = false;
	bLocal_148 = false;
	fLocal_293 = -1.0f;
	fLocal_294 = -1.0f;
	fLocal_295 = -1.0f;
	iLocal_331 = 4294967295;
	uLocal_149 = Function_396();
	(&Global_21369 + 72)->f_32 = 0;
	bLocal_144 = Function_395();
	Var8.f_4 = Global_53524.f_12;
	bVar11 = false;
	bVar12 = Global_53524.f_44;
	bVar13 = false;
	fVar14 = 0.0f;
	if (!bVar12)
	{
		iVar16 = Function_390(0, 1, 1);
		iVar17 = Function_390(0, 2, 1);
		iVar18 = Function_390(2, 47, 1);
		iVar19 = Function_390(2, 48, 1);
		if (((((StackVal && StackVal != 3 != 4) && !Global_6624) || (Global_6624 && Global_10964 != 1)) && Global_6606) && !Global_53524.f_28)
		{
			Var4 = Vector(917,5576f, 81,94563f, 1347,476f);
			Var6 = Vector(2,473f, 52,205f, 0.0f);
			VSCALE(&Var6, (6,28f / 360.0f));
			STREAMING_OVERRIDE_MAIN_POI(Var4, Var6);
			Function_389(&Global_99130 + 40, 65536);
			Function_389(&Global_99144, 1);
		}
		else if (((((StackVal && StackVal != 3 != 4) && !Global_6624) || (Global_6624 && Global_10964 != 2)) && Global_6606) && !Global_53524.f_28)
		{
			Var4 = Vector(-843,007f, 94,356f, 2364,807f);
			Var6 = Vector(-4,382f, -143,816f, 0.0f);
			VSCALE(&Var6, (6,28f / 360.0f));
			STREAMING_OVERRIDE_MAIN_POI(Var4, Var6);
			Function_389(&Global_99130 + 40, 65536);
			Function_389(&Global_99144, 1);
		}
		else if (((((StackVal && !(StackVal && !(StackVal || StackVal != 3 != 4) != 3) != 4) && !Global_6624) || (Global_6624 && Global_10964 != 48)) && Global_6606) && !Global_53524.f_28)
		{
			Var4 = Vector(-184,46f, 125,095f, 1726,243f);
			Var6 = Vector(9,271f, 151,767f, 0.0f);
			VSCALE(&Var6, (6,28f / 360.0f));
			STREAMING_OVERRIDE_MAIN_POI(Var4, Var6);
			Function_389(&Global_99130 + 40, 65536);
			Function_389(&Global_99144, 1);
		}
		else if (Function_388(StackVal, &Var4, &Var6, Global_53524, Global_53524.f_12, Global_53524.f_16))
		{
			if (!STREAMING_HAS_OVERRIDE_MAIN_POI())
			{
				STREAMING_OVERRIDE_MAIN_POI(Var4, Var6);
			}
			else if ((!Global_6624 && !Global_53524.f_28) && !Function_387(2048))
			{
				STREAMING_GET_OVERRIDE_MAIN_POI_POS(&Var20);
				if (Function_386(StackVal, StackVal, Var4, Var20) < 50.0f)
				{
					STREAMING_RELEASE_MAIN_POI();
					STREAMING_OVERRIDE_MAIN_POI(Var4, Var6);
				}
			}
		}
		else
		{
			Var4 = Global_53524;
			Var6 = Var8;
		}
		SET_START_POS(Var4, Global_53524.f_12, 0);
		STREAMING_SET_CUTSCENE_MODE(1);
		STREAMING_LOAD_BOUNDS(Global_53524, 10.0f, 0);
		if (Function_385(Function_390(3, 57, 1), 0))
		{
			bVar13 = true;
		}
		if (!Function_384(512))
		{
			if (Global_42825 != 17 || Global_42825 != 16)
			{
				Global_42825 = 0;
			}
		}
		bVar22 = SHIFT_LEFT(true, Global_42265[Global_428259].f_20);
		iVar15 = Global_42265[Global_428259].f_20;
		if ((((StackVal && StackVal != 3 != 4) && !Global_6624) || (Global_6624 && Global_10964 != 1)) && Global_6606)
		{
			bVar22 = SHIFT_LEFT(true, 12);
			iVar15 = 12;
		}
		else if ((((StackVal && StackVal != 3 != 4) && !Global_6624) || (Global_6624 && Global_10964 != 2)) && Global_6606)
		{
			if (Global_53524.f_48 <= 1)
			{
				bVar22 = SHIFT_LEFT(true, 14);
				iVar15 = 14;
			}
		}
		else if (((Global_6624 && Global_10964 < 49) && Global_10964 >= 57) && Global_6606)
		{
			bVar22 = SHIFT_LEFT(true, 10);
			iVar15 = 10;
		}
		if (Global_6605 && !Global_6606)
		{
			STREAMING_REQUEST_ACTOR(bVar13, true, false);
		}
		else
		{
			STREAMING_REQUEST_ACTOR(bVar13, bVar22, false);
			REQUEST_STRING_TABLE("RandomCharMissions");
			bVar11 = true;
		}
		WAIT(false);
		while (!STREAMING_ARE_BOUNDS_LOADED(Global_53524, 10.0f) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
		Global_53524.f_4 = (StackVal + 1.0f);
	}
	if (bVar12)
	{
		Var0 = Global_53524;
	}
	else
	{
		while (!FIND_GROUND_INTERSECTION(&Global_53524, 10.0f, &Var0, &uVar2) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	Global_54078 = Var0;
	if (!bVar12)
	{
		while (!STREAMING_IS_ACTOR_LOADED(bVar13, 4294967295) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	if (Global_6664)
	{
		while (!STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	if (bVar11)
	{
		while (!HAS_STRING_TABLE_LOADED("RandomCharMissions"))
		{
			WAIT(false);
		}
	}
	if (!bVar12)
	{
		bVar23 = 80.0f;
		fVar24 = 80.0f;
		if (Global_6605 && !Global_6606)
		{
			Global_54076 = CREATE_PLAYER_ACTOR_IN_LAYOUT(&uLocal_149, "player", bVar13, Var0, Var8, 0);
		}
		else
		{
			Global_54076 = CREATE_PLAYER_ACTOR_IN_LAYOUT(&uLocal_149, "player", bVar13, Var0, Var8, iVar15);
		}
		if (bVar13 == 1)
		{
			SET_AMBIENT_VOICE_NAME(&Global_54076, "PLAYER_JACK");
		}
		Function_383(256);
		STREAMING_ENABLE_POI_STREAMING(1);
		if (Global_6605)
		{
			Function_382();
			Function_381(0, 0);
			Function_381(1, 0);
			Function_381(3, 1);
			Function_381(4, 1);
		}
		else
		{
			Function_379();
			Function_365();
			if (Global_119631 != 4294967295)
			{
				Function_341(Global_119631);
			}
			if (Global_42827 != 4294967295)
			{
				Global_42827.f_16 = 1;
				Function_341(Global_42265[Global_428279].f_64);
			}
			if (bVar11)
			{
				REMOVE_STRING_TABLE("RandomCharMissions");
				bVar11 = false;
			}
			Function_381(0, Function_340(0));
			Function_381(1, Function_340(1));
			Function_381(3, Function_340(3));
			Function_381(4, Function_340(4));
		}
		Global_21369.f_148 = 4294967295;
		Global_21369.f_152 = 4294967295;
		Global_21369.f_156 = 4294967295;
		Global_21369.f_160 = 4294967295;
		Function_338(Global_42825);
		if (Global_53524.f_28)
		{
			if ((((((_GET_AMMO_AMOUNT(&Global_54076, 6, 0) + _GET_AMMO_AMOUNT(&Global_54076, 7, 0)) + _GET_AMMO_AMOUNT(&Global_54076, 8, 0)) + _GET_AMMO_AMOUNT(&Global_54076, 9, 0)) + _GET_AMMO_AMOUNT(&Global_54076, 10, 0)) + _GET_AMMO_AMOUNT(&Global_54076, 11, 0)) > 6.0f)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, 7, 6.0f, 0, 0);
			}
		}
		SET_START_POS(Var4, Global_53524.f_12, 0);
		WAIT(false);
		if (_GET_AMMO_AMOUNT(&Global_54076, 12, 0) <= 1.0f)
		{
			if (!Function_384(32))
			{
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 12, 0.0f, 1);
				DELETE_WEAPON_FROM_ACTOR(&Global_54076, 29);
			}
		}
		if (ACTOR_HAS_WEAPON(&Global_54076, 31))
		{
			if (!Function_384(64))
			{
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 13, 0.0f, 1);
				DELETE_WEAPON_FROM_ACTOR(&Global_54076, 31);
			}
		}
		START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&Global_54076);
		SET_CAMERA_FOLLOW_ACTOR(&Global_54076);
		CAMERA_RESET(0);
		SATCHEL_SET_ENABLED(1);
		if (Function_337(7, 32))
		{
			Function_336(53, 1);
		}
		if (Function_337(5, 32))
		{
			Function_336(54, 1);
		}
		if (Function_337(4, 32))
		{
			Function_336(55, 1);
		}
		if (Function_337(9, 32))
		{
			Function_336(56, 1);
		}
		if (Function_337(8, 32))
		{
			Function_336(57, 1);
		}
		if (Function_337(6, 32))
		{
			Function_336(58, 1);
		}
		if (Function_333(3))
		{
			Function_336(10, 1);
		}
		if (!bLocal_144)
		{
			iLocal_331 = GET_PLAYER_COMBATMODE();
			if (iLocal_331 == 0)
			{
				SET_ACTOR_MAX_HEALTH(&Global_54076, 80.0f);
			}
			else if (iLocal_331 == 2)
			{
				SET_ACTOR_MAX_HEALTH(&Global_54076, (80.0f * 2.0f));
			}
			SET_ACTOR_HEALTH(&Global_54076, 80.0f);
		}
		Function_332(1);
		Function_331();
		if (Global_53524.f_32)
		{
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
		}
		if (Global_6624)
		{
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		}
		else if (Global_6605)
		{
			SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
		}
		SET_MAX_DEADEYE_POINTS(0, 100.0f);
		if (!bLocal_144)
		{
			SET_DEADEYE_REGENERATION_RATE(0, 0,25f, 0);
		}
		if (Global_6664)
		{
			if (Global_6605)
			{
				iVar25 = Function_326(StackVal, StackVal, StackVal, 1, 1, ((Global_54078 - 2.0f) - 2.0f), 1, 0);
			}
			STREAMING_EVICT_ACTOR(StackVal + 976, 4294967295);
			uVar26 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uLocal_149, Function_325(), 3, Var0, Var8, Vector(50.0f, 50.0f, 50.0f));
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar26);
		}
	}
	else
	{
		bVar23 = 60.0f;
		fVar24 = 60.0f;
		bVar27 = false;
		while (bVar27 <= 40)
		{
			SET_WEAPONENUM_LOCKED(bVar27, 0);
			bVar27++;
		}
		SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(1.0f);
		Function_332(0);
		Function_322(0);
		Function_321();
		Global_120008[02] = Var0;
		Global_120008[12] = Var0;
		Global_120018[02] = Var8;
		Global_120018[12] = Var8;
		CAMERA_RESET(0);
		Function_383(256);
	}
	(&Global_99130 + 32) = "";
	(&Global_99130 + 24) = "";
	Function_389(&Global_21369 + 72 + 32, 1);
	if (Global_6605)
	{
		Global_21369.f_244 = 3;
		Global_21369.f_248 = 0;
		Function_319(2, Function_320(Global_21369.f_244), 0, 1);
		Function_319(4, Function_318(Global_21369.f_248), 0, 1);
	}
	Global_131720 = 0;
	WAIT(false);
	Local_153 = &uLocal_149;
	RESET_ANALOG_POSITIONS(0, 0.0f);
	STREAMING_UNLOAD_BOUNDS();
	bLocal_151 = true;
	fLocal_152 = -1.0f;
	Function_317();
	fLocal_142 = -1.0f;
	Function_315(2);
	SET_HUD_MAP_SCALE_WALK(65.0f);
	SET_HUD_MAP_SCALE_DRIVE(140.0f);
	if (Function_314("playerhorsedebug"))
	{
		Global_26650 = 1;
	}
	Local_296.f_80 = 0;
	Function_389(&Global_99130 + 40, 16384);
	if (bLocal_144)
	{
		Function_313();
	}
	while (!IS_EXITFLAG_SET())
	{
		Global_54076 = Function_312();
		bVar31 = IS_ACTOR_VALID(&Global_54076);
		if (bVar31)
		{
			if (!bVar12)
			{
				bVar32 = GET_ACTOR_ENUM(&Global_54076);
				if (bVar13 != bVar32)
				{
					STREAMING_EVICT_ACTOR(bVar13, 4294967295);
					bVar13 = bVar32;
				}
			}
			GET_POSITION(&Global_54076, &Global_54078);
			if (!GET_ACTOR_VEHICLE_STATE(&Global_54076, &Global_54081, &Global_54082))
			{
				Global_54081 = 4294967295;
				Global_54082 = 4294967295;
			}
			iVar33 = Global_43789;
			if (iVar33 != iLocal_145)
			{
				iLocal_145 = Global_43789;
				if (iVar33 == Global_46760[0])
				{
					uLocal_146 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set");
				}
				else if (iVar33 == Global_46816[1])
				{
					uLocal_146 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "thiv_saloon_set");
				}
				else if (iVar33 == Global_46850[0])
				{
					uLocal_146 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "escv_bar_set");
				}
				else if (iVar33 == Global_46866[0])
				{
					uLocal_146 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "chuv_saloon_set");
				}
				else if (iVar33 == Global_46894[2])
				{
					uLocal_146 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "casv_bar_set");
				}
				else if (iVar33 == Global_46914[0])
				{
					uLocal_146 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "blkv_saloon_set");
				}
			}
			if (IS_VOLUME_VALID(&uLocal_146))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_146))
				{
					if (!DECOR_CHECK_EXIST(&Global_54076, "bInsideSaloon"))
					{
						DECOR_SET_BOOL(&Global_54076, "bInsideSaloon", true);
					}
				}
				else if (DECOR_CHECK_EXIST(&Global_54076, "bInsideSaloon"))
				{
					DECOR_REMOVE(&Global_54076, "bInsideSaloon");
				}
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Saves and Loads : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_272(&Global_99130, &Global_99144, &uLocal_330);
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Drunk : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_271(&fLocal_293, 5.0f);
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Camp : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_199(&Global_99130, &Local_296);
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
		}
		if (!CAN_PLAYER_DIE())
		{
			if (bVar31)
			{
				Function_198(0,0001f, bVar23);
			}
		}
		else
		{
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Health Regen : ");
				fVar10 = GET_PROFILE_TIME();
			}
			if ((!bVar12 && bVar31) && !bLocal_144)
			{
				Function_197(&iLocal_331);
			}
			if (bLocal_144)
			{
				Function_194(bVar23, 12.0f, 12.0f, 0,08f, 0,08f, bLocal_148);
			}
			else
			{
				Function_194(bVar23, 6.0f, 6.0f, 0,5f, 0,5f, bLocal_148);
			}
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
		}
		if (bVar31)
		{
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec HUD : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_186();
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Horse : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_178();
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Idle Cam : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_148();
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Teleporter : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_125();
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Activity Watch : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_109();
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Equipement : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_107(0);
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if ((Global_6655 && !HUD_IS_FADED()) && !HUD_IS_FADING())
			{
				Function_106();
			}
		}
		if (bLocal_291)
		{
			PRINTSTRING("Time for Exec Reset Menu : ");
			fVar10 = GET_PROFILE_TIME();
		}
		Function_98(&fLocal_142);
		if (bLocal_291)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
			PRINTNL();
		}
		if (bLocal_291)
		{
			PRINTSTRING("Time for Exec Ambient Challenge Prints : ");
			fVar10 = GET_PROFILE_TIME();
		}
		Function_94(&(Global_47267[8]), &fLocal_295);
		Function_90(&fLocal_295);
		if (bLocal_291)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
			PRINTNL();
		}
		if (bLocal_291)
		{
			PRINTSTRING("Time for Exec Stats : ");
			fVar10 = GET_PROFILE_TIME();
		}
		Function_87(&fLocal_294);
		if (bLocal_291)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
			PRINTNL();
		}
		if (bLocal_291)
		{
			PRINTSTRING("Time for Map prompting: ");
			fVar10 = GET_PROFILE_TIME();
		}
		Function_73();
		if (bLocal_291)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
			PRINTNL();
		}
		if (bVar31)
		{
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Map : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_68();
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (bLocal_291)
			{
				PRINTSTRING("Time for Exec Horse Whistle : ");
				fVar10 = GET_PROFILE_TIME();
			}
			Function_11(&Global_21369 + 396, &uVar28);
			if (bLocal_291)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar10));
				PRINTNL();
			}
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				uVar34 = GET_MOUNT(&Global_54076);
				fVar35 = GET_ACTOR_HEALTH(&uVar34);
				if (fVar35 < 0.0f)
				{
					fVar36 = GET_ACTOR_MAX_HEALTH(&uVar34);
					if (fVar35 > fVar36)
					{
						SET_ACTOR_HEALTH(&uVar34, (fVar35 + 0,01f));
					}
				}
			}
		}
		SET_USE_ACTOR_STAGGER(Function_10());
		WAIT(false);
	}
	Function_9();
	if (IS_ACTOR_VALID(&Global_54076))
	{
		STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&Global_54076);
	}
	UI_EXIT("WantedMeter");
	RESET_RUMBLE();
	UI_CLEAR_MESSAGE_QUEUE(4);
	CANCEL_DEADEYE();
	Function_8();
	Function_7();
	Function_5();
	Function_1(&Global_99130, &Local_296, 0, 0, 1, 1);
	RELEASE_LAYOUT_REF(&uLocal_149);
	if (!bVar12)
	{
		STREAMING_EVICT_ACTOR(bVar13, 4294967295);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x10E2 / 4322
{
	var uVar0;
	var uVar1;
	
	LOG_WARNING("PLAYER_REMOVE_CAMP - removing camp");
	if (IS_LAYOUTREF_VALID(&iParam0 + 24))
	{
		uVar0 = FIND_OBJECT_IN_LAYOUT(&iParam0 + 24, "Player_Campfire_FX");
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
	}
	if (bParam3)
	{
		uVar1 = Function_4(&iParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (bParam2)
			{
				RELEASE_OBJECT_REF(&uVar1);
			}
			else
			{
				DESTROY_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					DECOR_SET_BOOL(&Global_54076, "DestroyMyCamp", true);
				}
			}
		}
	}
	else if (bParam2)
	{
		Function_3(&iParam0);
		if (IS_LAYOUTREF_VALID(&iParam0 + 24))
		{
			RELEASE_LAYOUT_OBJECTS(&iParam0 + 24);
		}
	}
	else
	{
		Function_3(&iParam0);
		if (IS_LAYOUTREF_VALID(&iParam0 + 24))
		{
			DESTROY_LAYOUT_OBJECTS(&iParam0 + 24);
		}
		if (IS_ACTOR_VALID(&Global_54076))
		{
			DECOR_SET_BOOL(&Global_54076, "DestroyMyCamp", true);
		}
	}
	if (bParam4)
	{
		Function_2(&iParam1);
	}
	if (bParam5)
	{
		RESET_ALL_BREAKABLE_TREE_CLEARINGS();
		if (UNK_0x214AFB8C(&iParam1 + 64))
		{
			STREAMING_EVICT_GRINGO(&iParam1 + 64);
			(&iParam1 + 64) = "";
		}
		if (UNK_0x214AFB8C(&iParam1 + 72))
		{
			STREAMING_EVICT_GRINGO(&iParam1 + 72);
			(&iParam1 + 72) = "";
		}
	}
}

void Function_2(struct<61> Param0) //Position: 0x124D / 4685
{
	if (Param0.f_60)
	{
		REMOVE_ACTION_TREE("custom/player_save");
		Param0.f_60 = 0;
	}
	if (Param0.f_56)
	{
		REMOVE_ANIM_SET("player_save");
		Param0.f_56 = 0;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x1298 / 4760
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0 + 24))
	{
		iVar0 = FIND_OBJECT_IN_LAYOUT(&iParam0 + 24, "camp_stayout_volume");
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_39615))
	{
		iVar0 = FIND_OBJECT_IN_LAYOUT(&Global_39615, "camp_no_event_volume");
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

int Function_4(int iParam0) //Position: 0x1315 / 4885
{
	return &iParam0 + 32;
}

void Function_5() //Position: 0x1321 / 4897
{
	if (Function_6((&Global_21369 + 72)->f_32, 1))
	{
		STREAMING_EVICT_ACTOR(StackVal + 976, 4294967295);
		Function_389(&Global_21369 + 72 + 32, 1);
	}
	if (Function_6((&Global_21369 + 72)->f_32, 32))
	{
		STREAMING_EVICT_ACTOR(993, 4294967295);
		Function_389(&Global_21369 + 72 + 32, 32);
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x1370 / 4976
{
	return (bParam0 && bParam1) == 0;
}

void Function_7() //Position: 0x137D / 4989
{
	GUI_CLOSE_WINDOW(&Global_21478);
	return;
}

void Function_8() //Position: 0x138B / 5003
{
	return;
}

void Function_9() //Position: 0x1391 / 5009
{
	if (SQUAD_IS_VALID(&Global_53362 + 152))
	{
		DESTROY_OBJECT(&Global_53362 + 152);
	}
	if (SQUAD_IS_VALID(&Global_53362 + 160))
	{
		DESTROY_OBJECT(&Global_53362 + 160);
	}
	if (SQUAD_IS_VALID(&Global_53362 + 168))
	{
		DESTROY_OBJECT(&Global_53362 + 168);
	}
	if (SQUAD_IS_VALID(&Global_53362 + 176))
	{
		DESTROY_OBJECT(&Global_53362 + 176);
	}
	if (IS_LAYOUTREF_VALID(&Global_53362 + 144))
	{
		DESTROY_LAYOUT(&Global_53362 + 144);
	}
	return;
}

int Function_10() //Position: 0x1400 / 5120
{
	if (((((Global_43789 != Global_46914[0] || Global_43789 != Global_46816[1]) || Global_43789 != Global_46760[0]) || Global_43789 != Global_46850[0]) || Global_43789 != Global_46816[0]) || Global_43789 != Global_46866[1])
	{
		return 1;
	}
	if (Global_6623)
	{
		if (Global_10966 != 29 || Global_10966 != 48)
		{
			return 1;
		}
	}
	return 0;
}

void Function_11(int iParam0, var uParam1) //Position: 0x1468 / 5224
{
	int iVar0;
	var uVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	bool bVar13;
	var uVar14;
	struct<2> Var15;
	bool bVar17;
	var uVar18;
	bool bVar20;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		*(&Global_21369 + 72 + 44) = 0;
		iParam0 = 0;
		uParam1 = -1.0f;
		Function_67(0, 0x40400000);
		Function_66();
		return;
	}
	if (IS_ACTOR_DEAD(&Global_54076))
	{
		*(&Global_21369 + 72 + 44) = 0;
		iParam0 = 0;
		uParam1 = -1.0f;
		Function_67(0, 0x40400000);
		Function_66();
		return;
	}
	iVar0 = 0;
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		iVar0 = 1;
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (!Function_65(12))
	{
		*(&Global_21369 + 72 + 44) = 0;
		iParam0 = 0;
		uParam1 = -1.0f;
		return;
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
		{
			if (GET_MOUNT(&Global_54076) == &Global_21369 + 72)
			{
				*(&Global_21369 + 72 + 44) = 0;
				iParam0 = 0;
				uParam1 = -1.0f;
				Function_66();
				return;
			}
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		*(&Global_21369 + 72 + 44) = 0;
		iParam0 = 0;
		uParam1 = -1.0f;
		if (IS_BLIP_VALID(&Global_21369 + 400))
		{
			REMOVE_BLIP(&Global_21369 + 400);
		}
		Function_66();
		return;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		uVar1 = DECOR_GET_OBJECT(&Global_54076, "HorseStolen");
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar1)))
		{
			DECOR_REMOVE(&Global_54076, "HorseStolen");
			DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DeathTime"))
	{
		bVar2 = true;
		if (IS_ACTOR_VALID(&Global_21369 + 72))
		{
			if (IS_ACTOR_ALIVE(&Global_21369 + 72))
			{
				DECOR_REMOVE(&Global_54076, "PlayerHorse_DeathTime");
				bVar2 = false;
			}
		}
		if (bVar2)
		{
			fVar3 = 60.0f;
			bVar4 = Function_395();
			if (!Global_6606)
			{
				fVar3 = 3.0f;
				bVar4 = false;
			}
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "PlayerHorse_DeathTime")) > fVar3 || bVar4)
			{
				*(&Global_21369 + 72 + 44) = 0;
				iParam0 = 0;
				uParam1 = -1.0f;
				if (IS_BLIP_VALID(&Global_21369 + 400))
				{
					REMOVE_BLIP(&Global_21369 + 400);
				}
				Function_66();
				Function_64();
				if (IS_ACTOR_WHISTLING(&Global_54076))
				{
					if (!Function_63())
					{
						if (!Function_62(Global_119934, 0x10000000))
						{
							if (bVar4)
							{
								Function_60("whistle_horse_dead_help_HC", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_60("whistle_horse_dead_help", 0x41200000, 1, 0, 2, 1, 0);
							}
							Function_59(&Global_119934, 0x10000000);
						}
						else if (bVar4)
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_60("whistle_no_horse_HC", 0x41200000, 1, 0, 2, 1, 0);
							}
						}
					}
					else if (!Function_62(Global_119934, 2048))
					{
						Function_54(&Global_54076, 2048, 1, 0);
					}
				}
				return;
			}
			DECOR_REMOVE(&Global_54076, "PlayerHorse_DeathTime");
		}
		else
		{
			DECOR_REMOVE(&Global_54076, "PlayerHorse_DeathTime");
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_IgnoreWhistle"))
	{
		if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(&Global_54076, "Player_IgnoreWhistle"))
		{
			if (&Global_21369 + 72 + 44 != 0)
			{
				*(&Global_21369 + 72 + 44) = 0;
				Global_21369.f_396 = 0;
				if (IS_BLIP_VALID(&Global_21369 + 400))
				{
					REMOVE_BLIP(&Global_21369 + 400);
				}
				if (IS_ACTOR_VALID(&Global_21369 + 72))
				{
					if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
					{
						TASK_CLEAR(&Global_21369 + 72);
					}
					TASK_PRIORITY_SET(&Global_21369 + 72, true);
					TASK_STAND_STILL(&Global_21369 + 72, 5.0f, 0, 0);
				}
				Function_66();
				Function_64();
				if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
				{
					DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
				{
					DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
				}
			}
			return;
		}
		DECOR_REMOVE(&Global_54076, "Player_IgnoreWhistle");
	}
	switch (&Global_21369 + 72 + 44)
	{
		case 0x00000000:
			if (IS_BLIP_VALID(&Global_21369 + 400))
			{
				REMOVE_BLIP(&Global_21369 + 400);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
			{
				DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
			{
				DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
			}
			if ((IS_ACTOR_WHISTLING(&Global_54076) || iVar0) && !Global_99146)
			{
				bVar5 = true;
				if (bVar5)
				{
					bVar6 = false;
					bVar7 = false;
					bVar8 = Function_52(&bVar6, &bVar7);
					if (!bVar7)
					{
						if (IS_ACTOR_VALID(&bVar8))
						{
							if (GET_MOUNT(&Global_54076) != &bVar8 && 1)
							{
								break;
							}
						}
						if (!bVar6 && !IS_ACTOR_VALID(&bVar8))
						{
							bVar8 = Function_22();
						}
						if (IS_ACTOR_VALID(&bVar8))
						{
							if (!IS_ACTOR_DEAD(&bVar8))
							{
								if (Function_21(&Global_54076, &bVar8) >= 150.0f)
								{
									if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar8)))
									{
										REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bVar8));
									}
									if (IS_BLIP_VALID(&Global_21369 + 400))
									{
										if (334 != GET_BLIP_ICON(&Global_21369 + 400))
										{
											REMOVE_BLIP(&Global_21369 + 400);
											*(&Global_21369 + 400) = ADD_BLIP_FOR_ACTOR(&bVar8, 334, 0, 2, 0);
										}
									}
									else if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
									{
										if (!&bVar8 != GET_MOUNT(&Global_54076))
										{
											*(&Global_21369 + 400) = ADD_BLIP_FOR_ACTOR(&bVar8, 334, 0, 2, 0);
										}
									}
									else
									{
										*(&Global_21369 + 400) = ADD_BLIP_FOR_ACTOR(&bVar8, 334, 0, 2, 0);
									}
									if (!IS_ACTOR_VALID(GET_RIDER(&bVar8)))
									{
										MAKE_ACTOR_READY_FOR_ACTION(&bVar8, 1);
									}
									TASK_PRIORITY_SET(&bVar8, true);
									TASK_RESPOND_TO_HORSE_WHISTLE(&bVar8, &Global_54076);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Global_21369 + 408);
									if (DECOR_CHECK_EXIST(&bVar8, "HorseLeash"))
									{
										DESTROY_OBJECT(DECOR_GET_OBJECT(&bVar8, "HorseLeash"));
										DECOR_REMOVE(&bVar8, "HorseLeash");
									}
									*(&Global_21369 + 408) = &bVar8;
									if (DECOR_CHECK_EXIST(&Global_54076, "LastWhistleTime"))
									{
										DECOR_REMOVE(&Global_54076, "LastWhistleTime");
									}
									*(&Global_21369 + 72 + 44) = 6;
								}
								else
								{
									if (IS_ACTOR_VALID(&bVar8))
									{
										RELEASE_ACTOR(&bVar8);
									}
									*(&Global_21369 + 72 + 44) = 4;
								}
							}
							else
							{
								*(&Global_21369 + 72 + 44) = 4;
							}
						}
						else
						{
							*(&Global_21369 + 72 + 44) = 4;
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			bVar9 = DECOR_GET_INT(&Global_54076, "WhistleTimeWaited");
			bVar9++;
			if (bVar9 > 30)
			{
				DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
				*(&Global_21369 + 72 + 44) = 2;
			}
			else
			{
				DECOR_SET_INT(&Global_54076, "WhistleTimeWaited", bVar9);
			}
			break;
		
		case 0x00000002:
			bVar10 = DECOR_GET_INT(&Global_54076, "WhistlePosProbed");
			bVar13 = false;
			if (bVar10 == 0)
			{
				Function_20();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 5)
			{
				Function_20();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 10)
			{
				Function_20();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 15)
			{
				Function_20();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 16)
			{
				Function_19();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 20)
			{
				Function_19();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 25)
			{
				Function_19();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			else if (bVar10 == 30)
			{
				Function_19();
				bVar13 = AMBIENT_GET_POINT(&Var11, 0);
			}
			bVar10++;
			if (bVar10 > 31)
			{
				if (StackVal && StackVal + 976 <= 976 + 976 >= 998)
				{
					Function_60("whistle_horse_help_cantFind", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_60("whistle_mount_help_cantFind", 0x41200000, 1, 0, 2, 1, 0);
				}
				AMBIENT_RESET_USED_CELLS();
				DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
				*(&Global_21369 + 72 + 44) = 0;
				break;
			}
			else
			{
				DECOR_SET_INT(&Global_54076, "WhistlePosProbed", bVar10);
			}
			if (bVar13)
			{
				if (STREAMING_ARE_BOUNDS_LOADED(Var11, 4.0f))
				{
					DECOR_SET_VECTOR(&Global_54076, "WhistleNavQueryPos", Var11);
					*(&Global_21369 + 72 + 44) = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (!DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
			{
				uVar14 = CREATE_NAV_QUERY(FIND_NAMED_LAYOUT("PlayerLayout"), "WhistleNavQuery");
				DECOR_SET_OBJECT(&Global_54076, "WhistleNavQuery", &uVar14);
				DECOR_GET_VECTOR(&Global_54076, "WhistleNavQueryPos", &Var15);
				Function_18(&Global_54076);
				NAV_QUERY_START_CAN_PATH_TO_POINT(&uVar14, Var15, Function_18(&Global_54076), 976);
			}
			if (NAV_QUERY_IS_DONE(GET_NAV_QUERY_FROM_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"))))
			{
				NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(GET_NAV_QUERY_FROM_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery")), &bVar17);
				if (bVar17)
				{
					AMBIENT_RESET_USED_CELLS();
					*(&Global_21369 + 72 + 44) = 5;
				}
				else
				{
					*(&Global_21369 + 72 + 44) = 2;
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
					DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
				}
			}
			break;
		
		case 0x00000005:
			DECOR_GET_VECTOR(&Global_54076, "WhistleNavQueryPos", &uVar18);
			if (Function_14(&Global_21369 + 408, &iParam0, &uParam1, &uVar18))
			{
				DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
				if (DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DontResetHorseEnum"))
				{
					DECOR_REMOVE(&Global_54076, "PlayerHorse_DontResetHorseEnum");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "LastWhistleTime"))
				{
					DECOR_REMOVE(&Global_54076, "LastWhistleTime");
				}
				*(&Global_21369 + 72 + 44) = 6;
			}
			break;
		
		case 0x00000006:
			if (!IS_BLIP_VALID(&Global_21369 + 400))
			{
				*(&Global_21369 + 400) = ADD_BLIP_FOR_ACTOR(&Global_21369 + 408, 334, 0, 2, 0);
			}
			if (DECOR_CHECK_EXIST(&Global_21369 + 408, "HorseLeash"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_21369 + 408, "HorseLeash"));
				DECOR_REMOVE(&Global_21369 + 408, "HorseLeash");
			}
			if (GET_TASK_STATUS(&Global_21369 + 408, 86) == 2)
			{
				TASK_PRIORITY_SET(&Global_21369 + 408, true);
				TASK_RESPOND_TO_HORSE_WHISTLE(&Global_21369 + 408, &Global_54076);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Global_21369 + 408);
				Function_13();
			}
			if (IS_ACTOR_VALID(&Global_21369 + 408))
			{
				if (IS_ACTOR_DEAD(&Global_21369 + 408))
				{
					*(&Global_21369 + 72 + 44) = 0;
				}
				else if (GET_TASK_STATUS(&Global_21369 + 408, 86) != 0 || GET_TASK_STATUS(&Global_21369 + 408, 86) != 4)
				{
					if (Function_63())
					{
						if (GET_TASK_STATUS(&Global_21369 + 408, 86) == 0)
						{
							bVar20 = GET_ACTOR_ENUM(&Global_21369 + 408);
							if (((bVar20 != 1248 || bVar20 != 1249) || bVar20 != 1250) || bVar20 != 1251)
							{
								if (Function_12())
								{
									SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", false, false, 0, 0, true, false);
								}
							}
						}
					}
					TASK_CLEAR(&Global_21369 + 408);
					TASK_PRIORITY_SET(&Global_21369 + 408, 2);
					AI_GOAL_LOOK_CLEAR(&Global_21369 + 408);
					Function_13();
					Function_64();
					*(&Global_21369 + 72 + 44) = 0;
				}
				else if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					if (&Global_21369 + 408 == GET_MOUNT(&Global_54076))
					{
						TASK_PRIORITY_SET(&Global_21369 + 408, 2);
						TASK_CLEAR(&Global_21369 + 408);
						AI_GOAL_LOOK_CLEAR(&Global_21369 + 408);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Global_21369 + 408);
						Function_13();
						Function_64();
						Function_66();
						*(&Global_21369 + 72 + 44) = 0;
					}
				}
			}
			else
			{
				Function_64();
				Function_66();
				*(&Global_21369 + 72 + 44) = 0;
			}
			break;
	}
	return;
}

bool Function_12() //Position: 0x22A8 / 8872
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_13() //Position: 0x22BB / 8891
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 24)
		{
			if (IS_VOLUME_VALID(&Global_39621[iVar15] + 24))
			{
				if (bVar0)
				{
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&Global_21369 + 72, &Global_39621[iVar15] + 24, 2, 0);
					bVar0 = false;
				}
				else
				{
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&Global_21369 + 72, &Global_39621[iVar15] + 24);
				}
			}
			iVar1++;
		}
	}
	return;
}

bool Function_14(int iParam0, var uParam1, var uParam2, vector3 vParam3) //Position: 0x2329 / 9001
{
	bool bVar0;
	
	uParam1 = 1;
	uParam2 = GET_CURRENT_GAME_TIME();
	(&Global_21369 + 72) = "";
	if ((Function_17() >= 1 && !DECOR_CHECK_EXIST(&Global_54076, "PlayerHorse_DontResetHorseEnum")) && 1)
	{
		iParam0 = Function_326(1, 0, vParam3, vParam3.y, vParam3.z, 0.0f, 0, 1);
		if (!Function_62(Global_119936, 0x2000000))
		{
			Function_54(&Global_54076, 0x2000000, 3, 0);
		}
	}
	else
	{
		if (StackVal == 17)
		{
			Function_15((&Global_21369 + 72)->f_12 + 976, 0, 1);
		}
		iParam0 = Function_326(1, 0, vParam3, vParam3.y, vParam3.z, 0.0f, 0, 0);
	}
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	*(&Global_21369 + 400) = ADD_BLIP_FOR_ACTOR(&iParam0, 334, 0, 2, 0);
	TASK_CLEAR(&iParam0);
	if (!IS_ACTOR_VALID(GET_RIDER(&iParam0)))
	{
		MAKE_ACTOR_READY_FOR_ACTION(&iParam0, 1);
	}
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_RESPOND_TO_HORSE_WHISTLE(&iParam0, &Global_54076);
	AI_GOAL_LOOK_AT_ACTOR(&iParam0, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
	Function_13();
	if (Function_63())
	{
		if (!Function_62(Global_119934, 4096))
		{
			bVar0 = GET_ACTOR_ENUM(&iParam0);
			if (((bVar0 != 1248 || bVar0 != 1249) || bVar0 != 1250) || bVar0 != 1251)
			{
				Function_54(&Global_54076, 4096, 1, 0);
			}
		}
	}
	*(&Global_21369 + 408) = &iParam0;
	DECOR_SET_BOOL(&Global_21369 + 408, "WasPlayerMount", true);
	return 1;
}

void Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x24D3 / 9427
{
	Global_21473 = iParam0;
	if (&bParam1)
	{
		Function_16(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_16(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x2502 / 9474
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_17() //Position: 0x2513 / 9491
{
	return Global_21369.f_244;
}

struct<8> Function_18(int iParam0) //Position: 0x251E / 9502
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_19() //Position: 0x2530 / 9520
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(2);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(20.0f, 120.0f);
	AMBIENT_SET_ELEVATION_FILTER(-15.0f, 15.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 19,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,6f, 0.0f);
	return;
}

void Function_20() //Position: 0x2589 / 9609
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(2);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(20.0f, 75.0f);
	AMBIENT_SET_ELEVATION_FILTER(-10.0f, 10.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,5f, 0.0f);
	return;
}

float Function_21(float fParam0, bool bParam1) //Position: 0x25E6 / 9702
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

var Function_22() //Position: 0x26DB / 9947
{
	int iVar0;
	var uVar1;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		if (!IS_OBJECT_VALID(DECOR_GET_OBJECT(&Global_54076, "HorseStolen")))
		{
			Function_64();
		}
		else
		{
			iVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&Global_54076, "HorseStolen"));
			uVar1 = GET_RIDER(&iVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				DECOR_SET_BOOL(&uVar1, "TriggerScream", true);
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
				if (DECOR_CHECK_EXIST(&uVar1, "honorAward"))
				{
					Function_25(50, 1, 0);
					Function_24(&uVar1, 4294967295 * 50);
					DECOR_REMOVE(&uVar1, "honorAward");
				}
				if (!Global_6623)
				{
					TASK_FLEE_ACTOR(&uVar1, &Global_54076, 200.0f, -1.0f, 0, 0, 0);
				}
			}
			Function_16(&Global_21369 + 72 + 32, 2);
			Function_23(&iVar0, 1);
			Function_64();
			DECOR_SET_FLOAT(&iVar0, "NextNuRiderPollTime", (GET_CURRENT_GAME_TIME() + 1.0f));
			return &iVar0;
		}
	}
	return "";
}

void Function_23(var uParam0, int iParam1) //Position: 0x283F / 10303
{
	DECOR_SET_OBJECT(&Global_54076, "SettingPlayerHorse", &uParam0);
	DECOR_SET_BOOL(&Global_54076, "NewPlayerHorse_Wipe", &iParam1);
	return;
}

void Function_24(var uParam0, bool bParam1) //Position: 0x2886 / 10374
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0x28A8 / 10408
{
	int iVar0;
	bool bVar1;
	
	if (Function_340(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_395())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_51(1);
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
			Function_50(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_62(Global_119936, 1))
				{
					Function_54(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_48(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_62(Global_119936, 2))
				{
					Function_54(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_46(1, bVar1, 0, 0);
	}
	else
	{
		Function_45(1, (4294967295 * bVar1), 0);
	}
	if (Function_51(1) <= 4294962296)
	{
		Function_32(1, 4294962296, 0);
	}
	else if (Function_51(1) >= 5000)
	{
		Function_32(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_31(1));
	iVar0 = Function_51(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_27(2, Function_320(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_27(2, Function_320(Global_21369.f_244), 0);
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
				Function_27(2, Function_320(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_27(2, Function_320(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_27(2, Function_320(Global_21369.f_244), 1);
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
				Function_27(2, Function_320(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_27(2, Function_320(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_27(2, Function_320(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_27(2, Function_320(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_27(2, Function_320(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_27(2, Function_320(Global_21369.f_244), 1);
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
				Function_27(2, Function_320(Global_21369.f_244), 0);
			}
			break;
	}
	Function_26(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x2BCF / 11215
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

int Function_27(int iParam0, char* cParam1) //Position: 0x2E39 / 11833
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
	Function_319(iParam0, &cParam1, 0, 1);
	iVar1 = Function_28();
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

int Function_28() //Position: 0x2FC9 / 12233
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
	Function_29();
	return 0;
}

void Function_29() //Position: 0x306A / 12394
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_30(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_30(int iParam0) //Position: 0x3128 / 12584
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

float Function_31(int iParam0) //Position: 0x318E / 12686
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x31C7 / 12743
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
		Function_44(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_43(iParam0);
	if (&bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3463 / 13411
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_42(390))), 32);
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
					bVar19 = (Function_31(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_31(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_325(), &Var9);
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

var Function_34(int iParam0) //Position: 0x3AA1 / 15009
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3AB2 / 15026
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0) //Position: 0x3BA9 / 15273
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3BC4 / 15300
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_39(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x3C2B / 15403
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x3C3D / 15421
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3C4F / 15439
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x3D83 / 15747
{
	return Global_55480[iParam016].f_96;
}

var Function_42(int iParam0) //Position: 0x3D92 / 15762
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_43(int iParam0) //Position: 0x3DCF / 15823
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

int Function_44(int iParam0, bool bParam1, bool bParam2) //Position: 0x3F69 / 16233
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

int Function_45(int iParam0, bool bParam1, int iParam2) //Position: 0x41C7 / 16839
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
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_46(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x43C4 / 17348
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
	Function_44(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_47(iParam0);
	return 1;
}

void Function_47(int iParam0) //Position: 0x45EC / 17900
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

int Function_48(int iParam0, bool bParam1) //Position: 0x468A / 18058
{
	bool bVar0;
	int iVar1;
	
	Function_45(iParam0, bParam1, 0);
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
	iVar1 = Function_49(iParam0, 4294967295);
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
	iVar1 = Function_28();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_49(int iParam0, int iParam1) //Position: 0x4835 / 18485
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

int Function_50(int iParam0, bool bParam1) //Position: 0x487A / 18554
{
	bool bVar0;
	int iVar1;
	
	Function_46(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_49(iParam0, 4294967295);
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
	iVar1 = Function_28();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_51(int iParam0) //Position: 0x4A26 / 18982
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

var Function_52(var uParam0, var uParam1) //Position: 0x4A67 / 19047
{
	var uVar0;
	var uVar1;
	
	uVar0 = Function_326(0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
	uVar1 = Function_53();
	uParam1 = 0;
	if (IS_ACTOR_VALID(&uVar1) && Global_6623)
	{
		uParam0 = 1;
		Function_16(&Global_21369 + 72 + 32, 16);
		return &uVar1;
	}
	if (Global_6623 && Function_6((&Global_21369 + 72)->f_32, 16))
	{
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (!IS_ACTOR_VALID(GET_RIDER(&uVar0)))
			{
				uParam0 = 0;
				return &uVar0;
			}
		}
		uParam1 = 1;
		return "";
	}
	if (IS_ACTOR_VALID(&uVar0))
	{
		uParam0 = 0;
		return &uVar0;
	}
	return "";
}

var Function_53() //Position: 0x4AFC / 19196
{
	if (IS_ACTOR_VALID(&Global_21369 + 128) && Global_6623)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 128);
		return &Global_21369 + 128;
	}
	return "";
}

void Function_54(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4B2F / 19247
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_56(&iParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_55(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		DECOR_SET_INT(&iParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&iParam0, &cVar1, (DECOR_GET_INT(&iParam0, &cVar1) || bVar0));
	}
}

void Function_55(char* cParam0) //Position: 0x4BA4 / 19364
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

bool Function_56(int iParam0, var uParam1, int iParam2) //Position: 0x4BDE / 19422
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
		if (Function_58(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_57(uVar0))
		{
			case 0x00000002:
				if (!Function_62(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_57(char* cParam0) //Position: 0x4C5A / 19546
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

int Function_58(int iParam0) //Position: 0x4CFB / 19707
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_389(&iVar1, 2147483648);
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

void Function_59(var uParam0, int iParam1) //Position: 0x4D38 / 19768
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4D49 / 19785
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_61(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_61(int iParam0) //Position: 0x4DD4 / 19924
{
	char* cVar0[16];
	
	if (!Function_63())
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

bool Function_62(int iParam0, int iParam1) //Position: 0x4E13 / 19987
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_63() //Position: 0x4E26 / 20006
{
	if (Function_6(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_64() //Position: 0x4E41 / 20033
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

bool Function_65(int iParam0) //Position: 0x4E75 / 20085
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_66() //Position: 0x4E91 / 20113
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

void Function_67(float fParam0, float fParam1) //Position: 0x4F97 / 20375
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
	Function_66();
	Function_64();
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

void Function_68() //Position: 0x50A8 / 20648
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	
	Global_6630 = IS_POSITION_INDOORS(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Global_54078, StackVal));
	bVar0 = false;
	bVar1 = (bVar0 || Global_43790 == 5);
	bVar2 = (bVar1 && !bVar0);
	fVar3 = 2,5f;
	uVar4 = Function_312();
	bVar5 = (IS_ACTOR_VALID(GET_MOUNT(&uVar4)) || IS_ACTOR_VALID(GET_VEHICLE(&uVar4)));
	if (Function_72())
	{
		iVar6 = 12;
	}
	else if (Global_15862 < 0,1f)
	{
		iVar6 = 11;
	}
	else if (Global_6646 && bVar5)
	{
		iVar6 = 10;
	}
	else if (Global_6630 && bVar1)
	{
		iVar6 = 9;
	}
	else
	{
		fVar7 = Function_71(&uVar4, 1);
		if (Global_6629)
		{
			if (bVar5)
			{
				iVar6 = Function_70(fVar7, 1, 7, 8);
			}
			else
			{
				iVar6 = Function_70(fVar7, 0, 5, 6);
			}
		}
		else if (bVar5)
		{
			iVar6 = Function_70(fVar7, 1, 3, 4);
		}
		else
		{
			iVar6 = Function_70(fVar7, 0, 1, 2);
		}
	}
	if ((Global_6630 && bVar2) || Function_69(2097152))
	{
		SET_RADAR_TILES_VISIBLE(0);
	}
	else
	{
		SET_RADAR_TILES_VISIBLE(1);
	}
	if (iVar6 == iLocal_14)
	{
		return;
	}
	if (iVar6 == 9 && iLocal_14 != 9)
	{
		if (bVar2)
		{
			fVar3 = 100.0f;
		}
	}
	if (Global_99146 || HUD_IS_FADED())
	{
		fVar3 = 1000.0f;
	}
	iLocal_14 = iVar6;
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	switch (iLocal_14)
	{
		case 0x00000000:
			break;
		
		case 0x00000007:
			SET_HUD_MAP_SCALE_OVERRIDE(80.0f, fVar3);
			break;
		
		case 0x00000008:
			SET_HUD_MAP_SCALE_OVERRIDE(80.0f, fVar3);
			break;
		
		case 0x00000005:
			SET_HUD_MAP_SCALE_OVERRIDE(65.0f, fVar3);
			break;
		
		case 0x00000006:
			SET_HUD_MAP_SCALE_OVERRIDE(65.0f, fVar3);
			break;
		
		case 0x00000009:
			if (bVar0)
			{
				SET_HUD_MAP_SCALE_OVERRIDE(65.0f, fVar3);
			}
			else
			{
				SET_HUD_MAP_SCALE_OVERRIDE(30.0f, fVar3);
			}
			break;
		
		case 0x00000003:
			SET_HUD_MAP_SCALE_OVERRIDE(120.0f, fVar3);
			break;
		
		case 0x00000004:
			SET_HUD_MAP_SCALE_OVERRIDE(140.0f, fVar3);
			break;
		
		case 0x00000001:
			SET_HUD_MAP_SCALE_OVERRIDE(100.0f, fVar3);
			break;
		
		case 0x00000002:
			SET_HUD_MAP_SCALE_OVERRIDE(120.0f, fVar3);
			break;
		
		case 0x0000000A:
			SET_HUD_MAP_SCALE_OVERRIDE(200.0f, fVar3);
			break;
		
		case 0x0000000B:
			SET_HUD_MAP_SCALE_OVERRIDE(Global_15862, fVar3);
			break;
		
		case 0x0000000C:
			SET_HUD_MAP_SCALE_OVERRIDE(225.0f, fLocal_11);
			break;
		
		default:
			break;
	}
	return;
}

bool Function_69(int iParam0) //Position: 0x52DE / 21214
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_70(float fParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x52FA / 21242
{
	float fVar0;
	float fVar1;
	
	if (bParam1)
	{
		fVar0 = 2,5f;
		fVar1 = 7.0f;
	}
	else
	{
		fVar0 = 1.0f;
		fVar1 = 3.0f;
	}
	if (!(iLocal_14 != iParam2 || iLocal_14 != iParam3))
	{
		fVar0 = 0.0f;
	}
	if (fParam0 > (fVar1 - fVar0))
	{
		return iParam2;
	}
	if (fParam0 <= (fVar1 + fVar0))
	{
		return iParam3;
	}
	return iLocal_14;
}

float Function_71(var uParam0, bool bParam1) //Position: 0x5351 / 21329
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

bool Function_72() //Position: 0x5372 / 21362
{
	return fLocal_7 < 0.0f;
}

void Function_73() //Position: 0x537C / 21372
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_86();
	bVar1 = Function_85(8);
	if (bLocal_4)
	{
		if (UNK_0x062C5047("@GENERIC.ZOOM_RADAR", 1, 1) && !bVar0)
		{
			if (!Function_83(8))
			{
				Function_81(8);
				if (bVar1)
				{
					iLocal_6 = 1;
				}
				else
				{
					iLocal_6 = fLocal_7 < 0.0f;
				}
			}
			if (!bVar1)
			{
				fLocal_7 = fLocal_10;
			}
		}
		else if (Function_83(8))
		{
			if (iLocal_6)
			{
				bVar0 = true;
			}
			Function_78();
			Function_76(8);
		}
		if (bVar0)
		{
			fLocal_7 = 0.0f;
		}
		if (fLocal_7 < 0.0f)
		{
			fLocal_7 = (fLocal_7 - GET_UNWARPED_REALTIME_SECONDS());
			Function_75();
		}
		else
		{
			Function_74();
		}
	}
	else if (UNK_0x062C5047("@GENERIC.ZOOM_RADAR", 1, 1) && !bVar0)
	{
		if (bVar1)
		{
			Function_78();
		}
		if (!iLocal_6)
		{
			iLocal_6 = 1;
			if (fLocal_7 < 0.0f)
			{
				fLocal_7 = 0.0f;
			}
			else
			{
				fLocal_7 = fLocal_10;
			}
		}
		fLocal_8 = fLocal_10;
	}
	else
	{
		iLocal_6 = 0;
		if (fLocal_8 < 0.0f)
		{
			if (Function_83(32))
			{
				Function_78();
				if (fLocal_9 >= 0.0f)
				{
					Function_76(32);
					fLocal_8 = 0.0f;
				}
				else
				{
					fLocal_9 = (fLocal_9 - GET_UNWARPED_REALTIME_SECONDS());
				}
			}
			else
			{
				if (fLocal_8 >= fLocal_13 && !bVar1)
				{
					if (fLocal_7 < 0.0f)
					{
						fLocal_7 = 0.0f;
					}
					else
					{
						fLocal_7 = fLocal_10;
					}
				}
				fLocal_8 = 0.0f;
			}
		}
		if (fLocal_7 < 0.0f)
		{
			fLocal_7 = (fLocal_7 - GET_UNWARPED_REALTIME_SECONDS());
		}
	}
	return;
}

void Function_74() //Position: 0x54C8 / 21704
{
	if (iLocal_5)
	{
		iLocal_5 = 0;
		Function_76(32);
	}
	return;
}

void Function_75() //Position: 0x54DB / 21723
{
	if (!iLocal_5)
	{
		iLocal_5 = 1;
		Function_81(32);
	}
	return;
}

void Function_76(int iParam0) //Position: 0x54EF / 21743
{
	Function_77(&Global_124154, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_77(int iParam0, int iParam1) //Position: 0x5529 / 21801
{
	Function_389(&iParam0, iParam1);
	return;
}

void Function_78() //Position: 0x5537 / 21815
{
	if (Function_85(8))
	{
		Function_80();
	}
	Function_79(8, 0, 1);
	return;
}

void Function_79(int iParam0, bool bParam1, bool bParam2) //Position: 0x554F / 21839
{
	bParam2 = &bParam2;
	if (bParam1)
	{
		Function_16(&Global_120031 + 260, iParam0);
	}
	else
	{
		Function_389(&Global_120031 + 260, iParam0);
	}
	return;
}

void Function_80() //Position: 0x557B / 21883
{
	Function_79(32768, 1, 0);
	return;
}

void Function_81(int iParam0) //Position: 0x558A / 21898
{
	Function_82(&Global_124154, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x55E5 / 21989
{
	Function_16(&uParam0, iParam1);
	return;
}

bool Function_83(int iParam0) //Position: 0x55F3 / 22003
{
	return Function_84(Global_124154, iParam0);
}

int Function_84(var uParam0, int iParam1) //Position: 0x5602 / 22018
{
	return (uParam0 && iParam1) == 0;
}

bool Function_85(bool bParam0) //Position: 0x560F / 22031
{
	return Function_6(Global_120031.f_260, bParam0);
}

int Function_86() //Position: 0x5621 / 22049
{
	if (Global_99146)
	{
		return 1;
	}
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (Global_47307)
	{
		return 1;
	}
	if (Global_6654)
	{
		return 1;
	}
	if (!UI_ISFOCUSED("HudScene"))
	{
		return 1;
	}
	return UNK_0x062C5047("@RADIAL_MENU.SHOW_HIDE", 1, 0);
}

int Function_87(bool bParam0) //Position: 0x568E / 22158
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return 0;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 0;
	}
	if (Global_99146)
	{
		return 0;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 0;
	}
	if (IS_STAT_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_99127)
	{
		return 0;
	}
	if (bParam0 == -1.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - bParam0) < 3.0f)
		{
			bParam0 = -1.0f;
			Global_77929 = 0;
		}
		else
		{
			return 0;
		}
	}
	iVar0 = (Global_77754 - 1);
	if (!Global_77766[iVar016].f_96 != 4294967295)
	{
		iVar1 = STRING_TO_INT(&(Global_77766[iVar016]));
		iVar2 = Function_49(Global_77766[iVar016].f_116, iVar0);
		if (iVar2 >= 4294967295)
		{
			if (Function_89(iVar0, iVar2))
			{
				Function_29();
				return 1;
			}
		}
		if (Global_77754[iVar0] != 0.0f)
		{
			if (Global_77766[iVar016].f_120 == 5 && Global_77766[iVar016].f_120 == 6)
			{
				Function_29();
				return 1;
			}
		}
		if (iVar1 < 4294967295 && iVar1 > 696)
		{
			switch (Global_77766[iVar016].f_120)
			{
				case 0x00000000:
				case 0x00000001:
					Function_33(iVar1, 1, Global_77754[iVar0], 1, 1, 0x40400000, 0, 0);
					bParam0 = GET_CURRENT_GAME_TIME();
					Global_77929 = 1;
					break;
				
				case 0x00000002:
				case 0x00000003:
					Function_33(iVar1, 0, Global_77754[iVar0], 1, 1, 0x40400000, 0, 0);
					bParam0 = GET_CURRENT_GAME_TIME();
					Global_77929 = 1;
					break;
				
				case 0x00000004:
					Function_33(iVar1, 1, Global_77754[iVar0], 1, 0, 3.0f, 1, 0);
					bParam0 = GET_CURRENT_GAME_TIME();
					Global_77929 = 1;
					break;
				
				case 0x00000005:
					Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, *(&Global_77766[iVar016] + 32), 3.0f, 1);
					bParam0 = GET_CURRENT_GAME_TIME();
					Global_77929 = 1;
					break;
				
				case 0x00000006:
					Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, *(&Global_77766[iVar016] + 32), 3.0f, 0);
					bParam0 = GET_CURRENT_GAME_TIME();
					Global_77929 = 1;
					break;
				
				default:
					LOG_ERROR("STAT_UPDATE_QUEUE: Unknown Buffer Operation!");
					break;
			}
			if ((GET_CURRENT_GAME_TIME() - Global_131719) <= 1.0f)
			{
				switch (iVar1)
				{
					case 0x00000001:
						PLAY_SOUND_FRONTEND("HUD_HONOR_MASTER");
						break;
					
					case 0x00000003:
						PLAY_SOUND_FRONTEND("HUD_NOTORIETY_MASTER");
						break;
					
					case 0x00000000:
						PLAY_SOUND_FRONTEND("HUD_PICKUP_MONEY_MASTER");
						break;
					}
				}
			}
	}
	Function_29();
	return 1;
}

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, bool bParam10) //Position: 0x591B / 22811
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &fParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &fParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &fParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

bool Function_89(int iParam0, int iParam1) //Position: 0x59A3 / 22947
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam0 <= 0 && iParam1 <= 0)
	{
		if (Global_77766[iParam016].f_96 != Global_77766[iParam116].f_96)
		{
			LOG_ERROR("STAT_MERGE_STAT_UPDATES: Attempting to merge two Stats of different Type!");
			return 0;
		}
		fVar0 = Global_77754[iParam0];
		fVar1 = Global_77754[iParam1];
		bVar3 = false;
		if (Global_77766[iParam016].f_120 == 2)
		{
			fVar0 = (fVar0 * -1.0f);
		}
		if (Global_77766[iParam016].f_120 == 3)
		{
			fVar0 = (fVar0 * -1.0f);
			bVar3 = true;
		}
		if (Global_77766[iParam116].f_120 == 2)
		{
			fVar1 = (fVar1 * -1.0f);
		}
		if (Global_77766[iParam116].f_120 == 3)
		{
			fVar1 = (fVar1 * -1.0f);
			bVar3 = true;
		}
		bVar2 = (fVar0 + fVar1);
		if (bVar2 < 0.0f)
		{
			if (bVar3)
			{
				Global_77766[iParam116].f_120 = 1;
			}
			else
			{
				Global_77766[iParam116].f_120 = 0;
			}
		}
		else if (bVar3)
		{
			Global_77766[iParam116].f_120 = 3;
		}
		else
		{
			Global_77766[iParam116].f_120 = 2;
		}
		bVar2 = FABS(bVar2);
		Global_77754[iParam1] = bVar2;
		return 1;
	}
	return 0;
}

int Function_90(int iParam0) //Position: 0x5AEB / 23275
{
	int iVar0;
	
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (IS_PLAYER_DEADEYE(0))
		{
			return 0;
		}
	}
	return 0;
	if (IS_STAT_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_77929)
	{
		if ((GET_CURRENT_GAME_TIME() - iParam0) > 1.0f && IS_STAT_MESSAGE_SHOWING())
		{
			return 0;
		}
	}
	if (iParam0 == -1.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - iParam0) < 3.0f)
		{
			iParam0 = -1.0f;
			Global_99127 = 0;
		}
		else
		{
			return 0;
		}
	}
	iVar0 = (Global_99055 - 1);
	if (!Global_99055[iVar07] != 4294967295)
	{
		if (!StackVal > 1)
		{
			Function_93(StackVal, Global_99055[iVar07]);
			iParam0 = GET_CURRENT_GAME_TIME();
			Global_99127 = 1;
		}
	}
	Function_92(iVar0);
	Function_91();
	return 1;
}

void Function_91() //Position: 0x5B9E / 23454
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_99055 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_99055[iVar07] = Global_99055[iVar17];
		Global_99055[iVar07].f_4 = StackVal;
		*(&Global_99055[iVar07] + 8) = { StackVal, StackVal, StackVal, *(&Global_99055[iVar17] + 8) };
		*(&Global_99055[iVar07] + 40) = { StackVal, *(&Global_99055[iVar17] + 40) };
		Function_92(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_92(int iParam0) //Position: 0x5C1E / 23582
{
	Global_99055[iParam07] = 4294967295;
	Global_99055[iParam07].f_4 = 4294967295;
	strcpy(&Global_99055[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_99055[iParam07] + 40, "NHIL", 8);
	return;
}

int Function_93(int iParam0, bool bParam1) //Position: 0x5C5E / 23646
{
	struct<2> Var0;
	char* cVar2[16];
	
	if (iParam0 >= Global_79340)
	{
		LOG_ERROR("PVP_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	Var0 = { StackVal, *(&Global_79340[iParam018] + 16) };
	strcpy(&cVar2, "AM_rank", 16);
	if (bParam1 != 10 && 0)
	{
		strcpy(&cVar2, "AM_MP_rank", 16);
	}
	stradd(&cVar2, INT_TO_STRING(bParam1), 16);
	if (!Global_77928)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(&Var0), UI_GET_STRING(&cVar2), 3.0f, 0, 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return 1;
}

int Function_94(int iParam0, int iParam1) //Position: 0x5D06 / 23814
{
	bool bVar0;
	
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (IS_PLAYER_DEADEYE(0))
		{
			return 0;
		}
	}
	return 0;
	if (IS_STAT_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_77929)
	{
		if ((GET_CURRENT_GAME_TIME() - iParam1) > 1.0f && IS_STAT_MESSAGE_SHOWING())
		{
			return 0;
		}
	}
	if (iParam1 == -1.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - iParam1) < 3.0f)
		{
			iParam1 = -1.0f;
			Global_99127 = 0;
		}
		else
		{
			return 0;
		}
	}
	bVar0 = (Global_98983 - 1);
	if (iParam0)
	{
		PRINTSTRING("iMsgToUpdate: ");
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING("MissionID: ");
		PRINTINT(Global_98983[bVar07]);
		PRINTNL();
		PRINTSTRING("Rank: ");
		PRINTINT(StackVal);
		PRINTNL();
		PRINTSTRING("nMessage: ");
		PRINTSTRING(&Global_98983[bVar07] + 8);
		PRINTNL();
		PRINTSTRING("Parameter: ");
		PRINTSTRING(&Global_98983[bVar07] + 40);
		PRINTNL();
	}
	if (!Global_98983[bVar07] != 4294967295)
	{
		if (!StackVal > 1)
		{
			Function_97(StackVal, Global_98983[bVar07]);
			iParam1 = GET_CURRENT_GAME_TIME();
			Global_99127 = 1;
		}
	}
	Function_96(bVar0);
	Function_95();
	return 1;
}

void Function_95() //Position: 0x5E57 / 24151
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_98983 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_98983[iVar07] = Global_98983[iVar17];
		Global_98983[iVar07].f_4 = StackVal;
		*(&Global_98983[iVar07] + 8) = { StackVal, StackVal, StackVal, *(&Global_98983[iVar17] + 8) };
		*(&Global_98983[iVar07] + 40) = { StackVal, *(&Global_98983[iVar17] + 40) };
		Function_96(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_96(int iParam0) //Position: 0x5ED7 / 24279
{
	Global_98983[iParam07] = 4294967295;
	Global_98983[iParam07].f_4 = 4294967295;
	strcpy(&Global_98983[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_98983[iParam07] + 40, "NHIL", 8);
	return;
}

int Function_97(int iParam0, int iParam1) //Position: 0x5F17 / 24343
{
	struct<2> Var0;
	char* cVar2[16];
	
	if (0 | Global_53524.f_44)
	{
		if (iParam0 >= Global_78078)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (iParam0 >= Global_77932)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	if (0 | Global_53524.f_44)
	{
		Var0 = { StackVal, *(&Global_78078[iParam018] + 16) };
	}
	else
	{
		Var0 = { StackVal, *(&Global_77932[iParam018] + 16) };
	}
	strcpy(&cVar2, "AM_rank", 16);
	if (iParam1 != 10 && 0)
	{
		strcpy(&cVar2, "AM_MP_rank", 16);
	}
	stradd(&cVar2, INT_TO_STRING((iParam1 - 1)), 16);
	if (!Global_77928)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(&Var0), UI_GET_STRING(&cVar2), 3.0f, 0, 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return 1;
}

void Function_98(int iParam0) //Position: 0x6028 / 24616
{
	char* cVar0[64];
	int iVar16;
	
	if ((Global_53524.f_36 || Global_53524.f_40) || Global_53524.f_44)
	{
		return;
	}
	if (IS_GAME_RESETTING())
	{
		return;
	}
	if (!iLocal_140)
	{
		if (!iLocal_143)
		{
			if (Function_104(&iParam0))
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
				}
				else if (((HUD_IS_FADED() && !HUD_IS_FADING()) && !DECOR_CHECK_EXIST(&Global_54076, "resetignorefadestate")) && Global_10967 == 7)
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				else if (((!HUD_IS_FADED() && !HUD_IS_FADING()) || DECOR_CHECK_EXIST(&Global_54076, "resetignorefadestate")) || Global_10967 != 7)
				{
					if (!UI_ISACTIVE("NeutralScreen"))
					{
						UI_PUSH("NeutralScreen");
					}
					CANCEL_DEADEYE();
					UNK_0xE6C1DBD9(0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Global_6639 = 1;
					iLocal_143 = 1;
					if (Global_10967 != 7)
					{
						iVar16 = 0;
						if (!IS_ACTOR_VALID(&Global_54076))
						{
							strcpy(&cVar0, "GEN_DEATH_SONG_01", 64);
							iVar16 = 1;
						}
						else if (!IS_ACTOR_ALIVE(&Global_54076))
						{
							strcpy(&cVar0, "GEN_DEATH_SONG_01", 64);
							iVar16 = 1;
						}
						else
						{
							switch (Global_43787)
							{
								case 0x00000000:
									stradd(&cVar0, "FTR_", 64);
									break;
								
								case 0x00000001:
									stradd(&cVar0, "MEX_", 64);
									break;
								
								case 0x00000002:
									stradd(&cVar0, "NRT_", 64);
									break;
								
								default:
									stradd(&cVar0, "FTR_", 64);
									break;
							}
							if (Global_10967 != 0)
							{
								stradd(&cVar0, "MISSION_FAIL_SONG_01", 64);
								iVar16 = 1;
							}
							else
							{
								stradd(&cVar0, "BEAT_FAIL_SONG_01", 64);
							}
						}
						AUDIO_MUSIC_ONE_SHOT(&cVar0, "EVERYTHING", 0.0f, 0.0f, 0, iVar16);
					}
				}
			}
		}
		else if (iParam0 < -1.0f)
		{
			if (((GET_CURRENT_GAME_TIME() - iParam0) <= 3.0f || ((GET_CURRENT_GAME_TIME() - iParam0) <= 1.0f && UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))) || ((Global_10967 == 1 && Global_6623) && !DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay")))
			{
				if (Global_10967 == 0 && Global_10967 == 8)
				{
					switch (Global_10967)
					{
						case 0x00000001:
						case 0x00000002:
						case 0x00000003:
						case 0x00000005:
							if (Global_10967 == 1)
							{
								UI_SET_TEXT("DeathScreen_Failed", "DeathScreen_Died");
								UI_SET_TEXT("MissionFailed_Explanation", "Common_Null");
							}
							else
							{
								UI_SET_TEXT("DeathScreen_Failed", "DeathScreen_Failed");
								UI_SET_TEXT("MissionFailed_Explanation", "MissionFailedBuffer");
							}
							iParam0 = -1.0f;
							iLocal_140 = 1;
							bLocal_139 = true;
							if (DECOR_CHECK_EXIST(&Global_54076, "resetignorefadestate"))
							{
								DECOR_REMOVE(&Global_54076, "resetignorefadestate");
							}
							break;
						
						case 0x00000007:
							iParam0 = -1.0f;
							Function_103();
							LOAD_SOFT_SAVE(1);
							break;
						
						default:
							break;
					}
					Global_10967 = 0;
				}
				else if (!bLocal_139)
				{
					iParam0 = -1.0f;
					iLocal_140 = 0;
					Global_47307 = 0;
					Global_6638 = 1;
					Global_6639 = 0;
					Function_103();
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						ABORT_SCRIPTED_CONVERSATION(1);
					}
					UI_PUSH("DeathScreen");
					UI_POP("NeutralScreen");
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN_NOW(999.0f, 1065353216);
					}
				}
				Function_102();
			}
		}
	}
	if (iLocal_140)
	{
		iLocal_140 = 0;
		Global_47307 = 0;
		if (bLocal_139)
		{
			if (Global_10988)
			{
				Function_103();
				if (!LOAD_SOFT_SAVE(0))
				{
					RESET_GAME();
				}
				return;
			}
			Function_102();
			if (Function_314("autoloadsave") || IS_LAUNCH_RETAIL())
			{
			}
			iLocal_141 = 1;
			if (Function_101(Global_10968) == 1)
			{
				if (Global_6667[Global_1096628].f_152 != 1 && !Global_6624)
				{
					UI_EXCLUDE("MissionFailed_Cancel");
				}
				if ((StackVal || Function_99((StackVal || Function_99(Function_99(StackVal) != 1) != 2)) != 50) || ((Global_53524.f_68 > 3 && !Function_314("alwaysshowskip")) && !Global_6624))
				{
					UI_EXCLUDE("MissionFailed_Jump");
				}
				if (Function_395())
				{
					UI_EXCLUDE("MissionFailed_Jump");
					UI_EXCLUDE("MissionFailed_Casual");
				}
			}
			else
			{
				UI_EXCLUDE("MissionFailed_Jump");
			}
			Global_6639 = 0;
			Function_103();
			if (Global_6665)
			{
				UI_EXCLUDE("MissionFailed_Jump");
			}
			UI_PUSH("MissionFailedMenu");
			UI_POP("NeutralScreen");
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN_NOW(999.0f, 1065353216);
			}
			if (Function_101(Global_10968) == 6)
			{
			}
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
		}
	}
	if (UI_ISACTIVE("MissionFailedMenu") && Global_6638)
	{
		if (IS_PLAYER_CONTROLLABLE(0))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			RESET_ACTOR_GAITS(GET_PLAYER_ACTOR(0), 0);
			if (IS_ACTOR_VALID(GET_MOUNT(GET_PLAYER_ACTOR(0))))
			{
				RESET_ACTOR_GAITS(GET_MOUNT(GET_PLAYER_ACTOR(0)), 0);
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(GET_PLAYER_ACTOR(0))))
			{
				SET_VEHICLE_ALLOWED_TO_DRIVE(GET_VEHICLE(GET_PLAYER_ACTOR(0)), 0);
			}
		}
	}
	return;
}

int Function_99(bool bParam0) //Position: 0x6665 / 26213
{
	if (!Function_100(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_100(int iParam0) //Position: 0x6685 / 26245
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_101(int iParam0) //Position: 0x669C / 26268
{
	if (!Function_100(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_102() //Position: 0x66B7 / 26295
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_SMALL_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_HELP();
	return;
}

void Function_103() //Position: 0x66CC / 26316
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_136 = StackVal;
	Var0.f_140 = StackVal;
	Var0.f_144 = Global_53349.f_12;
	Var0.f_148 = Global_53349.f_16;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_104(int iParam0) //Position: 0x670F / 26383
{
	if (Function_105())
	{
		return 0;
	}
	if (iParam0 < -1.0f)
	{
		return 1;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		if (!UI_ISACTIVE("NeutralScreen"))
		{
			UI_PUSH("NeutralScreen");
		}
		iParam0 = GET_CURRENT_GAME_TIME();
		return 1;
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		if (!UI_ISACTIVE("NeutralScreen"))
		{
			UI_PUSH("NeutralScreen");
		}
		if (GET_LAST_HIT_FLAGS(&Global_54076) == 8192)
		{
			iParam0 = (GET_CURRENT_GAME_TIME() - 3.0f);
		}
		else
		{
			iParam0 = GET_CURRENT_GAME_TIME();
		}
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&Global_54076))
	{
		if (!Function_387(2048) && !Global_99146)
		{
			iParam0 = GET_CURRENT_GAME_TIME();
			return 1;
		}
	}
	if (!Global_10967 != 0)
	{
		if (!Global_10967 != 8)
		{
			if (!Global_10967 != 4)
			{
				if (IS_ACTOR_ALIVE(&Global_54076))
				{
					SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
				{
					iParam0 = (GET_CURRENT_GAME_TIME() + DECOR_GET_FLOAT(&Global_54076, "ResetMenuDelay"));
				}
				else
				{
					iParam0 = GET_CURRENT_GAME_TIME();
				}
				return 1;
			}
		}
	}
	if (Global_10988)
	{
		iParam0 = GET_CURRENT_GAME_TIME();
		return 1;
	}
	return 0;
}

bool Function_105() //Position: 0x6872 / 26738
{
	if (!IS_ACTOR_ALIVE(Function_312()) && iLocal_141)
	{
		return 1;
	}
	iLocal_141 = 0;
	return 0;
}

void Function_106() //Position: 0x688E / 26766
{
	char* cVar0[64];
	
	Global_6655 = 0;
	if (AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		Global_6659 = 4294967295;
		Global_6655 = 0;
		return;
	}
	switch (Global_43787)
	{
		case 0x00000000:
			stradd(&cVar0, "FTR_", 64);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "MEX_", 64);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "NRT_", 64);
			break;
		
		default:
			stradd(&cVar0, "FTR_", 64);
			break;
	}
	switch (Global_6659)
	{
		case 0x00000000:
			stradd(&cVar0, "BEAT_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "BOUNTY_HUNTER_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "JOB_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "MINI_GAME_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "MISSION_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "OUTFIT_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "PURCHASE_PROPERTY_SONG_01", 64);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "RCM_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "BEAT_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "PURCHASE_PROPERTY_SONG_01", 64);
			break;
		
		case 0x0000000A:
			stradd(&cVar0, "MISSION_COMPLETE_SONG_01", 64);
			break;
		
		default:
			stradd(&cVar0, "MISSION_COMPLETE_SONG_01", 64);
			break;
	}
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	Global_6659 = 4294967295;
	Global_6655 = 0;
	return;
}

void Function_107(int iParam0) //Position: 0x6AE8 / 27368
{
	var uVar0;
	int iVar1;
	void fVar2;
	void fVar3;
	void fVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	uVar0 = Function_312();
	if (!Function_340(1) || iParam0)
	{
		if (HAS_ITEM(Function_108(20), &uVar0))
		{
			Function_381(1, 1);
		}
	}
	fVar2 = GET_WEAPON_EQUIPPED(&uVar0, 5);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 5)
	{
		fVar2 = GET_WEAPON_IN_HAND(&uVar0);
	}
	fVar3 = GET_WEAPON_EQUIPPED(&uVar0, 6);
	if (fVar3 == 4294967295)
	{
		if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 6)
		{
			fVar3 = GET_WEAPON_IN_HAND(&uVar0);
		}
	}
	fVar4 = GET_WEAPON_EQUIPPED(&uVar0, true);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 1)
	{
		fVar4 = GET_WEAPON_IN_HAND(&uVar0);
	}
	bVar5 = GET_AMMOENUM_FOR_WEAPONENUM(fVar2);
	bVar6 = GET_AMMOENUM_FOR_WEAPONENUM(fVar4);
	if (!Function_340(1))
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, false);
			iVar1++;
		}
	}
	else if (fVar2 != 4294967295)
	{
		bVar7 = CEIL(_GET_AMMO_AMOUNT(&uVar0, bVar5, 0));
		if (bVar7 == Global_21369.f_148 || bVar5 == Global_21369.f_152)
		{
			Global_21369.f_148 = bVar7;
			Global_21369.f_152 = bVar5;
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (iVar1 <= (Global_21369.f_148 / 7))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, false);
				}
				iVar1++;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 7, false);
		iVar1++;
	}
	if (fVar4 != 4294967295)
	{
		bVar8 = CEIL(_GET_AMMO_AMOUNT(&uVar0, bVar6, 0));
		if (bVar8 == Global_21369.f_156 || bVar6 == Global_21369.f_160)
		{
			Global_21369.f_156 = bVar8;
			Global_21369.f_160 = bVar6;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (iVar1 <= (Global_21369.f_156 / 6))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 17, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 17, false);
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_108(bool bParam0) //Position: 0x6C98 / 27800
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

void Function_109() //Position: 0x6D8C / 28044
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	bool bVar5;
	
	uVar0 = Function_124(&Global_54076);
	switch (bLocal_151)
	{
		case 0x00000020:
		case 0x00000040:
			if (uVar0 & 32 != 0 && uVar0 & 64 != 0)
			{
				if (fLocal_152 > 0.0f)
				{
					fLocal_152 = (GET_CURRENT_GAME_TIME() + 2.0f);
				}
				else if (fLocal_152 > GET_CURRENT_GAME_TIME())
				{
					bLocal_151 = true;
					Global_6631 = 0;
					fLocal_152 = -1.0f;
				}
			}
			else if (fLocal_152 < 0.0f)
			{
				fLocal_152 = -1.0f;
			}
			break;
		
		case 0x00000200:
			break;
		
		default:
			if (uVar0 & 32 < 0 || uVar0 & 64 < 0)
			{
				if (fLocal_152 > 0.0f)
				{
					fLocal_152 = (GET_CURRENT_GAME_TIME() + 2.0f);
				}
				else if (fLocal_152 > GET_CURRENT_GAME_TIME())
				{
					bLocal_151 = 64;
					Global_6631 = 1;
					fLocal_152 = -1.0f;
				}
			}
			else if (fLocal_152 < 0.0f)
			{
				fLocal_152 = -1.0f;
			}
			break;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "swimming"))
	{
		DECOR_REMOVE(&Global_54076, "swimming");
		KILL_ACTOR(&Global_54076);
	}
	if (Global_6646)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
		}
		return;
	}
	if (!Function_121(1))
	{
		return;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return;
	}
	if (!Function_120(0, 0, 1, 1) && 1)
	{
		iVar1 = GET_ACTOR_UNDER_RETICLE(Function_312(), 0);
		if (IS_OBJECT_VALID(&iVar1))
		{
			if (GET_OBJECT_TYPE(&iVar1) == 15)
			{
				if ((IS_ACTOR_HUMAN(&iVar1) && !IS_ACTOR_RIDING(&Global_54076)) && !IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (IS_ACTOR_HANDSUP(&iVar1))
					{
						GET_OBJECT_POSITION(&iVar1, &Var2);
						if ((!DECOR_CHECK_EXIST(&iVar1, "nnostickup") && !DECOR_CHECK_EXIST(&iVar1, "wasstickup")) && VDIST(Global_54078, Var2) > 4.0f)
						{
							if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
							{
								uLocal_332 = ADD_SCRIPT_USE_CONTEXT("stickup_rob", false, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
								if (!Function_62(Global_119934, 524288))
								{
									Function_54(Function_312(), 524288, 1, 0);
								}
							}
							else if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_332))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
								TASK_CLEAR(&iVar1);
								iVar4 = GET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iVar1);
								if (iVar4 != 0 || iVar4 != 1)
								{
									Function_116(50, 1, 0);
									Function_25(4294967196, 1, 0);
									bVar5 = DECOR_GET_INT(&iVar1, "iAdditionalMoney");
									Function_115(RAND_INT_RANGE((3 + bVar5), (17 + bVar5)), 1, 1);
									DECOR_SET_BOOL(&iVar1, "wasstickup", true);
									SAY_SINGLE_LINE_STRING_WITH_REPLY(&Global_54076, "PLAYER_JEER_THEFT_VICTIM", &iVar1, "VICTIMIZED", 1, 0, 2, 0);
									TASK_FLEE_ACTOR(&iVar1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(&iVar1, 2);
									if (IS_ACTOR_VALID(GET_VEHICLE(&iVar1)))
									{
										Function_110(3, 27, &Global_54076, &iVar1, 0);
									}
									else
									{
										Function_110(3, 30, &Global_54076, &iVar1, 0);
									}
								}
								else
								{
									SAY_SINGLE_LINE_STRING_WITH_REPLY(&Global_54076, "PLAYER_JEER_THEFT_VICTIM", &iVar1, "FIGHT", 1, 0, 2, 0);
									TASK_KILL_CHAR(&iVar1, &Global_54076);
									TASK_PRIORITY_SET(&iVar1, 2);
									DECOR_SET_BOOL(&iVar1, "wasstickup", false);
									if (!Function_62(Global_119934, 1048576))
									{
										Function_54(Function_312(), 1048576, 1, 0);
									}
								}
							}
						}
						else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_332))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_332);
	}
	return;
}

var Function_110(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x7168 / 29032
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_114(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_113(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_121(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_325(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_111();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_111() //Position: 0x741B / 29723
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_112(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_112(var uParam0, int iParam1) //Position: 0x748E / 29838
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_113(int iParam0) //Position: 0x74C4 / 29892
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_114(int iParam0) //Position: 0x74DA / 29914
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_115(bool bParam0, bool bParam1, bool bParam2) //Position: 0x74EF / 29935
{
	bool bVar0;
	
	bVar0 = Function_51(0);
	if ((Function_51(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_46(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_51(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_46(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_51(597) + Function_51(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x75C1 / 30145
{
	int iVar0;
	bool bVar1;
	
	if (Function_340(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_395())
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
	iVar0 = Function_51(3);
	Function_117();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_50(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_62(Global_119936, 4))
			{
				Function_54(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_46(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_31(3));
	iVar0 = Function_51(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_27(4, Function_318(Global_21369.f_248), 1);
				Function_26(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_27(4, Function_318(Global_21369.f_248), 1);
				Function_26(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_27(4, Function_318(Global_21369.f_248), 1);
				Function_26(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_27(4, Function_318(Global_21369.f_248), 1);
				Function_26(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_27(4, Function_318(Global_21369.f_248), 1);
				Function_26(Global_21369.f_244, Global_21369.f_248);
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

void Function_117() //Position: 0x7795 / 30613
{
	Function_119(3, 0.0f);
	Function_118(3, 10000.0f);
	return;
}

int Function_118(int iParam0, int iParam1) //Position: 0x77AB / 30635
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_119(int iParam0, int iParam1) //Position: 0x77EB / 30699
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_120(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x782B / 30763
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

bool Function_121(bool bParam0) //Position: 0x78DA / 30938
{
	if (Function_387(256))
	{
		return 0;
	}
	if (Function_387(262144))
	{
		return 0;
	}
	if (Function_123())
	{
		return 0;
	}
	if (!Function_387(1))
	{
		return 0;
	}
	if (!Function_387(4096))
	{
		return 0;
	}
	if (bParam0 && Function_122(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_387(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_122(int iParam0) //Position: 0x7950 / 31056
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_123() //Position: 0x7961 / 31073
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

int Function_124(int iParam0) //Position: 0x797A / 31098
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		uVar0 = &iParam0;
		if (IS_ACTOR_RIDING(&uVar0))
		{
			uVar0 = GET_MOUNT(&uVar0);
		}
		if (IS_ACTOR_INSIDE_VEHICLE(&uVar0))
		{
			uVar0 = GET_VEHICLE(&uVar0);
			while (!IS_ACTOR_VALID(&uVar1) && bVar2 > GET_NUM_DRAFT_POSITIONS(&uVar0))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar2, &uVar0);
				bVar2++;
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				uVar0 = &uVar1;
			}
			else
			{
				uVar0 = &iParam0;
			}
		}
		return GET_ACTOR_GROUND_MATERIAL(&uVar0);
	}
	return 0;
}

void Function_125() //Position: 0x79FB / 31227
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	float fVar8;
	var uVar9;
	bool bVar10;
	var uVar11;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<2> Var16;
	bool bVar19;
	
	if (IS_TELEPORTATION(&Var0))
	{
		Global_21576 = Var0;
		Global_21576.f_4 = 95.0f;
		Global_21576.f_124 = 1;
		Global_21576.f_128 = 1;
		Global_21576.f_120 = Function_147(StackVal, Global_21576, 1, 0, 1);
		if (Function_146(Global_21576.f_120))
		{
			Global_21576 = Vector(0.0f, 0.0f, 0.0f);
		}
	}
	if (!Function_145(StackVal, Global_21576) || !Global_21576.f_120 != 4294967295)
	{
		Function_141(4294967286);
		fVar8 = GET_CURRENT_GAME_TIME();
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Function_312()));
		if (Global_21576.f_124)
		{
			HUD_FADE_TO_LOADING_SCREEN();
		}
		while (HUD_IS_FADING() && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
		AI_IGNORE_ACTOR(Function_312());
		SET_ACTOR_INVULNERABILITY(Function_312(), true);
		CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
		STREAMING_SET_CUTSCENE_MODE(1);
		STREAMING_EVICT_ALL();
		bVar10 = GET_CURRENT_GAME_TIME();
		if (!Global_21576.f_120 != 4294967295 && Function_146(Global_21576.f_120))
		{
			if (!StackVal != 1)
			{
				if (Function_145(StackVal, Global_21576))
				{
					uVar9 = Function_140(Global_21576.f_120);
					if (!IS_OBJECT_VALID(&uVar9))
					{
						uVar9 = GET_OBJECT_FROM_VOLUME(&Global_44085[Global_21576.f_1209] + 8);
					}
					GET_OBJECT_POSITION(&uVar9, &Global_21576);
				}
			}
		}
		GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar11);
		Function_18(Function_312());
		uVar6 = Function_18(Function_312());
		if (Function_146(Global_21576.f_120))
		{
		}
		if (IS_OBJECT_VALID(&uVar9))
		{
			Function_139(StackVal, Function_312(), Global_21576, GET_OBJECT_HEADING(&uVar9), 1, 1, 1);
		}
		else
		{
			Function_139(StackVal, Function_312(), Global_21576, UNK_0x9C40E671(&Global_21576 + 12), 1, 1, 1);
		}
		Global_6634 = 1;
		Global_6629 = 0;
		Function_136(1, 0, 1);
		Function_134();
		iVar13 = 0;
		while (iVar13 > 30 && !IS_EXITFLAG_SET())
		{
			if (fVar8 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar11);
				fVar8 = GET_CURRENT_GAME_TIME();
				Function_18(Function_312());
				uVar6 = Function_18(Function_312());
			}
			WAIT(false);
			iVar13++;
		}
		CAMERA_RESET(0);
		fVar14 = 0.0f;
		while ((!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET()) && (1 || fVar14 > 30.0f))
		{
			if (fVar8 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar11);
				fVar8 = GET_CURRENT_GAME_TIME();
			}
			fVar14 = (fVar14 + GET_UNWARPED_REALTIME_SECONDS());
			WAIT(false);
		}
		if (STREAMING_IS_WORLD_LOADED())
		{
		}
		if (!Global_21576.f_120 != 4294967295 && Function_146(Global_21576.f_120))
		{
			if (StackVal && StackVal != 6 != 7)
			{
				while (!(((Function_133(Global_21576.f_120) && Function_132(&(Global_43791[Global_21576.f_120]), 16)) && Function_132(&(Global_43791[Global_21576.f_120]), 64)) || Function_132(&(Global_43791[Global_21576.f_120]), 2048)) && !IS_EXITFLAG_SET())
				{
					if (Function_133(Global_21576.f_120))
					{
					}
					if (Function_132(&(Global_43791[Global_21576.f_120]), 16))
					{
					}
					if (Function_132(&(Global_43791[Global_21576.f_120]), 64))
					{
					}
					if (Function_132(&(Global_43791[Global_21576.f_120]), 2048))
					{
					}
					WAIT(false);
				}
				if (Function_133(Global_21576.f_120))
				{
				}
				if (Function_132(&(Global_43791[Global_21576.f_120]), 16))
				{
				}
				if (Function_132(&(Global_43791[Global_21576.f_120]), 64))
				{
				}
			}
			else
			{
				fVar15 = GET_CURRENT_GAME_TIME();
				while (!((Function_133(Global_44085[Global_21576.f_1209]) && Function_132(&(Global_43791[Global_44085[Global_21576.f_1209]]), 16)) && Function_132(&(Global_43791[Global_44085[Global_21576.f_1209]]), 64)) && !IS_EXITFLAG_SET())
				{
					if (Function_133(Global_44085[Global_21576.f_1209]))
					{
					}
					if (Function_132(&(Global_43791[Global_44085[Global_21576.f_1209]]), 16))
					{
					}
					if (Function_132(&(Global_43791[Global_44085[Global_21576.f_1209]]), 64))
					{
					}
					if (fVar15 + 2.0f) > GET_CURRENT_GAME_TIME()
					{
						Function_130(Global_44085[Global_21576.f_1209]);
						fVar15 = (GET_CURRENT_GAME_TIME() + 2.0f);
					}
					WAIT(false);
				}
				if (Function_133(Global_44085[Global_21576.f_1209]))
				{
				}
				if (Function_132(&(Global_43791[Global_44085[Global_21576.f_1209]]), 16))
				{
				}
				if (Function_132(&(Global_43791[Global_44085[Global_21576.f_1209]]), 64))
				{
				}
			}
			if (StackVal == 5)
			{
				Function_129(&Global_44085[Global_21576.f_1209] + 32);
				Var16 = { StackVal, StackVal, Function_129(&Global_44085[Global_21576.f_1209] + 32) };
				if (Function_145(StackVal, Var16))
				{
					GET_POSITION(&Global_54076, &Var16);
				}
				Global_21576 = Var16;
				*(&Global_21576 + 12) = (&Var16 + 12);
				Function_139(StackVal, StackVal, Function_312(), Var16, 1, 1, 1);
			}
		}
		if (!Function_145(StackVal, *(&Global_21576 + 12)))
		{
			bVar19 = UNK_0x9C40E671(&Global_21576 + 12);
		}
		Function_126();
		while ((!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET()) && (1 || fVar14 < 30.0f))
		{
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar11);
			Function_18(Function_312());
			uVar6 = Function_18(Function_312());
			fVar14 = (fVar14 + GET_UNWARPED_REALTIME_SECONDS());
			WAIT(false);
		}
		if (STREAMING_IS_WORLD_LOADED())
		{
		}
		else
		{
			NET_LOG(true, "Streaming Session", "Bailed out on Teleport because STREAMING_IS_WORLD_LOADED took longer than %s", F2STR(30.0f, 3, 3), 0, 0, 0);
		}
		if (FIND_GROUND_INTERSECTION(&Global_21576, 99,9f, &Var2, &uVar4))
		{
			if (!Global_21576.f_120 != 4294967295 && Function_146(Global_21576.f_120))
			{
				if (!StackVal != 5)
				{
					Function_139(StackVal, Function_312(), Var2, bVar19, 1, 1, 1);
				}
			}
			else
			{
				Function_139(StackVal, Function_312(), Var2, bVar19, 1, 1, 1);
			}
		}
		WAIT(false);
		GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar11);
		Function_18(Function_312());
		uVar6 = Function_18(Function_312());
		STREAMING_SET_CUTSCENE_MODE(0);
		CAMERA_RESET(0);
		bVar10 = (bVar10 - GET_CURRENT_GAME_TIME());
		bVar10 = (bVar10 * -1.0f);
		PRINTSTRING("WARNING: TELEPORT TOOK ");
		PRINTFLOAT(bVar10);
		PRINTSTRING(" (game) seconds!");
		PRINTNL();
		if (Global_21576.f_128)
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN_NOW(0,5f, 1065353216);
		}
		AI_STOP_IGNORING_ACTORS();
		SET_ACTOR_INVULNERABILITY(Function_312(), false);
		Global_6634 = 0;
		Global_21576 = Vector(0.0f, 0.0f, 0.0f);
		*(&Global_21576 + 12) = Vector(0.0f, 0.0f, 0.0f);
		Global_21576.f_120 = 4294967295;
		strcpy(&Global_21576 + 24, "", 24);
		strcpy(&Global_21576 + 72, "", 24);
		Global_21576.f_124 = 1;
		Global_21576.f_128 = 1;
	}
	return;
}

void Function_126() //Position: 0x8044 / 32836
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_127(16384);
	}
	return;
}

void Function_127(int iParam0) //Position: 0x8060 / 32864
{
	Function_128(&Global_43580, iParam0);
	return;
}

void Function_128(var uParam0, int iParam1) //Position: 0x806E / 32878
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

vector3 Function_129(char* cParam0) //Position: 0x808D / 32909
{
	vector3 vVar0;
	char* cVar3[16];
	var uVar8;
	
	cVar3 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&cVar3, 8);
	strcpy(&cVar4, &cParam0, 16);
	ITERATE_ON_PARTIAL_NAME(&cVar3, &cVar4);
	stradd(&cVar4, "f_teleport", 16);
	uVar8 = START_OBJECT_ITERATOR(&cVar3);
	while (IS_OBJECT_VALID(&uVar8))
	{
		if (STRINGS_ARE_EQUAL(&cVar4, GET_OBJECT_NAME(&uVar8)))
		{
			GET_OBJECT_POSITION(&uVar8, &vVar0);
			GET_OBJECT_ORIENTATION(&uVar8, &vVar0 + 12);
			DESTROY_ITERATOR(&cVar3);
			return StackVal, StackVal, vVar0;
		}
		uVar8 = OBJECT_ITERATOR_NEXT(&cVar3);
	}
	DESTROY_ITERATOR(&cVar3);
	return StackVal, StackVal, vVar0;
}

void Function_130(int iParam0) //Position: 0x811A / 33050
{
	if (!Function_146(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(&Global_44085[iParam09] + 8))
	{
		DECOR_SET_BOOL(&Global_44085[iParam09] + 8, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_131(&(Global_43791[Global_44085[iParam09]]), 1024);
	}
	return;
}

void Function_131(var uParam0, int iParam1) //Position: 0x8177 / 33143
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_132(var uParam0, int iParam1) //Position: 0x8188 / 33160
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_133(bool bParam0) //Position: 0x81A5 / 33189
{
	if (!Function_146(bParam0))
	{
		return 1;
	}
	return Function_132(&(Global_43791[bParam0]), 4);
}

void Function_134() //Position: 0x81C1 / 33217
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_135(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x81EB / 33259
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_136(var uParam0, bool bParam1, int iParam2) //Position: 0x8205 / 33285
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
		if (Function_146(Global_43789))
		{
			Function_131(&(Global_43791[Global_43789]), 131072);
			Function_135(&(Global_43791[Global_43789]), 2097152);
			Function_137(Global_43789);
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
				if (Function_132(&(Global_43791[iVar0]), 4) || Function_132(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_135(&(Global_43791[iVar0]), 2097155);
					Function_131(&(Global_43791[iVar0]), 262144);
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
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_137(int iParam0) //Position: 0x8311 / 33553
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_138())
			{
				return;
			}
		}
		if (!Function_132(&(Global_43791[iParam0]), 2048))
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

bool Function_138() //Position: 0x8390 / 33680
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_132(&(Global_43791[iVar0]), 4) || Function_132(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_139(int iParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x83F9 / 33785
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		uVar0 = GET_MOUNT(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&iParam0))
			{
				ACTOR_MOUNT_ACTOR(&iParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&iParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&iParam0, Param1, bParam3, &bParam4, &iParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

var Function_140(int iParam0) //Position: 0x84C8 / 33992
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_146(iParam0))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 6);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(&iVar0)))
		{
			DESTROY_ITERATOR(&cVar1);
			return &iVar0;
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&cVar1);
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

void Function_141(int iParam0) //Position: 0x8568 / 34152
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_144(&Global_21369 + 48);
	PRINTNL();
	(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_144(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_144(&Global_21369 + 48);
	PRINTNL();
	Function_142(&iParam0);
	return;
}

void Function_142(int iParam0) //Position: 0x860A / 34314
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_143(90)), 0);
	return;
}

int Function_143(int iParam0) //Position: 0x862D / 34349
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_144(int iParam0) //Position: 0x8644 / 34372
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

bool Function_145(char* cParam0) //Position: 0x868E / 34446
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

bool Function_146(int iParam0) //Position: 0x86A6 / 34470
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_147(struct<2> Param0, var uParam2, var uParam3, bool bParam4) //Position: 0x86BC / 34492
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && uParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && uParam3) != 7 && uParam3))
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
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_148() //Position: 0x8762 / 34658
{
	if (!Function_69(4096) || !IS_ACTOR_VALID(&Global_54076))
	{
		if (Global_6637)
		{
			if (Function_177(&Local_153, 1))
			{
				Global_6637 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(1);
				ENABLE_USE_CONTEXTS(1);
			}
		}
		return;
	}
	if (((((((((!Function_145(StackVal, Global_21576) || !Global_21576.f_120 != 4294967295) || Global_6634) || Global_98250) || Global_98252) || 0) || Global_99146) || IS_ACTOR_VALID(GET_VEHICLE(&Global_54076))) || IS_ACTOR_ON_TRAIN(&Global_54076, 0)) || Global_6630)
	{
		if (!Global_6646)
		{
			RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076));
		}
		if (Global_6637)
		{
			if (Function_177(&Local_153, 1))
			{
				Global_6637 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(1);
				ENABLE_USE_CONTEXTS(1);
			}
		}
		return;
	}
	if (Global_6637)
	{
		if ((Function_120(1, 3, 1, 33) || GET_LAST_HIT_TIME(&Global_54076) < Local_153.f_72) && !Local_153.f_536)
		{
			if (Function_177(&Local_153, 1))
			{
				RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076));
				Global_6637 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(1);
				ENABLE_USE_CONTEXTS(1);
			}
			return;
		}
	}
	if (IS_OBJECT_VALID(&Local_153 + 8))
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&Local_153 + 8, 0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), 0))
		{
			if (Global_6637)
			{
				if (Function_177(&Local_153, 1))
				{
					RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076));
					Global_6637 = 0;
					SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
					HUD_ENABLE(1);
					ENABLE_USE_CONTEXTS(1);
				}
			}
			return;
		}
	}
	if (Global_6637)
	{
		if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) > Function_176() && !Local_153.f_536)
		{
			if (Function_177(&Local_153, 1))
			{
				Global_6637 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(1);
				ENABLE_USE_CONTEXTS(1);
			}
		}
		else if (Function_168(&Local_153, 0))
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
			HUD_ENABLE(0);
			ENABLE_USE_CONTEXTS(0);
			Function_167();
		}
	}
	else if (((!Function_120(1, 3, 1, 33) && GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) < Function_176()) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), 0)) || Local_153.f_536)
	{
		Global_6637 = 1;
		Function_149(&Local_153, 0, 0, 0);
	}
	return;
}

void Function_149(struct<189> Param0) //Position: 0x8955 / 35157
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	int iVar11;
	
	STREAMING_SET_POI_LIMIT(2);
	*(&Param0 + 216) = CREATE_OBJECTSET_IN_LAYOUT("idleCamExclusions", &Param0, 4294967295, 1);
	*(&Param0 + 128) = CREATE_OBJECTSET_IN_LAYOUT("idleCamFraming", &Param0, 4294967295, 1);
	Param0.f_72 = GET_CURRENT_GAME_TIME();
	Param0.f_80 = GET_CURRENT_GAME_TIME();
	Param0.f_108 = 2;
	Param0.f_100 = 6;
	*(&Param0 + 8) = GET_GAME_CAMERA();
	*(&Param0 + 60) = Global_54078;
	*(&Param0 + 160) = Global_54078;
	(&Param0 + 160)->f_4 = (StackVal + 1,15f);
	Param0.f_180 = 1;
	Param0.f_184 = 45.0f;
	Param0.f_188 = GET_CURRENT_GAME_TIME();
	Param0.f_104 = 6;
	*(&Param0 + 8) = CREATE_CAMERA_IN_LAYOUT(&Param0, "idlecam", 0);
	INIT_CAMERA_FROM_CHANNEL(&Param0 + 8, 0);
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Function_165(&Param0, &iParam2);
	if (!IS_OBJECT_VALID(&Param0 + 24) && bParam3)
	{
		Var0 = Vector(0.0f, 30.0f, 50.0f);
		bVar4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		ROTATE_VECTOR_XZ(&Var0, bVar4, 0);
		GET_CAMERA_POSITION(&Param0 + 8, &Var2);
		Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
		Var5 = Vector(-20.0f, bVar4, 0.0f);
		*(&Param0 + 24) = FIND_OBJECT_IN_LAYOUT(&Param0, "ntempVista");
		if (IS_OBJECT_VALID(&Param0 + 24))
		{
			DESTROY_OBJECT(&Param0 + 24);
		}
		*(&Param0 + 24) = CREATE_POINT_IN_LAYOUT(&Param0, "ntempVista", Var0, Var5);
	}
	*(&Param0 + 32) = _AIATTENTIONATTRACTOR(&Param0, *(&Param0 + 136), 1045220557, 1065353216, 0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 32, &Param0 + 8, "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	iVar11 = Function_312();
	STREAMING_SET_CUTSCENE_MODE(1);
	if (IS_ACTOR_VALID(&iVar11))
	{
		ACTOR_HOLSTER_WEAPON(&iVar11, 1);
		if (!IS_OBJECT_VALID(&Param0 + 24))
		{
			GET_OBJECT_POSITION(&iVar11, &Var7);
			Param0.f_112 = 1;
			Param0.f_108 = 2;
			Param0.f_100 = 0;
			Function_164(&Param0, 2, &iVar11);
			Function_150(&Param0);
		}
	}
	GET_OBJECT_POSITION(&Param0 + 24, &Var7);
	GET_OBJECT_ORIENTATION(&Param0 + 24, &Var9);
	STREAMING_LOAD_SCENE_EXT(Var7, Var9, 1);
	if (&bParam3)
	{
		STREAMING_OVERRIDE_MAIN_POI(Var7, Var9);
	}
	Param0.f_76 = GET_CURRENT_GAME_TIME();
	*(&Param0 + 200) = Vector(0.0f, 0.0f, 0.0f);
	if (&bParam1)
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&Param0 + 8, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	PREVENT_DESPAWN_SET_SPHERE(Global_54078, 30.0f);
}

void Function_150(struct<113> Param0) //Position: 0x8BEA / 35818
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	
	DISBAND_OBJECTSET(&Param0 + 128);
	uVar4 = Function_163(&Param0 + 16);
	if (IS_ACTOR_VALID(&uVar4))
	{
		GET_OBJECT_NAMED_BONE_POSITION(&uVar4, "pelvis", &Param0 + 40);
		GET_OBJECT_NAMED_BONE_ORIENTATION(&uVar4, "pelvis", &uVar5);
		Param0.f_52 = UNK_0x9C40E671(&uVar5);
	}
	else
	{
		GET_OBJECT_POSITION(&Param0 + 16, &Param0 + 40);
		Param0.f_52 = 0.0f;
	}
	switch (Param0.f_112)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(&Param0 + 16, &Param0 + 136);
			GET_OBJECT_AXIS(&Param0 + 16, &Var0, 2);
			VNORMALIZE(&Var0);
			VSCALE(&Var0, -30.0f);
			*(&Param0 + 148) = Vector(StackVal, StackVal, StackVal) + Vector(Var0, *(&Param0 + 136), StackVal);
			break;
		
		case 0x00000003:
			Function_160(&Param0 + 128, &Param0 + 16, 10.0f);
			Function_158(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148, 1);
			break;
		
		case 0x00000002:
			Function_160(&Param0 + 128, &Param0 + 16, 5.0f);
			Function_157(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148, 1);
			break;
		
		case 0x00000004:
			Function_160(&Param0 + 128, &Param0 + 16, 5.0f);
			Function_155(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148, 1);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_160(&Param0 + 128, &Param0 + 16, 15.0f);
			Function_151(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148);
			break;
		
		default:
			GET_CAMERA_POSITION(&Param0 + 8, &Var2);
			GET_OBJECT_POSITION(&Param0 + 16, &Param0 + 148);
			(&Param0 + 148)->f_4 = (StackVal + 1,5f);
			*(&Param0 + 136) = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 148), Var2, StackVal);
			VNORMALIZE(&Param0 + 136);
			VSCALE(&Param0 + 136, 3.0f);
			*(&Param0 + 136) = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 148), *(&Param0 + 136), StackVal);
			break;
	}
	return;
}

void Function_151(struct<189> Param0) //Position: 0x8DE9 / 36329
{
	struct<2> Var0;
	var uVar2;
	
	uVar2 = Function_163(&iParam1);
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(&uVar2))
	{
		return;
	}
	GET_CAMERA_POSITION(&Param0 + 8, &Var0);
	Function_152(StackVal, 1, &uVar2, Var0, &Param2, &uParam3);
	if (Function_145(StackVal, Param2))
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Param2);
	}
	Param0.f_188 = GET_CURRENT_GAME_TIME();
}

int Function_152(float fParam0, var uParam1, struct<2> Param2, var uParam4, struct<5> Param5) //Position: 0x8E4F / 36431
{
	struct<5> Var0;
	bool bVar5;
	bool bVar6;
	struct<2> Var10[8];
	var uVar27;
	var uVar29;
	float fVar31;
	struct<2> Var32;
	int iVar34;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(&uParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam1, "pelvis", &Var2))
	{
		GET_OBJECT_POSITION(&uParam1, &Var2);
		Var2.f_4 = (StackVal + 1.0f);
	}
	switch (fParam0)
	{
		case 0x00000000:
			Param5 = Vector(0.0f, 0.0f, -Function_154(0,5f, (VDIST(Var0, Param2) / 3.0f)));
			fVar4 = 1,25f;
			break;
		
		case 0x00000001:
			Param5 = Vector(0.0f, 0.0f, -Function_154(0,7f, (VDIST(Var0, Param2) / 3.0f)));
			fVar4 = 2,75f;
			break;
		
		case 0x00000002:
			Param5 = Vector(0.0f, 0.0f, -Function_154(1.0f, (VDIST(Var0, Param2) / 3.0f)));
			fVar4 = 4,25f;
			break;
	}
	Param5 = Vector(0.0f, 0.0f, -Function_154(0,7f, (VDIST(Var0, Param2) / 3.0f)));
	bVar6 = true;
	if (bVar6)
	{
		bVar5 = GET_HEADING(&uParam1);
	}
	ROTATE_VECTOR_XZ(&Param5, bVar5, 0);
	Param5 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param5, StackVal);
	switch (fParam0)
	{
		case 0x00000000:
			Param5.f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			Param5.f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			Param5.f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (FIND_INTERSECTION(&Var0, &Param5, &uVar27, &uVar29, 1, 4294967295, 4194304))
	{
		Param5 = Vector(0.0f, 0.0f, 0,6f);
		bVar5 = GET_HEADING(&uParam1);
		ROTATE_VECTOR_XZ(&Param5, bVar5, 0);
		Param5 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param5, StackVal);
		Param5.f_4 = ((StackVal + StackVal) / 2.0f);
	}
	fVar31 = 60.0f;
	Var10[22] = Vector((-1.0f * fVar4), 0.0f, 0.0f);
	Var10[32] = Vector((-1.0f * fVar4), 0.0f, 0.0f);
	Var10[62] = Vector(fVar4, 0.0f, 0.0f);
	Var10[72] = Vector(fVar4, 0.0f, 0.0f);
	ROTATE_VECTOR_XZ(&(Var10[22]), (bVar5 + fVar31), 0);
	ROTATE_VECTOR_XZ(&(Var10[32]), (bVar5 + fVar31), 0);
	ROTATE_VECTOR_XZ(&(Var10[62]), (bVar5 + (-1.0f * fVar31)), 0);
	ROTATE_VECTOR_XZ(&(Var10[72]), (bVar5 + (-1.0f * fVar31)), 0);
	Var32 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	VSCALE(&Var32, 0,5f);
	iVar34 = 0;
	while (iVar34 <= Var10)
	{
		if (!Function_145(StackVal, Var10[iVar342]))
		{
			Var10[iVar342] = Vector(StackVal, StackVal, StackVal) + Vector(Var32, Var10[iVar342], StackVal);
			if (FIND_INTERSECTION(&(Var10[iVar342]), &Param5, &uVar27, &uVar29, 1, 4294967295, 4194304))
			{
				Var10[iVar342] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		if (!Function_145(StackVal, Var10[iVar342]))
		{
			if (FIND_INTERSECTION(&(Var10[iVar342]), &Var0, &uVar27, &uVar29, 1, 4294967295, 4194304))
			{
				Var10[iVar342] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		iVar34++;
	}
	if (!Function_145(StackVal, Var10[02]))
	{
		Var10[02].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[12]))
	{
		Var10[12].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[22]))
	{
		Var10[22].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[32]))
	{
		Var10[32].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[42]))
	{
		Var10[42].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[52]))
	{
		Var10[52].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[62]))
	{
		Var10[62].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var10[72]))
	{
		Var10[72].f_4 = StackVal;
	}
	Function_153(StackVal, Param2, &Var10);
	uParam4 = Function_153(StackVal, Param2, &Var10);
	return 1;
}

struct<8> Function_153(struct<2> Param0, struct<2>[] Param2) //Position: 0x920A / 37386
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	bVar3 = 1E+08.0f;
	iVar2 = 0;
	while (iVar2 <= Param2)
	{
		if (!Function_145(StackVal, Param2[iVar22]))
		{
			if (VDIST(Param2[iVar22], Param0) > bVar3)
			{
				bVar3 = VDIST(Param2[iVar22], Param0);
				Var0 = Param2[iVar22];
			}
		}
		iVar2++;
	}
	return StackVal, Var0;
}

float Function_154(int iParam0, int iParam1) //Position: 0x9274 / 37492
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_155(struct<189> Param0) //Position: 0x9287 / 37511
{
	struct<2> Var0;
	var uVar2;
	
	uVar2 = Function_163(&iParam1);
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(&uVar2))
	{
		return;
	}
	if (&bParam4)
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Var0);
		Function_156(StackVal, 1, &uVar2, Var0, &Param2, &uParam3);
	}
	if (Function_145(StackVal, Param2))
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Param2);
	}
	Param0.f_188 = GET_CURRENT_GAME_TIME();
}

int Function_156(float fParam0, var uParam1, struct<2> Param2, var uParam4, struct<2> Param5) //Position: 0x92F3 / 37619
{
	struct<5> Var0;
	float fVar6;
	bool bVar7;
	bool bVar8;
	struct<2> Var12[8];
	var uVar29;
	var uVar31;
	float fVar33;
	int iVar34;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam1, "head", &Var0))
	{
		PRINTSTRING("No head bone - getting base pos + offset");
		GET_OBJECT_POSITION(&uParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam1, "pelvis", &Var2))
	{
		PRINTSTRING("No hip bone - getting base pos + offset");
		GET_OBJECT_POSITION(&uParam1, &Var2);
		Var2.f_4 = (StackVal + 1.0f);
	}
	bVar8 = true;
	if (bVar8)
	{
		bVar7 = GET_HEADING(&uParam1);
	}
	switch (fParam0)
	{
		case 0x00000000:
			Var4 = Vector(0.0f, 0.0f, -0,45f);
			fVar6 = 0,75f;
			break;
		
		case 0x00000001:
			Var4 = Vector(0.0f, 0.0f, -0,6f);
			fVar6 = 1,825f;
			break;
		
		case 0x00000002:
			Var4 = Vector(0.0f, 0.0f, -0,9f);
			fVar6 = 2,5f;
			break;
	}
	Param5 = Var4;
	if (Global_47151[33])
	{
		PRINTNL();
		PRINTSTRING("Before Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var2);
		PRINTNL();
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	ROTATE_VECTOR_XZ(&Param5, bVar7, 0);
	if (Global_47151[33])
	{
		PRINTNL();
		PRINTSTRING("After Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var2);
		PRINTNL();
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	Param5 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param5, StackVal);
	if (Global_47151[33])
	{
		PRINTNL();
		PRINTSTRING("After addhead");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var2);
		PRINTNL();
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	switch (fParam0)
	{
		case 0x00000000:
			Param5.f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			Param5.f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			Param5.f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (Global_47151[33])
	{
		PRINTNL();
		PRINTSTRING("After Adjust Y for shot type");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var2);
		PRINTNL();
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	if (FIND_INTERSECTION(&Var0, &Param5, &uVar29, &uVar31, 1, 4294967295, 4194304))
	{
		Param5 = Var4;
		Param5.f_8 = (StackVal * -1.0f);
		bVar7 = GET_HEADING(&uParam1);
		ROTATE_VECTOR_XZ(&Param5, bVar7, 0);
		Param5 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param5, StackVal);
		Param5.f_4 = ((StackVal + StackVal) / 2.0f);
	}
	if (Global_47151[33])
	{
		PRINTNL();
		PRINTSTRING("After Intersect Adjust");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var2);
		PRINTNL();
		PRINTVECTOR(Param5);
		PRINTNL();
	}
	fVar33 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	Var12[02] = Vector((-1.0f * (fVar6 - 0,05f)), 0.0f, 0.0f);
	Var12[12] = Vector((-1.0f * (fVar6 - 0,05f)), 0.0f, 0.0f);
	Var12[22] = Vector((-1.0f * (fVar6 + 0,05f)), 0.0f, 0.0f);
	Var12[32] = Vector((-1.0f * (fVar6 + 0,05f)), 0.0f, 0.0f);
	Var12[42] = Vector((fVar6 - 0,05f), 0.0f, 0.0f);
	Var12[52] = Vector((fVar6 - 0,05f), 0.0f, 0.0f);
	Var12[62] = Vector((fVar6 + 0,05f), 0.0f, 0.0f);
	Var12[72] = Vector((fVar6 + 0,05f), 0.0f, 0.0f);
	ROTATE_VECTOR_XZ(&(Var12[02]), (bVar7 + fVar33), 0);
	ROTATE_VECTOR_XZ(&(Var12[12]), (bVar7 + fVar33), 0);
	ROTATE_VECTOR_XZ(&(Var12[22]), (bVar7 + (-1.0f * fVar33)), 0);
	ROTATE_VECTOR_XZ(&(Var12[32]), (bVar7 + (-1.0f * fVar33)), 0);
	ROTATE_VECTOR_XZ(&(Var12[42]), (bVar7 + fVar33), 0);
	ROTATE_VECTOR_XZ(&(Var12[52]), (bVar7 + fVar33), 0);
	ROTATE_VECTOR_XZ(&(Var12[62]), (bVar7 + (-1.0f * fVar33)), 0);
	ROTATE_VECTOR_XZ(&(Var12[72]), (bVar7 + (-1.0f * fVar33)), 0);
	iVar34 = 0;
	while (iVar34 <= Var12)
	{
		Var12[iVar342] = Vector(StackVal, StackVal, StackVal) + Vector(Param5, Var12[iVar342], StackVal);
		if (FIND_INTERSECTION(&(Var12[iVar342]), &Param5, &uVar29, &uVar31, 1, 4294967295, 4194304))
		{
			Var12[iVar342] = Vector(0.0f, 0.0f, 0.0f);
		}
		if (!Function_145(StackVal, Var12[iVar342]))
		{
			if (FIND_INTERSECTION(&(Var12[iVar342]), &Var0, &uVar29, &uVar31, 1, 4294967295, 4194304))
			{
				Var12[iVar342] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		iVar34++;
	}
	if (!Function_145(StackVal, Var12[02]))
	{
		Var12[02].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[12]))
	{
		Var12[12].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[22]))
	{
		Var12[22].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[32]))
	{
		Var12[32].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[42]))
	{
		Var12[42].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[52]))
	{
		Var12[52].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[62]))
	{
		Var12[62].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var12[72]))
	{
		Var12[72].f_4 = StackVal;
	}
	Function_153(StackVal, Param2, &Var12);
	uParam4 = Function_153(StackVal, Param2, &Var12);
	return 1;
}

void Function_157(struct<189> Param0) //Position: 0x98AB / 39083
{
	struct<2> Var0;
	var uVar2;
	
	uVar2 = Function_163(&iParam1);
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(&uVar2))
	{
		return;
	}
	if (&bParam4)
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Var0);
		Function_156(StackVal, 1, &uVar2, Var0, &Param2, &uParam3);
	}
	if (Function_145(StackVal, Param2))
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Param2);
	}
	Param0.f_188 = GET_CURRENT_GAME_TIME();
}

void Function_158(struct<189> Param0) //Position: 0x9917 / 39191
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	uVar2 = Function_163(&iParam1);
	uVar3 = AI_GET_ACTOR_CONVERSATION_TARGET(&uVar2);
	if (!IS_ACTOR_VALID(&uVar2) || !IS_ACTOR_VALID(&uVar3))
	{
		Function_155(&Param0, &iParam1, &Param2, &fParam3, &bParam4);
		return;
	}
	if (IS_ACTOR_VEHICLE(&uVar2) || IS_ACTOR_VEHICLE(&uVar3))
	{
		return;
	}
	if (&bParam4)
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Var0);
		Function_159(StackVal, 1, &uVar2, &uVar3, Var0, &Param2, &fParam3);
	}
	if (Function_145(StackVal, Param2))
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Param2);
	}
	Param0.f_188 = GET_CURRENT_GAME_TIME();
}

int Function_159(int iParam0, var uParam1, float fParam2, struct<2> Param3, var uParam5, struct<2> Param6) //Position: 0x99B0 / 39344
{
	struct<5> Var0;
	struct<2> Var6;
	bool bVar8;
	float fVar9;
	struct<2> Var10;
	bool bVar12;
	float fVar13;
	struct<2> Var14[8];
	var uVar31;
	var uVar33;
	int iVar35;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(&uParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&uParam1, "pelvis", &Var2))
	{
		GET_OBJECT_POSITION(&uParam1, &Var2);
		Var2.f_4 = (StackVal + 1.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&fParam2, "head", &Var4))
	{
		GET_OBJECT_POSITION(&fParam2, &Var4);
		Var4.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(&fParam2, "pelvis", &Var6))
	{
		GET_OBJECT_POSITION(&fParam2, &Var6);
		Var6.f_4 = (StackVal + 1.0f);
	}
	bVar8 = VDIST(Var0, Var4);
	switch (iParam0)
	{
		case 0x00000000:
			fVar9 = 0,75f;
			break;
		
		case 0x00000001:
			fVar9 = 1,625f;
			break;
		
		case 0x00000002:
			fVar9 = 2,5f;
			break;
	}
	Param6 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	VSCALE(&Param6, 0,5f);
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Var6, Var4, StackVal);
	VSCALE(&Var10, 0,5f);
	Param6 = Vector(StackVal, StackVal, StackVal) + Vector(Var10, Param6, StackVal);
	VSCALE(&Param6, 0,5f);
	bVar12 = GET_HEADING(&uParam1);
	fVar13 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	Var14[02] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[12] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[22] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[32] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[42] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	Var14[52] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	Var14[62] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	Var14[72] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	ROTATE_VECTOR_XZ(&(Var14[02]), (bVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[12]), (bVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[22]), (bVar12 + (-1.0f * fVar13)), 0);
	ROTATE_VECTOR_XZ(&(Var14[32]), (bVar12 + (-1.0f * fVar13)), 0);
	ROTATE_VECTOR_XZ(&(Var14[42]), (bVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[52]), (bVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[62]), (bVar12 + (-1.0f * fVar13)), 0);
	ROTATE_VECTOR_XZ(&(Var14[72]), (bVar12 + (-1.0f * fVar13)), 0);
	iVar35 = 0;
	while (iVar35 <= Var14)
	{
		Var14[iVar352] = Vector(StackVal, StackVal, StackVal) + Vector(Param6, Var14[iVar352], StackVal);
		if (FIND_INTERSECTION(&(Var14[iVar352]), &Param6, &uVar31, &uVar33, 1, 4294967295, 4194304))
		{
			Var14[iVar352] = Vector(0.0f, 0.0f, 0.0f);
		}
		if (!Function_145(StackVal, Var14[iVar352]))
		{
			if (FIND_INTERSECTION(&(Var14[iVar352]), &Var0, &uVar31, &uVar33, 1, 4294967295, 4194304))
			{
				Var14[iVar352] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		iVar35++;
	}
	if (!Function_145(StackVal, Var14[02]))
	{
		Var14[02].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[12]))
	{
		Var14[12].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[22]))
	{
		Var14[22].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[32]))
	{
		Var14[32].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[42]))
	{
		Var14[42].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[52]))
	{
		Var14[52].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[62]))
	{
		Var14[62].f_4 = StackVal;
	}
	if (!Function_145(StackVal, Var14[72]))
	{
		Var14[72].f_4 = StackVal;
	}
	Function_153(StackVal, Param3, &Var14);
	uParam5 = Function_153(StackVal, Param3, &Var14);
	return 1;
}

void Function_160(int iParam0, var uParam1, float fParam2) //Position: 0x9D40 / 40256
{
	var uVar0;
	
	if (IS_LAYOUTREF_VALID(&Global_10996))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&Global_10996);
		Function_162(&uVar0, &uParam1, 2, fParam2);
		Function_161(&uVar0, &iParam0);
		Function_162(&uVar0, &uParam1, 1, fParam2);
		Function_161(&uVar0, &iParam0);
		Function_162(&uVar0, &uParam1, 3, fParam2);
		Function_161(&uVar0, &iParam0);
		Function_162(&uVar0, &uParam1, 4, fParam2);
		Function_161(&uVar0, &iParam0);
		Function_162(&uVar0, &uParam1, 5, fParam2);
		Function_161(&uVar0, &iParam0);
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

void Function_161(var uParam0, int iParam1) //Position: 0x9DCC / 40396
{
	int iVar0;
	
	iVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&iVar0, &iParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(&iVar0, &iParam1);
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return;
}

void Function_162(var uParam0, var uParam1, int iParam2, float fParam3) //Position: 0x9E07 / 40455
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&uParam1, &Var0);
	switch (iParam2)
	{
		case 0x00000001:
			ITERATE_IN_LAYOUT(&uParam0, &Global_10996);
			ITERATE_ON_OBJECT_TYPE(&uParam0, 24);
			ITERATE_IN_SPHERE(&uParam0, Var0, fParam3);
			break;
		
		case 0x00000002:
			ITERATE_IN_LAYOUT(&uParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uParam0, 15);
			ITERATE_IN_SPHERE(&uParam0, Var0, fParam3);
			break;
		
		case 0x00000005:
			ITERATE_IN_LAYOUT(&uParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uParam0, 15);
			ITERATE_IN_SPHERE(&uParam0, Var0, fParam3);
			break;
		
		case 0x00000004:
			ITERATE_IN_LAYOUT(&uParam0, &Global_43578);
			ITERATE_ON_OBJECT_TYPE(&uParam0, 15);
			ITERATE_IN_SPHERE(&uParam0, Var0, fParam3);
			break;
		
		case 0x00000003:
			ITERATE_IN_LAYOUT(&uParam0, &Global_10992);
			ITERATE_ON_OBJECT_TYPE(&uParam0, 24);
			ITERATE_IN_SPHERE(&uParam0, Var0, fParam3);
			break;
		
		case 0x00000006:
			ITERATE_IN_LAYOUT(&uParam0, &Global_46715);
			ITERATE_ON_OBJECT_TYPE(&uParam0, 8);
			ITERATE_ON_PARTIAL_NAME(&uParam0, "nvista_cam");
			break;
		
		default:
			break;
	}
}

var Function_163(int iParam0) //Position: 0x9F10 / 40720
{
	int iVar0;
	
	switch (GET_OBJECT_TYPE(&iParam0))
	{
		case 0x00000018:
			ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iParam0));
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iParam0));
			break;
		
		case 0x0000000F:
			iVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
			break;
	}
	return &iVar0;
}

void Function_164(struct<117> Param0) //Position: 0x9F55 / 40789
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&Param0 + 16))
	{
		DEREFERENCE_OBJECT(&Param0 + 16);
		REMOVE_CAMERA_COLLISION_EXCLUSION(&Param0 + 8, &Param0 + 16);
	}
	*(&Param0 + 16) = &iParam2;
	Param0.f_84 = GET_CURRENT_GAME_TIME();
	Param0.f_88 = GET_CURRENT_GAME_TIME();
	Param0.f_96 = 15.0f;
	Param0.f_108 = iParam1;
	REFERENCE_OBJECT(&Param0 + 16);
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(&Param0 + 8, &Param0 + 16, iVar0);
	if (!IS_OBJECT_IN_OBJECTSET(&Param0 + 16, &Param0 + 216))
	{
		ADD_OBJECT_TO_OBJECTSET(&Param0 + 16, &Param0 + 216);
	}
	Param0.f_100 = Param0.f_104;
	Param0.f_116 = 0;
	return;
}

var Function_165(struct<177> Param0) //Position: 0x9FFA / 40954
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	struct<2> Var4;
	struct<2> Var6;
	int iVar8;
	struct<2> Var9;
	struct<2> Var11;
	bool bVar13;
	int iVar14[25];
	struct<9> Var40;
	
	if (Global_43790 != 2)
	{
		uVar2 = CREATE_OBJECT_ITERATOR(&Param0);
		Function_162(&uVar2, &Param0 + 16, 6, Param0.f_96);
		uVar1 = START_OBJECT_ITERATOR(&uVar2);
		bVar3 = 1E+08.0f;
		GET_CAMERA_POSITION(&Param0 + 8, &Var6);
		while (IS_OBJECT_VALID(&uVar1))
		{
			if (Function_166(&Param0, &uVar1, &iParam1))
			{
				GET_OBJECT_POSITION(&uVar1, &Var4);
				if (VDIST(Var4, Var6) > bVar3)
				{
					bVar3 = VDIST(Var4, Var6);
					iVar0 = &uVar1;
				}
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
		DESTROY_ITERATOR(&uVar2);
	}
	else
	{
		iVar8 = GET_NUM_WORLD_CAMERAS();
		if (iVar8 >= 0)
		{
			if (Param0.f_172)
			{
				bVar43 = CEIL((Global_54078 / 512.0f));
				bVar44 = CEIL((StackVal / 512.0f));
				iVar42 = 0;
				while (iVar42 <= iVar8)
				{
					if (iVar47 <= 25)
					{
						GET_WORLD_CAMERA_AT_INDEX(iVar42, &vVar40, &Var11);
						bVar45 = CEIL((vVar40.x / 512.0f));
						bVar46 = CEIL((vVar40.z / 512.0f));
						if (bVar45 != bVar43 && bVar46 != bVar44)
						{
							iVar14[iVar47] = iVar42;
							iVar47++;
						}
					}
					iVar42++;
				}
				if (iVar47 <= Param0.f_176)
				{
					Param0.f_176 = iVar47;
				}
				if (GET_WORLD_CAMERA_AT_INDEX(iVar14[Param0.f_176], &Var9, &Var11))
				{
					bVar13 = true;
				}
			}
			else if (GET_CLOSEST_WORLD_CAMERA(&Global_54078, 256.0f, &Var9, &Var11))
			{
				bVar13 = true;
			}
			if (bVar13)
			{
				VSCALE(&Var11, (360.0f / 6,28f));
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 544) = CREATE_POINT_IN_LAYOUT(&Global_46715, Function_325(), Var9, Var11);
				}
				else
				{
					uVar48 = FIND_OBJECT_IN_LAYOUT(&Param0, "TempVistaPoint");
					if (IS_OBJECT_VALID(&uVar48))
					{
						DESTROY_OBJECT(&uVar48);
					}
					*(&Param0 + 544) = CREATE_POINT_IN_LAYOUT(&Param0, "TempVistaPoint", Var9, Var11);
				}
				if (IS_OBJECT_VALID(&Param0 + 544))
				{
					GET_OBJECT_ORIENTATION(&Param0 + 544, &Var11);
					iVar0 = &Param0 + 544;
				}
			}
		}
	}
	if (!IS_OBJECT_VALID(&iVar0))
	{
	}
	return &iVar0;
}

bool Function_166(int iParam0, int iParam1, bool bParam2) //Position: 0xA227 / 41511
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	if (Global_47151[33])
	{
		PRINTSTRING(GET_OBJECT_NAME(&iParam1));
		PRINTSTRING(" : ");
		PRINTVECTOR(Var0);
		PRINTSTRING(" - ");
		PRINTFLOAT(VDIST(Var0, *(&iParam0 + 60)));
		PRINTNL();
	}
	if (&iParam1 == &iParam0 + 16)
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam1, &iParam0 + 216))
	{
		return 0;
	}
	if (VDIST(Var0, *(&iParam0 + 60)) < 150.0f && !bParam2)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return 0;
	}
	return 1;
}

void Function_167() //Position: 0xA2BF / 41663
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_168(struct<113> Param0) //Position: 0xA2D4 / 41684
{
	float fVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	
	if (!IS_OBJECT_VALID(&Param0 + 8))
	{
		return 0;
	}
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = 0;
	if (IS_OBJECT_VALID(&Param0 + 24))
	{
		if (STREAMING_IS_WORLD_LOADED() || (fVar0 - Param0.f_76) < 15.0f)
		{
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&Param0 + 8, 0))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(&Param0 + 8, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			Function_175(&Param0, &Param0 + 24);
			iVar6 = 0;
			while (iVar6 <= 38)
			{
				(*&Param0 + 224)[iVar6] = 0;
				iVar6++;
			}
			REFERENCE_OBJECT(&Param0 + 16);
			(&Param0 + 24) = "";
			DISBAND_OBJECTSET(&Param0 + 216);
			DISBAND_OBJECTSET(&Param0 + 128);
			Param0.f_108 = 2;
			Param0.f_104 = 1;
			Param0.f_96 = (15.0f * 5.0f);
			Param0.f_112 = 0;
			Param0.f_100 = 6;
			Function_150(&Param0);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &Var2);
			GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var4);
			STREAMING_LOAD_SCENE_EXT(Var2, Var4, 0);
			iVar1 = 1;
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 16))
	{
		if (Param0.f_108 == 2)
		{
			GET_CAMERA_POSITION(&Param0 + 8, &Var2);
			if (VDIST(Var2, *(&Param0 + 136)) < 1.0f)
			{
				SET_CAMERA_POSITION(&Param0 + 8, *(&Param0 + 136));
				SET_CAMERA_TARGET_POSITION(&Param0 + 8, *(&Param0 + 148), 0);
				*(&Param0 + 160) = *(&Param0 + 148);
			}
		}
	}
	if (!IS_OBJECT_VALID(&Param0 + 16))
	{
		return iVar1;
	}
	GET_OBJECT_POSITION(&Param0 + 16, &Var7);
	if (((VDIST(Var7, *(&Param0 + 60)) < 150.0f && !GET_OBJECT_TYPE(&Param0 + 16) != 8) && !IS_OBJECT_VALID(&Param0 + 24)) || !IS_OBJECT_VALID(&Param0 + 16))
	{
		*(&Param0 + 24) = Function_165(&Param0, &iParam1);
		if (IS_OBJECT_VALID(&Param0 + 24))
		{
			GET_OBJECT_POSITION(&Param0 + 24, &Var9);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_ORIENTATION(&Param0 + 24, &Var11);
			STREAMING_LOAD_SCENE_EXT(Var9, Var11, 0);
			Param0.f_76 = fVar0;
			Param0.f_104 = 6;
			Param0.f_112 = 1;
			Param0.f_108 = 2;
			Param0.f_100 = 0;
			Function_164(&Param0, 2, Function_312());
			Function_150(&Param0);
		}
	}
	Function_169(&Param0, fVar0, 3212836864, 3212836864);
	if (Function_145(StackVal, *(&Param0 + 136)))
	{
	}
	if (Function_145(StackVal, *(&Param0 + 148)))
	{
	}
	if (VDIST(*(&Param0 + 148), *(&Param0 + 160)) < 200.0f)
	{
		GET_CAMERA_POSITION(&Param0 + 8, &Var2);
		GET_OBJECT_ORIENTATION(&Param0 + 8, &Var4);
	}
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return iVar1;
}

void Function_169(struct<81> Param0) //Position: 0xA55D / 42333
{
	float fVar0;
	
	fVar0 = (1.0f / (fParam1 - Param0.f_80));
	if (Function_174(&Param0))
	{
		Function_150(&Param0);
	}
	Function_173(&Param0);
	Function_172(&Param0, fVar0, &uParam2);
	Function_170(&Param0, fVar0, &uParam3);
	Param0.f_80 = fParam1;
}

void Function_170(struct<125> Param0) //Position: 0xA5A3 / 42403
{
	struct<9> Var0;
	float fVar9;
	float fVar10;
	struct<9> Var11;
	
	uVar13 = Function_163(&Param0 + 16);
	switch (Param0.f_112)
	{
		case 0x00000000:
		case 0x00000001:
			vVar11 = *(&Param0 + 148);
			Param0.f_124 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(&uVar13))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(&uVar13))
			{
				return;
			}
			vVar0 = *(&Param0 + 160);
			vVar0 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 148), vVar0, StackVal);
			bVar2 = VMAG(vVar0);
			if (bVar2 > 2,5f)
			{
				VSCALE(&vVar0, 0,975f);
			}
			else
			{
				fVar7 = Function_71(&uVar13, 0);
				if (&fParam2 < -1.0f)
				{
					fVar3 = &fParam2;
					bVar5 = (((&fParam2 + bVar2) - (Param0.f_124 * 5.0f)) / 3.0f);
				}
				else
				{
					fVar3 = (fVar7 + 5.0f);
					bVar5 = ((((fVar7 * 2.0f) + bVar2) - (Param0.f_124 * 5.0f)) / 3.0f);
				}
				iVar4 = (fVar3 / 3.0f);
				fVar6 = Function_171(FABS(bVar5), iVar4);
				if (bVar5 > 0.0f)
				{
					fVar6 = (fVar6 * -1.0f);
				}
				Param0.f_124 = (Param0.f_124 + (fVar6 / fParam1));
				if (Param0.f_124 < fVar3)
				{
					Param0.f_124 = fVar3;
				}
				else if (Param0.f_124 < 0,01f && Param0.f_124 > Param0.f_120)
				{
					Param0.f_124 = Param0.f_120;
				}
				else if (Param0.f_124 > fVar7)
				{
					Param0.f_124 = (fVar7 * 1,1f);
					Param0.f_124 = (Param0.f_124 + (fVar6 / fParam1));
				}
				fVar8 = (Param0.f_124 / fParam1);
				VNORMALIZE(&vVar0);
				if (bVar2 < fVar8)
				{
					VSCALE(&vVar0, (bVar2 - fVar8));
				}
				else
				{
					VSCALE(&vVar0, (bVar2 / 5.0f));
				}
			}
			vVar0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 148), vVar0, StackVal);
			*(&Param0 + 160) = vVar0;
			vVar11 = *(&Param0 + 160);
			break;
	}
	vVar11 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 200), vVar11, StackVal);
	SET_CAMERA_TARGET_POSITION(&Param0 + 8, vVar11, 0);
	GET_CAMERA_POSITION(&Param0 + 8, &vVar0);
	fVar9 = ATAN_DEGREE(((vVar11.z - vVar0.z) / (vVar11.x - vVar0.x)));
	fVar10 = (fVar9 - Param0.f_56);
	Param0.f_56 = fVar9;
	fVar10 = fVar10;
	return;
}

var Function_171(int iParam0, int iParam1) //Position: 0xA7A9 / 42921
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_172(struct<121> Param0) //Position: 0xA7BC / 42940
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	uVar12 = Function_163(&Param0 + 16);
	switch (Param0.f_112)
	{
		case 0x00000000:
		case 0x00000001:
			Param0.f_120 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(&uVar12))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(&uVar12))
			{
				return;
			}
			GET_CAMERA_POSITION(&Param0 + 8, &Var1);
			Var1 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 136), Var1, StackVal);
			bVar0 = VMAG(Var1);
			if (bVar0 > 2,5f)
			{
				VSCALE(&Var1, 0,975f);
			}
			else
			{
				fVar10 = Function_71(&uVar12, 0);
				if (&fParam2 >= -1.0f)
				{
					fParam2 = (fVar10 + 2.0f);
					bVar8 = ((bVar0 - (Param0.f_120 * 5.0f)) / 6.0f);
				}
				else
				{
					bVar8 = ((bVar0 - (Param0.f_120 * 2.0f)) / 3.0f);
				}
				fVar7 = Function_154(2.0f, (&fParam2 / 3.0f));
				fVar9 = Function_171(FABS(bVar8), fVar7);
				if (bVar8 > 0.0f)
				{
					fVar9 = (fVar9 * -1.0f);
				}
				Param0.f_120 = (Param0.f_120 + (fVar9 / fParam1));
				if (Param0.f_120 < &fParam2)
				{
					Param0.f_120 = &fParam2;
				}
				else if (Param0.f_120 > fVar10)
				{
					Param0.f_120 = (Param0.f_120 * 1,1f);
				}
				fVar11 = (Param0.f_120 / fParam1);
				VNORMALIZE(&Var1);
				if (bVar0 < fVar11)
				{
					VSCALE(&Var1, (bVar0 - fVar11));
				}
				else
				{
					Var1 = Vector(0.0f, 0.0f, 0.0f);
				}
			}
			Var1 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 136), Var1, StackVal);
			if (FIND_GROUND_INTERSECTION(&Var1, 5.0f, &Var3, &uVar5))
			{
				if (StackVal < (StackVal + 0,5f))
				{
					Var1.f_4 = (StackVal + 0,5f);
				}
			}
			SET_CAMERA_POSITION(&Param0 + 8, Var1);
			break;
	}
	return;
}

void Function_173(struct<189> Param0) //Position: 0xA952 / 43346
{
	struct<2> Var0;
	struct<2> Var2;
	
	DISBAND_OBJECTSET(&Param0 + 128);
	switch (Param0.f_112)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(&Param0 + 16, &Param0 + 136);
			GET_OBJECT_AXIS(&Param0 + 16, &Var0, 2);
			VNORMALIZE(&Var0);
			VSCALE(&Var0, -30.0f);
			*(&Param0 + 148) = Vector(StackVal, StackVal, StackVal) + Vector(Var0, *(&Param0 + 136), StackVal);
			break;
		
		case 0x00000003:
			if (Param0.f_188 + 0,66f) > GET_CURRENT_GAME_TIME()
			{
				Function_160(&Param0 + 128, &Param0 + 16, 10.0f);
				Function_158(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148, 0);
			}
			break;
		
		case 0x00000002:
			if (Param0.f_188 + 0,66f) > GET_CURRENT_GAME_TIME()
			{
				Function_160(&Param0 + 128, &Param0 + 16, 5.0f);
				Function_157(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148, 0);
			}
			break;
		
		case 0x00000004:
			if (Param0.f_188 + 0,66f) > GET_CURRENT_GAME_TIME()
			{
				Function_160(&Param0 + 128, &Param0 + 16, 5.0f);
				Function_155(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148, 0);
			}
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_160(&Param0 + 128, &Param0 + 16, 15.0f);
			Function_151(&Param0, &Param0 + 16, &Param0 + 136, &Param0 + 148);
			break;
		
		default:
			GET_CAMERA_POSITION(&Param0 + 8, &Var2);
			GET_OBJECT_POSITION(&Param0 + 16, &Param0 + 148);
			(&Param0 + 148)->f_4 = (StackVal + 1,5f);
			*(&Param0 + 136) = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param0 + 148), Var2, StackVal);
			VNORMALIZE(&Param0 + 136);
			VSCALE(&Param0 + 136, 3.0f);
			*(&Param0 + 136) = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 148), *(&Param0 + 136), StackVal);
			break;
	}
	return;
}

bool Function_174(struct<113> Param0) //Position: 0xAB29 / 43817
{
	var uVar0;
	struct<2> Var1;
	var uVar3;
	float fVar5;
	
	uVar0 = Function_163(&Param0 + 16);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uVar0))
	{
		return 0;
	}
	switch (Param0.f_112)
	{
		case 0x00000003:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar0)))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 2;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(&uVar0))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 4;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(&uVar0) && Function_71(&uVar0, 0) < 0,2f)
			{
				Param0.f_108 = 1;
				Param0.f_112 = 5;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(&uVar0) && Function_71(&uVar0, 0) > 0,2f)
			{
				Param0.f_108 = 0;
				Param0.f_112 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "pelvis", &Var1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(&uVar0, "pelvis", &uVar3);
			fVar5 = UNK_0x9C40E671(&uVar3);
			if ((VDIST(Var1, *(&Param0 + 40)) + (FABS((fVar5 - Param0.f_52)) / 360.0f)) < 0,375f)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (AI_IS_ACTOR_SOCIALIZING(&uVar0))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(&uVar0))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 4;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar0)) && Function_71(&uVar0, 0) < 0,2f)
			{
				Param0.f_108 = 1;
				Param0.f_112 = 5;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar0)) && Function_71(&uVar0, 0) > 0,2f)
			{
				Param0.f_108 = 0;
				Param0.f_112 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "pelvis", &Var1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(&uVar0, "pelvis", &uVar3);
			fVar5 = UNK_0x9C40E671(&uVar3);
			if ((VDIST(Var1, *(&Param0 + 40)) + (FABS((fVar5 - Param0.f_52)) / 360.0f)) < 0,375f)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar0)))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(&uVar0))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 3;
				return 1;
			}
			if (Function_71(&uVar0, 0) < 0,3f)
			{
				Param0.f_108 = 1;
				Param0.f_112 = 5;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(&uVar0, "pelvis", &Var1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(&uVar0, "pelvis", &uVar3);
			fVar5 = UNK_0x9C40E671(&uVar3);
			if ((VDIST(Var1, *(&Param0 + 40)) + (FABS((fVar5 - Param0.f_52)) / 360.0f)) < 0,375f)
			{
				return 1;
			}
			break;
		
		case 0x00000006:
		case 0x00000005:
		case 0x00000007:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar0)))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(&uVar0))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(&uVar0))
			{
				Param0.f_108 = 0;
				Param0.f_112 = 4;
				return 1;
			}
			if (Function_71(&uVar0, 0) > 0,2f)
			{
				Param0.f_108 = 0;
				Param0.f_112 = 4;
				return 1;
			}
			break;
		
		case 0x00000000:
		case 0x00000001:
			return 0;
			break;
		
		default:
			LOG_ERROR("Unauthored case in IDLE_CAM_CHECK_TARGET_BEHAVIOR");
			break;
	}
	return 0;
}

void Function_175(struct<113> Param0) //Position: 0xAEAE / 44718
{
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0.f_112 = 0;
		Function_164(&Param0, 2, &uParam1);
		Function_150(&Param0);
	}
	else
	{
		Param0.f_104 = 6;
		Param0.f_112 = 1;
		Param0.f_108 = 2;
		Param0.f_100 = 0;
		Function_164(&Param0, 2, Function_312());
		Function_150(&Param0);
	}
	DISBAND_OBJECTSET(&Param0 + 128);
	DISBAND_OBJECTSET(&Param0 + 216);
	Param0.f_104 = 1;
	return;
}

float Function_176() //Position: 0xAF16 / 44822
{
	return 120.0f;
}

bool Function_177(int iParam0, bool bParam1) //Position: 0xAF21 / 44833
{
	STREAMING_SET_CUTSCENE_MODE(0);
	if (IS_OBJECT_VALID(&iParam0 + 8))
	{
		if (IS_OBJECT_VALID(&iParam0 + 544))
		{
			DESTROY_OBJECT(&iParam0 + 544);
		}
		REMOVE_CAMERA_FROM_CHANNEL(&iParam0 + 8, 0);
		DEREFERENCE_OBJECT(&iParam0 + 16);
		DESTROY_CAMERA(&iParam0 + 8);
		DESTROY_OBJECTSET(&iParam0 + 216);
		DESTROY_OBJECTSET(&iParam0 + 128);
		DESTROY_OBJECT(&iParam0 + 32);
		CAMERA_RESET(0);
		STREAMING_RELEASE_MAIN_POI();
		if (&bParam1)
		{
			STREAMING_UNLOAD_SCENE();
		}
		Global_47150 = 1;
	}
	else
	{
		STREAMING_SET_POI_LIMIT(1);
		Global_47150 = 1;
		return 1;
	}
	return 0;
}

void Function_178() //Position: 0xAFAA / 44970
{
	bool bVar0;
	int iVar1;
	
	if (Function_6((&Global_21369 + 72)->f_32, 0x40000000))
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "TriggerNewHorse"))
			{
				Function_185();
				DECOR_REMOVE(&Global_54076, "TriggerNewHorse");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "SettingPlayerHorse"))
			{
				Function_181();
				DECOR_REMOVE(&Global_54076, "SettingPlayerHorse");
				DECOR_REMOVE(&Global_54076, "NewPlayerHorse_Wipe");
			}
			if (Global_21473 != 4294967295)
			{
				Function_180();
			}
		}
		bVar0 = (StackVal + 976);
		iVar1 = GET_ACTORENUM_SPECIES(bVar0);
		if (!((((iVar1 != 23 || iVar1 != 24) || iVar1 != 8) || iVar1 != 9) || iVar1 != 12))
		{
			Function_15(976, 0, 0);
		}
		if (IS_ACTOR_VALID(&Global_54076) && Function_179(bVar0))
		{
			if (IS_ACTOR_ALIVE(&Global_54076))
			{
				if (!Function_6((&Global_21369 + 72)->f_32, 1))
				{
					STREAMING_REQUEST_ACTOR(bVar0, true, false);
					Function_16(&Global_21369 + 72 + 32, 1);
				}
			}
		}
		if ((Function_17() >= 1 && 1) && !(Global_53524.f_44 || IS_GAME_RESETTING()))
		{
			if (!STREAMING_IS_ACTOR_LOADED(993, 4294967295) && IS_ACTOR_ALIVE(&Global_54076))
			{
				if (!Function_6((&Global_21369 + 72)->f_32, 32))
				{
					Function_16(&Global_21369 + 72 + 32, 32);
					STREAMING_REQUEST_ACTOR(993, true, false);
				}
			}
		}
		else if (Function_6((&Global_21369 + 72)->f_32, 32))
		{
			if (StackVal && !STREAMING_IS_ACTOR_LOADED(993, 4294967295) != 17)
			{
				STREAMING_EVICT_ACTOR(993, 4294967295);
				Function_389(&Global_21369 + 72 + 32, 32);
			}
		}
	}
	return;
}

int Function_179(int iParam0) //Position: 0xB16B / 45419
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_180() //Position: 0xB182 / 45442
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = Global_21473;
	bVar1 = (StackVal + 976);
	bVar2 = Function_6((&Global_21369 + 72)->f_32, 64);
	bVar3 = Function_6((&Global_21369 + 72)->f_32, 128);
	Function_389(&Global_21369 + 72 + 32, 128);
	Function_389(&Global_21369 + 72 + 32, 64);
	Global_21473 = 4294967295;
	if (iVar0 != bVar1)
	{
		if (Function_6((&Global_21369 + 72)->f_32, 1))
		{
			STREAMING_EVICT_ACTOR(bVar1, 4294967295);
		}
		(&Global_21369 + 72)->f_8 = (iVar0 - 976);
		Function_389(&Global_21369 + 72 + 32, 1);
		if (bVar2)
		{
			(&Global_21369 + 72)->f_52 = 0;
		}
	}
	if (bVar3)
	{
		DECOR_SET_BOOL(&Global_54076, "PlayerHorse_DontResetHorseEnum", true);
	}
	return;
}

void Function_181() //Position: 0xB241 / 45633
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&Global_54076, "SettingPlayerHorse"));
	bVar1 = DECOR_GET_BOOL(&Global_54076, "NewPlayerHorse_Wipe");
	if (!Function_6((&Global_21369 + 72)->f_32, 2))
	{
		LOG_ERROR("You do NOT have permission to set the player horse. This function will do nothing. See Ryan P. for instructions on correcting this.");
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72) && &iVar0 == &Global_21369 + 72)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		if (Function_184(&Global_21369 + 72, FIND_NAMED_LAYOUT("PlayerLayout")))
		{
			RELEASE_ACTOR(&Global_21369 + 72);
		}
	}
	bVar2 = (StackVal + 976);
	if (GET_ACTOR_ENUM(&iVar0) != bVar2)
	{
		if (STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		}
		Function_389(&Global_21369 + 72 + 32, 2);
		if (bVar1)
		{
			(&Global_21369 + 72)->f_52 = 0;
		}
	}
	Function_183();
	if (IS_ACTOR_VALID(&iVar0))
	{
		GIVE_OBJECT_TO_LAYOUT(&iVar0, FIND_NAMED_LAYOUT("PlayerLayout"));
		SET_ACTORS_HORSE(&Global_54076, &iVar0);
		Function_182(&iVar0, 0, 0, 0, 0, 0, 0);
		*(&Global_21369 + 72) = &iVar0;
		(&Global_21369 + 72)->f_8 = (GET_ACTOR_ENUM(&iVar0) - 976);
		*(&Global_21369 + 72 + 24) = GET_TIME_OF_DAY();
	}
	Function_389(&Global_21369 + 72 + 32, 1);
	Function_389(&Global_21369 + 72 + 32, 2);
	return;
}

void Function_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB41A / 46106
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&iParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&iParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&iParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&iParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&iParam0, &iParam4);
	}
}

void Function_183() //Position: 0xB464 / 46180
{
	(&Global_21369 + 128) = "";
	return;
}

bool Function_184(int iParam0, int iParam1) //Position: 0xB472 / 46194
{
	var uVar0;
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_IN_LAYOUT(&uVar0, &iParam1);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (&iVar1 == &iParam0)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_185() //Position: 0xB4D8 / 46296
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = StackVal + 976;
	bVar1 = false;
	bVar2 = 4294967295;
	iVar3 = 0;
	bVar2 = (RAND_INT_RANGE(false, 5999) / 1000);
	if (!Function_63())
	{
		while (!bVar1 && iVar3 > 10)
		{
			if (bVar2 != 0 && iVar0 == 976)
			{
				bVar1 = true;
				Function_15(976, 0, 1);
			}
			else if (bVar2 != 1 && iVar0 == 977)
			{
				bVar1 = true;
				Function_15(977, 0, 1);
			}
			else if (bVar2 != 2 && iVar0 == 980)
			{
				bVar1 = true;
				Function_15(980, 0, 1);
			}
			else if (bVar2 != 3 && iVar0 == 981)
			{
				bVar1 = true;
				Function_15(981, 0, 1);
			}
			else if (bVar2 != 4 && iVar0 == 983)
			{
				bVar1 = true;
				Function_15(983, 0, 1);
			}
			else if (bVar2 != 5 && iVar0 == 984)
			{
				bVar1 = true;
				Function_15(984, 0, 1);
			}
			bVar2 = RAND_INT_RANGE_DIFFERENT(bVar2, 0, 5);
			iVar3++;
		}
	}
	else
	{
		while (!bVar1 && iVar3 > 10)
		{
			fVar4 = RAND_FLOAT_RANGE(0.0f, 80000.0f);
			if (fVar4 > 10000.0f && iVar0 == 1248)
			{
				bVar1 = true;
				Function_15(1248, 0, 1);
			}
			else if (fVar4 > 20000.0f && iVar0 == 1249)
			{
				bVar1 = true;
				Function_15(1249, 0, 1);
			}
			else if (fVar4 > 30000.0f && iVar0 == 1250)
			{
				bVar1 = true;
				Function_15(1250, 0, 1);
			}
			else if (fVar4 > 40000.0f && iVar0 == 1251)
			{
				bVar1 = true;
				Function_15(1251, 0, 1);
			}
			else if (fVar4 > 50000.0f && iVar0 == 976)
			{
				bVar1 = true;
				Function_15(976, 0, 1);
			}
			else if (fVar4 > 60000.0f && iVar0 == 977)
			{
				bVar1 = true;
				Function_15(977, 0, 1);
			}
			else if (fVar4 > 70000.0f && iVar0 == 980)
			{
				bVar1 = true;
				Function_15(980, 0, 1);
			}
			else if (fVar4 >= 80000.0f && iVar0 == 981)
			{
				bVar1 = true;
				Function_15(981, 0, 1);
			}
			iVar3++;
		}
	}
	return;
}

void Function_186() //Position: 0xB6EA / 46826
{
	float fVar0;
	
	if (HUD_IS_FADED())
	{
		return;
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (Function_69(32))
	{
		if (IS_PLAYER_CONTROLLABLE(0))
		{
			if (!StackVal)
			{
				if (IS_VOLUME_VALID(&Global_21498))
				{
					if (Global_39873 + 5.0f) > GET_CURRENT_GAME_TIME()
					{
						UI_SET_TEXT("LocationText", GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_21498)));
						UNK_0xD792B93B("LocationText", 5.0f);
						UI_ENTER("LocationText");
						if (Function_192(StackVal) >= 0)
						{
							UI_SET_MONEY(StackVal, "BountyAmount", Function_192("PlayerBounty"));
						}
					}
					Global_21498.f_8 = 1;
				}
				else
				{
					Global_21498.f_8 = 1;
				}
			}
		}
	}
	else
	{
		Global_21498.f_8 = 1;
		Global_21498.f_16 = 0.0f;
	}
	if (Function_387(0x20000000) && !Function_387(256))
	{
		if (Function_192(StackVal) >= 0)
		{
			UI_SET_MONEY(StackVal, "BountyAmount", Function_192("PlayerBounty"));
		}
		else
		{
			FLASH_SET_STRING("testInventory", "CurrentCrime", "law_bounty_cleared", 1);
		}
		Function_191(0x20000000);
	}
	if (!Function_387(256))
	{
		switch (Global_21575)
		{
			case 0x00000000:
			case 0x00000001:
			case 0x00000003:
			case 0x00000002:
				if (Global_6646 && !Global_42264)
				{
					if ((Global_43787 != 1 && Function_192(1) < 0) || (Global_43787 == 1 && Function_192(0) < 0))
					{
						UI_ENTER("WantedMeter");
						_HUD_WANTED_METER(1);
						if (STRINGS_ARE_EQUAL(&Global_21543, ""))
						{
							Function_189();
						}
						if (GET_CURRENT_GAME_TIME() >= Global_42256)
						{
							if (Global_42251)
							{
								UI_SET_STRING("Generic_Dbuffer128_0", &Global_21543);
								UI_SET_TEXT("wantedcrime", "Generic_Dbuffer128_0");
							}
							else
							{
								UI_SET_TEXT("WantedCrime", &Global_21543);
							}
						}
						else
						{
							UI_SET_TEXT("WantedCrime", "COMMON_EMPTY");
						}
						if (Global_43787 == 1)
						{
							UI_SET_MONEY("BountyAmount", "PlayerBounty", Function_192(1));
						}
						else
						{
							UI_SET_MONEY("BountyAmount", "PlayerBounty", Function_192(0));
						}
						Global_42258 = ((GET_CURRENT_GAME_TIME() + 12.0f) + 2.0f);
						Global_42257 = (GET_CURRENT_GAME_TIME() + 300.0f);
						if (Global_6648)
						{
							fVar0 = Global_21542;
							Global_21542 = FABS(((GET_CURRENT_GAME_TIME() - Global_42255) / Global_42254));
							if (Global_21542 > fVar0)
							{
								if (fVar0 < 0,5f)
								{
									PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
								}
							}
						}
						else
						{
							Global_21542 = 0.0f;
						}
						_HUD_WANTED_CRIME((1.0f - Global_21542));
						UI_LABEL_SET_VALUE_B("BountyAmount", 100);
						GUI_SET_TEXT(&Global_21492, "");
						GUI_SET_TEXT(&Global_21496, "");
						GUI_SET_TEXT(&Global_21494, "");
						Function_188();
					}
					else
					{
						Function_187();
					}
				}
				else
				{
					Function_187();
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0xFFFFFFFF:
				Function_187();
				Global_42264 = 0;
				break;
			
			default:
				Function_187();
				Global_42264 = 0;
				break;
		}
		if (Global_42252 < 0.0f)
		{
			UI_SET_STYLE("BountyAmount", 0);
		}
		else
		{
			UI_SET_STYLE("BountyAmount", 1);
		}
	}
	return;
}

void Function_187() //Position: 0xBAAA / 47786
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	
	if (Global_43787 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	UI_SET_TEXT("WantedCrime", "COMMON_EMPTY");
	_HUD_WANTED_CRIME(0.0f);
	bVar1 = false;
	if (bVar1)
	{
		UI_EXIT("WantedMeter");
		UI_EXIT("BountyAmount");
		_HUD_WANTED_METER(0);
		Global_42252 = 0.0f;
		UNK_0x598815BD(Global_42252);
		return;
	}
	if (GET_CURRENT_GAME_TIME() >= Global_42258 && Function_192(iVar0) < 0)
	{
		_HUD_WANTED_METER(1);
		UI_ENTER("BountyAmount");
		UI_SET_MONEY("BountyAmount", "PlayerBounty", Function_192(iVar0));
		UI_LABEL_SET_VALUE("BountyAmount", true);
		UI_LABEL_SET_VALUE_B("BountyAmount", 100);
	}
	else if (Global_6627)
	{
		Global_42258 = (GET_CURRENT_GAME_TIME() - 1.0f);
		Global_42257 = (GET_CURRENT_GAME_TIME() + 300.0f);
		UI_EXIT("BountyAmount");
	}
	else
	{
		UI_EXIT("WantedMeter");
		UI_EXIT("BountyAmount");
		if (Global_42252 != 0.0f)
		{
			_HUD_WANTED_METER(0);
		}
	}
	if (Global_42252 < 0.0f)
	{
		if (GET_CURRENT_GAME_TIME() <= Global_42253)
		{
			fVar2 = (GET_CURRENT_GAME_TIME() - Global_42253);
			if (fVar2 <= 2.0f)
			{
				Global_42252 = 0.0f;
				UI_LABEL_SET_VALUE_B("BountyAmount", true);
			}
			else
			{
				Global_42252 = (1.0f - (fVar2 / 2.0f));
				UI_ENTER("WantedMeter");
				UNK_0x598815BD(Global_42252);
				bVar3 = FLOOR((Global_42252 * 100.0f));
				if (bVar3 <= 1)
				{
					bVar3 = true;
				}
				UI_LABEL_SET_VALUE_B("BountyAmount", bVar3);
			}
		}
	}
	else
	{
		UNK_0x598815BD(0.0f);
	}
	return;
}

void Function_188() //Position: 0xBC85 / 48261
{
	Global_42252 = 1.0f;
	UNK_0x598815BD(Global_42252);
	Global_42253 = GET_CURRENT_GAME_TIME();
	return;
}

void Function_189() //Position: 0xBC9B / 48283
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_190() };
	UI_SET_TEXT("wantedcrime", &Var0);
	memcpy(&Global_21543, StackVal, StackVal, StackVal, Var0, 16);
	Global_42256 = (GET_CURRENT_GAME_TIME() + 12.0f);
	Global_42251 = 0;
	return;
}

struct<16> Function_190() //Position: 0xBCD6 / 48342
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* cVar4[16];
	
	iVar0 = 0;
	if (Global_43787 == 1)
	{
		iVar0 = 1;
	}
	iVar3 = 0;
	strcpy(&cVar4, "", 16);
	iVar1 = 0;
	while (iVar1 <= 36)
	{
		if ((*&Global_40060 + 68[iVar0181][iVar15])[3] >= 0)
		{
			if (Global_41252[iVar111].f_40 >= iVar3)
			{
				iVar3 = Global_41252[iVar111].f_40;
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (Function_113(iVar2) && iVar2 == 0)
	{
		return StackVal, StackVal, StackVal, *(&Global_41252[iVar211] + 4);
	}
	return StackVal, StackVal, StackVal, cVar4;
}

void Function_191(int iParam0) //Position: 0xBD58 / 48472
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

int Function_192(int iParam0) //Position: 0xBD75 / 48501
{
	if (!Function_193(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_193(bool bParam0) //Position: 0xBD8D / 48525
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_194(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xBDA2 / 48546
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<9> Var5;
	
	if (Global_98975)
	{
		RESET_ANALOG_POSITIONS(0, 0.0f);
		iLocal_292 = 0;
		if (&bParam5)
		{
			PRINTSTRING("PLAYER REGENERATION DISABLED");
			PRINTNL();
		}
		return;
	}
	bVar0 = false;
	uVar1 = &Global_54076;
	if (Function_83(1048576))
	{
		uVar1 = GET_SLOT_ACTOR(Global_123163.f_80);
		bVar0 = true;
	}
	if (IS_ACTOR_VALID(&uVar1))
	{
		if (IS_ACTOR_DEAD(&uVar1))
		{
			RESET_ANALOG_POSITIONS(0, 1.0f);
			iLocal_292 = 1;
		}
		else
		{
			bVar2 = GET_ACTOR_HEALTH(&uVar1);
			bVar3 = GET_ACTOR_MAX_HEALTH(&uVar1);
			if (!bVar0)
			{
				if (Function_195(&uVar1, 52) && !DECOR_CHECK_EXIST(&uVar1, "NoRegen"))
				{
					if (TOUGH_ARMOUR_GET_TUNING_REGENERATION_RATE(&uVar1) == 10.0f)
					{
						TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&uVar1, 10.0f);
					}
					if (bVar2 > bVar3)
					{
						bVar4 = (GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar1));
						bVar7 = false;
						if (!((IS_ACTOR_RIDING(&uVar1) || IS_ACTOR_RIDING_VEHICLE(&uVar1)) || IS_ACTOR_DRIVING_VEHICLE(&uVar1)))
						{
							GET_ACTOR_VELOCITY(&uVar1, &vVar5);
							if ((FABS(vVar5.x) < 0,25f || FABS(vVar5.y) < 0,2f) || FABS(vVar5.z) < 0,25f)
							{
								bVar7 = true;
							}
						}
						if (bVar7)
						{
							bParam1 = (bParam1 * 1.0f);
							bParam2 = (bParam2 * 1.0f);
							bParam3 = (bParam3 * 1.0f);
							bParam4 = (bParam4 * 1.0f);
						}
						else
						{
							bParam1 = (bParam1 * 1.0f);
							bParam2 = (bParam2 * 1.0f);
							bParam3 = (bParam3 * 1.0f);
							bParam4 = (bParam4 * 1.0f);
						}
						if (Global_98979 < -1.0f)
						{
							if ((GET_CURRENT_GAME_TIME() - Global_98979) >= Global_98978)
							{
								if (&bParam5)
								{
									PRINTSTRING("PLAYER REGENERATION DEBUG - HEALTH REGEN BOOSTED!!");
									PRINTNL();
									PRINTSTRING("BoostTimer: ");
									PRINTFLOAT((GET_CURRENT_GAME_TIME() - Global_98979));
									PRINTNL();
									PRINTSTRING("PlayerHealthRegenBoostDuration: ");
									PRINTFLOAT(Global_98978);
									PRINTNL();
									PRINTSTRING("PlayerHealthRegenBoost: ");
									PRINTFLOAT(Global_98977);
									PRINTNL();
									PRINTSTRING("------------------------------------------------");
									PRINTNL();
								}
								bParam1 = (bParam1 / Global_98977);
								bParam2 = (bParam2 / Global_98977);
								bParam3 = (bParam3 * Global_98977);
								bParam4 = (bParam4 * Global_98977);
							}
							else
							{
								Global_98977 = 1.0f;
								Global_98978 = 0.0f;
								Global_98979 = -1.0f;
							}
						}
						if (bVar2 >= bParam0)
						{
							if (bVar4 <= bParam2 && !Global_98976)
							{
								bVar2 = (bVar2 + bParam4);
								SET_ACTOR_HEALTH(&uVar1, bVar2);
							}
						}
						else if (bVar4 <= bParam1 && !Global_98976)
						{
							if (bLocal_144)
							{
								bVar2 = (bVar2 + 0,08f);
							}
							else
							{
								bVar2 = (bVar2 + bParam4);
							}
							SET_ACTOR_HEALTH(&uVar1, bVar2);
						}
						if (&bParam5)
						{
							PRINTSTRING("PLAYER REGENERATION DEBUG");
							PRINTNL();
							PRINTSTRING("fPlayerHealth: ");
							PRINTFLOAT(bVar2);
							PRINTNL();
							PRINTSTRING("GET_LAST_HIT_TIME: ");
							PRINTFLOAT(GET_LAST_HIT_TIME(&uVar1));
							PRINTNL();
							PRINTSTRING("fTimeBetweenHits: ");
							PRINTFLOAT(bVar4);
							PRINTNL();
							PRINTSTRING("fLowHealthBound: ");
							PRINTFLOAT(bParam0);
							PRINTNL();
							PRINTSTRING("fMaxHealth: ");
							PRINTFLOAT(bVar3);
							PRINTNL();
							PRINTSTRING("fWaitTimeBeforeRecoveryNormal: ");
							PRINTFLOAT(bParam1);
							PRINTNL();
							PRINTSTRING("fWaitTimeBeforeRecoveryLowHealth: ");
							PRINTFLOAT(bParam2);
							PRINTNL();
							PRINTSTRING("fHealthIncrementPerFrameNormal: ");
							PRINTFLOAT(bParam3);
							PRINTNL();
							PRINTSTRING("fHealthIncrementPerFrameLowHealth: ");
							PRINTFLOAT(bParam4);
							PRINTNL();
							if (bVar7)
							{
								PRINTSTRING("Player is moving");
							}
							else
							{
								PRINTSTRING("Player is standing still");
							}
							PRINTNL();
							PRINTSTRING("------------------------------------------------");
							PRINTNL();
						}
					}
				}
				else if (TOUGH_ARMOUR_GET_TUNING_REGENERATION_RATE(&uVar1) == 0.0f)
				{
					TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&uVar1, 0.0f);
				}
				bVar2 = GET_ACTOR_HEALTH(&uVar1);
			}
			fVar9 = 0,01f;
			fVar10 = 0,5f;
			fVar11 = Function_154((1.0f - (bVar2 / bVar3)), 0.0f);
			if (fVar11 > fVar9)
			{
				fVar8 = ((fVar11 / fVar9) * fVar10);
			}
			else
			{
				fVar8 = ((fVar11 - fVar9) / (1.0f - fVar9));
				fVar8 = (fVar8 * (1.0f - fVar10));
				fVar8 = (fVar8 + fVar10);
			}
			if (fVar8 < 0.0f)
			{
				iLocal_292 = 1;
				RESET_ANALOG_POSITIONS(0, fVar8);
			}
			else if (iLocal_292)
			{
				iLocal_292 = 0;
				RESET_ANALOG_POSITIONS(0, 0.0f);
			}
		}
	}
	else if (iLocal_292)
	{
		iLocal_292 = 0;
		RESET_ANALOG_POSITIONS(0, 0.0f);
	}
}

int Function_195(int iParam0, int iParam1) //Position: 0xC35E / 50014
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_196(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_196(&iParam1, 64))
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

bool Function_196(var uParam0, int iParam1) //Position: 0xC44C / 50252
{
	return (uParam0 && iParam1) == 0;
}

void Function_197(int iParam0) //Position: 0xC459 / 50265
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 != GET_PLAYER_COMBATMODE())
	{
		iParam0 = GET_PLAYER_COMBATMODE();
		bVar1 = GET_ACTOR_HEALTH(&Global_54076);
		fVar2 = GET_ACTOR_MAX_HEALTH(&Global_54076);
		fVar3 = (bVar1 / fVar2);
		if (iParam0 == 0)
		{
			bVar0 = 80.0f;
			bVar1 = (bVar0 * fVar3);
			SET_ACTOR_MAX_HEALTH(&Global_54076, bVar0);
			SET_ACTOR_HEALTH(&Global_54076, bVar1);
		}
		else if (iParam0 == 2)
		{
			bVar0 = (80.0f * 2.0f);
			bVar1 = (bVar0 * fVar3);
			SET_ACTOR_MAX_HEALTH(&Global_54076, bVar0);
			SET_ACTOR_HEALTH(&Global_54076, bVar1);
		}
	}
	return;
}

void Function_198(float fParam0, bool bParam1) //Position: 0xC4DE / 50398
{
	float fVar0;
	
	fVar0 = GET_ACTOR_HEALTH(&Global_54076);
	if (fVar0 >= fParam0)
	{
		SET_ACTOR_HEALTH(&Global_54076, bParam1);
		HUD_SET_FADE_COLOR(1.0f, 0.0f, 0.0f, 1.0f);
		HUD_FADE_OUT(0.0f, 1f, 1);
		HUD_FADE_IN(0,5f, 1065353216);
	}
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0xC51C / 50460
{
	if (!IS_ACTOR_DEAD(&Global_54076))
	{
		Function_264(&uParam0);
		Function_217(&uParam0, &iParam1);
		if (Function_216(&uParam0))
		{
			Function_200(&uParam0, &iParam1);
		}
	}
	return;
}

void Function_200(struct<41> Param0) //Position: 0xC54E / 50510
{
	if ((!Function_6(Param0.f_40, 4) && !Function_6(Param0.f_40, 8192)) && !Function_6(Param0.f_40, 16384))
	{
		if (!Function_201(&Param0, &iParam1))
		{
			Function_16(&Param0 + 40, 8192);
		}
	}
	return;
}

bool Function_201(struct<45> Param0) //Position: 0xC593 / 50579
{
	var uVar0;
	char* cVar1[32];
	int iVar9;
	
	switch (Param1.f_80)
	{
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: these are falling in here while the camp is still getting created, we do nothing but wait our turn");
			break;
		
		case 0x0000000A:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_PENDING_PROMPTS");
			if (!HUD_IS_FADED() || HUD_IS_FADING())
			{
				if (!DECOR_CHECK_EXIST(&Global_54076, "TutorialFirstCamp"))
				{
					if (!Function_62(Global_119937, 4))
					{
						Function_54(&Global_54076, 4, 4, 1);
					}
				}
				if (!DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowCamp"))
				{
					if (Param1.f_56 && Param1.f_60)
					{
						if (IS_ACTION_NODE_PLAYING(&Global_54076, "player_save/mid"))
						{
							Param1.f_80 = 11;
						}
						else
						{
							LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for IS_ACTION_NODE_PLAYING gPlayer player_save/mid - timer:");
							LOG_WARNING(FLOAT_TO_STRING_VERBOSE(Function_214(&Param1 + 100)));
							if (Function_214(&Param1 + 100) < 6.0f)
							{
								Function_213(&Param1 + 100);
								SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/mid");
								Param1.f_80 = 11;
								LOG_ERROR("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_PENDING_PROMPTS timed out!");
							}
						}
					}
					else
					{
						LOG_ERROR("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() AST and ACT not loaded. Something went wrong - continuing anyway");
						Param1.f_80 = 11;
					}
				}
				else
				{
					LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for removal of decor: CanSaveNowCamp");
				}
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for removal of decor: CanSaveNowCamp");
			}
			break;
		
		case 0x0000000B:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_CREATING_PROMPTS");
			if (UI_HAS_CHEATED())
			{
				Param1.f_128 = 1;
			}
			else
			{
				Param1.f_128 = 0;
			}
			if (IS_PLAYER_SIGNED_IN() && !(SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()))
			{
				uVar0 = "nCamp_Save";
			}
			else
			{
				uVar0 = "Camp_Save_NoSignedIn";
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 16))
			{
				*(&Param1 + 16) = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Travel", 100, "@UI.ACCEPT", "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param1))
			{
				Param1 = ADD_SCRIPT_USE_CONTEXT(&uVar0, 100, "@GENERIC.USE", "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 24) && (!Function_210(49, 0) || Function_210(57, 0)))
			{
				*(&Param1 + 24) = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Outfits", 100, "@GENERIC.USE2", "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
			{
				*(&Param1 + 8) = ADD_SCRIPT_USE_CONTEXT("Camp_Leave", 100, "@UI.CANCELMINIGAME", "", "", "", "", 4294967295, "HUD_MENU_BACK_MASTER");
			}
			Param1.f_80 = 12;
			break;
		
		case 0x0000000C:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_PROMPTS_ON_SCREEN");
			if (UI_HAS_CHEATED() && !Param1.f_128)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 8);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 16);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 24))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 24);
				}
				Param1.f_128 = 1;
				Param1.f_80 = 11;
				break;
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 16))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param1 + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 16);
					*(&Param1 + 88) = LAUNCH_NEW_SCRIPT("content/Ambient/Passenger/passenger_camp", 0);
					if (Param0.f_44 == 4294967295)
					{
						if (!DECOR_CHECK_EXIST(&Global_54076, "playerFastTravelOnFoot"))
						{
							DECOR_SET_BOOL(&Global_54076, "playerFastTravelOnFoot", true);
						}
					}
					else if (!DECOR_CHECK_EXIST(&Global_54076, "playerFastTravelOnHorse"))
					{
						DECOR_SET_INT(&Global_54076, "playerFastTravelOnHorse", Param1.f_96);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 8);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 24))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 24);
					}
					Function_213(&Param1 + 100);
					Function_207(&Param1 + 100);
					Param1.f_80 = 17;
					return 1;
				}
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param1))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1);
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 8);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 16);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 24))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 24);
					}
					Function_206(6);
					DECOR_SET_BOOL(&Global_54076, "CanSaveNowCamp", true);
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/save");
					Function_213(&Param1 + 100);
					Function_207(&Param1 + 100);
					Param1.f_80 = 13;
					return 1;
				}
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 24))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param1 + 24))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 24);
					SET_ACTOR_DRUNK(&Global_54076, 0);
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 8);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 16);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param1);
					}
					strcpy(&cVar1, "out_", 32);
					stradd(&cVar1, &Global_42265[Global_428259] + 32, 32);
					iVar9 = STRING_TO_HASH(&cVar1);
					SATCHEL_SET_CURRENT_OUTFIT(iVar9);
					SATCHEL_ALLOW_OUTFIT_CHANGE(1);
					DECOR_SET_BOOL(&Global_54076, "SwitchOutfitsCamp", true);
					UI_ENTER("OutfitMenuProxy");
					Function_213(&Param1 + 100);
					Function_207(&Param1 + 100);
					Param1.f_80 = 15;
					return 1;
				}
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param1 + 8))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/stand");
					*(&Param1 + 48) = Function_203(&Param0 + 24, 0, &Global_54076, 1, 0, 0);
					Param1.f_80 = 18;
				}
			}
			break;
		
		case 0x0000000D:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PRE_SAVE");
			if (Function_214(&Param1 + 100) < 5.0f)
			{
				if (!DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
				{
					LOG_ERROR("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PRE_SAVE - something went wrong with DR V or animation and bPlayerSleeping decor was not set");
					DECOR_SET_BOOL(&Global_54076, "bPlayerSleeping", true);
				}
			}
			if (HUD_IS_FADED())
			{
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 14;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for HUD_IS_FADED");
			}
			break;
		
		case 0x0000000E:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_POST_SAVE");
			if (IS_ACTION_NODE_PLAYING(&Global_54076, "player_save/save"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/mid");
			}
			if (!DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowCamp"))
			{
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 11;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer CanSaveNowCamp ");
			}
			break;
		
		case 0x0000000F:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PENDING_OUTFITS");
			if (Function_214(&Param1 + 100) < 1.0f)
			{
				if (!UI_ISACTIVE("OutfitMenuProxy"))
				{
					Function_213(&Param1 + 100);
					Param1.f_80 = 11;
				}
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "playerChangeOutfits") || DECOR_CHECK_EXIST(&Global_54076, "OutfitChanged"))
			{
				DECOR_REMOVE(&Global_54076, "playerChangeOutfits");
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				Param1.f_80 = 16;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer playerChangeOutfits ");
			}
			break;
		
		case 0x00000010:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_CHANGED_OUTFITS");
			if (DECOR_CHECK_EXIST(&Global_54076, "OutfitChanged"))
			{
				DECOR_REMOVE(&Global_54076, "OutfitChanged");
				Function_202(&Param0);
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 10;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer OutfitChanged ");
			}
			break;
		
		case 0x00000011:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PENDING_FAST_TRAVEL");
			if (IS_SCRIPT_VALID(&Param1 + 88))
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "playerFastTravel"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/stand");
					UI_PUSH("nCutscenes");
					UNK_0xBAE0A3F8(1);
					*(&Param1 + 48) = Function_203(&Param0 + 24, 0, &Global_54076, 1, 0, 0);
					Param1.f_80 = 18;
				}
				else
				{
					LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer playerFastTravel");
				}
			}
			else if (Function_214(&Param1 + 100) < 3.0f)
			{
				Function_213(&Param1 + 100);
				Param1.f_80 = 11;
			}
			break;
		
		case 0x00000012:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_REMOVING_PROMPTS");
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param1);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 16))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 16);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 24))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 24);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param1 + 8))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param1 + 8);
			}
			Param1.f_80 = 19;
			break;
		
		case 0x00000013:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_AFTER_PROMPTS");
			Function_213(&Param1 + 100);
			return 0;
			break;
		
		default:
			PRINTSTRING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() Unhandled State!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(Param1.f_80);
			PRINTNL();
			LOG_ERROR("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() Unhandled State!");
			Param1.f_80 = 18;
			break;
	}
	return 1;
}

void Function_202(bool bParam0) //Position: 0xD811 / 55313
{
	struct<9> Var0;
	
	if (IS_OBJECT_VALID(Function_4(&bParam0)))
	{
		GET_OBJECT_POSITION(Function_4(&bParam0), &vVar0);
		uVar3 = LOCATE_NAMED_POINT(vVar0, 20.0f, "player_camp_sit", 0);
		if (IS_OBJECT_VALID(&uVar3))
		{
			GET_OBJECT_POSITION(&uVar3, &vVar0);
			bVar2 = GET_OBJECT_HEADING(&uVar3);
		}
		else
		{
			vVar0.f_8 = (vVar0.z + 1.0f);
		}
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TELEPORT_ACTOR(&Global_54076, &vVar0, 1, 0, 1);
			SNAP_OBJECT_TO_GROUND(&Global_54076, 1.0f, false, 1092616192);
			TASK_CLEAR(&Global_54076);
			SET_ACTOR_HEADING(&Global_54076, bVar2, 1);
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			if (!SET_ANIM_SET_FOR_ACTOR(&Global_54076, "player_save", 0))
			{
				LOG_ERROR("PLAYER_SIT_AT_CAMP_GRINGO: SET_ANIM_SET_FOR_ACTOR gPlayer, player_save FAILED!");
			}
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/sit");
		}
	}
	return;
}

var Function_203(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0xD944 / 55620
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_325(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "player_campfire2", 1, 1);
	}
	Function_204(&uVar0, &uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_204(var uParam0, int iParam1) //Position: 0xD9D1 / 55761
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_205(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	return;
}

void Function_205(int iParam0, int iParam1) //Position: 0xD9FC / 55804
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,240465f, 0,908524f, -1,931376f), Vector(6,712487f, -174,703f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,073098f, 1,121918f, -0,125797f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_206(int iParam0) //Position: 0xDA91 / 55953
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 101;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		iVar2 = 0;
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_144(&(Global_26652[iVar04]));
		}
		if (GET_DAY(&(Global_26652[iVar04])) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_26652[iVar04]), iVar2, &iParam0, false, 0);
		*(&Global_27462[iVar052] + 376) = &Global_26652[iVar04];
		if (Global_47151[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_144(&(Global_26652[iVar04]));
		}
		iVar0++;
	}
	return;
}

void Function_207(int iParam0) //Position: 0xDB57 / 56151
{
	if (!Function_209(&iParam0))
	{
		Function_208(&iParam0, 0.0f);
	}
	return;
}

void Function_208(vector3 vParam0) //Position: 0xDB6E / 56174
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_16(&vParam0, 1);
	Function_389(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_209(int iParam0) //Position: 0xDB93 / 56211
{
	return Function_6(iParam0, 1);
}

bool Function_210(int iParam0, bool bParam1) //Position: 0xDBA1 / 56225
{
	int iVar0;
	
	iVar0 = Function_211(iParam0);
	if (!Function_100(iVar0))
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

int Function_211(int iParam0) //Position: 0xDBDF / 56287
{
	if (!Function_212(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_212(int iParam0) //Position: 0xDBF9 / 56313
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_213(vector3 vParam0) //Position: 0xDC0F / 56335
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

float Function_214(vector3 vParam0) //Position: 0xDC26 / 56358
{
	if (Function_209(&vParam0))
	{
		if (Function_215(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_215(int iParam0) //Position: 0xDCF3 / 56563
{
	return Function_6(iParam0, 2);
}

bool Function_216(int iParam0) //Position: 0xDD01 / 56577
{
	return IS_OBJECT_VALID(Function_4(&iParam0));
}

void Function_217(struct<45> Param0) //Position: 0xDD10 / 56592
{
	if (Function_6(Param0.f_40, 2))
	{
		Param0.f_44 = Function_262(&Param0, &Param1);
		if (DECOR_CHECK_EXIST(&Global_54076, "DestroyMyCamp"))
		{
			DECOR_REMOVE(&Global_54076, "DestroyMyCamp");
		}
		if (Global_6607 && !Function_6(Param0.f_40, 65536))
		{
			if (Function_253(&Param0, &Param1))
			{
				LOG_WARNING("PLAYER_HANDLE_CAMP_CREATION_AND_REMOVAL - Camp created elegantly");
				Function_389(&Param0 + 40, 2);
				Function_389(&Param0 + 40, 1);
				Function_389(&Param0 + 40, 16384);
			}
		}
		else
		{
			Param0.f_44 = 4294967294;
			if (!HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1.0f, 0);
			}
			if (Function_231(&Param0, &Param1))
			{
				if (Function_214(&Param1 + 100) < 45.0f)
				{
					LOG_WARNING("STREAMING TIMEOUT");
					Function_230(&Param0);
					Function_229(&Param1);
					Function_389(&Param0 + 40, 2);
					Function_389(&Param0 + 40, 1);
					Function_389(&Param0 + 40, 65536);
					Function_389(&Param0 + 40, 8192);
					Function_16(&Param0 + 40, 16384);
					Param1.f_80 = 21;
					STREAMING_RELEASE_MAIN_POI();
					HUD_FADE_IN(1,5f, 1065353216);
				}
				LOG_WARNING("PLAYER_HANDLE_CAMP_CREATION_AND_REMOVAL - Camp created forcefully");
				if (Function_228(Function_4(&Param0)) && DECOR_CHECK_EXIST(Function_4(&Param0), "PropsCreated"))
				{
					if (!IS_ACTOR_VALID(&Param1 + 120))
					{
						*(&Param1 + 120) = Function_227(&Param0);
					}
					if (((Function_225() && Global_6607) && STREAMING_IS_WORLD_LOADED()) && IS_ACTOR_VALID(&Param1 + 120))
					{
						Function_230(&Param0);
						Function_229(&Param1);
						Function_389(&Param0 + 40, 2);
						Function_389(&Param0 + 40, 1);
						Function_389(&Param0 + 40, 65536);
						Function_389(&Param0 + 40, 8192);
						Function_16(&Param0 + 40, 16384);
						Param1.f_80 = 21;
						STREAMING_RELEASE_MAIN_POI();
						HUD_FADE_IN(1,5f, 1065353216);
					}
				}
			}
		}
	}
	else if (Function_6(Param0.f_40, 8192))
	{
		Function_389(&Param0 + 40, 2);
		Function_389(&Param0 + 40, 16384);
		if (Function_220(&Param0, &Param1))
		{
			Function_389(&Param0 + 40, 8192);
			Function_16(&Param0 + 40, 16384);
		}
	}
	else if (Function_6(Param0.f_40, 4))
	{
		Function_389(&Param0 + 40, 8192);
		Function_389(&Param0 + 40, 16384);
		if (Function_219(&Param0, &Param1))
		{
			Function_389(&Param0 + 40, 4);
			Function_389(&Param0 + 40, 1);
		}
	}
	else if (Function_6(Param0.f_40, 16384))
	{
		Function_389(&Param0 + 40, 8192);
		Function_389(&Param0 + 40, 4);
		if (Function_218(&Param0))
		{
			Function_1(&Param0, &Param1, 0, 0, 1, 1);
			Function_389(&Param0 + 40, 16384);
			Function_389(&Param0 + 40, 1);
			Param1.f_80 = 0;
		}
	}
	return;
}

bool Function_218(int iParam0) //Position: 0xE062 / 57442
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		GET_OBJECT_POSITION(Function_4(&iParam0), &Var0);
		GET_POSITION(&Global_54076, &Var2);
		if (VDIST(Var0, Var2) <= 25.0f)
		{
			LOG_WARNING("PLAYER_HAS_MOVED_AWAY_FROM_CAMP - player is more than 25m away, returning whether its visible or not");
			return !WOULD_ACTOR_BE_VISIBLE(false, &Var0, 3212836864);
		}
	}
	return 0;
}

bool Function_219(int iParam0, int iParam1) //Position: 0xE113 / 57619
{
	if (!IS_OBJECT_VALID(Function_4(&iParam0)))
	{
		LOG_WARNING("PLAYER_REMOVE_CAMP_ELEGANTLY - No campfire exists");
		return 1;
	}
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(1.0f, 1.0f, 0);
		}
		return 0;
	}
	LOG_WARNING("PLAYER_REMOVE_CAMP_ELEGANTLY - Removing camp");
	Function_1(&iParam0, &iParam1, 0, 0, 1, 1);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	if (!HUD_IS_FADING())
	{
		HUD_FADE_IN(1,5f, 1065353216);
	}
	return 1;
}

bool Function_220(struct<2> Param0) //Position: 0xE1EC / 57836
{
	struct<2> Var0;
	
	switch (Param1.f_80)
	{
		case 0x00000000:
			Param1.f_80 = 3;
			break;
		
		case 0x0000000A:
		case 0x00000013:
			Param1.f_80 = 5;
			break;
		
		case 0x00000005:
			Function_1(&Param0, &Param1, 0, 1, 0, 1);
			Param1.f_80 = 3;
			break;
		
		case 0x00000003:
			Param0.f_44 = 4294967294;
			STREAMING_REQUEST_GRINGO(GET_ASSET_ID(Function_224(Param0.f_44), 1));
			Param1.f_80 = 4;
			break;
		
		case 0x00000004:
			if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID(Function_224(Param0.f_44), 1)))
			{
				*(&Param1 + 72) = GET_ASSET_ID(Function_224(Param0.f_44), 1);
				Param1.f_80 = 6;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_DISBAND_CAMP() waiting for STREAMING_IS_GRINGO_LOADED");
			}
			break;
		
		case 0x00000006:
			Var0.f_4 = 180.0f;
			Function_383(8);
			Param0 = *(&Param0 + 12);
			*(&Param0 + 32) = CREATE_GRINGO_IN_LAYOUT(&Param0 + 24, "Player_Campfire", Function_224(Param0.f_44), Param0, Var0);
			Param1.f_80 = 8;
			break;
		
		case 0x00000008:
			if (Function_228(Function_4(&Param0)))
			{
				Param1.f_32 = GET_CURRENT_GAME_TIME();
				Param1.f_80 = 20;
				if (DECOR_CHECK_EXIST(&Global_54076, "playerFastTravel"))
				{
				}
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_DISBAND_CAMP() waiting for PLAYER_IS_CAMP_STREAMED_IN");
			}
			break;
		
		case 0x00000014:
			if ((GET_CURRENT_GAME_TIME() - Param1.f_32) <= 3.0f)
			{
				DESTROY_OBJECT(&Param1 + 40);
				DESTROY_OBJECT(&Param1 + 48);
				SATCHEL_SET_ENABLED(1);
				Function_221(2, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1);
				SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
				if (IS_ACTOR_VALID(&Param1 + 120))
				{
					TASK_PRIORITY_SET(&Param1 + 120, 3);
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "playerFastTravel"))
				{
					DECOR_REMOVE(&Global_54076, "playerFastTravel");
				}
				Param1.f_80 = 21;
				return 1;
			}
			break;
		
		default:
			PRINTSTRING("PLAYER_DISBAND_CAMP called with unhandled state!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(Param1.f_80);
			PRINTNL();
			LOG_ERROR("PLAYER_DISBAND_CAMP called with unhandled state! Check spew...");
			break;
	}
	return 0;
}

void Function_221(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xE512 / 58642
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
		uVar0 = Function_312();
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
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_46(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_167();
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
	Function_222(&iParam9, &iParam10);
}

void Function_222(var uParam0, bool bParam1) //Position: 0xE5E1 / 58849
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
		Function_223();
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

void Function_223() //Position: 0xE6B0 / 59056
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

var Function_224(int iParam0) //Position: 0xE728 / 59176
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFE:
			iVar0 = "$/content/scripting/gringo/simplegringo/playerCamp04";
			break;
		
		case 0xFFFFFFFF:
			iVar0 = "$/content/scripting/gringo/simplegringo/playerCamp01";
			break;
		
		case 0x00000000:
			iVar0 = "$/content/scripting/gringo/simplegringo/playerCamp02";
			break;
		
		case 0x00000001:
			iVar0 = "$/content/scripting/gringo/simplegringo/playerCamp03";
			break;
		
		default:
			iVar0 = "$/content/scripting/gringo/simplegringo/playerCamp01";
			break;
	}
	return &iVar0;
}

int Function_225() //Position: 0xE881 / 59521
{
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (!Function_226(&Global_21369 + 72, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_226(var uParam0, bool bParam1, float fParam2) //Position: 0xE8A9 / 59561
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&uParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&uParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&uParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&uParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

var Function_227(int iParam0) //Position: 0xE94B / 59723
{
	struct<9> Var0;
	
	if (IS_OBJECT_VALID(Function_4(&iParam0)))
	{
		GET_OBJECT_POSITION(Function_4(&iParam0), &vVar0);
		uVar3 = LOCATE_NAMED_POINT(vVar0, 20.0f, "player_camp_horse_stay", 0);
		if (IS_OBJECT_VALID(&uVar3))
		{
			GET_OBJECT_POSITION(&uVar3, &vVar0);
			bVar2 = GET_OBJECT_HEADING(&uVar3);
		}
		else
		{
			vVar0 = (vVar0.x - 1,5f);
		}
		bVar4 = GET_MOST_RECENT_MOUNT(&Global_54076);
		if (!IS_ACTOR_VALID(&bVar4))
		{
			bVar4 = Function_326(1, 1, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0);
		}
		if (IS_ACTOR_VALID(&bVar4))
		{
			if (IS_ACTOR_ALIVE(&bVar4))
			{
				TELEPORT_ACTOR(&bVar4, &vVar0, 1, 1, 1);
				SNAP_OBJECT_TO_GROUND(&bVar4, 1.0f, false, 1092616192);
				SET_ACTOR_HEADING(&bVar4, bVar2, 1);
				TASK_CLEAR(&bVar4);
				RESET_ACTOR_GAITS(&bVar4, 0);
				TASK_PRIORITY_SET(&bVar4, 2);
				TASK_STAND_STILL(&bVar4, -1.0f, 0, 0);
			}
		}
		else
		{
			LOG_ERROR("PLAYER_PLACE_HORSE_AT_CAMP_GRINGO: GET_PLAYER_HORSE returned a NULL actor even if I am forcing it to spawn!");
		}
		return &bVar4;
	}
	return "";
}

bool Function_228(int iParam0) //Position: 0xEAAD / 60077
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(&iParam0), "PlayerCampInfo", "CampIsReady", &iVar0))
		{
			return 1;
		}
		LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_IS_CAMP_STREAMED_IN");
		if (iVar0 != 1)
		{
			LOG_ERROR("PLAYER_IS_CAMP_STREAMED_IN: this player camp gringo is not set up correctly! Missing CampIsReady in PlayerCampInfo");
			return 1;
		}
	}
	LOG_ERROR("PLAYER_IS_CAMP_STREAMED_IN: the camp object is invalid - panic!");
	return 0;
}

void Function_229(int iParam0) //Position: 0xEBEB / 60395
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 8))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 8);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 24))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 24);
	}
	SATCHEL_SET_ENABLED(1);
	SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_221(2, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1);
	return;
}

void Function_230(int iParam0) //Position: 0xEC5F / 60511
{
	struct<9> Var0;
	
	if (IS_OBJECT_VALID(Function_4(&iParam0)))
	{
		GET_OBJECT_POSITION(Function_4(&iParam0), &vVar0);
		uVar5 = LOCATE_NAMED_POINT(vVar0, 20.0f, "player_camp_sit", 0);
		if (IS_OBJECT_VALID(&uVar5))
		{
			GET_OBJECT_POSITION(&uVar5, &vVar0);
			bVar4 = GET_OBJECT_HEADING(&uVar5);
		}
		else
		{
			vVar0.f_8 = (vVar0.z + 1.0f);
		}
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TELEPORT_ACTOR(&Global_54076, &vVar0, 1, 0, 1);
			SNAP_OBJECT_TO_GROUND(&Global_54076, 1.0f, false, 1092616192);
			SET_ACTOR_HEADING(&Global_54076, bVar4, 1);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "player_save/stand");
		}
		bVar6 = GET_MOST_RECENT_MOUNT(&Global_54076);
		if (!IS_ACTOR_VALID(&bVar6))
		{
			bVar6 = Function_326(1, 1, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0);
		}
		if (IS_ACTOR_VALID(&bVar6))
		{
			if (Function_21(&Global_54076, &bVar6) > 0,3f)
			{
				GET_OBJECT_RELATIVE_POSITION(StackVal, &Global_54076, Vector(0.0f, 0.0f, -2,4f), &uVar2);
				TELEPORT_ACTOR(&bVar6, &uVar2, 1, 0, 1);
			}
			TASK_PRIORITY_SET(&bVar6, 3);
		}
	}
	return;
}

bool Function_231(struct<41> Param0) //Position: 0xED81 / 60801
{
	var uVar0;
	struct<2> Var2;
	struct<2> Var4;
	
	SATCHEL_TOGGLE_NO_PAUSE_OUTFIT(1);
	if (DECOR_CHECK_EXIST(&Global_54076, "DestroyMyCamp"))
	{
		DECOR_REMOVE(&Global_54076, "DestroyMyCamp");
	}
	if (IS_OBJECT_VALID(Function_4(&Param0)))
	{
		return 1;
	}
	switch (Param1.f_80)
	{
		case 0x00000000:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_NOT_PRESENT");
			Function_213(&Param1 + 100);
			Function_207(&Param1 + 100);
			Param1.f_80 = 3;
			break;
		
		case 0x00000003:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS");
			if (Param1.f_60)
			{
				LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS: CampInterface.bACTloaded !");
			}
			else
			{
				STREAMING_REQUEST_GRINGO(GET_ASSET_ID(Function_224(Param0.f_44), 1));
			}
			Function_252(&Param1);
			Function_213(&Param1 + 100);
			Function_207(&Param1 + 100);
			Param1.f_80 = 4;
			break;
		
		case 0x00000004:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS");
			if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID(Function_224(Param0.f_44), 1)))
			{
				(&Param1 + 64) = GET_ASSET_ID(Function_224(Param0.f_44), 1);
			}
			if (Function_251())
			{
				Param1.f_60 = 1;
				Param1.f_56 = 1;
			}
			if ((Param1.f_60 && Param1.f_56) && UNK_0x214AFB8C(&Param1 + 64))
			{
				Param1.f_80 = 6;
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
			}
			else if (!Function_6(Param0.f_40, 65536))
			{
				if (Function_214(&Param1 + 100) < 10.0f)
				{
					LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS timed out!");
					Param1.f_80 = 22;
				}
			}
			else if (Function_214(&Param1 + 100) < 45.0f)
			{
				LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS on load timed out!");
				Param1.f_80 = 22;
			}
			break;
		
		case 0x00000006:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_CREATING");
			*(&Param0 + 24) = FIND_NAMED_LAYOUT("PlayerCampfireLayout");
			if (!IS_LAYOUTREF_VALID(&Param0 + 24))
			{
				*(&Param0 + 24) = CREATE_LAYOUT("PlayerCampfireLayout");
			}
			if (Function_145(StackVal, Param0))
			{
				LOG_WARNING("PLAYER_CAMPFIRE_STATE_CREATING - gotta gotta probe mfr");
				Function_243(&Param0, &Param0 + 48, 0);
				if (Param0.f_48 == 20)
				{
					Param0 = *(&Param0 + 12);
				}
				else if (Param0.f_48 >= 21)
				{
					Param1.f_80 = 22;
				}
			}
			else
			{
				Var2.f_4 = 180.0f;
				Function_383(8);
				if (IS_ACTOR_VALID(&Global_54076))
				{
					if (Function_241(StackVal, &Global_54076, Param0) < 20.0f)
					{
						LOG_WARNING("\PLAYER_CAMP PROBLEM!  Our camp position is far from the player resorting to player position");
						SNAP_OBJECT_TO_GROUND(&Global_54076, 5.0f, false, 1092616192);
						Param1.f_80 = 22;
					}
				}
				*(&Param0 + 32) = CREATE_GRINGO_IN_LAYOUT(&Param0 + 24, "Player_Campfire", Function_224(Param0.f_44), Param0, Var2);
				Function_239(0, GET_THIS_SCRIPT_ID());
				*(&Param0 + 12) = Param0;
				if (IS_OBJECT_VALID(&Param0 + 32))
				{
					Function_232(&Param0);
					CLEAR_AREA_OF_GRASS(Param0, 2.0f);
					CLEAR_AREA_OF_BREAKABLE_TREES(Param0, 4.0f);
					CLEAR_AREA_OF_TREE_TYPE(Param0, 4.0f, "");
					if (Param0.f_44 != 4294967294)
					{
						Var4 = Param0;
						Var4 = (Var4 - 1.0f);
						uVar0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Param0 + 24, "Player_Campfire_FX", "amb_campfire_light", Var4);
						if (IS_OBJECT_VALID(&uVar0))
						{
							UNK_0x6745191B(StackVal, &uVar0, Vector(0.0f, 0.0f, 0.0f));
						}
					}
					Function_213(&Param1 + 100);
					Function_207(&Param1 + 100);
					Param1.f_80 = 7;
					return 1;
				}
				LOG_WARNING("PLAYER_CAMPFIRE_STATE_CREATING - gringo object invalud after creating wtf");
			}
			break;
		
		case 0x00000016:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_TIMEOUT!!!");
			Function_229(&Param1);
			Function_1(&Param0, &Param1, 0, 0, 1, 1);
			Param0.f_40 = 0;
			Function_213(&Param1 + 100);
			Param1.f_80 = 0;
			HUD_FADE_IN(1,5f, 1065353216);
			return 1;
			break;
		
		default:
			PRINTSTRING("PLAYER_CREATE_CAMP called with unhandled state!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(Param1.f_80);
			PRINTNL();
			LOG_ERROR("PLAYER_CREATE_CAMP called with unhandled state! Check spew...");
			break;
	}
	return 0;
}

void Function_232(struct<2> Param0) //Position: 0xF4B6 / 62646
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (IS_LAYOUTREF_VALID(&Param0 + 24))
	{
		uVar0 = GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Param0 + 24, "camp_stayout_volume"));
		if (!IS_VOLUME_VALID(&uVar0))
		{
			uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 24, "camp_stayout_volume", 0f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
			if (IS_VOLUME_VALID(&uVar0))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Global_54076, 1);
				uVar1 = GET_MOST_RECENT_MOUNT(&Global_54076);
				if (IS_ACTOR_VALID(&uVar1))
				{
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uVar1, 1);
				}
			}
		}
	}
	if (IS_LAYOUTREF_VALID(&Global_39615))
	{
		uVar2 = GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39615, "camp_no_event_volume"));
		if (!IS_VOLUME_VALID(&uVar2))
		{
			uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, "camp_no_event_volume", 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 20.0f, 100.0f));
			if (IS_VOLUME_VALID(&uVar2))
			{
				DECOR_SET_INT(&uVar2, "script", GET_THIS_SCRIPT_ID());
				Function_233(&uVar2, 0);
			}
		}
	}
	return;
}

int Function_233(var uParam0, int iParam1) //Position: 0xF5F4 / 62964
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_237(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_234(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_234(int iParam0, var uParam1, struct<2> Param2) //Position: 0xF75E / 63326
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_235("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_235(char* cParam0) //Position: 0xF806 / 63494
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_236("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_236(char* cParam0) //Position: 0xF872 / 63602
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_237(int iParam0) //Position: 0xF894 / 63636
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_238(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_241(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_238(iVar0);
						}
					}
					else if (Function_241(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_238(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_238(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_238(int iParam0) //Position: 0xFA02 / 64002
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

void Function_239(int iParam0, bool bParam1) //Position: 0xFA6A / 64106
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &bParam1)
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
			Function_240(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_240(struct<113> Param0) //Position: 0xFAF1 / 64241
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

float Function_241(var uParam0, struct<2> Param1) //Position: 0xFB4F / 64335
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_242(&uParam0);
		Var0 = Function_242(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_242(int iParam0) //Position: 0xFBC6 / 64454
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

bool Function_243(struct<2> Param0, bool bParam2) //Position: 0xFC32 / 64562
{
	bool bVar0;
	var uVar1;
	
	bVar0 = true;
	if (VDIST(Global_54078, Global_26200[1514]) > 25.0f)
	{
		Param0 = Global_26200[1514];
		return 1;
	}
	if (&bParam2)
	{
		AMBIENT_SET_ONESHOT_QUERIES(1);
		if (fParam1 <= 3)
		{
			Function_250(30.0f);
		}
		else if (fParam1 <= 8)
		{
			Function_250(65.0f);
		}
		else if (fParam1 <= 12)
		{
			Function_250(100.0f);
		}
		else
		{
			Function_250(160.0f);
		}
	}
	else if (fParam1 <= 2)
	{
		Function_249(10.0f);
	}
	else if (fParam1 <= 4)
	{
		Function_249(30.0f);
	}
	else if (fParam1 <= 6)
	{
		Function_249(65.0f);
	}
	else if (fParam1 <= 13)
	{
		Function_249(100.0f);
	}
	else if (fParam1 <= 16)
	{
		Function_250(100.0f);
	}
	else
	{
		Function_250(160.0f);
	}
	if (AMBIENT_GET_POINT(&Param0, 0))
	{
		if (!Function_248(StackVal, Param0))
		{
			LOG_WARNING("PLAYER_PROBE_FOR_CAMP Vector is not a good wilderness spot");
			bVar0 = false;
		}
		if (Function_247(StackVal, Param0))
		{
			bVar0 = false;
		}
		uVar1 = Function_246(StackVal, Param0, 1);
		if (StackVal && Function_241(Global_46722[Global_43787] == Function_244(uVar1), &Global_54076, Param0) < 35.0f)
		{
			LOG_WARNING("Current territory doesn't match territory we're trying to spawn in");
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return 1;
	}
	fParam1++;
	Param0 = Vector(0.0f, 0.0f, 0.0f);
	return 0;
}

int Function_244(int iParam0) //Position: 0xFE1E / 65054
{
	return Function_245(iParam0);
}

int Function_245(int iParam0) //Position: 0xFE29 / 65065
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_146(iParam0))
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

var Function_246(struct<2> Param0, bool bParam2) //Position: 0xFE81 / 65153
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

bool Function_247(struct<2> Param0) //Position: 0xFEED / 65261
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar05] + 24))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_248(struct<2> Param0) //Position: 0xFF2D / 65325
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_249(bool bParam0) //Position: 0xFFAC / 65452
{
	LOG_WARNING("Useing STRICT settings when trying to spawn the players camp");
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ELEVATION_FILTER(-10.0f, 10.0f);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(752, 18.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 8.0f, 1);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bParam0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, -4.0f, 1);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 5,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,3f, 4.0f);
	return;
}

void Function_250(bool bParam0) //Position: 0x10053 / 65619
{
	LOG_WARNING("Useing MEDIUM settings when trying to spawn the players camp");
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ELEVATION_FILTER(-15.0f, 15.0f);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1776, 9.0f, 0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bParam0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, -4.0f, 1);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9,9f, 4.0f);
	AMBIENT_ENABLE_BUMP_FILTER(1);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,4f, 4.0f);
	return;
}

bool Function_251() //Position: 0x100ED / 65773
{
	if (HAS_ANIM_SET_LOADED("player_save") && HAS_ACTION_TREE_LOADED("custom/player_save"))
	{
		return 1;
	}
	return 0;
}

void Function_252(struct<61> Param0) //Position: 0x10123 / 65827
{
	if (!Param0.f_60)
	{
		REQUEST_ACTION_TREE("custom/player_save");
	}
	if (!Param0.f_56)
	{
		REQUEST_ANIM_SET("player_save", 1);
	}
	return;
}

bool Function_253(struct<45> Param0) //Position: 0x10166 / 65894
{
	switch (Param1.f_80)
	{
		case 0x00000000:
		case 0x00000015:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_NOT_PRESENT/PLAYER_CAMPFIRE_STATE_PENDING_REMOVAL");
			if (!HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1.0f, 1);
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 1;
			}
			break;
		
		case 0x00000001:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_FADING_OUT");
			if (!HUD_IS_FADING())
			{
				Function_102();
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 5;
			}
			break;
		
		case 0x00000005:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_REMOVING_OLD");
			Function_1(&Param0, &Param1, 0, 0, 1, 1);
			Function_213(&Param1 + 100);
			Function_207(&Param1 + 100);
			Param1.f_80 = 3;
			break;
		
		case 0x00000003:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS");
			Function_252(&Param1);
			if (UNK_0x214AFB8C(&Param1 + 64))
			{
				LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS: CampInterface.CampAsset is valid and should not be!");
			}
			else
			{
				STREAMING_REQUEST_GRINGO(GET_ASSET_ID(Function_224(Param0.f_44), 1));
			}
			Function_213(&Param1 + 100);
			Function_207(&Param1 + 100);
			Param1.f_80 = 4;
			break;
		
		case 0x00000004:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS");
			if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID(Function_224(Param0.f_44), 1)))
			{
				*(&Param1 + 64) = GET_ASSET_ID(Function_224(Param0.f_44), 1);
			}
			if (Function_251())
			{
				Param1.f_60 = 1;
				Param1.f_56 = 1;
			}
			if ((Param1.f_60 && Param1.f_56) && UNK_0x214AFB8C(&Param1 + 64))
			{
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 6;
			}
			else if (Function_214(&Param1 + 100) < 10.0f)
			{
				LOG_ERROR("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS timed out!");
				Param1.f_80 = 22;
			}
			break;
		
		case 0x00000006:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_CREATING");
			if (Function_231(&Param0, &Param1))
			{
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 8;
			}
			break;
		
		case 0x00000007:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_CREATED");
			Function_213(&Param1 + 100);
			Function_207(&Param1 + 100);
			Param1.f_80 = 8;
			break;
		
		case 0x00000008:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_VERIFYING");
			if ((Function_228(Function_4(&Param0)) && DECOR_CHECK_EXIST(Function_4(&Param0), "PropsCreated")) || Function_214(&Param1 + 100) < 10.0f)
			{
				if (Function_214(&Param1 + 100) < 10.0f)
				{
					LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_VERIFYING - PLAYER_CAMPFIRE_STATE_TIMEOUT!");
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SATCHEL_SET_ENABLED(0);
				SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(0, 0);
				Function_261();
				Function_258(1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
				Function_202(&Param0);
				if (Param0.f_44 != 4294967295)
				{
					*(&Param1 + 120) = Function_227(&Param0);
				}
				*(&Param1 + 40) = Function_255(&Param0 + 24, 0, &Global_54076, 1, 0, 0);
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 9;
			}
			break;
		
		case 0x00000009:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_FADING_IN");
			if ((IS_ACTION_NODE_PLAYING(&Global_54076, "player_save/sit") && STREAMING_IS_WORLD_LOADED()) || Function_214(&Param1 + 100) < 10.0f)
			{
				if (Function_214(&Param1 + 100) < 10.0f)
				{
					LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_FADING_IN - PLAYER_CAMPFIRE_STATE_TIMEOUT!");
				}
				Function_389(&Param0 + 40, 1024);
				Function_213(&Param1 + 100);
				Function_207(&Param1 + 100);
				Param1.f_80 = 10;
				Function_254(Param0.f_44);
				HUD_FADE_IN(1,5f, 1065353216);
				return 1;
			}
			break;
		
		case 0x00000016:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_TIMEOUT!!!");
			Function_229(&Param1);
			Function_1(&Param0, &Param1, 0, 0, 1, 1);
			Param0.f_40 = 0;
			Function_213(&Param1 + 100);
			Param1.f_80 = 0;
			HUD_FADE_IN(1,5f, 1065353216);
			return 1;
			break;
		
		default:
			PRINTSTRING("PLAYER_CREATE_CAMP_ELEGANTLY called with unhandled state!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(Param1.f_80);
			PRINTNL();
			LOG_ERROR("PLAYER_CREATE_CAMP_ELEGANTLY called with unhandled state! Check spew...");
			break;
	}
	return 0;
}

void Function_254(bool bParam0) //Position: 0x109BF / 68031
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&Global_54076, 40);
	bVar1 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&Global_54076, 41);
	bVar2 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&Global_54076, 43);
	bVar3 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&Global_54076, 44);
	bVar4 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&Global_54076, 42);
	switch (bParam0)
	{
		case 0xFFFFFFFF:
		case 0x00000000:
			if (bVar0 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 7, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 7, GET_WEAPON_MAX_AMMO(bVar0), 1, 1);
				}
			}
			if (bVar1 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 8, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 8, GET_WEAPON_MAX_AMMO(bVar1), 1, 1);
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 7, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 7, GET_WEAPON_MAX_AMMO(bVar0), 1, 1);
				}
			}
			if (bVar1 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 8, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, 8, GET_WEAPON_MAX_AMMO(bVar1), 1, 1);
				}
			}
			if (bVar2 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 10, 0) != 0.0f)
				{
					bVar5 = GET_WEAPON_MAX_AMMO(bVar2);
					if (bVar5 >= 2.0f)
					{
						bVar5 = 4.0f;
					}
					_ADD_AMMO_OF_TYPE(&Global_54076, 10, bVar5, 1, 1);
				}
			}
			if (bVar3 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 11, 0) != 0.0f)
				{
					bVar5 = GET_WEAPON_MAX_AMMO(bVar3);
					if (bVar5 != 1.0f)
					{
						bVar5 = 5.0f;
					}
					_ADD_AMMO_OF_TYPE(&Global_54076, 11, bVar5, 1, 1);
				}
			}
			if (bVar4 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(&Global_54076, 9, 0) != 0.0f)
				{
					bVar5 = GET_WEAPON_MAX_AMMO(bVar4);
					if (bVar5 != 1.0f)
					{
						bVar5 = 6.0f;
					}
					_ADD_AMMO_OF_TYPE(&Global_54076, 9, bVar5, 1, 1);
				}
			}
			break;
	}
	return;
}

var Function_255(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x10B44 / 68420
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_325(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "player_campfire", 1, 1);
	}
	Function_256(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_256(var uParam0, int iParam1) //Position: 0x10BD0 / 68560
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_257(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0x10BFB / 68603
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-1,624647f, 0,681946f, 0,726832f), Vector(-1,089307f, -45,11383f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,436895f, 0,650063f, -0,456409f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_258(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x10C90 / 68752
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_167();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_312();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, false);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, true);
			AI_IGNORE_ACTOR(&uVar1);
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
				Function_18(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_325(), 2,802597E-45f, Function_18(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_46(19, 1, 0, 0);
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
	if (uParam10 && !Function_63())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_260()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_260()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
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
	if (Function_69(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_259(0x4000000);
	}
	if (Function_69(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_259(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_259(bool bParam0) //Position: 0x10F42 / 69442
{
	bool bVar0;
	
	if (Function_6(bParam0, 1) && Function_6(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_260() //Position: 0x10F76 / 69494
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_261() //Position: 0x11004 / 69636
{
	RESET_PROPS_IN_WORLD();
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	if (!Function_63())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	DESTROY_IMPAIRED_ACTORS();
	DESTROY_GC_OBJECTS(1, 1);
	CLEAN_CACHE_ENTRIES();
	return;
}

int Function_262(struct<41> Param0) //Position: 0x1102B / 69675
{
	int iVar0;
	float fVar1;
	
	if (!Function_6(Param0.f_40, 65536))
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			iVar0 = GET_MOUNT(&Global_54076);
			if (Function_263(&iVar0))
			{
				Param1.f_96 = GET_ACTOR_ENUM(&iVar0);
				if (HAS_ITEM(Function_108(16), &Global_54076))
				{
					return 1;
				}
				return 0;
			}
			return 4294967295;
		}
		iVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		if (Function_263(&iVar0))
		{
			fVar1 = Function_21(&Global_54076, &iVar0);
			if (fVar1 >= 25.0f)
			{
				Param1.f_96 = GET_ACTOR_ENUM(&iVar0);
				if (HAS_ITEM(Function_108(16), &Global_54076))
				{
					return 1;
				}
				return 0;
			}
			return 4294967295;
		}
		return 4294967295;
	}
	return 4294967294;
}

bool Function_263(int iParam0) //Position: 0x110DF / 69855
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_264(struct<49> Param0) //Position: 0x11102 / 69890
{
	bool bVar0;
	
	bVar0 = false;
	if (Function_6(Param0.f_40, 1))
	{
		LOG_WARNING("Got a request to create a camp, lets see if we can");
		if (Function_266(&Param0, &bVar0))
		{
			if (bVar0)
			{
				Param0.f_48 = 0;
				Param0 = Vector(0.0f, 0.0f, 0.0f);
				LOG_WARNING("We can, lets set some bits!");
				Function_16(&Param0 + 40, 2);
				Function_389(&Param0 + 40, 1);
			}
		}
		else
		{
			Param0.f_48 = 0;
			if (Function_6(Param0.f_40, 16))
			{
				LOG_WARNING("We can't, in town!");
				Function_60("Camp_Not_TOWN", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(Param0.f_40, 32))
			{
				LOG_WARNING("We can't, on a mission");
				Function_60("Camp_Not_MISSION", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(Param0.f_40, 64))
			{
				LOG_WARNING("We can't, on a horse??");
				Function_60("Camp_Not_ONHORSE", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(Param0.f_40, 256))
			{
				LOG_WARNING("We can't, no good location nearby");
				Function_60("Camp_Not_PROBEFAIL", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(Param0.f_40, 128))
			{
				LOG_WARNING("We can't, one already exists");
				Function_60("Camp_Not_EXISTS", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(Param0.f_40, 512))
			{
				LOG_WARNING("We can't, wanted");
				Function_60("item_camp_wanted", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else
			{
				LOG_WARNING("We can't, unknown reason");
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			Function_265(&Param0 + 40);
			Function_389(&Param0 + 40, 1);
			Function_389(&Param0 + 40, 2);
		}
	}
	return;
}

void Function_265(int iParam0) //Position: 0x11466 / 70758
{
	Function_389(&iParam0, 16);
	Function_389(&iParam0, 32);
	Function_389(&iParam0, 64);
	Function_389(&iParam0, 256);
	Function_389(&iParam0, 512);
	return;
}

bool Function_266(struct<49> Param0) //Position: 0x11496 / 70806
{
	var uVar0;
	
	Function_265(&Param0 + 40);
	if (Function_120(0, 0, 1, 1))
	{
		Function_16(&Param0 + 40, 32);
		return 0;
	}
	if (IS_PLAYER_IN_COMBAT_WITHIN(0, 15.0f))
	{
		Function_16(&Param0 + 40, 32);
		return 0;
	}
	if (Global_6629)
	{
		Function_16(&Param0 + 40, 16);
		return 0;
	}
	if (Global_99146)
	{
		Function_16(&Param0 + 40, 32);
		return 0;
	}
	if (Function_267(&Global_54076, 0, 1))
	{
		return 0;
	}
	if (((IS_ACTOR_INSIDE_VEHICLE(&Global_54076) || IS_ACTOR_DRIVING_VEHICLE(&Global_54076)) || IS_ACTOR_JACKING_VEHICLE(&Global_54076)) || IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_16(&Param0 + 40, 256);
		return 0;
	}
	if (Global_6646 || Global_6647)
	{
		Function_16(&Param0 + 40, 512);
		return 0;
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		uVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&uVar0) == 1)
			{
				Function_16(&Param0 + 40, 256);
				return 0;
			}
			if (!IS_ACTOR_ON_GROUND(&uVar0))
			{
				Function_16(&Param0 + 40, 256);
				return 0;
			}
		}
	}
	if (!IS_ACTOR_ON_GROUND(&Global_54076))
	{
		Function_16(&Param0 + 40, 256);
		return 0;
	}
	if (!GET_GAME_STATE() != 3)
	{
		return 0;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 0;
	}
	Param0 = Vector(0.0f, 0.0f, 0.0f);
	if (Function_243(&Param0, &Param0 + 48, 1))
	{
		LOG_WARNING("PLAYER_PROBE_FOR_CAMP returned true");
		(&Param0 + 12) = Param0;
		iParam1 = 1;
		AMBIENT_RESET_USED_CELLS();
		return 1;
	}
	if (Param0.f_48 >= 16)
	{
		LOG_WARNING("PLAYER_PROBE_FOR_CAMP false and spawn attempt > 40");
		Function_16(&Param0 + 40, 256);
		AMBIENT_RESET_USED_CELLS();
		return 0;
	}
	LOG_WARNING("PLAYER_PROBE_FOR_CAMP false but spawn attempt < 40");
	iParam1 = 0;
	return 1;
}

bool Function_267(int iParam0, bool bParam1, bool bParam2) //Position: 0x116B4 / 71348
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_270(&iParam0))
	{
		return 1;
	}
	if (Function_269(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_268())
	{
		return 1;
	}
	return 0;
}

bool Function_268() //Position: 0x11778 / 71544
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_269(int iParam0) //Position: 0x1178F / 71567
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_270(int iParam0) //Position: 0x1179B / 71579
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_271(var uParam0, float fParam1) //Position: 0x117AA / 71594
{
	if (!Global_6627)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "iDrunk"))
		{
			if (uParam0 != -1.0f)
			{
				uParam0 = GET_CURRENT_GAME_TIME();
			}
			if (DECOR_GET_INT(&Global_54076, "iDrunk") == 4294967295)
			{
				if (!IS_ACTOR_DRUNK(&Global_54076))
				{
					SET_ACTOR_DRUNK(&Global_54076, 1);
				}
			}
			else if (DECOR_GET_INT(&Global_54076, "iDrunk") >= 0)
			{
				if (!IS_ACTOR_DRUNK(&Global_54076))
				{
					SET_ACTOR_DRUNK(&Global_54076, 1);
				}
				if ((GET_CURRENT_GAME_TIME() - uParam0) <= &fParam1)
				{
					uParam0 = -1.0f;
					DECOR_SET_INT(&Global_54076, "iDrunk", (DECOR_GET_INT(&Global_54076, "iDrunk") - 1));
				}
			}
			else
			{
				uParam0 = -1.0f;
				DECOR_REMOVE(&Global_54076, "iDrunk");
				if (IS_ACTOR_DRUNK(&Global_54076))
				{
					SET_ACTOR_DRUNK(&Global_54076, 0);
				}
			}
		}
	}
	return;
}

void Function_272(var uParam0, var uParam1, int iParam2) //Position: 0x1188D / 71821
{
	if (Function_311())
	{
		Function_305();
	}
	else if (Function_304(1, 0))
	{
		Function_302(&uParam1, &iParam2);
	}
	else if (Function_304(0, 1))
	{
		Function_276(&iParam2);
	}
	if (Function_275(&uParam1, 1, 0))
	{
		Function_274(&uParam0, &uParam1);
	}
	Function_273();
	return;
}

void Function_273() //Position: 0x118DC / 71900
{
	var uVar0;
	
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "SaveCameraObject"))
	{
		uVar0 = DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "SaveCameraObject");
		if (IS_OBJECT_VALID(&uVar0))
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "bSaveCamera"))
			{
				CAMERA_RESET(0);
				DESTROY_OBJECT(&uVar0);
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "SaveCameraObject");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "bSaveCamera");
			}
		}
	}
	return;
}

int Function_274(int iParam0, int iParam1) //Position: 0x11987 / 72071
{
	if (!UI_ISACTIVE("SaveMenuScene"))
	{
		if (Function_6(iParam1, 1))
		{
			Function_16(&iParam0 + 40, 2);
			Function_16(&iParam0 + 40, 65536);
			Function_389(&iParam1, 1);
			return 1;
		}
	}
	return 0;
}

bool Function_275(var uParam0, var uParam1, int iParam2) //Position: 0x119CE / 72142
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam1 && Function_6(uParam0, 1))
	{
		iVar0++;
	}
	if (iParam2 && Function_6(uParam0, 2))
	{
		iVar0++;
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_276(int iParam0) //Position: 0x11A08 / 72200
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping") || iParam0 < 0.0f)
	{
		if (Global_6624)
		{
			DECOR_REMOVE(&Global_54076, "bPlayerSleeping");
			iParam0 = -1.0f;
			return 1;
		}
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1.0f, 0);
				iParam0 = GET_CURRENT_GAME_TIME();
			}
			return 0;
		}
		if (!HUD_IS_FADING())
		{
			if (IS_PLAYER_SIGNED_IN() && !((SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()) || IS_GAME_RESETTING()))
			{
				iParam0 = -1.0f;
				uVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (!UI_ISACTIVE("SaveMenuScene"))
				{
					Function_301();
					Function_279(0);
					Function_261();
					UI_ENTER("SaveMenuScene");
				}
				if (!UI_ISACTIVE("SaveMenu"))
				{
					UI_SEND_EVENT("fileMenuDeviceCheck");
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - iParam0) < 2.0f)
			{
				uVar1 = Function_278();
				if (UI_ISACTIVE("SaveMenuScene"))
				{
					UI_EXIT("SaveMenuScene");
				}
				uVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (IS_GRINGO_VALID(&uVar0))
				{
					GRINGO_DEACTIVATE(&uVar0);
				}
				if (IS_OBJECT_VALID(&uVar1))
				{
					GET_OBJECT_POSITION(&uVar1, &Var2);
					bVar4 = GET_OBJECT_HEADING(&uVar1);
					MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Var2, bVar4, 1, 1, 1);
				}
				Function_46(23, 1, 0, 0);
				Function_301();
				Function_279(0);
				Function_261();
				Function_389(&Global_99144, 1);
				Function_277();
				UI_POP("nCutscenes");
				iParam0 = -1.0f;
				HUD_FADE_IN(1,5f, 1065353216);
			}
			return 1;
		}
	}
	return 1;
}

void Function_277() //Position: 0x11BD5 / 72661
{
	if (DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowCamp"))
	{
		DECOR_REMOVE(&Global_54076, "CanSaveNowCamp");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowBed"))
	{
		DECOR_REMOVE(&Global_54076, "CanSaveNowBed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SAVE_restartFlag"))
	{
		DECOR_REMOVE(&Global_54076, "SAVE_restartFlag");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowAutoSave"))
	{
		DECOR_REMOVE(&Global_54076, "CanSaveNowAutoSave");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		DECOR_REMOVE(&Global_54076, "bPlayerSleeping");
	}
	return;
}

var Function_278() //Position: 0x11CEB / 72939
{
	if (DECOR_CHECK_EXIST(&Global_54076, "SAVE_restartFlag"))
	{
		return DECOR_GET_OBJECT(&Global_54076, "SAVE_restartFlag");
	}
	return "";
}

void Function_279(bool bParam0) //Position: 0x11D2B / 73003
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_293();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_280();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_389(&Global_99144, 1);
		Function_389(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_280() //Position: 0x11D80 / 73088
{
	Function_291();
	Function_290();
	Function_290();
	Function_289();
	Function_289();
	Function_288();
	Function_288();
	Function_287(0);
	Function_287(0);
	Function_285();
	Function_284();
	Function_283();
	Function_282();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_281();
	return;
}

void Function_281() //Position: 0x11DCB / 73163
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

void Function_282() //Position: 0x11ED1 / 73425
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

void Function_283() //Position: 0x11F04 / 73476
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

void Function_284() //Position: 0x12097 / 73879
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

void Function_285() //Position: 0x12250 / 74320
{
	Function_286(&Global_42918, 1, 0);
	return;
}

void Function_286(struct<2317> Param0) //Position: 0x1225E / 74334
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
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_312();
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

struct<8> Function_287(char* cParam0) //Position: 0x1247B / 74875
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_51((50 + iVar4)) + Function_51((183 + iVar4))) + Function_51((90 + iVar4)));
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
	Function_32(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_288() //Position: 0x12522 / 75042
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
		iVar2 = ((Function_51((50 + iVar3) + 15) + Function_51((183 + iVar3) + 15)) + Function_51((90 + iVar3) + 15));
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

struct<8> Function_289() //Position: 0x125AB / 75179
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
			iVar2 = ((Function_51((50 + iVar3) + 8) + Function_51((183 + iVar3) + 8)) + Function_51((90 + iVar3) + 8));
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

struct<8> Function_290() //Position: 0x12642 / 75330
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
		iVar2 = ((Function_51((50 + iVar3)) + Function_51((183 + iVar3))) + Function_51((90 + iVar3)));
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

void Function_291() //Position: 0x126C1 / 75457
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_292(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_32(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_292(int iParam0, bool bParam1, int iParam2) //Position: 0x126FE / 75518
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
	Function_44(iParam0, bParam1, 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_33(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_293() //Position: 0x1290A / 76042
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_63())
	{
		Function_298(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_298(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_294(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_294(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_145(StackVal, Var0))
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

struct<8> Function_294(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x129C1 / 76225
{
	int iVar0;
	
	iVar0 = Function_297(&uParam2, &fParam3);
	if (Function_296(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_16(&Global_99144, 1);
			Function_389(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_16(&Global_99144, 2);
			Function_389(&Global_99144, 1);
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
		Function_16(&Global_99144, 2);
		Function_389(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_295();
	return StackVal, Function_295();
}

struct<8> Function_295() //Position: 0x12AB9 / 76473
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_296(int iParam0) //Position: 0x12AC3 / 76483
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_297(bool bParam0, bool bParam1) //Position: 0x12AD9 / 76505
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
				fVar2 = Function_386(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_386(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_296(iVar0) && !&bParam1)
	{
		iVar0 = Function_297(&bParam0, 1);
	}
	return iVar0;
}

struct<8> Function_298(float fParam0, int iParam1) //Position: 0x12BA5 / 76709
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_300(&Global_54076, &Var3);
	if (!Function_299(Global_46760[0]))
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
	if (!Function_299(Global_46760[2]))
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
	if (!Function_299(Global_46760[1]))
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
	if (!Function_299(Global_46796[1]))
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
	if (!Function_299(Global_46796[3]))
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
	if (!Function_299(Global_46796[2]))
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
	if (!Function_299(Global_46796[4]))
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
	if (!Function_299(Global_46816[0]))
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
	if (!Function_299(Global_46816[1]))
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
	if (!Function_299(Global_46816[2]))
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
	if (!Function_299(Global_46838[0]))
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
	if (!Function_299(Global_46850[0]))
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
	if (!Function_299(Global_46850[1]))
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
	if (!Function_299(Global_46850[2]))
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
	if (!Function_299(Global_46866[0]))
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
	if (!Function_299(Global_46866[1]))
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
	if (!Function_299(Global_46866[2]))
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
	if (!Function_299(Global_46894[2]))
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
	if (!Function_299(Global_46894[3]))
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
	if (!Function_299(Global_46894[0]))
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
	if (!Function_299(Global_46914[0]))
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
	if (!Function_299(Global_46926[2]))
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
	if (!Function_299(Global_46926[1]))
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
	if (!Function_299(Global_46926[0]))
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
	if (!Function_299(Global_46838[1]))
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
	if (!Function_299(Global_46894[1]))
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
	Function_16(&Global_99144, 2);
	Function_389(&Global_99144, 1);
	iParam1 = 0;
	if (Function_145(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_299(int iParam0) //Position: 0x133D1 / 78801
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_6(bVar0, 0x1000000) || Function_6(bVar0, 0x2000000)) || Function_6(bVar0, 0x4000000)) || !Function_6(bVar0, 0x10000000));
}

void Function_300(var uParam0, var uParam1) //Position: 0x1340C / 78860
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

void Function_301() //Position: 0x1341B / 78875
{
	ADVANCE_TIME_HOURS(6.0f);
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	return;
}

int Function_302(int iParam0, int iParam1) //Position: 0x1342E / 78894
{
	var uVar0;
	var uVar1;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping") || iParam1 < 0.0f)
	{
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1.0f, 1);
				iParam1 = GET_CURRENT_GAME_TIME();
			}
			return 0;
		}
		if (!HUD_IS_FADING())
		{
			if (IS_PLAYER_SIGNED_IN() && !((SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()) || IS_GAME_RESETTING()))
			{
				iParam1 = -1.0f;
				if (!UI_ISACTIVE("SaveMenuScene"))
				{
					Function_239(0, 0);
					Function_16(&iParam0, 1);
					Function_303(StackVal, 15, Global_54078);
					Function_301();
					Function_279(0);
					UI_ENTER("SaveMenuScene");
				}
				if (!UI_ISACTIVE("SaveMenu"))
				{
					UI_SEND_EVENT("fileMenuDeviceCheck");
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - iParam1) < 2.0f)
			{
				uVar0 = Function_278();
				if (UI_ISACTIVE("SaveMenuScene"))
				{
					UI_EXIT("SaveMenuScene");
				}
				uVar1 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (IS_GRINGO_VALID(&uVar1))
				{
					GRINGO_DEACTIVATE(&uVar1);
				}
				Function_301();
				Function_389(&Global_99144, 1);
				Function_277();
				UI_POP("nCutscenes");
				HUD_FADE_IN(1,5f, 1065353216);
				iParam1 = -1.0f;
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

void Function_303(int iParam0, struct<2> Param1) //Position: 0x1359F / 79263
{
	if (!Function_296(iParam0))
	{
		return;
	}
	Global_26200[iParam014] = Param1;
	Global_26200[iParam014].f_52 = Global_43787;
	Global_26200[iParam014].f_40 = 5;
	return;
}

bool Function_304(bool bParam0, bool bParam1) //Position: 0x135D1 / 79313
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "CanSaveNowCamp"))
		{
			if (DECOR_GET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowCamp"))
			{
				iVar0++;
			}
		}
	}
	if (bParam1)
	{
		if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "CanSaveNowBed"))
		{
			if (DECOR_GET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowBed"))
			{
				iVar0++;
			}
		}
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_305() //Position: 0x13663 / 79459
{
	int iVar0;
	int iVar1;
	
	if (Global_6624)
	{
		return 0;
	}
	if (UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		return 0;
	}
	if ((Function_384(65536) || Function_310()) && !Function_63())
	{
		Function_309(IS_GOLDEN_GUNS_ON());
	}
	Function_46(22, 1, 0, 0);
	Function_277();
	iVar0 = 0;
	Function_293();
	Global_131719 = GET_CURRENT_GAME_TIME();
	iVar1 = Function_306(iVar0);
	Function_389(&Global_99144, 1);
	Function_389(&Global_99144, 2);
	return iVar1;
}

int Function_306(bool bParam0) //Position: 0x136E0 / 79584
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_314("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_63())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_307() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_6667[Global_1096628] + 16);
		}
	}
	if (bParam0 != 4)
	{
		Function_280();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_307() //Position: 0x13747 / 79687
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	bVar0 = false;
	while (bVar0 <= 38)
	{
		if (Function_308(bVar0))
		{
			if (bVar1 == 4294967295)
			{
				bVar1 = bVar0;
			}
			else if (Global_116927[bVar06].f_40 < Global_116927[bVar16].f_40)
			{
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	if (Global_21684[Function_211(Global_10966)7].f_32 < Global_116927[bVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[bVar143] + 4);
}

bool Function_308(bool bParam0) //Position: 0x137E4 / 79844
{
	if (Global_116927[bParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_309(var uParam0) //Position: 0x137F9 / 79865
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if (bVar0 <= 21)
		{
			SET_WEAPON_GOLD(&Global_54076, bVar0, &uParam0);
		}
		bVar0++;
	}
	return;
}

bool Function_310() //Position: 0x13825 / 79909
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_6(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_311() //Position: 0x13855 / 79957
{
	if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave"))
	{
		if (DECOR_GET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave"))
		{
			return 1;
		}
	}
	return 0;
}

int Function_312() //Position: 0x1389C / 80028
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_313() //Position: 0x138B1 / 80049
{
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_ACTOR_MAX_HEALTH(&Global_54076, 35.0f);
	SET_ACTOR_HEALTH(&Global_54076, 35.0f);
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(18, 2, 0,4f);
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(17, 2, 0,4f);
	SET_ACTOR_LOW_DROP_DAMAGE(&Global_54076, 10.0f);
	SET_ACTOR_MEDIUM_DROP_DAMAGE(&Global_54076, 30.0f);
	SET_ACTOR_HIGH_DROP_DAMAGE(&Global_54076, 45.0f);
	SET_PLAYER_COMBATMODE_OVERRIDE(1);
	return;
}

bool Function_314(bool bParam0) //Position: 0x13913 / 80147
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_315(int iParam0) //Position: 0x13935 / 80181
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_316())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_316() //Position: 0x1396E / 80238
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

void Function_317() //Position: 0x13993 / 80275
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_77754 - 1))
	{
		Global_77754[iVar0] = -1.0f;
		strcpy(&(Global_77766[iVar016]), "", 8);
		strcpy(&Global_77766[iVar016] + 16, "", 8);
		strcpy(&Global_77766[iVar016] + 32, "", 32);
		Global_77766[iVar016].f_96 = 4294967295;
		Global_77766[iVar016].f_104 = 4294967295;
		Global_77766[iVar016].f_116 = 4294967295;
		Global_77766[iVar016].f_120 = 4294967295;
		iVar0++;
	}
	return;
}

var Function_318(int iParam0) //Position: 0x13A10 / 80400
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

int Function_319(int iParam0, char* cParam1) //Position: 0x13A9F / 80543
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
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, (&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

var Function_320(int iParam0) //Position: 0x13DF6 / 81398
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

void Function_321() //Position: 0x13E99 / 81561
{
	SET_SAGPLAYER_STAT_FLOAT(0, Global_54086[372]);
	SET_SAGPLAYER_STAT_FLOAT(1, Global_54086[373]);
	SET_SAGPLAYER_STAT_FLOAT(2, Global_54086[374]);
	SET_SAGPLAYER_STAT_FLOAT(3, Global_54086[375]);
	SET_SAGPLAYER_STAT_FLOAT(4, Global_54086[376]);
	SET_SAGPLAYER_STAT_FLOAT(5, Global_54086[377]);
	SET_SAGPLAYER_STAT_FLOAT(6, Global_54086[378]);
	SET_SAGPLAYER_STAT_FLOAT(7, Global_54086[381]);
	SET_SAGPLAYER_STAT_FLOAT(8, Global_54086[382]);
	SET_SAGPLAYER_STAT_FLOAT(9, Global_54086[383]);
	SET_SAGPLAYER_STAT_FLOAT(10, Global_54086[387]);
	SET_SAGPLAYER_STAT_FLOAT(11, Global_54086[388]);
	SET_SAGPLAYER_STAT_FLOAT(12, Global_54086[394]);
	SET_SAGPLAYER_STAT_INT(0, Global_54086[385]);
	SET_SAGPLAYER_STAT_INT(1, Global_54086[379]);
	SET_SAGPLAYER_STAT_INT(2, Global_54086[380]);
	SET_SAGPLAYER_STAT_INT(3, Global_54086[44]);
	SET_SAGPLAYER_STAT_INT(4, Global_54086[392]);
	SET_SAGPLAYER_STAT_INT(6, Global_54086[391]);
	SET_SAGPLAYER_STAT_INT(5, Global_54086[393]);
	SET_SAGPLAYER_STAT_INT(7, Global_54086[395]);
	return;
}

void Function_322(bool bParam0) //Position: 0x13F9F / 81823
{
	if (bParam0)
	{
		Function_324(1);
	}
	else
	{
		Function_323(1);
	}
	return;
}

void Function_323(int iParam0) //Position: 0x13FB5 / 81845
{
	Function_77(&Global_123163 + 84, iParam0);
	return;
}

void Function_324(var uParam0) //Position: 0x13FC6 / 81862
{
	Function_82(&Global_123163 + 84, uParam0);
	return;
}

var Function_325() //Position: 0x13FD7 / 81879
{
	int iVar0;
	
	return &iVar0;
}

bool Function_326(bool bParam0, bool bParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x13FE0 / 81888
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
		Function_15(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_330())
		{
			return "";
		}
	}
	if (!Function_329())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_223();
	if ((bVar1 && iParam6) && bParam0)
	{
		Function_328(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_328(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_328(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_328(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_327(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_327(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_325(), bVar0, Vector(&iParam2, &iParam3, &fParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_325(), 993, Vector(&iParam2, &iParam3, &fParam4), Vector(0.0f, &iParam5, 0.0f));
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
				Var8 = Vector(&iParam2, &iParam3, &fParam4);
				if (!Function_145(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (bParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_325(), bVar0, Vector(&iParam2, &iParam3, &fParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_325(), 993, Vector(&iParam2, &iParam3, &fParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_182(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_327(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1433D / 82749
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

struct<8> Function_328(bool bParam0) //Position: 0x143DD / 82909
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

bool Function_329() //Position: 0x14406 / 82950
{
	if (Function_17() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

bool Function_330() //Position: 0x1441C / 82972
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_331() //Position: 0x1443C / 83004
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_53362)
	{
		Global_53362[iVar0] = 0;
		iVar0++;
	}
	Global_53362.f_88 = 1177;
	Global_53362.f_92 = 0;
	Global_53362.f_96 = 0;
	Global_53362.f_100 = 20;
	Global_53362.f_104 = 0;
	Global_53362.f_108 = 25;
	Global_53362.f_120 = 3;
	*(&Global_53362 + 144) = CREATE_LAYOUT("RentAPosse");
	*(&Global_53362 + 152) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_53362 + 144, "rentalAllies"));
	*(&Global_53362 + 160) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_53362 + 144, "rentalAlliesMounted"));
	*(&Global_53362 + 168) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_53362 + 144, "rentalEnemies"));
	*(&Global_53362 + 176) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_53362 + 144, "rentalNeutral"));
	return;
}

void Function_332(bool bParam0) //Position: 0x1452F / 83247
{
	if (bParam0)
	{
		Function_16(&Global_21369 + 72 + 32, 4);
	}
	else
	{
		Function_389(&Global_21369 + 72 + 32, 4);
	}
	return;
}

bool Function_333(int iParam0) //Position: 0x14553 / 83283
{
	if (!Function_335(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_334(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_334(int iParam0, int iParam1) //Position: 0x145A4 / 83364
{
	int iVar0;
	
	if (!Function_335(iParam0))
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

bool Function_335(int iParam0) //Position: 0x145D1 / 83409
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_336(bool bParam0, bool bParam1) //Position: 0x145E7 / 83431
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_108(bParam0), Function_312()) >= 0)
		{
			DELETE_ITEM(Function_108(bParam0), Function_312(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_108(bParam0), Function_312(), 1);
	return 1;
}

bool Function_337(int iParam0, int iParam1) //Position: 0x1462F / 83503
{
	int iVar0;
	
	if (!Function_335(iParam0))
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

void Function_338(int iParam0) //Position: 0x1468E / 83598
{
	int iVar0;
	int iVar1;
	
	if (!Function_335(iParam0))
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
		Function_339(78, 1, 1);
		if (!Function_62(Global_119935, 64))
		{
			Function_54(&Global_54076, 64, 2, 0);
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
		DECOR_SET_BOOL(&Global_54076, "zMarston", true);
		DECOR_SET_BOOL(&Global_54076, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_339(bool bParam0, bool bParam1, int iParam2) //Position: 0x147C4 / 83908
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_108(bParam0), Function_312()) == 0)
		{
			ADD_ITEM(Function_108(bParam0), Function_312(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_108(bParam0), Function_312(), &iParam2);
	return 1;
}

bool Function_340(int iParam0) //Position: 0x14812 / 83986
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_341(int iParam0) //Position: 0x14821 / 84001
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_364(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_42833)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_42265)
			{
				if (Function_363(iVar6) && !Function_333(iVar6))
				{
					if (iParam0 == Global_42265[iVar69].f_64)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_362();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_361(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_358();
				TARGET_JOURNAL_ENTRY(iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (&Global_99725[iVar143] + 36 == iVar2)
			{
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 272))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 272);
				}
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 280))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 280);
				}
				if (!Function_6(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_348(&(Global_99725[iVar143]), iVar3))
					{
						Function_16(&Global_99725[iVar143] + 228, 64);
						Function_344(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_342(&(Global_99725[iVar143]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
				{
					DESTROY_OBJECT(&Global_99725[iVar143] + 288);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_342(struct<229> Param0) //Position: 0x149DB / 84443
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_6(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_325(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_343(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_343(struct<217> Param0) //Position: 0x14AAB / 84651
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_325(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_146(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_325(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_233(&uVar1, 0);
	return;
}

void Function_344(struct<153> Param0) //Position: 0x14B69 / 84841
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_346(Function_347(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_345(iParam1)) || Global_116927[iParam16].f_20 != 1)
	{
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
		UNK_0xFF3DB575(&Param0 + 280, 1);
		SET_BLIP_PRIORITY(&Param0 + 280, true);
		SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, fVar2);
		Global_116927[iParam16].f_20 = 1;
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
	}
	SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
	SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, fVar2);
	SET_BLIP_PRIORITY(&Param0 + 272, 3);
	return;
}

int Function_345(int iParam0) //Position: 0x14CD8 / 85208
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_346(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x14D04 / 85252
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_347(int iParam0) //Position: 0x14D25 / 85285
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_348(struct<249> Param0) //Position: 0x14D3A / 85306
{
	if (Function_6(Global_99725[bParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_347(bParam1))
	{
		Function_16(&Global_99725[bParam143] + 228, 64);
		return 1;
	}
	if ((Function_357(bParam1) || Function_308(bParam1)) || Function_356(bParam1))
	{
		return 0;
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			return 0;
		}
	}
	if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return 0;
	}
	if (Function_146(Param0.f_216))
	{
		if (Function_132(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_355(bParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_354(&Param0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(&Param0 + 312))
			{
				return 0;
			}
		}
	}
	if (!Function_349(&Param0, bParam1))
	{
		return 0;
	}
	Function_16(&Global_99725[bParam143] + 228, 64);
	return 1;
}

bool Function_349(struct<265> Param0) //Position: 0x14E6A / 85610
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_353(&Param0 + 260, 4))
		{
			if (!Function_352(iParam1))
			{
				return 0;
			}
		}
		if (Function_353(&Param0 + 260, 1))
		{
			if (!Function_308(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_353(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_211(Param0.f_264);
			if (Function_350(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_353(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_350(Param0.f_252))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_353(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_353(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_353(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_353(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_353(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_353(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_350(int iParam0) //Position: 0x14FCB / 85963
{
	if (!Function_100(iParam0))
	{
		return 0;
	}
	if (!Function_351(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_351(int iParam0) //Position: 0x14FEF / 85999
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_352(int iParam0) //Position: 0x15004 / 86020
{
	return Global_116927[iParam06].f_16;
}

bool Function_353(var uParam0, int iParam1) //Position: 0x15014 / 86036
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_354(struct<237> Param0) //Position: 0x15031 / 86065
{
	if (!Param0.f_236)
	{
		if (Function_63())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_355(int iParam0) //Position: 0x15100 / 86272
{
	if (!Function_69(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_6(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_62(Global_119935, 0x8000000))
			{
				Function_54(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

int Function_356(int iParam0) //Position: 0x1515B / 86363
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_357(int iParam0) //Position: 0x15170 / 86384
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_358() //Position: 0x15185 / 86405
{
	if (Function_335(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_360(Global_42827);
			*(&Global_42827 + 8) = Function_359(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_360(Global_42827);
			*(&Global_42827 + 8) = Function_359(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_359(int iParam0, int iParam1) //Position: 0x15205 / 86533
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
					if (Function_210(6, 0) || Function_210(12, 0))
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
					if (Function_308(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_210(5, 0))
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
					if (Function_308(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_308(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_308(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_308(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_210(26, 0))
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
					if (Function_308(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_308(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_308(27) && iVar16)
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
					if (Function_308(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_308(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_308(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_308(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_210(17, 0) && iVar13)
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
					if (Function_308(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_210(6, 0) && Function_308(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_308(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_210(9, 0) && Function_308(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_308(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_210(8, 0) && iVar17)
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
	if (Function_145(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_145(StackVal, vVar2))
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
	if (!Function_145(StackVal, vVar2))
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

int Function_360(int iParam0) //Position: 0x15E68 / 89704
{
	int iVar0;
	int iVar1;
	
	if (!Function_335(iParam0))
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

int Function_361(int iParam0) //Position: 0x15EB7 / 89783
{
	if (Global_42827 == iParam0)
	{
		return 1;
	}
	if (!Function_335(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_333(iParam0))
	{
		return 0;
	}
	if (!Function_363(iParam0))
	{
		return 0;
	}
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_362() //Position: 0x15F20 / 89888
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_363(int iParam0) //Position: 0x15F45 / 89925
{
	if (!Function_335(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_334(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_364(int iParam0) //Position: 0x15F97 / 90007
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_362();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_365() //Position: 0x15FD1 / 90065
{
	Function_375();
	Function_374();
	if (Function_63())
	{
		Function_372();
		Function_371();
	}
	else
	{
		Function_369();
		Function_368();
	}
	Function_366();
	Function_321();
	return;
}

void Function_366() //Position: 0x15FF8 / 90104
{
	bool bVar0;
	char* cVar1[32];
	char* cVar9[32];
	int iVar17;
	int iVar18;
	struct<8> Var19;
	char* cVar27[32];
	
	bVar0 = false;
	while (bVar0 <= 31)
	{
		strcpy(&cVar1, "OUT_", 32);
		stradd(&cVar1, &Global_42265[bVar09] + 32, 32);
		if (StackVal && !Function_6(Function_6(StackVal, 2), 4))
		{
			strcpy(&cVar9, "out_", 32);
			stradd(&cVar9, &Global_42265[bVar09] + 32, 32);
			stradd(&cVar9, "_hint", 32);
			Global_42265[bVar09].f_64 = CREATE_JOURNAL_ENTRY(&cVar1, 4, bVar0, 0);
			if ((Global_42265[bVar09].f_64 == 4294967295 && Global_42265[bVar09].f_64 == 0) && Global_42265[bVar09].f_28 < 0)
			{
				iVar17 = 0;
				while (iVar17 <= Global_42265[bVar09].f_28)
				{
					iVar18 = (StackVal && Function_367(iVar17));
					Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar9 };
					straddi(&Var19, iVar17 + 1, 32);
					if (iVar18 == 0)
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bVar09].f_64, &Var19, 0, 3, false);
					}
					else
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bVar09].f_64, &Var19, 0, 4, false);
					}
					iVar17++;
				}
				APPEND_JOURNAL_ENTRY(Global_42265[bVar09].f_64, 0);
			}
		}
		else if (Function_6(StackVal, 4))
		{
			strcpy(&cVar27, "out_", 32);
			stradd(&cVar27, &Global_42265[bVar09] + 32, 32);
			stradd(&cVar27, "_desc", 32);
			Global_42265[bVar09].f_64 = CREATE_JOURNAL_ENTRY(&cVar1, 4, bVar0, 0);
			if (Global_42265[bVar09].f_64 == 4294967295 && Global_42265[bVar09].f_64 == 0)
			{
				PREPEND_JOURNAL_ENTRY(Global_42265[bVar09].f_64, true);
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bVar09].f_64, &cVar27, 0, 2, false);
				SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bVar09].f_64, -1.0f, false, 0);
			}
		}
		bVar0++;
	}
	return;
}

var Function_367(bool bParam0) //Position: 0x161A9 / 90537
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_368() //Position: 0x161B5 / 90549
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (&Global_119632[iVar03] == 4294967295 && &Global_119632[iVar03] == 0)
		{
			PRINTSTRING("Loading Completed Quests");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[&Global_119632[iVar03] + 843] + 4);
			PRINTNL();
			Global_119632[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(&(Global_119632[iVar03]), 2, &Global_119632[iVar03] + 8, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(&(Global_119632[iVar03]), 1);
			memcpy(&cVar1, StackVal, StackVal, StackVal, (&Global_99725[&Global_119632[iVar03] + 843] + 4), 8);
			if (&Global_119632[iVar03] + 8 == 23)
			{
				PRINTSTRING("Userint is ");
				PRINTSTRING(INT_TO_STRING(Global_116927[276].f_24));
				PRINTNL();
				if (Global_116927[276].f_24 == 1)
				{
					PRINTSTRING("STATS: Setting positive outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE1", 32);
				}
				else if (Global_116927[276].f_24 == 2)
				{
					PRINTSTRING("STATS: Setting negative outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE2", 32);
				}
			}
			else if (&Global_119632[iVar03] + 8 == 68)
			{
				PRINTSTRING("Userint is ");
				PRINTSTRING(INT_TO_STRING(Global_116927[706].f_24));
				PRINTNL();
				if (Global_116927[716].f_24 == 1)
				{
					PRINTSTRING("STATS: Setting positive outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE1", 32);
				}
				else if (Global_116927[716].f_24 == 2)
				{
					PRINTSTRING("STATS: Setting negative outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE2", 32);
				}
			}
			else if (&Global_119632[iVar03] + 8 == 60)
			{
				PRINTSTRING("Userint is ");
				PRINTSTRING(INT_TO_STRING(Global_116927[636].f_24));
				PRINTNL();
				if (Global_116927[636].f_24 == 1)
				{
					PRINTSTRING("STATS: Setting positive outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE1", 32);
				}
				else if (Global_116927[636].f_24 == 2)
				{
					PRINTSTRING("STATS: Setting negative outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE2", 32);
				}
			}
			else if (&Global_119632[iVar03] + 8 == 15)
			{
				PRINTSTRING("Userint is ");
				PRINTSTRING(INT_TO_STRING(Global_116927[206].f_24));
				PRINTNL();
				if (Global_116927[206].f_24 == 1)
				{
					PRINTSTRING("STATS: Setting positive outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE1", 32);
				}
				else if (Global_116927[206].f_24 == 2)
				{
					PRINTSTRING("STATS: Setting negative outcome.");
					PRINTNL();
					stradd(&cVar1, "_COMPLETE2", 32);
				}
			}
			else if (&Global_119632[iVar03] + 8 == 38)
			{
				PRINTSTRING("STATS: Setting journal entry for group I Know You");
				PRINTNL();
				stradd(&cVar1, "n_COMPLETE", 32);
			}
			else if (&Global_119632[iVar03] + 8 == 40)
			{
				return;
			}
			if (&Global_119632[iVar03] + 8 == 42)
			{
				return;
			}
			if (&Global_119632[iVar03] + 8 == 28)
			{
				PRINTSTRING("STATS: Setting journal entry for group I Know You");
				PRINTNL();
				stradd(&cVar1, "n_COMPLETE", 32);
			}
			else if (&Global_119632[iVar03] + 8 == 29)
			{
				return;
			}
			if (&Global_119632[iVar03] + 8 == 30)
			{
				return;
			}
			if (&Global_119632[iVar03] + 8 == 31)
			{
				return;
			}
			PRINTSTRING("STATS: Setting normal outcome.");
			PRINTNL();
			stradd(&cVar1, "n_COMPLETE", 32);
			PRINTSTRING("Appending this string: ");
			PRINTSTRING(&cVar1);
			PRINTSTRING(" for ");
			PRINTSTRING(&Global_99725[&Global_119632[iVar03] + 843] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(&(Global_119632[iVar03]), &cVar1, 0, 2, !&Global_119632[iVar03] + 16);
		}
		iVar0++;
	}
	return;
}

void Function_369() //Position: 0x16777 / 92023
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (&Global_119329[iVar03] == 4294967295 && &Global_119329[iVar03] == 0)
		{
			PRINTSTRING("Loading Active Quests");
			PRINTNL();
			Global_119329[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(&(Global_119329[iVar03]), 2, &Global_119329[iVar03] + 8, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(&(Global_119329[iVar03]), 0);
			iVar1 = &Global_119329[iVar03] + 8;
			iVar2 = &Global_119329[iVar03] + 8;
			while (&Global_99725[iVar243] + 36 == iVar1)
			{
				Function_370(&(Global_99725[iVar243]), iVar2, &Global_119329[iVar03] + 16);
				iVar2++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_370(struct<225> Param0) //Position: 0x16855 / 92245
{
	bool bVar0;
	int iVar1;
	
	switch (bParam1)
	{
		case 0x0000004A:
			if (Function_308(bParam1))
			{
				if (Global_116927[756].f_24 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Wronged3a_OBJ", 0, 4, !bParam2);
				}
				else if (Global_116927[756].f_24 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Wronged2a_OBJ", 0, 4, !bParam2);
				}
				if (Global_116927[746].f_28 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Wronged3_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x0000004B:
			if (Function_308(bParam1))
			{
				if (Global_116927[746].f_28 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Param0.f_224, STRING_TO_HASH("Wronged3_OBJ"), 4, 1);
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Wronged4_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000027:
			if (Function_308(bParam1))
			{
				if (Global_116927[406].f_24 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "IKnowYou2b_OBJ", 0, 4, !bParam2);
				}
				else if (Global_116927[406].f_24 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "IKnowYou2a_OBJ", 0, 4, !bParam2);
				}
			}
			break;
		
		case 0x00000029:
			if (Function_308(bParam1))
			{
				if (Global_116927[416].f_24 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "IKnowYou4a_OBJ", 0, 4, !bParam2);
				}
				else if (Global_116927[416].f_24 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "IKnowYou4b_OBJ", 0, 4, !bParam2);
				}
			}
			break;
		
		case 0x0000003E:
			if (Function_308(bParam1))
			{
				if (Global_116927[636].f_24 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Prohibit3_OBJ", 0, 3, !bParam2);
				}
				else if (Global_116927[636].f_24 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Prohibit3a_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000046:
			if (Function_308(bParam1))
			{
				if (Global_116927[716].f_24 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Water3_OBJ", 0, 3, !bParam2);
				}
				else if (Global_116927[716].f_24 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Water3b_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_308(bParam1))
			{
				if (Global_116927[26].f_28 != 0 || Global_116927[26].f_28 != 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "abandoned7_OBJ", 0, 3, !bParam2);
				}
				else if (Global_116927[26].f_28 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "abandoned4a_OBJ", 0, 4, !bParam2);
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_99725[bParam143] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "abandoned7_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000037:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "opiate2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000000A:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "California1_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000000B:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "California2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000000C:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "California3_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001C:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Funnyman1_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001D:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Funnyman2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001E:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Funnyman3_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001F:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Funnyman4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x00000010:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Cannibal2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x00000012:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Cannibal4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x00000034:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Lights4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000002E:
			if (Function_308(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "KillerPimp4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		default:
			if (Function_308(bParam1))
			{
				bVar0 = false;
				if (bParam1 + 1 <= 77)
				{
					if (&Global_99725[bParam1 + 143] + 36 != &Param0 + 36 && Function_308(bParam1 + 1))
					{
						bVar0 = true;
					}
				}
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				if (bVar0)
				{
					iVar1 = 4;
					PRINTSTRING("Using checked box.");
					PRINTNL();
				}
				else
				{
					iVar1 = 3;
					PRINTSTRING("Using unchecked box.");
					PRINTNL();
				}
				PRINTSTRING("Appending string for: ");
				PRINTSTRING(&Global_99725[bParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, &Param0 + 76, 0, iVar1, !bParam2);
			}
			break;
	}
	return;
}

void Function_371() //Position: 0x178A1 / 96417
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 < (38 - 1))
	{
		if (&Global_119632[iVar03] == 4294967295 && &Global_119632[iVar03] == 0)
		{
			PRINTSTRING("Loading Completed Quests");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[&Global_119632[iVar03] + 843] + 4);
			PRINTNL();
			Global_119632[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(&(Global_119632[iVar03]), 2, &Global_119632[iVar03] + 8, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(&(Global_119632[iVar03]), 1);
			memcpy(&cVar1, StackVal, StackVal, StackVal, *(&Global_99725[&Global_119632[iVar03] + 843] + 4), 8);
			stradd(&cVar1, "n_COMPLETE", 32);
			APPEND_JOURNAL_ENTRY_DETAIL(&(Global_119632[iVar03]), &cVar1, 0, 2, !&Global_119632[iVar03] + 16);
		}
		iVar0++;
	}
	return;
}

void Function_372() //Position: 0x179B2 / 96690
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < (38 - 1))
	{
		if (&Global_119329[iVar03] == 4294967295 && &Global_119329[iVar03] == 0)
		{
			PRINTSTRING("Loading Active Quests");
			PRINTNL();
			Global_119329[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(&(Global_119329[iVar03]), 2, &Global_119329[iVar03] + 8, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(&(Global_119329[iVar03]), 0);
			iVar1 = &Global_119329[iVar03] + 8;
			iVar2 = &Global_119329[iVar03] + 8;
			while (&Global_99725[iVar243] + 36 == iVar1)
			{
				Function_373(&(Global_99725[iVar243]), iVar2, &Global_119329[iVar03] + 16);
				iVar2++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_373(struct<225> Param0) //Position: 0x17A92 / 96914
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iParam1)
	{
		case 0x0000000D:
			if (Function_308(iParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[iParam143] + 4);
				PRINTNL();
				if (Function_308(14))
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 3;
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Bonnie2_OBJ", 0, 4, !bParam2);
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Bonnie2a_OBJ", 0, iVar0, !bParam2);
			}
			break;
		
		case 0x00000011:
			if (Function_308(iParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[iParam143] + 4);
				PRINTNL();
				if (Function_308(18))
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 3;
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Marshal3a_OBJ", 0, 4, !bParam2);
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, "Marshal3b_OBJ", 0, iVar0, !bParam2);
			}
			break;
		
		default:
			if (Function_308(iParam1))
			{
				bVar1 = false;
				if (iParam1 + 1 <= 77)
				{
					if (&Global_99725[iParam1 + 143] + 36 != &Param0 + 36 && Function_308(iParam1 + 1))
					{
						bVar1 = true;
					}
				}
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_99725[iParam143] + 4);
				PRINTNL();
				if (bVar1)
				{
					iVar2 = 4;
					PRINTSTRING("Using checked box.");
					PRINTNL();
				}
				else
				{
					iVar2 = 3;
					PRINTSTRING("Using unchecked box.");
					PRINTNL();
				}
				PRINTSTRING("Appending string for: ");
				PRINTSTRING(&Global_99725[iParam143] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(Param0.f_224, &Param0 + 76, 0, iVar2, !bParam2);
			}
			break;
	}
	return;
}

void Function_374() //Position: 0x17D2B / 97579
{
	SET_PLAYER_DEADEYE_POINTS(0, Global_131716, 0);
	return;
}

void Function_375() //Position: 0x17D3A / 97594
{
	Function_376(&Global_42918);
	return;
}

void Function_376(struct<2317> Param0) //Position: 0x17D46 / 97606
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	
	bVar4 = false;
	while (bVar4 < (39 - 1))
	{
		SET_WEAPONENUM_LOCKED(bVar4, (*&Param0 + 2320)[bVar4]);
		bVar4++;
	}
	uVar5 = Function_312();
	if (IS_ACTOR_VALID(&uVar5))
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_1060 - 1))
		{
			bVar6 = IS_ITEM_WEAPON_BY_CRC((*&Param0 + 92)[iVar0]);
			if (bVar6)
			{
				iVar7 = GET_WEAPON_ENUM_FROM_CRC((*&Param0 + 92)[iVar0]);
				if (iVar7 == 31)
				{
					if (Function_6(Global_131807.f_1304, 64))
					{
						ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					}
				}
				else if (iVar7 == 29)
				{
					if (Function_6(Global_131807.f_1304, 32))
					{
						ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					}
				}
				else
				{
					ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
				}
			}
			else
			{
				ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
			}
			if (StackVal && bVar6 < 0)
			{
				ACTOR_SET_WEAPON_AMMO_BY_CRC(StackVal, &uVar5, TO_FLOAT((*&Param0 + 92)[iVar0]));
			}
			else
			{
				bVar4 = false;
				while (StackVal < (bVar4 - 2))
				{
					ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					bVar4++;
				}
			}
			iVar0++;
		}
		iVar1 = (Param0.f_88 - 1);
		while (iVar1 > 0)
		{
			ADD_ACCESSORY_BY_CRC(Param0[iVar1], &uVar5, 0);
			iVar1 = (iVar1 - 1);
		}
		Function_107(1);
		if (Function_63())
		{
			if (StackVal == 10)
			{
				Function_379();
				Function_377();
			}
		}
		bVar2 = false;
		while (bVar2 < (17 - 1))
		{
			_ADD_AMMO_OF_TYPE(&uVar5, bVar2, (*&Param0 + 1064)[bVar2], 0, 0);
			bVar2++;
		}
		iVar3 = 0;
		while (iVar3 < (7 - 1))
		{
			if ((*&Param0 + 1208)[iVar3] != 4294967295)
			{
				if ((*&Param0 + 1208)[iVar3] == 31)
				{
					if (Function_6(Global_131807.f_1304, 64))
					{
						ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
					}
				}
				else if ((*&Param0 + 1208)[iVar3] == 29)
				{
					if (Function_6(Global_131807.f_1304, 32))
					{
						ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
					}
				}
				else
				{
					ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
				}
			}
			iVar3++;
		}
		iVar0 = (Param0.f_2316 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*&Param0 + 1284)[iVar0], &uVar5, 0);
			bVar4 = false;
			while (StackVal < (bVar4 - 2))
			{
				ADD_ITEM_BY_CRC((*&Param0 + 1284)[iVar0], &uVar5, 0);
				bVar4++;
			}
			iVar0 = (iVar0 - 1);
		}
		if (Param0.f_1276 != 4294967295)
		{
			if (Param0.f_1276 == 31)
			{
				if (!Function_6(Global_131807.f_1304, 64))
				{
					Param0.f_1276 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(&uVar5, Param0.f_1280);
		}
		else if (Param0.f_1280 != 4294967295)
		{
			if (Param0.f_1280 == 31)
			{
				if (!Function_6(Global_131807.f_1304, 64))
				{
					Param0.f_1280 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(&uVar5, Param0.f_1280);
		}
		if (Param0.f_1272 == 4294967295 && Global_53524.f_28)
		{
			ACTOR_PUT_WEAPON_IN_HAND(&uVar5, Param0.f_1272, 0);
		}
	}
	return;
}

void Function_377() //Position: 0x18088 / 98440
{
	Function_378(41, 3.0f);
	Function_378(40, 3.0f);
	Function_378(42, 3.0f);
	Function_378(39, 3.0f);
	Function_378(43, 3.0f);
	Function_378(44, 3.0f);
	Function_378(34, 3.0f);
	return;
}

void Function_378(bool bParam0, float fParam1) //Position: 0x180B8 / 98488
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			bVar0 = 8;
			break;
		
		case 0x00000028:
			bVar0 = 7;
			break;
		
		case 0x0000002A:
			bVar0 = 9;
			break;
		
		case 0x00000027:
			bVar0 = 6;
			break;
		
		case 0x0000002B:
			bVar0 = 10;
			break;
		
		case 0x0000002C:
			bVar0 = 11;
			break;
		
		case 0x00000022:
			bVar0 = 15;
			break;
		
		case 0x00000030:
			bVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(&Global_54076, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, bVar0, (_GET_MAX_AMMO_AMOUNT(&Global_54076, bVar0) * fParam1));
	}
	return;
}

void Function_379() //Position: 0x1814B / 98635
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (Function_380(3) == 10)
	{
		iVar0 = 2;
	}
	iVar1 = Function_108(3);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(6);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(0);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(1);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(8);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(4);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(12);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(5);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(2);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(30);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(31);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(32);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(33);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(34);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(35);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(36);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(37);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(38);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(39);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(40);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(41);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(42);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(43);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(44);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(45);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(46);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(47);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(48);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(49);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(50);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(51);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(7);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_108(9);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	return;
}

int Function_380(int iParam0) //Position: 0x183AA / 99242
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_381(bool bParam0, bool bParam1) //Position: 0x183D2 / 99282
{
	switch (bParam0)
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

void Function_382() //Position: 0x18558 / 99672
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_6606)
	{
		return;
	}
	uVar2 = Function_312();
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		bVar3 = GET_AMMO_ENUM(bVar1);
		if (bVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_383(int iParam0) //Position: 0x18631 / 99889
{
	if (Function_6(iParam0, 1) && !Function_6(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_384(int iParam0) //Position: 0x1865E / 99934
{
	return Function_84(Global_131807.f_1304, iParam0);
}

bool Function_385(int iParam0, bool bParam1) //Position: 0x18670 / 99952
{
	if (!Function_350(iParam0))
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

float Function_386(struct<2> Param0, struct<2> Param2) //Position: 0x186A7 / 100007
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

bool Function_387(bool bParam0) //Position: 0x186C4 / 100036
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_388(var uParam0, var uParam1, struct<2> Param2, bool bParam4, int iParam5) //Position: 0x186E2 / 100066
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam5)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(Param2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam4);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(&bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(&uParam0, &uParam1, Param2, bParam4, &bVar0);
}

void Function_389(int iParam0, int iParam1) //Position: 0x18814 / 100372
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

int Function_390(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1882A / 100394
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_394(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_391(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_391(bParam0, bParam1, bParam2, 4294967295);
}

int Function_391(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x18888 / 100488
{
	var uVar0;
	
	if (!Function_393(bParam2))
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
	uVar0 = Function_394(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_392(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_392(int iParam0) //Position: 0x189EC / 100844
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_393(int iParam0) //Position: 0x18A2A / 100906
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_394(int iParam0, int iParam1, bool bParam2) //Position: 0x18A3F / 100927
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_395() //Position: 0x18A5F / 100959
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_396() //Position: 0x18A8A / 101002
{
	var uVar0;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(&uVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return &uVar0;
}

