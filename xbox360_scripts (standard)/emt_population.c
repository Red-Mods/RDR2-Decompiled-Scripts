//Decompiled with MagicRDR v1.0
//Function Count : 20
//Statics Count : 4
//Natives Count : 49
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
	var uVar4;
	var uVar5;
	bool bVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_19("Loading El Matadero population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_18(&(Global_30750[6]));
	Global_30750[6] = Function_17("animal_horse", 4);
	Function_16(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_16(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_18(&(Global_30750[15]));
	Global_30750[15] = Function_17("animal_horse_unsaddled", 0);
	Function_15(&(Global_30750[15]), 986, 50.0f, 0, 0);
	Function_15(&(Global_30750[15]), 987, 50.0f, 0, 0);
	Function_15(&(Global_30750[15]), 988, 50.0f, 0, 0);
	Function_15(&(Global_30750[15]), 989, 50.0f, 0, 0);
	Function_15(&(Global_30750[15]), 990, 50.0f, 0, 0);
	Function_15(&(Global_30750[15]), 991, 50.0f, 0, 0);
	Function_15(&(Global_30750[15]), 996, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 997, 100.0f, 0, 0);
	Function_15(&(Global_30750[15]), 998, 100.0f, 0, 0);
	Function_18(&(Global_30750[0]));
	Global_30750[0] = Function_17("ped_wilderness", Global_30840);
	Function_15(&(Global_30750[0]), 239, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 240, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 241, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 292, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 295, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 297, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 269, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 270, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 271, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 272, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 278, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 279, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 280, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 281, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 282, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 284, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 306, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 317, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 321, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_15(&(Global_30750[0]), 323, 2.0f, 0, 0);
	Function_18(&(Global_30750[1]));
	Global_30750[1] = Function_17("ped_traveller", 3);
	Function_15(&(Global_30750[1]), 63, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 62, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 253, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 263, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 265, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 275, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 302, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 303, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 311, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]), 318, 2.0f, 0, 0);
	Function_18(&(Global_30750[5]));
	Global_30750[5] = Function_17("animal_wilderness", 1);
	Function_12(&(Global_30750[5]), 1059, 3.0f, 15, 1, 0);
	Function_15(&(Global_30750[5]), 1078, 10.0f, 1, 0);
	Function_12(&(Global_30750[5]), 1128, 9.0f, 15, 1, 0);
	Function_18(&(Global_30750[11]));
	Global_30750[11] = Function_17("animal_predator", 1);
	Function_15(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1050, 1.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1051, 1.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_15(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_18(&(Global_30750[10]));
	Global_30750[10] = Function_17("animal_hunt", 0);
	Function_18(&(Global_30750[8]));
	Global_30750[8] = Function_17("animal_herd", 1);
	Function_15(&(Global_30750[8]), 1064, 1.0f, 1, 0);
	Function_15(&(Global_30750[8]), 1059, 5.0f, 1, 0);
	Function_15(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_15(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	uVar0 = Function_17("chickens", 0);
	Function_12(&uVar0, 1015, 100.0f, 15, 0, 0);
	Function_12(&uVar0, 1017, 100.0f, 15, 0, 0);
	uVar1 = Function_17("snakes", 0);
	Function_12(&uVar1, 1059, 8.0f, 14, 0, 0);
	bVar2 = Function_17("vultures", 0);
	Function_12(&bVar2, 1128, 10.0f, 14, 0, 0);
	uVar3 = Function_17("Horses", 0);
	Function_15(&uVar3, 977, 1.0f, 0, 0);
	Function_15(&uVar3, 976, 2.0f, 0, 0);
	Function_15(&uVar3, 980, 1.0f, 0, 0);
	Function_15(&uVar3, 981, 1,5f, 0, 0);
	uVar4 = Function_17("Mules", 0);
	Function_15(&uVar4, 1000, 10.0f, 0, 0);
	uVar5 = Function_17("Crows", 0);
	Function_12(&uVar5, 1131, 10.0f, 14, 0, 0);
	bVar6 = Function_17("Rabbits", 0);
	Function_12(&bVar6, 1078, 6,5f, 49, 0, 0);
	uVar7 = Function_17("Pigs", 0);
	Function_15(&uVar7, 1020, 8.0f, 0, 0);
	bVar8 = Function_17("Jail", 1);
	Function_15(&bVar8, 9, 8.0f, 0, 0);
	Function_15(&bVar8, 10, 8.0f, 0, 0);
	bVar9 = Function_17("Army", 1);
	Function_15(&bVar9, 380, 8.0f, 0, 0);
	Function_15(&bVar9, 379, 8.0f, 0, 0);
	Function_15(&bVar9, 381, 8.0f, 0, 0);
	Function_15(&bVar9, 392, 8.0f, 0, 0);
	Function_15(&bVar9, 391, 8.0f, 0, 0);
	if (!Function_11() && Global_25974[4])
	{
		bVar10 = Function_17("ped_armwrestling", 0);
		Function_15(&bVar10, 408, 1.0f, 0, 0);
		Function_15(&bVar10, 457, 1.0f, 0, 0);
		Function_15(&bVar10, 258, 1.0f, 0, 0);
		Function_15(&bVar10, 136, 1.0f, 0, 0);
		Function_15(&bVar10, 138, 1.0f, 0, 0);
		Function_15(&bVar10, 162, 1.0f, 0, 0);
	}
	uVar11 = Function_17("Goats", 0);
	Function_15(&uVar11, 1029, 8.0f, 0, 0);
	bVar12 = Function_17("Dogs", 0);
	Function_15(&bVar12, 1032, 8.0f, 0, 0);
	Function_15(&bVar12, 1032, 8.0f, 0, 0);
	uVar13 = Function_17("Cows", 0);
	Function_15(&uVar13, 1008, 1.0f, 0, 0);
	Function_15(&uVar13, 1009, 6.0f, 0, 0);
	Function_15(&uVar13, 1010, 3.0f, 0, 0);
	Function_15(&uVar13, 1011, 4,5f, 0, 0);
	Function_18(&(Global_30750[7]));
	Global_30750[7] = Function_17("animal_bird", 1);
	Function_12(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_10(Global_30750[5], 4E-05f);
	Function_18(&(Global_30750[2]));
	Global_30750[2] = Function_17("ped_law", 1);
	Function_15(&(Global_30750[2]), 466, 8.0f, 1, 0);
	Function_15(&(Global_30750[2]), 462, 8.0f, 1, 0);
	Function_15(&(Global_30750[2]), 463, 8.0f, 1, 0);
	Function_18(&(Global_30750[3]));
	Global_30750[3] = Function_17("ped_bad_guys_local", 1);
	Function_15(&(Global_30750[3]), 410, 1.0f, 1, 0);
	Function_15(&(Global_30750[3]), 413, 4.0f, 1, 0);
	Function_15(&(Global_30750[3]), 406, 4.0f, 1, 0);
	Function_18(&(Global_30750[4]));
	Global_30750[4] = Function_17("ped_bad_guys_generic", 1);
	Function_15(&(Global_30750[4]), 500, 1.0f, 1, 0);
	Function_15(&(Global_30750[4]), 501, 1.0f, 1, 0);
	Function_15(&(Global_30750[4]), 499, 1.0f, 1, 0);
	Function_15(&(Global_30750[4]), 496, 1.0f, 1, 0);
	Function_15(&(Global_30750[4]), 497, 1.0f, 1, 0);
	Function_18(&(Global_30750[9]));
	Global_30750[9] = Function_17("ped_vehicle", 1);
	Function_15(&(Global_30750[9]), 1185, 2.0f, 1, 0);
	Function_15(&(Global_30750[9]), 1184, 2.0f, 1, 0);
	Function_15(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar14 = CREATE_POPULATION_SET(1);
	while (!Function_9(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_8("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_7(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar15 = FIND_NAMED_LAYOUT("ElMataderoTown_layout");
	if (IS_LAYOUTREF_VALID(bVar15))
	{
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_crows_set");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_6(bVar16, uVar5, 0,0006f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_crows_set to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_vultures_set");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_6(bVar16, bVar2, 0,0006f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_vultures_set to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_snakes_set");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_5(bVar16, uVar1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_snakes_set to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_rabbits_set");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_6(bVar16, bVar6, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_rabbits_set to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_region");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_5(bVar16, bVar12, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_region to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_Cell1");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_5(bVar16, bVar8, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cell1 to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_Cell2");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_5(bVar16, bVar8, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cell2 to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_cave1");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_6(bVar16, bVar9, 0,1f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cave1 to create population volumes");
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_cave2");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_6(bVar16, bVar9, 0,2f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cave2 to create population volumes");
		}
		if (!Function_11() && Global_25974[4])
		{
			bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_armwrestling");
			bVar17 = Function_5(bVar16, bVar10, 3, 1, 0, 0);
			if (IS_ZONE_VALID(bVar17))
			{
				Function_3(bVar17);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar17, 50.0f);
			}
			else
			{
				LOG_ERROR("emt_pop: Cannot find emtv_armwrestling to create population volumes");
			}
		}
		bVar16 = FIND_VOLUME_IN_LAYOUT(bVar15, "emtv_region");
		if (IS_VOLUME_VALID(bVar16))
		{
			Function_6(bVar16, bVar14, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agvv_pop: Cannot find henv_region to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_9(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_7(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_8("Finished loading El Matadero population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1129 / 4393
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1138 / 4408
{
	int iVar0;
	
	if (!Function_7(1))
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

void Function_3(bool bParam0) //Position: 0x118D / 4493
{
	Function_4(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_arm_wrestling");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "arm_wrestling_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_4(bool bParam0) //Position: 0x123C / 4668
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_5(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x125B / 4699
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

var Function_6(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12DB / 4827
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

bool Function_7(int iParam0) //Position: 0x135B / 4955
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0, float fParam1) //Position: 0x1377 / 4983
{
	if (!Function_7(128))
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

bool Function_9(var uParam0, int iParam1) //Position: 0x13B5 / 5045
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(var uParam0, bool bParam1) //Position: 0x13D1 / 5073
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_11() //Position: 0x13E1 / 5089
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x13EA / 5098
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_14(iParam3), Function_13(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_13(int iParam0) //Position: 0x144C / 5196
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

var Function_14(int iParam0) //Position: 0x14B8 / 5304
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

var Function_15(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1524 / 5412
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1599 / 5529
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_17(bool bParam0, int iParam1) //Position: 0x15DE / 5598
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_18(int iParam0) //Position: 0x15EB / 5611
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_19(bool bParam0, var uParam1) //Position: 0x15F7 / 5623
{
	if (!Function_7(128))
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

