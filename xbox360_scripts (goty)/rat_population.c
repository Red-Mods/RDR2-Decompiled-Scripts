//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 51
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
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_21("Loading Rathskeller Fork population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_20("crows", 0);
	Function_17(&uVar0, 1132, 10.0f, 14, 0, 0);
	Function_17(&uVar0, 1133, 10.0f, 14, 0, 0);
	uVar1 = Function_20("pigs", 0);
	Function_16(&uVar1, 1020, 10.0f, 0, 0);
	Function_16(&uVar1, 1021, 10.0f, 0, 0);
	Function_16(&uVar1, 1021, 10.0f, 0, 0);
	uVar2 = Function_20("whores", 0);
	Function_17(&uVar2, 70, 7.0f, 48, 0, 0);
	Function_17(&uVar2, 71, 7.0f, 48, 0, 0);
	Function_17(&uVar2, 72, 7.0f, 48, 0, 0);
	uVar3 = Function_20("saloon", 0);
	Function_17(&uVar3, 203, 8.0f, 48, 1, 0);
	Function_17(&uVar3, 136, 8.0f, 48, 1, 0);
	Function_17(&uVar3, 142, 8.0f, 48, 1, 0);
	Function_17(&uVar3, 143, 8.0f, 48, 1, 0);
	Function_17(&uVar3, 398, 8.0f, 48, 1, 0);
	Function_17(&uVar3, 487, 8.0f, 48, 1, 0);
	if (!Function_15())
	{
		if (Global_25974[2])
		{
			uVar4 = Function_20("pop_blackjack", 1);
			Function_16(&uVar4, 104, 5.0f, 1, 0);
			Function_16(&uVar4, 80, 5.0f, 1, 0);
			Function_16(&uVar4, 135, 5.0f, 1, 0);
			Function_16(&uVar4, 142, 1.0f, 1, 0);
			Function_16(&uVar4, 202, 1.0f, 1, 0);
			Function_16(&uVar4, 204, 1.0f, 1, 0);
			Function_16(&uVar4, 486, 1.0f, 1, 0);
			Function_16(&uVar4, 487, 1.0f, 1, 0);
			Function_16(&uVar4, 286, 1.0f, 1, 0);
			Function_16(&uVar4, 425, 1.0f, 1, 0);
		}
		if (Global_25974[5])
		{
			uVar5 = Function_20("pop_horseshoes", 1);
			Function_16(&uVar5, 209, 1.0f, 1, 0);
			Function_16(&uVar5, 51, 1.0f, 1, 0);
			Function_16(&uVar5, 194, 1.0f, 1, 0);
			Function_16(&uVar5, 232, 1.0f, 1, 0);
			Function_16(&uVar5, 490, 1.0f, 1, 0);
		}
	}
	uVar6 = Function_20("snakes", 0);
	Function_17(&uVar6, 1057, 8.0f, 14, 0, 0);
	uVar7 = Function_20("vultures", 0);
	Function_17(&uVar7, 1128, 8.0f, 14, 0, 0);
	Function_17(&uVar7, 1129, 7.0f, 14, 0, 0);
	Function_17(&uVar7, 1130, 8.0f, 14, 0, 0);
	uVar8 = Function_20("owls", 0);
	Function_17(&uVar8, 1137, 10.0f, 49, 0, 0);
	Function_17(&uVar8, 1138, 10.0f, 49, 0, 0);
	Function_17(&uVar8, 1139, 10.0f, 49, 0, 0);
	uVar9 = Function_20("dogs", 0);
	Function_16(&uVar9, 1038, 10.0f, 0, 0);
	Function_16(&uVar9, 1039, 10.0f, 0, 0);
	Function_16(&uVar9, 1040, 10.0f, 0, 0);
	uVar10 = Function_20("racoons", 0);
	Function_17(&uVar10, 1082, 10.0f, 49, 0, 0);
	Function_17(&uVar10, 1083, 10.0f, 49, 0, 0);
	Function_17(&uVar10, 1082, 10.0f, 49, 0, 0);
	uVar11 = Function_20("rabbits", 0);
	Function_17(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_17(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_17(&uVar11, 1078, 10.0f, 49, 0, 0);
	uVar12 = Function_20("chickens", 0);
	Function_17(&uVar12, 1015, 100.0f, 15, 0, 0);
	Function_17(&uVar12, 1016, 100.0f, 15, 0, 0);
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_20("animal_horse", 4);
	Function_13(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_13(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_20("animal_horse_unsaddled", 0);
	Function_16(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_20("ped_wilderness", Global_30840);
	Function_16(&(Global_30750[0]), 33, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 34, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 49, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 50, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 53, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 54, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 56, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 78, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 136, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 153, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 173, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 174, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 173, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 202, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_20("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 48, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 55, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 87, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 199, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 203, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 230, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 312, 2.0f, 0, 0);
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_20("animal_wilderness", 1);
	Function_17(&(Global_30750[5]), 980, 9.0f, 30, 1, 0);
	Function_17(&(Global_30750[5]), 976, 8.0f, 33, 1, 0);
	Function_17(&(Global_30750[5]), 1128, 8.0f, 30, 1, 0);
	Function_17(&(Global_30750[5]), 1057, 2.0f, 14, 1, 0);
	Function_17(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_17(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_17(&(Global_30750[5]), 1051, 2.0f, 30, 0, 0);
	Function_17(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_17(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_17(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_17(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_17(&(Global_30750[5]), 1051, 3.0f, 33, 0, 0);
	Function_17(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_17(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_17(&(Global_30750[5]), 1084, 12.0f, 33, 0, 0);
	Function_17(&(Global_30750[5]), 1082, 12.0f, 33, 0, 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_20("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1088, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1089, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1090, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1061, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1062, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1063, 2.0f, 0, 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_20("animal_hunt", 0);
	Function_14(&(Global_30750[8]));
	Global_30750[8] = Function_20("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1008, 6.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1009, 6.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1010, 6.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1011, 6.0f, 1, 0);
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_20("animal_bird", 1);
	Function_17(&(Global_30750[7]), 1131, 2.0f, 15, 0, 0);
	Function_17(&(Global_30750[7]), 1135, 1.0f, 15, 0, 0);
	Function_17(&(Global_30750[7]), 1136, 1.0f, 15, 0, 0);
	Function_17(&(Global_30750[7]), 1136, 1.0f, 15, 0, 0);
	Function_14(&(Global_30750[14]));
	Global_30750[14] = Function_20("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_12(Global_30750[5], 4E-05f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_20("ped_law", 1);
	Function_16(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 441, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_20("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 487, 1.0f, 1, 0);
	Function_16(&(Global_30750[3]), 486, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 488, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 489, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 490, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 491, 4.0f, 1, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_20("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_16(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_16(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_16(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_20("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1183, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1188, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar13 = CREATE_POPULATION_SET(1);
	while (!Function_11(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_10("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar14 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (IS_LAYOUTREF_VALID(bVar14))
	{
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_pigs_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_8(bVar15, uVar1, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_pigs_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_horses");
		if (IS_VOLUME_VALID(bVar15))
		{
			bVar16 = Function_8(bVar15, Global_30750[15], 4, 1, 0, 1);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar16, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_horses to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_vultures_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar7, 0.0005f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_vultures_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_crows_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar0, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_crows_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_dogs_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_8(bVar15, uVar9, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_vultures_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_chickens_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_8(bVar15, uVar12, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find ratv_chickens_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_raccoons_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar10, 0.00025f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_raccoons_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_owls_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar8, 0.0005f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_owls_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_rabbits_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar11, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_rabbits_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_snakes_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar6, 1E-05f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_snakes_set to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_saloon");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_6(bVar15, Global_30750[1], 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_saloon");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_6(bVar15, uVar3, 3, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_saloon to create population volumes");
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_whores_set");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_6(bVar15, uVar2, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("rat_pop: Cannot find ratv_whores_set to create population volumes");
		}
		if (!Function_15())
		{
			if (Global_25974[2])
			{
				bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_BlackJack");
				bVar17 = Function_8(bVar15, uVar4, 2, 1, 0, 0);
				if (IS_ZONE_VALID(bVar17))
				{
					Function_5(bVar17);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar17, 20.0f);
				}
				else
				{
					LOG_ERROR("rat_pop: Cannot find ratv_BlackJack to create population volumes");
				}
			}
			if (Global_25974[5])
			{
				bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_HorseShoePit");
				bVar18 = Function_8(bVar15, uVar5, 1, 1, 0, 0);
				if (IS_ZONE_VALID(bVar18))
				{
					Function_3(bVar18);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar18, 50.0f);
				}
				else
				{
					LOG_ERROR("rat_pop: Cannot find ratv_HorseShoePit to create population volumes");
				}
			}
		}
		bVar15 = FIND_VOLUME_IN_LAYOUT(bVar14, "ratv_region");
		if (IS_VOLUME_VALID(bVar15))
		{
			Function_7(bVar15, uVar13, 0.0f, 0, 0, 1);
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
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_11(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_10("Finished loading Rathskeller Fork population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1704 / 5892
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1713 / 5907
{
	int iVar0;
	
	if (!Function_9(1))
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

void Function_3(bool bParam0) //Position: 0x1768 / 5992
{
	Function_4(bParam0);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 1);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_horseshoe");
	return;
}

void Function_4(bool bParam0) //Position: 0x1795 / 6037
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_5(bool bParam0) //Position: 0x17B4 / 6068
{
	Function_4(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_blackjack");
	return;
}

var Function_6(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x17DA / 6106
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(bVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(bVar0, iParam4);
	if (bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(bVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(bVar0, !bParam6);
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

var Function_7(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x185C / 6236
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

var Function_8(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x18DC / 6364
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
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

bool Function_9(int iParam0) //Position: 0x195C / 6492
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x1978 / 6520
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x19B6 / 6582
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x19D2 / 6610
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x19E2 / 6626
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_14(var uParam0) //Position: 0x1A27 / 6695
{
	DESTROY_POPULATION_SET(*uParam0);
	return;
}

bool Function_15() //Position: 0x1A33 / 6707
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1A3C / 6716
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1AB8 / 6840
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_19(iParam3), Function_18(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_18(int iParam0) //Position: 0x1B30 / 6960
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

var Function_19(int iParam0) //Position: 0x1B9C / 7068
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

var Function_20(bool bParam0, int iParam1) //Position: 0x1C08 / 7176
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_21(bool bParam0, var uParam1) //Position: 0x1C15 / 7189
{
	if (!Function_9(128))
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

