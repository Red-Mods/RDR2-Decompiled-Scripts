//Decompiled with MagicRDR v1.0
//Function Count : 18
//Statics Count : 4
//Natives Count : 44
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Rat", 4);
	Function_17("Loading Rathskeller Fork population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_16("ped_generic", 0);
	Function_15(&uVar0, 33, 4.0f, 0, 0);
	Function_15(&uVar0, 34, 4.0f, 0, 0);
	Function_15(&uVar0, 76, 4.0f, 0, 0);
	Function_15(&uVar0, 79, 4.0f, 0, 0);
	Function_15(&uVar0, 136, 4.0f, 0, 0);
	Function_15(&uVar0, 204, 4.0f, 0, 0);
	Function_15(&uVar0, 155, 4.0f, 0, 0);
	Function_15(&uVar0, 142, 4.0f, 0, 0);
	Function_15(&uVar0, 49, 4.0f, 0, 0);
	Function_15(&uVar0, 56, 4.0f, 0, 0);
	Function_15(&uVar0, 74, 4.0f, 0, 0);
	Function_15(&uVar0, 178, 4.0f, 0, 0);
	Function_15(&uVar0, 48, 4.0f, 0, 0);
	Function_15(&uVar0, 203, 4.0f, 0, 0);
	Function_15(&uVar0, 65, 4.0f, 0, 0);
	Function_15(&uVar0, 71, 4.0f, 0, 0);
	Function_15(&uVar0, 72, 4.0f, 0, 0);
	Function_15(&uVar0, 153, 4.0f, 0, 0);
	Function_15(&uVar0, 154, 4.0f, 0, 0);
	Function_15(&uVar0, 486, 4.0f, 0, 0);
	Function_15(&uVar0, 487, 4.0f, 0, 0);
	Function_15(&uVar0, 489, 4.0f, 0, 0);
	Function_15(&uVar0, 490, 4.0f, 0, 0);
	Function_15(&uVar0, 491, 4.0f, 0, 0);
	Function_15(&uVar0, 493, 4.0f, 0, 0);
	Function_15(&uVar0, 1204, 5.0f, 0, 0);
	Function_15(&uVar0, 1205, 5.0f, 0, 0);
	Function_15(&uVar0, 1206, 5.0f, 0, 0);
	Function_15(&uVar0, 1211, 5.0f, 0, 0);
	Function_15(&uVar0, 1212, 5.0f, 0, 0);
	Function_15(&uVar0, 1213, 5.0f, 0, 0);
	Function_15(&uVar0, 1214, 5.0f, 0, 0);
	Function_15(&uVar0, 1215, 5.0f, 0, 0);
	Function_15(&uVar0, 1219, 5.0f, 0, 0);
	Function_15(&uVar0, 1220, 5.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(uVar0);
	SET_TOWN_DENSITY(5.0f);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_16("ped_wilderness", Global_30840);
	Function_15(&(Global_30750[0]), 38, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 39, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 53, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 54, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 153, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 166, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 167, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 170, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 171, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 172, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 173, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 174, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 175, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 232, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 288, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 51, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 289, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 35, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 37, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 135, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 136, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 154, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 155, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 156, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 159, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 162, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 117, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 194, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 196, 4.0f, 0, 0);
	Function_15(&(Global_30750[0]), 311, 4.0f, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_16("ped_traveller", 3);
	Function_15(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 56, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 195, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_16("animal_horse", 4);
	Function_13(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_16("animal_horse_unsaddled", 0);
	Function_15(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_16("animal_wilderness", 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_16("animal_predator", 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_16("animal_hunt", 0);
	Function_14(&(Global_30750[8]));
	Global_30750[8] = Function_16("animal_herd", 0);
	Function_14(&(Global_30750[14]));
	Global_30750[14] = Function_16("birds_trees", 1);
	Function_15(&(Global_30750[14]), 1247, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar1 = Function_16("ngiant_bat", 0);
	Function_10(&uVar1, 1247, 10.0f, 49, 0, 0);
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_16("animal_bird", 1);
	uVar2 = Function_16("zombie_dogs", 0);
	Function_15(&uVar2, 1240, 10.0f, 0, 0);
	Function_9(Global_30750[5], 2E-05f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_16("ped_law", 1);
	Function_15(&(Global_30750[2]), 1222, 5.0f, 0, 0);
	Function_15(&(Global_30750[2]), 1223, 5.0f, 0, 0);
	Function_15(&(Global_30750[2]), 1224, 5.0f, 0, 0);
	Function_15(&(Global_30750[2]), 1225, 5.0f, 0, 0);
	Function_15(&(Global_30750[2]), 1226, 5.0f, 0, 0);
	Function_15(&(Global_30750[2]), 1227, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_16("ped_bad_guys_local", 1);
	Function_15(&(Global_30750[3]), 1214, 5.0f, 0, 0);
	Function_15(&(Global_30750[3]), 1215, 5.0f, 0, 0);
	Function_15(&(Global_30750[3]), 1216, 5.0f, 0, 0);
	Function_15(&(Global_30750[3]), 1217, 5.0f, 0, 0);
	Function_15(&(Global_30750[3]), 1218, 5.0f, 0, 0);
	Function_15(&(Global_30750[3]), 1219, 5.0f, 0, 0);
	Function_15(&(Global_30750[3]), 1220, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_16("ped_bad_guys_generic", 1);
	Function_15(&(Global_30750[4]), 1204, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1205, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1206, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1207, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1208, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1209, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1210, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1211, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1212, 5.0f, 0, 0);
	Function_15(&(Global_30750[4]), 1213, 5.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_16("ped_vehicle", 1);
	Function_15(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	uVar3 = CREATE_POPULATION_SET(1);
	while (!Function_8(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_7("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_6(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar4 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_saloon");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_5(bVar5, uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_saloon");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_5(bVar5, uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_chickens_set");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_5(bVar5, uVar0, 10, 30, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_dogs_set");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_5(bVar5, uVar0, 10, 40, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_dogs_set");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_4(bVar5, uVar2, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_region");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_5(bVar5, uVar1, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find ratv_region to create population volumes");
		}
		bVar5 = FIND_VOLUME_IN_LAYOUT(bVar4, "ratv_region");
		if (IS_VOLUME_VALID(bVar5))
		{
			Function_3(bVar5, uVar3, 0.0f, 0, 0, 1);
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
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_8(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_6(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_7("Finished loading Rathskeller Fork population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xF13 / 3859
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xF22 / 3874
{
	int iVar0;
	
	if (!Function_6(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xF77 / 3959
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

var Function_4(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xFF7 / 4087
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
	SET_ZONE_POPULATION_COUNT(bVar0, bParam2);
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

var Function_5(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1077 / 4215
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(bVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(bVar0, iParam4);
	if (bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(bVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(bVar0, !bParam6);
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

bool Function_6(int iParam0) //Position: 0x10F9 / 4345
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0, float fParam1) //Position: 0x1115 / 4373
{
	if (!Function_6(128))
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

bool Function_8(var uParam0, int iParam1) //Position: 0x1153 / 4435
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x116F / 4463
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_10(var uParam0, bool bParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x117F / 4479
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, uParam2, Function_12(uParam3), Function_11(uParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_11(int iParam0) //Position: 0x11F7 / 4599
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

var Function_12(int iParam0) //Position: 0x1263 / 4707
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

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x12CF / 4815
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_14(int iParam0) //Position: 0x1314 / 4884
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_15(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1320 / 4896
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

var Function_16(bool bParam0, int iParam1) //Position: 0x139C / 5020
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_17(bool bParam0, var uParam1) //Position: 0x13A9 / 5033
{
	if (!Function_6(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

