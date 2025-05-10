//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 46
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_21("Loading Beecher's Hope population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_20(&(Global_30750[6]));
	Global_30750[6] = Function_19("animal_horse", 4);
	Function_18(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_20(&(Global_30750[15]));
	Global_30750[15] = Function_19("animal_horse_unsaddled", 0);
	Function_17(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_20(&(Global_30750[0]));
	Global_30750[0] = Function_19("ped_wilderness", Global_30840);
	Function_17(&(Global_30750[0]), 17, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 23, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 28, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 29, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 30, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 32, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 36, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 45, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 96, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 108, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 109, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 110, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 113, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 152, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 168, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 169, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 176, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 177, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 218, 3.0f, 0, 0);
	Function_17(&(Global_30750[0]), 16, 3.0f, 0, 0);
	Function_20(&(Global_30750[1]));
	Global_30750[1] = Function_19("ped_traveller", 3);
	Function_17(&(Global_30750[1]), 18, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 58, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 75, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 95, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 115, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 131, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 206, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 224, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 228, 8.0f, 0, 0);
	Function_17(&(Global_30750[1]), 205, 8.0f, 0, 0);
	Function_20(&(Global_30750[5]));
	Global_30750[5] = Function_19("animal_wilderness", 1);
	Function_17(&(Global_30750[5]), 1078, 10.0f, 1, 0);
	Function_14(&(Global_30750[5]), 1128, 5.0f, 15, 1, 0);
	Function_20(&(Global_30750[14]));
	Global_30750[14] = Function_19("birds_trees", 1);
	Function_17(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_20(&(Global_30750[11]));
	Function_20(&(Global_30750[10]));
	Global_30750[10] = Function_19("animal_hunt", 0);
	Function_20(&(Global_30750[8]));
	Global_30750[8] = Function_19("animal_herd", 1);
	uVar0 = Function_19("wildHorses", 1);
	Function_17(&uVar0, 977, 8.0f, 0, 0);
	Function_17(&uVar0, 984, 8.0f, 0, 0);
	Function_17(&uVar0, 985, 8.0f, 0, 0);
	Function_17(&uVar0, 986, 8.0f, 0, 0);
	Function_17(&uVar0, 988, 8.0f, 0, 0);
	Function_17(&uVar0, 990, 8.0f, 0, 0);
	uVar1 = Function_19("chickens", 0);
	Function_14(&uVar1, 1015, 100.0f, 15, 0, 0);
	Function_14(&uVar1, 1016, 100.0f, 15, 0, 0);
	bVar2 = Function_19("pigs", 0);
	Function_17(&bVar2, 1020, 8.0f, 0, 0);
	Function_17(&bVar2, 1021, 8.0f, 0, 0);
	uVar3 = Function_19("Owls", 0);
	Function_14(&uVar3, 1137, 8.0f, 32, 0, 0);
	bVar4 = Function_19("raccoons", 0);
	Function_14(&bVar4, 1082, 8.0f, 32, 0, 0);
	Function_14(&bVar4, 1082, 8.0f, 32, 0, 0);
	Function_14(&bVar4, 1082, 8.0f, 32, 0, 0);
	bVar5 = Function_19("snakes", 0);
	Function_14(&bVar5, 1058, 8.0f, 14, 0, 0);
	bVar6 = Function_19("cows", 0);
	Function_17(&bVar6, 1008, 8.0f, 0, 0);
	Function_17(&bVar6, 1009, 8.0f, 0, 0);
	Function_17(&bVar6, 1010, 8.0f, 0, 0);
	Function_17(&bVar6, 1011, 8.0f, 0, 0);
	uVar7 = Function_19("Horses", 0);
	Function_17(&uVar7, 977, 1.0f, 0, 0);
	Function_17(&uVar7, 976, 2.0f, 0, 0);
	Function_17(&uVar7, 981, 1,5f, 0, 0);
	bVar8 = Function_19("Crows", 0);
	Function_14(&bVar8, 1131, 10.0f, 15, 0, 0);
	bVar9 = Function_19("Rabbits", 0);
	Function_14(&bVar9, 1078, 6,5f, 49, 0, 0);
	Function_13(Global_30750[5], 1E-07f);
	Function_20(&(Global_30750[7]));
	Global_30750[7] = Function_19("animal_bird", 1);
	Function_14(&(Global_30750[7]), 1131, 2.0f, 15, 1, 0);
	Function_14(&(Global_30750[7]), 1134, 2.0f, 15, 1, 0);
	Function_14(&(Global_30750[7]), 1135, 2.0f, 15, 1, 0);
	Function_14(&(Global_30750[7]), 1136, 2.0f, 15, 1, 0);
	Function_20(&(Global_30750[2]));
	Global_30750[2] = Function_19("ped_law", 1);
	Function_17(&(Global_30750[2]), 424, 8.0f, 1, 0);
	Function_17(&(Global_30750[2]), 425, 8.0f, 1, 0);
	Function_17(&(Global_30750[2]), 426, 8.0f, 1, 0);
	Function_17(&(Global_30750[2]), 427, 8.0f, 1, 0);
	Function_17(&(Global_30750[2]), 429, 8.0f, 1, 0);
	Function_17(&(Global_30750[2]), 450, 8.0f, 1, 0);
	Function_17(&(Global_30750[2]), 454, 8.0f, 1, 0);
	Function_20(&(Global_30750[3]));
	Global_30750[3] = Function_19("ped_bad_guys_local", 1);
	Function_17(&(Global_30750[3]), 398, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 397, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 399, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 400, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 401, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 402, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 405, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 404, 4.0f, 1, 0);
	Function_17(&(Global_30750[3]), 403, 4.0f, 1, 0);
	Function_20(&(Global_30750[4]));
	Global_30750[4] = Function_19("ped_bad_guys_generic", 1);
	Function_17(&(Global_30750[4]), 474, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 475, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 476, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 470, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 471, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 472, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 467, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 468, 1.0f, 1, 0);
	Function_17(&(Global_30750[4]), 469, 1.0f, 1, 0);
	Function_20(&(Global_30750[9]));
	Global_30750[9] = Function_19("ped_vehicle", 1);
	Function_17(&(Global_30750[9]), 1186, 2.0f, 1, 0);
	Function_17(&(Global_30750[9]), 1187, 2.0f, 1, 0);
	Function_17(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar10 = CREATE_POPULATION_SET(1);
	PRINTNL();
	while (!Function_12(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_11("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_10(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar11 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (IS_LAYOUTREF_VALID(bVar11))
	{
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_horses_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			uVar13 = Function_9(bVar12, uVar0, 2E-05f, 1, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar13, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar13, 3);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar13, 5);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_horses_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_birds_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_9(bVar12, bVar8, 2E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_birds_set to create population volumes");
		}
		if (Function_5(57, 0))
		{
			bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_crows");
			if (IS_VOLUME_VALID(bVar12))
			{
				Function_4(bVar12, bVar8, 3, 5, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_crows to create population volumes");
			}
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_rabbits_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_9(bVar12, bVar9, 2E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_rabbits_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_raccoons_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_9(bVar12, bVar4, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_raccoons_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_snakes_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_9(bVar12, bVar5, 2,5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_snakes_set to create population volumes");
		}
		if (Function_5(49, 0))
		{
			bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_chickens_set");
			if (IS_VOLUME_VALID(bVar12))
			{
				Function_3(bVar12, uVar1, 5, 0, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_chickens_set to create population volumes");
			}
			bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "nbehv_pigs");
			if (IS_VOLUME_VALID(bVar12))
			{
				Function_3(bVar12, bVar2, 3, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_pigs to create population volumes");
			}
		}
		if (Function_5(49, 0))
		{
			bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_cows_set");
			if (IS_VOLUME_VALID(bVar12))
			{
				Function_3(bVar12, bVar6, 6, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_cows_set to create population volumes");
			}
		}
		if (Function_5(56, 0))
		{
			bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_cows_set");
			if (IS_VOLUME_VALID(bVar12))
			{
				Function_3(bVar12, Global_30750[15], 4, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("beh_pop: Cannot find behv_cows_set to create population volumes");
			}
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "behv_region");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_9(bVar12, bVar10, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("beh_pop: Cannot find behv_region to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_12(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_10(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_11("Finished loading Beecher's Hope population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x118F / 4495
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x119E / 4510
{
	int iVar0;
	
	if (!Function_10(1))
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

var Function_3(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x11F3 / 4595
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

var Function_4(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1273 / 4723
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

bool Function_5(int iParam0, bool bParam1) //Position: 0x12F5 / 4853
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_6(int iParam0) //Position: 0x1332 / 4914
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_7(int iParam0) //Position: 0x1349 / 4937
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_8(bool bParam0) //Position: 0x1363 / 4963
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_9(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1379 / 4985
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

bool Function_10(int iParam0) //Position: 0x13F9 / 5113
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(bool bParam0, float fParam1) //Position: 0x1415 / 5141
{
	if (!Function_10(128))
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

bool Function_12(var uParam0, int iParam1) //Position: 0x1453 / 5203
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_13(var uParam0, bool bParam1) //Position: 0x146F / 5231
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_14(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x147F / 5247
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_16(iParam3), Function_15(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_15(int iParam0) //Position: 0x14E1 / 5345
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

var Function_16(int iParam0) //Position: 0x154D / 5453
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

var Function_17(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x15B9 / 5561
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

var Function_18(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x162E / 5678
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_17(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_19(int iParam0, int iParam1) //Position: 0x1673 / 5747
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_20(int iParam0) //Position: 0x1680 / 5760
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_21(bool bParam0, var uParam1) //Position: 0x168C / 5772
{
	if (!Function_10(128))
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

