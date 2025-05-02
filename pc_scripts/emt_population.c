//Decompiled with MagicRDR v1.0
//Function Count : 19
//Statics Count : 4
//Natives Count : 48
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
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_18("Loading El Matadero population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_17(&(Global_46972[6]));
	Global_46972[6] = Function_16("animal_horse", 4);
	Function_15(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_17(&(Global_46972[15]));
	Global_46972[15] = Function_16("animal_horse_unsaddled", 0);
	Function_14(&(Global_46972[15]), 986, 50.0f, 0, 0);
	Function_14(&(Global_46972[15]), 987, 50.0f, 0, 0);
	Function_14(&(Global_46972[15]), 988, 50.0f, 0, 0);
	Function_14(&(Global_46972[15]), 989, 50.0f, 0, 0);
	Function_14(&(Global_46972[15]), 990, 50.0f, 0, 0);
	Function_14(&(Global_46972[15]), 991, 50.0f, 0, 0);
	Function_14(&(Global_46972[15]), 996, 100.0f, 0, 0);
	Function_14(&(Global_46972[15]), 997, 100.0f, 0, 0);
	Function_14(&(Global_46972[15]), 998, 100.0f, 0, 0);
	Function_17(&(Global_46972[0]));
	Global_46972[0] = Function_16("ped_wilderness", Global_47149);
	Function_14(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 321, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_17(&(Global_46972[1]));
	Global_46972[1] = Function_16("ped_traveller", 3);
	Function_14(&(Global_46972[1]), 63, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 62, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 253, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 263, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 265, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 275, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 302, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 303, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 311, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]), 318, 2.0f, 0, 0);
	Function_17(&(Global_46972[5]));
	Global_46972[5] = Function_16("animal_wilderness", 1);
	Function_11(&(Global_46972[5]), 1059, 3.0f, 15, 1, 0);
	Function_14(&(Global_46972[5]), 1078, 10.0f, 1, 0);
	Function_11(&(Global_46972[5]), 1128, 9.0f, 15, 1, 0);
	Function_17(&(Global_46972[11]));
	Global_46972[11] = Function_16("animal_predator", 1);
	Function_14(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1050, 1.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1051, 1.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_14(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_17(&(Global_46972[10]));
	Global_46972[10] = Function_16("animal_hunt", 0);
	Function_17(&(Global_46972[8]));
	Global_46972[8] = Function_16("animal_herd", 1);
	Function_14(&(Global_46972[8]), 1064, 1.0f, 1, 0);
	Function_14(&(Global_46972[8]), 1059, 5.0f, 1, 0);
	Function_14(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_14(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	uVar0 = Function_16("chickens", 0);
	Function_11(&uVar0, 1015, 100.0f, 15, 0, 0);
	Function_11(&uVar0, 1017, 100.0f, 15, 0, 0);
	uVar1 = Function_16("snakes", 0);
	Function_11(&uVar1, 1059, 8.0f, 14, 0, 0);
	uVar2 = Function_16("vultures", 0);
	Function_11(&uVar2, 1128, 10.0f, 14, 0, 0);
	bVar3 = Function_16("Horses", 0);
	Function_14(&bVar3, 977, 1.0f, 0, 0);
	Function_14(&bVar3, 976, 2.0f, 0, 0);
	Function_14(&bVar3, 980, 1.0f, 0, 0);
	Function_14(&bVar3, 981, 1,5f, 0, 0);
	bVar4 = Function_16("Mules", 0);
	Function_14(&bVar4, 1000, 10.0f, 0, 0);
	uVar5 = Function_16("Crows", 0);
	Function_11(&uVar5, 1131, 10.0f, 14, 0, 0);
	uVar6 = Function_16("Rabbits", 0);
	Function_11(&uVar6, 1078, 6,5f, 49, 0, 0);
	bVar7 = Function_16("Pigs", 0);
	Function_14(&bVar7, 1020, 8.0f, 0, 0);
	bVar8 = Function_16("Jail", 1);
	Function_14(&bVar8, 9, 8.0f, 0, 0);
	Function_14(&bVar8, 10, 8.0f, 0, 0);
	bVar9 = Function_16("Army", 1);
	Function_14(&bVar9, 380, 8.0f, 0, 0);
	Function_14(&bVar9, 379, 8.0f, 0, 0);
	Function_14(&bVar9, 381, 8.0f, 0, 0);
	Function_14(&bVar9, 392, 8.0f, 0, 0);
	Function_14(&bVar9, 391, 8.0f, 0, 0);
	if (1 & Global_39266[4])
	{
		bVar10 = Function_16("ped_armwrestling", 0);
		Function_14(&bVar10, 408, 1.0f, 0, 0);
		Function_14(&bVar10, 457, 1.0f, 0, 0);
		Function_14(&bVar10, 258, 1.0f, 0, 0);
		Function_14(&bVar10, 136, 1.0f, 0, 0);
		Function_14(&bVar10, 138, 1.0f, 0, 0);
		Function_14(&bVar10, 162, 1.0f, 0, 0);
	}
	bVar11 = Function_16("Goats", 0);
	Function_14(&bVar11, 1029, 8.0f, 0, 0);
	bVar12 = Function_16("Dogs", 0);
	Function_14(&bVar12, 1032, 8.0f, 0, 0);
	Function_14(&bVar12, 1032, 8.0f, 0, 0);
	bVar13 = Function_16("Cows", 0);
	Function_14(&bVar13, 1008, 1.0f, 0, 0);
	Function_14(&bVar13, 1009, 6.0f, 0, 0);
	Function_14(&bVar13, 1010, 3.0f, 0, 0);
	Function_14(&bVar13, 1011, 4,5f, 0, 0);
	Function_17(&(Global_46972[7]));
	Global_46972[7] = Function_16("animal_bird", 1);
	Function_11(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_10(&(Global_46972[5]), 4E-05f);
	Function_17(&(Global_46972[2]));
	Global_46972[2] = Function_16("ped_law", 1);
	Function_14(&(Global_46972[2]), 466, 8.0f, 1, 0);
	Function_14(&(Global_46972[2]), 462, 8.0f, 1, 0);
	Function_14(&(Global_46972[2]), 463, 8.0f, 1, 0);
	Function_17(&(Global_46972[3]));
	Global_46972[3] = Function_16("ped_bad_guys_local", 1);
	Function_14(&(Global_46972[3]), 410, 1.0f, 1, 0);
	Function_14(&(Global_46972[3]), 413, 4.0f, 1, 0);
	Function_14(&(Global_46972[3]), 406, 4.0f, 1, 0);
	Function_17(&(Global_46972[4]));
	Global_46972[4] = Function_16("ped_bad_guys_generic", 1);
	Function_14(&(Global_46972[4]), 500, 1.0f, 1, 0);
	Function_14(&(Global_46972[4]), 501, 1.0f, 1, 0);
	Function_14(&(Global_46972[4]), 499, 1.0f, 1, 0);
	Function_14(&(Global_46972[4]), 496, 1.0f, 1, 0);
	Function_14(&(Global_46972[4]), 497, 1.0f, 1, 0);
	Function_17(&(Global_46972[9]));
	Global_46972[9] = Function_16("ped_vehicle", 1);
	Function_14(&(Global_46972[9]), 1185, 2.0f, 1, 0);
	Function_14(&(Global_46972[9]), 1184, 2.0f, 1, 0);
	Function_14(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_14(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_14(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_14(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	bVar14 = CREATE_POPULATION_SET(1);
	while (!Function_9(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_8("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_7(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar15 = FIND_NAMED_LAYOUT("ElMataderoTown_layout");
	if (IS_LAYOUTREF_VALID(&uVar15))
	{
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_crows_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_6(&uVar16, &uVar5, 0,0006f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_crows_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_vultures_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_6(&uVar16, &uVar2, 0,0006f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_vultures_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_snakes_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_5(&uVar16, &uVar1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_snakes_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_rabbits_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_6(&uVar16, &uVar6, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_rabbits_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_region");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_5(&uVar16, &bVar12, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_region to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_Cell1");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_5(&uVar16, &bVar8, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cell1 to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_Cell2");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_5(&uVar16, &bVar8, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cell2 to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_cave1");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_6(&uVar16, &bVar9, 0,1f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cave1 to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_cave2");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_6(&uVar16, &bVar9, 0,2f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("emt_pop: Cannot find emtv_Cave2 to create population volumes");
		}
		if (1 & Global_39266[4])
		{
			uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_armwrestling");
			uVar17 = Function_5(&uVar16, &bVar10, 3, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar17))
			{
				Function_3(&uVar17);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar17, 50.0f);
			}
			else
			{
				LOG_ERROR("emt_pop: Cannot find emtv_armwrestling to create population volumes");
			}
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "emtv_region");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_6(&uVar16, &bVar14, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agvv_pop: Cannot find henv_region to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_9(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_7(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_8("Finished loading El Matadero population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x117C / 4476
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x118D / 4493
{
	int iVar0;
	
	if (!Function_7(1))
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

void Function_3(int iParam0) //Position: 0x11E5 / 4581
{
	Function_4(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_arm_wrestling");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "arm_wrestling_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_4(bool bParam0) //Position: 0x129B / 4763
{
	SET_ZONE_PRIORITY(&bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&bParam0, 0, 0);
	return;
}

var Function_5(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x12BE / 4798
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

var Function_6(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x134E / 4942
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
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

bool Function_7(int iParam0) //Position: 0x13DE / 5086
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(char* cParam0) //Position: 0x13FA / 5114
{
	if (!Function_7(128))
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

bool Function_9(var uParam0, int iParam1) //Position: 0x143A / 5178
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(var uParam0, bool bParam1) //Position: 0x1457 / 5207
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_11(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1468 / 5224
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_13(iParam3), Function_12(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_12(int iParam0) //Position: 0x14E6 / 5350
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

var Function_13(int iParam0) //Position: 0x1552 / 5458
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

var Function_14(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x15BE / 5566
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

var Function_15(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1640 / 5696
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_14(&uParam0, iParam1, fParam2, iParam3, 0);
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

var Function_16(var uParam0, int iParam1) //Position: 0x1687 / 5767
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_17(int iParam0) //Position: 0x1696 / 5782
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_18(char* cParam0) //Position: 0x16A3 / 5795
{
	if (!Function_7(128))
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

