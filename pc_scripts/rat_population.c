//Decompiled with MagicRDR v1.0
//Function Count : 21
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
	bool bVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_20("Loading Rathskeller Fork population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_19("crows", 0);
	Function_16(&uVar0, 1132, 10.0f, 14, 0, 0);
	Function_16(&uVar0, 1133, 10.0f, 14, 0, 0);
	bVar1 = Function_19("pigs", 0);
	Function_15(&bVar1, 1020, 10.0f, 0, 0);
	Function_15(&bVar1, 1021, 10.0f, 0, 0);
	Function_15(&bVar1, 1021, 10.0f, 0, 0);
	uVar2 = Function_19("whores", 0);
	Function_16(&uVar2, 70, 7.0f, 48, 0, 0);
	Function_16(&uVar2, 71, 7.0f, 48, 0, 0);
	Function_16(&uVar2, 72, 7.0f, 48, 0, 0);
	uVar3 = Function_19("saloon", 0);
	Function_16(&uVar3, 203, 8.0f, 48, 1, 0);
	Function_16(&uVar3, 136, 8.0f, 48, 1, 0);
	Function_16(&uVar3, 142, 8.0f, 48, 1, 0);
	Function_16(&uVar3, 143, 8.0f, 48, 1, 0);
	Function_16(&uVar3, 398, 8.0f, 48, 1, 0);
	Function_16(&uVar3, 487, 8.0f, 48, 1, 0);
	if (Global_39266[2])
	{
		bVar4 = Function_19("pop_blackjack", 1);
		Function_15(&bVar4, 104, 5.0f, 1, 0);
		Function_15(&bVar4, 80, 5.0f, 1, 0);
		Function_15(&bVar4, 135, 5.0f, 1, 0);
		Function_15(&bVar4, 142, 1.0f, 1, 0);
		Function_15(&bVar4, 202, 1.0f, 1, 0);
		Function_15(&bVar4, 204, 1.0f, 1, 0);
		Function_15(&bVar4, 486, 1.0f, 1, 0);
		Function_15(&bVar4, 487, 1.0f, 1, 0);
		Function_15(&bVar4, 286, 1.0f, 1, 0);
		Function_15(&bVar4, 425, 1.0f, 1, 0);
	}
	if (Global_39266[5])
	{
		bVar5 = Function_19("pop_horseshoes", 1);
		Function_15(&bVar5, 209, 1.0f, 1, 0);
		Function_15(&bVar5, 51, 1.0f, 1, 0);
		Function_15(&bVar5, 194, 1.0f, 1, 0);
		Function_15(&bVar5, 232, 1.0f, 1, 0);
		Function_15(&bVar5, 490, 1.0f, 1, 0);
	}
	uVar6 = Function_19("snakes", 0);
	Function_16(&uVar6, 1057, 8.0f, 14, 0, 0);
	uVar7 = Function_19("vultures", 0);
	Function_16(&uVar7, 1128, 8.0f, 14, 0, 0);
	Function_16(&uVar7, 1129, 7.0f, 14, 0, 0);
	Function_16(&uVar7, 1130, 8.0f, 14, 0, 0);
	uVar8 = Function_19("owls", 0);
	Function_16(&uVar8, 1137, 10.0f, 49, 0, 0);
	Function_16(&uVar8, 1138, 10.0f, 49, 0, 0);
	Function_16(&uVar8, 1139, 10.0f, 49, 0, 0);
	bVar9 = Function_19("dogs", 0);
	Function_15(&bVar9, 1038, 10.0f, 0, 0);
	Function_15(&bVar9, 1039, 10.0f, 0, 0);
	Function_15(&bVar9, 1040, 10.0f, 0, 0);
	uVar10 = Function_19("racoons", 0);
	Function_16(&uVar10, 1082, 10.0f, 49, 0, 0);
	Function_16(&uVar10, 1083, 10.0f, 49, 0, 0);
	Function_16(&uVar10, 1082, 10.0f, 49, 0, 0);
	uVar11 = Function_19("rabbits", 0);
	Function_16(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_16(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_16(&uVar11, 1078, 10.0f, 49, 0, 0);
	bVar12 = Function_19("chickens", 0);
	Function_16(&bVar12, 1015, 100.0f, 15, 0, 0);
	Function_16(&bVar12, 1016, 100.0f, 15, 0, 0);
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_19("animal_horse", 4);
	Function_13(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_19("animal_horse_unsaddled", 0);
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
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_19("ped_wilderness", Global_47149);
	Function_15(&(Global_46972[0]), 33, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 34, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 49, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 50, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 53, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 54, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 56, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 78, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 136, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 153, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 173, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 174, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 173, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 202, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_19("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 48, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 55, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 64, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 73, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 74, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 87, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 199, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 203, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 230, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 312, 2.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_19("animal_wilderness", 1);
	Function_16(&(Global_46972[5]), 980, 9.0f, 30, 1, 0);
	Function_16(&(Global_46972[5]), 976, 8.0f, 33, 1, 0);
	Function_16(&(Global_46972[5]), 1128, 8.0f, 30, 1, 0);
	Function_16(&(Global_46972[5]), 1057, 2.0f, 14, 1, 0);
	Function_16(&(Global_46972[5]), 1050, 2.0f, 30, 0, 0);
	Function_16(&(Global_46972[5]), 1050, 2.0f, 30, 0, 0);
	Function_16(&(Global_46972[5]), 1051, 2.0f, 30, 0, 0);
	Function_16(&(Global_46972[5]), 1052, 2.0f, 30, 0, 0);
	Function_16(&(Global_46972[5]), 1052, 2.0f, 30, 0, 0);
	Function_16(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_16(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_16(&(Global_46972[5]), 1051, 3.0f, 33, 0, 0);
	Function_16(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_16(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_16(&(Global_46972[5]), 1084, 12.0f, 33, 0, 0);
	Function_16(&(Global_46972[5]), 1082, 12.0f, 33, 0, 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_19("animal_predator", 1);
	Function_15(&(Global_46972[11]), 1088, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1089, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1090, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1061, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1062, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1063, 2.0f, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_19("animal_hunt", 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_19("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1008, 6.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1009, 6.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1010, 6.0f, 1, 0);
	Function_15(&(Global_46972[8]), 1011, 6.0f, 1, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_19("animal_bird", 1);
	Function_16(&(Global_46972[7]), 1131, 2.0f, 15, 0, 0);
	Function_16(&(Global_46972[7]), 1135, 1.0f, 15, 0, 0);
	Function_16(&(Global_46972[7]), 1136, 1.0f, 15, 0, 0);
	Function_16(&(Global_46972[7]), 1136, 1.0f, 15, 0, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_19("birds_trees", 1);
	Function_15(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_12(&(Global_46972[5]), 4E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_19("ped_law", 1);
	Function_15(&(Global_46972[2]), 436, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 441, 8.0f, 1, 0);
	Function_15(&(Global_46972[2]), 442, 8.0f, 1, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_19("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 487, 1.0f, 1, 0);
	Function_15(&(Global_46972[3]), 486, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 488, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 489, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 490, 4.0f, 1, 0);
	Function_15(&(Global_46972[3]), 491, 4.0f, 1, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_19("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_15(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_15(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_15(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_19("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1183, 2.0f, 1, 0);
	Function_15(&(Global_46972[9]), 1188, 2.0f, 1, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar13 = CREATE_POPULATION_SET(1);
	while (!Function_11(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_10("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar14 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (IS_LAYOUTREF_VALID(&uVar14))
	{
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_pigs_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_8(&uVar15, &bVar1, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_pigs_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_horses");
		if (IS_VOLUME_VALID(&uVar15))
		{
			uVar16 = Function_8(&uVar15, &(Global_46972[15]), 4, 1, 0, 1);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar16, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_horses to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_vultures_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar7, 0,0005f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_vultures_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_crows_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar0, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_crows_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_dogs_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_8(&uVar15, &bVar9, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_vultures_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_chickens_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_8(&uVar15, &bVar12, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find ratv_chickens_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_raccoons_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar10, 0,00025f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_raccoons_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_owls_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar8, 0,0005f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_owls_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_rabbits_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar11, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_rabbits_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_snakes_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar6, 1E-05f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_snakes_set to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_saloon");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_6(&uVar15, &(Global_46972[1]), 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_saloon");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_6(&uVar15, &uVar3, 3, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_whores_set");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_6(&uVar15, &uVar2, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		if (Global_39266[2])
		{
			uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_BlackJack");
			uVar17 = Function_8(&uVar15, &bVar4, 2, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar17))
			{
				Function_5(&uVar17);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar17, 20.0f);
			}
			else
			{
				LOG_ERROR("rat_pop: Cannot find ratv_BlackJack to create population volumes");
			}
		}
		if (Global_39266[5])
		{
			uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_HorseShoePit");
			uVar18 = Function_8(&uVar15, &bVar5, 1, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar18))
			{
				Function_3(&uVar18);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar18, 50.0f);
			}
			else
			{
				LOG_ERROR("rat_pop: Cannot find ratv_HorseShoePit to create population volumes");
			}
		}
		uVar15 = FIND_VOLUME_IN_LAYOUT(&uVar14, "ratv_region");
		if (IS_VOLUME_VALID(&uVar15))
		{
			Function_7(&uVar15, &uVar13, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find ratv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("rat_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_11(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_10("Finished loading Rathskeller Fork population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x176E / 5998
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x177F / 6015
{
	int iVar0;
	
	if (!Function_9(1))
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

void Function_3(int iParam0) //Position: 0x17D7 / 6103
{
	Function_4(&iParam0);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 1);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_horseshoe");
	return;
}

void Function_4(int iParam0) //Position: 0x1808 / 6152
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_5(int iParam0) //Position: 0x182B / 6187
{
	Function_4(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_blackjack");
	return;
}

var Function_6(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1854 / 6228
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

var Function_7(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x18E6 / 6374
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

var Function_8(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1976 / 6518
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

bool Function_9(int iParam0) //Position: 0x1A06 / 6662
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x1A22 / 6690
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x1A62 / 6754
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x1A7F / 6783
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_13(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x1A90 / 6800
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(&bParam0, bParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&bParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

void Function_14(int iParam0) //Position: 0x1AD7 / 6871
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1AE4 / 6884
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1B66 / 7014
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_18(iParam3), Function_17(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_17(int iParam0) //Position: 0x1BE4 / 7140
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

var Function_18(int iParam0) //Position: 0x1C50 / 7248
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

var Function_19(var uParam0, int iParam1) //Position: 0x1CBC / 7356
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_20(char* cParam0) //Position: 0x1CCB / 7371
{
	if (!Function_9(128))
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

