//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 52
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_20("Loading Pacific Union Railroad Camp population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_19(&(Global_30750[6]));
	Global_30750[6] = Function_18("animal_horse", 4);
	Function_17(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_19(&(Global_30750[15]));
	Global_30750[15] = Function_18("animal_horse_unsaddled", 0);
	Function_16(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_19(&(Global_30750[0]));
	Global_30750[0] = Function_18("ped_wilderness", Global_30840);
	Function_16(&(Global_30750[0]), 17, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 23, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 28, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 29, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 30, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 32, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 45, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 96, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 108, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 109, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 110, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 113, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 168, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 169, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 41, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 42, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 218, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 153, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 48, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 43, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]));
	Global_30750[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 89, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 130, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 223, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 225, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 226, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 227, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 229, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 230, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 18, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 58, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 75, 1.0f, 0, 0);
	bVar0 = Function_18("ped_genworkers", 0);
	Function_13(&bVar0, 155, 1.0f, 14, 0, 0);
	Function_13(&bVar0, 158, 1.0f, 14, 0, 0);
	Function_13(&bVar0, 36, 1.0f, 14, 0, 0);
	Function_13(&bVar0, 35, 1.0f, 14, 0, 0);
	Function_13(&bVar0, 152, 1.0f, 14, 0, 0);
	Function_13(&bVar0, 154, 1.0f, 14, 0, 0);
	uVar1 = Function_18("nped_train", 0);
	Function_13(&uVar1, 24, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 47, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 16, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 203, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 204, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 207, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 205, 8.0f, 14, 0, 0);
	Function_13(&uVar1, 206, 8.0f, 14, 0, 0);
	if (!Function_12() && Global_25974[4])
	{
		uVar2 = Function_18("ped_armwrestling", 0);
		Function_16(&uVar2, 27, 1.0f, 0, 0);
		Function_16(&uVar2, 325, 1.0f, 0, 0);
		Function_16(&uVar2, 418, 1.0f, 0, 0);
		Function_16(&uVar2, 86, 1.0f, 0, 0);
		Function_16(&uVar2, 132, 1.0f, 0, 0);
		Function_16(&uVar2, 138, 1.0f, 0, 0);
		Function_16(&uVar2, 162, 1.0f, 0, 0);
		Function_16(&uVar2, 291, 1.0f, 0, 0);
	}
	Function_19(&(Global_30750[5]));
	Global_30750[5] = Function_18("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 1058, 2.0f, 14, 1, 0);
	Function_13(&(Global_30750[5]), 1082, 12.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1128, 12.0f, 14, 1, 0);
	Function_16(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_16(&(Global_30750[5]), 1079, 4.0f, 0, 0);
	Function_16(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_19(&(Global_30750[11]));
	Global_30750[11] = Function_18("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1114, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1114, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1115, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1069, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1070, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1071, 2.0f, 0, 0);
	Function_19(&(Global_30750[10]));
	Global_30750[10] = Function_18("animal_hunt", 0);
	Function_19(&(Global_30750[8]));
	Global_30750[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1068, 1.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1058, 5.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	uVar3 = Function_18("chickens", 0);
	Function_13(&uVar3, 1017, 100.0f, 15, 0, 0);
	Function_13(&uVar3, 1016, 100.0f, 15, 0, 0);
	bVar4 = Function_18("Owls", 0);
	Function_13(&bVar4, 1137, 8.0f, 33, 0, 0);
	bVar5 = Function_18("snakes", 0);
	Function_13(&bVar5, 1058, 8.0f, 14, 0, 0);
	uVar6 = Function_18("vultures", 0);
	Function_13(&uVar6, 1128, 10.0f, 14, 0, 0);
	uVar7 = Function_18("Horses", 0);
	Function_16(&uVar7, 976, 2.0f, 0, 0);
	Function_16(&uVar7, 980, 1.0f, 0, 0);
	Function_16(&uVar7, 981, 1,5f, 0, 0);
	uVar8 = Function_18("Crows", 0);
	Function_13(&uVar8, 1131, 10.0f, 14, 0, 0);
	uVar9 = Function_18("Rabbits", 0);
	Function_13(&uVar9, 1078, 6,5f, 49, 0, 0);
	bVar10 = Function_18("Dogs", 0);
	Function_16(&bVar10, 1032, 8.0f, 0, 0);
	Function_16(&bVar10, 1030, 8.0f, 0, 0);
	Function_16(&bVar10, 1031, 8.0f, 0, 0);
	Function_19(&(Global_30750[7]));
	Global_30750[7] = Function_18("animal_bird", 1);
	Function_13(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1145, 3.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1137, 3.0f, 33, 0, 0);
	Function_19(&(Global_30750[14]));
	Global_30750[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_11(Global_30750[5], 4E-05f);
	Function_19(&(Global_30750[2]));
	Global_30750[2] = Function_18("ped_law", 1);
	Function_16(&(Global_30750[2]), 424, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 425, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 426, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 427, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 429, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_19(&(Global_30750[3]));
	Global_30750[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 398, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 397, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 399, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 400, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 401, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 402, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 405, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 404, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 403, 4.0f, 1, 0);
	Function_19(&(Global_30750[4]));
	Global_30750[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 474, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 475, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 476, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 470, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 471, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 472, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 467, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 468, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 469, 1.0f, 0, 0);
	Function_19(&(Global_30750[9]));
	Global_30750[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1186, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1187, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar11 = CREATE_POPULATION_SET(1);
	PRINTNL();
	while (!Function_10(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_9("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_8(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar12 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (IS_LAYOUTREF_VALID(bVar12))
	{
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_birds_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, uVar8, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_birds_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_birds_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, bVar4, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_birds_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_snakes_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, bVar5, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_snakes_set to create population volumes");
		}
		if (!Function_12() && Global_25974[4])
		{
			bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_armwrestling");
			bVar14 = Function_6(bVar13, uVar2, 3, 1, 1, 0);
			if (IS_ZONE_VALID(bVar14))
			{
				Function_4(bVar14);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar14, 50.0f);
			}
			else
			{
				LOG_ERROR("upr_pop: Cannot find uprv_armwrestling to create population volumes");
			}
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_dogs_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_6(bVar13, bVar10, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_dogs_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_train_station_platform");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, uVar1, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find uprv_train_station_platform to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_genworker_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, bVar0, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find uprv_gen_workers to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "uprv_region");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, bVar11, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find uprv_region to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_10(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_9("Finished loading Pacific Union Railroad Camp population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1274 / 4724
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1283 / 4739
{
	int iVar0;
	
	if (!Function_8(1))
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

var Function_3(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x12D8 / 4824
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

void Function_4(bool bParam0) //Position: 0x135A / 4954
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_arm_wrestling");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "arm_wrestling_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(bool bParam0) //Position: 0x1409 / 5129
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_6(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1428 / 5160
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

var Function_7(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x14A8 / 5288
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

bool Function_8(int iParam0) //Position: 0x1528 / 5416
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0x1544 / 5444
{
	if (!Function_8(128))
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

bool Function_10(var uParam0, int iParam1) //Position: 0x1582 / 5506
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x159E / 5534
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_12() //Position: 0x15AE / 5550
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x15B7 / 5559
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_15(iParam3), Function_14(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_14(int iParam0) //Position: 0x1619 / 5657
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

var Function_15(int iParam0) //Position: 0x1685 / 5765
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

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x16F1 / 5873
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1766 / 5990
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_18(bool bParam0, int iParam1) //Position: 0x17AB / 6059
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_19(int iParam0) //Position: 0x17B8 / 6072
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_20(bool bParam0, var uParam1) //Position: 0x17C4 / 6084
{
	if (!Function_8(128))
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

