//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 41
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
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_15("Loading Coots Chapel population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_13("ped_wilderness", Global_30840);
	Function_11(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 175, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 174, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 55, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 178, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 153, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 173, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 199, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 56, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 46, 8.0f, 0, 0);
	Function_11(&(Global_30750[0]), 50, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 202, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_11(&(Global_30750[0]), 54, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 53, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 33, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 34, 10.0f, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_30750[1]), 64, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 74, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 48, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 73, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 78, 10.0f, 0, 0);
	Function_11(&(Global_30750[1]), 49, 10.0f, 0, 0);
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_30750[5]), 1057, 3.0f, 15, 1, 0);
	Function_8(&(Global_30750[5]), 1128, 6.0f, 15, 1, 0);
	Function_8(&(Global_30750[5]), 1084, 4.0f, 33, 1, 0);
	Function_8(&(Global_30750[5]), 1082, 4.0f, 33, 1, 0);
	Function_8(&(Global_30750[5]), 1137, 4.0f, 33, 1, 0);
	Function_11(&(Global_30750[5]), 1078, 5.0f, 1, 0);
	Function_11(&(Global_30750[5]), 1078, 5.0f, 1, 0);
	Function_11(&(Global_30750[5]), 1078, 5.0f, 1, 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_13("animal_hunt", 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1089, 8.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1090, 7.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1061, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1062, 5.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1063, 5.0f, 0, 0);
	Function_14(&(Global_30750[8]));
	Global_30750[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_30750[8]), 1060, 1.0f, 1, 0);
	Function_11(&(Global_30750[8]), 1057, 5.0f, 1, 0);
	Function_11(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_11(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	Function_14(&(Global_30750[14]));
	Global_30750[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
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
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_30750[7]), 1131, 5.0f, 15, 0, 0);
	Function_7(Global_30750[5], 4E-05f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_13("ped_law", 1);
	Function_11(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_11(&(Global_30750[2]), 441, 8.0f, 1, 0);
	Function_11(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_30750[3]), 487, 1.0f, 1, 0);
	Function_11(&(Global_30750[3]), 486, 4.0f, 1, 0);
	Function_11(&(Global_30750[3]), 488, 4.0f, 1, 0);
	Function_11(&(Global_30750[3]), 489, 4.0f, 1, 0);
	Function_11(&(Global_30750[3]), 490, 4.0f, 1, 0);
	Function_11(&(Global_30750[3]), 491, 4.0f, 1, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_11(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_11(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_11(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_11(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_11(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_30750[9]), 1183, 2.0f, 1, 0);
	Function_11(&(Global_30750[9]), 1188, 2.0f, 1, 0);
	Function_11(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1201, 2.0f, 0, 0);
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
	vVar8 = { -2148.719f, 16.323f, 2602.377f };
	AMBIENT_SPAWN_PRESTREAM_SET(uVar7, vVar8, 450.0f, 15);
	while (!Function_6(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar11 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (IS_LAYOUTREF_VALID(bVar11))
	{
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_vultures_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar2, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_vultures_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_crows_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar0, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_crows_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_racoons_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar4, 0.00015f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_racoons_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_owls_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar3, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_owls_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_rabbits_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar5, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_rabbits_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_snakes_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar1, 5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("coo_pop: Cannot find coov_snakes_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "coov_region");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_3(bVar12, uVar6, 0.0f, 0, 0, 1);
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
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_6(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_5("Finished loading Coots Chapel population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1139 / 4409
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1148 / 4424
{
	int iVar0;
	
	if (!Function_4(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x119D / 4509
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

bool Function_4(int iParam0) //Position: 0x121D / 4637
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, float fParam1) //Position: 0x1239 / 4665
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0x1277 / 4727
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x1293 / 4755
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12A3 / 4771
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x131B / 4891
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

var Function_10(int iParam0) //Position: 0x1387 / 4999
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

var Function_11(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x13F3 / 5107
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

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x146F / 5231
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_13(int iParam0, int iParam1) //Position: 0x14B4 / 5300
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_14(int iParam0) //Position: 0x14C1 / 5313
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_15(bool bParam0, var uParam1) //Position: 0x14CD / 5325
{
	if (!Function_4(128))
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

