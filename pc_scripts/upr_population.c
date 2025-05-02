//Decompiled with MagicRDR v1.0
//Function Count : 20
//Statics Count : 4
//Natives Count : 51
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_19("Loading Pacific Union Railroad Camp population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_18(&(Global_46972[6]));
	Global_46972[6] = Function_17("animal_horse", 4);
	Function_16(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_18(&(Global_46972[15]));
	Global_46972[15] = Function_17("animal_horse_unsaddled", 0);
	Function_15(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_18(&(Global_46972[0]));
	Global_46972[0] = Function_17("ped_wilderness", Global_47149);
	Function_15(&(Global_46972[0]), 17, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 23, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 28, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 29, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 30, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 32, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 45, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 96, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 108, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 109, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 110, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 113, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 168, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 169, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 41, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 42, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 218, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 153, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 48, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 43, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]));
	Global_46972[1] = Function_17("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 89, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 130, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 223, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 225, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 226, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 227, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 229, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 230, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 18, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 58, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 75, 1.0f, 0, 0);
	uVar0 = Function_17("ped_genworkers", 0);
	Function_12(&uVar0, 155, 1.0f, 14, 0, 0);
	Function_12(&uVar0, 158, 1.0f, 14, 0, 0);
	Function_12(&uVar0, 36, 1.0f, 14, 0, 0);
	Function_12(&uVar0, 35, 1.0f, 14, 0, 0);
	Function_12(&uVar0, 152, 1.0f, 14, 0, 0);
	Function_12(&uVar0, 154, 1.0f, 14, 0, 0);
	uVar1 = Function_17("nped_train", 0);
	Function_12(&uVar1, 24, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 47, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 16, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 203, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 204, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 207, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 205, 8.0f, 14, 0, 0);
	Function_12(&uVar1, 206, 8.0f, 14, 0, 0);
	if (1 & Global_39266[4])
	{
		bVar2 = Function_17("ped_armwrestling", 0);
		Function_15(&bVar2, 27, 1.0f, 0, 0);
		Function_15(&bVar2, 325, 1.0f, 0, 0);
		Function_15(&bVar2, 418, 1.0f, 0, 0);
		Function_15(&bVar2, 86, 1.0f, 0, 0);
		Function_15(&bVar2, 132, 1.0f, 0, 0);
		Function_15(&bVar2, 138, 1.0f, 0, 0);
		Function_15(&bVar2, 162, 1.0f, 0, 0);
		Function_15(&bVar2, 291, 1.0f, 0, 0);
	}
	Function_18(&(Global_46972[5]));
	Global_46972[5] = Function_17("animal_wilderness", 1);
	Function_12(&(Global_46972[5]), 1058, 2.0f, 14, 1, 0);
	Function_12(&(Global_46972[5]), 1082, 12.0f, 33, 0, 0);
	Function_12(&(Global_46972[5]), 1128, 12.0f, 14, 1, 0);
	Function_15(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_15(&(Global_46972[5]), 1079, 4.0f, 0, 0);
	Function_15(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_18(&(Global_46972[11]));
	Global_46972[11] = Function_17("animal_predator", 1);
	Function_15(&(Global_46972[11]), 1114, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1114, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1115, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1069, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1070, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1071, 2.0f, 0, 0);
	Function_18(&(Global_46972[10]));
	Global_46972[10] = Function_17("animal_hunt", 0);
	Function_18(&(Global_46972[8]));
	Global_46972[8] = Function_17("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1068, 1.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1058, 5.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	uVar3 = Function_17("chickens", 0);
	Function_12(&uVar3, 1017, 100.0f, 15, 0, 0);
	Function_12(&uVar3, 1016, 100.0f, 15, 0, 0);
	uVar4 = Function_17("Owls", 0);
	Function_12(&uVar4, 1137, 8.0f, 33, 0, 0);
	uVar5 = Function_17("snakes", 0);
	Function_12(&uVar5, 1058, 8.0f, 14, 0, 0);
	uVar6 = Function_17("vultures", 0);
	Function_12(&uVar6, 1128, 10.0f, 14, 0, 0);
	bVar7 = Function_17("Horses", 0);
	Function_15(&bVar7, 976, 2.0f, 0, 0);
	Function_15(&bVar7, 980, 1.0f, 0, 0);
	Function_15(&bVar7, 981, 1,5f, 0, 0);
	uVar8 = Function_17("Crows", 0);
	Function_12(&uVar8, 1131, 10.0f, 14, 0, 0);
	uVar9 = Function_17("Rabbits", 0);
	Function_12(&uVar9, 1078, 6,5f, 49, 0, 0);
	bVar10 = Function_17("Dogs", 0);
	Function_15(&bVar10, 1032, 8.0f, 0, 0);
	Function_15(&bVar10, 1030, 8.0f, 0, 0);
	Function_15(&bVar10, 1031, 8.0f, 0, 0);
	Function_18(&(Global_46972[7]));
	Global_46972[7] = Function_17("animal_bird", 1);
	Function_12(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1137, 3.0f, 33, 0, 0);
	Function_18(&(Global_46972[14]));
	Global_46972[14] = Function_17("birds_trees", 1);
	Function_15(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_11(&(Global_46972[5]), 4E-05f);
	Function_18(&(Global_46972[2]));
	Global_46972[2] = Function_17("ped_law", 1);
	Function_15(&(Global_46972[2]), 424, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 425, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 426, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 427, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 429, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 436, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 442, 8.0f, 1, 0);
	Function_18(&(Global_46972[3]));
	Global_46972[3] = Function_17("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 398, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 397, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 399, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 400, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 401, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 402, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 405, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 404, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 403, 4.0f, 1, 0);
	Function_18(&(Global_46972[4]));
	Global_46972[4] = Function_17("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 474, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 475, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 476, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 470, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 471, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 472, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 467, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 468, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 469, 1.0f, 0, 0);
	Function_18(&(Global_46972[9]));
	Global_46972[9] = Function_17("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1186, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1187, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar11 = CREATE_POPULATION_SET(1);
	PRINTNL();
	while (!Function_10(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_9("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_8(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar12 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (IS_LAYOUTREF_VALID(&uVar12))
	{
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_birds_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &uVar8, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_birds_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_birds_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &uVar4, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_birds_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_snakes_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &uVar5, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_snakes_set to create population volumes");
		}
		if (1 & Global_39266[4])
		{
			uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_armwrestling");
			uVar14 = Function_6(&uVar13, &bVar2, 3, 1, 1, 0);
			if (IS_ZONE_VALID(&uVar14))
			{
				Function_4(&uVar14);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar14, 50.0f);
			}
			else
			{
				LOG_ERROR("upr_pop: Cannot find uprv_armwrestling to create population volumes");
			}
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_dogs_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_6(&uVar13, &bVar10, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("upr_pop: Cannot find uprv_dogs_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_train_station_platform");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_3(&uVar13, &uVar1, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find uprv_train_station_platform to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_genworker_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_3(&uVar13, &uVar0, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("ben_pop: Cannot find uprv_gen_workers to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "uprv_region");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &uVar11, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find uprv_region to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_10(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_9("Finished loading Pacific Union Railroad Camp population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x12B7 / 4791
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x12C8 / 4808
{
	int iVar0;
	
	if (!Function_8(1))
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

var Function_3(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1320 / 4896
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
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

void Function_4(int iParam0) //Position: 0x13B2 / 5042
{
	Function_5(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_arm_wrestling");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "arm_wrestling_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(bool bParam0) //Position: 0x1468 / 5224
{
	SET_ZONE_PRIORITY(&bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&bParam0, 0, 0);
	return;
}

var Function_6(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x148B / 5259
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, bParam2);
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

var Function_7(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x151B / 5403
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

bool Function_8(int iParam0) //Position: 0x15AB / 5547
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0) //Position: 0x15C7 / 5575
{
	if (!Function_8(128))
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

bool Function_10(var uParam0, int iParam1) //Position: 0x1607 / 5639
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x1624 / 5668
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1635 / 5685
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_14(iParam3), Function_13(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_13(int iParam0) //Position: 0x16B3 / 5811
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

var Function_14(int iParam0) //Position: 0x171F / 5919
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

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x178B / 6027
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x180D / 6157
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_17(var uParam0, int iParam1) //Position: 0x1854 / 6228
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_18(int iParam0) //Position: 0x1863 / 6243
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_19(char* cParam0) //Position: 0x1870 / 6256
{
	if (!Function_8(128))
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

