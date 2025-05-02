//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 4
//Natives Count : 40
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iLocal_0 = &iScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_13("ped_wilderness", Global_47149);
	Function_11(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 175, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 174, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 178, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 153, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 173, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 199, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 56, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 50, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 202, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 54, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 53, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 33, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 34, 10.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_46972[1]), 64, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 74, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 48, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 73, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 78, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 49, 10.0f, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_13("animal_hunt", 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_46972[11]), 1061, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1062, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1063, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1088, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1089, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1090, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_46972[5]), 1050, 1.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 1.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1051, 1.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 1.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 1.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1128, 10.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1057, 9.0f, 14, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 1.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 1.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1051, 1.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 1.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 1.0f, 33, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_46972[8]), 1008, 6.0f, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_7(&(Global_46972[5]), 1,5E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_13("ped_law", 1);
	Function_11(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_46972[3]), 496, 1.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_11(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_11(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar0 = Function_13("nnight_pop", 0);
	Function_8(&uVar0, 1137, 4.0f, 33, 0, 0);
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
	uVar1 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (IS_LAYOUTREF_VALID(&uVar1))
	{
		uVar2 = FIND_VOLUME_IN_LAYOUT(&uVar1, "fomv_region");
		if (IS_VOLUME_VALID(&uVar2))
		{
			Function_3(&uVar2, &(Global_46972[7]), 2E-05f, 0, 0, 1);
			Function_3(&uVar2, &uVar0, 0,0001f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find fomv_region to create population volumes");
		}
		uVar2 = FIND_VOLUME_IN_LAYOUT(&uVar1, "fomv_spawnanimal_set");
		if (IS_VOLUME_VALID(&uVar2))
		{
			Function_3(&uVar2, &(Global_46972[5]), 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find fomv_spawnanimal_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("hen_pop: Cannot find the layout to create population volumes");
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
	Global_21682 = &Global_44085[iScriptParam_09] + 32;
	Function_5("Finished loading Fort Mercer population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xC1A / 3098
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xC2B / 3115
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

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xC83 / 3203
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

bool Function_4(int iParam0) //Position: 0xD13 / 3347
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0xD2F / 3375
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

bool Function_6(var uParam0, int iParam1) //Position: 0xD6F / 3439
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0xD8C / 3468
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xD9D / 3485
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

var Function_9(int iParam0) //Position: 0xE1B / 3611
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

var Function_10(int iParam0) //Position: 0xE87 / 3719
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

var Function_11(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xEF3 / 3827
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

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0xF75 / 3957
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(&uParam0, bParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_13(var uParam0, int iParam1) //Position: 0xFBC / 4028
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_14(var uParam0) //Position: 0xFCB / 4043
{
	DESTROY_POPULATION_SET(&uParam0);
	return;
}

