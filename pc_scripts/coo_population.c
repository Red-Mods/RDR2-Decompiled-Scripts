//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 41
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
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	struct<2> Var8;
	var uVar10;
	var uVar11;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_15("Loading Coots Chapel population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 980, 100.0f, 0, 3);
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
	Global_46972[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_13("ped_wilderness", Global_47149);
	Function_11(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 175, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 174, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 178, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 153, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 173, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 199, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 56, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_11(&(Global_46972[0]), 50, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 202, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 54, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 53, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 33, 10.0f, 0, 0);
	Function_11(&(Global_46972[0]), 34, 10.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_46972[1]), 64, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 74, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 48, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 73, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 78, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 49, 10.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_46972[5]), 1057, 3.0f, 15, 1, 0);
	Function_8(&(Global_46972[5]), 1128, 6.0f, 15, 1, 0);
	Function_8(&(Global_46972[5]), 1084, 4.0f, 33, 1, 0);
	Function_8(&(Global_46972[5]), 1082, 4.0f, 33, 1, 0);
	Function_8(&(Global_46972[5]), 1137, 4.0f, 33, 1, 0);
	Function_11(&(Global_46972[5]), 1078, 5.0f, 1, 0);
	Function_11(&(Global_46972[5]), 1078, 5.0f, 1, 0);
	Function_11(&(Global_46972[5]), 1078, 5.0f, 1, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_13("animal_hunt", 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1089, 8.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1090, 7.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1061, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1062, 5.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1063, 5.0f, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_46972[8]), 1060, 1.0f, 1, 0);
	Function_11(&(Global_46972[8]), 1057, 5.0f, 1, 0);
	Function_11(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_11(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	uVar0 = Function_13("crows", 0);
	Function_8(&uVar0, 1132, 10.0f, 14, 0, 0);
	Function_8(&uVar0, 1133, 10.0f, 14, 0, 0);
	uVar1 = Function_13("snakes", 0);
	Function_8(&uVar1, 1057, 8.0f, 14, 0, 0);
	uVar2 = Function_13("vultures", 0);
	Function_8(&uVar2, 1128, 10.0f, 14, 0, 0);
	Function_8(&uVar2, 1129, 10.0f, 14, 0, 0);
	Function_8(&uVar2, 1130, 10.0f, 14, 0, 0);
	uVar3 = Function_13("owls", 0);
	Function_8(&uVar3, 1137, 10.0f, 49, 0, 0);
	Function_8(&uVar3, 1138, 10.0f, 49, 0, 0);
	Function_8(&uVar3, 1139, 10.0f, 49, 0, 0);
	uVar4 = Function_13("racoons", 0);
	Function_8(&uVar4, 1082, 10.0f, 49, 0, 0);
	Function_8(&uVar4, 1082, 10.0f, 49, 0, 0);
	Function_8(&uVar4, 1082, 10.0f, 49, 0, 0);
	uVar5 = Function_13("rabbits", 0);
	Function_8(&uVar5, 1078, 10.0f, 49, 0, 0);
	Function_8(&uVar5, 1078, 10.0f, 49, 0, 0);
	Function_8(&uVar5, 1078, 10.0f, 49, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1131, 5.0f, 15, 0, 0);
	Function_7(&(Global_46972[5]), 4E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_13("ped_law", 1);
	Function_11(&(Global_46972[2]), 436, 8.0f, 1, 0);
	Function_11(&(Global_46972[2]), 441, 8.0f, 1, 0);
	Function_11(&(Global_46972[2]), 442, 8.0f, 1, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_46972[3]), 487, 1.0f, 1, 0);
	Function_11(&(Global_46972[3]), 486, 4.0f, 1, 0);
	Function_11(&(Global_46972[3]), 488, 4.0f, 1, 0);
	Function_11(&(Global_46972[3]), 489, 4.0f, 1, 0);
	Function_11(&(Global_46972[3]), 490, 4.0f, 1, 0);
	Function_11(&(Global_46972[3]), 491, 4.0f, 1, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_11(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_11(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_46972[9]), 1183, 2.0f, 1, 0);
	Function_11(&(Global_46972[9]), 1188, 2.0f, 1, 0);
	Function_11(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar6 = CREATE_POPULATION_SET(1);
	uVar7 = Function_13("armadillo_prestream", 0);
	Function_8(&uVar7, 202, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 87, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 235, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 217, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 140, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 137, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 46, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 50, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 22, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 311, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 33, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 34, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 76, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 79, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 141, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 204, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 155, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 142, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 49, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 56, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 74, 4.0f, 14, 0, 0);
	Function_8(&uVar7, 178, 4.0f, 14, 0, 0);
	Var8 = Vector(-2148,719f, 16,323f, 2602,377f);
	AMBIENT_SPAWN_PRESTREAM_SET(&uVar7, Var8, 450.0f, 15);
	while (!Function_6(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar10 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (IS_LAYOUTREF_VALID(&uVar10))
	{
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_vultures_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar2, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_vultures_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_crows_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar0, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_crows_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_racoons_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar4, 0,00015f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_racoons_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_owls_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar3, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_owls_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_rabbits_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar5, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_rabbits_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_snakes_set");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar1, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_snakes_set to create population volumes");
		}
		uVar11 = FIND_VOLUME_IN_LAYOUT(&uVar10, "coov_region");
		if (IS_VOLUME_VALID(&uVar11))
		{
			Function_3(&uVar11, &uVar6, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("coo_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_6(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_5("Finished loading Coots Chapel population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1177 / 4471
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1188 / 4488
{
	int iVar0;
	
	if (!Function_4(1))
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

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x11E0 / 4576
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

bool Function_4(int iParam0) //Position: 0x1270 / 4720
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0x128C / 4748
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0x12CC / 4812
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x12E9 / 4841
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12FA / 4858
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x1378 / 4984
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

var Function_10(int iParam0) //Position: 0x13E4 / 5092
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

var Function_11(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1450 / 5200
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

var Function_12(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x14D2 / 5330
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(&uParam0, iParam1, fParam2, iParam3, 0);
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

var Function_13(var uParam0, int iParam1) //Position: 0x1519 / 5401
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_14(int iParam0) //Position: 0x1528 / 5416
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_15(char* cParam0) //Position: 0x1535 / 5429
{
	if (!Function_4(128))
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

