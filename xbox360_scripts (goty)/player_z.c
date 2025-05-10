//Decompiled with MagicRDR v1.0
//Function Count : 419
//Statics Count : 208
//Natives Count : 643
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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 11;
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
	var uLocal_63 = 11;
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
	int iLocal_78 = 0;
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0.0f;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	float fLocal_88 = 0.0f;
	struct<345> Local_89 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	float fVar26;
	float fVar27;
	var uVar28;
	bool bVar29;
	bool bVar30;
	var uVar31;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	float fVar37;
	float fVar38;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_4 = false;
	iLocal_5 = 0;
	iLocal_6 = 0;
	fLocal_10 = 7.5f;
	fLocal_11 = 4.0f;
	fLocal_12 = 1.25f;
	fLocal_13 = 0.25f;
	iLocal_78 = 0;
	bLocal_79 = false;
	iLocal_80 = 0;
	iLocal_81 = 0;
	fLocal_82 = -1.0f;
	iLocal_83 = 0;
	iLocal_84 = 0;
	iLocal_85 = 0;
	fLocal_179 = -1.0f;
	fLocal_180 = -1.0f;
	fLocal_181 = -1.0f;
	fLocal_203 = -1.0f;
	fLocal_204 = -1.0f;
	fLocal_205 = -1.0f;
	iLocal_206 = 4294967295;
	bLocal_86 = Function_418();
	(&Global_12976 + 36)->f_20 = 0;
	vVar12.f_4 = Global_34165.f_12;
	bVar16 = false;
	bVar17 = Global_34165.f_44;
	bVar18 = false;
	fVar19 = 0.0f;
	if (!bVar17)
	{
		iVar21 = Function_413(0, 1, 1);
		iVar22 = Function_413(0, 2, 1);
		iVar23 = Function_413(2, 47, 1);
		iVar24 = Function_413(2, 48, 1);
		if (((((StackVal && StackVal != 3 != 4) && !Global_3381) || (Global_3381 && Global_6267 != 1)) && Global_3365) && !Global_34165.f_28)
		{
			Function_412(&Global_63084 + 32, 65536);
			Function_412(&Global_63095, 1);
		}
		else if (((((StackVal && StackVal != 3 != 4) && !Global_3381) || (Global_3381 && Global_6267 != 2)) && Global_3365) && !Global_34165.f_28)
		{
			Function_412(&Global_63084 + 32, 65536);
			Function_412(&Global_63095, 1);
		}
		else if (((((StackVal && !(StackVal && !(StackVal || StackVal != 3 != 4) != 3) != 4) && !Global_3381) || (Global_3381 && Global_6267 != 48)) && Global_3365) && !Global_34165.f_28)
		{
			Function_412(&Global_63084 + 32, 65536);
			Function_412(&Global_63095, 1);
		}
		else if (Function_411(StackVal, StackVal, &vVar6, &vVar9, Global_34165, Global_34165.f_12, Global_34165.f_16))
		{
			if (!STREAMING_HAS_OVERRIDE_MAIN_POI())
			{
			}
			else if ((!Global_3381 && !Global_34165.f_28) && !Function_410(2048))
			{
			}
		}
		else
		{
			vVar6 = { StackVal, StackVal, Global_34165 };
			vVar9 = { StackVal, StackVal, vVar12 };
		}
		SET_START_POS(vVar6, Global_34165.f_12, 0);
		STREAMING_SET_CUTSCENE_MODE(1);
		STREAMING_LOAD_BOUNDS(Global_34165, 10.0f, 0);
		if (Function_409(Function_413(3, 57, 1), 0))
		{
			bVar18 = true;
		}
		bVar25 = SHIFT_LEFT(true, Global_27774[Global_2817813].f_20);
		iVar20 = Global_27774[Global_2817813].f_20;
		if ((((StackVal && StackVal != 3 != 4) && !Global_3381) || (Global_3381 && Global_6267 != 1)) && Global_3365)
		{
			bVar25 = SHIFT_LEFT(true, 21);
			iVar20 = 21;
		}
		if (Global_3364 && !Global_3365)
		{
			STREAMING_REQUEST_ACTOR(bVar18, true, false);
		}
		else
		{
			STREAMING_REQUEST_ACTOR(bVar18, bVar25, false);
			REQUEST_STRING_TABLE("RandomCharMissions");
			bVar16 = true;
		}
		WAIT(false);
		while (!STREAMING_ARE_BOUNDS_LOADED(Global_34165, 10.0f) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
		Global_34165.f_4 = (StackVal + 1.0f);
	}
	if (bVar17)
	{
		vVar0 = { StackVal, StackVal, Global_34165 };
	}
	else
	{
		while (!FIND_GROUND_INTERSECTION(&Global_34165, 10.0f, &vVar0, &uVar3) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	Global_34574 = { StackVal, StackVal, vVar0 };
	if (!bVar17)
	{
		while (!STREAMING_IS_ACTOR_LOADED(bVar18, 4294967295) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	if (Global_3419)
	{
		while (!STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	if (bVar16)
	{
		while (!HAS_STRING_TABLE_LOADED("RandomCharMissions"))
		{
			WAIT(false);
		}
	}
	if (!bVar17)
	{
		fVar26 = 80.0f;
		fVar27 = 80.0f;
		if (Global_3364 && !Global_3365)
		{
			Global_34573 = CREATE_PLAYER_ACTOR_IN_LAYOUT(bLocal_86, "player", bVar18, vVar0, vVar12, 0);
		}
		else
		{
			Global_34573 = CREATE_PLAYER_ACTOR_IN_LAYOUT(bLocal_86, "player", bVar18, vVar0, vVar12, iVar20);
		}
		if (bVar18 == 1)
		{
			SET_AMBIENT_VOICE_NAME(Global_34573, "PLAYER_JACK");
		}
		Function_408(256);
		STREAMING_ENABLE_POI_STREAMING(1);
		if (Global_3364)
		{
			Function_407();
			Function_406(0, 0);
			Function_406(1, 0);
			Function_406(3, 1);
			Function_406(4, 1);
		}
		else
		{
			Function_390();
			if (Global_76694 != 4294967295)
			{
				Function_367(Global_76694);
			}
			if (Global_28180 != 4294967295)
			{
				Global_28180.f_12 = 1;
				Function_367(Global_27774[Global_2818013].f_48);
			}
			if (bVar16)
			{
				REMOVE_STRING_TABLE("RandomCharMissions");
				bVar16 = false;
			}
			Function_406(0, Function_366(0));
			Function_406(1, Function_366(1));
			Function_406(3, Function_366(3));
			Function_406(4, Function_366(4));
			Function_364(Global_28178);
		}
		Global_12976.f_84 = 4294967295;
		Global_12976.f_88 = 4294967295;
		Global_12976.f_92 = 4294967295;
		Global_12976.f_96 = 4294967295;
		if (Global_34165.f_28)
		{
			if ((((((_GET_AMMO_AMOUNT(Global_34573, 6, 0) + _GET_AMMO_AMOUNT(Global_34573, 7, 0)) + _GET_AMMO_AMOUNT(Global_34573, 8, 0)) + _GET_AMMO_AMOUNT(Global_34573, 9, 0)) + _GET_AMMO_AMOUNT(Global_34573, 10, 0)) + _GET_AMMO_AMOUNT(Global_34573, 11, 0)) > 6.0f)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 7, 6.0f, 0, 0);
			}
		}
		SET_START_POS(vVar6, Global_34165.f_12, 0);
		WAIT(false);
		if (_GET_AMMO_AMOUNT(Global_34573, 12, 0) <= 1.0f)
		{
			if (!Function_363(32))
			{
				_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 12, 0.0f, 1);
				DELETE_WEAPON_FROM_ACTOR(Global_34573, 29);
			}
		}
		START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(Global_34573);
		SET_CAMERA_FOLLOW_ACTOR(Global_34573);
		CAMERA_RESET(0);
		SATCHEL_SET_ENABLED(1);
		if (Function_362(7, 32))
		{
			Function_361(53, 1);
		}
		if (Function_362(5, 32))
		{
			Function_361(54, 1);
		}
		if (Function_362(4, 32))
		{
			Function_361(55, 1);
		}
		if (Function_362(9, 32))
		{
			Function_361(56, 1);
		}
		if (Function_362(8, 32))
		{
			Function_361(57, 1);
		}
		if (Function_362(6, 32))
		{
			Function_361(58, 1);
		}
		if (Function_358(3))
		{
			Function_361(10, 1);
		}
		iLocal_206 = GET_PLAYER_COMBATMODE();
		if (iLocal_206 == 0)
		{
			SET_ACTOR_MAX_HEALTH(Global_34573, 80.0f);
		}
		else if (iLocal_206 == 2)
		{
			SET_ACTOR_MAX_HEALTH(Global_34573, (80.0f * 2.0f));
		}
		SET_ACTOR_HEALTH(Global_34573, 80.0f);
		Function_357(1);
		Function_356();
		if (Global_34165.f_32)
		{
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
		}
		if (Global_3381)
		{
			SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		}
		else if (Global_3364)
		{
			SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
		}
		SET_MAX_DEADEYE_POINTS(0, 100.0f);
		SET_DEADEYE_REGENERATION_RATE(0, (0.25f * 1.25f), 0);
		if (Global_3419)
		{
			if (Global_3364)
			{
				uVar28 = Function_351(StackVal, StackVal, 1, 1, ((Global_34574 - 2.0f) - 2.0f), vVar12.y, 1, 0);
			}
			STREAMING_EVICT_ACTOR(StackVal + 976, 4294967295);
			bVar29 = CREATE_VOLUME_IN_LAYOUT(bLocal_86, Function_350(), 3, vVar0, vVar12, 50.0f, 50.0f, 50.0f);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar29);
		}
	}
	else
	{
		fVar26 = 60.0f;
		fVar27 = 60.0f;
		bVar30 = false;
		while (bVar30 <= 40)
		{
			SET_WEAPONENUM_LOCKED(bVar30, 0);
			bVar30++;
		}
		SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(1.0f);
		Function_357(0);
		Function_347(0);
		Function_346();
		Global_76888[03] = { StackVal, StackVal, vVar0 };
		Global_76888[13] = { StackVal, StackVal, vVar0 };
		Global_76895[03] = { StackVal, StackVal, vVar12 };
		Global_76895[13] = { StackVal, StackVal, vVar12 };
		CAMERA_RESET(0);
		Function_408(256);
	}
	Global_63084.f_28 = "";
	Global_63084.f_24 = "";
	Function_412(&Global_12976 + 36 + 20, 1);
	if (Global_3364)
	{
		Global_12976.f_152 = 3;
		Global_12976.f_156 = 0;
		Function_344(2, Function_345(Global_12976.f_152), 0, 1);
		Function_344(4, Function_343(Global_12976.f_156), 0, 1);
	}
	Global_83819 = 0;
	WAIT(false);
	Local_89 = bLocal_86;
	RESET_ANALOG_POSITIONS(0, 0.0f);
	STREAMING_UNLOAD_BOUNDS();
	bLocal_87 = true;
	fLocal_88 = -1.0f;
	Function_342();
	fLocal_82 = -1.0f;
	Function_340(2);
	SET_HUD_MAP_SCALE_WALK(65.0f);
	SET_HUD_MAP_SCALE_DRIVE(140.0f);
	if (Function_339("playerhorsedebug"))
	{
		Global_16874 = 1;
	}
	Local_183.f_44 = 0;
	Function_412(&Global_63084 + 32, 16384);
	while (!IS_EXITFLAG_SET())
	{
		Global_34573 = Function_338();
		bVar34 = IS_ACTOR_VALID(Global_34573);
		if (bVar34)
		{
			if (GET_ACTOR_FACTION(Global_34573) == 32)
			{
			}
			if (!bVar17)
			{
				bVar35 = GET_ACTOR_ENUM(Global_34573);
				if (bVar18 != bVar35)
				{
					STREAMING_EVICT_ACTOR(bVar18, 4294967295);
					bVar18 = bVar35;
				}
			}
			GET_POSITION(Global_34573, &Global_34574);
			if (!GET_ACTOR_VEHICLE_STATE(Global_34573, &Global_34577, &Global_34578))
			{
				Global_34577 = 4294967295;
				Global_34578 = 4294967295;
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Saves and Loads : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_312(&Global_63084, &Global_63095, &uLocal_202);
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Drunk : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_311(&fLocal_179, 5.0f);
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Camp : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_244(&Global_63084, &Local_183);
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Fasttravel : ");
				fVar15 = GET_PROFILE_TIME();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "DoingFastTravel"))
			{
				LAUNCH_NEW_SCRIPT("content/DLC/ZombiePack/system/DesignerDefined/Player/FastTravel_z", 0);
				DECOR_REMOVE(Global_34573, "DoingFastTravel");
			}
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
		}
		if (!CAN_PLAYER_DIE())
		{
			if (bVar34)
			{
				Function_243(0.0001f, fVar26);
			}
		}
		else
		{
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Health Regen : ");
				fVar15 = GET_PROFILE_TIME();
			}
			if (!bVar17 && bVar34)
			{
				Function_242(&iLocal_206);
			}
			Function_239(fVar26, 6.0f, 6.0f, 0.5f, 0.5f, iLocal_85);
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
		}
		if (bVar34)
		{
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec HUD : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_229();
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Horse : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_222();
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Idle Cam : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_190();
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Teleporter : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_167();
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Activity Watch : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_160();
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Equipement : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_158(0);
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if ((Global_3412 && !HUD_IS_FADED()) && !HUD_IS_FADING())
			{
				Function_157();
			}
		}
		if (bLocal_177)
		{
			PRINTSTRING("Time for Exec Reset Menu : ");
			fVar15 = GET_PROFILE_TIME();
		}
		Function_118(&fLocal_82);
		if (bLocal_177)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
			PRINTNL();
		}
		if (bLocal_177)
		{
			PRINTSTRING("Time for Exec Ambient Challenge Prints : ");
			fVar15 = GET_PROFILE_TIME();
		}
		Function_114(&(Global_30900[8]), &fLocal_181);
		Function_110(&fLocal_181);
		if (bLocal_177)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
			PRINTNL();
		}
		if (bLocal_177)
		{
			PRINTSTRING("Time for Exec Stats : ");
			fVar15 = GET_PROFILE_TIME();
		}
		Function_107(&fLocal_180);
		if (bLocal_177)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
			PRINTNL();
		}
		if (bLocal_177)
		{
			PRINTSTRING("Time for Map prompting: ");
			fVar15 = GET_PROFILE_TIME();
		}
		Function_94();
		if (bLocal_177)
		{
			PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
			PRINTNL();
		}
		if (bVar34)
		{
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Map : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_89();
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Exec Horse Whistle : ");
				fVar15 = GET_PROFILE_TIME();
			}
			if ((!Function_88(Global_76846, 32768) || Function_85(Global_30717[1])) || Function_84(2))
			{
				Function_28(&Global_12976 + 236, &uVar31);
			}
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (bLocal_177)
			{
				PRINTSTRING("Time for Grappel Update : ");
				fVar15 = GET_PROFILE_TIME();
			}
			Function_10(0x40a00000, 0x3f000000, 0x40a00000);
			if (bLocal_177)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fVar15));
				PRINTNL();
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				bVar36 = GET_MOUNT(Global_34573);
				if (NET_IS_OBJECT_LOCAL(bVar36))
				{
					fVar37 = GET_ACTOR_HEALTH(bVar36);
					if (fVar37 < 0.0f)
					{
						fVar38 = GET_ACTOR_MAX_HEALTH(bVar36);
						if (fVar37 > fVar38)
						{
							SET_ACTOR_HEALTH(bVar36, (fVar37 + 0.01f));
						}
					}
				}
			}
		}
		WAIT(false);
	}
	Function_9();
	if (IS_ACTOR_VALID(Global_34573))
	{
		STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(Global_34573);
	}
	UI_EXIT("WantedMeter");
	RESET_RUMBLE();
	UI_CLEAR_MESSAGE_QUEUE(4);
	CANCEL_DEADEYE();
	Function_8();
	Function_7();
	Function_5();
	Function_1(&Global_63084, &Local_183, 0, 0, 1, 1);
	RELEASE_LAYOUT_REF(bLocal_86);
	if (!bVar17)
	{
		STREAMING_EVICT_ACTOR(bVar18, 4294967295);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE55 / 3669
{
	bool bVar0;
	bool bVar1;
	
	LOG_WARNING("PLAYER_REMOVE_CAMP - removing camp");
	if (IS_LAYOUTREF_VALID(iParam0->f_24))
	{
		bVar0 = FIND_OBJECT_IN_LAYOUT(iParam0->f_24, "Player_Campfire_FX");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	if (bParam3)
	{
		bVar1 = Function_4(iParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (bParam2)
			{
				RELEASE_OBJECT_REF(bVar1);
			}
			else
			{
				DESTROY_OBJECT(bVar1);
				if (IS_ACTOR_VALID(Global_34573))
				{
					DECOR_SET_BOOL(Global_34573, "DestroyMyCamp", true);
				}
			}
		}
	}
	else if (bParam2)
	{
		Function_3(iParam0);
		if (IS_LAYOUTREF_VALID(iParam0->f_24))
		{
			RELEASE_LAYOUT_OBJECTS(iParam0->f_24);
		}
	}
	else
	{
		Function_3(iParam0);
		if (IS_LAYOUTREF_VALID(iParam0->f_24))
		{
			DESTROY_LAYOUT_OBJECTS(iParam0->f_24);
		}
		if (IS_ACTOR_VALID(Global_34573))
		{
			DECOR_SET_BOOL(Global_34573, "DestroyMyCamp", true);
		}
	}
	if (bParam4)
	{
		Function_2(iParam1);
	}
	if (bParam5)
	{
		RESET_ALL_BREAKABLE_TREE_CLEARINGS();
		if (UNK_0x214AFB8C(iParam1->f_36))
		{
			STREAMING_EVICT_GRINGO(iParam1->f_36);
			iParam1->f_36 = "";
		}
		if (UNK_0x214AFB8C(iParam1->f_40))
		{
			STREAMING_EVICT_GRINGO(iParam1->f_40);
			iParam1->f_40 = "";
		}
	}
}

void Function_2(int iParam0) //Position: 0xF99 / 3993
{
	if (iParam0->f_32)
	{
		REMOVE_ACTION_TREE("custom/player_save");
		iParam0->f_32 = 0;
	}
	if (iParam0->f_28)
	{
		REMOVE_ANIM_SET("player_save");
		iParam0->f_28 = 0;
	}
	return;
}

void Function_3(int iParam0) //Position: 0xFE0 / 4064
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(iParam0->f_24))
	{
		bVar0 = FIND_OBJECT_IN_LAYOUT(iParam0->f_24, "camp_stayout_volume");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	if (IS_LAYOUTREF_VALID(Global_26150))
	{
		bVar0 = FIND_OBJECT_IN_LAYOUT(Global_26150, "camp_no_event_volume");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

bool Function_4(int iParam0) //Position: 0x1051 / 4177
{
	return iParam0->f_28;
}

void Function_5() //Position: 0x105B / 4187
{
	if (Function_6((&Global_12976 + 36)->f_20, 1))
	{
		STREAMING_EVICT_ACTOR(StackVal + 976, 4294967295);
		Function_412(&Global_12976 + 36 + 20, 1);
	}
	if (Function_6((&Global_12976 + 36)->f_20, 32))
	{
		STREAMING_EVICT_ACTOR(993, 4294967295);
		Function_412(&Global_12976 + 36 + 20, 32);
	}
	return;
}

bool Function_6(bool bParam0, bool bParam1) //Position: 0x10AA / 4266
{
	return (bParam0 && bParam1) == 0;
}

void Function_7() //Position: 0x10B7 / 4279
{
	GUI_CLOSE_WINDOW(Global_13043);
	return;
}

void Function_8() //Position: 0x10C4 / 4292
{
	return;
}

void Function_9() //Position: 0x10CA / 4298
{
	if (SQUAD_IS_VALID(Global_34080.f_92))
	{
		DESTROY_OBJECT(Global_34080.f_92);
	}
	if (SQUAD_IS_VALID(Global_34080.f_96))
	{
		DESTROY_OBJECT(Global_34080.f_96);
	}
	if (SQUAD_IS_VALID(Global_34080.f_100))
	{
		DESTROY_OBJECT(Global_34080.f_100);
	}
	if (SQUAD_IS_VALID(Global_34080.f_104))
	{
		DESTROY_OBJECT(Global_34080.f_104);
	}
	if (IS_LAYOUTREF_VALID(Global_34080.f_88))
	{
		DESTROY_LAYOUT(Global_34080.f_88);
	}
	return;
}

void Function_10(float fParam0, float fParam1, float fParam2) //Position: 0x112F / 4399
{
	int iVar0;
	
	if ((!IS_LOCAL_PLAYER_VALID(0) || !IS_ACTOR_VALID(Global_34573)) || !IS_LAYOUTREF_VALID(Global_30616))
	{
		return;
	}
	iVar0 = 0;
	Function_21(&iVar0);
	if ((GET_CURRENT_GAME_TIME() - fLocal_204) > fParam1 && fLocal_204 == -1.0f)
	{
		return;
	}
	fLocal_204 = GET_CURRENT_GAME_TIME();
	if (iVar0 == 0)
	{
		iVar0 = Function_16(StackVal, StackVal, Global_34574, fParam2, 0x40400000, 1, 0);
	}
	if (iVar0 >= 1 && fLocal_205 == 0.8f)
	{
		fLocal_205 = 0.8f;
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(32, 2, 0.8f);
	}
	else if ((iVar0 < 1 && iVar0 > 4) && fLocal_205 == 0.7f)
	{
		fLocal_205 = 0.7f;
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(32, 2, 0.7f);
	}
	else if (iVar0 <= 4 && fLocal_205 == 0.6f)
	{
		fLocal_205 = 0.6f;
		SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(32, 2, 0.6f);
	}
	if (!DECOR_CHECK_EXIST(Global_34573, "nNoGrapple"))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ZedGrappled"))
		{
			if (!Function_88(Global_76847, 32))
			{
				Function_11(Global_34573, 32, 2, 0);
			}
			DECOR_SET_BOOL(Global_34573, "nNoGrapple", true);
			DECOR_REMOVE(Global_34573, "ZedGrappled");
			fLocal_203 = GET_CURRENT_GAME_TIME();
		}
		else if (iVar0 >= 1)
		{
			fLocal_203 = GET_CURRENT_GAME_TIME();
			DECOR_SET_BOOL(Global_34573, "nNoGrapple", true);
		}
	}
	else if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
	{
		fLocal_203 = GET_CURRENT_GAME_TIME();
	}
	else if (iVar0 >= 1)
	{
		fLocal_203 = GET_CURRENT_GAME_TIME();
	}
	else if ((GET_CURRENT_GAME_TIME() - fLocal_203) < fParam0)
	{
		DECOR_REMOVE(Global_34573, "nNoGrapple");
	}
	return;
}

void Function_11(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12CC / 4812
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_13(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_12(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_12(char* cParam0, int iParam1) //Position: 0x1338 / 4920
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

bool Function_13(bool bParam0, var uParam1, int iParam2) //Position: 0x136F / 4975
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
		if (Function_15(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_14(uVar0))
		{
			case 0x00000002:
				if (!Function_88(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_14(char* cParam0) //Position: 0x13E7 / 5095
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

int Function_15(int iParam0) //Position: 0x1488 / 5256
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_412(&iVar1, 2147483648);
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

int Function_16(vector3 vParam0, float fParam3, float fParam4, int iParam5, int iParam6) //Position: 0x14C5 / 5317
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_350(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_17(bVar0, iParam5, iParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_17(bool bParam0, var uParam1, bool bParam2) //Position: 0x14F8 / 5368
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_350(), Global_30616, 15, 1);
	bVar1 = false;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		bVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (bVar2 < 0)
		{
			return bVar1;
		}
		bVar3 = false;
		while (bVar3 <= bVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_19(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_18(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									bVar1++;
								}
							}
							else
							{
								bVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return bVar1;
}

bool Function_18(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x15C2 / 5570
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_19(bool bParam0) //Position: 0x15DC / 5596
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_20(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0x1627 / 5671
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_21(int iParam0) //Position: 0x1669 / 5737
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (GET_WEAPON_IN_HAND(Global_34573) == 33)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "forwardstrike"))
		{
			bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_350(), Global_30616, 15, 1);
			Function_27(Global_34573);
			Function_25(StackVal, StackVal, Function_27(Global_34573), &bVar0, 5.0f, 0x40a00000, 1, 0);
			*iParam0 = GET_OBJECTSET_SIZE(bVar0);
			bVar1 = false;
			while (bVar1 <= *iParam0)
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
				if (IS_OBJECT_VALID(bVar2))
				{
					if (Function_24(bVar2, GET_AMBIENT_LAYOUT()))
					{
						bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
						if (IS_ACTOR_VALID(bVar3))
						{
							if ((!DECOR_CHECK_EXIST(bVar2, "bWaryOfTorch") && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar3, "ChargeAttack")) && !Function_23(bVar3))
							{
								bVar4 = Function_22(bVar3);
								if (!bVar4)
								{
									RESET_ANIM_SET_FOR_ACTOR(bVar3, 1);
									SET_ANIM_SET_FOR_ACTOR(bVar3, "z_dlc_z_roar", 0);
								}
								fVar5 = (RAND_FLOAT_RANGE(0.0f, 100000.0f) / 100000.0f);
								bVar6 = TASK_SEQUENCE_OPEN();
								TASK_MELEE_ATTACK(false, Global_34573, fVar5);
								if (!bVar4)
								{
									TASK_ACTION_PERFORM(false, "z_dlc_z_roar");
								}
								else
								{
									TASK_FLEE_ACTOR(false, Global_34573, 10.0f, 2.0f, 0, 0, 0);
								}
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bVar3, bVar6);
								TASK_SEQUENCE_RELEASE(bVar6, 1);
								TASK_PRIORITY_SET(bVar3, 1);
								DECOR_SET_BOOL(bVar3, "bWaryOfTorch", true);
							}
						}
					}
				}
				bVar1++;
			}
			DESTROY_OBJECTSET(bVar0);
		}
	}
	return;
}

int Function_22(bool bParam0) //Position: 0x17D6 / 6102
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1240 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_23(bool bParam0) //Position: 0x17F6 / 6134
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_24(bool bParam0, bool bParam1) //Position: 0x1816 / 6166
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_IN_LAYOUT(bVar0, bParam1);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (bVar1 == bParam0)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

int Function_25(vector3 vParam0, bool bParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x186D / 6253
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (Function_26(StackVal, StackVal, vParam0) || fParam4 >= 0.0f)
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_350(), Global_30616, 15, 1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_350(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam4, fParam5, fParam4);
	if (IS_OBJECTSET_VALID(*bParam3) && IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bVar1, bVar0, 0, 1);
		bVar2 = GET_OBJECTSET_SIZE(bVar0);
		bVar3 = false;
		while (bVar3 <= bVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (IS_ACTOR_ALIVE(bVar5))
					{
						if (Function_19(bVar5))
						{
							if (iParam6 || !IS_ACTOR_HOGTIED(bVar5))
							{
								if (bParam7)
								{
									if (Function_18(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
									{
										if (!IS_OBJECT_IN_OBJECTSET(bVar4, *bParam3))
										{
											ADD_OBJECT_TO_OBJECTSET(bVar4, *bParam3);
										}
									}
								}
								else if (!IS_OBJECT_IN_OBJECTSET(bVar4, *bParam3))
								{
									ADD_OBJECT_TO_OBJECTSET(bVar4, *bParam3);
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
	if (GET_OBJECTSET_SIZE(*bParam3) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_26(vector3 vParam0) //Position: 0x197E / 6526
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_27(bool bParam0) //Position: 0x1996 / 6550
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_28(var uParam0, var uParam1) //Position: 0x19A7 / 6567
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	bool bVar19;
	var uVar20;
	bool bVar23;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		(&Global_12976 + 36)->f_28 = 0;
		*uParam0 = 0;
		*uParam1 = -1.0f;
		Function_83(0, 0x40400000);
		Function_82();
		return;
	}
	if (IS_ACTOR_DEAD(Global_34573))
	{
		(&Global_12976 + 36)->f_28 = 0;
		*uParam0 = 0;
		*uParam1 = -1.0f;
		Function_83(0, 0x40400000);
		Function_82();
		return;
	}
	iVar0 = 0;
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		iVar0 = 1;
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (Function_81() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				(&Global_12976 + 36)->f_28 = 0;
				*uParam0 = 0;
				*uParam1 = -1.0f;
				Function_82();
				return;
			}
		}
		if (!Function_79() && !Function_77(512))
		{
			*uParam0 = 0;
			*uParam1 = -1.0f;
			Function_82();
			return;
		}
		if (Function_76(1, 1))
		{
			*uParam0 = 0;
			*uParam1 = -1.0f;
			Function_82();
			return;
		}
	}
	if (!Function_75(12))
	{
		(&Global_12976 + 36)->f_28 = 0;
		*uParam0 = 0;
		*uParam1 = -1.0f;
		return;
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
		{
			if (GET_MOUNT(Global_34573) == Global_12976.f_36)
			{
				(&Global_12976 + 36)->f_28 = 0;
				*uParam0 = 0;
				*uParam1 = -1.0f;
				Function_82();
				return;
			}
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		(&Global_12976 + 36)->f_28 = 0;
		*uParam0 = 0;
		*uParam1 = -1.0f;
		if (IS_BLIP_VALID(Global_12976.f_240))
		{
			REMOVE_BLIP(Global_12976.f_240);
		}
		Function_82();
		return;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		bVar1 = DECOR_GET_OBJECT(Global_34573, "HorseStolen");
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar1)))
		{
			DECOR_REMOVE(Global_34573, "HorseStolen");
			DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DeathTime"))
	{
		bVar2 = true;
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			if (IS_ACTOR_ALIVE(Global_12976.f_36))
			{
				DECOR_REMOVE(Global_34573, "PlayerHorse_DeathTime");
				bVar2 = false;
			}
		}
		if (bVar2)
		{
			fVar3 = 60.0f;
			bVar4 = Function_74();
			if (NET_IS_IN_SESSION() || Function_81())
			{
				fVar3 = 15.0f;
				bVar4 = false;
			}
			if (!Global_3365)
			{
				fVar3 = 3.0f;
				bVar4 = false;
			}
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "PlayerHorse_DeathTime")) > fVar3 || bVar4)
			{
				(&Global_12976 + 36)->f_28 = 0;
				*uParam0 = 0;
				*uParam1 = -1.0f;
				if (IS_BLIP_VALID(Global_12976.f_240))
				{
					REMOVE_BLIP(Global_12976.f_240);
				}
				Function_82();
				Function_73();
				if (IS_ACTOR_WHISTLING(Global_34573))
				{
					if (!Function_72())
					{
						if (!Function_88(Global_76846, 0x10000000))
						{
							if (bVar4)
							{
								Function_70("whistle_horse_dead_help_HC", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_70("whistle_horse_dead_help", 0x41200000, 1, 0, 2, 1, 0);
							}
							Function_69(&Global_76846, 0x10000000);
						}
						else if (bVar4)
						{
							if (!HUD_IS_SHOWING_HELP_TEXT())
							{
								Function_70("whistle_no_horse_HC", 0x41200000, 1, 0, 2, 1, 0);
							}
						}
					}
					else if (!Function_88(Global_76846, 2048))
					{
						Function_11(Global_34573, 2048, 1, 0);
					}
				}
				return;
			}
			DECOR_REMOVE(Global_34573, "PlayerHorse_DeathTime");
		}
		else
		{
			DECOR_REMOVE(Global_34573, "PlayerHorse_DeathTime");
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "Player_IgnoreWhistle"))
	{
		if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(Global_34573, "Player_IgnoreWhistle"))
		{
			if ((&Global_12976 + 36)->f_28 != 0)
			{
				(&Global_12976 + 36)->f_28 = 0;
				Global_12976.f_236 = 0;
				if (IS_BLIP_VALID(Global_12976.f_240))
				{
					REMOVE_BLIP(Global_12976.f_240);
				}
				if (IS_ACTOR_VALID(Global_12976.f_36))
				{
					if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
					{
						TASK_CLEAR(Global_12976.f_36);
					}
					TASK_PRIORITY_SET(Global_12976.f_36, 1);
					TASK_STAND_STILL(Global_12976.f_36, 5.0f, 0, 0);
				}
				Function_82();
				Function_73();
				if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
				{
					DECOR_REMOVE(Global_34573, "Player_SimWhistle");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
				{
					DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
				}
			}
			return;
		}
		DECOR_REMOVE(Global_34573, "Player_IgnoreWhistle");
	}
	switch ((&Global_12976 + 36)->f_28)
	{
		case 0x00000000:
			if (IS_BLIP_VALID(Global_12976.f_240))
			{
				REMOVE_BLIP(Global_12976.f_240);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
			{
				DECOR_REMOVE(Global_34573, "WhistlePosProbed");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
			{
				DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
			}
			if ((IS_ACTOR_WHISTLING(Global_34573) || iVar0) && !Global_63096)
			{
				bVar5 = true;
				if (bVar5)
				{
					bVar6 = false;
					bVar7 = false;
					bVar8 = Function_67(&bVar6, &bVar7);
					if (!bVar7)
					{
						if (IS_ACTOR_VALID(bVar8))
						{
							if (GET_MOUNT(Global_34573) != bVar8 && !Function_81())
							{
								break;
							}
						}
						if (!bVar6 && !IS_ACTOR_VALID(bVar8))
						{
							bVar8 = Function_38();
						}
						if (IS_ACTOR_VALID(bVar8))
						{
							if (!IS_ACTOR_DEAD(bVar8))
							{
								if (Function_37(Global_34573, bVar8) >= 150.0f)
								{
									if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar8)))
									{
										REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar8));
									}
									if (IS_BLIP_VALID(Global_12976.f_240))
									{
										if (334 != GET_BLIP_ICON(Global_12976.f_240))
										{
											REMOVE_BLIP(Global_12976.f_240);
											Global_12976.f_240 = ADD_BLIP_FOR_ACTOR(bVar8, 334, 0, 2, 0);
										}
									}
									else if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
									{
										if (!bVar8 != GET_MOUNT(Global_34573))
										{
											Global_12976.f_240 = ADD_BLIP_FOR_ACTOR(bVar8, 334, 0, 2, 0);
										}
									}
									else
									{
										Global_12976.f_240 = ADD_BLIP_FOR_ACTOR(bVar8, 334, 0, 2, 0);
									}
									if (!IS_ACTOR_VALID(GET_RIDER(bVar8)))
									{
										MAKE_ACTOR_READY_FOR_ACTION(bVar8, 1);
									}
									if (Function_81())
									{
										NET_REQUEST_OBJECT(bVar8);
									}
									TASK_PRIORITY_SET(bVar8, 1);
									TASK_RESPOND_TO_HORSE_WHISTLE(bVar8, Global_34573);
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(Global_12976.f_244);
									if (DECOR_CHECK_EXIST(bVar8, "HorseLeash"))
									{
										DESTROY_OBJECT(DECOR_GET_OBJECT(bVar8, "HorseLeash"));
										DECOR_REMOVE(bVar8, "HorseLeash");
									}
									Global_12976.f_244 = bVar8;
									if (DECOR_CHECK_EXIST(Global_34573, "LastWhistleTime"))
									{
										DECOR_REMOVE(Global_34573, "LastWhistleTime");
									}
									(&Global_12976 + 36)->f_28 = 6;
								}
								else
								{
									if (IS_ACTOR_VALID(bVar8))
									{
										RELEASE_ACTOR(bVar8);
									}
									(&Global_12976 + 36)->f_28 = 4;
								}
							}
							else
							{
								(&Global_12976 + 36)->f_28 = 4;
							}
						}
						else
						{
							(&Global_12976 + 36)->f_28 = 4;
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			bVar9 = DECOR_GET_INT(Global_34573, "WhistleTimeWaited");
			bVar9++;
			if (bVar9 > 30)
			{
				DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
				(&Global_12976 + 36)->f_28 = 2;
			}
			else
			{
				DECOR_SET_INT(Global_34573, "WhistleTimeWaited", bVar9);
			}
			break;
		
		case 0x00000002:
			bVar10 = DECOR_GET_INT(Global_34573, "WhistlePosProbed");
			bVar14 = false;
			if (bVar10 == 0)
			{
				Function_36();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 5)
			{
				Function_36();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 10)
			{
				Function_36();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 15)
			{
				Function_36();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 16)
			{
				Function_35();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 20)
			{
				Function_35();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 25)
			{
				Function_35();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			else if (bVar10 == 30)
			{
				Function_35();
				bVar14 = AMBIENT_GET_POINT(&vVar11, 0);
			}
			bVar10++;
			if (bVar10 > 31)
			{
				if (StackVal && StackVal + 976 <= 976 + 976 >= 998)
				{
					Function_70("whistle_horse_help_cantFind", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_70("whistle_mount_help_cantFind", 0x41200000, 1, 0, 2, 1, 0);
				}
				AMBIENT_RESET_USED_CELLS();
				DECOR_REMOVE(Global_34573, "WhistlePosProbed");
				(&Global_12976 + 36)->f_28 = 0;
				break;
			}
			else
			{
				DECOR_SET_INT(Global_34573, "WhistlePosProbed", bVar10);
			}
			if (bVar14)
			{
				if (STREAMING_ARE_BOUNDS_LOADED(vVar11, 4.0f))
				{
					DECOR_SET_VECTOR(Global_34573, "WhistleNavQueryPos", vVar11);
					(&Global_12976 + 36)->f_28 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (!DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
			{
				bVar15 = CREATE_NAV_QUERY(FIND_NAMED_LAYOUT("PlayerLayout"), "WhistleNavQuery");
				DECOR_SET_OBJECT(Global_34573, "WhistleNavQuery", bVar15);
				DECOR_GET_VECTOR(Global_34573, "WhistleNavQueryPos", &vVar16);
				Function_27(Global_34573);
				NAV_QUERY_START_CAN_PATH_TO_POINT(bVar15, vVar16, Function_27(Global_34573), 976);
			}
			if (NAV_QUERY_IS_DONE(GET_NAV_QUERY_FROM_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"))))
			{
				NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(GET_NAV_QUERY_FROM_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery")), &bVar19);
				if (bVar19)
				{
					AMBIENT_RESET_USED_CELLS();
					(&Global_12976 + 36)->f_28 = 5;
				}
				else
				{
					(&Global_12976 + 36)->f_28 = 2;
				}
				if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
					DECOR_REMOVE(Global_34573, "WhistleNavQuery");
				}
			}
			break;
		
		case 0x00000005:
			DECOR_GET_VECTOR(Global_34573, "WhistleNavQueryPos", &uVar20);
			if (Function_31(&Global_12976 + 244, uParam0, uParam1, &uVar20))
			{
				DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
				if (DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DontResetHorseEnum"))
				{
					DECOR_REMOVE(Global_34573, "PlayerHorse_DontResetHorseEnum");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "LastWhistleTime"))
				{
					DECOR_REMOVE(Global_34573, "LastWhistleTime");
				}
				(&Global_12976 + 36)->f_28 = 6;
			}
			break;
		
		case 0x00000006:
			if (!IS_BLIP_VALID(Global_12976.f_240))
			{
				Global_12976.f_240 = ADD_BLIP_FOR_ACTOR(Global_12976.f_244, 334, 0, 2, 0);
			}
			if (DECOR_CHECK_EXIST(Global_12976.f_244, "HorseLeash"))
			{
				DESTROY_OBJECT(DECOR_GET_OBJECT(Global_12976.f_244, "HorseLeash"));
				DECOR_REMOVE(Global_12976.f_244, "HorseLeash");
			}
			if (GET_TASK_STATUS(Global_12976.f_244, 86) == 2)
			{
				TASK_PRIORITY_SET(Global_12976.f_244, 1);
				TASK_RESPOND_TO_HORSE_WHISTLE(Global_12976.f_244, Global_34573);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(Global_12976.f_244);
				Function_30();
			}
			if (IS_ACTOR_VALID(Global_12976.f_244))
			{
				if (IS_ACTOR_DEAD(Global_12976.f_244))
				{
					(&Global_12976 + 36)->f_28 = 0;
				}
				else if (GET_TASK_STATUS(Global_12976.f_244, 86) != 0 || GET_TASK_STATUS(Global_12976.f_244, 86) != 4)
				{
					if (Function_72())
					{
						if (GET_TASK_STATUS(Global_12976.f_244, 86) == 0)
						{
							bVar23 = GET_ACTOR_ENUM(Global_12976.f_244);
							if (((bVar23 != 1248 || bVar23 != 1249) || bVar23 != 1250) || bVar23 != 1251)
							{
								if (Function_29())
								{
									SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", false, false, 0, 0, true, false);
								}
							}
						}
					}
					TASK_CLEAR(Global_12976.f_244);
					TASK_PRIORITY_SET(Global_12976.f_244, 2);
					AI_GOAL_LOOK_CLEAR(Global_12976.f_244);
					Function_30();
					Function_73();
					(&Global_12976 + 36)->f_28 = 0;
				}
				else if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					if (Global_12976.f_244 == GET_MOUNT(Global_34573))
					{
						TASK_PRIORITY_SET(Global_12976.f_244, 2);
						TASK_CLEAR(Global_12976.f_244);
						AI_GOAL_LOOK_CLEAR(Global_12976.f_244);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(Global_12976.f_244);
						Function_30();
						Function_73();
						Function_82();
						(&Global_12976 + 36)->f_28 = 0;
					}
				}
			}
			else
			{
				Function_73();
				Function_82();
				(&Global_12976 + 36)->f_28 = 0;
			}
			break;
	}
	return;
}

bool Function_29() //Position: 0x278F / 10127
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_30() //Position: 0x27A2 / 10146
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 24)
		{
			if (IS_VOLUME_VALID(Global_26155[iVar15].f_12))
			{
				if (bVar0)
				{
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(Global_12976.f_36, Global_26155[iVar15].f_12, 2, 0);
					bVar0 = false;
				}
				else
				{
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(Global_12976.f_36, Global_26155[iVar15].f_12);
				}
			}
			iVar1++;
		}
	}
	return;
}

bool Function_31(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x280A / 10250
{
	bool bVar0;
	
	*uParam1 = 1;
	*uParam2 = GET_CURRENT_GAME_TIME();
	Global_12976.f_36 = "";
	if ((Function_34() >= 1 && !DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DontResetHorseEnum")) && !(NET_IS_IN_SESSION() || Function_81()))
	{
		*uParam0 = Function_351(StackVal, StackVal, 1, 0, *uParam3, 0.0f, 0, 1);
		if (!Function_88(Global_76848, 0x2000000))
		{
			Function_11(Global_34573, 0x2000000, 3, 0);
		}
	}
	else
	{
		if (StackVal == 17)
		{
			Function_32(StackVal + 976, 0, 1);
		}
		*uParam0 = Function_351(StackVal, StackVal, 1, 0, *uParam3, 0.0f, 0, 0);
	}
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	Global_12976.f_240 = ADD_BLIP_FOR_ACTOR(*uParam0, 334, 0, 2, 0);
	TASK_CLEAR(*uParam0);
	if (!IS_ACTOR_VALID(GET_RIDER(*uParam0)))
	{
		MAKE_ACTOR_READY_FOR_ACTION(*uParam0, 1);
	}
	TASK_PRIORITY_SET(*uParam0, 1);
	TASK_RESPOND_TO_HORSE_WHISTLE(*uParam0, Global_34573);
	AI_GOAL_LOOK_AT_ACTOR(*uParam0, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(*uParam0);
	Function_30();
	if (Function_72())
	{
		if (!Function_88(Global_76846, 4096))
		{
			bVar0 = GET_ACTOR_ENUM(*uParam0);
			if (((bVar0 != 1248 || bVar0 != 1249) || bVar0 != 1250) || bVar0 != 1251)
			{
				Function_11(Global_34573, 4096, 1, 0);
			}
		}
	}
	Global_12976.f_244 = *uParam0;
	DECOR_SET_BOOL(Global_12976.f_244, "WasPlayerMount", true);
	return 1;
}

void Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x299A / 10650
{
	Global_13038 = iParam0;
	if (bParam1)
	{
		Function_33(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_33(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0x29C7 / 10695
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_34() //Position: 0x29D6 / 10710
{
	return Global_12976.f_152;
}

void Function_35() //Position: 0x29E1 / 10721
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
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 19.9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0.6f, 0.0f);
	return;
}

void Function_36() //Position: 0x2A3A / 10810
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
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9.9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0.5f, 0.0f);
	return;
}

float Function_37(bool bParam0, bool bParam1) //Position: 0x2A97 / 10903
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

bool Function_38() //Position: 0x2B88 / 11144
{
	bool bVar0;
	bool bVar1;
	
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		if (!IS_OBJECT_VALID(DECOR_GET_OBJECT(Global_34573, "HorseStolen")))
		{
			Function_73();
		}
		else
		{
			bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Global_34573, "HorseStolen"));
			bVar1 = GET_RIDER(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				DECOR_SET_BOOL(bVar1, "TriggerScream", true);
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
				if (DECOR_CHECK_EXIST(bVar1, "honorAward"))
				{
					Function_41(50, 1, 0);
					Function_40(bVar1, 4294967295 * 50);
					DECOR_REMOVE(bVar1, "honorAward");
				}
				if (!Global_3380)
				{
					TASK_FLEE_ACTOR(bVar1, Global_34573, 200.0f, -1.0f, 0, 0, 0);
				}
			}
			Function_33(&Global_12976 + 36 + 20, 2);
			Function_39(bVar0, 1);
			Function_73();
			DECOR_SET_FLOAT(bVar0, "NextNuRiderPollTime", (GET_CURRENT_GAME_TIME() + 1.0f));
			return bVar0;
		}
	}
	return "";
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x2CDB / 11483
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

void Function_40(bool bParam0, bool bParam1) //Position: 0x2D1E / 11550
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D3E / 11582
{
	int iVar0;
	bool bVar1;
	
	if (Function_366(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_74())
	{
		bVar1 = (bVar1 / 2);
	}
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
			Function_65(1, bVar1);
			if (!bParam2)
			{
				if (!Function_88(Global_76848, 1))
				{
					Function_11(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_63(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_88(Global_76848, 2))
				{
					Function_11(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_62(1, bVar1, 0, 0);
	}
	else
	{
		Function_61(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_48(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_48(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_47(1));
	iVar0 = Function_66(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_43(2, Function_345(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_43(2, Function_345(Global_12976.f_152), 0);
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
				Function_43(2, Function_345(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_43(2, Function_345(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_43(2, Function_345(Global_12976.f_152), 1);
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
				Function_43(2, Function_345(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_43(2, Function_345(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_43(2, Function_345(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_43(2, Function_345(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_43(2, Function_345(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_43(2, Function_345(Global_12976.f_152), 1);
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
				Function_43(2, Function_345(Global_12976.f_152), 0);
			}
			break;
	}
	Function_42(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x305F / 12383
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

int Function_43(int iParam0, char* cParam1, bool bParam2) //Position: 0x32BD / 12989
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
	Function_344(iParam0, cParam1, 0, 1);
	iVar1 = Function_44();
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

int Function_44() //Position: 0x3442 / 13378
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
	Function_45();
	return 0;
}

void Function_45() //Position: 0x34E1 / 13537
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
		Function_46(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_46(int iParam0) //Position: 0x3590 / 13712
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

float Function_47(int iParam0) //Position: 0x35EE / 13806
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x3627 / 13863
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
		Function_60(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_59(iParam0);
	if (bParam2)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_49(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x38C2 / 14530
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_58(390))), 32);
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
					bVar19 = (Function_47(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_47(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_53(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_50(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_350(), &Var9);
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

var Function_50(int iParam0) //Position: 0x3EEF / 16111
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3F00 / 16128
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_52(char* cParam0, bool bParam1) //Position: 0x3FF5 / 16373
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_53(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4010 / 16400
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_55(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_54(Function_55(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_54(int iParam0, int iParam1) //Position: 0x4075 / 16501
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_55(int iParam0, bool bParam1) //Position: 0x4087 / 16519
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4099 / 16537
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x41C9 / 16841
{
	return Global_35278[iParam020].f_48;
}

var Function_58(int iParam0) //Position: 0x41D8 / 16856
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_59(int iParam0) //Position: 0x4215 / 16917
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

int Function_60(int iParam0, bool bParam1, bool bParam2) //Position: 0x43AF / 17327
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

int Function_61(int iParam0, bool bParam1, int iParam2) //Position: 0x45F3 / 17907
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
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_62(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x47EE / 18414
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
	Function_60(iParam0, TO_FLOAT(bParam1), 1);
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_63(int iParam0, bool bParam1) //Position: 0x4A0E / 18958
{
	bool bVar0;
	int iVar1;
	
	Function_61(iParam0, bParam1, 0);
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
	iVar1 = Function_64(iParam0, 4294967295);
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
	iVar1 = Function_44();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_64(int iParam0, int iParam1) //Position: 0x4BAA / 19370
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

int Function_65(int iParam0, bool bParam1) //Position: 0x4BEB / 19435
{
	bool bVar0;
	int iVar1;
	
	Function_62(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_64(iParam0, 4294967295);
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
	iVar1 = Function_44();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_66(int iParam0) //Position: 0x4D88 / 19848
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_67(var uParam0, var uParam1) //Position: 0x4DC9 / 19913
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_351(0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0);
	bVar1 = Function_68();
	*uParam1 = 0;
	if (IS_ACTOR_VALID(bVar1) && Global_3380)
	{
		*uParam0 = 1;
		Function_33(&Global_12976 + 36 + 20, 16);
		return bVar1;
	}
	if (Global_3380 && Function_6((&Global_12976 + 36)->f_20, 16))
	{
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!IS_ACTOR_VALID(GET_RIDER(bVar0)))
			{
				*uParam0 = 0;
				return bVar0;
			}
		}
		*uParam1 = 1;
		return "";
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		*uParam0 = 0;
		return bVar0;
	}
	return "";
}

var Function_68() //Position: 0x4E50 / 20048
{
	if (IS_ACTOR_VALID(Global_12976.f_72) && Global_3380)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_72);
		return Global_12976.f_72;
	}
	return "";
}

void Function_69(var uParam0, int iParam1) //Position: 0x4E7E / 20094
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_70(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4E8D / 20109
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_71(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_71(int iParam0) //Position: 0x4F08 / 20232
{
	char* cVar0[16];
	
	if (!Function_72())
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

bool Function_72() //Position: 0x4F47 / 20295
{
	if (Function_6(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_73() //Position: 0x4F62 / 20322
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

bool Function_74() //Position: 0x4F94 / 20372
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_75(int iParam0) //Position: 0x4FBF / 20415
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_76(int iParam0, bool bParam1) //Position: 0x4FDB / 20443
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_77(bool bParam0) //Position: 0x4FFB / 20475
{
	return Function_78(Global_79336, bParam0);
}

int Function_78(var uParam0, bool bParam1) //Position: 0x500A / 20490
{
	return (uParam0 && bParam1) == 0;
}

bool Function_79() //Position: 0x5017 / 20503
{
	if (Function_81())
	{
		return (Function_80() != 1 || Function_80() != 0);
	}
	return 0;
}

int Function_80() //Position: 0x5030 / 20528
{
	return Global_79349.f_16;
}

bool Function_81() //Position: 0x503C / 20540
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_82() //Position: 0x5045 / 20549
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

void Function_83(bool bParam0, float fParam1) //Position: 0x5142 / 20802
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
	Function_82();
	Function_73();
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

bool Function_84(bool bParam0) //Position: 0x5240 / 21056
{
	if (Global_74542[bParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_85(int iParam0) //Position: 0x5255 / 21077
{
	if (!Function_87(iParam0))
	{
		return 1;
	}
	return Function_86(&(Global_29008[iParam0]), 4);
}

bool Function_86(var uParam0, int iParam1) //Position: 0x5271 / 21105
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x528D / 21133
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_88(int iParam0, int iParam1) //Position: 0x52A3 / 21155
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_89() //Position: 0x52B6 / 21174
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	
	Global_3387 = IS_POSITION_INDOORS(Vector(Global_34574, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f));
	bVar0 = Function_81();
	bVar1 = (bVar0 || Global_29007 == 5);
	bVar2 = (bVar1 && !bVar0);
	fVar3 = 2.5f;
	bVar4 = Function_338();
	bVar5 = (IS_ACTOR_VALID(GET_MOUNT(bVar4)) || IS_ACTOR_VALID(GET_VEHICLE(bVar4)));
	if (Function_93())
	{
		iVar6 = 12;
	}
	else if (Global_8722 < 0.1f)
	{
		iVar6 = 11;
	}
	else if (Global_3403 && bVar5)
	{
		iVar6 = 10;
	}
	else if (Global_3387 && bVar1)
	{
		iVar6 = 9;
	}
	else
	{
		fVar7 = Function_92(bVar4, 1);
		if (Global_3386)
		{
			if (bVar5)
			{
				iVar6 = Function_91(fVar7, 1, 7, 8);
			}
			else
			{
				iVar6 = Function_91(fVar7, 0, 5, 6);
			}
		}
		else if (bVar5)
		{
			iVar6 = Function_91(fVar7, 1, 3, 4);
		}
		else
		{
			iVar6 = Function_91(fVar7, 0, 1, 2);
		}
	}
	if ((Global_3387 && bVar2) || Function_90(2097152))
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
	if (Global_63096 || HUD_IS_FADED())
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
			SET_HUD_MAP_SCALE_OVERRIDE(Global_8722, fVar3);
			break;
		
		case 0x0000000C:
			SET_HUD_MAP_SCALE_OVERRIDE(225.0f, fLocal_11);
			break;
		
		default:
			break;
	}
	return;
}

bool Function_90(int iParam0) //Position: 0x54E8 / 21736
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_91(float fParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5504 / 21764
{
	float fVar0;
	float fVar1;
	
	if (bParam1)
	{
		fVar0 = 2.5f;
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

float Function_92(bool bParam0, bool bParam1) //Position: 0x555B / 21851
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_93() //Position: 0x557A / 21882
{
	return fLocal_7 < 0.0f;
}

void Function_94() //Position: 0x5584 / 21892
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_106();
	bVar1 = Function_105(8);
	if (bLocal_4)
	{
		if (Function_104(14, 1, 1) && !bVar0)
		{
			if (!Function_77(8))
			{
				Function_102(8);
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
		else if (Function_77(8))
		{
			if (iLocal_6)
			{
				bVar0 = true;
			}
			Function_99();
			Function_97(8);
		}
		if (bVar0)
		{
			fLocal_7 = 0.0f;
		}
		if (fLocal_7 < 0.0f)
		{
			fLocal_7 = (fLocal_7 - GET_UNWARPED_REALTIME_SECONDS());
			Function_96();
		}
		else
		{
			Function_95();
		}
	}
	else
	{
		if (IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 14, 1, true) && !bVar0)
		{
			if (bVar1)
			{
				Function_99();
			}
			if (!Function_81())
			{
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
			else if (fLocal_8 >= fLocal_13)
			{
				fLocal_8 = (fLocal_8 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!Function_77(32))
			{
				Function_102(32);
				fLocal_9 = fLocal_12;
			}
			else
			{
				fLocal_9 = (fLocal_9 - GET_UNWARPED_REALTIME_SECONDS());
			}
		}
		else
		{
			iLocal_6 = 0;
			if (fLocal_8 < 0.0f)
			{
				if (Function_77(32))
				{
					Function_99();
					if (fLocal_9 >= 0.0f)
					{
						Function_97(32);
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
			if (!Function_81())
			{
				if (fLocal_7 < 0.0f)
				{
					fLocal_7 = (fLocal_7 - GET_UNWARPED_REALTIME_SECONDS());
				}
			}
		}
		if (Function_81())
		{
			if (fLocal_7 < 0.0f)
			{
				fLocal_7 = (fLocal_7 - GET_UNWARPED_REALTIME_SECONDS());
			}
		}
	}
	return;
}

void Function_95() //Position: 0x5702 / 22274
{
	if (iLocal_5)
	{
		iLocal_5 = 0;
		Function_97(32);
	}
	return;
}

void Function_96() //Position: 0x5715 / 22293
{
	if (!iLocal_5)
	{
		iLocal_5 = 1;
		Function_102(32);
	}
	return;
}

void Function_97(int iParam0) //Position: 0x5729 / 22313
{
	Function_98(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_98(int iParam0, int iParam1) //Position: 0x5762 / 22370
{
	Function_412(iParam0, iParam1);
	return;
}

void Function_99() //Position: 0x576F / 22383
{
	if (Function_105(8))
	{
		Function_101();
	}
	Function_100(8, 0, 1);
	return;
}

void Function_100(int iParam0, bool bParam1, int iParam2) //Position: 0x5787 / 22407
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_33(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_412(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_101() //Position: 0x57AF / 22447
{
	Function_100(32768, 1, 0);
	return;
}

void Function_102(int iParam0) //Position: 0x57BE / 22462
{
	Function_103(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_103(var uParam0, int iParam1) //Position: 0x5817 / 22551
{
	Function_33(uParam0, iParam1);
	return;
}

bool Function_104(int iParam0, int iParam1, bool bParam2) //Position: 0x5824 / 22564
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

bool Function_105(bool bParam0) //Position: 0x58A1 / 22689
{
	return Function_6(Global_76905.f_132, bParam0);
}

int Function_106() //Position: 0x58B2 / 22706
{
	if (Global_63096)
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
	if (Global_30920)
	{
		return 1;
	}
	if (Global_3411)
	{
		return 1;
	}
	if (Function_81())
	{
		if (!UI_ISFOCUSED("HudSceneOnline"))
		{
			return 1;
		}
	}
	if (!UI_ISFOCUSED("HudScene"))
	{
		return 1;
	}
	if (IS_PS3())
	{
		if (Function_104(0, 1, 0))
		{
			return 1;
		}
	}
	if (Function_104(2, 1, 0))
	{
		return 1;
	}
	return 0;
}

int Function_107(bool bParam0) //Position: 0x5943 / 22851
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return 0;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 0;
	}
	if (Global_63096)
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
	if (Global_63082)
	{
		return 0;
	}
	if (*bParam0 == -1.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - *bParam0) < 3.0f)
		{
			*bParam0 = -1.0f;
			Global_49307 = 0;
		}
		else
		{
			return 0;
		}
	}
	iVar0 = (Global_49199 - 1);
	if (!Global_49205[iVar020].f_48 != 4294967295)
	{
		bVar1 = STRING_TO_INT(&(Global_49205[iVar020]));
		iVar2 = Function_64(Global_49205[iVar020].f_68, iVar0);
		if (iVar2 >= 4294967295)
		{
			if (Function_109(iVar0, iVar2))
			{
				Function_45();
				return 1;
			}
		}
		if (Global_49199[iVar0] != 0.0f)
		{
			if (Global_49205[iVar020].f_72 == 5 && Global_49205[iVar020].f_72 == 6)
			{
				Function_45();
				return 1;
			}
		}
		if (bVar1 < 4294967295 && bVar1 > 696)
		{
			switch (Global_49205[iVar020].f_72)
			{
				case 0x00000000:
				case 0x00000001:
					Function_49(bVar1, 1, Global_49199[iVar0], 1, 1, 0x40400000, 0, 0);
					*bParam0 = GET_CURRENT_GAME_TIME();
					Global_49307 = 1;
					break;
				
				case 0x00000002:
				case 0x00000003:
					Function_49(bVar1, 0, Global_49199[iVar0], 1, 1, 0x40400000, 0, 0);
					*bParam0 = GET_CURRENT_GAME_TIME();
					Global_49307 = 1;
					break;
				
				case 0x00000004:
					Function_49(bVar1, 1, Global_49199[iVar0], 1, 0, 3.0f, 1, 0);
					*bParam0 = GET_CURRENT_GAME_TIME();
					Global_49307 = 1;
					break;
				
				case 0x00000005:
					Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar1, *(&Global_49205[iVar020] + 16), 3.0f, 1);
					*bParam0 = GET_CURRENT_GAME_TIME();
					Global_49307 = 1;
					break;
				
				case 0x00000006:
					Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar1, *(&Global_49205[iVar020] + 16), 3.0f, 0);
					*bParam0 = GET_CURRENT_GAME_TIME();
					Global_49307 = 1;
					break;
				
				default:
					LOG_ERROR("STAT_UPDATE_QUEUE: Unknown Buffer Operation!");
					break;
			}
			if ((GET_CURRENT_GAME_TIME() - Global_83818) <= 1.0f)
			{
				switch (bVar1)
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
	Function_45();
	return 1;
}

void Function_108(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x5BB3 / 23475
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

bool Function_109(int iParam0, int iParam1) //Position: 0x5C36 / 23606
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam0 <= 0 && iParam1 <= 0)
	{
		if (Global_49205[iParam020].f_48 != Global_49205[iParam120].f_48)
		{
			LOG_ERROR("STAT_MERGE_STAT_UPDATES: Attempting to merge two Stats of different Type!");
			return 0;
		}
		fVar0 = Global_49199[iParam0];
		fVar1 = Global_49199[iParam1];
		bVar3 = false;
		if (Global_49205[iParam020].f_72 == 2)
		{
			fVar0 = (fVar0 * -1.0f);
		}
		if (Global_49205[iParam020].f_72 == 3)
		{
			fVar0 = (fVar0 * -1.0f);
			bVar3 = true;
		}
		if (Global_49205[iParam120].f_72 == 2)
		{
			fVar1 = (fVar1 * -1.0f);
		}
		if (Global_49205[iParam120].f_72 == 3)
		{
			fVar1 = (fVar1 * -1.0f);
			bVar3 = true;
		}
		bVar2 = (fVar0 + fVar1);
		if (bVar2 < 0.0f)
		{
			if (bVar3)
			{
				Global_49205[iParam120].f_72 = 1;
			}
			else
			{
				Global_49205[iParam120].f_72 = 0;
			}
		}
		else if (bVar3)
		{
			Global_49205[iParam120].f_72 = 3;
		}
		else
		{
			Global_49205[iParam120].f_72 = 2;
		}
		bVar2 = FABS(bVar2);
		Global_49199[iParam1] = bVar2;
		return 1;
	}
	return 0;
}

int Function_110(int iParam0) //Position: 0x5D71 / 23921
{
	int iVar0;
	
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (IS_PLAYER_DEADEYE(false))
		{
			return 0;
		}
	}
	return 0;
	if (IS_STAT_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_49307)
	{
		if ((GET_CURRENT_GAME_TIME() - *iParam0) > 1.0f && IS_STAT_MESSAGE_SHOWING())
		{
			return 0;
		}
	}
	if (*iParam0 == -1.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - *iParam0) < 3.0f)
		{
			*iParam0 = -1.0f;
			Global_63082 = 0;
		}
		else
		{
			return 0;
		}
	}
	iVar0 = (Global_63041 - 1);
	if (!Global_63041[iVar08] != 4294967295)
	{
		if (!StackVal > 1)
		{
			Function_113(StackVal, Global_63041[iVar08]);
			*iParam0 = GET_CURRENT_GAME_TIME();
			Global_63082 = 1;
		}
	}
	Function_112(iVar0);
	Function_111();
	return 1;
}

void Function_111() //Position: 0x5E17 / 24087
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63041 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63041[iVar08] = Global_63041[iVar18];
		Global_63041[iVar08].f_4 = StackVal;
		*(&Global_63041[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63041[iVar18] + 8) };
		*(&Global_63041[iVar08] + 24) = { StackVal, *(&Global_63041[iVar18] + 24) };
		Function_112(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_112(int iParam0) //Position: 0x5E8E / 24206
{
	Global_63041[iParam08] = 4294967295;
	Global_63041[iParam08].f_4 = 4294967295;
	strcpy(&Global_63041[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63041[iParam08] + 24, "NHIL", 8);
	return;
}

int Function_113(int iParam0, bool bParam1) //Position: 0x5ECA / 24266
{
	struct<2> Var0;
	char* cVar2[16];
	
	if (iParam0 >= Global_50170)
	{
		LOG_ERROR("PVP_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	Var0 = { StackVal, *(&Global_50170[iParam022] + 16) };
	strcpy(&cVar2, "AM_rank", 16);
	if (bParam1 != 10 && Function_81())
	{
		strcpy(&cVar2, "AM_MP_rank", 16);
	}
	stradd(&cVar2, INT_TO_STRING(bParam1), 16);
	if (!Global_49306)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(&Var0), UI_GET_STRING(&cVar2), 3.0f, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return 1;
}

int Function_114(int iParam0, int iParam1) //Position: 0x5F71 / 24433
{
	bool bVar0;
	
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (IS_PLAYER_DEADEYE(false))
		{
			return 0;
		}
	}
	return 0;
	if (IS_STAT_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_49307)
	{
		if ((GET_CURRENT_GAME_TIME() - *iParam1) > 1.0f && IS_STAT_MESSAGE_SHOWING())
		{
			return 0;
		}
	}
	if (*iParam1 == -1.0f)
	{
		if ((GET_CURRENT_GAME_TIME() - *iParam1) < 3.0f)
		{
			*iParam1 = -1.0f;
			Global_63082 = 0;
		}
		else
		{
			return 0;
		}
	}
	bVar0 = (Global_63000 - 1);
	if (*iParam0)
	{
		PRINTSTRING("iMsgToUpdate: ");
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING("MissionID: ");
		PRINTINT(Global_63000[bVar08]);
		PRINTNL();
		PRINTSTRING("Rank: ");
		PRINTINT(StackVal);
		PRINTNL();
		PRINTSTRING("nMessage: ");
		PRINTSTRING(&Global_63000[bVar08] + 8);
		PRINTNL();
		PRINTSTRING("Parameter: ");
		PRINTSTRING(&Global_63000[bVar08] + 24);
		PRINTNL();
	}
	if (!Global_63000[bVar08] != 4294967295)
	{
		if (!StackVal > 1)
		{
			Function_117(StackVal, Global_63000[bVar08]);
			*iParam1 = GET_CURRENT_GAME_TIME();
			Global_63082 = 1;
		}
	}
	Function_116(bVar0);
	Function_115();
	return 1;
}

void Function_115() //Position: 0x60B0 / 24752
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63000 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63000[iVar08] = Global_63000[iVar18];
		Global_63000[iVar08].f_4 = StackVal;
		*(&Global_63000[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63000[iVar18] + 8) };
		*(&Global_63000[iVar08] + 24) = { StackVal, *(&Global_63000[iVar18] + 24) };
		Function_116(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_116(int iParam0) //Position: 0x6127 / 24871
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

int Function_117(int iParam0, int iParam1) //Position: 0x6163 / 24931
{
	struct<2> Var0;
	char* cVar2[16];
	
	if (Function_81() || Global_34165.f_44)
	{
		if (iParam0 >= Global_49399)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (iParam0 >= Global_49310)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	if (Function_81() || Global_34165.f_44)
	{
		Var0 = { StackVal, *(&Global_49399[iParam022] + 16) };
	}
	else
	{
		Var0 = { StackVal, *(&Global_49310[iParam022] + 16) };
	}
	strcpy(&cVar2, "AM_rank", 16);
	if (iParam1 != 10 && Function_81())
	{
		strcpy(&cVar2, "AM_MP_rank", 16);
	}
	stradd(&cVar2, INT_TO_STRING((iParam1 - 1)), 16);
	if (!Global_49306)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(&Var0), UI_GET_STRING(&cVar2), 3.0f, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return 1;
}

void Function_118(int iParam0) //Position: 0x6275 / 25205
{
	char* cVar0[64];
	int iVar16;
	
	if ((Global_34165.f_36 || Global_34165.f_40) || Global_34165.f_44)
	{
		return;
	}
	if (IS_GAME_RESETTING())
	{
		return;
	}
	if (!iLocal_80)
	{
		if (!iLocal_83)
		{
			if (Function_125(iParam0))
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
				}
				else if (((HUD_IS_FADED() && !HUD_IS_FADING()) && !DECOR_CHECK_EXIST(Global_34573, "resetignorefadestate")) && Global_6270 == 7)
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				else if (((!HUD_IS_FADED() && !HUD_IS_FADING()) || DECOR_CHECK_EXIST(Global_34573, "resetignorefadestate")) || Global_6270 != 7)
				{
					if (!UI_ISACTIVE("NeutralScreen"))
					{
						UI_PUSH("NeutralScreen");
					}
					CANCEL_DEADEYE();
					UNK_0xE6C1DBD9(0);
					SET_PLAYER_CONTROL(false, 0, 0, 0);
					Global_3396 = 1;
					iLocal_83 = 1;
					if (Global_6270 != 7)
					{
						iVar16 = 0;
						if (!IS_ACTOR_VALID(Global_34573))
						{
							strcpy(&cVar0, "DLC6_BEAT_FAIL_SONG_01", 64);
							iVar16 = 1;
						}
						else if (!IS_ACTOR_ALIVE(Global_34573))
						{
							strcpy(&cVar0, "DLC6_BEAT_FAIL_SONG_01", 64);
							iVar16 = 1;
						}
						else
						{
							stradd(&cVar0, "DLC6_", 64);
							if (Global_6270 != 0)
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
		else if (*iParam0 < -1.0f)
		{
			if (((GET_CURRENT_GAME_TIME() - *iParam0) <= 3.0f || ((GET_CURRENT_GAME_TIME() - *iParam0) <= 1.0f && IS_BUTTON_PRESSED(Function_124(), 6, 1, false))) || ((Global_6270 == 1 && Global_3380) && !DECOR_CHECK_EXIST(Global_34573, "ResetMenuDelay")))
			{
				if (Global_6270 == 0 && Global_6270 == 8)
				{
					switch (Global_6270)
					{
						case 0x00000001:
						case 0x00000002:
						case 0x00000003:
						case 0x00000005:
							if (Global_6270 == 1)
							{
								if (Function_72())
								{
									UI_SET_TEXT("DeathScreen_Failed", "Undead_Capitalized");
								}
								else
								{
									UI_SET_TEXT("DeathScreen_Failed", "DeathScreen_Died");
								}
								UI_SET_TEXT("MissionFailed_Explanation", "Common_Null");
							}
							else
							{
								UI_SET_TEXT("DeathScreen_Failed", "DeathScreen_Failed");
								UI_SET_TEXT("MissionFailed_Explanation", "MissionFailedBuffer");
							}
							UI_INCLUDE("MissionFailed_Retry");
							UI_SET_TEXT("MissionFailed_Cancel", "DeathScreen_Cancel");
							UI_SET_TEXT("Mission_Failed_Cancel_Confirmation_Popup", "MissionFailed_Cancel_Confirmation_Popup_Des");
							UI_SET_TEXT("MissionFailed_Jump", "DeathScreen_Jump");
							UI_SET_TEXT("Mission_Failed_Jump_Confirmation_Popup", "MissionFailed_Jump_Confirmation_Popup_Des");
							*iParam0 = -1.0f;
							iLocal_80 = 1;
							bLocal_79 = true;
							if (DECOR_CHECK_EXIST(Global_34573, "resetignorefadestate"))
							{
								DECOR_REMOVE(Global_34573, "resetignorefadestate");
							}
							break;
						
						case 0x00000007:
							*iParam0 = -1.0f;
							Function_123();
							LOAD_SOFT_SAVE(1);
							break;
						
						default:
							break;
					}
					Global_6270 = 0;
				}
				else
				{
					if (bLocal_182)
					{
						*iParam0 = -1.0f;
						iLocal_80 = 1;
						bLocal_79 = true;
					}
					if (!bLocal_79)
					{
						*iParam0 = -1.0f;
						iLocal_80 = 0;
						Global_30920 = 0;
						Global_3395 = 1;
						Global_3396 = 0;
						Function_123();
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
				}
				Function_122();
			}
		}
	}
	if (iLocal_80)
	{
		iLocal_80 = 0;
		Global_30920 = 0;
		if (bLocal_79)
		{
			Function_122();
			if (Function_339("autoloadsave") || IS_LAUNCH_RETAIL())
			{
			}
			iLocal_81 = 1;
			if (Function_121(Global_6271) != 1 && !bLocal_182)
			{
				if (Global_3422[Global_626940].f_104 == 1)
				{
					UI_EXCLUDE("MissionFailed_Cancel");
				}
				if (Function_119(StackVal) != 1 || ((Global_34165.f_60 > 3 && !Function_339("alwaysshowskip")) && !Global_3381))
				{
					UI_EXCLUDE("MissionFailed_Jump");
				}
			}
			Global_3396 = 0;
			Function_123();
			if (Global_3420)
			{
				UI_EXCLUDE("MissionFailed_Jump");
			}
			UI_PUSH("MissionFailedMenu");
			if (Global_3380)
			{
				DECOR_SET_BOOL(Global_34573, "gbStoryMissionRunning", true);
			}
			UI_POP("NeutralScreen");
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN_NOW(999.0f, 1065353216);
			}
			if (Function_121(Global_6271) == 6)
			{
			}
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
		}
	}
	if (UI_ISACTIVE("MissionFailedMenu") && Global_3395)
	{
		if (IS_PLAYER_CONTROLLABLE(0))
		{
			SET_PLAYER_CONTROL(false, 0, 0, 0);
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

int Function_119(int iParam0) //Position: 0x6967 / 26983
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_120(int iParam0) //Position: 0x6987 / 27015
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_121(int iParam0) //Position: 0x699E / 27038
{
	if (!Function_120(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_122() //Position: 0x69B9 / 27065
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_SMALL_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_HELP();
	return;
}

void Function_123() //Position: 0x69CE / 27086
{
	struct<133> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_120 = StackVal;
	Var0.f_124 = StackVal;
	Var0.f_128 = Global_34068.f_12;
	Var0.f_132 = Global_34068.f_16;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

int Function_124() //Position: 0x6A11 / 27153
{
	bool bVar0;
	
	bVar0 = Function_338();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

bool Function_125(int iParam0) //Position: 0x6A2B / 27179
{
	if (Function_81())
	{
		return 0;
	}
	if (Function_156())
	{
		return 0;
	}
	if (*iParam0 < -1.0f)
	{
		return 1;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		if (!UI_ISACTIVE("NeutralScreen"))
		{
			UI_PUSH("NeutralScreen");
		}
		*iParam0 = GET_CURRENT_GAME_TIME();
		return 1;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		if (!UI_ISACTIVE("NeutralScreen"))
		{
			UI_PUSH("NeutralScreen");
			if (!Global_3380)
			{
				if (Function_72())
				{
					UI_SET_TEXT("DeathScreen_Failed", "Undead_Capitalized");
				}
				else
				{
					UI_SET_TEXT("DeathScreen_Failed", "DeathScreen_Died");
				}
				UI_SET_TEXT("MissionFailed_Explanation", "Common_Null");
				UI_EXCLUDE("MissionFailed_Retry");
				UI_INCLUDE("MissionFailed_Jump");
				if (!Global_3421)
				{
					UI_INCLUDE("MissionFailed_Cancel");
				}
				else
				{
					UI_EXCLUDE("MissionFailed_Cancel");
				}
				UI_SET_TEXT("MissionFailed_Cancel", "DeathScreen_ReloadAutosave");
				UI_SET_TEXT("Mission_Failed_Cancel_Confirmation_Popup", "DeathScreen_ReloadAutosave_Des");
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					bLocal_182 = true;
					UI_SET_TEXT("MissionFailed_Jump", "DeathScreen_ReloadTown");
					UI_SET_TEXT("Mission_Failed_Jump_Confirmation_Popup", "DeathScreen_ReloadTown_Des");
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					bLocal_182 = true;
					UI_SET_TEXT("MissionFailed_Jump", "DeathScreen_RetryGY");
				}
				else
				{
					if (Function_155(20))
					{
						Global_74542[2010].f_36 = 0.0f;
						Function_154(20);
						if (!Function_84(21))
						{
							Function_154(21);
							Function_412(&Global_63541[2155] + 144, 64);
							Function_152(21, 0);
						}
						Function_412(&Global_63541[2055] + 144, 2048);
					}
					Function_27(Global_34573);
					if (Function_127(StackVal, StackVal, Function_27(Global_34573), 0, 0, 0))
					{
						bLocal_182 = true;
						if (Function_126())
						{
							UI_SET_TEXT("MissionFailed_Jump", "DeathScreen_ReloadNearGY");
							UI_SET_TEXT("Mission_Failed_Jump_Confirmation_Popup", "DeathScreen_ReloadNearGY_Des");
						}
						else
						{
							UI_SET_TEXT("MissionFailed_Jump", "DeathScreen_ReloadNear");
							UI_SET_TEXT("Mission_Failed_Jump_Confirmation_Popup", "DeathScreen_ReloadNear_Des");
						}
					}
				}
			}
		}
		if (GET_LAST_HIT_FLAGS(Global_34573) == 8192)
		{
			*iParam0 = (GET_CURRENT_GAME_TIME() - 3.0f);
		}
		else
		{
			*iParam0 = GET_CURRENT_GAME_TIME();
		}
		return 1;
	}
	if (IS_ACTOR_HOGTIED(Global_34573))
	{
		if (!Function_410(2048) && !Global_63096)
		{
			*iParam0 = GET_CURRENT_GAME_TIME();
			return 1;
		}
	}
	if (!Global_6270 != 0)
	{
		if (!Global_6270 != 8)
		{
			if (!Global_6270 != 4)
			{
				if (IS_ACTOR_ALIVE(Global_34573))
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (DECOR_CHECK_EXIST(Global_34573, "ResetMenuDelay"))
				{
					*iParam0 = (GET_CURRENT_GAME_TIME() + DECOR_GET_FLOAT(Global_34573, "ResetMenuDelay"));
				}
				else
				{
					*iParam0 = GET_CURRENT_GAME_TIME();
				}
				return 1;
			}
		}
	}
	return 0;
}

bool Function_126() //Position: 0x6F42 / 28482
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_86(&(Global_29008[Global_30717[0]]), 4))
	{
		bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, bVar0))
		{
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30640[4]]), 4))
	{
		bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, bVar0))
		{
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30640[12]]), 4))
	{
		bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, bVar0))
		{
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30658[0]]), 4))
	{
		bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, bVar0))
		{
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30693[4]]), 4))
	{
		bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_127(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x70E5 / 28901
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_26(StackVal, StackVal, vParam0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	bVar0 = false;
	Global_34165.f_16 = 0;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	if (bParam3)
	{
		Global_34165.f_24 = Global_29006;
		if (IS_ACTOR_VALID(bParam4))
		{
			Function_27(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_27(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_151(Global_34573);
		}
		Global_34165 = { StackVal, StackVal, vParam0 };
		if (IS_PS3())
		{
			Global_34165.f_4 = (StackVal + 0.1f);
		}
		bVar0 = true;
	}
	else if (bParam5)
	{
		Global_34165.f_24 = Global_29006;
		if (!Function_150(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_146(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
			{
				vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar11, StackVal) };
				VNORMALIZE(&vVar14);
				Global_34165.f_12 = UNK_0x9C40E671(&vVar14);
				Global_34165 = { StackVal, StackVal, vVar8 };
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_34165 + 68)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_150(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_144(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_87(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_146(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_143(StackVal, StackVal, vVar21, 1);
				if ((StackVal && ((iVar27 == Global_30633[0] && iVar27 == Global_30633[2]) && iVar27 == Global_30633[1]) != 3) && Global_29004 != 1)
				{
					Global_34165 = { -3515.646f, 19.234f, 4205.955f };
					Global_34165.f_12 = 225.789f;
				}
				else if (Global_34165.f_24 == Global_30717[1])
				{
					Global_34165 = { -66.023f, 116.861f, 1411.445f };
					Global_34165.f_12 = 64.688f;
				}
				else if (Global_34165.f_24 == Global_30658[3])
				{
					Global_34165 = { -4504.957f, 20.121f, 3406.793f };
					Global_34165.f_12 = 324.417f;
				}
				else if (Global_34165.f_24 == Global_30707[1])
				{
					Global_34165 = { -746.495f, 67.416f, 3414.803f };
					Global_34165.f_12 = 316.104f;
				}
				else if (Global_34165.f_24 == Global_30707[3])
				{
					Global_34165 = { 451.281f, 78.306f, 3474.125f };
					Global_34165.f_12 = 79.05f;
				}
				else
				{
					vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar21, vVar24, StackVal) };
					VNORMALIZE(&vVar28);
					Global_34165.f_12 = UNK_0x9C40E671(&vVar28);
					Global_34165 = { StackVal, StackVal, vVar21 };
				}
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else if (Global_29006 == Global_30723[0])
			{
				Global_34165 = { -737.414f, 178.366f, 782.796f };
				Global_34165.f_12 = 117.832f;
				Global_34165.f_24 = Global_30723[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_34165.f_24 = Global_29006;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_128();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_128() //Position: 0x74EC / 29932
{
	Function_139();
	Function_138();
	Function_138();
	Function_137();
	Function_137();
	Function_136();
	Function_136();
	Function_135(0);
	Function_135(0);
	if (!Function_81())
	{
		Function_133();
		Function_132();
		Function_131();
		Function_130();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_129();
	return;
}

void Function_129() //Position: 0x753E / 30014
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

void Function_130() //Position: 0x7644 / 30276
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

void Function_131() //Position: 0x7677 / 30327
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

void Function_132() //Position: 0x7805 / 30725
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

void Function_133() //Position: 0x79B9 / 31161
{
	Function_134(&Global_28260, 1, 0);
	return;
}

void Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0x79C7 / 31175
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
	
	bVar0 = Function_338();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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

struct<8> Function_135(char* cParam0) //Position: 0x7BB8 / 31672
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
					iVar2 = ((Function_66((50 + iVar4)) + Function_66((183 + iVar4))) + Function_66((90 + iVar4)));
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
	Function_48(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_136() //Position: 0x7C5E / 31838
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
	Function_48(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_137() //Position: 0x7CE7 / 31975
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
	Function_48(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_138() //Position: 0x7D7E / 32126
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
	Function_48(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_139() //Position: 0x7DFD / 32253
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_140(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_48(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_140(int iParam0, bool bParam1, int iParam2) //Position: 0x7E36 / 32310
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
	Function_60(iParam0, bParam1, 1);
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_49(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_141(int iParam0) //Position: 0x8042 / 32834
{
	if (!Function_142(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_142(int iParam0) //Position: 0x805C / 32860
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_143(vector3 vParam0, bool bParam3) //Position: 0x8072 / 32882
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

var Function_144(vector3 vParam0, float fParam3, int iParam4) //Position: 0x80DD / 32989
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_26(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_145(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_86(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_87(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_145(int iParam0) //Position: 0x81D7 / 33239
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_87(iParam0))
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

bool Function_146(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x822F / 33327
{
	bool bVar0;
	bool bVar1;
	struct<9> Var2;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_26(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_149(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) < 0)
	{
		UNK_0xDF93BD7C(bVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(bVar0, bVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, bVar1);
			bVar13 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(bVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_148(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(bVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(bVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -10.0f, &Var14, &iVar26);
		}
		Function_147(&uVar20);
		vVar32 = { StackVal, StackVal, Function_147(&uVar20) };
		Function_147(&iVar26);
		vVar35 = { StackVal, StackVal, Function_147(&iVar26) };
		GET_VOLUME_CENTER(bParam3, &vVar38);
		if (!bParam6)
		{
			if (VDIST(vVar32, vVar38) >= VDIST(vVar35, vVar38))
			{
				*uParam5 = { StackVal, StackVal, vVar32 };
			}
			else
			{
				*uParam5 = { StackVal, StackVal, vVar35 };
			}
		}
		else
		{
			vVar41 = { StackVal, StackVal, *uParam4 };
			*uParam4 = { StackVal, StackVal, vVar35 };
			if (!IS_POINT_IN_VOLUME(vVar32, bParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_147(int iParam0) //Position: 0x83D9 / 33753
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_148(vector3 vParam0) //Position: 0x83F8 / 33784
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_149(int iParam0, int iParam1) //Position: 0x8418 / 33816
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_150(var uParam0, var uParam1, int iParam2) //Position: 0x842B / 33835
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_86(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_86(&(Global_29008[Global_30693[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 285.436f;
			*uParam0 = { -1402.147f, 10.939f, 4317.528f };
			return 1;
		}
	}
	return 0;
}

var Function_151(bool bParam0) //Position: 0x865F / 34399
{
	return GET_HEADING(bParam0);
}

void Function_152(int iParam0, int iParam1) //Position: 0x866A / 34410
{
	if (Function_153(iParam0))
	{
		LOG_ERROR("SET_QUEST_SCRIPT_ACTIVATED: invalid quest!!");
		return;
	}
	Global_74542[iParam010].f_8 = iParam1;
	return;
}

bool Function_153(int iParam0) //Position: 0x86B6 / 34486
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_154(int iParam0) //Position: 0x86CB / 34507
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_29004)
	{
		case 0x00000000:
			strcpy(&cVar0, "FTR", 32);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "MEX", 32);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NOR", 32);
			break;
		
		default:
			PRINTSTRING("Unknown territory");
			PRINTINT(Global_29004);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_155(int iParam0) //Position: 0x882D / 34861
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

bool Function_156() //Position: 0x8842 / 34882
{
	if (!IS_ACTOR_ALIVE(Function_338()) && iLocal_81)
	{
		return 1;
	}
	iLocal_81 = 0;
	return 0;
}

void Function_157() //Position: 0x885E / 34910
{
	char* cVar0[64];
	
	Global_3412 = 0;
	stradd(&cVar0, "DLC6_", 64);
	switch (Global_3416)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			stradd(&cVar0, "BEAT_COMPLETE_SONG_01", 64);
			break;
		
		case 0x00000004:
		case 0x00000007:
			stradd(&cVar0, "MISSION_COMPLETE_SONG_01", 64);
			break;
		
		default:
			stradd(&cVar0, "MISSION_COMPLETE_SONG_01", 64);
			break;
	}
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	Global_3416 = 4294967295;
	Global_3412 = 0;
	return;
}

void Function_158(int iParam0) //Position: 0x8933 / 35123
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar0 = Function_338();
	if (!Function_366(1) || iParam0)
	{
		if (HAS_ITEM(Function_159(20), bVar0))
		{
			Function_406(1, 1);
		}
	}
	bVar2 = GET_WEAPON_EQUIPPED(bVar0, 5);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 5)
	{
		bVar2 = GET_WEAPON_IN_HAND(bVar0);
	}
	bVar3 = GET_WEAPON_EQUIPPED(bVar0, 6);
	if (bVar3 == 4294967295)
	{
		if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 6)
		{
			bVar3 = GET_WEAPON_IN_HAND(bVar0);
		}
	}
	bVar4 = GET_WEAPON_EQUIPPED(bVar0, true);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(bVar0) == 1)
	{
		bVar4 = GET_WEAPON_IN_HAND(bVar0);
	}
	bVar5 = GET_AMMOENUM_FOR_WEAPONENUM(bVar2);
	bVar6 = GET_AMMOENUM_FOR_WEAPONENUM(bVar4);
	if (!Function_366(1))
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, false);
			iVar1++;
		}
	}
	else if (bVar2 != 4294967295)
	{
		bVar7 = CEIL(_GET_AMMO_AMOUNT(bVar0, bVar5, 0));
		if (bVar7 == Global_12976.f_84 || bVar5 == Global_12976.f_88)
		{
			Global_12976.f_84 = bVar7;
			Global_12976.f_88 = bVar5;
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (iVar1 <= (Global_12976.f_84 / 7))
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1, false);
				}
				iVar1++;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1 + 7, false);
		iVar1++;
	}
	if (bVar4 != 4294967295)
	{
		bVar8 = CEIL(_GET_AMMO_AMOUNT(bVar0, bVar6, 0));
		if (bVar8 == Global_12976.f_92 || bVar6 == Global_12976.f_96)
		{
			Global_12976.f_92 = bVar8;
			Global_12976.f_96 = bVar6;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (iVar1 <= (Global_12976.f_92 / 6))
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1 + 17, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(bVar0, iVar1 + 17, false);
				}
				iVar1++;
			}
		}
	}
	return;
}

var Function_159(bool bParam0) //Position: 0x8ACF / 35535
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

void Function_160() //Position: 0x8BC0 / 35776
{
	var uVar0;
	struct<9> Var1;
	
	uVar0 = Function_166(Global_34573);
	switch (bLocal_87)
	{
		case 0x00000020:
		case 0x00000040:
			if (uVar0 & 32 != 0 && uVar0 & 64 != 0)
			{
				if (fLocal_88 > 0.0f)
				{
					fLocal_88 = (GET_CURRENT_GAME_TIME() + 2.0f);
				}
				else if (fLocal_88 > GET_CURRENT_GAME_TIME())
				{
					bLocal_87 = true;
					Global_3388 = 0;
					fLocal_88 = -1.0f;
				}
			}
			else if (fLocal_88 < 0.0f)
			{
				fLocal_88 = -1.0f;
			}
			break;
		
		case 0x00000200:
			break;
		
		default:
			if (uVar0 & 32 < 0 || uVar0 & 64 < 0)
			{
				if (fLocal_88 > 0.0f)
				{
					fLocal_88 = (GET_CURRENT_GAME_TIME() + 2.0f);
				}
				else if (fLocal_88 > GET_CURRENT_GAME_TIME())
				{
					bLocal_87 = 64;
					Global_3388 = 1;
					fLocal_88 = -1.0f;
				}
			}
			else if (fLocal_88 < 0.0f)
			{
				fLocal_88 = -1.0f;
			}
			break;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "swimming"))
	{
		DECOR_REMOVE(Global_34573, "swimming");
		KILL_ACTOR(Global_34573);
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return;
	}
	if ((IS_ACTOR_RIDING(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573)) || IS_ACTOR_DRIVING_VEHICLE(Global_34573))
	{
		fLocal_207 = 0.0f;
		return;
	}
	if (iLocal_84)
	{
		return;
	}
	GET_ACTOR_VELOCITY(Global_34573, &vVar1);
	if ((FABS(vVar1.x) < 0.15f || FABS(vVar1.y) < 0.1f) || FABS(vVar1.z) < 0.15f)
	{
		fLocal_207 = 0.0f;
		return;
	}
	if (GET_WEAPON_IN_HAND(Global_34573) != 33 || GET_WEAPON_IN_HAND(Global_34573) != 34)
	{
		fLocal_207 = 0.0f;
		return;
	}
	if (Function_162(Global_34573, 0, 0))
	{
		fLocal_207 = 0.0f;
		return;
	}
	if (IS_ACTOR_RAGDOLL(Global_34573))
	{
		fLocal_207 = 0.0f;
		return;
	}
	if (Function_16(StackVal, StackVal, Vector(Global_34574, StackVal, StackVal) + Vector(0.0f, 0.5f, 0.0f), 2.0f, 1.5f, 0, 1) > 4)
	{
		if (fLocal_207 > 1.0f)
		{
			fLocal_207 = GET_CURRENT_GAME_TIME();
		}
		else if (fLocal_207 + 1.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar4 = CREATE_OBJECTSET_IN_LAYOUT("deathSet", bLocal_86, 15, 1);
			Function_25(StackVal, StackVal, Vector(Global_34574, StackVal, StackVal) + Vector(0.0f, 0.5f, 0.0f), &bVar4, 2.0f, 1.5f, 0, 1);
			bVar6 = false;
			while (bVar6 <= GET_OBJECTSET_SIZE(bVar4))
			{
				if (!IS_ACTOR_VALID(bVar5))
				{
					bVar7 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar4));
					if (!Function_161(bVar7))
					{
						bVar5 = bVar7;
					}
				}
				bVar6++;
			}
			if (IS_ACTOR_VALID(bVar5))
			{
				SET_LINKED_ANIM_TARGET(bVar5, Global_34573);
				SET_ACTION_NODE_FOR_ACTOR(bVar5, "zombieC/Melee_AI/Strike/Grab/PlayerDeath");
				AI_IGNORE_ACTOR(Global_34573);
				iLocal_84 = 1;
			}
		}
	}
	else
	{
		fLocal_207 = 0.0f;
	}
	return;
}

bool Function_161(bool bParam0) //Position: 0x8E2C / 36396
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8E4C / 36428
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_165(bParam0))
	{
		return 1;
	}
	if (Function_164(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_163())
	{
		return 1;
	}
	return 0;
}

bool Function_163() //Position: 0x8F02 / 36610
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_164(bool bParam0) //Position: 0x8F19 / 36633
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_165(bool bParam0) //Position: 0x8F24 / 36644
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

int Function_166(bool bParam0) //Position: 0x8F32 / 36658
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = bParam0;
		if (IS_ACTOR_RIDING(bVar0))
		{
			bVar0 = GET_MOUNT(bVar0);
		}
		if (IS_ACTOR_INSIDE_VEHICLE(bVar0))
		{
			bVar0 = GET_VEHICLE(bVar0);
			while (!IS_ACTOR_VALID(bVar1) && bVar2 > GET_NUM_DRAFT_POSITIONS(bVar0))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar2, bVar0);
				bVar2++;
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar0 = bVar1;
			}
			else
			{
				bVar0 = bParam0;
			}
		}
		return GET_ACTOR_GROUND_MATERIAL(bVar0);
	}
	return 0;
}

void Function_167() //Position: 0x8FA0 / 36768
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	bool bVar13;
	bool bVar14;
	var uVar15;
	int iVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	bool bVar27;
	
	if (IS_TELEPORTATION(&vVar0))
	{
		Global_13112 = { StackVal, StackVal, vVar0 };
		Global_13112.f_4 = 95.0f;
		Global_13112.f_76 = 1;
		Global_13112.f_80 = 1;
		Global_13112.f_72 = Function_189(StackVal, StackVal, Global_13112, 1, 0, 1);
		if (Function_87(Global_13112.f_72))
		{
			Global_13112 = { 0.0f, 0.0f, 0.0f };
		}
	}
	if (!Function_26(StackVal, StackVal, Global_13112) || !Global_13112.f_72 != 4294967295)
	{
		Function_185(4294967286);
		fVar12 = GET_CURRENT_GAME_TIME();
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Function_338()));
		if (Global_13112.f_76)
		{
			HUD_FADE_TO_LOADING_SCREEN();
		}
		while (HUD_IS_FADING() && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
		if (Function_81())
		{
			Function_184(Function_338());
		}
		else
		{
			AI_IGNORE_ACTOR(Function_338());
			SET_ACTOR_INVULNERABILITY(Function_338(), 1);
		}
		CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
		STREAMING_SET_CUTSCENE_MODE(1);
		STREAMING_EVICT_ALL();
		bVar14 = GET_CURRENT_GAME_TIME();
		if (!Global_13112.f_72 != 4294967295 && Function_87(Global_13112.f_72))
		{
			if (!StackVal != 1)
			{
				if (Function_26(StackVal, StackVal, Global_13112))
				{
					bVar13 = Function_183(Global_13112.f_72);
					if (!IS_OBJECT_VALID(bVar13))
					{
						bVar13 = GET_OBJECT_FROM_VOLUME(StackVal);
					}
					GET_OBJECT_POSITION(bVar13, &Global_13112);
				}
			}
		}
		GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar15);
		Function_27(Function_338());
		vVar9 = { StackVal, StackVal, Function_27(Function_338()) };
		if (Function_87(Global_13112.f_72))
		{
		}
		if (IS_OBJECT_VALID(bVar13))
		{
			Function_182(StackVal, StackVal, Function_338(), Global_13112, GET_OBJECT_HEADING(bVar13), 1, 1, 1);
		}
		else
		{
			Function_182(StackVal, StackVal, Function_338(), Global_13112, UNK_0x9C40E671(&Global_13112 + 12), 1, 1, 1);
		}
		Global_3391 = 1;
		Global_3386 = 0;
		Function_179(1, 0, 1);
		Function_177();
		iVar18 = 0;
		while (iVar18 > 30 && !IS_EXITFLAG_SET())
		{
			if (fVar12 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar15);
				fVar12 = GET_CURRENT_GAME_TIME();
				Function_27(Function_338());
				vVar9 = { StackVal, StackVal, Function_27(Function_338()) };
			}
			WAIT(false);
			iVar18++;
		}
		CAMERA_RESET(0);
		fVar19 = 0.0f;
		while ((!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET()) && (!Function_81() || fVar19 > 30.0f))
		{
			if (fVar12 + 1.0f) > GET_CURRENT_GAME_TIME()
			{
				GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar15);
				fVar12 = GET_CURRENT_GAME_TIME();
			}
			fVar19 = (fVar19 + GET_UNWARPED_REALTIME_SECONDS());
			WAIT(false);
		}
		if (STREAMING_IS_WORLD_LOADED())
		{
		}
		else if (Function_81())
		{
			NET_LOG(true, "Streaming Session", "Bailed out on Teleport because STREAMING_IS_WORLD_LOADED took longer than %s", F2STR(30.0f, 3, 3), false, false, false);
		}
		if (!Global_13112.f_72 != 4294967295 && Function_87(Global_13112.f_72))
		{
			if (!StackVal != 6)
			{
				while (!(((Function_85(Global_13112.f_72) && Function_86(&(Global_29008[Global_13112.f_72]), 16)) && Function_86(&(Global_29008[Global_13112.f_72]), 64)) || Function_86(&(Global_29008[Global_13112.f_72]), 2048)) && !IS_EXITFLAG_SET())
				{
					if (Function_85(Global_13112.f_72))
					{
					}
					if (Function_86(&(Global_29008[Global_13112.f_72]), 16))
					{
					}
					if (Function_86(&(Global_29008[Global_13112.f_72]), 64))
					{
					}
					if (Function_86(&(Global_29008[Global_13112.f_72]), 2048))
					{
					}
					WAIT(false);
				}
				if (Function_85(Global_13112.f_72))
				{
				}
				if (Function_86(&(Global_29008[Global_13112.f_72]), 16))
				{
				}
				if (Function_86(&(Global_29008[Global_13112.f_72]), 64))
				{
				}
			}
			else
			{
				fVar20 = GET_CURRENT_GAME_TIME();
				while (!((Function_85(Global_29155[Global_13112.f_7210]) && Function_86(&(Global_29008[Global_29155[Global_13112.f_7210]]), 16)) && Function_86(&(Global_29008[Global_29155[Global_13112.f_7210]]), 64)) && !IS_EXITFLAG_SET())
				{
					if (Function_85(Global_29155[Global_13112.f_7210]))
					{
					}
					if (Function_86(&(Global_29008[Global_29155[Global_13112.f_7210]]), 16))
					{
					}
					if (Function_86(&(Global_29008[Global_29155[Global_13112.f_7210]]), 64))
					{
					}
					if (fVar20 + 2.0f) > GET_CURRENT_GAME_TIME()
					{
						Function_175(Global_29155[Global_13112.f_7210]);
						fVar20 = (GET_CURRENT_GAME_TIME() + 2.0f);
					}
					WAIT(false);
				}
				if (Function_85(Global_29155[Global_13112.f_7210]))
				{
				}
				if (Function_86(&(Global_29008[Global_29155[Global_13112.f_7210]]), 16))
				{
				}
				if (Function_86(&(Global_29008[Global_29155[Global_13112.f_7210]]), 64))
				{
				}
			}
			if (StackVal == 5)
			{
				vVar21 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_174(&Global_29155[Global_13112.f_7210] + 20) };
				if (Function_26(StackVal, StackVal, vVar21))
				{
					GET_POSITION(Global_34573, &vVar21);
				}
				Global_13112 = { StackVal, StackVal, vVar21 };
				*(&Global_13112 + 12) = { StackVal, StackVal, *(&vVar21 + 12) };
				Function_182(StackVal, StackVal, StackVal, Function_338(), vVar21, 1, 1, 1);
			}
		}
		if (!Function_26(StackVal, StackVal, *(&Global_13112 + 12)))
		{
			bVar27 = UNK_0x9C40E671(&Global_13112 + 12);
		}
		Function_171();
		while ((!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET()) && (!Function_81() || fVar19 < 30.0f))
		{
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar15);
			Function_27(Function_338());
			vVar9 = { StackVal, StackVal, Function_27(Function_338()) };
			fVar19 = (fVar19 + GET_UNWARPED_REALTIME_SECONDS());
			WAIT(false);
		}
		if (STREAMING_IS_WORLD_LOADED())
		{
		}
		else
		{
			NET_LOG(true, "Streaming Session", "Bailed out on Teleport because STREAMING_IS_WORLD_LOADED took longer than %s", F2STR(30.0f, 3, 3), false, false, false);
		}
		if (FIND_GROUND_INTERSECTION(&Global_13112, 99.9f, &vVar3, &uVar6))
		{
			if (Function_81())
			{
				Function_182(StackVal, StackVal, Function_338(), vVar3, bVar27, 1, 1, 1);
			}
			else if (!Global_13112.f_72 != 4294967295 && Function_87(Global_13112.f_72))
			{
				if (!StackVal != 5)
				{
					Function_182(StackVal, StackVal, Function_338(), vVar3, bVar27, 1, 1, 1);
				}
			}
			else
			{
				Function_182(StackVal, StackVal, Function_338(), vVar3, bVar27, 1, 1, 1);
			}
		}
		WAIT(false);
		GET_OBJECT_POSITION(GET_GAME_CAMERA(), &uVar15);
		Function_27(Function_338());
		vVar9 = { StackVal, StackVal, Function_27(Function_338()) };
		STREAMING_SET_CUTSCENE_MODE(0);
		CAMERA_RESET(0);
		bVar14 = (bVar14 - GET_CURRENT_GAME_TIME());
		bVar14 = (bVar14 * -1.0f);
		PRINTSTRING("WARNING: TELEPORT TOOK ");
		PRINTFLOAT(bVar14);
		PRINTSTRING(" (game) seconds!");
		PRINTNL();
		if (Global_13112.f_80)
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN_NOW(0.5f, 1065353216);
		}
		if (Function_81())
		{
			Function_168(Function_338(), 0);
		}
		else
		{
			AI_STOP_IGNORING_ACTORS();
			SET_ACTOR_INVULNERABILITY(Function_338(), 0);
		}
		Global_3391 = 0;
		Global_13112 = { 0.0f, 0.0f, 0.0f };
		*(&Global_13112 + 12) = { 0.0f, 0.0f, 0.0f };
		Global_13112.f_72 = 4294967295;
		strcpy(&Global_13112 + 24, "", 24);
		strcpy(&Global_13112 + 48, "", 24);
		Global_13112.f_76 = 1;
		Global_13112.f_80 = 1;
	}
	return;
}

void Function_168(bool bParam0, int iParam1) //Position: 0x968E / 38542
{
	struct<5> Var0;
	
	Function_170(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_169(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

bool Function_169(bool bParam0) //Position: 0x96E4 / 38628
{
	return Function_78(Global_78617.f_52, bParam0);
}

void Function_170(int iParam0, bool bParam1) //Position: 0x96F5 / 38645
{
	if (bParam1)
	{
		Function_33(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_412(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_171() //Position: 0x9730 / 38704
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_172(16384);
	}
	return;
}

void Function_172(int iParam0) //Position: 0x974C / 38732
{
	Function_173(&Global_28842, iParam0);
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x975A / 38746
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

struct<24> Function_174(char* cParam0) //Position: 0x9775 / 38773
{
	struct<6> Var0;
	bool bVar6;
	char* cVar7[16];
	bool bVar11;
	
	bVar6 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar6, 8);
	strcpy(&cVar7, cParam0, 16);
	ITERATE_ON_PARTIAL_NAME(bVar6, &cVar7);
	stradd(&cVar7, "f_teleport", 16);
	bVar11 = START_OBJECT_ITERATOR(bVar6);
	while (IS_OBJECT_VALID(bVar11))
	{
		if (STRINGS_ARE_EQUAL(&cVar7, GET_OBJECT_NAME(bVar11)))
		{
			GET_OBJECT_POSITION(bVar11, &Var0);
			GET_OBJECT_ORIENTATION(bVar11, &Var0 + 12);
			DESTROY_ITERATOR(bVar6);
			return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
		}
		bVar11 = OBJECT_ITERATOR_NEXT(bVar6);
	}
	DESTROY_ITERATOR(bVar6);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_175(int iParam0) //Position: 0x97F7 / 38903
{
	if (!Function_87(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_176(&(Global_29008[Global_29155[iParam010]]), 1024);
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x9852 / 38994
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_177() //Position: 0x9861 / 39009
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_178(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_178(var uParam0, int iParam1) //Position: 0x988B / 39051
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_179(var uParam0, bool bParam1, int iParam2) //Position: 0x98A2 / 39074
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
		if (Function_87(Global_29006))
		{
			Function_176(&(Global_29008[Global_29006]), 131072);
			Function_178(&(Global_29008[Global_29006]), 2097152);
			Function_180(Global_29006);
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
				if (Function_86(&(Global_29008[iVar0]), 4) || Function_86(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_178(&(Global_29008[iVar0]), 2097155);
					Function_176(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_81())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_180(int iParam0) //Position: 0x99AD / 39341
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_181())
			{
				return;
			}
		}
		if (!Function_86(&(Global_29008[iParam0]), 2048))
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

bool Function_181() //Position: 0x9A2C / 39468
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_86(&(Global_29008[iVar0]), 4) || Function_86(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_182(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x9A95 / 39573
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, iParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

var Function_183(int iParam0) //Position: 0x9B4E / 39758
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_87(iParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_184(bool bParam0) //Position: 0x9BDD / 39901
{
	Function_170(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_185(bool bParam0) //Position: 0x9BFE / 39934
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_188(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_188(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_188(Global_12976.f_24);
	PRINTNL();
	Function_186(bParam0);
	return;
}

void Function_186(int iParam0) //Position: 0x9C9A / 40090
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_187(90)), 0);
	return;
}

int Function_187(int iParam0) //Position: 0x9CBB / 40123
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_188(bool bParam0) //Position: 0x9CD1 / 40145
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

var Function_189(vector3 vParam0, var uParam3, var uParam4, bool bParam5) //Position: 0x9D17 / 40215
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
				if (!(StackVal != 2 && uParam3))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && uParam4) != 7 && uParam4))
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

void Function_190() //Position: 0x9DB7 / 40375
{
	if (!Function_90(4096) || !IS_ACTOR_VALID(Global_34573))
	{
		if (Global_3394)
		{
			if (Function_221(&Local_89, 1))
			{
				Global_3394 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(true);
				ENABLE_USE_CONTEXTS(1);
			}
		}
		return;
	}
	if (((((((((!Function_26(StackVal, StackVal, Global_13112) || !Global_13112.f_72 != 4294967295) || Global_3391) || Global_62478) || Global_62480) || NET_IS_IN_SESSION()) || Global_63096) || IS_ACTOR_VALID(GET_VEHICLE(Global_34573))) || IS_ACTOR_ON_TRAIN(Global_34573, 0)) || Global_3387)
	{
		if (!Global_3403)
		{
			RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573));
		}
		if (Global_3394)
		{
			if (Function_221(&Local_89, 1))
			{
				Global_3394 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(true);
				ENABLE_USE_CONTEXTS(1);
			}
		}
		return;
	}
	if (Global_3394)
	{
		if ((Function_220(1, 3, 1, 33) || GET_LAST_HIT_TIME(Global_34573) < Local_89.f_52) && !Local_89.f_344)
		{
			if (Function_221(&Local_89, 1))
			{
				RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573));
				Global_3394 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(true);
				ENABLE_USE_CONTEXTS(1);
			}
			return;
		}
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(StackVal, false) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), false))
		{
			if (Global_3394)
			{
				if (Function_221(&Local_89, 1))
				{
					RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573));
					Global_3394 = 0;
					SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
					HUD_ENABLE(true);
					ENABLE_USE_CONTEXTS(1);
				}
			}
			return;
		}
	}
	if (Global_3394)
	{
		if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573)) > Function_219() && !Local_89.f_344)
		{
			if (Function_221(&Local_89, 1))
			{
				Global_3394 = 0;
				SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
				HUD_ENABLE(true);
				ENABLE_USE_CONTEXTS(1);
			}
		}
		else if (Function_212(&Local_89, 0))
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
			HUD_ENABLE(false);
			ENABLE_USE_CONTEXTS(0);
			Function_211();
		}
	}
	else if (((!Function_220(1, 3, 1, 33) && GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(Global_34573)) < Function_219()) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), false)) || Local_89.f_344)
	{
		Global_3394 = 1;
		Function_191(&Local_89, 0, 0, 0);
	}
	return;
}

void Function_191(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9F9E / 40862
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	bool bVar16;
	
	STREAMING_SET_POI_LIMIT(2);
	bParam0->f_184 = CREATE_OBJECTSET_IN_LAYOUT("idleCamExclusions", *bParam0, 4294967295, 1);
	bParam0->f_108 = CREATE_OBJECTSET_IN_LAYOUT("idleCamFraming", *bParam0, 4294967295, 1);
	bParam0->f_52 = GET_CURRENT_GAME_TIME();
	bParam0->f_60 = GET_CURRENT_GAME_TIME();
	bParam0->f_88 = 2;
	bParam0->f_80 = 6;
	bParam0->f_4 = GET_GAME_CAMERA();
	*(bParam0 + 40) = { StackVal, StackVal, Global_34574 };
	*(bParam0 + 136) = { StackVal, StackVal, Global_34574 };
	(bParam0 + 136)->f_4 = (StackVal + 1.15f);
	bParam0->f_156 = 1;
	bParam0->f_160 = 45.0f;
	bParam0->f_164 = GET_CURRENT_GAME_TIME();
	bParam0->f_84 = 6;
	bParam0->f_4 = CREATE_CAMERA_IN_LAYOUT(*bParam0, "idlecam", 0);
	INIT_CAMERA_FROM_CHANNEL(StackVal, 0);
	bParam0->f_8 = "";
	bParam0->f_12 = Function_209(bParam0, iParam2);
	if (!IS_OBJECT_VALID(bParam0->f_12) && bParam3)
	{
		vVar0 = { 0.0f, 30.0f, 50.0f };
		bVar6 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		ROTATE_VECTOR_XZ(&vVar0, bVar6, 0);
		GET_CAMERA_POSITION(StackVal, &vVar3);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
		vVar7 = { -20.0f, bVar6, 0.0f };
		bParam0->f_12 = FIND_OBJECT_IN_LAYOUT(*bParam0, "ntempVista");
		if (IS_OBJECT_VALID(bParam0->f_12))
		{
			DESTROY_OBJECT(bParam0->f_12);
		}
		bParam0->f_12 = CREATE_POINT_IN_LAYOUT(*bParam0, "ntempVista", vVar0, vVar7);
	}
	bParam0->f_16 = _AIATTENTIONATTRACTOR(*bParam0, *(bParam0 + 112), 1045220557, 1065353216, 0, 0);
	ATTACH_OBJECTS(StackVal, bParam0->f_16, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	bVar16 = Function_338();
	STREAMING_SET_CUTSCENE_MODE(1);
	if (IS_ACTOR_VALID(bVar16))
	{
		ACTOR_HOLSTER_WEAPON(bVar16, 1);
		if (!IS_OBJECT_VALID(bParam0->f_12))
		{
			GET_OBJECT_POSITION(bVar16, &vVar10);
			bParam0->f_92 = 1;
			bParam0->f_88 = 2;
			bParam0->f_80 = 0;
			Function_208(bParam0, 2, bVar16);
			Function_192(bParam0);
		}
	}
	GET_OBJECT_POSITION(bParam0->f_12, &vVar10);
	GET_OBJECT_ORIENTATION(bParam0->f_12, &vVar13);
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar13, 1);
	if (bParam3)
	{
		STREAMING_OVERRIDE_MAIN_POI(vVar10, vVar13);
	}
	bParam0->f_56 = GET_CURRENT_GAME_TIME();
	*(bParam0 + 172) = { 0.0f, 0.0f, 0.0f };
	if (bParam1)
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	PREVENT_DESPAWN_SET_SPHERE(Global_34574, 30.0f);
}

void Function_192(bool bParam0) //Position: 0xA1E8 / 41448
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	var uVar7;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	bVar6 = Function_207(StackVal);
	if (IS_ACTOR_VALID(bVar6))
	{
		GET_OBJECT_NAMED_BONE_POSITION(bVar6, "pelvis", bParam0 + 20);
		GET_OBJECT_NAMED_BONE_ORIENTATION(bVar6, "pelvis", &uVar7);
		bParam0->f_32 = UNK_0x9C40E671(&uVar7);
	}
	else
	{
		GET_OBJECT_POSITION(StackVal, bParam0 + 20);
		bParam0->f_32 = 0.0f;
	}
	switch (bParam0->f_92)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(StackVal, bParam0 + 112);
			GET_OBJECT_AXIS(StackVal, &vVar0, 2);
			VNORMALIZE(&vVar0);
			VSCALE(&vVar0, -30.0f);
			*(bParam0 + 124) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(bParam0 + 112), StackVal) };
			break;
		
		case 0x00000003:
			Function_204(StackVal, bParam0->f_108, 10.0f);
			Function_202(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000002:
			Function_204(StackVal, bParam0->f_108, 5.0f);
			Function_201(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000004:
			Function_204(StackVal, bParam0->f_108, 5.0f);
			Function_199(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_204(StackVal, bParam0->f_108, 15.0f);
			Function_193(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1.5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_193(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xA3A2 / 41890
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_207(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	GET_CAMERA_POSITION(StackVal, &vVar0);
	Function_194(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	if (Function_26(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_194(float fParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6) //Position: 0xA3FA / 41978
{
	struct<5> Var0;
	float fVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13[8];
	var uVar38;
	var uVar41;
	float fVar44;
	vector3 vVar45;
	int iVar48;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	switch (fParam0)
	{
		case 0x00000000:
			*uParam6 = { 0.0f, 0.0f, -Function_198(0.5f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 1.25f;
			break;
		
		case 0x00000001:
			*uParam6 = { 0.0f, 0.0f, -Function_198(0.7f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 2.75f;
			break;
		
		case 0x00000002:
			*uParam6 = { 0.0f, 0.0f, -Function_198(1.0f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 4.25f;
			break;
	}
	*uParam6 = { 0.0f, 0.0f, -Function_198(0.7f, (VDIST(Var0, vParam2) / 3.0f)) };
	bVar8 = true;
	if (Function_81())
	{
		if (NET_IS_IN_SESSION())
		{
			if (IS_ACTOR_PLAYER(bParam1) && !IS_ACTOR_LOCAL_PLAYER(bParam1))
			{
				bVar9 = GET_ACTOR_SLOT(bParam1);
				if (IS_SLOT_VALID(bVar9))
				{
					if (GET_SLOT_POSITION(bVar9, &vVar10))
					{
						bVar7 = Function_196(StackVal, StackVal, vVar10, bParam1);
					}
				}
			}
		}
	}
	if (bVar8)
	{
		bVar7 = GET_HEADING(bParam1);
	}
	ROTATE_VECTOR_XZ(uParam6, bVar7, 0);
	*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
	switch (fParam0)
	{
		case 0x00000000:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (FIND_INTERSECTION(&Var0, uParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
	{
		*uParam6 = { 0.0f, 0.0f, 0.6f };
		bVar7 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(uParam6, bVar7, 0);
		*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
		uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	fVar44 = 60.0f;
	vVar13[23] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[33] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[63] = { fVar6, 0.0f, 0.0f };
	vVar13[73] = { fVar6, 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar13[23]), (bVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[33]), (bVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[63]), (bVar7 + (-1.0f * fVar44)), 0);
	ROTATE_VECTOR_XZ(&(vVar13[73]), (bVar7 + (-1.0f * fVar44)), 0);
	vVar45 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(&vVar45, 0.5f);
	iVar48 = 0;
	while (iVar48 <= vVar13)
	{
		if (!Function_26(StackVal, StackVal, vVar13[iVar483]))
		{
			vVar13[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar45, vVar13[iVar483], StackVal) };
			if (FIND_INTERSECTION(&(vVar13[iVar483]), uParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		if (!Function_26(StackVal, StackVal, vVar13[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar13[iVar483]), &Var0, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_26(StackVal, StackVal, vVar13[03]))
	{
		vVar13[03].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[13]))
	{
		vVar13[13].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[23]))
	{
		vVar13[23].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[33]))
	{
		vVar13[33].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[43]))
	{
		vVar13[43].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[53]))
	{
		vVar13[53].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[63]))
	{
		vVar13[63].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar13[73]))
	{
		vVar13[73].f_4 = StackVal;
	}
	Function_195(StackVal, StackVal, vParam2, &vVar13);
	*uParam5 = { StackVal, StackVal, Function_195(StackVal, StackVal, vParam2, &vVar13) };
	return 1;
}

vector3 Function_195(vector3 vParam0, int iParam3) //Position: 0xA7E1 / 42977
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	bVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *iParam3)
	{
		if (!Function_26(StackVal, StackVal, *iParam3[iVar33]))
		{
			if (VDIST(*iParam3[iVar33], vParam0) > bVar4)
			{
				bVar4 = VDIST(*iParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *iParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

var Function_196(vector3 vParam0, bool bParam3) //Position: 0xA849 / 43081
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam3))
	{
		GET_POSITION(bParam3, &vVar0);
		Function_197(StackVal, StackVal, StackVal, StackVal, vParam0, vVar0, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA879 / 43129
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

float Function_198(int iParam0, int iParam1) //Position: 0xA89C / 43164
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_199(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xA8AF / 43183
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_207(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_200(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_26(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_200(float fParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6) //Position: 0xA90C / 43276
{
	struct<5> Var0;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16[8];
	var uVar41;
	var uVar44;
	bool bVar47;
	int iVar48;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		PRINTSTRING("No head bone - getting base pos + offset");
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		PRINTSTRING("No hip bone - getting base pos + offset");
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	bVar11 = true;
	if (Function_81())
	{
		if (NET_IS_IN_SESSION())
		{
			if (IS_ACTOR_PLAYER(bParam1) && !IS_ACTOR_LOCAL_PLAYER(bParam1))
			{
				bVar12 = GET_ACTOR_SLOT(bParam1);
				if (IS_SLOT_VALID(bVar12))
				{
					if (GET_SLOT_POSITION(bVar12, &vVar13))
					{
						bVar10 = Function_196(StackVal, StackVal, vVar13, bParam1);
						bVar11 = false;
					}
				}
			}
		}
	}
	if (bVar11)
	{
		bVar10 = GET_HEADING(bParam1);
	}
	switch (fParam0)
	{
		case 0x00000000:
			vVar6 = { 0.0f, 0.0f, -0.45f };
			fVar9 = 0.75f;
			break;
		
		case 0x00000001:
			vVar6 = { 0.0f, 0.0f, -0.6f };
			fVar9 = 1.825f;
			break;
		
		case 0x00000002:
			vVar6 = { 0.0f, 0.0f, -0.9f };
			fVar9 = 2.5f;
			break;
	}
	*uParam6 = { StackVal, StackVal, vVar6 };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("Before Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	ROTATE_VECTOR_XZ(uParam6, bVar10, 0);
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After addhead");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	switch (fParam0)
	{
		case 0x00000000:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Adjust Y for shot type");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	if (FIND_INTERSECTION(&Var0, uParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
	{
		*uParam6 = { StackVal, StackVal, vVar6 };
		uParam6->f_8 = (StackVal * -1.0f);
		bVar10 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(uParam6, bVar10, 0);
		*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
		uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Intersect Adjust");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	bVar47 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar16[03] = { (-1.0f * (fVar9 - 0.05f)), 0.0f, 0.0f };
	vVar16[13] = { (-1.0f * (fVar9 - 0.05f)), 0.0f, 0.0f };
	vVar16[23] = { (-1.0f * (fVar9 + 0.05f)), 0.0f, 0.0f };
	vVar16[33] = { (-1.0f * (fVar9 + 0.05f)), 0.0f, 0.0f };
	vVar16[43] = { (fVar9 - 0.05f), 0.0f, 0.0f };
	vVar16[53] = { (fVar9 - 0.05f), 0.0f, 0.0f };
	vVar16[63] = { (fVar9 + 0.05f), 0.0f, 0.0f };
	vVar16[73] = { (fVar9 + 0.05f), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar16[03]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[13]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[23]), (bVar10 + (-1.0f * bVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[33]), (bVar10 + (-1.0f * bVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[43]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[53]), (bVar10 + bVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[63]), (bVar10 + (-1.0f * bVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[73]), (bVar10 + (-1.0f * bVar47)), 0);
	iVar48 = 0;
	while (iVar48 <= vVar16)
	{
		vVar16[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam6, vVar16[iVar483], StackVal) };
		if (FIND_INTERSECTION(&(vVar16[iVar483]), uParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
		{
			vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_26(StackVal, StackVal, vVar16[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar16[iVar483]), &Var0, &uVar41, &uVar44, 1, 4294967295, 4194304))
			{
				vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_26(StackVal, StackVal, vVar16[03]))
	{
		vVar16[03].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[13]))
	{
		vVar16[13].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[23]))
	{
		vVar16[23].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[33]))
	{
		vVar16[33].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[43]))
	{
		vVar16[43].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[53]))
	{
		vVar16[53].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[63]))
	{
		vVar16[63].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar16[73]))
	{
		vVar16[73].f_4 = StackVal;
	}
	Function_195(StackVal, StackVal, vParam2, &vVar16);
	*uParam5 = { StackVal, StackVal, Function_195(StackVal, StackVal, vParam2, &vVar16) };
	return 1;
}

void Function_201(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xAEEF / 44783
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_207(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_200(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_26(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

void Function_202(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xAF4C / 44876
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = Function_207(bParam1);
	bVar4 = AI_GET_ACTOR_CONVERSATION_TARGET(bVar3);
	if (!IS_ACTOR_VALID(bVar3) || !IS_ACTOR_VALID(bVar4))
	{
		Function_199(uParam0, bParam1, uParam2, uParam3, bParam4);
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3) || IS_ACTOR_VEHICLE(bVar4))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_203(StackVal, StackVal, 1, bVar3, bVar4, vVar0, uParam2, uParam3);
	}
	if (Function_26(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_203(int iParam0, bool bParam1, bool bParam2, vector3 vParam3, var uParam6, var uParam7) //Position: 0xAFCC / 45004
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	vector3 vVar14;
	bool bVar17;
	bool bVar18;
	vector3 vVar19[8];
	var uVar44;
	var uVar47;
	int iVar50;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam2, "head", &vVar6))
	{
		GET_OBJECT_POSITION(bParam2, &vVar6);
		vVar6.f_4 = (vVar6.y + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam2, "pelvis", &vVar9))
	{
		GET_OBJECT_POSITION(bParam2, &vVar9);
		vVar9.f_4 = (vVar9.y + 1.0f);
	}
	bVar12 = VDIST(Var0, vVar6);
	switch (iParam0)
	{
		case 0x00000000:
			fVar13 = 0.75f;
			break;
		
		case 0x00000001:
			fVar13 = 1.625f;
			break;
		
		case 0x00000002:
			fVar13 = 2.5f;
			break;
	}
	*uParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam7, 0.5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0.5f);
	*uParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam7, StackVal) };
	VSCALE(uParam7, 0.5f);
	bVar17 = GET_HEADING(bParam1);
	bVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * bVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (bVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (bVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (bVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (bVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (bVar17 + (-1.0f * bVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam7, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), uParam7, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_26(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_26(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_26(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_195(StackVal, StackVal, vParam3, &vVar19);
	*uParam6 = { StackVal, StackVal, Function_195(StackVal, StackVal, vParam3, &vVar19) };
	return 1;
}

void Function_204(bool bParam0, bool bParam1, float fParam2) //Position: 0xB350 / 45904
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		Function_206(bVar0, bParam1, 2, fParam2);
		Function_205(bVar0, bParam0);
		Function_206(bVar0, bParam1, 1, fParam2);
		Function_205(bVar0, bParam0);
		Function_206(bVar0, bParam1, 3, fParam2);
		Function_205(bVar0, bParam0);
		Function_206(bVar0, bParam1, 4, fParam2);
		Function_205(bVar0, bParam0);
		Function_206(bVar0, bParam1, 5, fParam2);
		Function_205(bVar0, bParam0);
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_205(bool bParam0, bool bParam1) //Position: 0xB3C4 / 46020
{
	bool bVar0;
	
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bParam1);
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_206(bool bParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0xB3F6 / 46070
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	switch (bParam2)
	{
		case 0x00000001:
			ITERATE_IN_LAYOUT(bParam0, Global_6289);
			ITERATE_ON_OBJECT_TYPE(bParam0, 24);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000002:
			ITERATE_IN_LAYOUT(bParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000005:
			ITERATE_IN_LAYOUT(bParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000004:
			ITERATE_IN_LAYOUT(bParam0, Global_28841);
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000003:
			ITERATE_IN_LAYOUT(bParam0, Global_6287);
			ITERATE_ON_OBJECT_TYPE(bParam0, 24);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000006:
			ITERATE_IN_LAYOUT(bParam0, Global_30616);
			ITERATE_ON_OBJECT_TYPE(bParam0, 8);
			ITERATE_ON_PARTIAL_NAME(bParam0, "nvista_cam");
			break;
		
		default:
			break;
	}
}

var Function_207(bool bParam0) //Position: 0xB4E8 / 46312
{
	bool bVar0;
	
	switch (GET_OBJECT_TYPE(bParam0))
	{
		case 0x00000018:
			ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			break;
		
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
			break;
	}
	return bVar0;
}

void Function_208(bool bParam0, int iParam1, bool bParam2) //Position: 0xB526 / 46374
{
	int iVar0;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		DEREFERENCE_OBJECT(StackVal);
		REMOVE_CAMERA_COLLISION_EXCLUSION(StackVal, StackVal);
	}
	bParam0->f_8 = bParam2;
	bParam0->f_64 = GET_CURRENT_GAME_TIME();
	bParam0->f_68 = GET_CURRENT_GAME_TIME();
	bParam0->f_76 = 15.0f;
	bParam0->f_88 = iParam1;
	REFERENCE_OBJECT(StackVal);
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(StackVal, StackVal, iVar0);
	if (!IS_OBJECT_IN_OBJECTSET(StackVal, bParam0->f_184))
	{
		ADD_OBJECT_TO_OBJECTSET(StackVal, bParam0->f_184);
	}
	bParam0->f_80 = bParam0->f_84;
	bParam0->f_96 = 0;
	return;
}

var Function_209(int iParam0, int iParam1) //Position: 0xB5AB / 46507
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	int iVar18[25];
	struct<9> Var44;
	bool bVar53;
	
	if (Global_29007 != 2)
	{
		bVar2 = CREATE_OBJECT_ITERATOR(*iParam0);
		Function_206(StackVal, bVar2, 6, iParam0->f_76);
		bVar1 = START_OBJECT_ITERATOR(bVar2);
		bVar3 = 1E+08.0f;
		GET_CAMERA_POSITION(StackVal, &vVar7);
		while (IS_OBJECT_VALID(bVar1))
		{
			if (Function_210(iParam0, bVar1, iParam1))
			{
				GET_OBJECT_POSITION(bVar1, &vVar4);
				if (VDIST(vVar4, vVar7) > bVar3)
				{
					bVar3 = VDIST(vVar4, vVar7);
					bVar0 = bVar1;
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		DESTROY_ITERATOR(bVar2);
	}
	else
	{
		iVar10 = GET_NUM_WORLD_CAMERAS();
		if (iVar10 >= 0)
		{
			if (iParam0->f_148)
			{
				bVar48 = CEIL((Global_34574 / 512.0f));
				bVar49 = CEIL((StackVal / 512.0f));
				iVar47 = 0;
				while (iVar47 <= iVar10)
				{
					if (iVar52 <= 25)
					{
						GET_WORLD_CAMERA_AT_INDEX(iVar47, &vVar44, &vVar14);
						bVar50 = CEIL((vVar44.x / 512.0f));
						bVar51 = CEIL((vVar44.z / 512.0f));
						if (bVar50 != bVar48 && bVar51 != bVar49)
						{
							iVar18[iVar52] = iVar47;
							iVar52++;
						}
					}
					iVar47++;
				}
				if (iVar52 <= iParam0->f_152)
				{
					iParam0->f_152 = iVar52;
				}
				if (GET_WORLD_CAMERA_AT_INDEX(iVar18[iParam0->f_152], &vVar11, &vVar14))
				{
					bVar17 = true;
				}
			}
			else if (GET_CLOSEST_WORLD_CAMERA(&Global_34574, 256.0f, &vVar11, &vVar14))
			{
				bVar17 = true;
			}
			if (bVar17)
			{
				VSCALE(&vVar14, (360.0f / 6.28f));
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_348 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_350(), vVar11, vVar14);
				}
				else
				{
					bVar53 = FIND_OBJECT_IN_LAYOUT(*iParam0, "TempVistaPoint");
					if (IS_OBJECT_VALID(bVar53))
					{
						DESTROY_OBJECT(bVar53);
					}
					iParam0->f_348 = CREATE_POINT_IN_LAYOUT(*iParam0, "TempVistaPoint", vVar11, vVar14);
				}
				if (IS_OBJECT_VALID(iParam0->f_348))
				{
					GET_OBJECT_ORIENTATION(iParam0->f_348, &vVar14);
					bVar0 = iParam0->f_348;
				}
			}
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
	}
	return bVar0;
}

bool Function_210(int iParam0, bool bParam1, bool bParam2) //Position: 0xB7AC / 47020
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	if (Global_30842[33])
	{
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTSTRING(" : ");
		PRINTVECTOR(vVar0);
		PRINTSTRING(" - ");
		PRINTFLOAT(VDIST(vVar0, *(iParam0 + 40)));
		PRINTNL();
	}
	if (StackVal == bParam1)
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam1, iParam0->f_184))
	{
		return 0;
	}
	if (VDIST(vVar0, *(iParam0 + 40)) < 150.0f && !bParam2)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return 0;
	}
	return 1;
}

void Function_211() //Position: 0xB839 / 47161
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_212(bool bParam0, int iParam1) //Position: 0xB84E / 47182
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (!IS_OBJECT_VALID(StackVal))
	{
		return 0;
	}
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = false;
	if (IS_OBJECT_VALID(bParam0->f_12))
	{
		if (STREAMING_IS_WORLD_LOADED() || (fVar0 - bParam0->f_56) < 15.0f)
		{
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(StackVal, false))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			Function_218(bParam0, bParam0->f_12);
			iVar8 = 0;
			while (iVar8 <= 38)
			{
				(*bParam0 + 188)[iVar8] = 0;
				iVar8++;
			}
			REFERENCE_OBJECT(StackVal);
			bParam0->f_12 = "";
			DISBAND_OBJECTSET(bParam0->f_184);
			DISBAND_OBJECTSET(bParam0->f_108);
			bParam0->f_88 = 2;
			bParam0->f_84 = 1;
			bParam0->f_76 = (15.0f * 5.0f);
			bParam0->f_92 = 0;
			bParam0->f_80 = 6;
			Function_192(bParam0);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &vVar2);
			GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar5);
			STREAMING_LOAD_SCENE_EXT(vVar2, vVar5, 0);
			bVar1 = true;
		}
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (bParam0->f_88 == 2)
		{
			GET_CAMERA_POSITION(StackVal, &vVar2);
			if (VDIST(vVar2, *(bParam0 + 112)) < 1.0f)
			{
				SET_CAMERA_POSITION(StackVal, *(bParam0 + 112));
				SET_CAMERA_TARGET_POSITION(StackVal, *(bParam0 + 124), 0);
				*(bParam0 + 136) = { StackVal, StackVal, *(bParam0 + 124) };
			}
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		return bVar1;
	}
	GET_OBJECT_POSITION(StackVal, &vVar9);
	if (StackVal || !IS_OBJECT_VALID(((StackVal && !GET_OBJECT_TYPE(VDIST(vVar9, *(bParam0 + 40)) < 150.0f) != 8) && !IS_OBJECT_VALID(bParam0->f_12))))
	{
		bParam0->f_12 = Function_209(bParam0, iParam1);
		if (IS_OBJECT_VALID(bParam0->f_12))
		{
			GET_OBJECT_POSITION(bParam0->f_12, &vVar12);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_ORIENTATION(bParam0->f_12, &vVar15);
			STREAMING_LOAD_SCENE_EXT(vVar12, vVar15, 0);
			bParam0->f_56 = fVar0;
			bParam0->f_84 = 6;
			bParam0->f_92 = 1;
			bParam0->f_88 = 2;
			bParam0->f_80 = 0;
			Function_208(bParam0, 2, Function_338());
			Function_192(bParam0);
		}
	}
	Function_213(bParam0, fVar0, 3212836864, 3212836864);
	if (Function_26(StackVal, StackVal, *(bParam0 + 112)))
	{
	}
	if (Function_26(StackVal, StackVal, *(bParam0 + 124)))
	{
	}
	if (VDIST(*(bParam0 + 124), *(bParam0 + 136)) < 200.0f)
	{
		GET_CAMERA_POSITION(StackVal, &vVar2);
		GET_OBJECT_ORIENTATION(StackVal, &vVar5);
	}
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return bVar1;
}

void Function_213(bool bParam0, float fParam1, var uParam2, var uParam3) //Position: 0xBA8A / 47754
{
	float fVar0;
	
	fVar0 = (1.0f / (fParam1 - bParam0->f_60));
	if (Function_217(bParam0))
	{
		Function_192(bParam0);
	}
	Function_216(bParam0);
	Function_215(bParam0, fVar0, uParam2);
	Function_214(bParam0, fVar0, uParam3);
	bParam0->f_60 = fParam1;
}

void Function_214(int iParam0, float fParam1, float fParam2) //Position: 0xBAC7 / 47815
{
	struct<9> Var0;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<9> Var12;
	
	bVar15 = Function_207(StackVal);
	switch (iParam0->f_92)
	{
		case 0x00000000:
		case 0x00000001:
			vVar12 = { StackVal, StackVal, *(iParam0 + 124) };
			iParam0->f_104 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(bVar15))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(bVar15))
			{
				return;
			}
			vVar0 = { StackVal, StackVal, *(iParam0 + 136) };
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 124), vVar0, StackVal) };
			bVar3 = VMAG(vVar0);
			if (bVar3 > 2.5f)
			{
				VSCALE(&vVar0, 0.975f);
			}
			else
			{
				fVar8 = Function_92(bVar15, 0);
				if (fParam2 < -1.0f)
				{
					fVar4 = fParam2;
					bVar6 = (((fParam2 + bVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				else
				{
					fVar4 = (fVar8 + 5.0f);
					bVar6 = ((((fVar8 * 2.0f) + bVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				iVar5 = (fVar4 / 3.0f);
				fVar7 = Function_149(FABS(bVar6), iVar5);
				if (bVar6 > 0.0f)
				{
					fVar7 = (fVar7 * -1.0f);
				}
				iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				if (iParam0->f_104 < fVar4)
				{
					iParam0->f_104 = fVar4;
				}
				else if (iParam0->f_104 < 0.01f && iParam0->f_104 > iParam0->f_100)
				{
					iParam0->f_104 = iParam0->f_100;
				}
				else if (iParam0->f_104 > fVar8)
				{
					iParam0->f_104 = (fVar8 * 1.1f);
					iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				}
				fVar9 = (iParam0->f_104 / fParam1);
				VNORMALIZE(&vVar0);
				if (bVar3 < fVar9)
				{
					VSCALE(&vVar0, (bVar3 - fVar9));
				}
				else
				{
					VSCALE(&vVar0, (bVar3 / 5.0f));
				}
			}
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 124), vVar0, StackVal) };
			*(iParam0 + 136) = { StackVal, StackVal, vVar0 };
			vVar12 = { StackVal, StackVal, *(iParam0 + 136) };
			break;
	}
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 172), vVar12, StackVal) };
	SET_CAMERA_TARGET_POSITION(StackVal, vVar12, 0);
	GET_CAMERA_POSITION(StackVal, &vVar0);
	fVar10 = ATAN_DEGREE(((vVar12.z - vVar0.z) / (vVar12.x - vVar0.x)));
	fVar11 = (fVar10 - iParam0->f_36);
	iParam0->f_36 = fVar10;
	fVar11 = fVar11;
	return;
}

void Function_215(int iParam0, float fParam1, float fParam2) //Position: 0xBCAC / 48300
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	float fVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	
	bVar15 = Function_207(StackVal);
	switch (iParam0->f_92)
	{
		case 0x00000000:
		case 0x00000001:
			iParam0->f_100 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(bVar15))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(bVar15))
			{
				return;
			}
			GET_CAMERA_POSITION(StackVal, &vVar1);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 112), vVar1, StackVal) };
			bVar0 = VMAG(vVar1);
			if (bVar0 > 2.5f)
			{
				VSCALE(&vVar1, 0.975f);
			}
			else
			{
				fVar13 = Function_92(bVar15, 0);
				if (fParam2 >= -1.0f)
				{
					fParam2 = (fVar13 + 2.0f);
					bVar11 = ((bVar0 - (iParam0->f_100 * 5.0f)) / 6.0f);
				}
				else
				{
					bVar11 = ((bVar0 - (iParam0->f_100 * 2.0f)) / 3.0f);
				}
				fVar10 = Function_198(2.0f, (fParam2 / 3.0f));
				fVar12 = Function_149(FABS(bVar11), fVar10);
				if (bVar11 > 0.0f)
				{
					fVar12 = (fVar12 * -1.0f);
				}
				iParam0->f_100 = (iParam0->f_100 + (fVar12 / fParam1));
				if (iParam0->f_100 < fParam2)
				{
					iParam0->f_100 = fParam2;
				}
				else if (iParam0->f_100 > fVar13)
				{
					iParam0->f_100 = (iParam0->f_100 * 1.1f);
				}
				fVar14 = (iParam0->f_100 / fParam1);
				VNORMALIZE(&vVar1);
				if (bVar0 < fVar14)
				{
					VSCALE(&vVar1, (bVar0 - fVar14));
				}
				else
				{
					vVar1 = { 0.0f, 0.0f, 0.0f };
				}
			}
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 112), vVar1, StackVal) };
			if (FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &Var4, &uVar7))
			{
				if ((StackVal + 0.5f) < vVar1.y)
				{
					vVar1.f_4 = (StackVal + 0.5f);
				}
			}
			SET_CAMERA_POSITION(StackVal, vVar1);
			break;
	}
	return;
}

void Function_216(bool bParam0) //Position: 0xBE27 / 48679
{
	vector3 vVar0;
	vector3 vVar3;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	switch (bParam0->f_92)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(StackVal, bParam0 + 112);
			GET_OBJECT_AXIS(StackVal, &vVar0, 2);
			VNORMALIZE(&vVar0);
			VSCALE(&vVar0, -30.0f);
			*(bParam0 + 124) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(bParam0 + 112), StackVal) };
			break;
		
		case 0x00000003:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_204(StackVal, bParam0->f_108, 10.0f);
				Function_202(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_204(StackVal, bParam0->f_108, 5.0f);
				Function_201(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_204(StackVal, bParam0->f_108, 5.0f);
				Function_199(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_204(StackVal, bParam0->f_108, 15.0f);
			Function_193(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1.5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

bool Function_217(int iParam0) //Position: 0xBFC2 / 49090
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	
	bVar0 = Function_207(StackVal);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bVar0))
	{
		return 0;
	}
	switch (iParam0->f_92)
	{
		case 0x00000003:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_92(bVar0, 0) < 0.2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_92(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			bVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((bVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_92(bVar0, 0) < 0.2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_92(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			bVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((bVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (Function_92(bVar0, 0) < 0.3f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			bVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((bVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000006:
		case 0x00000005:
		case 0x00000007:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (Function_92(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
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

void Function_218(bool bParam0, bool bParam1) //Position: 0xC31A / 49946
{
	if (IS_OBJECT_VALID(bParam1))
	{
		bParam0->f_92 = 0;
		Function_208(bParam0, 2, bParam1);
		Function_192(bParam0);
	}
	else
	{
		bParam0->f_84 = 6;
		bParam0->f_92 = 1;
		bParam0->f_88 = 2;
		bParam0->f_80 = 0;
		Function_208(bParam0, 2, Function_338());
		Function_192(bParam0);
	}
	DISBAND_OBJECTSET(bParam0->f_108);
	DISBAND_OBJECTSET(bParam0->f_184);
	bParam0->f_84 = 1;
	return;
}

float Function_219() //Position: 0xC372 / 50034
{
	return 120.0f;
}

bool Function_220(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xC37D / 50045
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

bool Function_221(bool bParam0, bool bParam1) //Position: 0xC421 / 50209
{
	STREAMING_SET_CUTSCENE_MODE(0);
	if (IS_OBJECT_VALID(StackVal))
	{
		if (IS_OBJECT_VALID(bParam0->f_348))
		{
			DESTROY_OBJECT(bParam0->f_348);
		}
		REMOVE_CAMERA_FROM_CHANNEL(StackVal, 0);
		DEREFERENCE_OBJECT(StackVal);
		DESTROY_CAMERA(StackVal);
		DESTROY_OBJECTSET(bParam0->f_184);
		DESTROY_OBJECTSET(bParam0->f_108);
		DESTROY_OBJECT(bParam0->f_16);
		CAMERA_RESET(0);
		STREAMING_RELEASE_MAIN_POI();
		if (bParam1)
		{
			STREAMING_UNLOAD_SCENE();
		}
		Global_30841 = 1;
	}
	else
	{
		STREAMING_SET_POI_LIMIT(1);
		Global_30841 = 1;
		return 1;
	}
	return 0;
}

void Function_222() //Position: 0xC497 / 50327
{
	bool bVar0;
	int iVar1;
	
	if (Function_6((&Global_12976 + 36)->f_20, 0x40000000))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (DECOR_CHECK_EXIST(Global_34573, "TriggerNewHorse"))
			{
				Function_228();
				DECOR_REMOVE(Global_34573, "TriggerNewHorse");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "SettingPlayerHorse"))
			{
				Function_225();
				DECOR_REMOVE(Global_34573, "SettingPlayerHorse");
				DECOR_REMOVE(Global_34573, "NewPlayerHorse_Wipe");
			}
			if (Global_13038 != 4294967295)
			{
				Function_224();
			}
		}
		bVar0 = (StackVal + 976);
		iVar1 = GET_ACTORENUM_SPECIES(bVar0);
		if (!((((iVar1 != 23 || iVar1 != 24) || iVar1 != 8) || iVar1 != 9) || iVar1 != 12))
		{
			Function_32(976, 0, 0);
		}
		if (IS_ACTOR_VALID(Global_34573) && Function_223(bVar0))
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				if (!Function_6((&Global_12976 + 36)->f_20, 1))
				{
					STREAMING_REQUEST_ACTOR(bVar0, true, false);
					Function_33(&Global_12976 + 36 + 20, 1);
				}
			}
		}
		if ((Function_34() >= 1 && !(NET_IS_IN_SESSION() || Function_81())) && !(Global_34165.f_44 || IS_GAME_RESETTING()))
		{
			if (!STREAMING_IS_ACTOR_LOADED(993, 4294967295) && IS_ACTOR_ALIVE(Global_34573))
			{
				if (!Function_6((&Global_12976 + 36)->f_20, 32))
				{
					Function_33(&Global_12976 + 36 + 20, 32);
					STREAMING_REQUEST_ACTOR(993, true, false);
				}
			}
		}
		else if (Function_6((&Global_12976 + 36)->f_20, 32))
		{
			if (StackVal && !STREAMING_IS_ACTOR_LOADED(993, 4294967295) != 17)
			{
				STREAMING_EVICT_ACTOR(993, 4294967295);
				Function_412(&Global_12976 + 36 + 20, 32);
			}
		}
	}
	return;
}

int Function_223(int iParam0) //Position: 0xC656 / 50774
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_224() //Position: 0xC66D / 50797
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = Global_13038;
	bVar1 = (StackVal + 976);
	bVar2 = Function_6((&Global_12976 + 36)->f_20, 64);
	bVar3 = Function_6((&Global_12976 + 36)->f_20, 128);
	Function_412(&Global_12976 + 36 + 20, 128);
	Function_412(&Global_12976 + 36 + 20, 64);
	Global_13038 = 4294967295;
	if (iVar0 != bVar1)
	{
		if (Function_6((&Global_12976 + 36)->f_20, 1))
		{
			STREAMING_EVICT_ACTOR(bVar1, 4294967295);
		}
		(&Global_12976 + 36)->f_4 = (iVar0 - 976);
		Function_412(&Global_12976 + 36 + 20, 1);
		if (bVar2)
		{
			(&Global_12976 + 36)->f_32 = 0;
		}
	}
	if (bVar3)
	{
		DECOR_SET_BOOL(Global_34573, "PlayerHorse_DontResetHorseEnum", true);
	}
	return;
}

void Function_225() //Position: 0xC72B / 50987
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Global_34573, "SettingPlayerHorse"));
	bVar1 = DECOR_GET_BOOL(Global_34573, "NewPlayerHorse_Wipe");
	if (!Function_6((&Global_12976 + 36)->f_20, 2))
	{
		LOG_ERROR("You do NOT have permission to set the player horse. This function will do nothing. See Ryan P. for instructions on correcting this.");
	}
	if (IS_ACTOR_VALID(Global_12976.f_36) && bVar0 == Global_12976.f_36)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		if (Function_24(Global_12976.f_36, FIND_NAMED_LAYOUT("PlayerLayout")))
		{
			RELEASE_ACTOR(Global_12976.f_36);
		}
	}
	bVar2 = (StackVal + 976);
	if (GET_ACTOR_ENUM(bVar0) != bVar2)
	{
		if (STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		}
		Function_412(&Global_12976 + 36 + 20, 2);
		if (bVar1)
		{
			(&Global_12976 + 36)->f_32 = 0;
		}
	}
	Function_227();
	if (IS_ACTOR_VALID(bVar0))
	{
		GIVE_OBJECT_TO_LAYOUT(bVar0, FIND_NAMED_LAYOUT("PlayerLayout"));
		SET_ACTORS_HORSE(Global_34573, bVar0);
		Function_226(bVar0, 0, 0, 0, 0, 0, 0);
		Global_12976.f_36 = bVar0;
		(&Global_12976 + 36)->f_4 = (GET_ACTOR_ENUM(bVar0) - 976);
		(&Global_12976 + 36)->f_16 = GET_TIME_OF_DAY();
	}
	Function_412(&Global_12976 + 36 + 20, 1);
	Function_412(&Global_12976 + 36 + 20, 2);
	return;
}

void Function_226(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC8F1 / 51441
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

void Function_227() //Position: 0xC92E / 51502
{
	Global_12976.f_72 = "";
	return;
}

void Function_228() //Position: 0xC93B / 51515
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = StackVal + 976;
	bVar1 = false;
	bVar2 = 4294967295;
	iVar3 = 0;
	bVar2 = (RAND_INT_RANGE(false, 5999) / 1000);
	if (!Function_72())
	{
		while (!bVar1 && iVar3 > 10)
		{
			if (bVar2 != 0 && iVar0 == 976)
			{
				bVar1 = true;
				Function_32(976, 0, 1);
			}
			else if (bVar2 != 1 && iVar0 == 977)
			{
				bVar1 = true;
				Function_32(977, 0, 1);
			}
			else if (bVar2 != 2 && iVar0 == 980)
			{
				bVar1 = true;
				Function_32(980, 0, 1);
			}
			else if (bVar2 != 3 && iVar0 == 981)
			{
				bVar1 = true;
				Function_32(981, 0, 1);
			}
			else if (bVar2 != 4 && iVar0 == 983)
			{
				bVar1 = true;
				Function_32(983, 0, 1);
			}
			else if (bVar2 != 5 && iVar0 == 984)
			{
				bVar1 = true;
				Function_32(984, 0, 1);
			}
			bVar2 = RAND_INT_RANGE_DIFFERENT(bVar2, false, 5);
			iVar3++;
		}
	}
	else
	{
		while (!bVar1 && iVar3 > 10)
		{
			bVar4 = RAND_FLOAT_RANGE(0.0f, 80000.0f);
			if (bVar4 > 10000.0f && iVar0 == 1248)
			{
				bVar1 = true;
				Function_32(1248, 0, 1);
			}
			else if (bVar4 > 20000.0f && iVar0 == 1249)
			{
				bVar1 = true;
				Function_32(1249, 0, 1);
			}
			else if (bVar4 > 30000.0f && iVar0 == 1250)
			{
				bVar1 = true;
				Function_32(1250, 0, 1);
			}
			else if (bVar4 > 40000.0f && iVar0 == 1251)
			{
				bVar1 = true;
				Function_32(1251, 0, 1);
			}
			else if (bVar4 > 50000.0f && iVar0 == 976)
			{
				bVar1 = true;
				Function_32(976, 0, 1);
			}
			else if (bVar4 > 60000.0f && iVar0 == 977)
			{
				bVar1 = true;
				Function_32(977, 0, 1);
			}
			else if (bVar4 > 70000.0f && iVar0 == 980)
			{
				bVar1 = true;
				Function_32(980, 0, 1);
			}
			else if (bVar4 >= 80000.0f && iVar0 == 981)
			{
				bVar1 = true;
				Function_32(981, 0, 1);
			}
			iVar3++;
		}
	}
	return;
}

void Function_229() //Position: 0xCB4D / 52045
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
	if (Function_90(32))
	{
		if (IS_PLAYER_CONTROLLABLE(0))
		{
			if (!StackVal)
			{
				if (IS_VOLUME_VALID(Global_13053))
				{
					if (Global_26281 + 5.0f) > GET_CURRENT_GAME_TIME()
					{
						UI_SET_TEXT("LocationText", GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(Global_13053)));
						UNK_0xD792B93B("LocationText", 5.0f);
						UI_ENTER("LocationText");
						if (Function_237(StackVal) >= 0)
						{
							UI_SET_MONEY(StackVal, "BountyAmount", Function_237("PlayerBounty"));
						}
					}
					Global_13053.f_4 = 1;
				}
				else
				{
					Global_13053.f_4 = 1;
				}
			}
		}
	}
	else
	{
		Global_13053.f_4 = 1;
		Global_13053.f_12 = 0.0f;
	}
	if (Function_410(0x20000000) && !Function_410(256))
	{
		if (Function_237(StackVal) >= 0)
		{
			UI_SET_MONEY(StackVal, "BountyAmount", Function_237("PlayerBounty"));
		}
		else
		{
			FLASH_SET_STRING("testInventory", "CurrentCrime", "law_bounty_cleared", 1);
		}
		Function_236(0x20000000);
	}
	if (!Function_410(256))
	{
		switch (Global_13111)
		{
			case 0x00000000:
			case 0x00000001:
			case 0x00000003:
			case 0x00000002:
				if (Global_3403 && !Global_27773)
				{
					if ((Global_29004 != 1 && Function_237(1) < 0) || (Global_29004 == 1 && Function_237(0) < 0))
					{
						UI_ENTER("WantedMeter");
						_HUD_WANTED_METER(1);
						if (STRINGS_ARE_EQUAL(&Global_13095, ""))
						{
							Function_233();
						}
						if (GET_CURRENT_GAME_TIME() >= Global_27765)
						{
							if (Global_27760)
							{
								UI_SET_STRING("Generic_Dbuffer128_0", &Global_13095);
								UI_SET_TEXT("wantedcrime", "Generic_Dbuffer128_0");
							}
							else
							{
								UI_SET_TEXT("WantedCrime", &Global_13095);
							}
						}
						else
						{
							UI_SET_TEXT("WantedCrime", "COMMON_EMPTY");
						}
						if (Global_29004 == 1)
						{
							UI_SET_MONEY("BountyAmount", "PlayerBounty", Function_237(1));
						}
						else
						{
							UI_SET_MONEY("BountyAmount", "PlayerBounty", Function_237(0));
						}
						Global_27767 = ((GET_CURRENT_GAME_TIME() + 12.0f) + 2.0f);
						Global_27766 = (GET_CURRENT_GAME_TIME() + 300.0f);
						if (Global_3405)
						{
							fVar0 = Global_13094;
							Global_13094 = FABS(((GET_CURRENT_GAME_TIME() - Global_27764) / Global_27763));
							if (Global_13094 > fVar0)
							{
								if (fVar0 < 0.5f)
								{
									PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
								}
							}
						}
						else
						{
							Global_13094 = 0.0f;
						}
						_HUD_WANTED_CRIME((1.0f - Global_13094));
						UI_LABEL_SET_VALUE_B("BountyAmount", 100);
						GUI_SET_TEXT(Global_13050, "");
						GUI_SET_TEXT(Global_13052, "");
						GUI_SET_TEXT(Global_13051, "");
						Function_232();
					}
					else
					{
						Function_230();
					}
				}
				else
				{
					Function_230();
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0xFFFFFFFF:
				Function_230();
				Global_27773 = 0;
				break;
			
			default:
				Function_230();
				Global_27773 = 0;
				break;
		}
		if (Global_27761 < 0.0f)
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

void Function_230() //Position: 0xCF08 / 53000
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	
	if (Global_29004 == 1)
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
	if (Function_81())
	{
		if (Function_231())
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		UI_EXIT("WantedMeter");
		UI_EXIT("BountyAmount");
		_HUD_WANTED_METER(0);
		Global_27761 = 0.0f;
		UNK_0x598815BD(Global_27761);
		return;
	}
	if (GET_CURRENT_GAME_TIME() >= Global_27767 && Function_237(iVar0) < 0)
	{
		_HUD_WANTED_METER(1);
		UI_ENTER("BountyAmount");
		UI_SET_MONEY("BountyAmount", "PlayerBounty", Function_237(iVar0));
		UI_LABEL_SET_VALUE("BountyAmount", true);
		UI_LABEL_SET_VALUE_B("BountyAmount", 100);
	}
	else if (Global_3384)
	{
		Global_27767 = (GET_CURRENT_GAME_TIME() - 1.0f);
		Global_27766 = (GET_CURRENT_GAME_TIME() + 300.0f);
		UI_EXIT("BountyAmount");
	}
	else
	{
		UI_EXIT("WantedMeter");
		UI_EXIT("BountyAmount");
		if (Global_27761 != 0.0f)
		{
			_HUD_WANTED_METER(0);
		}
	}
	if (Global_27761 < 0.0f)
	{
		if (GET_CURRENT_GAME_TIME() <= Global_27762)
		{
			fVar2 = (GET_CURRENT_GAME_TIME() - Global_27762);
			if (fVar2 <= 2.0f)
			{
				Global_27761 = 0.0f;
				UI_LABEL_SET_VALUE_B("BountyAmount", true);
			}
			else
			{
				Global_27761 = (1.0f - (fVar2 / 2.0f));
				UI_ENTER("WantedMeter");
				UNK_0x598815BD(Global_27761);
				bVar3 = FLOOR((Global_27761 * 100.0f));
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

bool Function_231() //Position: 0xD0F2 / 53490
{
	return Global_78480.f_24 == 4294967294;
}

void Function_232() //Position: 0xD102 / 53506
{
	Global_27761 = 1.0f;
	UNK_0x598815BD(Global_27761);
	Global_27762 = GET_CURRENT_GAME_TIME();
	return;
}

void Function_233() //Position: 0xD118 / 53528
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_234() };
	UI_SET_TEXT("wantedcrime", &Var0);
	memcpy(&Global_13095, StackVal, StackVal, StackVal, Var0, 16);
	Global_27765 = (GET_CURRENT_GAME_TIME() + 12.0f);
	Global_27760 = 0;
	return;
}

struct<16> Function_234() //Position: 0xD153 / 53587
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* cVar4[16];
	
	iVar0 = 0;
	if (Global_29004 == 1)
	{
		iVar0 = 1;
	}
	iVar3 = 0;
	strcpy(&cVar4, "", 16);
	iVar1 = 0;
	while (iVar1 <= 36)
	{
		if ((*&Global_26401 + 36[iVar0181][iVar15])[3] >= 0)
		{
			if (Global_26998[iVar118].f_24 >= iVar3)
			{
				iVar3 = Global_26998[iVar118].f_24;
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (Function_235(iVar2) && iVar2 == 0)
	{
		return StackVal, StackVal, StackVal, *(&Global_26998[iVar218] + 4);
	}
	return StackVal, StackVal, StackVal, cVar4;
}

int Function_235(int iParam0) //Position: 0xD1D5 / 53717
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_236(int iParam0) //Position: 0xD1EB / 53739
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

int Function_237(int iParam0) //Position: 0xD208 / 53768
{
	if (!Function_238(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_238(bool bParam0) //Position: 0xD220 / 53792
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_239(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD235 / 53813
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<9> Var5;
	
	if (Global_62993)
	{
		RESET_ANALOG_POSITIONS(0, 0.0f);
		iLocal_178 = 0;
		if (bParam5)
		{
			PRINTSTRING("PLAYER REGENERATION DISABLED");
			PRINTNL();
		}
		return;
	}
	bVar0 = false;
	bVar1 = Global_34573;
	if (Function_77(1048576))
	{
		bVar1 = GET_SLOT_ACTOR(Global_78617.f_48);
		bVar0 = true;
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		if (IS_ACTOR_DEAD(bVar1))
		{
			RESET_ANALOG_POSITIONS(0, 1.0f);
			iLocal_178 = 1;
		}
		else
		{
			bVar2 = GET_ACTOR_HEALTH(bVar1);
			bVar3 = GET_ACTOR_MAX_HEALTH(bVar1);
			if (!bVar0)
			{
				if (Function_240(bVar1, 52) && !DECOR_CHECK_EXIST(bVar1, "NoRegen"))
				{
					if (TOUGH_ARMOUR_GET_TUNING_REGENERATION_RATE(bVar1) == 10.0f)
					{
						TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bVar1, 10.0f);
					}
					if (bVar2 > bVar3)
					{
						bVar4 = (GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1));
						bVar8 = false;
						if (!((IS_ACTOR_RIDING(bVar1) || IS_ACTOR_RIDING_VEHICLE(bVar1)) || IS_ACTOR_DRIVING_VEHICLE(bVar1)))
						{
							GET_ACTOR_VELOCITY(bVar1, &vVar5);
							if ((FABS(vVar5.x) < 0.25f || FABS(vVar5.y) < 0.2f) || FABS(vVar5.z) < 0.25f)
							{
								bVar8 = true;
							}
						}
						if (bVar8)
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
						if (Global_62997 < -1.0f)
						{
							if ((GET_CURRENT_GAME_TIME() - Global_62997) >= Global_62996)
							{
								if (bParam5)
								{
									PRINTSTRING("PLAYER REGENERATION DEBUG - HEALTH REGEN BOOSTED!!");
									PRINTNL();
									PRINTSTRING("BoostTimer: ");
									PRINTFLOAT((GET_CURRENT_GAME_TIME() - Global_62997));
									PRINTNL();
									PRINTSTRING("PlayerHealthRegenBoostDuration: ");
									PRINTFLOAT(Global_62996);
									PRINTNL();
									PRINTSTRING("PlayerHealthRegenBoost: ");
									PRINTFLOAT(Global_62995);
									PRINTNL();
									PRINTSTRING("------------------------------------------------");
									PRINTNL();
								}
								bParam1 = (bParam1 / Global_62995);
								bParam2 = (bParam2 / Global_62995);
								bParam3 = (bParam3 * Global_62995);
								bParam4 = (bParam4 * Global_62995);
							}
							else
							{
								Global_62995 = 1.0f;
								Global_62996 = 0.0f;
								Global_62997 = -1.0f;
							}
						}
						if (bVar2 >= bParam0)
						{
							if (bVar4 <= bParam2 && !Global_62994)
							{
								bVar2 = (bVar2 + bParam4);
								SET_ACTOR_HEALTH(bVar1, bVar2);
							}
						}
						else if (bVar4 <= bParam1 && !Global_62994)
						{
							bVar2 = (bVar2 + bParam3);
							SET_ACTOR_HEALTH(bVar1, bVar2);
						}
						if (bParam5)
						{
							PRINTSTRING("PLAYER REGENERATION DEBUG");
							PRINTNL();
							PRINTSTRING("fPlayerHealth: ");
							PRINTFLOAT(bVar2);
							PRINTNL();
							PRINTSTRING("GET_LAST_HIT_TIME: ");
							PRINTFLOAT(GET_LAST_HIT_TIME(bVar1));
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
							if (bVar8)
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
				else if (TOUGH_ARMOUR_GET_TUNING_REGENERATION_RATE(bVar1) == 0.0f)
				{
					TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bVar1, 0.0f);
				}
				bVar2 = GET_ACTOR_HEALTH(bVar1);
			}
			fVar10 = 0.01f;
			fVar11 = 0.5f;
			fVar12 = Function_198((1.0f - (bVar2 / bVar3)), 0.0f);
			if (fVar12 > fVar10)
			{
				fVar9 = ((fVar12 / fVar10) * fVar11);
			}
			else
			{
				fVar9 = ((fVar12 - fVar10) / (1.0f - fVar10));
				fVar9 = (fVar9 * (1.0f - fVar11));
				fVar9 = (fVar9 + fVar11);
			}
			if (fVar9 < 0.0f)
			{
				iLocal_178 = 1;
				RESET_ANALOG_POSITIONS(0, fVar9);
			}
			else if (iLocal_178)
			{
				iLocal_178 = 0;
				RESET_ANALOG_POSITIONS(0, 0.0f);
			}
		}
	}
	else if (iLocal_178)
	{
		iLocal_178 = 0;
		RESET_ANALOG_POSITIONS(0, 0.0f);
	}
}

int Function_240(bool bParam0, int iParam1) //Position: 0xD791 / 55185
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_241(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_241(iParam1, 64))
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

bool Function_241(var uParam0, int iParam1) //Position: 0xD86A / 55402
{
	return (uParam0 && iParam1) == 0;
}

void Function_242(int iParam0) //Position: 0xD877 / 55415
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (*iParam0 != GET_PLAYER_COMBATMODE())
	{
		*iParam0 = GET_PLAYER_COMBATMODE();
		bVar1 = GET_ACTOR_HEALTH(Global_34573);
		fVar2 = GET_ACTOR_MAX_HEALTH(Global_34573);
		fVar3 = (bVar1 / fVar2);
		if (*iParam0 == 0)
		{
			fVar0 = 80.0f;
			bVar1 = (fVar0 * fVar3);
			SET_ACTOR_MAX_HEALTH(Global_34573, fVar0);
			SET_ACTOR_HEALTH(Global_34573, bVar1);
		}
		else if (*iParam0 == 2)
		{
			fVar0 = (80.0f * 2.0f);
			bVar1 = (fVar0 * fVar3);
			SET_ACTOR_MAX_HEALTH(Global_34573, fVar0);
			SET_ACTOR_HEALTH(Global_34573, bVar1);
		}
	}
	return;
}

void Function_243(float fParam0, bool bParam1) //Position: 0xD8F2 / 55538
{
	float fVar0;
	
	fVar0 = GET_ACTOR_HEALTH(Global_34573);
	if (fVar0 >= fParam0)
	{
		SET_ACTOR_HEALTH(Global_34573, bParam1);
		HUD_SET_FADE_COLOR(1.0f, 0.0f, 0.0f, 1.0f);
		HUD_FADE_OUT(0.0f, 1f, 1);
		HUD_FADE_IN(0.5f, 1065353216);
	}
	return;
}

void Function_244(var uParam0, int iParam1) //Position: 0xD92E / 55598
{
	if (!IS_ACTOR_DEAD(Global_34573))
	{
		Function_308(uParam0);
		Function_261(uParam0, iParam1);
		if (Function_260(uParam0))
		{
			Function_245(uParam0, iParam1);
		}
	}
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xD959 / 55641
{
	if ((!Function_6(iParam0->f_32, 4) && !Function_6(iParam0->f_32, 8192)) && !Function_6(iParam0->f_32, 16384))
	{
		if (!Function_246(iParam0, iParam1))
		{
			Function_33(iParam0 + 32, 8192);
		}
	}
	return;
}

bool Function_246(bool bParam0, int iParam1) //Position: 0xD998 / 55704
{
	int iVar0;
	char* cVar1[32];
	int iVar9;
	
	switch (iParam1->f_44)
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
				if (!DECOR_CHECK_EXIST(Global_34573, "TutorialFirstCamp"))
				{
					if (!Function_88(Global_76849, 4))
					{
						Function_11(Global_34573, 4, 4, 1);
					}
				}
				if (!DECOR_CHECK_EXIST(Global_34573, "CanSaveNowCamp"))
				{
					if (iParam1->f_28 && iParam1->f_32)
					{
						if (IS_ACTION_NODE_PLAYING(Global_34573, "player_save/mid"))
						{
							iParam1->f_44 = 11;
						}
						else
						{
							LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for IS_ACTION_NODE_PLAYING gPlayer player_save/mid - timer:");
							LOG_WARNING(FLOAT_TO_STRING_VERBOSE(Function_258(iParam1 + 56)));
							if (Function_258(iParam1 + 56) < 6.0f)
							{
								Function_257(iParam1 + 56);
								SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/mid");
								iParam1->f_44 = 11;
								LOG_ERROR("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_PENDING_PROMPTS timed out!");
							}
						}
					}
					else
					{
						LOG_ERROR("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() AST and ACT not loaded. Something went wrong - continuing anyway");
						iParam1->f_44 = 11;
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
				iParam1->f_72 = 1;
			}
			else
			{
				iParam1->f_72 = 0;
			}
			if (IS_PLAYER_SIGNED_IN() && !(SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()))
			{
				iVar0 = "nCamp_Save";
			}
			else
			{
				iVar0 = "Camp_Save_NoSignedIn";
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (!Function_256() || !IS_PS3())
				{
					iParam1->f_8 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Travel", 100, 6, "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
				}
				else
				{
					iParam1->f_8 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Travel", 100, 5, "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
				}
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(*iParam1))
			{
				*iParam1 = ADD_SCRIPT_USE_CONTEXT(iVar0, 100, 4, "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam1->f_12) && (!Function_255(49, 0) || Function_255(57, 0)))
			{
				iParam1->f_12 = ADD_SCRIPT_USE_CONTEXT("PASS_CAMP_Outfits", 100, 7, "", "", "", "", 4294967295, "HUD_MENU_SELECT_MASTER");
			}
			if (!IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (!Function_256() || !IS_PS3())
				{
					iParam1->f_4 = ADD_SCRIPT_USE_CONTEXT("Camp_Leave", 100, 5, "", "", "", "", 4294967295, "HUD_MENU_BACK_MASTER");
				}
				else
				{
					iParam1->f_4 = ADD_SCRIPT_USE_CONTEXT("Camp_Leave", 100, 6, "", "", "", "", 4294967295, "HUD_MENU_BACK_MASTER");
				}
			}
			iParam1->f_44 = 12;
			break;
		
		case 0x0000000C:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_PROMPTS_ON_SCREEN");
			if (UI_HAS_CHEATED() && !iParam1->f_72)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam1))
				{
					RELEASE_SCRIPT_USE_CONTEXT(*iParam1);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam1->f_12))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam1->f_12);
				}
				iParam1->f_72 = 1;
				iParam1->f_44 = 11;
				break;
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					iParam1->f_48 = LAUNCH_NEW_SCRIPT("content/Ambient/Passenger/passenger_camp", 0);
					if (bParam0->f_36 == 4294967295)
					{
						if (!DECOR_CHECK_EXIST(Global_34573, "playerFastTravelOnFoot"))
						{
							DECOR_SET_BOOL(Global_34573, "playerFastTravelOnFoot", true);
						}
					}
					else if (!DECOR_CHECK_EXIST(Global_34573, "playerFastTravelOnHorse"))
					{
						DECOR_SET_INT(Global_34573, "playerFastTravelOnHorse", iParam1->f_52);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam1))
					{
						RELEASE_SCRIPT_USE_CONTEXT(*iParam1);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(iParam1->f_12))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam1->f_12);
					}
					Function_257(iParam1 + 56);
					Function_252(iParam1 + 56);
					iParam1->f_44 = 17;
					return 1;
				}
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam1))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(*iParam1))
				{
					RELEASE_SCRIPT_USE_CONTEXT(*iParam1);
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(iParam1->f_12))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam1->f_12);
					}
					Function_251(6);
					DECOR_SET_BOOL(Global_34573, "CanSaveNowCamp", true);
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/save");
					Function_257(iParam1 + 56);
					Function_252(iParam1 + 56);
					iParam1->f_44 = 13;
					return 1;
				}
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(iParam1->f_12))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam1->f_12))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam1->f_12);
					SET_ACTOR_DRUNK(Global_34573, 0);
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam1))
					{
						RELEASE_SCRIPT_USE_CONTEXT(*iParam1);
					}
					strcpy(&cVar1, "out_", 32);
					stradd(&cVar1, &Global_27774[Global_2817813] + 32, 32);
					iVar9 = STRING_TO_HASH(&cVar1);
					SATCHEL_SET_CURRENT_OUTFIT(iVar9);
					SATCHEL_ALLOW_OUTFIT_CHANGE(1);
					DECOR_SET_BOOL(Global_34573, "SwitchOutfitsCamp", true);
					UI_ENTER("OutfitMenuProxy");
					Function_257(iParam1 + 56);
					Function_252(iParam1 + 56);
					iParam1->f_44 = 15;
					return 1;
				}
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal))
				{
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/stand");
					iParam1->f_24 = Function_248(bParam0->f_24, 0, Global_34573, 1, 0, 0);
					iParam1->f_44 = 18;
				}
			}
			break;
		
		case 0x0000000D:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PRE_SAVE");
			if (Function_258(iParam1 + 56) < 5.0f)
			{
				if (!DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
				{
					LOG_ERROR("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PRE_SAVE - something went wrong with DR V or animation and bPlayerSleeping decor was not set");
					DECOR_SET_BOOL(Global_34573, "bPlayerSleeping", true);
				}
			}
			if (HUD_IS_FADED())
			{
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 14;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for HUD_IS_FADED");
			}
			break;
		
		case 0x0000000E:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_POST_SAVE");
			if (IS_ACTION_NODE_PLAYING(Global_34573, "player_save/save"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/mid");
			}
			if (!DECOR_CHECK_EXIST(Global_34573, "CanSaveNowCamp"))
			{
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 11;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer CanSaveNowCamp ");
			}
			break;
		
		case 0x0000000F:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PENDING_OUTFITS");
			if (Function_258(iParam1 + 56) < 1.0f)
			{
				if (!UI_ISACTIVE("OutfitMenuProxy"))
				{
					Function_257(iParam1 + 56);
					iParam1->f_44 = 11;
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "playerChangeOutfits") || DECOR_CHECK_EXIST(Global_34573, "OutfitChanged"))
			{
				DECOR_REMOVE(Global_34573, "playerChangeOutfits");
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				iParam1->f_44 = 16;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer playerChangeOutfits ");
			}
			break;
		
		case 0x00000010:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_CHANGED_OUTFITS");
			if (DECOR_CHECK_EXIST(Global_34573, "OutfitChanged"))
			{
				DECOR_REMOVE(Global_34573, "OutfitChanged");
				Function_247(bParam0);
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 10;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer OutfitChanged ");
			}
			break;
		
		case 0x00000011:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_WITH_PROMPTS_PENDING_FAST_TRAVEL");
			if (IS_SCRIPT_VALID(iParam1->f_48))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "playerFastTravel"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/stand");
					UI_PUSH("nCutscenes");
					iParam1->f_24 = Function_248(bParam0->f_24, 0, Global_34573, 1, 0, 0);
					iParam1->f_44 = 18;
				}
				else
				{
					LOG_WARNING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() waiting for DECOR_CHECK_EXIST gPlayer playerFastTravel");
				}
			}
			else if (Function_258(iParam1 + 56) < 3.0f)
			{
				Function_257(iParam1 + 56);
				iParam1->f_44 = 11;
			}
			break;
		
		case 0x00000012:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_REMOVING_PROMPTS");
			if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam1))
			{
				RELEASE_SCRIPT_USE_CONTEXT(*iParam1);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(iParam1->f_12))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam1->f_12);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
			{
				RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			}
			iParam1->f_44 = 19;
			break;
		
		case 0x00000013:
			LOG_WARNING("PLAYER_UPDATE_CAMP_ACTIONS: PLAYER_CAMPFIRE_STATE_PRESENT_AFTER_PROMPTS");
			Function_257(iParam1 + 56);
			return 0;
			break;
		
		default:
			PRINTSTRING("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() Unhandled State!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(iParam1->f_44);
			PRINTNL();
			LOG_ERROR("PLAYER CAMP: PLAYER_UPDATE_CAMP_ACTIONS() Unhandled State!");
			iParam1->f_44 = 18;
			break;
	}
	return 1;
}

void Function_247(bool bParam0) //Position: 0xEBB6 / 60342
{
	struct<9> Var0;
	
	if (IS_OBJECT_VALID(Function_4(bParam0)))
	{
		GET_OBJECT_POSITION(Function_4(bParam0), &vVar0);
		bVar4 = LOCATE_NAMED_POINT(vVar0, 20.0f, "player_camp_sit", 0);
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar0);
			bVar3 = GET_OBJECT_HEADING(bVar4);
		}
		else
		{
			vVar0.f_8 = (vVar0.z + 1.0f);
		}
		if (IS_ACTOR_VALID(Global_34573))
		{
			TELEPORT_ACTOR(Global_34573, &vVar0, 1, 0, 1);
			SNAP_OBJECT_TO_GROUND(Global_34573, 1.0f, false, 1092616192);
			TASK_CLEAR(Global_34573);
			SET_ACTOR_HEADING(Global_34573, bVar3, 1);
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(false, 0, 0, 0);
			}
			if (!SET_ANIM_SET_FOR_ACTOR(Global_34573, "player_save", 0))
			{
				LOG_ERROR("PLAYER_SIT_AT_CAMP_GRINGO: SET_ANIM_SET_FOR_ACTOR gPlayer, player_save FAILED!");
			}
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/sit");
		}
	}
	return;
}

var Function_248(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0xECDC / 60636
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_350(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "player_campfire2", 1, 1);
	}
	Function_249(&bVar0, uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_249(var uParam0, int iParam1) //Position: 0xED5A / 60762
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_250(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_250(var uParam0, bool bParam1) //Position: 0xED80 / 60800
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.240465f, 0.908524f, -1.931376f, 6.712487f, -174.703f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.073098f, 1.121918f, -0.125797f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_251(bool bParam0) //Position: 0xEE05 / 60933
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
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTNL();
			PRINTSTRING("CUR time of day delay: ");
			Function_188(Global_16876[iVar06]);
		}
		if (GET_DAY(Global_16876[iVar06]) == 0)
		{
			iVar2 = 1;
		}
		ADD_TIME(&(Global_16876[iVar06]), iVar2, bParam0, false, 0);
		Global_17483[iVar075].f_264 = Global_16876[iVar06];
		if (Global_30842[16])
		{
			PRINTNL();
			PRINTSTRING("NEW time of day delay: ");
			Function_188(Global_16876[iVar06]);
		}
		iVar0++;
	}
	return;
}

void Function_252(int iParam0) //Position: 0xEEC5 / 61125
{
	if (!Function_254(iParam0))
	{
		Function_253(iParam0, 0.0f);
	}
	return;
}

void Function_253(int iParam0, float fParam1) //Position: 0xEEDA / 61146
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_33(iParam0, 1);
	Function_412(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_254(int iParam0) //Position: 0xEEFB / 61179
{
	return Function_6(*iParam0, 1);
}

bool Function_255(int iParam0, bool bParam1) //Position: 0xEF08 / 61192
{
	int iVar0;
	
	iVar0 = Function_141(iParam0);
	if (!Function_120(iVar0))
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

bool Function_256() //Position: 0xEF45 / 61253
{
	return HAS_STRING_TABLE_LOADED("jp");
}

void Function_257(int iParam0) //Position: 0xEF53 / 61267
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

float Function_258(int iParam0) //Position: 0xEF67 / 61287
{
	if (Function_254(iParam0))
	{
		if (Function_259(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_259(int iParam0) //Position: 0xF02F / 61487
{
	return Function_6(*iParam0, 2);
}

bool Function_260(int iParam0) //Position: 0xF03C / 61500
{
	return IS_OBJECT_VALID(Function_4(iParam0));
}

void Function_261(int iParam0, int iParam1) //Position: 0xF04A / 61514
{
	if (Function_6(iParam0->f_32, 2))
	{
		iParam0->f_36 = Function_306(iParam0, iParam1);
		if (DECOR_CHECK_EXIST(Global_34573, "DestroyMyCamp"))
		{
			DECOR_REMOVE(Global_34573, "DestroyMyCamp");
		}
		if (Global_3366 && !Function_6(iParam0->f_32, 65536))
		{
			if (Function_297(iParam0, iParam1))
			{
				LOG_WARNING("PLAYER_HANDLE_CAMP_CREATION_AND_REMOVAL - Camp created elegantly");
				Function_412(iParam0 + 32, 2);
				Function_412(iParam0 + 32, 1);
				Function_412(iParam0 + 32, 16384);
			}
		}
		else
		{
			iParam0->f_36 = 4294967294;
			if (!HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1.0f, 0);
			}
			if (Function_275(iParam0, iParam1))
			{
				if (Function_258(iParam1 + 56) < 45.0f)
				{
					LOG_WARNING("STREAMING TIMEOUT");
					Function_274(iParam0);
					Function_273(iParam1);
					Function_412(iParam0 + 32, 2);
					Function_412(iParam0 + 32, 1);
					Function_412(iParam0 + 32, 65536);
					Function_412(iParam0 + 32, 8192);
					Function_33(iParam0 + 32, 16384);
					iParam1->f_44 = 21;
					STREAMING_RELEASE_MAIN_POI();
					HUD_FADE_IN(1.5f, 1065353216);
				}
				LOG_WARNING("PLAYER_HANDLE_CAMP_CREATION_AND_REMOVAL - Camp created forcefully");
				if (Function_272(Function_4(iParam0)) && DECOR_CHECK_EXIST(Function_4(iParam0), "PropsCreated"))
				{
					if (!IS_ACTOR_VALID(iParam1->f_68))
					{
						iParam1->f_68 = Function_271(iParam0);
					}
					if (((Function_269() && Global_3366) && STREAMING_IS_WORLD_LOADED()) && IS_ACTOR_VALID(iParam1->f_68))
					{
						Function_274(iParam0);
						Function_273(iParam1);
						Function_412(iParam0 + 32, 2);
						Function_412(iParam0 + 32, 1);
						Function_412(iParam0 + 32, 65536);
						Function_412(iParam0 + 32, 8192);
						Function_33(iParam0 + 32, 16384);
						iParam1->f_44 = 21;
						STREAMING_RELEASE_MAIN_POI();
						HUD_FADE_IN(1.5f, 1065353216);
					}
				}
			}
		}
	}
	else if (Function_6(iParam0->f_32, 8192))
	{
		Function_412(iParam0 + 32, 2);
		Function_412(iParam0 + 32, 16384);
		if (Function_264(iParam0, iParam1))
		{
			Function_412(iParam0 + 32, 8192);
			Function_33(iParam0 + 32, 16384);
		}
	}
	else if (Function_6(iParam0->f_32, 4))
	{
		Function_412(iParam0 + 32, 8192);
		Function_412(iParam0 + 32, 16384);
		if (Function_263(iParam0, iParam1))
		{
			Function_412(iParam0 + 32, 4);
			Function_412(iParam0 + 32, 1);
		}
	}
	else if (Function_6(iParam0->f_32, 16384))
	{
		Function_412(iParam0 + 32, 8192);
		Function_412(iParam0 + 32, 4);
		if (Function_262(iParam0))
		{
			Function_1(iParam0, iParam1, 0, 0, 1, 1);
			Function_412(iParam0 + 32, 16384);
			Function_412(iParam0 + 32, 1);
			iParam1->f_44 = 0;
		}
	}
	return;
}

bool Function_262(int iParam0) //Position: 0xF35C / 62300
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		GET_OBJECT_POSITION(Function_4(iParam0), &vVar0);
		GET_POSITION(Global_34573, &vVar3);
		if (VDIST(vVar0, vVar3) <= 25.0f)
		{
			LOG_WARNING("PLAYER_HAS_MOVED_AWAY_FROM_CAMP - player is more than 25m away, returning whether its visible or not");
			return !WOULD_ACTOR_BE_VISIBLE(false, &vVar0, 3212836864);
		}
	}
	return 0;
}

bool Function_263(int iParam0, int iParam1) //Position: 0xF40A / 62474
{
	if (!IS_OBJECT_VALID(Function_4(iParam0)))
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
	Function_1(iParam0, iParam1, 0, 0, 1, 1);
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	if (!HUD_IS_FADING())
	{
		HUD_FADE_IN(1.5f, 1065353216);
	}
	return 1;
}

bool Function_264(int iParam0, bool bParam1) //Position: 0xF4DE / 62686
{
	vector3 vVar0;
	
	switch (bParam1->f_44)
	{
		case 0x00000000:
			bParam1->f_44 = 3;
			break;
		
		case 0x0000000A:
		case 0x00000013:
			bParam1->f_44 = 5;
			break;
		
		case 0x00000005:
			Function_1(iParam0, bParam1, 0, 1, 0, 1);
			bParam1->f_44 = 3;
			break;
		
		case 0x00000003:
			iParam0->f_36 = 4294967294;
			STREAMING_REQUEST_GRINGO(GET_ASSET_ID(Function_268(iParam0->f_36), 1));
			bParam1->f_44 = 4;
			break;
		
		case 0x00000004:
			if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID(Function_268(iParam0->f_36), 1)))
			{
				bParam1->f_40 = GET_ASSET_ID(Function_268(iParam0->f_36), 1);
				bParam1->f_44 = 6;
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_DISBAND_CAMP() waiting for STREAMING_IS_GRINGO_LOADED");
			}
			break;
		
		case 0x00000006:
			vVar0.f_4 = 180.0f;
			Function_408(8);
			*iParam0 = { StackVal, StackVal, *(iParam0 + 12) };
			iParam0->f_28 = CREATE_GRINGO_IN_LAYOUT(iParam0->f_24, "Player_Campfire", Function_268(iParam0->f_36), *iParam0, vVar0);
			bParam1->f_44 = 8;
			break;
		
		case 0x00000008:
			if (Function_272(Function_4(iParam0)))
			{
				bParam1->f_16 = GET_CURRENT_GAME_TIME();
				bParam1->f_44 = 20;
				if (DECOR_CHECK_EXIST(Global_34573, "playerFastTravel"))
				{
				}
			}
			else
			{
				LOG_WARNING("PLAYER CAMP: PLAYER_DISBAND_CAMP() waiting for PLAYER_IS_CAMP_STREAMED_IN");
			}
			break;
		
		case 0x00000014:
			if ((GET_CURRENT_GAME_TIME() - bParam1->f_16) <= 3.0f)
			{
				DESTROY_OBJECT(bParam1->f_20);
				DESTROY_OBJECT(bParam1->f_24);
				SATCHEL_SET_ENABLED(1);
				Function_265(2, 1, 1, 1, 0, 0, 1, 1, 0, 1);
				SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
				if (IS_ACTOR_VALID(bParam1->f_68))
				{
					TASK_PRIORITY_SET(bParam1->f_68, 3);
				}
				if (DECOR_CHECK_EXIST(Global_34573, "playerFastTravel"))
				{
					DECOR_REMOVE(Global_34573, "playerFastTravel");
				}
				bParam1->f_44 = 21;
				return 1;
			}
			break;
		
		default:
			PRINTSTRING("PLAYER_DISBAND_CAMP called with unhandled state!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(bParam1->f_44);
			PRINTNL();
			LOG_ERROR("PLAYER_DISBAND_CAMP called with unhandled state! Check spew...");
			break;
	}
	return 0;
}

void Function_265(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xF7DC / 63452
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
		bVar0 = Function_338();
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
			if (Function_81())
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
		Function_62(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_211();
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
	Function_266(iParam9);
}

void Function_266(bool bParam0) //Position: 0xF8CC / 63692
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
		Function_267();
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

void Function_267() //Position: 0xF97B / 63867
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

var Function_268(int iParam0) //Position: 0xF9ED / 63981
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
	return iVar0;
}

int Function_269() //Position: 0xFB40 / 64320
{
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!Function_270(Global_12976.f_36, 1, 0x41700000))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_270(bool bParam0, bool bParam1, float fParam2) //Position: 0xFB66 / 64358
{
	float fVar0;
	bool bVar1;
	
	if (Function_81() || !bParam1)
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

var Function_271(int iParam0) //Position: 0xFC03 / 64515
{
	struct<9> Var0;
	
	if (IS_OBJECT_VALID(Function_4(iParam0)))
	{
		GET_OBJECT_POSITION(Function_4(iParam0), &vVar0);
		bVar4 = LOCATE_NAMED_POINT(vVar0, 20.0f, "player_camp_horse_stay", 0);
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar0);
			bVar3 = GET_OBJECT_HEADING(bVar4);
		}
		else
		{
			vVar0 = (vVar0.x - 1.5f);
		}
		bVar5 = GET_MOST_RECENT_MOUNT(Global_34573);
		if (!IS_ACTOR_VALID(bVar5))
		{
			bVar5 = Function_351(1, 1, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0);
		}
		if (IS_ACTOR_VALID(bVar5))
		{
			if (IS_ACTOR_ALIVE(bVar5))
			{
				TELEPORT_ACTOR(bVar5, &vVar0, 1, 1, 1);
				SNAP_OBJECT_TO_GROUND(bVar5, 1.0f, false, 1092616192);
				SET_ACTOR_HEADING(bVar5, bVar3, 1);
				TASK_CLEAR(bVar5);
				RESET_ACTOR_GAITS(bVar5, 0);
				TASK_PRIORITY_SET(bVar5, 2);
				TASK_STAND_STILL(bVar5, -1.0f, 0, 0);
			}
		}
		else
		{
			LOG_ERROR("PLAYER_PLACE_HORSE_AT_CAMP_GRINGO: GET_PLAYER_HORSE returned a NULL actor even if I am forcing it to spawn!");
		}
		return bVar5;
	}
	return "";
}

bool Function_272(bool bParam0) //Position: 0xFD51 / 64849
{
	int iVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(bParam0), "PlayerCampInfo", "CampIsReady", &iVar0))
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

void Function_273(int iParam0) //Position: 0xFE8D / 65165
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(*iParam0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_12))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_12);
	}
	SATCHEL_SET_ENABLED(1);
	SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	Function_265(2, 1, 1, 1, 0, 0, 1, 1, 0, 1);
	return;
}

void Function_274(int iParam0) //Position: 0xFEF2 / 65266
{
	struct<9> Var0;
	
	if (IS_OBJECT_VALID(Function_4(iParam0)))
	{
		GET_OBJECT_POSITION(Function_4(iParam0), &vVar0);
		bVar7 = LOCATE_NAMED_POINT(vVar0, 20.0f, "player_camp_sit", 0);
		if (IS_OBJECT_VALID(bVar7))
		{
			GET_OBJECT_POSITION(bVar7, &vVar0);
			bVar6 = GET_OBJECT_HEADING(bVar7);
		}
		else
		{
			vVar0.f_8 = (vVar0.z + 1.0f);
		}
		if (IS_ACTOR_VALID(Global_34573))
		{
			TELEPORT_ACTOR(Global_34573, &vVar0, 1, 0, 1);
			SNAP_OBJECT_TO_GROUND(Global_34573, 1.0f, false, 1092616192);
			SET_ACTOR_HEADING(Global_34573, bVar6, 1);
			SET_PLAYER_CONTROL(false, 0, 0, 0);
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "player_save/stand");
		}
		bVar8 = GET_MOST_RECENT_MOUNT(Global_34573);
		if (!IS_ACTOR_VALID(bVar8))
		{
			bVar8 = Function_351(1, 1, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0);
		}
		if (IS_ACTOR_VALID(bVar8))
		{
			if (Function_37(Global_34573, bVar8) > 0.3f)
			{
				GET_OBJECT_RELATIVE_POSITION(Global_34573, 0.0f, 0.0f, -2.4f, &uVar3);
				TELEPORT_ACTOR(bVar8, &uVar3, 1, 0, 1);
			}
			TASK_PRIORITY_SET(bVar8, 3);
		}
	}
	return;
}

bool Function_275(int iParam0, int iParam1) //Position: 0x10000 / 65536
{
	bool bVar0;
	vector3 vVar2;
	vector3 vVar5;
	
	SATCHEL_TOGGLE_NO_PAUSE_OUTFIT(1);
	if (DECOR_CHECK_EXIST(Global_34573, "DestroyMyCamp"))
	{
		DECOR_REMOVE(Global_34573, "DestroyMyCamp");
	}
	if (IS_OBJECT_VALID(Function_4(iParam0)))
	{
		return 1;
	}
	switch (iParam1->f_44)
	{
		case 0x00000000:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_NOT_PRESENT");
			Function_257(iParam1 + 56);
			Function_252(iParam1 + 56);
			iParam1->f_44 = 3;
			break;
		
		case 0x00000003:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS");
			if (iParam1->f_32)
			{
				LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS: CampInterface.bACTloaded !");
			}
			else
			{
				STREAMING_REQUEST_GRINGO(GET_ASSET_ID(Function_268(iParam0->f_36), 1));
			}
			Function_296(iParam1);
			Function_257(iParam1 + 56);
			Function_252(iParam1 + 56);
			iParam1->f_44 = 4;
			break;
		
		case 0x00000004:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS");
			if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID(Function_268(iParam0->f_36), 1)))
			{
				iParam1->f_36 = GET_ASSET_ID(Function_268(iParam0->f_36), 1);
			}
			if (Function_295())
			{
				iParam1->f_32 = 1;
				iParam1->f_28 = 1;
			}
			if ((iParam1->f_32 && iParam1->f_28) && UNK_0x214AFB8C(iParam1->f_36))
			{
				iParam1->f_44 = 6;
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
			}
			else if (!Function_6(iParam0->f_32, 65536))
			{
				if (Function_258(iParam1 + 56) < 10.0f)
				{
					LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS timed out!");
					iParam1->f_44 = 22;
				}
			}
			else if (Function_258(iParam1 + 56) < 45.0f)
			{
				LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS on load timed out!");
				iParam1->f_44 = 22;
			}
			break;
		
		case 0x00000006:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_CREATING");
			iParam0->f_24 = FIND_NAMED_LAYOUT("PlayerCampfireLayout");
			if (!IS_LAYOUTREF_VALID(iParam0->f_24))
			{
				iParam0->f_24 = CREATE_LAYOUT("PlayerCampfireLayout");
			}
			if (Function_26(StackVal, StackVal, *iParam0))
			{
				LOG_WARNING("PLAYER_CAMPFIRE_STATE_CREATING - gotta gotta probe mfr");
				Function_287(iParam0, iParam0 + 40, 0);
				if (iParam0->f_40 == 20)
				{
					*iParam0 = { StackVal, StackVal, *(iParam0 + 12) };
				}
				else if (iParam0->f_40 >= 21)
				{
					iParam1->f_44 = 22;
				}
			}
			else
			{
				vVar2.f_4 = 180.0f;
				Function_408(8);
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (Function_285(StackVal, StackVal, Global_34573, *iParam0) < 20.0f)
					{
						LOG_WARNING("\PLAYER_CAMP PROBLEM!  Our camp position is far from the player resorting to player position");
						SNAP_OBJECT_TO_GROUND(Global_34573, 5.0f, false, 1092616192);
						iParam1->f_44 = 22;
					}
				}
				iParam0->f_28 = CREATE_GRINGO_IN_LAYOUT(iParam0->f_24, "Player_Campfire", Function_268(iParam0->f_36), *iParam0, vVar2);
				Function_283(0, GET_THIS_SCRIPT_ID());
				*(iParam0 + 12) = { StackVal, StackVal, *iParam0 };
				if (IS_OBJECT_VALID(iParam0->f_28))
				{
					Function_276(iParam0);
					CLEAR_AREA_OF_GRASS(*iParam0, 2.0f);
					CLEAR_AREA_OF_BREAKABLE_TREES(*iParam0, 4.0f);
					CLEAR_AREA_OF_TREE_TYPE(*iParam0, 4.0f, "");
					if (iParam0->f_36 != 4294967294)
					{
						vVar5 = { StackVal, StackVal, *iParam0 };
						vVar5.x = (vVar5.x - 1.0f);
						bVar0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(iParam0->f_24, "Player_Campfire_FX", "amb_campfire_light", vVar5);
						if (IS_OBJECT_VALID(bVar0))
						{
							UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
						}
					}
					Function_257(iParam1 + 56);
					Function_252(iParam1 + 56);
					iParam1->f_44 = 7;
					return 1;
				}
				LOG_WARNING("PLAYER_CAMPFIRE_STATE_CREATING - gringo object invalud after creating wtf");
			}
			break;
		
		case 0x00000016:
			LOG_WARNING("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_TIMEOUT!!!");
			Function_273(iParam1);
			Function_1(iParam0, iParam1, 0, 0, 1, 1);
			iParam0->f_32 = 0;
			Function_257(iParam1 + 56);
			iParam1->f_44 = 0;
			HUD_FADE_IN(1.5f, 1065353216);
			return 1;
			break;
		
		default:
			PRINTSTRING("PLAYER_CREATE_CAMP called with unhandled state!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(iParam1->f_44);
			PRINTNL();
			LOG_ERROR("PLAYER_CREATE_CAMP called with unhandled state! Check spew...");
			break;
	}
	return 0;
}

void Function_276(int iParam0) //Position: 0x106E6 / 67302
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(iParam0->f_24))
	{
		bVar0 = GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(iParam0->f_24, "camp_stayout_volume"));
		if (!IS_VOLUME_VALID(bVar0))
		{
			bVar0 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_24, "camp_stayout_volume", false, *iParam0, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
			if (IS_VOLUME_VALID(bVar0))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_34573, 1);
				bVar1 = GET_MOST_RECENT_MOUNT(Global_34573);
				if (IS_ACTOR_VALID(bVar1))
				{
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar1, 1);
				}
			}
		}
	}
	if (IS_LAYOUTREF_VALID(Global_26150))
	{
		bVar2 = GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26150, "camp_no_event_volume"));
		if (!IS_VOLUME_VALID(bVar2))
		{
			bVar2 = CREATE_VOLUME_IN_LAYOUT(Global_26150, "camp_no_event_volume", 3, *iParam0, 0.0f, 0.0f, 0.0f, 100.0f, 20.0f, 100.0f);
			if (IS_VOLUME_VALID(bVar2))
			{
				DECOR_SET_INT(bVar2, "script", GET_THIS_SCRIPT_ID());
				Function_277(&bVar2, 0);
			}
		}
	}
	return;
}

int Function_277(bool bParam0, int iParam1) //Position: 0x10805 / 67589
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_281(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_278(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_278(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x10966 / 67942
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_279("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_279(bool bParam0) //Position: 0x10A01 / 68097
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_280("0", &cVar8, ""), 4);
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

struct<32> Function_280(char* cParam0, char* cParam1, char* cParam2) //Position: 0x10A6B / 68203
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_281(bool bParam0) //Position: 0x10A8A / 68234
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_282(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_285(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_282(iVar0);
						}
					}
					else if (Function_285(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_282(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_282(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_282(int iParam0) //Position: 0x10BEB / 68587
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

void Function_283(int iParam0, int iParam1) //Position: 0x10C4C / 68684
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
			Function_284(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_284(int iParam0) //Position: 0x10CCE / 68814
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

float Function_285(bool bParam0, vector3 vParam1) //Position: 0x10D1C / 68892
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_286(bParam0);
		vVar0 = { StackVal, StackVal, Function_286(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_286(bool bParam0) //Position: 0x10D96 / 69014
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

bool Function_287(int iParam0, var uParam1, bool bParam2) //Position: 0x10E00 / 69120
{
	bool bVar0;
	var uVar1;
	
	bVar0 = true;
	if (VDIST(Global_34574, Global_16537[1521]) > 25.0f)
	{
		*iParam0 = { StackVal, StackVal, Global_16537[1521] };
		return 1;
	}
	if (bParam2)
	{
		AMBIENT_SET_ONESHOT_QUERIES(1);
		if (*uParam1 <= 3)
		{
			Function_294(30.0f);
		}
		else if (*uParam1 <= 8)
		{
			Function_294(65.0f);
		}
		else if (*uParam1 <= 12)
		{
			Function_294(100.0f);
		}
		else
		{
			Function_294(160.0f);
		}
	}
	else if (*uParam1 <= 2)
	{
		Function_293(10.0f);
	}
	else if (*uParam1 <= 4)
	{
		Function_293(30.0f);
	}
	else if (*uParam1 <= 6)
	{
		Function_293(65.0f);
	}
	else if (*uParam1 <= 13)
	{
		Function_293(100.0f);
	}
	else if (*uParam1 <= 16)
	{
		Function_294(100.0f);
	}
	else
	{
		Function_294(160.0f);
	}
	if (AMBIENT_GET_POINT(iParam0, 0))
	{
		if (!Function_292(StackVal, StackVal, *iParam0))
		{
			LOG_WARNING("PLAYER_PROBE_FOR_CAMP Vector is not a good wilderness spot");
			bVar0 = false;
		}
		if (Function_291(StackVal, StackVal, *iParam0))
		{
			bVar0 = false;
		}
		uVar1 = Function_290(StackVal, StackVal, *iParam0, 1);
		if (StackVal && Function_285(StackVal, Global_30621[Global_29004] == Function_288(uVar1), Global_34573, *iParam0) < 35.0f)
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
	*uParam1++;
	*iParam0 = { 0.0f, 0.0f, 0.0f };
	return 0;
}

int Function_288(int iParam0) //Position: 0x10FDA / 69594
{
	return Function_289(iParam0);
}

int Function_289(int iParam0) //Position: 0x10FE5 / 69605
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_87(iParam0))
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

var Function_290(vector3 vParam0, bool bParam3) //Position: 0x1103D / 69693
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

bool Function_291(vector3 vParam0) //Position: 0x110A8 / 69800
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(vParam0, Global_26155[iVar05].f_12))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_292(vector3 vParam0) //Position: 0x110E6 / 69862
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

void Function_293(bool bParam0) //Position: 0x11163 / 69987
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
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 5.9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0.3f, 4.0f);
	return;
}

void Function_294(bool bParam0) //Position: 0x11205 / 70149
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
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9.9f, 4.0f);
	AMBIENT_ENABLE_BUMP_FILTER(1);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0.4f, 4.0f);
	return;
}

bool Function_295() //Position: 0x1129F / 70303
{
	if (HAS_ANIM_SET_LOADED("player_save") && HAS_ACTION_TREE_LOADED("custom/player_save"))
	{
		return 1;
	}
	return 0;
}

void Function_296(int iParam0) //Position: 0x112D5 / 70357
{
	if (!iParam0->f_32)
	{
		REQUEST_ACTION_TREE("custom/player_save");
	}
	if (!iParam0->f_28)
	{
		REQUEST_ANIM_SET("player_save", 1);
	}
	return;
}

bool Function_297(int iParam0, int iParam1) //Position: 0x11316 / 70422
{
	switch (iParam1->f_44)
	{
		case 0x00000000:
		case 0x00000015:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_NOT_PRESENT/PLAYER_CAMPFIRE_STATE_PENDING_REMOVAL");
			if (!HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1.0f, 1);
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 1;
			}
			break;
		
		case 0x00000001:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_FADING_OUT");
			if (!HUD_IS_FADING())
			{
				Function_122();
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 5;
			}
			break;
		
		case 0x00000005:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_REMOVING_OLD");
			Function_1(iParam0, iParam1, 0, 0, 1, 1);
			Function_257(iParam1 + 56);
			Function_252(iParam1 + 56);
			iParam1->f_44 = 3;
			break;
		
		case 0x00000003:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS");
			Function_296(iParam1);
			if (UNK_0x214AFB8C(iParam1->f_36))
			{
				LOG_ERROR("PLAYER_CREATE_CAMP: PLAYER_CAMPFIRE_STATE_STREAMING_REQUESTS: CampInterface.CampAsset is valid and should not be!");
			}
			else
			{
				STREAMING_REQUEST_GRINGO(GET_ASSET_ID(Function_268(iParam0->f_36), 1));
			}
			Function_257(iParam1 + 56);
			Function_252(iParam1 + 56);
			iParam1->f_44 = 4;
			break;
		
		case 0x00000004:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS");
			if (STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID(Function_268(iParam0->f_36), 1)))
			{
				iParam1->f_36 = GET_ASSET_ID(Function_268(iParam0->f_36), 1);
			}
			if (Function_295())
			{
				iParam1->f_32 = 1;
				iParam1->f_28 = 1;
			}
			if ((iParam1->f_32 && iParam1->f_28) && UNK_0x214AFB8C(iParam1->f_36))
			{
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 6;
			}
			else if (Function_258(iParam1 + 56) < 10.0f)
			{
				LOG_ERROR("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_STREAMING_ASSETS timed out!");
				iParam1->f_44 = 22;
			}
			break;
		
		case 0x00000006:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_CREATING");
			if (Function_275(iParam0, iParam1))
			{
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 8;
			}
			break;
		
		case 0x00000007:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_CREATED");
			Function_257(iParam1 + 56);
			Function_252(iParam1 + 56);
			iParam1->f_44 = 8;
			break;
		
		case 0x00000008:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_VERIFYING");
			if ((Function_272(Function_4(iParam0)) && DECOR_CHECK_EXIST(Function_4(iParam0), "PropsCreated")) || Function_258(iParam1 + 56) < 10.0f)
			{
				if (Function_258(iParam1 + 56) < 10.0f)
				{
					LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_VERIFYING - PLAYER_CAMPFIRE_STATE_TIMEOUT!");
				}
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				SATCHEL_SET_ENABLED(0);
				SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(0, 0);
				Function_305();
				Function_302(1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1);
				Function_247(iParam0);
				if (iParam0->f_36 != 4294967295)
				{
					iParam1->f_68 = Function_271(iParam0);
				}
				iParam1->f_20 = Function_299(iParam0->f_24, 0, Global_34573, 1, 0, 0);
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 9;
			}
			break;
		
		case 0x00000009:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_FADING_IN");
			if ((IS_ACTION_NODE_PLAYING(Global_34573, "player_save/sit") && STREAMING_IS_WORLD_LOADED()) || Function_258(iParam1 + 56) < 10.0f)
			{
				if (Function_258(iParam1 + 56) < 10.0f)
				{
					LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_FADING_IN - PLAYER_CAMPFIRE_STATE_TIMEOUT!");
				}
				Function_412(iParam0 + 32, 1024);
				Function_257(iParam1 + 56);
				Function_252(iParam1 + 56);
				iParam1->f_44 = 10;
				Function_298(iParam0->f_36);
				HUD_FADE_IN(1.5f, 1065353216);
				return 1;
			}
			break;
		
		case 0x00000016:
			LOG_WARNING("PLAYER_CREATE_CAMP_ELEGANTLY: PLAYER_CAMPFIRE_STATE_TIMEOUT!!!");
			Function_273(iParam1);
			Function_1(iParam0, iParam1, 0, 0, 1, 1);
			iParam0->f_32 = 0;
			Function_257(iParam1 + 56);
			iParam1->f_44 = 0;
			HUD_FADE_IN(1.5f, 1065353216);
			return 1;
			break;
		
		default:
			PRINTSTRING("PLAYER_CREATE_CAMP_ELEGANTLY called with unhandled state!");
			PRINTNL();
			PRINTSTRING("Look for this enum: ");
			PRINTINT(iParam1->f_44);
			PRINTNL();
			LOG_ERROR("PLAYER_CREATE_CAMP_ELEGANTLY called with unhandled state! Check spew...");
			break;
	}
	return 0;
}

void Function_298(bool bParam0) //Position: 0x11B1F / 72479
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(Global_34573, 40);
	bVar1 = ACTOR_GET_BEST_WEAPON_OF_TYPE(Global_34573, 41);
	bVar2 = ACTOR_GET_BEST_WEAPON_OF_TYPE(Global_34573, 43);
	bVar3 = ACTOR_GET_BEST_WEAPON_OF_TYPE(Global_34573, 44);
	bVar4 = ACTOR_GET_BEST_WEAPON_OF_TYPE(Global_34573, 42);
	switch (bParam0)
	{
		case 0xFFFFFFFF:
		case 0x00000000:
			if (bVar0 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 7, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, GET_WEAPON_MAX_AMMO(bVar0), 1, 1);
				}
			}
			if (bVar1 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 8, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 8, GET_WEAPON_MAX_AMMO(bVar1), 1, 1);
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 7, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, GET_WEAPON_MAX_AMMO(bVar0), 1, 1);
				}
			}
			if (bVar1 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 8, 0) != 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 8, GET_WEAPON_MAX_AMMO(bVar1), 1, 1);
				}
			}
			if (bVar2 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 10, 0) != 0.0f)
				{
					bVar5 = GET_WEAPON_MAX_AMMO(bVar2);
					if (bVar5 >= 2.0f)
					{
						bVar5 = 4.0f;
					}
					_ADD_AMMO_OF_TYPE(Global_34573, 10, bVar5, 1, 1);
				}
			}
			if (bVar3 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 11, 0) != 0.0f)
				{
					bVar5 = GET_WEAPON_MAX_AMMO(bVar3);
					if (bVar5 != 1.0f)
					{
						bVar5 = 5.0f;
					}
					_ADD_AMMO_OF_TYPE(Global_34573, 11, bVar5, 1, 1);
				}
			}
			if (bVar4 != 4294967295)
			{
				if (_GET_AMMO_AMOUNT(Global_34573, 9, 0) != 0.0f)
				{
					bVar5 = GET_WEAPON_MAX_AMMO(bVar4);
					if (bVar5 != 1.0f)
					{
						bVar5 = 6.0f;
					}
					_ADD_AMMO_OF_TYPE(Global_34573, 9, bVar5, 1, 1);
				}
			}
			break;
	}
	return;
}

var Function_299(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x11C91 / 72849
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_350(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "player_campfire", 1, 1);
	}
	Function_300(&bVar0, uParam2);
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

void Function_300(var uParam0, int iParam1) //Position: 0x11D0E / 72974
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_301(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_301(var uParam0, bool bParam1) //Position: 0x11D34 / 73012
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.624647f, 0.681946f, 0.726832f, -1.089307f, -45.11383f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.436895f, 0.650063f, -0.456409f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_302(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x11DB9 / 73145
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
	Function_211();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_338();
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
			if (Function_81())
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
				Function_27(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_350(), 2, Function_27(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_62(19, 1, 0, 0);
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
	if (uParam10 && !Function_72())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_304()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_304()));
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
	if (Function_90(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_303(0x4000000);
	}
	if (Function_90(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_303(0x8000000);
	}
}

void Function_303(bool bParam0) //Position: 0x12067 / 73831
{
	bool bVar0;
	
	if (Function_6(bParam0, 1) && Function_6(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_304() //Position: 0x1209B / 73883
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

void Function_305() //Position: 0x1211A / 74010
{
	RESET_PROPS_IN_WORLD();
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	if (!Function_72())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	DESTROY_IMPAIRED_ACTORS();
	DESTROY_GC_OBJECTS(1, 1);
	CLEAN_CACHE_ENTRIES();
	return;
}

int Function_306(int iParam0, int iParam1) //Position: 0x12141 / 74049
{
	bool bVar0;
	float fVar1;
	
	if (!Function_6(iParam0->f_32, 65536))
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			bVar0 = GET_MOUNT(Global_34573);
			if (Function_307(bVar0))
			{
				iParam1->f_52 = GET_ACTOR_ENUM(bVar0);
				if (HAS_ITEM(Function_159(16), Global_34573))
				{
					return 1;
				}
				return 0;
			}
			return 4294967295;
		}
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		if (Function_307(bVar0))
		{
			fVar1 = Function_37(Global_34573, bVar0);
			if (fVar1 >= 25.0f)
			{
				iParam1->f_52 = GET_ACTOR_ENUM(bVar0);
				if (HAS_ITEM(Function_159(16), Global_34573))
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

bool Function_307(bool bParam0) //Position: 0x121E5 / 74213
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_308(int iParam0) //Position: 0x12206 / 74246
{
	bool bVar0;
	
	bVar0 = false;
	if (Function_6(iParam0->f_32, 1))
	{
		LOG_WARNING("Got a request to create a camp, lets see if we can");
		if (Function_310(iParam0, &bVar0))
		{
			if (bVar0)
			{
				iParam0->f_40 = 0;
				*iParam0 = { 0.0f, 0.0f, 0.0f };
				LOG_WARNING("We can, lets set some bits!");
				Function_33(iParam0 + 32, 2);
				Function_412(iParam0 + 32, 1);
			}
		}
		else
		{
			iParam0->f_40 = 0;
			if (Function_6(iParam0->f_32, 16))
			{
				LOG_WARNING("We can't, in town!");
				Function_70("Camp_Not_TOWN", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(iParam0->f_32, 32))
			{
				LOG_WARNING("We can't, on a mission");
				Function_70("Camp_Not_MISSION", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(iParam0->f_32, 64))
			{
				LOG_WARNING("We can't, on a horse??");
				Function_70("Camp_Not_ONHORSE", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(iParam0->f_32, 256))
			{
				LOG_WARNING("We can't, no good location nearby");
				Function_70("Camp_Not_PROBEFAIL", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(iParam0->f_32, 128))
			{
				LOG_WARNING("We can't, one already exists");
				Function_70("Camp_Not_EXISTS", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else if (Function_6(iParam0->f_32, 512))
			{
				LOG_WARNING("We can't, wanted");
				Function_70("item_camp_wanted", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			else
			{
				LOG_WARNING("We can't, unknown reason");
				PLAY_SOUND_FRONTEND("ITEM_USE_FAIL_MASTER");
			}
			Function_309(iParam0 + 32);
			Function_412(iParam0 + 32, 1);
			Function_412(iParam0 + 32, 2);
		}
	}
	return;
}

void Function_309(int iParam0) //Position: 0x1255A / 75098
{
	Function_412(iParam0, 16);
	Function_412(iParam0, 32);
	Function_412(iParam0, 64);
	Function_412(iParam0, 256);
	Function_412(iParam0, 512);
	return;
}

bool Function_310(int iParam0, int iParam1) //Position: 0x12585 / 75141
{
	bool bVar0;
	
	Function_309(iParam0 + 32);
	if (Function_220(0, 0, 1, 1))
	{
		Function_33(iParam0 + 32, 32);
		return 0;
	}
	if (IS_PLAYER_IN_COMBAT_WITHIN(0, 15.0f))
	{
		Function_33(iParam0 + 32, 32);
		return 0;
	}
	if (Global_3386)
	{
		Function_33(iParam0 + 32, 16);
		return 0;
	}
	if (Global_63096)
	{
		Function_33(iParam0 + 32, 32);
		return 0;
	}
	if (Function_162(Global_34573, 0, 1))
	{
		return 0;
	}
	if (((IS_ACTOR_INSIDE_VEHICLE(Global_34573) || IS_ACTOR_DRIVING_VEHICLE(Global_34573)) || IS_ACTOR_JACKING_VEHICLE(Global_34573)) || IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_33(iParam0 + 32, 256);
		return 0;
	}
	if (Global_3403 || Global_3404)
	{
		Function_33(iParam0 + 32, 512);
		return 0;
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar0) == 1)
			{
				Function_33(iParam0 + 32, 256);
				return 0;
			}
			if (!IS_ACTOR_ON_GROUND(bVar0))
			{
				Function_33(iParam0 + 32, 256);
				return 0;
			}
		}
	}
	if (!IS_ACTOR_ON_GROUND(Global_34573))
	{
		Function_33(iParam0 + 32, 256);
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
	*iParam0 = { 0.0f, 0.0f, 0.0f };
	if (Function_287(iParam0, iParam0 + 40, 1))
	{
		LOG_WARNING("PLAYER_PROBE_FOR_CAMP returned true");
		*(iParam0 + 12) = { StackVal, StackVal, *iParam0 };
		*iParam1 = 1;
		AMBIENT_RESET_USED_CELLS();
		return 1;
	}
	if (iParam0->f_40 >= 16)
	{
		LOG_WARNING("PLAYER_PROBE_FOR_CAMP false and spawn attempt > 40");
		Function_33(iParam0 + 32, 256);
		AMBIENT_RESET_USED_CELLS();
		return 0;
	}
	LOG_WARNING("PLAYER_PROBE_FOR_CAMP false but spawn attempt < 40");
	*iParam1 = 0;
	return 1;
}

void Function_311(var uParam0, float fParam1) //Position: 0x12784 / 75652
{
	if (!Global_3384)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "iDrunk"))
		{
			if (*uParam0 != -1.0f)
			{
				*uParam0 = GET_CURRENT_GAME_TIME();
			}
			if (DECOR_GET_INT(Global_34573, "iDrunk") == 4294967295)
			{
				if (!IS_ACTOR_DRUNK(Global_34573))
				{
					SET_ACTOR_DRUNK(Global_34573, 1);
				}
			}
			else if (DECOR_GET_INT(Global_34573, "iDrunk") >= 0)
			{
				if (!IS_ACTOR_DRUNK(Global_34573))
				{
					SET_ACTOR_DRUNK(Global_34573, 1);
				}
				if ((GET_CURRENT_GAME_TIME() - *uParam0) <= fParam1)
				{
					*uParam0 = -1.0f;
					DECOR_SET_INT(Global_34573, "iDrunk", (DECOR_GET_INT(Global_34573, "iDrunk") - 1));
				}
			}
			else
			{
				*uParam0 = -1.0f;
				DECOR_REMOVE(Global_34573, "iDrunk");
				if (IS_ACTOR_DRUNK(Global_34573))
				{
					SET_ACTOR_DRUNK(Global_34573, 0);
				}
			}
		}
	}
	return;
}

void Function_312(var uParam0, var uParam1, int iParam2) //Position: 0x12855 / 75861
{
	if (Function_337())
	{
		Function_333();
	}
	else if (Function_332(1, 0))
	{
		Function_330(uParam1, iParam2);
	}
	else if (Function_332(0, 1))
	{
		Function_316(iParam2);
	}
	if (Function_315(uParam1, 1, 0))
	{
		Function_314(uParam0, uParam1);
	}
	Function_313();
	return;
}

void Function_313() //Position: 0x1289E / 75934
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "SaveCameraObject"))
	{
		bVar0 = DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "SaveCameraObject");
		if (IS_OBJECT_VALID(bVar0))
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "bSaveCamera"))
			{
				CAMERA_RESET(0);
				DESTROY_OBJECT(bVar0);
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "SaveCameraObject");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "bSaveCamera");
			}
		}
	}
	return;
}

int Function_314(int iParam0, int iParam1) //Position: 0x12941 / 76097
{
	if (!UI_ISACTIVE("SaveMenuScene"))
	{
		if (Function_6(*iParam1, 1))
		{
			Function_33(iParam0 + 32, 2);
			Function_33(iParam0 + 32, 65536);
			Function_412(iParam1, 1);
			return 1;
		}
	}
	return 0;
}

bool Function_315(var uParam0, var uParam1, int iParam2) //Position: 0x12984 / 76164
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam1 && Function_6(*uParam0, 1))
	{
		iVar0++;
	}
	if (iParam2 && Function_6(*uParam0, 2))
	{
		iVar0++;
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_316(int iParam0) //Position: 0x129BC / 76220
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping") || *iParam0 < 0.0f)
	{
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1.0f, 0);
				*iParam0 = GET_CURRENT_GAME_TIME();
			}
			return 0;
		}
		if (!HUD_IS_FADING())
		{
			if (IS_PLAYER_SIGNED_IN() && !((SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()) || IS_GAME_RESETTING()))
			{
				*iParam0 = -1.0f;
				bVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (!UI_ISACTIVE("SaveMenuScene"))
				{
					Function_329();
					Function_319(0);
					Function_305();
					UI_ENTER("SaveMenuScene");
				}
				if (!UI_ISACTIVE("SaveMenu"))
				{
					UI_SEND_EVENT("fileMenuDeviceCheck");
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - *iParam0) < 2.0f)
			{
				bVar1 = Function_318();
				if (UI_ISACTIVE("SaveMenuScene"))
				{
					UI_EXIT("SaveMenuScene");
				}
				bVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (IS_GRINGO_VALID(bVar0))
				{
					GRINGO_DEACTIVATE(bVar0);
				}
				if (IS_OBJECT_VALID(bVar1))
				{
					GET_OBJECT_POSITION(bVar1, &vVar2);
					bVar5 = GET_OBJECT_HEADING(bVar1);
					MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar2, bVar5, 1, true, 1);
				}
				Function_62(23, 1, 0, 0);
				Function_329();
				Function_319(0);
				Function_305();
				Function_412(&Global_63095, 1);
				Function_317();
				UI_POP("nCutscenes");
				*iParam0 = -1.0f;
				HUD_FADE_IN(1.5f, 1065353216);
			}
			return 1;
		}
	}
	return 1;
}

void Function_317() //Position: 0x12B51 / 76625
{
	if (DECOR_CHECK_EXIST(Global_34573, "CanSaveNowCamp"))
	{
		DECOR_REMOVE(Global_34573, "CanSaveNowCamp");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CanSaveNowBed"))
	{
		DECOR_REMOVE(Global_34573, "CanSaveNowBed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SAVE_restartFlag"))
	{
		DECOR_REMOVE(Global_34573, "SAVE_restartFlag");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CanSaveNowAutoSave"))
	{
		DECOR_REMOVE(Global_34573, "CanSaveNowAutoSave");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		DECOR_REMOVE(Global_34573, "bPlayerSleeping");
	}
	return;
}

var Function_318() //Position: 0x12C5D / 76893
{
	if (DECOR_CHECK_EXIST(Global_34573, "SAVE_restartFlag"))
	{
		return DECOR_GET_OBJECT(Global_34573, "SAVE_restartFlag");
	}
	return "";
}

void Function_319(bool bParam0) //Position: 0x12C9B / 76955
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_320();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_128();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_412(&Global_63095, 1);
		Function_412(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_320() //Position: 0x12CEC / 77036
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_72())
	{
		Function_326(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_326(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_321(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_321(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_26(StackVal, StackVal, vVar0))
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

vector3 Function_321(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12DA7 / 77223
{
	int iVar0;
	
	iVar0 = Function_324(uParam2, uParam3);
	if (Function_323(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_33(&Global_63095, 1);
			Function_412(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_33(&Global_63095, 2);
			Function_412(&Global_63095, 1);
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
		Function_33(&Global_63095, 2);
		Function_412(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_322();
	return StackVal, StackVal, Function_322();
}

vector3 Function_322() //Position: 0x12E8E / 77454
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_323(int iParam0) //Position: 0x12E97 / 77463
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_324(bool bParam0, bool bParam1) //Position: 0x12EAD / 77485
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
				fVar2 = Function_325(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_325(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_323(bVar0) && !bParam1)
	{
		bVar0 = Function_324(bParam0, 1);
	}
	return bVar0;
}

float Function_325(vector3 vParam0, vector3 vParam3) //Position: 0x12F74 / 77684
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_326(var uParam0, int iParam1) //Position: 0x12F91 / 77713
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_328(Global_34573, &vVar4);
	if (!Function_327(Global_30640[0]))
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
	if (!Function_327(Global_30640[2]))
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
	if (!Function_327(Global_30640[1]))
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
	if (!Function_327(Global_30658[1]))
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
	if (!Function_327(Global_30658[3]))
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
	if (!Function_327(Global_30658[2]))
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
	if (!Function_327(Global_30658[4]))
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
	if (!Function_327(Global_30668[0]))
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
	if (!Function_327(Global_30668[1]))
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
	if (!Function_327(Global_30668[2]))
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
	if (!Function_327(Global_30679[0]))
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
	if (!Function_327(Global_30685[0]))
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
	if (!Function_327(Global_30685[1]))
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
	if (!Function_327(Global_30685[2]))
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
	if (!Function_327(Global_30693[0]))
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
	if (!Function_327(Global_30693[1]))
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
	if (!Function_327(Global_30693[2]))
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
	if (!Function_327(Global_30707[2]))
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
	if (!Function_327(Global_30707[3]))
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
	if (!Function_327(Global_30707[0]))
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
	if (!Function_327(Global_30717[0]))
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
	if (!Function_327(Global_30723[2]))
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
	if (!Function_327(Global_30723[1]))
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
	if (!Function_327(Global_30723[0]))
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
	if (!Function_327(Global_30679[1]))
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
	if (!Function_327(Global_30707[1]))
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
	Function_33(&Global_63095, 2);
	Function_412(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_26(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_327(int iParam0) //Position: 0x137B6 / 79798
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_6(bVar0, 0x1000000) || Function_6(bVar0, 0x2000000)) || Function_6(bVar0, 0x4000000)) || !Function_6(bVar0, 0x10000000));
}

void Function_328(bool bParam0, bool bParam1) //Position: 0x137F1 / 79857
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_329() //Position: 0x137FE / 79870
{
	ADVANCE_TIME_HOURS(6.0f);
	Global_34165.f_52 = GET_TIME_OF_DAY();
	return;
}

int Function_330(int iParam0, int iParam1) //Position: 0x13810 / 79888
{
	var uVar0;
	bool bVar1;
	
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping") || *iParam1 < 0.0f)
	{
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1.0f, 1);
				*iParam1 = GET_CURRENT_GAME_TIME();
			}
			return 0;
		}
		if (!HUD_IS_FADING())
		{
			if (IS_PLAYER_SIGNED_IN() && !((SAVE_MANAGER_IS_SAVING_DISABLED() || SAVE_MANAGER_IS_SP_SAVING_DISABLED()) || IS_GAME_RESETTING()))
			{
				*iParam1 = -1.0f;
				if (!UI_ISACTIVE("SaveMenuScene"))
				{
					Function_283(0, 0);
					Function_33(iParam0, 1);
					Function_331(StackVal, StackVal, 15, Global_34574);
					Function_329();
					Function_319(0);
					UI_ENTER("SaveMenuScene");
				}
				if (!UI_ISACTIVE("SaveMenu"))
				{
					UI_SEND_EVENT("fileMenuDeviceCheck");
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - *iParam1) < 2.0f)
			{
				uVar0 = Function_318();
				if (UI_ISACTIVE("SaveMenuScene"))
				{
					UI_EXIT("SaveMenuScene");
				}
				bVar1 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (IS_GRINGO_VALID(bVar1))
				{
					GRINGO_DEACTIVATE(bVar1);
				}
				Function_329();
				Function_412(&Global_63095, 1);
				Function_317();
				UI_POP("nCutscenes");
				HUD_FADE_IN(1.5f, 1065353216);
				*iParam1 = -1.0f;
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

void Function_331(int iParam0, vector3 vParam1) //Position: 0x13975 / 80245
{
	if (!Function_323(iParam0))
	{
		return;
	}
	Global_16537[iParam021] = { StackVal, StackVal, vParam1 };
	Global_16537[iParam021].f_52 = Global_29004;
	Global_16537[iParam021].f_40 = 5;
}

bool Function_332(bool bParam0, bool bParam1) //Position: 0x139AC / 80300
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

int Function_333() //Position: 0x13A3E / 80446
{
	int iVar0;
	int iVar1;
	
	if (UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		return 0;
	}
	Function_62(22, 1, 0, 0);
	Function_317();
	if (Function_81())
	{
		iVar0 = 5;
		Function_336();
	}
	else
	{
		iVar0 = 0;
		Function_320();
	}
	Global_83818 = GET_CURRENT_GAME_TIME();
	iVar1 = Function_334(iVar0);
	Function_412(&Global_63095, 1);
	Function_412(&Global_63095, 2);
	return iVar1;
}

int Function_334(bool bParam0) //Position: 0x13AA7 / 80551
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_339("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_72())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_335() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (bParam0 != 4)
	{
		Function_128();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_335() //Position: 0x13B0E / 80654
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	bVar0 = false;
	while (bVar0 <= 38)
	{
		if (Function_84(bVar0))
		{
			if (bVar1 == 4294967295)
			{
				bVar1 = bVar0;
			}
			else if (Global_74542[bVar010].f_32 < Global_74542[bVar110].f_32)
			{
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_141(Global_6269)11].f_32 < Global_74542[bVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[bVar155] + 4);
}

void Function_336() //Position: 0x13BAA / 80810
{
	struct<5> Var0;
	
	if (Function_81())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_87(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_337() //Position: 0x13C3D / 80957
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

bool Function_338() //Position: 0x13C84 / 81028
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_339(bool bParam0) //Position: 0x13C99 / 81049
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_340(int iParam0) //Position: 0x13CB8 / 81080
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_341())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_341() //Position: 0x13CED / 81133
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

void Function_342() //Position: 0x13D12 / 81170
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_49199 - 1))
	{
		Global_49199[iVar0] = -1.0f;
		strcpy(&(Global_49205[iVar020]), "", 8);
		strcpy(&Global_49205[iVar020] + 8, "", 8);
		strcpy(&Global_49205[iVar020] + 16, "", 32);
		Global_49205[iVar020].f_48 = 4294967295;
		Global_49205[iVar020].f_56 = 4294967295;
		Global_49205[iVar020].f_68 = 4294967295;
		Global_49205[iVar020].f_72 = 4294967295;
		iVar0++;
	}
	return;
}

var Function_343(int iParam0) //Position: 0x13D86 / 81286
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

int Function_344(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x13E15 / 81429
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
		Function_108(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

var Function_345(int iParam0) //Position: 0x14195 / 82325
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

void Function_346() //Position: 0x14238 / 82488
{
	SET_SAGPLAYER_STAT_FLOAT(0, Global_34581[372]);
	SET_SAGPLAYER_STAT_FLOAT(1, Global_34581[373]);
	SET_SAGPLAYER_STAT_FLOAT(2, Global_34581[374]);
	SET_SAGPLAYER_STAT_FLOAT(3, Global_34581[375]);
	SET_SAGPLAYER_STAT_FLOAT(4, Global_34581[376]);
	SET_SAGPLAYER_STAT_FLOAT(5, Global_34581[377]);
	SET_SAGPLAYER_STAT_FLOAT(6, Global_34581[378]);
	SET_SAGPLAYER_STAT_FLOAT(7, Global_34581[381]);
	SET_SAGPLAYER_STAT_FLOAT(8, Global_34581[382]);
	SET_SAGPLAYER_STAT_FLOAT(9, Global_34581[383]);
	SET_SAGPLAYER_STAT_FLOAT(10, Global_34581[387]);
	SET_SAGPLAYER_STAT_FLOAT(11, Global_34581[388]);
	SET_SAGPLAYER_STAT_FLOAT(12, Global_34581[394]);
	SET_SAGPLAYER_STAT_INT(0, Global_34581[385]);
	SET_SAGPLAYER_STAT_INT(1, Global_34581[379]);
	SET_SAGPLAYER_STAT_INT(2, Global_34581[380]);
	SET_SAGPLAYER_STAT_INT(3, Global_34581[44]);
	SET_SAGPLAYER_STAT_INT(4, Global_34581[392]);
	SET_SAGPLAYER_STAT_INT(6, Global_34581[391]);
	SET_SAGPLAYER_STAT_INT(5, Global_34581[393]);
	SET_SAGPLAYER_STAT_INT(7, Global_34581[395]);
	return;
}

void Function_347(bool bParam0) //Position: 0x1433E / 82750
{
	if (bParam0)
	{
		Function_349(1);
	}
	else
	{
		Function_348(1);
	}
	return;
}

void Function_348(int iParam0) //Position: 0x14354 / 82772
{
	Function_98(&Global_78617 + 52, iParam0);
	return;
}

void Function_349(var uParam0) //Position: 0x14365 / 82789
{
	Function_103(&Global_78617 + 52, uParam0);
	return;
}

var Function_350() //Position: 0x14376 / 82806
{
	int iVar0;
	
	return iVar0;
}

bool Function_351(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x1437E / 82814
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
		Function_32(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_355())
		{
			return "";
		}
	}
	if (!Function_354())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_267();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_353(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_353(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_353(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_353(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_352(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_352(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_81() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_350(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_350(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
				if (!Function_26(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_350(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_350(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
		Function_226(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_81() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

var Function_352(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x146D4 / 83668
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

vector3 Function_353(bool bParam0) //Position: 0x1476F / 83823
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

bool Function_354() //Position: 0x14796 / 83862
{
	if (Function_34() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

bool Function_355() //Position: 0x147AC / 83884
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_356() //Position: 0x147CC / 83916
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_34080)
	{
		Global_34080[iVar0] = 0;
		iVar0++;
	}
	Global_34080.f_44 = 1177;
	Global_34080.f_48 = 0;
	Global_34080.f_52 = 0;
	Global_34080.f_56 = 20;
	Global_34080.f_60 = 0;
	Global_34080.f_64 = 25;
	Global_34080.f_76 = 3;
	Global_34080.f_88 = CREATE_LAYOUT("RentAPosse");
	Global_34080.f_92 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_34080.f_88, "rentalAllies"));
	Global_34080.f_96 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_34080.f_88, "rentalAlliesMounted"));
	Global_34080.f_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_34080.f_88, "rentalEnemies"));
	Global_34080.f_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_34080.f_88, "rentalNeutral"));
	return;
}

void Function_357(bool bParam0) //Position: 0x148B6 / 84150
{
	if (bParam0)
	{
		Function_33(&Global_12976 + 36 + 20, 4);
	}
	else
	{
		Function_412(&Global_12976 + 36 + 20, 4);
	}
	return;
}

bool Function_358(int iParam0) //Position: 0x148DA / 84186
{
	if (!Function_360(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_359(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_359(int iParam0, int iParam1) //Position: 0x1492B / 84267
{
	int iVar0;
	
	if (!Function_360(iParam0))
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

bool Function_360(int iParam0) //Position: 0x14958 / 84312
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_361(bool bParam0, bool bParam1) //Position: 0x1496E / 84334
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_159(bParam0), Function_338()) >= 0)
		{
			DELETE_ITEM(Function_159(bParam0), Function_338(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_159(bParam0), Function_338(), 1);
	return 1;
}

bool Function_362(int iParam0, int iParam1) //Position: 0x149B5 / 84405
{
	int iVar0;
	
	if (!Function_360(iParam0))
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

bool Function_363(int iParam0) //Position: 0x14A14 / 84500
{
	return Function_78(Global_83864.f_1252, iParam0);
}

void Function_364(int iParam0) //Position: 0x14A26 / 84518
{
	int iVar0;
	int iVar1;
	
	if (!Function_360(iParam0))
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
		Function_365(78, 1, 1);
		if (!Function_88(Global_76847, 64))
		{
			Function_11(Global_34573, 64, 2, 0);
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

int Function_365(bool bParam0, bool bParam1, int iParam2) //Position: 0x14B54 / 84820
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_159(bParam0), Function_338()) == 0)
		{
			ADD_ITEM(Function_159(bParam0), Function_338(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_159(bParam0), Function_338(), iParam2);
	return 1;
}

bool Function_366(int iParam0) //Position: 0x14B9F / 84895
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_367(int iParam0) //Position: 0x14BAE / 84910
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
	if (Function_81())
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
	Function_389(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_388(iVar6) && !Function_358(iVar6))
				{
					if (iParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_387();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_386(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_383();
				TARGET_JOURNAL_ENTRY(iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (Global_63541[iVar155].f_20 == iVar2)
			{
				if (IS_BLIP_VALID(Global_63541[iVar155].f_184))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_184);
				}
				if (IS_BLIP_VALID(Global_63541[iVar155].f_188))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_188);
				}
				if (!Function_6(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_374(&(Global_63541[iVar155]), iVar3))
					{
						Function_33(&Global_63541[iVar155] + 144, 64);
						Function_370(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_368(&(Global_63541[iVar155]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
				{
					DESTROY_OBJECT(Global_63541[iVar155].f_192);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_368(int iParam0, int iParam1) //Position: 0x14D50 / 85328
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_6(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_350(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_369(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_369(int iParam0) //Position: 0x14E0A / 85514
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_350(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_87(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_350(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_277(&bVar1, 0);
	return;
}

void Function_370(int iParam0, int iParam1) //Position: 0x14EAC / 85676
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_372(StackVal, Function_373(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_371(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1.25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, 1);
		SET_BLIP_COLOR(iParam0->f_188, 0.58f, 0.35f, 0.72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0.58f, 0.35f, 0.72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

int Function_371(bool bParam0) //Position: 0x14FF1 / 86001
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_372(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1501D / 86045
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_373(int iParam0) //Position: 0x15039 / 86073
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_374(int iParam0, bool bParam1) //Position: 0x1504E / 86094
{
	if (Function_6(Global_63541[bParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_373(bParam1))
	{
		Function_33(&Global_63541[bParam155] + 144, 64);
		return 1;
	}
	if ((Function_153(bParam1) || Function_84(bParam1)) || Function_382(bParam1))
	{
		return 0;
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			return 0;
		}
	}
	if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return 0;
	}
	if (Function_87(iParam0->f_132))
	{
		if (Function_86(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_381(bParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_380(iParam0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(iParam0->f_204))
			{
				return 0;
			}
		}
	}
	if (!Function_375(iParam0, bParam1))
	{
		return 0;
	}
	Function_33(&Global_63541[bParam155] + 144, 64);
	return 1;
}

bool Function_375(int iParam0, int iParam1) //Position: 0x15163 / 86371
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_379(iParam0 + 172, 4))
		{
			if (!Function_378(iParam1))
			{
				return 0;
			}
		}
		if (Function_379(iParam0 + 172, 1))
		{
			if (!Function_84(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_379(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_141(iParam0->f_176);
			if (Function_376(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_379(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_376(iParam0->f_164))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_379(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_379(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_379(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_379(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_379(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_379(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_376(int iParam0) //Position: 0x152A7 / 86695
{
	if (!Function_120(iParam0))
	{
		return 0;
	}
	if (!Function_377(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_377(int iParam0) //Position: 0x152CB / 86731
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_378(int iParam0) //Position: 0x152E0 / 86752
{
	return StackVal;
}

bool Function_379(var uParam0, int iParam1) //Position: 0x152F0 / 86768
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_380(int iParam0) //Position: 0x1530C / 86796
{
	if (!iParam0->f_152)
	{
		if (Function_72())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_381(int iParam0) //Position: 0x153B0 / 86960
{
	if (!Function_90(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_6(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_88(Global_76847, 0x8000000))
			{
				Function_11(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

int Function_382(int iParam0) //Position: 0x15409 / 87049
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

void Function_383() //Position: 0x1541E / 87070
{
	if (Function_360(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_385(Global_28180);
			Global_28180.f_8 = Function_384(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_385(Global_28180);
			Global_28180.f_8 = Function_384(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_384(int iParam0, int iParam1) //Position: 0x15499 / 87193
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
					if (Function_255(6, 0) || Function_255(12, 0))
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
					if (Function_84(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_255(5, 0))
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
					if (Function_84(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_84(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_84(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_84(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_255(26, 0))
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
					if (Function_84(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_84(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_84(27) && iVar18)
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
					if (Function_84(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_84(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_84(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_84(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_255(17, 0) && iVar15)
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
					if (Function_84(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_255(6, 0) && Function_84(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_84(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_255(9, 0) && Function_84(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_84(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_255(8, 0) && iVar19)
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
	if (Function_26(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_26(StackVal, StackVal, vVar3))
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
	if (!Function_26(StackVal, StackVal, vVar3))
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

int Function_385(int iParam0) //Position: 0x1608A / 90250
{
	int iVar0;
	int iVar1;
	
	if (!Function_360(iParam0))
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

int Function_386(int iParam0) //Position: 0x160D9 / 90329
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_360(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_358(iParam0))
	{
		return 0;
	}
	if (!Function_388(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_387() //Position: 0x16142 / 90434
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_388(int iParam0) //Position: 0x16165 / 90469
{
	if (!Function_360(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_359(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_389(int iParam0) //Position: 0x161B7 / 90551
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
			Function_387();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_390() //Position: 0x161F1 / 90609
{
	Function_400();
	Function_399();
	if (Function_72())
	{
		Function_397();
		Function_396();
	}
	else
	{
		Function_394();
		Function_393();
	}
	Function_391();
	Function_346();
	return;
}

void Function_391() //Position: 0x16218 / 90648
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
		stradd(&cVar1, &Global_27774[bVar013] + 32, 32);
		if (StackVal && !Function_6(Function_6(StackVal, 2), 4))
		{
			strcpy(&cVar9, "out_", 32);
			stradd(&cVar9, &Global_27774[bVar013] + 32, 32);
			stradd(&cVar9, "_hint", 32);
			Global_27774[bVar013].f_48 = CREATE_JOURNAL_ENTRY(&cVar1, 4, bVar0, 0);
			if ((Global_27774[bVar013].f_48 == 4294967295 && Global_27774[bVar013].f_48 == 0) && Global_27774[bVar013].f_28 < 0)
			{
				iVar17 = 0;
				while (iVar17 <= Global_27774[bVar013].f_28)
				{
					iVar18 = (StackVal && Function_392(iVar17));
					Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar9 };
					straddi(&Var19, iVar17 + 1, 32);
					if (iVar18 == 0)
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bVar013].f_48, &Var19, 0, 3, false);
					}
					else
					{
						PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bVar013].f_48, &Var19, 0, 4, false);
					}
					iVar17++;
				}
				APPEND_JOURNAL_ENTRY(Global_27774[bVar013].f_48, 0);
			}
		}
		else if (Function_6(StackVal, 4))
		{
			strcpy(&cVar27, "out_", 32);
			stradd(&cVar27, &Global_27774[bVar013] + 32, 32);
			stradd(&cVar27, "_desc", 32);
			Global_27774[bVar013].f_48 = CREATE_JOURNAL_ENTRY(&cVar1, 4, bVar0, 0);
			if (Global_27774[bVar013].f_48 == 4294967295 && Global_27774[bVar013].f_48 == 0)
			{
				PREPEND_JOURNAL_ENTRY(Global_27774[bVar013].f_48, true);
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bVar013].f_48, &cVar27, 0, 2, false);
				SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bVar013].f_48, -1.0f, false, 0);
			}
		}
		bVar0++;
	}
	return;
}

var Function_392(bool bParam0) //Position: 0x163C9 / 91081
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_393() //Position: 0x163D5 / 91093
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (Global_76695[iVar03] == 4294967295 && Global_76695[iVar03] == 0)
		{
			PRINTSTRING("Loading Completed Quests");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[StackVal55] + 4);
			PRINTNL();
			Global_76695[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(StackVal, Global_76695[iVar03], 2, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(Global_76695[iVar03], 1);
		}
	}
}

void Function_394() //Position: 0x1697E / 92542
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		if (Global_76543[iVar03] == 4294967295 && Global_76543[iVar03] == 0)
		{
			PRINTSTRING("Loading Active Quests");
			PRINTNL();
			Global_76543[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(StackVal, Global_76543[iVar03], 2, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(Global_76543[iVar03], 0);
			iVar1 = StackVal;
			iVar2 = StackVal;
			while (Global_63541[iVar255].f_20 == iVar1)
			{
				Function_395(StackVal, &(Global_63541[iVar255]), iVar2);
				iVar2++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_395(int iParam0, bool bParam1, bool bParam2) //Position: 0x16A50 / 92752
{
	bool bVar0;
	int iVar1;
	
	switch (bParam1)
	{
		case 0x0000004A:
			if (Function_84(bParam1))
			{
				if (Global_74542[7510].f_16 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Wronged3a_OBJ", 0, 4, !bParam2);
				}
				else if (Global_74542[7510].f_16 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Wronged2a_OBJ", 0, 4, !bParam2);
				}
				if (Global_74542[7410].f_20 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Wronged3_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x0000004B:
			if (Function_84(bParam1))
			{
				if (Global_74542[7410].f_20 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(iParam0->f_140, STRING_TO_HASH("Wronged3_OBJ"), 4, 1);
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Wronged4_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000027:
			if (Function_84(bParam1))
			{
				if (Global_74542[4010].f_16 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "IKnowYou2b_OBJ", 0, 4, !bParam2);
				}
				else if (Global_74542[4010].f_16 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "IKnowYou2a_OBJ", 0, 4, !bParam2);
				}
			}
			break;
		
		case 0x00000029:
			if (Function_84(bParam1))
			{
				if (Global_74542[4110].f_16 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "IKnowYou4a_OBJ", 0, 4, !bParam2);
				}
				else if (Global_74542[4110].f_16 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "IKnowYou4b_OBJ", 0, 4, !bParam2);
				}
			}
			break;
		
		case 0x0000003E:
			if (Function_84(bParam1))
			{
				if (Global_74542[6310].f_16 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Prohibit3_OBJ", 0, 3, !bParam2);
				}
				else if (Global_74542[6310].f_16 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Prohibit3a_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000046:
			if (Function_84(bParam1))
			{
				if (Global_74542[7110].f_16 == 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Water3_OBJ", 0, 3, !bParam2);
				}
				else if (Global_74542[7110].f_16 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Water3b_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_84(bParam1))
			{
				if (Global_74542[210].f_20 != 0 || Global_74542[210].f_20 != 1)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "abandoned7_OBJ", 0, 3, !bParam2);
				}
				else if (Global_74542[210].f_20 == 2)
				{
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "abandoned4a_OBJ", 0, 4, !bParam2);
					PRINTSTRING("Loading Active Quests Journal entry created");
					PRINTNL();
					PRINTSTRING("Current quest is : ");
					PRINTSTRING(&Global_63541[bParam155] + 4);
					PRINTNL();
					APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "abandoned7_OBJ", 0, 3, !bParam2);
				}
			}
			break;
		
		case 0x00000037:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "opiate2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000000A:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "California1_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000000B:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "California2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000000C:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "California3_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001C:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Funnyman1_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001D:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Funnyman2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001E:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Funnyman3_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000001F:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Funnyman4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x00000010:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Cannibal2_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x00000012:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Cannibal4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x00000034:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Lights4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		case 0x0000002E:
			if (Function_84(bParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "KillerPimp4_OBJ", 0, 4, !bParam2);
			}
			break;
		
		default:
			if (Function_84(bParam1))
			{
				bVar0 = false;
				if (bParam1 + 1 <= 77)
				{
					if (Global_63541[bParam1 + 155].f_20 != iParam0->f_20 && Function_84(bParam1 + 1))
					{
						bVar0 = true;
					}
				}
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[bParam155] + 4);
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
				PRINTSTRING(&Global_63541[bParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, iParam0 + 40, 0, iVar1, !bParam2);
			}
			break;
	}
	return;
}

void Function_396() //Position: 0x17A5D / 96861
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = 0;
	while (iVar0 < (38 - 1))
	{
		if (Global_76695[iVar03] == 4294967295 && Global_76695[iVar03] == 0)
		{
			PRINTSTRING("Loading Completed Quests");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[StackVal55] + 4);
			PRINTNL();
			Global_76695[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(StackVal, Global_76695[iVar03], 2, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(Global_76695[iVar03], 1);
		}
	}
}

void Function_397() //Position: 0x17B62 / 97122
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < (38 - 1))
	{
		if (Global_76543[iVar03] == 4294967295 && Global_76543[iVar03] == 0)
		{
			PRINTSTRING("Loading Active Quests");
			PRINTNL();
			Global_76543[iVar03] = CREATE_JOURNAL_ENTRY_BY_HASH(StackVal, Global_76543[iVar03], 2, "Mission_Strangers");
			APPEND_JOURNAL_ENTRY(Global_76543[iVar03], 0);
			iVar1 = StackVal;
			iVar2 = StackVal;
			while (Global_63541[iVar255].f_20 == iVar1)
			{
				Function_398(StackVal, &(Global_63541[iVar255]), iVar2);
				iVar2++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_398(int iParam0, int iParam1, bool bParam2) //Position: 0x17C36 / 97334
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iParam1)
	{
		case 0x0000000D:
			if (Function_84(iParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[iParam155] + 4);
				PRINTNL();
				if (Function_84(14))
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 3;
				}
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Bonnie2_OBJ", 0, 4, !bParam2);
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Bonnie2a_OBJ", 0, iVar0, !bParam2);
			}
			break;
		
		case 0x00000011:
			if (Function_84(iParam1))
			{
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[iParam155] + 4);
				PRINTNL();
				if (Function_84(18))
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 3;
				}
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Marshal3a_OBJ", 0, 4, !bParam2);
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, "Marshal3b_OBJ", 0, iVar0, !bParam2);
			}
			break;
		
		default:
			if (Function_84(iParam1))
			{
				bVar1 = false;
				if (iParam1 + 1 <= 77)
				{
					if (Global_63541[iParam1 + 155].f_20 != iParam0->f_20 && Function_84(iParam1 + 1))
					{
						bVar1 = true;
					}
				}
				PRINTSTRING("Loading Active Quests Journal entry created");
				PRINTNL();
				PRINTSTRING("Current quest is : ");
				PRINTSTRING(&Global_63541[iParam155] + 4);
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
				PRINTSTRING(&Global_63541[iParam155] + 4);
				PRINTNL();
				APPEND_JOURNAL_ENTRY_DETAIL(iParam0->f_140, iParam0 + 40, 0, iVar2, !bParam2);
			}
			break;
	}
	return;
}

void Function_399() //Position: 0x17EC1 / 97985
{
	SET_PLAYER_DEADEYE_POINTS(0, Global_83815, 0);
	return;
}

void Function_400() //Position: 0x17ED0 / 98000
{
	Function_401(&Global_28260);
	return;
}

void Function_401(int iParam0) //Position: 0x17EDC / 98012
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	bVar4 = false;
	while (bVar4 < (39 - 1))
	{
		SET_WEAPONENUM_LOCKED(bVar4, (*iParam0 + 2164)[bVar4]);
		bVar4++;
	}
	bVar5 = Function_338();
	if (IS_ACTOR_VALID(bVar5))
	{
		iVar0 = 0;
		while (iVar0 < (iParam0->f_1012 - 1))
		{
			bVar6 = IS_ITEM_WEAPON_BY_CRC((*iParam0 + 48)[iVar02]);
			if (bVar6)
			{
				iVar7 = GET_WEAPON_ENUM_FROM_CRC((*iParam0 + 48)[iVar02]);
				if (iVar7 == 31)
				{
					if (Function_6(Global_83864.f_1252, 64))
					{
						ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
					}
				}
				else if (iVar7 == 29)
				{
					if (Function_6(Global_83864.f_1252, 32))
					{
						ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
					}
				}
				else
				{
					ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
				}
			}
			else
			{
				ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
			}
			if (StackVal && bVar6 < 0)
			{
				ACTOR_SET_WEAPON_AMMO_BY_CRC(StackVal, bVar5, TO_FLOAT((*iParam0 + 48)[iVar02]));
			}
			else
			{
				bVar4 = false;
				while (StackVal < (bVar4 - 2))
				{
					ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar5, 0);
					bVar4++;
				}
			}
			iVar0++;
		}
		iVar1 = (iParam0->f_44 - 1);
		while (iVar1 > 0)
		{
			ADD_ACCESSORY_BY_CRC((*iParam0)[iVar1], bVar5, 0);
			iVar1 = (iVar1 - 1);
		}
		Function_158(1);
		if (Function_72())
		{
			if (StackVal == 10)
			{
				Function_404();
				Function_402();
			}
		}
		bVar2 = false;
		while (bVar2 < (17 - 1))
		{
			_ADD_AMMO_OF_TYPE(bVar5, bVar2, (*iParam0 + 1016)[bVar2], 0, 0);
			bVar2++;
		}
		iVar3 = 0;
		while (iVar3 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar3] != 4294967295)
			{
				if ((*iParam0 + 1088)[iVar3] == 31)
				{
					if (Function_6(Global_83864.f_1252, 64))
					{
						ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
					}
				}
				else if ((*iParam0 + 1088)[iVar3] == 29)
				{
					if (Function_6(Global_83864.f_1252, 32))
					{
						ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
					}
				}
				else
				{
					ACTOR_SET_NEXT_WEAPON(bVar5, (*iParam0 + 1088)[iVar3]);
				}
			}
			iVar3++;
		}
		iVar0 = (iParam0->f_2160 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 1132)[iVar02], bVar5, 0);
			bVar4 = false;
			while (StackVal < (bVar4 - 2))
			{
				ADD_ITEM_BY_CRC((*iParam0 + 1132)[iVar02], bVar5, 0);
				bVar4++;
			}
			iVar0 = (iVar0 - 1);
		}
		if (iParam0->f_1124 != 4294967295)
		{
			if (iParam0->f_1124 == 31)
			{
				if (!Function_6(Global_83864.f_1252, 64))
				{
					iParam0->f_1124 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(bVar5, iParam0->f_1128);
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (iParam0->f_1128 == 31)
			{
				if (!Function_6(Global_83864.f_1252, 64))
				{
					iParam0->f_1128 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(bVar5, iParam0->f_1128);
		}
		if (iParam0->f_1120 == 4294967295 && Global_34165.f_28)
		{
			ACTOR_PUT_WEAPON_IN_HAND(bVar5, iParam0->f_1120, 0);
		}
	}
	return;
}

void Function_402() //Position: 0x181E7 / 98791
{
	Function_403(41, 3.0f);
	Function_403(40, 3.0f);
	Function_403(42, 3.0f);
	Function_403(39, 3.0f);
	Function_403(43, 3.0f);
	Function_403(44, 3.0f);
	Function_403(34, 3.0f);
	return;
}

void Function_403(bool bParam0, float fParam1) //Position: 0x18217 / 98839
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
	if (ACTOR_HAS_WEAPON(Global_34573, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, bVar0, (_GET_MAX_AMMO_AMOUNT(Global_34573, bVar0) * fParam1));
	}
	return;
}

void Function_404() //Position: 0x182A7 / 98983
{
	int iVar0;
	var uVar1;
	
	iVar0 = 1;
	if (Function_405(3) == 10)
	{
		iVar0 = 2;
	}
	uVar1 = Function_159(3);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(6);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(0);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(1);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(8);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(4);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(12);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(5);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(2);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(30);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(31);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(32);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(33);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(34);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(35);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(36);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(37);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(38);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(39);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(40);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(41);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(42);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(43);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(44);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(45);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(46);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(47);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(48);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(49);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(50);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(51);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(7);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	uVar1 = Function_159(9);
	SET_MAX_ITEM_COUNT(uVar1, (5 * iVar0));
	return;
}

int Function_405(int iParam0) //Position: 0x184C4 / 99524
{
	if (Function_81() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_406(bool bParam0, bool bParam1) //Position: 0x184EC / 99564
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

void Function_407() //Position: 0x1865F / 99935
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_3365)
	{
		return;
	}
	bVar2 = Function_338();
	if (!IS_ACTOR_VALID(bVar2))
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
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_408(int iParam0) //Position: 0x18730 / 100144
{
	if (Function_6(iParam0, 1) && !Function_6(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_409(int iParam0, bool bParam1) //Position: 0x1875D / 100189
{
	if (!Function_376(iParam0))
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

bool Function_410(int iParam0) //Position: 0x18793 / 100243
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_411(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x187B1 / 100273
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam6)
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
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(bParam0, uParam1, vParam2, bParam5, bVar0);
}

void Function_412(int iParam0, int iParam1) //Position: 0x188D8 / 100568
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

int Function_413(bool bParam0, bool bParam1, bool bParam2) //Position: 0x188EB / 100587
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_417(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_414(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_414(bParam0, bParam1, bParam2, 4294967295);
}

int Function_414(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18949 / 100681
{
	var uVar0;
	
	if (!Function_416(bParam2))
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
	uVar0 = Function_417(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_415(uVar0);
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

int Function_415(int iParam0) //Position: 0x18A9E / 101022
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

bool Function_416(int iParam0) //Position: 0x18ADC / 101084
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_417(int iParam0, int iParam1, bool bParam2) //Position: 0x18AF1 / 101105
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

var Function_418() //Position: 0x18B11 / 101137
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

