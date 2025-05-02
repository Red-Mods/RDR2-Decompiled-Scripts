//Decompiled with MagicRDR v1.0
//Function Count : 20
//Statics Count : 4
//Natives Count : 49
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
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_19("Loading Agave Viejo population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_18("crows", 0);
	Function_15(&uVar0, 1132, 10.0f, 14, 0, 0);
	Function_15(&uVar0, 1133, 10.0f, 14, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_18("animal_hunt", 0);
	uVar1 = Function_18("snakes", 0);
	Function_15(&uVar1, 1059, 8.0f, 14, 0, 0);
	bVar2 = Function_18("dogs", 0);
	Function_13(&bVar2, 1035, 10.0f, 0, 0);
	Function_13(&bVar2, 1033, 10.0f, 0, 0);
	bVar3 = Function_18("chickens", 0);
	Function_15(&bVar3, 1015, 100.0f, 15, 0, 0);
	Function_15(&bVar3, 1017, 100.0f, 15, 0, 0);
	bVar4 = Function_18("goats", 0);
	Function_13(&bVar4, 1026, 10.0f, 0, 0);
	Function_13(&bVar4, 1027, 10.0f, 0, 0);
	Function_13(&bVar4, 1028, 10.0f, 0, 0);
	uVar5 = Function_18("rabbits", 0);
	Function_15(&uVar5, 1078, 10.0f, 49, 0, 0);
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_18("animal_horse", 4);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 981, 100.0f, 0, 3);
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
	Global_46972[15] = Function_18("animal_horse_unsaddled", 0);
	Function_13(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_13(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_18("ped_wilderness", Global_47149);
	Function_13(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 323, 2.0f, 0, 0);
	if (1 & Global_39266[4])
	{
		bVar6 = Function_18("ped_armwrestling", 0);
		Function_13(&bVar6, 258, 1.0f, 0, 0);
		Function_13(&bVar6, 311, 1.0f, 0, 0);
		Function_13(&bVar6, 136, 1.0f, 0, 0);
		Function_13(&bVar6, 278, 1.0f, 0, 0);
		Function_13(&bVar6, 162, 1.0f, 0, 0);
	}
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_18("animal_predator", 1);
	Function_13(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_18("ped_traveller", 3);
	Function_13(&(Global_46972[1]), 63, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 62, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 253, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 263, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 265, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 275, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 302, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 303, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 311, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 318, 2.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_18("animal_wilderness", 1);
	Function_15(&(Global_46972[5]), 976, 5.0f, 30, 1, 0);
	Function_15(&(Global_46972[5]), 976, 3.0f, 33, 1, 0);
	Function_15(&(Global_46972[5]), 1128, 4.0f, 30, 1, 0);
	Function_13(&(Global_46972[5]), 1081, 8.0f, 0, 0);
	Function_15(&(Global_46972[5]), 1059, 2.0f, 14, 1, 0);
	Function_15(&(Global_46972[5]), 1050, 1.0f, 30, 0, 0);
	Function_15(&(Global_46972[5]), 1050, 1.0f, 30, 0, 0);
	Function_15(&(Global_46972[5]), 1051, 1.0f, 30, 0, 0);
	Function_15(&(Global_46972[5]), 1052, 1.0f, 30, 0, 0);
	Function_15(&(Global_46972[5]), 1052, 1.0f, 30, 0, 0);
	Function_15(&(Global_46972[5]), 1128, 10.0f, 30, 0, 0);
	Function_15(&(Global_46972[5]), 1050, 2.0f, 33, 0, 0);
	Function_15(&(Global_46972[5]), 1050, 2.0f, 33, 0, 0);
	Function_15(&(Global_46972[5]), 1051, 2.0f, 33, 0, 0);
	Function_15(&(Global_46972[5]), 1052, 2.0f, 33, 0, 0);
	Function_15(&(Global_46972[5]), 1052, 2.0f, 33, 0, 0);
	bVar7 = Function_18("cows", 1);
	Function_13(&bVar7, 1008, 8.0f, 1, 0);
	Function_13(&bVar7, 1009, 8.0f, 1, 0);
	Function_13(&bVar7, 1010, 8.0f, 1, 0);
	Function_13(&bVar7, 1011, 8.0f, 1, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_18("animal_bird", 1);
	Function_15(&(Global_46972[7]), 1131, 1.0f, 30, 1, 0);
	Function_11(&(Global_46972[5]), 4E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_18("ped_law", 1);
	Function_13(&(Global_46972[2]), 466, 8.0f, 1, 0);
	Function_13(&(Global_46972[2]), 462, 8.0f, 1, 0);
	Function_13(&(Global_46972[2]), 463, 8.0f, 1, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_18("ped_bad_guys_local", 1);
	Function_13(&(Global_46972[3]), 410, 1.0f, 1, 0);
	Function_13(&(Global_46972[3]), 413, 4.0f, 1, 0);
	Function_13(&(Global_46972[3]), 406, 4.0f, 1, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_18("ped_bad_guys_generic", 1);
	Function_13(&(Global_46972[4]), 500, 1.0f, 1, 0);
	Function_13(&(Global_46972[4]), 501, 1.0f, 1, 0);
	Function_13(&(Global_46972[4]), 499, 1.0f, 1, 0);
	Function_13(&(Global_46972[4]), 496, 1.0f, 1, 0);
	Function_13(&(Global_46972[4]), 497, 1.0f, 1, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_18("ped_vehicle", 1);
	Function_13(&(Global_46972[9]), 1185, 2.0f, 1, 0);
	Function_13(&(Global_46972[9]), 1184, 2.0f, 1, 0);
	Function_13(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_13(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	bVar8 = Function_18("rebel_base", 1);
	Function_13(&bVar8, 516, 2.0f, 1, 0);
	Function_13(&bVar8, 521, 2.0f, 1, 0);
	Function_13(&bVar8, 529, 2.0f, 1, 0);
	Function_13(&bVar8, 246, 1.0f, 1, 0);
	Function_13(&bVar8, 247, 1.0f, 1, 0);
	Function_13(&bVar8, 314, 1.0f, 1, 0);
	uVar9 = CREATE_POPULATION_SET(1);
	while (!Function_10(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
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
	uVar10 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (IS_LAYOUTREF_VALID(&uVar10))
	{
		if (1 & Global_39266[4])
		{
			uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_armwrestling");
			uVar12 = Function_7(&uVar11, &bVar6, 3, 1, 0, 1);
			if (IS_ZONE_VALID(&uVar12))
			{
				Function_5(&uVar12);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar12, 50.0f);
			}
			else
			{
				LOG_ERROR("agv_pop: Cannot find agvv_armwrestling to create population volumes");
			}
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_Horses");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_7(&uVar11, &(Global_46972[15]), 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_Horses to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_Cows_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_7(&uVar11, &bVar7, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_Cows_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_goats_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_7(&uVar11, &bVar4, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_goats_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_crows_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_4(&uVar11, &uVar0, 0,0004f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_crows_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_chickens_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_7(&uVar11, &bVar3, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_chickens_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_region");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_7(&uVar11, &bVar2, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_vultures_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_rebel_base");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &bVar8, 3, 6, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_rebel_base to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_rabbits_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_4(&uVar11, &uVar5, 0,0001f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find agvv_rabbits_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_snakes_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_4(&uVar11, &uVar1, 0,0001f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find agvv_snakes_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "agvv_region");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_4(&uVar11, &uVar9, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agvv_pop: Cannot find henv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("rwf_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_10(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_9("Finished loading Agave Viejo population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x11AD / 4525
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x11BE / 4542
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

var Function_3(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, bool bParam6) //Position: 0x1216 / 4630
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
		DECOR_SET_INT(&uParam0, "locflag", 1 | DECOR_GET_INT(&uParam0, "locflag"));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 1);
	}
	return &uVar0;
}

var Function_4(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12A8 / 4776
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
		DECOR_SET_INT(&uParam0, "locflag", 1 | DECOR_GET_INT(&uParam0, "locflag"));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 1);
	}
	return &uVar0;
}

void Function_5(int iParam0) //Position: 0x1338 / 4920
{
	Function_6(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_arm_wrestling");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "arm_wrestling_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_6(bool bParam0) //Position: 0x13EE / 5102
{
	SET_ZONE_PRIORITY(&bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&bParam0, 0, 0);
	return;
}

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1411 / 5137
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
		DECOR_SET_INT(&uParam0, "locflag", 1 | DECOR_GET_INT(&uParam0, "locflag"));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 1);
	}
	return &uVar0;
}

bool Function_8(int iParam0) //Position: 0x14A1 / 5281
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0) //Position: 0x14BD / 5309
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

bool Function_10(var uParam0, int iParam1) //Position: 0x14FD / 5373
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, int iParam1) //Position: 0x151A / 5402
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(iParam1);
	return;
}

var Function_12(bool bParam0, int iParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x152B / 5419
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(&bParam0, iParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&bParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_13(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1572 / 5490
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

void Function_14(bool bParam0) //Position: 0x15F4 / 5620
{
	DESTROY_POPULATION_SET(&bParam0);
	return;
}

var Function_15(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1601 / 5633
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_17(iParam3), Function_16(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_16(int iParam0) //Position: 0x167F / 5759
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

var Function_17(int iParam0) //Position: 0x16EB / 5867
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

var Function_18(var uParam0, int iParam1) //Position: 0x1757 / 5975
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_19(char* cParam0) //Position: 0x1766 / 5990
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

