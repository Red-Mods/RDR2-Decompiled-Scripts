//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 46
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
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_21("Loading Beecher's Hope population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_20(&(Global_46972[6]));
	Global_46972[6] = Function_19("animal_horse", 4);
	Function_18(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_18(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_20(&(Global_46972[15]));
	Global_46972[15] = Function_19("animal_horse_unsaddled", 0);
	Function_17(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_17(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_20(&(Global_46972[0]));
	Global_46972[0] = Function_19("ped_wilderness", Global_47149);
	Function_17(&(Global_46972[0]), 17, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 23, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 28, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 29, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 30, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 32, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 36, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 45, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 96, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 108, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 109, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 110, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 113, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 152, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 168, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 169, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 176, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 177, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 218, 3.0f, 0, 0);
	Function_17(&(Global_46972[0]), 16, 3.0f, 0, 0);
	Function_20(&(Global_46972[1]));
	Global_46972[1] = Function_19("ped_traveller", 3);
	Function_17(&(Global_46972[1]), 18, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 58, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 75, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 95, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 115, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 131, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 206, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 224, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 228, 8.0f, 0, 0);
	Function_17(&(Global_46972[1]), 205, 8.0f, 0, 0);
	Function_20(&(Global_46972[5]));
	Global_46972[5] = Function_19("animal_wilderness", 1);
	Function_17(&(Global_46972[5]), 1078, 10.0f, 1, 0);
	Function_14(&(Global_46972[5]), 1128, 5.0f, 15, 1, 0);
	Function_20(&(Global_46972[14]));
	Global_46972[14] = Function_19("birds_trees", 1);
	Function_17(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_17(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_17(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_17(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_17(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_17(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_20(&(Global_46972[11]));
	Function_20(&(Global_46972[10]));
	Global_46972[10] = Function_19("animal_hunt", 0);
	Function_20(&(Global_46972[8]));
	Global_46972[8] = Function_19("animal_herd", 1);
	bVar0 = Function_19("wildHorses", 1);
	Function_17(&bVar0, 977, 8.0f, 0, 0);
	Function_17(&bVar0, 984, 8.0f, 0, 0);
	Function_17(&bVar0, 985, 8.0f, 0, 0);
	Function_17(&bVar0, 986, 8.0f, 0, 0);
	Function_17(&bVar0, 988, 8.0f, 0, 0);
	Function_17(&bVar0, 990, 8.0f, 0, 0);
	uVar1 = Function_19("chickens", 0);
	Function_14(&uVar1, 1015, 100.0f, 15, 0, 0);
	Function_14(&uVar1, 1016, 100.0f, 15, 0, 0);
	bVar2 = Function_19("pigs", 0);
	Function_17(&bVar2, 1020, 8.0f, 0, 0);
	Function_17(&bVar2, 1021, 8.0f, 0, 0);
	uVar3 = Function_19("Owls", 0);
	Function_14(&uVar3, 1137, 8.0f, 32, 0, 0);
	uVar4 = Function_19("raccoons", 0);
	Function_14(&uVar4, 1082, 8.0f, 32, 0, 0);
	Function_14(&uVar4, 1082, 8.0f, 32, 0, 0);
	Function_14(&uVar4, 1082, 8.0f, 32, 0, 0);
	uVar5 = Function_19("snakes", 0);
	Function_14(&uVar5, 1058, 8.0f, 14, 0, 0);
	bVar6 = Function_19("cows", 0);
	Function_17(&bVar6, 1008, 8.0f, 0, 0);
	Function_17(&bVar6, 1009, 8.0f, 0, 0);
	Function_17(&bVar6, 1010, 8.0f, 0, 0);
	Function_17(&bVar6, 1011, 8.0f, 0, 0);
	bVar7 = Function_19("Horses", 0);
	Function_17(&bVar7, 977, 1.0f, 0, 0);
	Function_17(&bVar7, 976, 2.0f, 0, 0);
	Function_17(&bVar7, 981, 1,5f, 0, 0);
	uVar8 = Function_19("Crows", 0);
	Function_14(&uVar8, 1131, 10.0f, 15, 0, 0);
	uVar9 = Function_19("Rabbits", 0);
	Function_14(&uVar9, 1078, 6,5f, 49, 0, 0);
	Function_13(&(Global_46972[5]), 1E-07f);
	Function_20(&(Global_46972[7]));
	Global_46972[7] = Function_19("animal_bird", 1);
	Function_14(&(Global_46972[7]), 1131, 2.0f, 15, 1, 0);
	Function_14(&(Global_46972[7]), 1134, 2.0f, 15, 1, 0);
	Function_14(&(Global_46972[7]), 1135, 2.0f, 15, 1, 0);
	Function_14(&(Global_46972[7]), 1136, 2.0f, 15, 1, 0);
	Function_20(&(Global_46972[2]));
	Global_46972[2] = Function_19("ped_law", 1);
	Function_17(&(Global_46972[2]), 424, 8.0f, 1, 0);
	Function_17(&(Global_46972[2]), 425, 8.0f, 1, 0);
	Function_17(&(Global_46972[2]), 426, 8.0f, 1, 0);
	Function_17(&(Global_46972[2]), 427, 8.0f, 1, 0);
	Function_17(&(Global_46972[2]), 429, 8.0f, 1, 0);
	Function_17(&(Global_46972[2]), 450, 8.0f, 1, 0);
	Function_17(&(Global_46972[2]), 454, 8.0f, 1, 0);
	Function_20(&(Global_46972[3]));
	Global_46972[3] = Function_19("ped_bad_guys_local", 1);
	Function_17(&(Global_46972[3]), 398, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 397, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 399, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 400, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 401, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 402, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 405, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 404, 4.0f, 1, 0);
	Function_17(&(Global_46972[3]), 403, 4.0f, 1, 0);
	Function_20(&(Global_46972[4]));
	Global_46972[4] = Function_19("ped_bad_guys_generic", 1);
	Function_17(&(Global_46972[4]), 474, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 475, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 476, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 470, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 471, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 472, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 467, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 468, 1.0f, 1, 0);
	Function_17(&(Global_46972[4]), 469, 1.0f, 1, 0);
	Function_20(&(Global_46972[9]));
	Global_46972[9] = Function_19("ped_vehicle", 1);
	Function_17(&(Global_46972[9]), 1186, 2.0f, 1, 0);
	Function_17(&(Global_46972[9]), 1187, 2.0f, 1, 0);
	Function_17(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_17(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_17(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_17(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar10 = CREATE_POPULATION_SET(1);
	PRINTNL();
	while (!Function_12(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_11("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_10(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar11 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (IS_LAYOUTREF_VALID(&uVar11))
	{
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_horses_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			uVar13 = Function_9(&uVar12, &bVar0, 2E-05f, 1, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar13, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar13, 3);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar13, 5);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_horses_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_birds_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_9(&uVar12, &uVar8, 2E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_birds_set to create population volumes");
		}
		if (Function_5(57, 0))
		{
			uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_crows");
			if (IS_VOLUME_VALID(&uVar12))
			{
				Function_4(&uVar12, &uVar8, 3, 5, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_crows to create population volumes");
			}
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_rabbits_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_9(&uVar12, &uVar9, 2E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_rabbits_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_raccoons_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_9(&uVar12, &uVar4, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_raccoons_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_snakes_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_9(&uVar12, &uVar5, 2,5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_snakes_set to create population volumes");
		}
		if (Function_5(49, 0))
		{
			uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_chickens_set");
			if (IS_VOLUME_VALID(&uVar12))
			{
				Function_3(&uVar12, &uVar1, 5, 0, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_chickens_set to create population volumes");
			}
			uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "nbehv_pigs");
			if (IS_VOLUME_VALID(&uVar12))
			{
				Function_3(&uVar12, &bVar2, 3, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_pigs to create population volumes");
			}
		}
		if (Function_5(49, 0))
		{
			uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_cows_set");
			if (IS_VOLUME_VALID(&uVar12))
			{
				Function_3(&uVar12, &bVar6, 6, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_cows_set to create population volumes");
			}
		}
		if (Function_5(56, 0))
		{
			uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_cows_set");
			if (IS_VOLUME_VALID(&uVar12))
			{
				Function_3(&uVar12, &(Global_46972[15]), 4, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_cows_set to create population volumes");
			}
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "behv_region");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_9(&uVar12, &uVar10, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_region to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_12(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_10(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_11("Finished loading Beecher's Hope population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x11E6 / 4582
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x11F7 / 4599
{
	int iVar0;
	
	if (!Function_10(1))
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

var Function_3(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x124F / 4687
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, iParam2);
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

var Function_4(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, bool bParam6) //Position: 0x12DF / 4831
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(&uVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &uParam4);
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

bool Function_5(int iParam0, bool bParam1) //Position: 0x1371 / 4977
{
	int iVar0;
	
	iVar0 = Function_7(iParam0);
	if (!Function_6(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_6(int iParam0) //Position: 0x13AF / 5039
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_7(int iParam0) //Position: 0x13C6 / 5062
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_8(bool bParam0) //Position: 0x13E0 / 5088
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_9(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x13F6 / 5110
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

bool Function_10(int iParam0) //Position: 0x1486 / 5254
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(char* cParam0) //Position: 0x14A2 / 5282
{
	if (!Function_10(128))
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

bool Function_12(var uParam0, int iParam1) //Position: 0x14E2 / 5346
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_13(var uParam0, bool bParam1) //Position: 0x14FF / 5375
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_14(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1510 / 5392
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_16(iParam3), Function_15(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_15(int iParam0) //Position: 0x158E / 5518
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

var Function_16(int iParam0) //Position: 0x15FA / 5626
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

var Function_17(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1666 / 5734
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION(&bParam0, iParam1, fParam2);
	if (&bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&bParam0) - 1);
}

var Function_18(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x16E8 / 5864
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_17(&uParam0, iParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_19(var uParam0, int iParam1) //Position: 0x172F / 5935
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_20(int iParam0) //Position: 0x173E / 5950
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_21(char* cParam0) //Position: 0x174B / 5963
{
	if (!Function_10(128))
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

