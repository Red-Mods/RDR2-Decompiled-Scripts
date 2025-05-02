//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 40
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_15("Loading Gaptooth Breach population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_14("ped_generic", 0);
	Function_13(&bVar0, 202, 8.0f, 0, 0);
	Function_13(&bVar0, 114, 4.0f, 0, 0);
	Function_13(&bVar0, 111, 8.0f, 0, 0);
	Function_13(&bVar0, 112, 8.0f, 0, 0);
	Function_13(&bVar0, 113, 8.0f, 0, 0);
	Function_13(&bVar0, 235, 4.0f, 0, 0);
	Function_13(&bVar0, 212, 8.0f, 0, 0);
	Function_13(&bVar0, 436, 5.0f, 0, 0);
	Function_13(&bVar0, 1049, 1.0f, 0, 0);
	Function_13(&bVar0, 80, 3.0f, 0, 0);
	bVar0 = Function_14("ped_saloon", 0);
	Function_13(&bVar0, 235, 8.0f, 0, 0);
	bVar0 = Function_14("ped_int", 0);
	Function_13(&bVar0, 202, 8.0f, 0, 0);
	Function_13(&bVar0, 114, 4.0f, 0, 0);
	Function_13(&bVar0, 111, 8.0f, 0, 0);
	Function_13(&bVar0, 113, 8.0f, 0, 0);
	Function_13(&bVar0, 112, 8.0f, 0, 0);
	Function_13(&bVar0, 235, 5.0f, 0, 0);
	Function_13(&bVar0, 80, 3.0f, 0, 0);
	Function_13(&bVar0, 212, 8.0f, 0, 0);
	bVar0 = Function_14("ped_prostitute", 0);
	Function_13(&bVar0, 65, 10.0f, 0, 0);
	Function_13(&bVar0, 67, 10.0f, 0, 0);
	Function_12(&(Global_46972[10]));
	Global_46972[10] = Function_14("animal_hunt", 0);
	Function_12(&(Global_46972[11]));
	Global_46972[11] = Function_14("animal_predator", 1);
	Function_13(&(Global_46972[11]), 1088, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1089, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1090, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1061, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1062, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1063, 2.0f, 0, 0);
	bVar0 = Function_14("ped_worker", 0);
	Function_13(&bVar0, 111, 8.0f, 0, 0);
	Function_13(&bVar0, 112, 8.0f, 0, 0);
	Function_13(&bVar0, 113, 8.0f, 0, 0);
	Function_12(&(Global_46972[6]));
	Global_46972[6] = Function_14("animal_horse", 4);
	Function_11(&(Global_46972[6]), 1000, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 1001, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 1002, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 996, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 997, 100.0f, 0, 3);
	Function_11(&(Global_46972[6]), 998, 100.0f, 0, 3);
	Function_12(&(Global_46972[15]));
	Global_46972[15] = Function_14("animal_horse_unsaddled", 0);
	Function_13(&(Global_46972[15]), 1000, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 1001, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 1002, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 996, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 997, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 998, 100.0f, 0, 0);
	Function_12(&(Global_46972[0]));
	Global_46972[0] = Function_14("ped_wilderness", Global_47149);
	Function_13(&(Global_46972[0]), 37, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 64, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 38, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 39, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 51, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 175, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 55, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 178, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 153, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 173, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 402, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 56, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 141, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 46, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 49, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 202, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 55, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 54, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 312, 10.0f, 0, 0);
	Function_13(&(Global_46972[0]), 33, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]));
	Global_46972[1] = Function_14("ped_traveller", 3);
	Function_13(&(Global_46972[1]), 48, 10.0f, 0, 0);
	Function_13(&(Global_46972[1]), 73, 10.0f, 0, 0);
	Function_13(&(Global_46972[1]), 50, 10.0f, 0, 0);
	Function_13(&(Global_46972[1]), 78, 10.0f, 0, 0);
	Function_13(&(Global_46972[1]), 77, 10.0f, 0, 0);
	Function_13(&(Global_46972[1]), 53, 10.0f, 0, 0);
	Function_12(&(Global_46972[5]));
	Global_46972[5] = Function_14("animal_wilderness", 1);
	Function_8(&(Global_46972[5]), 1050, 3.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1051, 3.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 3.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1128, 10.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1051, 3.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_13(&(Global_46972[5]), 1054, 5.0f, 0, 0);
	Function_13(&(Global_46972[5]), 1055, 5.0f, 0, 0);
	Function_13(&(Global_46972[5]), 1056, 5.0f, 0, 0);
	Function_13(&(Global_46972[5]), 1078, 5.0f, 0, 0);
	Function_13(&(Global_46972[5]), 1079, 5.0f, 0, 0);
	bVar0 = Function_14("coyote_den", 0);
	Function_13(&bVar0, 1049, 100.0f, 0, 0);
	Function_12(&(Global_46972[7]));
	Global_46972[7] = Function_14("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1131, 7.0f, 30, 0, 0);
	Function_8(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[14]));
	Global_46972[14] = Function_14("birds_trees", 1);
	Function_13(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_13(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_13(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_13(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_13(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_13(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_7(&(Global_46972[5]), 2E-05f);
	Function_12(&(Global_46972[2]));
	Global_46972[2] = Function_14("ped_law", 1);
	Function_13(&(Global_46972[2]), 449, 1.0f, 0, 0);
	Function_13(&(Global_46972[2]), 436, 4.0f, 0, 0);
	Function_13(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_13(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_13(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_12(&(Global_46972[3]));
	Global_46972[3] = Function_14("ped_bad_guys_local", 1);
	Function_13(&(Global_46972[3]), 397, 8.0f, 0, 0);
	Function_13(&(Global_46972[3]), 397, 8.0f, 0, 0);
	Function_13(&(Global_46972[3]), 398, 8.0f, 0, 0);
	Function_12(&(Global_46972[4]));
	Global_46972[4] = Function_14("ped_bad_guys_generic", 1);
	Function_13(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_13(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_13(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_13(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_13(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_13(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_13(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_13(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_13(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_12(&(Global_46972[9]));
	Global_46972[9] = Function_14("ped_vehicle", 1);
	Function_13(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	while (!Function_6(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar1 = FIND_NAMED_LAYOUT("GaptoothBreach_layout");
	if (IS_LAYOUTREF_VALID(&uVar1))
	{
		uVar2 = FIND_VOLUME_IN_LAYOUT(&uVar1, "gapv_noCritters");
		if (IS_VOLUME_VALID(&uVar2))
		{
			uVar3 = CREATE_POPULATION_SET(1);
			Function_3(&uVar2, &uVar3, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("GAP_Pop: Cannot find henv_region to create population volumes");
		}
		uVar2 = FIND_VOLUME_IN_LAYOUT(&uVar1, "gapv_birdVol");
		if (IS_VOLUME_VALID(&uVar2))
		{
			Function_3(&uVar2, &(Global_46972[7]), 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("GAP_Pop: Cannot find gapv_birdVol to create bird volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_6(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_5("Finished loading Gaptooth Breach population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xE4A / 3658
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xE5B / 3675
{
	int iVar0;
	
	if (!Function_4(1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= Global_46972)
	{
		if (!IS_POPSET_VALID(&(Global_46972[iVar0])))
		{
		}
		else if (IS_POPULATION_SET_REQUIRED_RESIDENT(&(Global_46972[iVar0])))
		{
			if (!IS_POPULATION_SET_READY(&(Global_46972[iVar0]), 0, 4294967295))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xEB3 / 3763
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_DENSITY(&uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &iParam3);
	if (&bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(&uVar0, !&bParam5);
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (1 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", true);
	}
	return &uVar0;
}

bool Function_4(int iParam0) //Position: 0xF43 / 3907
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0xF5F / 3935
{
	if (!Function_4(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 2;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = (Global_21610.f_128 + fParam1);
	}
	return;
}

bool Function_6(var uParam0, int iParam1) //Position: 0xF9F / 3999
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0xFBC / 4028
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xFCD / 4045
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam1);
	iVar1 = GET_ACTORENUM_SPECIES(bParam1);
	if (iVar0 <= 32)
	{
		if (!Global_47080[iVar0] && !&bParam5)
		{
			return 4294967295;
		}
	}
	if (iVar1 <= 36)
	{
		if (!Global_47006[iVar1])
		{
			return 4294967295;
		}
	}
	if (!IS_POPSET_VALID(&uParam0))
	{
		uParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x104B / 4171
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 32)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

var Function_10(int iParam0) //Position: 0x10B7 / 4279
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 1)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

var Function_11(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x1123 / 4387
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(&bParam0, bParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&bParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

void Function_12(int iParam0) //Position: 0x116A / 4458
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_13(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1177 / 4471
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam1);
	iVar1 = GET_ACTORENUM_SPECIES(bParam1);
	if (IS_FACTION_VALID(iVar0))
	{
		if (iVar0 <= 32)
		{
			if (!Global_47080[iVar0] && !&bParam4)
			{
				return 4294967295;
			}
		}
	}
	if (iVar1 < 4294967295 && iVar1 > 36)
	{
		if (!Global_47006[iVar1])
		{
			return 4294967295;
		}
	}
	if (!IS_POPSET_VALID(&bParam0))
	{
		bParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION(&bParam0, bParam1, fParam2);
	if (&bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&bParam0) - 1);
}

var Function_14(bool bParam0, int iParam1) //Position: 0x11F9 / 4601
{
	return CREATE_NAMED_POPULATION_SET(&bParam0, &iParam1);
}

void Function_15(char* cParam0) //Position: 0x1208 / 4616
{
	if (!Function_4(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

