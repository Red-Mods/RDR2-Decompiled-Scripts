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
	var uVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_19("Loading plainview's Point population file", 3);
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
	Function_15(&(Global_46972[0]), 34, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 46, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 49, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 50, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 53, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 54, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 56, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 74, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 136, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 143, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 173, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 174, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 175, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 22, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 202, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]));
	Global_46972[1] = Function_17("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 48, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 64, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 73, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 78, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 87, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 199, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 203, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 204, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 230, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 312, 2.0f, 0, 0);
	Function_18(&(Global_46972[5]));
	Global_46972[5] = Function_17("animal_wilderness", 1);
	Function_12(&(Global_46972[5]), 1057, 2.0f, 14, 1, 0);
	Function_15(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_15(&(Global_46972[5]), 1079, 4.0f, 0, 0);
	Function_15(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_12(&(Global_46972[5]), 1128, 8.0f, 30, 1, 0);
	Function_12(&(Global_46972[5]), 1082, 8.0f, 33, 1, 0);
	Function_12(&(Global_46972[5]), 1084, 8.0f, 33, 1, 0);
	Function_18(&(Global_46972[11]));
	Global_46972[11] = Function_17("animal_predator", 1);
	Function_15(&(Global_46972[11]), 1061, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1062, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1063, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1088, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1089, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1090, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_18(&(Global_46972[10]));
	Global_46972[10] = Function_17("animal_hunt", 0);
	Function_18(&(Global_46972[8]));
	Global_46972[8] = Function_17("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1060, 1.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1057, 5.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	uVar0 = Function_17("crows", 0);
	Function_12(&uVar0, 1131, 6.0f, 14, 0, 0);
	Function_18(&(Global_46972[14]));
	Global_46972[14] = Function_17("birds_trees", 1);
	Function_15(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	uVar1 = Function_17("Buisness", 0);
	Function_12(&uVar1, 87, 10.0f, 14, 0, 0);
	Function_12(&uVar1, 230, 10.0f, 14, 0, 0);
	Function_12(&uVar1, 16, 10.0f, 14, 0, 0);
	Function_12(&uVar1, 136, 10.0f, 14, 0, 0);
	uVar2 = Function_17("Business_night", 0);
	Function_12(&uVar2, 87, 1.0f, 48, 1, 0);
	Function_12(&uVar2, 230, 1.0f, 48, 1, 0);
	Function_12(&uVar2, 16, 1.0f, 48, 1, 0);
	Function_12(&uVar2, 136, 1.0f, 48, 1, 0);
	uVar3 = Function_17("People_night", 0);
	Function_12(&uVar3, 203, 1.0f, 52, 1, 0);
	Function_12(&uVar3, 204, 1.0f, 52, 1, 0);
	Function_12(&uVar3, 87, 1.0f, 52, 1, 0);
	Function_12(&uVar3, 48, 1.0f, 52, 1, 0);
	Function_12(&uVar3, 230, 1.0f, 52, 1, 0);
	Function_12(&uVar3, 312, 1.0f, 52, 1, 0);
	uVar4 = Function_17("generic_workers", 0);
	Function_12(&uVar4, 152, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 153, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 154, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 155, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 164, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 165, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 166, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 167, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 43, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 41, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 40, 1.0f, 14, 1, 0);
	Function_12(&uVar4, 38, 1.0f, 14, 1, 0);
	if (1 & Global_39266[4])
	{
		bVar5 = Function_17("pop_armwrestling", 0);
		Function_15(&bVar5, 506, 1.0f, 0, 0);
		Function_15(&bVar5, 486, 1.0f, 0, 0);
		Function_15(&bVar5, 297, 1.0f, 0, 0);
		Function_15(&bVar5, 111, 1.0f, 0, 0);
		Function_15(&bVar5, 437, 1.0f, 0, 0);
		Function_15(&bVar5, 138, 1.0f, 0, 0);
	}
	uVar6 = Function_17("snakes", 0);
	Function_12(&uVar6, 1057, 8.0f, 14, 0, 0);
	uVar7 = Function_17("vultures", 0);
	Function_12(&uVar7, 1128, 8.0f, 14, 0, 0);
	Function_12(&uVar7, 1129, 7.0f, 14, 0, 0);
	Function_12(&uVar7, 1130, 8.0f, 14, 0, 0);
	uVar8 = Function_17("owls", 0);
	Function_12(&uVar8, 1137, 10.0f, 49, 0, 0);
	Function_12(&uVar8, 1138, 10.0f, 49, 0, 0);
	Function_12(&uVar8, 1139, 10.0f, 49, 0, 0);
	bVar9 = Function_17("dogs", 0);
	Function_15(&bVar9, 1035, 10.0f, 0, 0);
	Function_15(&bVar9, 1033, 10.0f, 0, 0);
	Function_15(&bVar9, 1038, 10.0f, 0, 0);
	uVar10 = Function_17("racoons", 0);
	Function_12(&uVar10, 1082, 10.0f, 49, 0, 0);
	Function_12(&uVar10, 1082, 10.0f, 49, 0, 0);
	Function_12(&uVar10, 1082, 10.0f, 49, 0, 0);
	uVar11 = Function_17("rabbits", 0);
	Function_12(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_12(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_12(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_18(&(Global_46972[7]));
	Global_46972[7] = Function_17("animal_bird", 0);
	Function_12(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_11(&(Global_46972[5]), 4E-05f);
	Function_18(&(Global_46972[2]));
	Global_46972[2] = Function_17("ped_law", 1);
	Function_15(&(Global_46972[2]), 436, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 441, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 442, 8.0f, 1, 0);
	Function_18(&(Global_46972[3]));
	Global_46972[3] = Function_17("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 487, 1.0f, 1, 0);
	Function_15(&(Global_46972[3]), 486, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 488, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 489, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 490, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 491, 4.0f, 1, 0);
	Function_18(&(Global_46972[4]));
	Global_46972[4] = Function_17("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_15(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_15(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_15(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_18(&(Global_46972[9]));
	Global_46972[9] = Function_17("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1183, 2.0f, 1, 0);
	Function_15(&(Global_46972[9]), 1188, 2.0f, 1, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar12 = CREATE_POPULATION_SET(1);
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
	uVar13 = FIND_NAMED_LAYOUT("Plainview_layout");
	if (IS_LAYOUTREF_VALID(&uVar13))
	{
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_vultures_set");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_7(&uVar14, &uVar7, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_vultures_set to create population volumes");
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_crows_set");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_7(&uVar14, &uVar0, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_crows_set to create population volumes");
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_people");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_6(&uVar14, &uVar1, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_people to create population volumes");
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_cards");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_6(&uVar14, &uVar2, 1, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_cards to create population volumes");
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_fires_set");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_6(&uVar14, &uVar3, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_fires_set to create population volumes");
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_workers_set");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_6(&uVar14, &uVar4, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_workers_set to create population volumes");
		}
		if (1 & Global_39266[4])
		{
			uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_armwrestling");
			uVar15 = Function_5(&uVar14, &bVar5, 3, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar15))
			{
				Function_3(&uVar15);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar15, 50.0f);
			}
			else
			{
				LOG_ERROR("pln_pop: Cannot find plnv_armwrestling to create population volumes");
			}
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_snakes_set");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_7(&uVar14, &uVar6, 0,001f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_snakes_set to create population volumes");
		}
		uVar14 = FIND_VOLUME_IN_LAYOUT(&uVar13, "plnv_region");
		if (IS_VOLUME_VALID(&uVar14))
		{
			Function_7(&uVar14, &uVar12, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find plnv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("pln_pop: Cannot find one of the volumes to create population volumes");
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
	Function_9("Finished loading plainview's Point population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x138F / 5007
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x13A0 / 5024
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

void Function_3(int iParam0) //Position: 0x13F8 / 5112
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

void Function_4(bool bParam0) //Position: 0x14AE / 5294
{
	SET_ZONE_PRIORITY(&bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&bParam0, 0, 0);
	return;
}

var Function_5(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x14D1 / 5329
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, bParam2);
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

var Function_6(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1561 / 5473
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

var Function_7(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x15F3 / 5619
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

bool Function_8(int iParam0) //Position: 0x1683 / 5763
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0) //Position: 0x169F / 5791
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

bool Function_10(var uParam0, int iParam1) //Position: 0x16DF / 5855
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x16FC / 5884
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x170D / 5901
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

var Function_13(int iParam0) //Position: 0x178B / 6027
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

var Function_14(int iParam0) //Position: 0x17F7 / 6135
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

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1863 / 6243
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x18E5 / 6373
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

var Function_17(var uParam0, int iParam1) //Position: 0x192C / 6444
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_18(int iParam0) //Position: 0x193B / 6459
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_19(char* cParam0) //Position: 0x1948 / 6472
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

