//Decompiled with MagicRDR v1.0
//Function Count : 18
//Statics Count : 4
//Natives Count : 44
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
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Rat", 4);
	Function_17("Loading Rathskeller Fork population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_16("ped_generic", 0);
	Function_15(&bVar0, 33, 4.0f, 0, 0);
	Function_15(&bVar0, 34, 4.0f, 0, 0);
	Function_15(&bVar0, 76, 4.0f, 0, 0);
	Function_15(&bVar0, 79, 4.0f, 0, 0);
	Function_15(&bVar0, 136, 4.0f, 0, 0);
	Function_15(&bVar0, 204, 4.0f, 0, 0);
	Function_15(&bVar0, 155, 4.0f, 0, 0);
	Function_15(&bVar0, 142, 4.0f, 0, 0);
	Function_15(&bVar0, 49, 4.0f, 0, 0);
	Function_15(&bVar0, 56, 4.0f, 0, 0);
	Function_15(&bVar0, 74, 4.0f, 0, 0);
	Function_15(&bVar0, 178, 4.0f, 0, 0);
	Function_15(&bVar0, 48, 4.0f, 0, 0);
	Function_15(&bVar0, 203, 4.0f, 0, 0);
	Function_15(&bVar0, 65, 4.0f, 0, 0);
	Function_15(&bVar0, 71, 4.0f, 0, 0);
	Function_15(&bVar0, 72, 4.0f, 0, 0);
	Function_15(&bVar0, 153, 4.0f, 0, 0);
	Function_15(&bVar0, 154, 4.0f, 0, 0);
	Function_15(&bVar0, 486, 4.0f, 0, 0);
	Function_15(&bVar0, 487, 4.0f, 0, 0);
	Function_15(&bVar0, 489, 4.0f, 0, 0);
	Function_15(&bVar0, 490, 4.0f, 0, 0);
	Function_15(&bVar0, 491, 4.0f, 0, 0);
	Function_15(&bVar0, 493, 4.0f, 0, 0);
	Function_15(&bVar0, 1204, 5.0f, 0, 0);
	Function_15(&bVar0, 1205, 5.0f, 0, 0);
	Function_15(&bVar0, 1206, 5.0f, 0, 0);
	Function_15(&bVar0, 1211, 5.0f, 0, 0);
	Function_15(&bVar0, 1212, 5.0f, 0, 0);
	Function_15(&bVar0, 1213, 5.0f, 0, 0);
	Function_15(&bVar0, 1214, 5.0f, 0, 0);
	Function_15(&bVar0, 1215, 5.0f, 0, 0);
	Function_15(&bVar0, 1219, 5.0f, 0, 0);
	Function_15(&bVar0, 1220, 5.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(&bVar0);
	SET_TOWN_DENSITY(5.0f);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_16("ped_wilderness", Global_47149);
	Function_15(&(Global_46972[0]), 38, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 39, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 53, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 54, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 85, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 153, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 166, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 167, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 170, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 171, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 172, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 173, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 174, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 175, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 232, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 288, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 51, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 289, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 35, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 37, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 135, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 136, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 154, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 155, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 156, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 159, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 162, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 85, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 117, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 194, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 196, 4.0f, 0, 0);
	Function_15(&(Global_46972[0]), 311, 4.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_16("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 49, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 56, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 64, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 73, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 74, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 78, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 195, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 202, 2.0f, 0, 0);
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_16("animal_horse", 4);
	Function_13(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_16("animal_horse_unsaddled", 0);
	Function_15(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_16("animal_wilderness", 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_16("animal_predator", 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_16("animal_hunt", 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_16("animal_herd", 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_16("birds_trees", 1);
	Function_15(&(Global_46972[14]), 1247, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar1 = Function_16("ngiant_bat", 0);
	Function_10(&bVar1, 1247, 10.0f, 49, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_16("animal_bird", 1);
	bVar2 = Function_16("zombie_dogs", 0);
	Function_15(&bVar2, 1240, 10.0f, 0, 0);
	Function_9(&(Global_46972[5]), 2E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_16("ped_law", 1);
	Function_15(&(Global_46972[2]), 1222, 5.0f, 0, 0);
	Function_15(&(Global_46972[2]), 1223, 5.0f, 0, 0);
	Function_15(&(Global_46972[2]), 1224, 5.0f, 0, 0);
	Function_15(&(Global_46972[2]), 1225, 5.0f, 0, 0);
	Function_15(&(Global_46972[2]), 1226, 5.0f, 0, 0);
	Function_15(&(Global_46972[2]), 1227, 5.0f, 0, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_16("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 1214, 5.0f, 0, 0);
	Function_15(&(Global_46972[3]), 1215, 5.0f, 0, 0);
	Function_15(&(Global_46972[3]), 1216, 5.0f, 0, 0);
	Function_15(&(Global_46972[3]), 1217, 5.0f, 0, 0);
	Function_15(&(Global_46972[3]), 1218, 5.0f, 0, 0);
	Function_15(&(Global_46972[3]), 1219, 5.0f, 0, 0);
	Function_15(&(Global_46972[3]), 1220, 5.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_16("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 1204, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1205, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1206, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1207, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1208, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1209, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1210, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1211, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1212, 5.0f, 0, 0);
	Function_15(&(Global_46972[4]), 1213, 5.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_16("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	uVar3 = CREATE_POPULATION_SET(1);
	while (!Function_8(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_7("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_6(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar4 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (IS_LAYOUTREF_VALID(&uVar4))
	{
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_saloon");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_5(&uVar5, &bVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_saloon");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_5(&uVar5, &bVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_chickens_set");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_5(&uVar5, &bVar0, 10, 30, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_dogs_set");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_5(&uVar5, &bVar0, 10, 40, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_dogs_set");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_4(&uVar5, &bVar2, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_region");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_5(&uVar5, &bVar1, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find ratv_region to create population volumes");
		}
		uVar5 = FIND_VOLUME_IN_LAYOUT(&uVar4, "ratv_region");
		if (IS_VOLUME_VALID(&uVar5))
		{
			Function_3(&uVar5, &uVar3, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find ratv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("rat_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_8(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_6(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_7("Finished loading Rathskeller Fork population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xF4D / 3917
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xF5E / 3934
{
	int iVar0;
	
	if (!Function_6(1))
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

var Function_3(var uParam0, var uParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xFB6 / 4022
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_DENSITY(&uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &uParam3);
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

var Function_4(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1046 / 4166
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, bParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &uParam3);
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

var Function_5(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x10D6 / 4310
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(&uVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &iParam4);
	if (&bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(&uVar0, !&bParam6);
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

bool Function_6(int iParam0) //Position: 0x1168 / 4456
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(char* cParam0) //Position: 0x1184 / 4484
{
	if (!Function_6(128))
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

bool Function_8(var uParam0, int iParam1) //Position: 0x11C4 / 4548
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x11E1 / 4577
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_10(var uParam0, bool bParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x11F2 / 4594
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, uParam2, Function_12(uParam3), Function_11(uParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_11(int iParam0) //Position: 0x1270 / 4720
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_12(int iParam0) //Position: 0x12DC / 4828
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 1)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_13(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x1348 / 4936
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(&bParam0, bParam1, fParam2, bParam3, 0);
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

void Function_14(int iParam0) //Position: 0x138F / 5007
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x139C / 5020
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

var Function_16(var uParam0, int iParam1) //Position: 0x141E / 5150
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_17(char* cParam0) //Position: 0x142D / 5165
{
	if (!Function_6(128))
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

