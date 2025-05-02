//Decompiled with MagicRDR v1.0
//Function Count : 28
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
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_27("Loading Hennigan's Ranch population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_26("ped_generic", 0);
	Function_23(&bVar0, 170, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 171, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 38, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 39, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 172, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 173, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 174, 8.0f, 14, 0, 0);
	Function_23(&bVar0, 1037, 1.0f, 14, 0, 0);
	uVar1 = Function_26("ped_worker", 0);
	Function_23(&uVar1, 170, 8.0f, 14, 0, 0);
	Function_23(&uVar1, 171, 8.0f, 14, 0, 0);
	Function_23(&uVar1, 38, 8.0f, 14, 0, 0);
	Function_23(&uVar1, 39, 8.0f, 14, 0, 0);
	Function_23(&uVar1, 172, 8.0f, 14, 0, 0);
	Function_23(&uVar1, 173, 8.0f, 14, 0, 0);
	Function_23(&uVar1, 174, 8.0f, 14, 0, 0);
	uVar2 = Function_26("ped_workerN", 0);
	Function_23(&uVar2, 170, 8.0f, 16, 0, 0);
	Function_23(&uVar2, 171, 8.0f, 16, 0, 0);
	Function_23(&uVar2, 38, 8.0f, 16, 0, 0);
	Function_23(&uVar2, 39, 8.0f, 16, 0, 0);
	Function_23(&uVar2, 172, 8.0f, 16, 0, 0);
	Function_23(&uVar2, 173, 8.0f, 16, 0, 0);
	Function_23(&uVar2, 174, 8.0f, 16, 0, 0);
	uVar3 = Function_26("ped_prisoner", 0);
	Function_22(&uVar3, 170, 8.0f, 0, 0);
	Function_22(&uVar3, 171, 8.0f, 0, 0);
	Function_22(&uVar3, 38, 8.0f, 0, 0);
	Function_22(&uVar3, 39, 8.0f, 0, 0);
	Function_22(&uVar3, 172, 8.0f, 0, 0);
	Function_22(&uVar3, 173, 8.0f, 0, 0);
	Function_22(&uVar3, 174, 8.0f, 0, 0);
	if (Global_39266[0])
	{
		if (Function_21(22, 0))
		{
			bVar4 = Function_26("nped_poker", 0);
			Function_20(&bVar4, 37, 1.0f, 0, 0);
			Function_20(&bVar4, 39, 1.0f, 0, 0);
			Function_20(&bVar4, 87, 1.0f, 0, 0);
			Function_20(&bVar4, 167, 1.0f, 0, 0);
			Function_20(&bVar4, 550, 1.0f, 0, 0);
			Function_20(&bVar4, 438, 1.0f, 0, 0);
		}
		else
		{
			bVar4 = Function_26("nped_poker", 0);
			Function_20(&bVar4, 37, 1.0f, 0, 0);
			Function_20(&bVar4, 39, 1.0f, 0, 0);
			Function_20(&bVar4, 87, 1.0f, 0, 0);
			Function_20(&bVar4, 167, 1.0f, 0, 0);
			Function_20(&bVar4, 438, 1.0f, 0, 0);
		}
	}
	if (Global_39266[5])
	{
		bVar5 = Function_26("ped_horseshoes", 0);
		Function_20(&bVar5, 107, 1.0f, 0, 0);
		Function_20(&bVar5, 35, 1.0f, 0, 0);
		Function_20(&bVar5, 85, 1.0f, 0, 0);
		Function_20(&bVar5, 212, 1.0f, 0, 0);
	}
	Function_19(&(Global_46972[6]));
	Global_46972[6] = Function_26("animal_horse", 4);
	if (!Function_13(6))
	{
		Function_22(&(Global_46972[6]), 976, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 977, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 983, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 984, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 985, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 986, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 987, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 988, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 989, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 990, 100.0f, 0, 3);
		Function_22(&(Global_46972[6]), 991, 100.0f, 0, 3);
	}
	Function_19(&(Global_46972[15]));
	Global_46972[15] = Function_26("animal_horse_unsaddled", 0);
	if (!Function_13(6))
	{
		Function_20(&(Global_46972[15]), 976, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 977, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 983, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 984, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 985, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 986, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 987, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 988, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 989, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 990, 100.0f, 0, 0);
		Function_20(&(Global_46972[15]), 991, 100.0f, 0, 0);
	}
	Function_19(&(Global_46972[0]));
	Global_46972[0] = Function_26("ped_wilderness", Global_47149);
	Function_20(&(Global_46972[0]), 22, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 77, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 49, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 53, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 79, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 202, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 56, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 51, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 112, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 73, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 137, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 140, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 141, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 142, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 203, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 235, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 178, 8.0f, 0, 0);
	Function_20(&(Global_46972[0]), 202, 8.0f, 0, 0);
	Function_19(&(Global_46972[10]));
	Global_46972[10] = Function_26("animal_hunt", 0);
	Function_20(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_19(&(Global_46972[13]));
	Global_46972[13] = Function_26("animal_hunted", 0);
	Function_20(&(Global_46972[13]), 1061, 3.0f, 0, 0);
	Function_20(&(Global_46972[13]), 1062, 3.0f, 0, 0);
	Function_20(&(Global_46972[13]), 1063, 3.0f, 0, 0);
	Function_19(&(Global_46972[12]));
	Global_46972[12] = Function_26("animal_prey", 0);
	Function_20(&(Global_46972[11]), 1078, 3.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1079, 3.0f, 0, 0);
	Function_19(&(Global_46972[11]));
	Global_46972[11] = Function_26("animal_predator", 1);
	Function_20(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1061, 2.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1062, 2.0f, 0, 0);
	Function_20(&(Global_46972[11]), 1063, 2.0f, 0, 0);
	Function_19(&(Global_46972[1]));
	Global_46972[1] = Function_26("ped_traveller", 3);
	Function_20(&(Global_46972[1]), 48, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 64, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 74, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 78, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 87, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 89, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 90, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 199, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 204, 1.0f, 0, 0);
	Function_20(&(Global_46972[1]), 311, 1.0f, 0, 0);
	bVar6 = Function_26("ped_dayTraveller", 0);
	Function_23(&bVar6, 87, 8.0f, 30, 0, 0);
	Function_23(&bVar6, 89, 8.0f, 30, 0, 0);
	Function_23(&bVar6, 90, 8.0f, 30, 0, 0);
	Function_23(&bVar6, 52, 8.0f, 30, 0, 0);
	Function_23(&bVar6, 54, 8.0f, 30, 0, 0);
	Function_19(&(Global_46972[5]));
	Global_46972[5] = Function_26("animal_wilderness", 1);
	Function_23(&(Global_46972[5]), 1128, 9.0f, 14, 0, 0);
	Function_23(&(Global_46972[5]), 1057, 3.0f, 14, 0, 0);
	Function_23(&(Global_46972[5]), 1084, 8.0f, 33, 0, 0);
	Function_23(&(Global_46972[5]), 1082, 8.0f, 33, 0, 0);
	Function_19(&(Global_46972[8]));
	Global_46972[8] = Function_26("animal_herd", 1);
	Function_20(&(Global_46972[8]), 1008, 6.0f, 0, 0);
	Function_20(&(Global_46972[8]), 1009, 6.0f, 0, 0);
	Function_20(&(Global_46972[8]), 1011, 6.0f, 0, 0);
	bVar7 = Function_26("bulls", 0);
	Function_20(&bVar7, 1012, 100.0f, 0, 0);
	bVar0 = Function_26("coyote_den", 0);
	Function_20(&bVar0, 1049, 100.0f, 0, 0);
	Function_19(&(Global_46972[7]));
	Global_46972[7] = Function_26("animal_bird", 1);
	Function_23(&(Global_46972[7]), 1131, 9.0f, 14, 0, 0);
	Function_23(&(Global_46972[7]), 1134, 4.0f, 14, 0, 0);
	Function_23(&(Global_46972[7]), 1135, 4.0f, 14, 0, 0);
	Function_23(&(Global_46972[7]), 1136, 4.0f, 14, 0, 0);
	Function_23(&(Global_46972[7]), 1145, 4.0f, 14, 0, 0);
	Function_19(&(Global_46972[14]));
	Global_46972[14] = Function_26("birds_trees", 1);
	Function_20(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_20(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_20(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_20(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_20(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_20(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar8 = Function_26("chickens", 0);
	Function_23(&bVar8, 1015, 100.0f, 15, 0, 0);
	Function_23(&bVar8, 1016, 100.0f, 15, 0, 0);
	bVar9 = Function_26("dogs", 0);
	Function_20(&bVar9, 1037, 100.0f, 0, 0);
	Function_20(&bVar9, 1038, 100.0f, 0, 0);
	Function_20(&bVar9, 1039, 100.0f, 0, 0);
	bVar10 = Function_26("nped_women", 0);
	Function_23(&bVar10, 73, 100.0f, 15, 0, 0);
	Function_23(&bVar10, 74, 100.0f, 15, 0, 0);
	Function_23(&bVar10, 56, 100.0f, 15, 0, 0);
	Function_23(&bVar10, 55, 100.0f, 15, 0, 0);
	Function_12(&(Global_46972[5]), 2E-05f);
	Function_19(&(Global_46972[2]));
	Global_46972[2] = Function_26("ped_law", 1);
	Function_20(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 441, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 442, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 424, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 425, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 426, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 427, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 428, 8.0f, 0, 0);
	Function_20(&(Global_46972[2]), 429, 8.0f, 0, 0);
	Function_19(&(Global_46972[3]));
	Global_46972[3] = Function_26("ped_bad_guys_local", 1);
	Function_20(&(Global_46972[3]), 477, 1.0f, 0, 0);
	Function_20(&(Global_46972[3]), 478, 1.0f, 0, 0);
	Function_20(&(Global_46972[3]), 479, 1.0f, 0, 0);
	Function_19(&(Global_46972[4]));
	Global_46972[4] = Function_26("ped_bad_guys_generic", 1);
	Function_20(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_20(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_20(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_20(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_20(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_20(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_20(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_20(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_20(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_19(&(Global_46972[9]));
	Global_46972[9] = Function_26("ped_vehicle", 1);
	Function_20(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_20(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_20(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_20(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_20(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	Function_20(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_20(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar11 = CREATE_POPULATION_SET(1);
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
	uVar12 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (IS_LAYOUTREF_VALID(&uVar12))
	{
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "Henv_Townpop_Set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &uVar1, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_townpop01 to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_cell01");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &uVar3, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henFarmerPop to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_lawGuys");
		if (IS_VOLUME_VALID(&uVar13))
		{
			uVar14 = Function_8(&uVar13, &(Global_46972[2]), 1, 1, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar14))
			{
				SET_ZONE_PRIORITY(&uVar14, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar14, 20.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar14, 1);
			}
			else
			{
				LOG_ERROR("hen_pop: Cannot find henv_lawGuys to create population volumes");
			}
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_nightPop");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &uVar2, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_nightPop to create population volumes");
		}
		if (Global_39266[0])
		{
			uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_Poker");
			uVar15 = Function_7(&uVar13, &bVar4, 5, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar15))
			{
				Function_6(&uVar15);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar15, 20.0f);
			}
			else
			{
				LOG_ERROR("hen_pop: Cannot find henv_Poker to create population volumes");
			}
		}
		if (Global_39266[5])
		{
			uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_HorseShoePit");
			uVar16 = Function_7(&uVar13, &bVar5, 1, 1, 1, 0);
			if (IS_ZONE_VALID(&uVar16))
			{
				Function_4(&uVar16);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar16, 50.0f);
			}
			else
			{
				LOG_ERROR("hen_pop: Cannot find henv_HorseShoePit to create population volumes");
			}
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_pop_chickens_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &bVar8, 4, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_pop_chickens_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_chickenCoop_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &bVar8, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_pop_chickens_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_horses_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &(Global_46972[15]), 7, 11, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_horsepop01 to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_women");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &bVar10, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_women to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_trainstation_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &bVar6, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_trainstation_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "hen_cows_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &(Global_46972[8]), 7, 11, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "hen_cows_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_7(&uVar13, &bVar7, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find hen_cows_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "hen_dogs_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_8(&uVar13, &bVar9, 1, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find hen_dogs_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "hen_birds_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_3(&uVar13, &(Global_46972[7]), 9E-06f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find hen_birds_set to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_region");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_3(&uVar13, &uVar11, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_region to create population volumes");
		}
		uVar13 = FIND_VOLUME_IN_LAYOUT(&uVar12, "henv_null_set");
		if (IS_VOLUME_VALID(&uVar13))
		{
			Function_3(&uVar13, &uVar11, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_null_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("hen_pop: Cannot find one of the volumes to create population volumes");
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
	Function_10("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x19E3 / 6627
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x19F4 / 6644
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

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1A4C / 6732
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

void Function_4(int iParam0) //Position: 0x1ADC / 6876
{
	Function_5(&iParam0);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 1);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_horseshoe");
	return;
}

void Function_5(int iParam0) //Position: 0x1B0D / 6925
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x1B30 / 6960
{
	Function_5(&bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0, "fake_poker");
	return;
}

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1B55 / 6997
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

var Function_8(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1BE5 / 7141
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
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

bool Function_9(int iParam0) //Position: 0x1C77 / 7287
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x1C93 / 7315
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

bool Function_11(var uParam0, int iParam1) //Position: 0x1CD3 / 7379
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x1CF0 / 7408
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_13(int iParam0) //Position: 0x1D01 / 7425
{
	int iVar0;
	
	if (!Function_18(iParam0))
	{
		return 0;
	}
	iVar0 = Function_17(iParam0);
	if (!Function_14(Function_17(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_14(int iParam0) //Position: 0x1D37 / 7479
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_15(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_15(int iParam0) //Position: 0x1D5B / 7515
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0x1D70 / 7536
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_17(int iParam0) //Position: 0x1D87 / 7559
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x1DA1 / 7585
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_19(int iParam0) //Position: 0x1DB7 / 7607
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_20(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1DC4 / 7620
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

bool Function_21(var uParam0, bool bParam1) //Position: 0x1E46 / 7750
{
	int iVar0;
	
	iVar0 = Function_17(uParam0);
	if (!Function_16(iVar0))
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

var Function_22(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1E84 / 7812
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_20(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_23(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1ECB / 7883
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_25(iParam3), Function_24(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_24(int iParam0) //Position: 0x1F49 / 8009
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

var Function_25(int iParam0) //Position: 0x1FB5 / 8117
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

var Function_26(bool bParam0, int iParam1) //Position: 0x2021 / 8225
{
	return CREATE_NAMED_POPULATION_SET(&bParam0, &iParam1);
}

void Function_27(char* cParam0) //Position: 0x2030 / 8240
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

