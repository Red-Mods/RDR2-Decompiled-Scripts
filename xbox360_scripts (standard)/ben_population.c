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
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_17("Loading Benedict's Point population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_16(&(Global_30750[6]));
	Global_30750[6] = Function_15("animal_horse", 4);
	Function_14(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_16(&(Global_30750[15]));
	Global_30750[15] = Function_15("animal_horse_unsaddled", 0);
	Function_13(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_16(&(Global_30750[0]));
	Global_30750[0] = Function_15("ped_wilderness", Global_30840);
	Function_13(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 64, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 74, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 174, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 178, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 153, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 173, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 137, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 56, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 142, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 50, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 49, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 54, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 53, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 34, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 46, 2.0f, 0, 0);
	Function_16(&(Global_30750[10]));
	Global_30750[10] = Function_15("animal_hunt", 0);
	Function_16(&(Global_30750[11]));
	Global_30750[11] = Function_15("animal_predator", 1);
	Function_13(&(Global_30750[11]), 1088, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1089, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1090, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1061, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1062, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1063, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]));
	Global_30750[1] = Function_15("ped_traveller", 3);
	Function_13(&(Global_30750[1]), 117, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 114, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 199, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 73, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 311, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 78, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 202, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 79, 2.0f, 1, 0);
	Function_13(&(Global_30750[1]), 87, 2.0f, 1, 0);
	Function_16(&(Global_30750[5]));
	Global_30750[5] = Function_15("animal_wilderness", 1);
	Function_10(&(Global_30750[5]), 1058, 2.0f, 14, 0, 0);
	Function_10(&(Global_30750[5]), 1078, 5.0f, 14, 0, 0);
	Function_10(&(Global_30750[5]), 1128, 2.0f, 14, 0, 0);
	Function_10(&(Global_30750[5]), 1082, 6.0f, 33, 0, 0);
	Function_10(&(Global_30750[5]), 1084, 6.0f, 33, 0, 0);
	Function_16(&(Global_30750[8]));
	Global_30750[8] = Function_15("animal_herd", 1);
	Function_13(&(Global_30750[8]), 1060, 1.0f, 1, 0);
	Function_13(&(Global_30750[8]), 1058, 5.0f, 1, 0);
	Function_13(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_13(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	Function_16(&(Global_30750[14]));
	Global_30750[14] = Function_15("birds_trees", 1);
	Function_13(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar0 = Function_15("trainppl", 0);
	Function_10(&uVar0, 203, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 5, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 16, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 230, 7.0f, 14, 0, 0);
	Function_10(&uVar0, 312, 8.0f, 14, 0, 0);
	Function_10(&uVar0, 117, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 155, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 154, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 48, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 47, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 57, 10.0f, 14, 0, 0);
	Function_10(&uVar0, 77, 10.0f, 14, 0, 0);
	bVar1 = Function_15("ndinnerppl", 0);
	Function_10(&bVar1, 16, 8.0f, 20, 0, 0);
	Function_10(&bVar1, 5, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 141, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 312, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 203, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 47, 7.0f, 20, 0, 0);
	Function_10(&bVar1, 77, 8.0f, 20, 0, 0);
	Function_10(&bVar1, 48, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 155, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 154, 10.0f, 20, 0, 0);
	Function_10(&bVar1, 230, 10.0f, 20, 0, 0);
	bVar2 = Function_15("crows", 0);
	Function_10(&bVar2, 1132, 10.0f, 14, 0, 0);
	bVar3 = Function_15("snakes", 0);
	Function_10(&bVar3, 1058, 8.0f, 14, 0, 0);
	uVar4 = Function_15("vultures", 0);
	Function_10(&uVar4, 1128, 8.0f, 14, 0, 0);
	bVar5 = Function_15("owls", 0);
	Function_10(&bVar5, 1137, 10.0f, 49, 0, 0);
	uVar6 = Function_15("dogs", 0);
	Function_13(&uVar6, 1035, 10.0f, 0, 0);
	Function_13(&uVar6, 1033, 10.0f, 0, 0);
	Function_13(&uVar6, 1038, 10.0f, 0, 0);
	bVar7 = Function_15("racoons", 0);
	Function_10(&bVar7, 1082, 10.0f, 49, 0, 0);
	Function_10(&bVar7, 1082, 10.0f, 49, 0, 0);
	Function_10(&bVar7, 1082, 10.0f, 49, 0, 0);
	bVar8 = Function_15("rabbits", 0);
	Function_10(&bVar8, 1078, 10.0f, 49, 0, 0);
	Function_10(&bVar8, 1078, 10.0f, 49, 0, 0);
	Function_10(&bVar8, 1078, 10.0f, 49, 0, 0);
	Function_16(&(Global_30750[7]));
	Global_30750[7] = Function_15("animal_bird", 1);
	Function_10(&(Global_30750[7]), 1131, 1.0f, 14, 0, 0);
	Function_9(Global_30750[5], 4E-05f);
	Function_16(&(Global_30750[2]));
	Global_30750[2] = Function_15("ped_law", 1);
	Function_13(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_13(&(Global_30750[2]), 441, 8.0f, 1, 0);
	Function_13(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_16(&(Global_30750[3]));
	Global_30750[3] = Function_15("ped_bad_guys_local", 1);
	Function_13(&(Global_30750[3]), 487, 1.0f, 1, 0);
	Function_13(&(Global_30750[3]), 486, 4.0f, 1, 0);
	Function_13(&(Global_30750[3]), 488, 4.0f, 1, 0);
	Function_13(&(Global_30750[3]), 489, 4.0f, 1, 0);
	Function_13(&(Global_30750[3]), 490, 4.0f, 1, 0);
	Function_13(&(Global_30750[3]), 491, 4.0f, 1, 0);
	Function_16(&(Global_30750[4]));
	Global_30750[4] = Function_15("ped_bad_guys_generic", 1);
	Function_13(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_13(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_13(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_13(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_13(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_13(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_16(&(Global_30750[9]));
	Global_30750[9] = Function_15("ped_vehicle", 1);
	Function_13(&(Global_30750[9]), 1183, 2.0f, 1, 0);
	Function_13(&(Global_30750[9]), 1188, 2.0f, 1, 0);
	Function_13(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar9 = CREATE_POPULATION_SET(1);
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
	bVar10 = FIND_NAMED_LAYOUT("BenedictPoint_layout");
	if (IS_LAYOUTREF_VALID(bVar10))
	{
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_vultures_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, uVar4, 1E-06f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_vultures_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_crows_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, bVar2, 2E-06f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_crows_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_dogs_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_4(bVar11, uVar6, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_vultures_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_raccoons_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, bVar7, 0,00025f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_raccoons_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_owls_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, bVar5, 5E-06f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_owls_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_rabbits_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, bVar8, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_rabbits_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_snakes_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, bVar3, 2E-05f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_snakes_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_train_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_3(bVar11, uVar0, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_Train_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_dinner");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_3(bVar11, bVar1, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find benv_dinner_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "benv_region");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_5(bVar11, bVar9, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find benv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("ben_pop: Cannot find one of the volumes to create population volumes");
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
	Function_7("Finished loading Benedict's Point population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1220 / 4640
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x122F / 4655
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

var Function_3(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1284 / 4740
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

var Function_4(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1306 / 4870
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

var Function_5(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1386 / 4998
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

bool Function_6(int iParam0) //Position: 0x1406 / 5126
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0, float fParam1) //Position: 0x1422 / 5154
{
	if (!Function_6(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x1460 / 5216
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x147C / 5244
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_10(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x148C / 5260
{
	if (!Global_30804[GET_ACTOR_ENUM_FACTION(bParam1)] && !bParam5)
	{
		return 4294967295;
	}
	if (!Global_30767[GET_ACTORENUM_SPECIES(bParam1)])
	{
		return 4294967295;
	}
	if (!IS_POPSET_VALID(*uParam0))
	{
		*uParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_12(iParam3), Function_11(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_11(int iParam0) //Position: 0x14EE / 5358
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

var Function_12(int iParam0) //Position: 0x155A / 5466
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

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x15C6 / 5574
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam1);
	iVar1 = GET_ACTORENUM_SPECIES(bParam1);
	if (IS_FACTION_VALID(iVar0))
	{
		if (!Global_30804[iVar0] && !bParam4)
		{
			return 4294967295;
		}
	}
	if (iVar1 < 4294967295 && iVar1 >= 36)
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

var Function_14(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x163B / 5691
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_15(int iParam0, int iParam1) //Position: 0x1680 / 5760
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_16(int iParam0) //Position: 0x168D / 5773
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_17(bool bParam0, var uParam1) //Position: 0x1699 / 5785
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

