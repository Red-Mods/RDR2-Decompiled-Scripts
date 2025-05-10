//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 4
//Natives Count : 40
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_30750[15]), 976, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_13("ped_wilderness", Global_30840);
	Function_11(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 175, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 174, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 55, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 178, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 153, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 173, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 199, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 56, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 46, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 50, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 202, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 54, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 53, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 33, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 34, 10.0f, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_30750[1]), 64, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 74, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 48, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 73, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 78, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 49, 10.0f, 0, 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_13("animal_hunt", 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_30750[11]), 1061, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1062, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1063, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1088, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1089, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1090, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_30750[5]), 1050, 1.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1050, 1.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1051, 1.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 1.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 1.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1128, 10.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1057, 9.0f, 14, 0, 0);
	Function_8(&(Global_30750[5]), 1050, 1.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1050, 1.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1051, 1.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 1.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 1.0f, 33, 0, 0);
	Function_14(&(Global_30750[8]));
	Global_30750[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_30750[8]), 1008, 6.0f, 0, 0);
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1145, 3.0f, 14, 0, 0);
	Function_14(&(Global_30750[14]));
	Global_30750[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_7(Global_30750[5], 1.5E-05f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_13("ped_law", 1);
	Function_11(&(Global_30750[2]), 436, 8.0f, 0, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_30750[3]), 496, 1.0f, 0, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_11(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_11(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_11(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_11(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_11(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar0 = Function_13("nnight_pop", 0);
	Function_8(&uVar0, 1137, 4.0f, 33, 0, 0);
	while (!Function_6(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar1 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		bVar2 = FIND_VOLUME_IN_LAYOUT(bVar1, "fomv_region");
		if (IS_VOLUME_VALID(bVar2))
		{
			Function_3(bVar2, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_3(bVar2, uVar0, 0.0001f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find fomv_region to create population volumes");
		}
		bVar2 = FIND_VOLUME_IN_LAYOUT(bVar1, "fomv_spawnanimal_set");
		if (IS_VOLUME_VALID(bVar2))
		{
			Function_3(bVar2, Global_30750[5], 1E-05f, 0, 0, 1);
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
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_6(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_13171 = Global_29155[ScriptParam_010].f_20;
	Function_5("Finished loading Fort Mercer population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xBFB / 3067
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xC0A / 3082
{
	int iVar0;
	
	if (!Function_4(1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= Global_30750)
	{
		if (!IS_POPSET_VALID(Global_30750[iVar0]))
		{
		}
		else if (IS_POPULATION_SET_REQUIRED_RESIDENT(Global_30750[iVar0]))
		{
			if (!IS_POPULATION_SET_READY(Global_30750[iVar0], false, 4294967295))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xC5F / 3167
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
	SET_ZONE_POPULATION_DENSITY(bVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(bVar0, iParam3);
	if (bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(bVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(bVar0, !bParam5);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (1 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return bVar0;
}

bool Function_4(int iParam0) //Position: 0xCDF / 3295
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, float fParam1) //Position: 0xCFB / 3323
{
	if (!Function_4(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, bParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

bool Function_6(var uParam0, int iParam1) //Position: 0xD39 / 3385
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0xD55 / 3413
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xD65 / 3429
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam1);
	iVar1 = GET_ACTORENUM_SPECIES(bParam1);
	if (iVar0 <= 32)
	{
		if (!Global_30804[iVar0] && !bParam5)
		{
			return 4294967295;
		}
	}
	if (iVar1 <= 36)
	{
		if (!Global_30767[iVar1])
		{
			return 4294967295;
		}
	}
	if (!IS_POPSET_VALID(*uParam0))
	{
		*uParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0xDDD / 3549
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

var Function_10(int iParam0) //Position: 0xE49 / 3657
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

var Function_11(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xEB5 / 3765
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam1);
	iVar1 = GET_ACTORENUM_SPECIES(bParam1);
	if (IS_FACTION_VALID(iVar0))
	{
		if (iVar0 <= 32)
		{
			if (!Global_30804[iVar0] && !bParam4)
			{
				return 4294967295;
			}
		}
	}
	if (iVar1 < 4294967295 && iVar1 > 36)
	{
		if (!Global_30767[iVar1])
		{
			return 4294967295;
		}
	}
	if (!IS_POPSET_VALID(*uParam0))
	{
		*uParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION(*uParam0, bParam1, fParam2);
	if (bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0xF31 / 3889
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(uParam0, bParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(*uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_13(bool bParam0, int iParam1) //Position: 0xF76 / 3958
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_14(var uParam0) //Position: 0xF83 / 3971
{
	DESTROY_POPULATION_SET(*uParam0);
	return;
}

