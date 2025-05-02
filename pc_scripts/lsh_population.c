//Decompiled with MagicRDR v1.0
//Function Count : 20
//Statics Count : 4
//Natives Count : 50
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
	bool bVar4;
	var uVar5;
	var uVar6;
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
	Function_19("Loading Las Hermanas population file", 3);
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
	Function_15(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 321, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]));
	Global_46972[1] = Function_17("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 253, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 263, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 265, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 275, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 302, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 303, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 304, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 311, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 318, 1.0f, 0, 0);
	Function_18(&(Global_46972[5]));
	Global_46972[5] = Function_17("animal_wilderness", 1);
	Function_15(&(Global_46972[5]), 1078, 11.0f, 1, 0);
	Function_12(&(Global_46972[5]), 1050, 2.0f, 30, 0, 0);
	Function_12(&(Global_46972[5]), 1050, 2.0f, 30, 0, 0);
	Function_12(&(Global_46972[5]), 1051, 2.0f, 30, 0, 0);
	Function_12(&(Global_46972[5]), 1052, 2.0f, 30, 0, 0);
	Function_12(&(Global_46972[5]), 1052, 2.0f, 30, 0, 0);
	Function_12(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_12(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_12(&(Global_46972[5]), 1051, 3.0f, 33, 0, 0);
	Function_12(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_12(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_12(&(Global_46972[5]), 1128, 8.0f, 30, 1, 0);
	Function_15(&(Global_46972[5]), 1081, 10.0f, 0, 0);
	Function_12(&(Global_46972[5]), 1059, 2.0f, 14, 1, 0);
	Function_18(&(Global_46972[11]));
	Global_46972[11] = Function_17("animal_predator", 1);
	Function_15(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_18(&(Global_46972[10]));
	Global_46972[10] = Function_17("animal_hunt", 0);
	Function_18(&(Global_46972[8]));
	Global_46972[8] = Function_17("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1064, 1.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1057, 5.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	uVar0 = Function_17("chickens", 0);
	Function_12(&uVar0, 1015, 100.0f, 15, 0, 0);
	Function_12(&uVar0, 1017, 100.0f, 15, 0, 0);
	uVar1 = Function_17("refugees", 0);
	Function_12(&uVar1, 287, 3.0f, 10, 0, 0);
	Function_12(&uVar1, 62, 5.0f, 10, 0, 0);
	Function_12(&uVar1, 243, 5.0f, 10, 0, 0);
	Function_12(&uVar1, 320, 4.0f, 10, 0, 0);
	Function_12(&uVar1, 319, 4.0f, 10, 0, 0);
	Function_12(&uVar1, 313, 4.0f, 10, 0, 0);
	Function_12(&uVar1, 314, 4.0f, 10, 0, 0);
	Function_12(&uVar1, 63, 5.0f, 10, 0, 0);
	Function_12(&uVar1, 317, 5.0f, 2, 0, 0);
	uVar2 = Function_17("people", 0);
	Function_12(&uVar2, 287, 3.0f, 7, 0, 0);
	Function_12(&uVar2, 293, 2.0f, 7, 0, 0);
	Function_12(&uVar2, 292, 2.0f, 7, 0, 0);
	Function_12(&uVar2, 314, 5.0f, 7, 0, 0);
	Function_12(&uVar2, 313, 5.0f, 7, 0, 0);
	Function_12(&uVar2, 251, 3.0f, 7, 0, 0);
	Function_12(&uVar2, 297, 3.0f, 7, 0, 0);
	Function_12(&uVar2, 299, 3.0f, 7, 0, 0);
	uVar3 = Function_17("people1", 0);
	Function_12(&uVar3, 295, 3.0f, 24, 0, 0);
	Function_12(&uVar3, 296, 2.0f, 24, 0, 0);
	Function_12(&uVar3, 297, 2.0f, 24, 0, 0);
	Function_12(&uVar3, 314, 5.0f, 24, 0, 0);
	Function_12(&uVar3, 313, 5.0f, 24, 0, 0);
	Function_12(&uVar3, 319, 3.0f, 24, 0, 0);
	Function_12(&uVar3, 320, 3.0f, 24, 0, 0);
	Function_12(&uVar3, 251, 5.0f, 24, 0, 0);
	Function_12(&uVar3, 252, 5.0f, 24, 0, 0);
	if (1 & Global_39266[5])
	{
		bVar4 = Function_17("ped_horseshoes", 0);
		Function_15(&bVar4, 305, 1.0f, 0, 0);
		Function_15(&bVar4, 237, 1.0f, 0, 0);
		Function_15(&bVar4, 260, 1.0f, 0, 0);
		Function_15(&bVar4, 286, 1.0f, 0, 0);
		Function_15(&bVar4, 291, 1.0f, 0, 0);
		Function_15(&bVar4, 294, 1.0f, 0, 0);
	}
	uVar5 = Function_17("snakes", 0);
	Function_12(&uVar5, 1059, 8.0f, 14, 0, 0);
	uVar6 = Function_17("vultures", 0);
	Function_12(&uVar6, 1128, 10.0f, 14, 0, 0);
	bVar7 = Function_17("Mules", 0);
	Function_15(&bVar7, 1000, 10.0f, 0, 0);
	uVar8 = Function_17("Crows", 0);
	Function_12(&uVar8, 1131, 10.0f, 14, 0, 0);
	uVar9 = Function_17("Rabbits", 0);
	Function_12(&uVar9, 1078, 6,5f, 49, 0, 0);
	Function_18(&(Global_46972[7]));
	Global_46972[7] = Function_17("animal_bird", 1);
	Function_12(&(Global_46972[7]), 1131, 2.0f, 15, 0, 0);
	Function_12(&(Global_46972[7]), 1135, 1.0f, 15, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 1.0f, 15, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 1.0f, 15, 0, 0);
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
	Function_15(&(Global_46972[2]), 466, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 462, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 463, 8.0f, 1, 0);
	Function_18(&(Global_46972[3]));
	Global_46972[3] = Function_17("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 410, 1.0f, 1, 0);
	Function_15(&(Global_46972[3]), 413, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 406, 4.0f, 1, 0);
	Function_18(&(Global_46972[4]));
	Global_46972[4] = Function_17("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 500, 1.0f, 1, 0);
	Function_15(&(Global_46972[4]), 501, 1.0f, 1, 0);
	Function_15(&(Global_46972[4]), 499, 1.0f, 1, 0);
	Function_15(&(Global_46972[4]), 496, 1.0f, 1, 0);
	Function_15(&(Global_46972[4]), 497, 1.0f, 1, 0);
	Function_18(&(Global_46972[9]));
	Global_46972[9] = Function_17("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1185, 2.0f, 1, 0);
	Function_15(&(Global_46972[9]), 1184, 2.0f, 1, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar10 = CREATE_POPULATION_SET(1);
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
	uVar11 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (IS_LAYOUTREF_VALID(&uVar11))
	{
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_birds_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_7(&uVar12, &uVar8, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_birds_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_vulture_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_7(&uVar12, &uVar6, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_vulture_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_rabbits_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_7(&uVar12, &uVar9, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_rabbits_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_courtyard_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar3, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_courtyard_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_courtyard_west_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar3, 3, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_courtyard_west_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_church_bottom_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar1, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_church_bottom_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_office_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar1, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_office_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_night_set");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar3, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_night_set to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_trainStn");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar2, 1, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_trainStn to create population volumes");
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_customers");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_6(&uVar12, &uVar2, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_custmrs to create population volumes");
		}
		if (1 & Global_39266[5])
		{
			uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_HorseShoePit");
			uVar13 = Function_5(&uVar12, &bVar4, 1, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar13))
			{
				Function_3(&uVar13);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar13, 50.0f);
			}
			else
			{
				LOG_ERROR("lsh_pop: Cannot find lshv_HorseShoePit to create population volumes");
			}
		}
		uVar12 = FIND_VOLUME_IN_LAYOUT(&uVar11, "lshv_region");
		if (IS_VOLUME_VALID(&uVar12))
		{
			Function_7(&uVar12, &uVar10, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find henv_region to create population volumes");
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
	Function_9("Finished loading Las Hermanas population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x13C6 / 5062
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x13D7 / 5079
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

void Function_3(int iParam0) //Position: 0x142F / 5167
{
	Function_4(&iParam0);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 1);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_horseshoe");
	return;
}

void Function_4(bool bParam0) //Position: 0x1460 / 5216
{
	SET_ZONE_PRIORITY(&bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&bParam0, 0, 0);
	return;
}

var Function_5(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1483 / 5251
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, iParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &uParam3);
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

var Function_6(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1513 / 5395
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

var Function_7(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x15A5 / 5541
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

bool Function_8(int iParam0) //Position: 0x1635 / 5685
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0) //Position: 0x1651 / 5713
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

bool Function_10(var uParam0, int iParam1) //Position: 0x1691 / 5777
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x16AE / 5806
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x16BF / 5823
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

var Function_13(int iParam0) //Position: 0x173D / 5949
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_14(int iParam0) //Position: 0x17A9 / 6057
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1815 / 6165
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1897 / 6295
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

var Function_17(var uParam0, int iParam1) //Position: 0x18DE / 6366
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_18(int iParam0) //Position: 0x18ED / 6381
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_19(char* cParam0) //Position: 0x18FA / 6394
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

