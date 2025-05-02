//Decompiled with MagicRDR v1.0
//Function Count : 27
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_26("Loading Torquemada population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_25(&(Global_46972[6]));
	Global_46972[6] = Function_24("animal_horse", 4);
	Function_23(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_23(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_25(&(Global_46972[15]));
	Global_46972[15] = Function_24("animal_horse_unsaddled", 0);
	Function_22(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_22(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_25(&(Global_46972[0]));
	Global_46972[0] = Function_24("ped_wilderness", Global_47149);
	Function_22(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_22(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_25(&(Global_46972[1]));
	Global_46972[1] = Function_24("ped_traveller", 3);
	Function_22(&(Global_46972[1]), 63, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 62, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 253, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 263, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 265, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 275, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 302, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 303, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 311, 10.0f, 0, 0);
	Function_22(&(Global_46972[1]), 318, 10.0f, 0, 0);
	Function_25(&bVar0);
	if (1 & Global_39266[8])
	{
		if (Function_21(28, 0) || Function_15(28))
		{
			bVar0 = Function_24("ped_fivefingerarmy", 0);
			Function_22(&bVar0, 392, 1.0f, 0, 0);
			Function_22(&bVar0, 462, 1.0f, 0, 0);
			Function_22(&bVar0, 311, 1.0f, 0, 0);
			Function_22(&bVar0, 294, 1.0f, 0, 0);
		}
		else
		{
			bVar0 = Function_24("ped_fivefinger", 0);
			Function_22(&bVar0, 311, 1.0f, 0, 0);
			Function_22(&bVar0, 294, 1.0f, 0, 0);
			Function_22(&bVar0, 280, 1.0f, 0, 0);
			Function_22(&bVar0, 283, 1.0f, 0, 0);
		}
	}
	Function_25(&(Global_46972[5]));
	Global_46972[5] = Function_24("animal_wilderness", 1);
	Function_12(&(Global_46972[5]), 1059, 3.0f, 15, 1, 0);
	Function_22(&(Global_46972[5]), 1078, 10.0f, 1, 0);
	Function_12(&(Global_46972[5]), 1128, 9.0f, 15, 1, 0);
	Function_22(&(Global_46972[5]), 1081, 8.0f, 0, 0);
	Function_25(&(Global_46972[11]));
	Global_46972[11] = Function_24("animal_predator", 1);
	Function_22(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1050, 1.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1051, 1.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_22(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_25(&(Global_46972[10]));
	Global_46972[10] = Function_24("animal_hunt", 0);
	Function_25(&(Global_46972[8]));
	Global_46972[8] = Function_24("animal_herd", 1);
	Function_22(&(Global_46972[8]), 1064, 1.0f, 1, 0);
	Function_22(&(Global_46972[8]), 1059, 5.0f, 1, 0);
	Function_22(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_22(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	bVar1 = Function_24("snakes", 0);
	Function_12(&bVar1, 1059, 8.0f, 14, 0, 0);
	bVar2 = Function_24("vultures", 0);
	Function_12(&bVar2, 1128, 10.0f, 14, 0, 0);
	bVar3 = Function_24("Crows", 0);
	Function_22(&bVar3, 1131, 10.0f, 0, 0);
	bVar4 = Function_24("Dogs", 0);
	Function_22(&bVar4, 1032, 8.0f, 0, 0);
	Function_22(&bVar4, 1032, 8.0f, 0, 0);
	Function_25(&(Global_46972[7]));
	Global_46972[7] = Function_24("animal_bird", 1);
	Function_12(&(Global_46972[7]), 1131, 10.0f, 14, 0, 0);
	Function_25(&(Global_46972[14]));
	Global_46972[14] = Function_24("birds_trees", 1);
	Function_22(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_22(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_22(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_22(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_22(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_22(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_11(&(Global_46972[5]), 4E-05f);
	Function_25(&(Global_46972[2]));
	Global_46972[2] = Function_24("ped_law", 1);
	Function_22(&(Global_46972[2]), 466, 8.0f, 1, 0);
	Function_22(&(Global_46972[2]), 462, 8.0f, 1, 0);
	Function_22(&(Global_46972[2]), 463, 8.0f, 1, 0);
	Function_25(&(Global_46972[3]));
	Global_46972[3] = Function_24("ped_bad_guys_local", 1);
	Function_22(&(Global_46972[3]), 410, 1.0f, 1, 0);
	Function_22(&(Global_46972[3]), 413, 4.0f, 1, 0);
	Function_22(&(Global_46972[3]), 406, 4.0f, 1, 0);
	Function_25(&(Global_46972[4]));
	Global_46972[4] = Function_24("ped_bad_guys_generic", 1);
	Function_22(&(Global_46972[4]), 500, 1.0f, 1, 0);
	Function_22(&(Global_46972[4]), 501, 1.0f, 1, 0);
	Function_22(&(Global_46972[4]), 499, 1.0f, 1, 0);
	Function_22(&(Global_46972[4]), 496, 1.0f, 1, 0);
	Function_22(&(Global_46972[4]), 497, 1.0f, 1, 0);
	Function_25(&(Global_46972[9]));
	Global_46972[9] = Function_24("ped_vehicle", 1);
	Function_22(&(Global_46972[9]), 1183, 4.0f, 1, 0);
	Function_22(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_22(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_22(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_22(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar5 = CREATE_POPULATION_SET(1);
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
	uVar6 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (IS_LAYOUTREF_VALID(&uVar6))
	{
		uVar7 = FIND_VOLUME_IN_LAYOUT(&uVar6, "torv_crows_set");
		if (IS_VOLUME_VALID(&uVar7))
		{
			Function_7(&uVar7, &bVar3, 6E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_birds_set to create population volumes");
		}
		if (1 & Global_39266[8])
		{
			uVar7 = FIND_VOLUME_IN_LAYOUT(&uVar6, "torv_fff");
			if (IS_VOLUME_VALID(&uVar7))
			{
				uVar8 = Function_6(&uVar7, &bVar0, 5, 1, 0, 0);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar8, 50.0f);
				Function_4(&uVar8);
			}
			else
			{
				LOG_ERROR("tor_pop: Cannot find torv_fff to create population volumes");
			}
		}
		uVar7 = FIND_VOLUME_IN_LAYOUT(&uVar6, "torv_snakes_set");
		if (IS_VOLUME_VALID(&uVar7))
		{
			Function_6(&uVar7, &bVar1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_snakes_set to create population volumes");
		}
		uVar7 = FIND_VOLUME_IN_LAYOUT(&uVar6, "torv_vultures_set");
		if (IS_VOLUME_VALID(&uVar7))
		{
			Function_3(&uVar7, &bVar2, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_vultures_set to create population volumes");
		}
		uVar7 = FIND_VOLUME_IN_LAYOUT(&uVar6, "torv_dogs_set");
		if (IS_VOLUME_VALID(&uVar7))
		{
			Function_6(&uVar7, &bVar4, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_dogs_set to create population volumes");
		}
		uVar7 = FIND_VOLUME_IN_LAYOUT(&uVar6, "torv_region_set");
		if (IS_VOLUME_VALID(&uVar7))
		{
			Function_7(&uVar7, &uVar5, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agvv_pop: Cannot find henv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("tor_pop: Cannot find layout Torquemada_layout to create population volumes");
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
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_9("Finished loading Torquemada population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xEEC / 3820
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xEFD / 3837
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

var Function_3(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, bool bParam6) //Position: 0xF55 / 3925
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

void Function_4(int iParam0) //Position: 0xFE7 / 4071
{
	Function_5(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(bool bParam0) //Position: 0x1081 / 4225
{
	SET_ZONE_PRIORITY(&bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&bParam0, 0, 0);
	return;
}

var Function_6(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x10A4 / 4260
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

var Function_7(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1134 / 4404
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

bool Function_8(int iParam0) //Position: 0x11C4 / 4548
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0) //Position: 0x11E0 / 4576
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

bool Function_10(var uParam0, int iParam1) //Position: 0x1220 / 4640
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x123D / 4669
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x124E / 4686
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

var Function_13(int iParam0) //Position: 0x12CC / 4812
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

var Function_14(int iParam0) //Position: 0x1338 / 4920
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

int Function_15(int iParam0) //Position: 0x13A4 / 5028
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		return 0;
	}
	iVar0 = Function_19(iParam0);
	if (!Function_16(Function_19(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_16(int iParam0) //Position: 0x13DA / 5082
{
	if (!Function_18(iParam0))
	{
		return 0;
	}
	if (!Function_17(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_17(int iParam0) //Position: 0x13FE / 5118
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_18(int iParam0) //Position: 0x1413 / 5139
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_19(int iParam0) //Position: 0x142A / 5162
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_20(int iParam0) //Position: 0x1444 / 5188
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_21(var uParam0, bool bParam1) //Position: 0x145A / 5210
{
	int iVar0;
	
	iVar0 = Function_19(uParam0);
	if (!Function_18(iVar0))
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

var Function_22(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1498 / 5272
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

var Function_23(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x151A / 5402
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_22(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_24(bool bParam0, int iParam1) //Position: 0x1561 / 5473
{
	return CREATE_NAMED_POPULATION_SET(&bParam0, &iParam1);
}

void Function_25(int iParam0) //Position: 0x1570 / 5488
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_26(char* cParam0) //Position: 0x157D / 5501
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

