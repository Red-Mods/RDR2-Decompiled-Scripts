//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 50
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
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	var uVar12;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_20("Loading Agave Viejo population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_19("crows", 0);
	Function_16(&uVar0, 1132, 10.0f, 14, 0, 0);
	Function_16(&uVar0, 1133, 10.0f, 14, 0, 0);
	Function_15(&(Global_30750[10]));
	Global_30750[10] = Function_19("animal_hunt", 0);
	uVar1 = Function_19("snakes", 0);
	Function_16(&uVar1, 1059, 8.0f, 14, 0, 0);
	uVar2 = Function_19("dogs", 0);
	Function_14(&uVar2, 1035, 10.0f, 0, 0);
	Function_14(&uVar2, 1033, 10.0f, 0, 0);
	uVar3 = Function_19("chickens", 0);
	Function_16(&uVar3, 1015, 100.0f, 15, 0, 0);
	Function_16(&uVar3, 1017, 100.0f, 15, 0, 0);
	uVar4 = Function_19("goats", 0);
	Function_14(&uVar4, 1026, 10.0f, 0, 0);
	Function_14(&uVar4, 1027, 10.0f, 0, 0);
	Function_14(&uVar4, 1028, 10.0f, 0, 0);
	uVar5 = Function_19("rabbits", 0);
	Function_16(&uVar5, 1078, 10.0f, 49, 0, 0);
	Function_15(&(Global_30750[6]));
	Global_30750[6] = Function_19("animal_horse", 4);
	Function_13(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 980, 100.0f, 0, 3);
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
	Function_15(&(Global_30750[15]));
	Global_30750[15] = Function_19("animal_horse_unsaddled", 0);
	Function_14(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_15(&(Global_30750[0]));
	Global_30750[0] = Function_19("ped_wilderness", Global_30840);
	Function_14(&(Global_30750[0]), 239, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 240, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 241, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 292, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 295, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 297, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 269, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 270, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 271, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 272, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 278, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 279, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 280, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 281, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 282, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 284, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 306, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 317, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]), 323, 2.0f, 0, 0);
	if (!Function_12() && Global_25974[4])
	{
		uVar6 = Function_19("ped_armwrestling", 0);
		Function_14(&uVar6, 258, 1.0f, 0, 0);
		Function_14(&uVar6, 311, 1.0f, 0, 0);
		Function_14(&uVar6, 136, 1.0f, 0, 0);
		Function_14(&uVar6, 278, 1.0f, 0, 0);
		Function_14(&uVar6, 162, 1.0f, 0, 0);
	}
	Function_15(&(Global_30750[11]));
	Global_30750[11] = Function_19("animal_predator", 1);
	Function_14(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_14(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_14(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_14(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_14(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_14(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]));
	Global_30750[1] = Function_19("ped_traveller", 3);
	Function_14(&(Global_30750[1]), 63, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 62, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 253, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 263, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 265, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 275, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 302, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 303, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 311, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 318, 2.0f, 0, 0);
	Function_15(&(Global_30750[5]));
	Global_30750[5] = Function_19("animal_wilderness", 1);
	Function_16(&(Global_30750[5]), 976, 5.0f, 30, 1, 0);
	Function_16(&(Global_30750[5]), 976, 3.0f, 33, 1, 0);
	Function_16(&(Global_30750[5]), 1128, 4.0f, 30, 1, 0);
	Function_14(&(Global_30750[5]), 1081, 8.0f, 0, 0);
	Function_16(&(Global_30750[5]), 1059, 2.0f, 14, 1, 0);
	Function_16(&(Global_30750[5]), 1050, 1.0f, 30, 0, 0);
	Function_16(&(Global_30750[5]), 1050, 1.0f, 30, 0, 0);
	Function_16(&(Global_30750[5]), 1051, 1.0f, 30, 0, 0);
	Function_16(&(Global_30750[5]), 1052, 1.0f, 30, 0, 0);
	Function_16(&(Global_30750[5]), 1052, 1.0f, 30, 0, 0);
	Function_16(&(Global_30750[5]), 1128, 10.0f, 30, 0, 0);
	Function_16(&(Global_30750[5]), 1050, 2.0f, 33, 0, 0);
	Function_16(&(Global_30750[5]), 1050, 2.0f, 33, 0, 0);
	Function_16(&(Global_30750[5]), 1051, 2.0f, 33, 0, 0);
	Function_16(&(Global_30750[5]), 1052, 2.0f, 33, 0, 0);
	Function_16(&(Global_30750[5]), 1052, 2.0f, 33, 0, 0);
	uVar7 = Function_19("cows", 1);
	Function_14(&uVar7, 1008, 8.0f, 1, 0);
	Function_14(&uVar7, 1009, 8.0f, 1, 0);
	Function_14(&uVar7, 1010, 8.0f, 1, 0);
	Function_14(&uVar7, 1011, 8.0f, 1, 0);
	Function_15(&(Global_30750[7]));
	Global_30750[7] = Function_19("animal_bird", 1);
	Function_16(&(Global_30750[7]), 1131, 1.0f, 30, 1, 0);
	Function_11(Global_30750[5], 4E-05f);
	Function_15(&(Global_30750[2]));
	Global_30750[2] = Function_19("ped_law", 1);
	Function_14(&(Global_30750[2]), 466, 8.0f, 1, 0);
	Function_14(&(Global_30750[2]), 462, 8.0f, 1, 0);
	Function_14(&(Global_30750[2]), 463, 8.0f, 1, 0);
	Function_15(&(Global_30750[3]));
	Global_30750[3] = Function_19("ped_bad_guys_local", 1);
	Function_14(&(Global_30750[3]), 410, 1.0f, 1, 0);
	Function_14(&(Global_30750[3]), 413, 4.0f, 1, 0);
	Function_14(&(Global_30750[3]), 406, 4.0f, 1, 0);
	Function_15(&(Global_30750[4]));
	Global_30750[4] = Function_19("ped_bad_guys_generic", 1);
	Function_14(&(Global_30750[4]), 500, 1.0f, 1, 0);
	Function_14(&(Global_30750[4]), 501, 1.0f, 1, 0);
	Function_14(&(Global_30750[4]), 499, 1.0f, 1, 0);
	Function_14(&(Global_30750[4]), 496, 1.0f, 1, 0);
	Function_14(&(Global_30750[4]), 497, 1.0f, 1, 0);
	Function_15(&(Global_30750[9]));
	Global_30750[9] = Function_19("ped_vehicle", 1);
	Function_14(&(Global_30750[9]), 1185, 2.0f, 1, 0);
	Function_14(&(Global_30750[9]), 1184, 2.0f, 1, 0);
	Function_14(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar8 = Function_19("rebel_base", 1);
	Function_14(&uVar8, 516, 2.0f, 1, 0);
	Function_14(&uVar8, 521, 2.0f, 1, 0);
	Function_14(&uVar8, 529, 2.0f, 1, 0);
	Function_14(&uVar8, 246, 1.0f, 1, 0);
	Function_14(&uVar8, 247, 1.0f, 1, 0);
	Function_14(&uVar8, 314, 1.0f, 1, 0);
	bVar9 = CREATE_POPULATION_SET(1);
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
	bVar10 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (IS_LAYOUTREF_VALID(bVar10))
	{
		if (!Function_12() && Global_25974[4])
		{
			bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_armwrestling");
			uVar12 = Function_7(bVar11, uVar6, 3, 1, 0, 1);
			if (IS_ZONE_VALID(uVar12))
			{
				Function_5(uVar12);
				SET_ZONE_FORCE_SPAWN_DISTANCE(uVar12, 50.0f);
			}
			else
			{
				LOG_ERROR("agv_pop: Cannot find agvv_armwrestling to create population volumes");
			}
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_Horses");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_7(bVar11, Global_30750[15], 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_Horses to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_Cows_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_7(bVar11, uVar7, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_Cows_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_goats_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_7(bVar11, uVar4, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_goats_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_crows_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_4(bVar11, uVar0, 0,0004f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_crows_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_chickens_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_7(bVar11, uVar3, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_chickens_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_region");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_7(bVar11, uVar2, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_vultures_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_rebel_base");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_3(bVar11, uVar8, 3, 6, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_rebel_base to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_rabbits_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_4(bVar11, uVar5, 0,0001f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find agvv_rabbits_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_snakes_set");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_4(bVar11, uVar1, 0,0001f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rwf_pop: Cannot find agvv_snakes_set to create population volumes");
		}
		bVar11 = FIND_VOLUME_IN_LAYOUT(bVar10, "agvv_region");
		if (IS_VOLUME_VALID(bVar11))
		{
			Function_4(bVar11, bVar9, 0.0f, 0, 0, 1);
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
	Function_9("Finished loading Agave Viejo population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1160 / 4448
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x116F / 4463
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
			if (!IS_POPULATION_SET_READY(Global_30750[iVar0], 0, 4294967295))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, bool bParam6) //Position: 0x11C4 / 4548
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(uVar0, uParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(uVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(uVar0, uParam4);
	if (bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(uVar0, !bParam6);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (1 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return uVar0;
}

var Function_4(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1246 / 4678
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(uVar0, bParam1);
	SET_ZONE_POPULATION_DENSITY(uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(uVar0, iParam3);
	if (bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(uVar0, !bParam5);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (1 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return uVar0;
}

void Function_5(char* cParam0) //Position: 0x12C6 / 4806
{
	Function_6(cParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(cParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(cParam0, "fake_arm_wrestling");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(cParam0, "arm_wrestling_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(cParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(cParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(cParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_6(bool bParam0) //Position: 0x1375 / 4981
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_7(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1394 / 5012
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(uVar0, uParam1);
	SET_ZONE_POPULATION_COUNT(uVar0, bParam2);
	SET_ZONE_RESTRICT_ACTORS(uVar0, iParam3);
	if (bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(uVar0, !bParam5);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (1 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return uVar0;
}

bool Function_8(int iParam0) //Position: 0x1414 / 5140
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0, float fParam1) //Position: 0x1430 / 5168
{
	if (!Function_8(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x146E / 5230
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x148A / 5258
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_12() //Position: 0x149A / 5274
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x14A3 / 5283
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_14(uParam0, bParam1, fParam2, bParam3, 0);
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

var Function_14(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x14E8 / 5352
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

void Function_15(bool bParam0) //Position: 0x155D / 5469
{
	DESTROY_POPULATION_SET(*bParam0);
	return;
}

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1569 / 5481
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_18(iParam3), Function_17(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_17(int iParam0) //Position: 0x15CB / 5579
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

var Function_18(int iParam0) //Position: 0x1637 / 5687
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

var Function_19(int iParam0, int iParam1) //Position: 0x16A3 / 5795
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_20(char* cParam0, var uParam1) //Position: 0x16B0 / 5808
{
	if (!Function_8(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

