//Decompiled with MagicRDR v1.0
//Function Count : 18
//Statics Count : 4
//Natives Count : 42
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
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_17("Loading Ridgewood Farm population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_16("Business", 0);
	Function_13(&uVar0, 87, 10.0f, 8, 0, 0);
	Function_13(&uVar0, 230, 10.0f, 8, 0, 0);
	Function_13(&uVar0, 16, 10.0f, 8, 0, 0);
	Function_13(&uVar0, 135, 10.0f, 8, 0, 0);
	uVar1 = Function_16("owls", 0);
	Function_13(&uVar1, 1137, 10.0f, 49, 0, 0);
	Function_13(&uVar1, 1138, 10.0f, 49, 0, 0);
	Function_13(&uVar1, 1139, 10.0f, 49, 0, 0);
	uVar2 = Function_16("dogs", 0);
	Function_13(&uVar2, 1035, 10.0f, 15, 0, 0);
	uVar3 = Function_16("racoons", 0);
	Function_13(&uVar3, 1082, 10.0f, 49, 0, 0);
	Function_13(&uVar3, 1083, 10.0f, 49, 0, 0);
	Function_13(&uVar3, 1082, 10.0f, 49, 0, 0);
	uVar4 = Function_16("chickens", 0);
	Function_13(&uVar4, 1015, 100.0f, 15, 0, 0);
	Function_13(&uVar4, 1016, 100.0f, 15, 0, 0);
	Function_12(&(Global_30750[6]));
	Global_30750[6] = Function_16("animal_horse", 4);
	Function_11(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_12(&(Global_30750[15]));
	Global_30750[15] = Function_16("animal_horse_unsaddled", 0);
	Function_10(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_12(&(Global_30750[0]));
	Global_30750[0] = Function_16("ped_wilderness", Global_30840);
	Function_10(&(Global_30750[0]), 34, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 46, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 49, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 53, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 54, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 44, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 47, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 40, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 41, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 43, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 136, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 142, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 153, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 99, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 112, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 113, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 178, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 202, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 203, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]));
	Global_30750[1] = Function_16("ped_traveller", 3);
	Function_10(&(Global_30750[1]), 48, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 87, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 199, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 204, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 230, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 312, 2.0f, 0, 0);
	Function_12(&(Global_30750[5]));
	Global_30750[5] = Function_16("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 976, 9.0f, 30, 1, 0);
	Function_13(&(Global_30750[5]), 976, 8.0f, 33, 1, 0);
	Function_13(&(Global_30750[5]), 1128, 8.0f, 30, 1, 0);
	Function_13(&(Global_30750[5]), 1057, 2.0f, 14, 1, 0);
	Function_13(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1051, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1051, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_10(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_10(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_10(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_13(&(Global_30750[5]), 1082, 5.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1084, 5.0f, 33, 0, 0);
	Function_12(&(Global_30750[10]));
	Global_30750[10] = Function_16("animal_hunt", 0);
	Function_12(&(Global_30750[11]));
	Global_30750[11] = Function_16("animal_predator", 1);
	Function_10(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1089, 8.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1090, 7.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1061, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1062, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1063, 5.0f, 0, 0);
	Function_12(&(Global_30750[8]));
	Global_30750[8] = Function_16("animal_herd", 1);
	Function_10(&(Global_30750[8]), 1008, 6.0f, 1, 0);
	Function_10(&(Global_30750[8]), 1009, 6.0f, 1, 0);
	Function_10(&(Global_30750[8]), 1010, 6.0f, 1, 0);
	Function_10(&(Global_30750[8]), 1011, 6.0f, 1, 0);
	Function_12(&(Global_30750[7]));
	Global_30750[7] = Function_16("animal_bird", 1);
	Function_13(&(Global_30750[7]), 1131, 2.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]), 1135, 1.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 1.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 1.0f, 15, 0, 0);
	Function_12(&(Global_30750[14]));
	Global_30750[14] = Function_16("birds_trees", 1);
	Function_10(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_9(Global_30750[5], 5.1E-05f);
	Function_12(&(Global_30750[2]));
	Global_30750[2] = Function_16("ped_law", 1);
	Function_10(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_10(&(Global_30750[2]), 441, 8.0f, 1, 0);
	Function_10(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_12(&(Global_30750[3]));
	Global_30750[3] = Function_16("ped_bad_guys_local", 1);
	Function_10(&(Global_30750[3]), 482, 1.0f, 1, 0);
	Function_10(&(Global_30750[3]), 480, 4.0f, 1, 0);
	Function_10(&(Global_30750[3]), 483, 4.0f, 1, 0);
	Function_10(&(Global_30750[3]), 484, 4.0f, 1, 0);
	Function_10(&(Global_30750[3]), 485, 4.0f, 1, 0);
	Function_10(&(Global_30750[3]), 479, 4.0f, 1, 0);
	Function_12(&(Global_30750[4]));
	Global_30750[4] = Function_16("ped_bad_guys_generic", 1);
	Function_10(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_10(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_10(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_10(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_10(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_10(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_10(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_10(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_10(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_12(&(Global_30750[9]));
	Global_30750[9] = Function_16("ped_vehicle", 1);
	Function_10(&(Global_30750[9]), 1183, 2.0f, 1, 0);
	Function_10(&(Global_30750[9]), 1188, 2.0f, 1, 0);
	Function_10(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar5 = Function_16("animal_cow_day", 0);
	Function_13(&uVar5, 1008, 1.0f, 14, 0, 0);
	Function_13(&uVar5, 1009, 1.0f, 14, 0, 0);
	Function_13(&uVar5, 1010, 1.0f, 14, 0, 0);
	Function_13(&uVar5, 1011, 1.0f, 14, 0, 0);
	uVar6 = Function_16("animal_cow_night", 0);
	Function_13(&uVar6, 1008, 1.0f, 49, 0, 0);
	Function_13(&uVar6, 1009, 1.0f, 49, 0, 0);
	Function_13(&uVar6, 1010, 1.0f, 49, 0, 0);
	Function_13(&uVar6, 1011, 1.0f, 49, 0, 0);
	uVar7 = CREATE_POPULATION_SET(1);
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
	bVar8 = FIND_NAMED_LAYOUT("RidgewoodFarm_layout");
	if (IS_LAYOUTREF_VALID(bVar8))
	{
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_HorsePop_Set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_5(bVar9, Global_30750[15], 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_HorsePop_Set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_Cows_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_5(bVar9, uVar5, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_Cows_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_barn01");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_5(bVar9, uVar6, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_barn01 to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_chickens_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_5(bVar9, uVar4, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find rwfv_chickens_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_Business_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_5(bVar9, uVar0, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_Business_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_dogs_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_4(bVar9, uVar2, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_dogs_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_raccoons_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_3(bVar9, uVar3, 0.0005f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_raccoons_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_owls_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_3(bVar9, uVar1, 2E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find rwfv_owls_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_birds_set");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_3(bVar9, Global_30750[7], 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find rwfv_birds_set to create population volumes");
		}
		bVar9 = FIND_VOLUME_IN_LAYOUT(bVar8, "rwfv_region");
		if (IS_VOLUME_VALID(bVar9))
		{
			Function_3(bVar9, uVar7, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find rwfv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("rwf_pop: Cannot find one of the volumes to create population volumes");
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
	Function_7("Finished loading Ridgewood Farm population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1298 / 4760
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x12A7 / 4775
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12FC / 4860
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

var Function_4(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x137C / 4988
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

var Function_5(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x13FC / 5116
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

bool Function_6(int iParam0) //Position: 0x147E / 5246
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0, float fParam1) //Position: 0x149A / 5274
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

bool Function_8(var uParam0, int iParam1) //Position: 0x14D8 / 5336
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x14F4 / 5364
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_10(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1504 / 5380
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

var Function_11(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1580 / 5504
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_10(uParam0, bParam1, fParam2, iParam3, 0);
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

void Function_12(bool bParam0) //Position: 0x15C5 / 5573
{
	DESTROY_POPULATION_SET(*bParam0);
	return;
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x15D1 / 5585
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_15(iParam3), Function_14(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_14(int iParam0) //Position: 0x1649 / 5705
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

var Function_15(int iParam0) //Position: 0x16B5 / 5813
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

var Function_16(bool bParam0, int iParam1) //Position: 0x1721 / 5921
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_17(bool bParam0, var uParam1) //Position: 0x172E / 5934
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

