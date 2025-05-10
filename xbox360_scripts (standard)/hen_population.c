//Decompiled with MagicRDR v1.0
//Function Count : 29
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
	bool bVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_28("Loading Hennigan's Ranch population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_27("ped_generic", 0);
	Function_24(&uVar0, 170, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 171, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 38, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 39, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 172, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 173, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 174, 8.0f, 14, 0, 0);
	Function_24(&uVar0, 1037, 1.0f, 14, 0, 0);
	uVar1 = Function_27("ped_worker", 0);
	Function_24(&uVar1, 170, 8.0f, 14, 0, 0);
	Function_24(&uVar1, 171, 8.0f, 14, 0, 0);
	Function_24(&uVar1, 38, 8.0f, 14, 0, 0);
	Function_24(&uVar1, 39, 8.0f, 14, 0, 0);
	Function_24(&uVar1, 172, 8.0f, 14, 0, 0);
	Function_24(&uVar1, 173, 8.0f, 14, 0, 0);
	Function_24(&uVar1, 174, 8.0f, 14, 0, 0);
	bVar2 = Function_27("ped_workerN", 0);
	Function_24(&bVar2, 170, 8.0f, 16, 0, 0);
	Function_24(&bVar2, 171, 8.0f, 16, 0, 0);
	Function_24(&bVar2, 38, 8.0f, 16, 0, 0);
	Function_24(&bVar2, 39, 8.0f, 16, 0, 0);
	Function_24(&bVar2, 172, 8.0f, 16, 0, 0);
	Function_24(&bVar2, 173, 8.0f, 16, 0, 0);
	Function_24(&bVar2, 174, 8.0f, 16, 0, 0);
	uVar3 = Function_27("ped_prisoner", 0);
	Function_23(&uVar3, 170, 8.0f, 0, 0);
	Function_23(&uVar3, 171, 8.0f, 0, 0);
	Function_23(&uVar3, 38, 8.0f, 0, 0);
	Function_23(&uVar3, 39, 8.0f, 0, 0);
	Function_23(&uVar3, 172, 8.0f, 0, 0);
	Function_23(&uVar3, 173, 8.0f, 0, 0);
	Function_23(&uVar3, 174, 8.0f, 0, 0);
	if (!Function_22())
	{
		if (Global_25974[0])
		{
			if (Function_21(22, 0))
			{
				bVar4 = Function_27("nped_poker", 0);
				Function_20(&bVar4, 37, 1.0f, 0, 0);
				Function_20(&bVar4, 39, 1.0f, 0, 0);
				Function_20(&bVar4, 87, 1.0f, 0, 0);
				Function_20(&bVar4, 167, 1.0f, 0, 0);
				Function_20(&bVar4, 550, 1.0f, 0, 0);
				Function_20(&bVar4, 438, 1.0f, 0, 0);
			}
			else
			{
				bVar4 = Function_27("nped_poker", 0);
				Function_20(&bVar4, 37, 1.0f, 0, 0);
				Function_20(&bVar4, 39, 1.0f, 0, 0);
				Function_20(&bVar4, 87, 1.0f, 0, 0);
				Function_20(&bVar4, 167, 1.0f, 0, 0);
				Function_20(&bVar4, 438, 1.0f, 0, 0);
			}
		}
		if (Global_25974[5])
		{
			bVar5 = Function_27("ped_horseshoes", 0);
			Function_20(&bVar5, 107, 1.0f, 0, 0);
			Function_20(&bVar5, 35, 1.0f, 0, 0);
			Function_20(&bVar5, 85, 1.0f, 0, 0);
			Function_20(&bVar5, 212, 1.0f, 0, 0);
		}
	}
	Function_19(&(Global_30750[6]));
	Global_30750[6] = Function_27("animal_horse", 4);
	if (!Function_13(6))
	{
		Function_23(&(Global_30750[6]), 976, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 977, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 983, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 984, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 985, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 986, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 987, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 988, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 989, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 990, 100.0f, 0, 3);
		Function_23(&(Global_30750[6]), 991, 100.0f, 0, 3);
	}
	Function_19(&(Global_30750[15]));
	Global_30750[15] = Function_27("animal_horse_unsaddled", 0);
	if (!Function_13(6))
	{
		Function_20(&(Global_30750[15]), 976, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 977, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 983, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 984, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 985, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 986, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 987, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 988, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 989, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 990, 100.0f, 0, 0);
		Function_20(&(Global_30750[15]), 991, 100.0f, 0, 0);
	}
	Function_19(&(Global_30750[0]));
	Global_30750[0] = Function_27("ped_wilderness", Global_30840);
	Function_20(&(Global_30750[0]), 22, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 77, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 46, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 49, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 53, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 79, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 202, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 56, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 51, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 55, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 112, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 73, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 137, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 140, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 141, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 142, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 203, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 235, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 178, 8.0f, 0, 0);
	Function_20(&(Global_30750[0]), 202, 8.0f, 0, 0);
	Function_19(&(Global_30750[10]));
	Global_30750[10] = Function_27("animal_hunt", 0);
	Function_20(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]));
	Global_30750[13] = Function_27("animal_hunted", 0);
	Function_20(&(Global_30750[13]), 1061, 3.0f, 0, 0);
	Function_20(&(Global_30750[13]), 1062, 3.0f, 0, 0);
	Function_20(&(Global_30750[13]), 1063, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]));
	Global_30750[12] = Function_27("animal_prey", 0);
	Function_20(&(Global_30750[11]), 1078, 3.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1079, 3.0f, 0, 0);
	Function_19(&(Global_30750[11]));
	Global_30750[11] = Function_27("animal_predator", 1);
	Function_20(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1061, 2.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1062, 2.0f, 0, 0);
	Function_20(&(Global_30750[11]), 1063, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]));
	Global_30750[1] = Function_27("ped_traveller", 3);
	Function_20(&(Global_30750[1]), 48, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 64, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 74, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 78, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 87, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 89, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 90, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 199, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 204, 1.0f, 0, 0);
	Function_20(&(Global_30750[1]), 311, 1.0f, 0, 0);
	bVar6 = Function_27("ped_dayTraveller", 0);
	Function_24(&bVar6, 87, 8.0f, 30, 0, 0);
	Function_24(&bVar6, 89, 8.0f, 30, 0, 0);
	Function_24(&bVar6, 90, 8.0f, 30, 0, 0);
	Function_24(&bVar6, 52, 8.0f, 30, 0, 0);
	Function_24(&bVar6, 54, 8.0f, 30, 0, 0);
	Function_19(&(Global_30750[5]));
	Global_30750[5] = Function_27("animal_wilderness", 1);
	Function_24(&(Global_30750[5]), 1128, 9.0f, 14, 0, 0);
	Function_24(&(Global_30750[5]), 1057, 3.0f, 14, 0, 0);
	Function_24(&(Global_30750[5]), 1084, 8.0f, 33, 0, 0);
	Function_24(&(Global_30750[5]), 1082, 8.0f, 33, 0, 0);
	Function_19(&(Global_30750[8]));
	Global_30750[8] = Function_27("animal_herd", 1);
	Function_20(&(Global_30750[8]), 1008, 6.0f, 0, 0);
	Function_20(&(Global_30750[8]), 1009, 6.0f, 0, 0);
	Function_20(&(Global_30750[8]), 1011, 6.0f, 0, 0);
	bVar7 = Function_27("bulls", 0);
	Function_20(&bVar7, 1012, 100.0f, 0, 0);
	uVar0 = Function_27("coyote_den", 0);
	Function_20(&uVar0, 1049, 100.0f, 0, 0);
	Function_19(&(Global_30750[7]));
	Global_30750[7] = Function_27("animal_bird", 1);
	Function_24(&(Global_30750[7]), 1131, 9.0f, 14, 0, 0);
	Function_24(&(Global_30750[7]), 1134, 4.0f, 14, 0, 0);
	Function_24(&(Global_30750[7]), 1135, 4.0f, 14, 0, 0);
	Function_24(&(Global_30750[7]), 1136, 4.0f, 14, 0, 0);
	Function_24(&(Global_30750[7]), 1145, 4.0f, 14, 0, 0);
	Function_19(&(Global_30750[14]));
	Global_30750[14] = Function_27("birds_trees", 1);
	Function_20(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_20(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_20(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_20(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_20(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_20(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	bVar8 = Function_27("chickens", 0);
	Function_24(&bVar8, 1015, 100.0f, 15, 0, 0);
	Function_24(&bVar8, 1016, 100.0f, 15, 0, 0);
	bVar9 = Function_27("dogs", 0);
	Function_20(&bVar9, 1037, 100.0f, 0, 0);
	Function_20(&bVar9, 1038, 100.0f, 0, 0);
	Function_20(&bVar9, 1039, 100.0f, 0, 0);
	bVar10 = Function_27("nped_women", 0);
	Function_24(&bVar10, 73, 100.0f, 15, 0, 0);
	Function_24(&bVar10, 74, 100.0f, 15, 0, 0);
	Function_24(&bVar10, 56, 100.0f, 15, 0, 0);
	Function_24(&bVar10, 55, 100.0f, 15, 0, 0);
	Function_12(Global_30750[5], 2E-05f);
	Function_19(&(Global_30750[2]));
	Global_30750[2] = Function_27("ped_law", 1);
	Function_20(&(Global_30750[2]), 436, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 437, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 438, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 440, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 441, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 442, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 424, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 425, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 426, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 427, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 428, 8.0f, 0, 0);
	Function_20(&(Global_30750[2]), 429, 8.0f, 0, 0);
	Function_19(&(Global_30750[3]));
	Global_30750[3] = Function_27("ped_bad_guys_local", 1);
	Function_20(&(Global_30750[3]), 477, 1.0f, 0, 0);
	Function_20(&(Global_30750[3]), 478, 1.0f, 0, 0);
	Function_20(&(Global_30750[3]), 479, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]));
	Global_30750[4] = Function_27("ped_bad_guys_generic", 1);
	Function_20(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_20(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_20(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_20(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_20(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_20(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_20(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_20(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_20(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_19(&(Global_30750[9]));
	Global_30750[9] = Function_27("ped_vehicle", 1);
	Function_20(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_20(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_20(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_20(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_20(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	Function_20(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_20(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar11 = CREATE_POPULATION_SET(1);
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
	bVar12 = FIND_NAMED_LAYOUT("HennigansRanch_layout");
	if (IS_LAYOUTREF_VALID(bVar12))
	{
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "Henv_Townpop_Set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar1, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_townpop01 to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_cell01");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, uVar3, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henFarmerPop to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_lawGuys");
		if (IS_VOLUME_VALID(bVar13))
		{
			bVar14 = Function_8(bVar13, Global_30750[2], 1, 1, 0, 0, 1);
			if (IS_ZONE_VALID(bVar14))
			{
				SET_ZONE_PRIORITY(bVar14, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar14, 20.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar14, 1);
			}
			else
			{
				LOG_ERROR("hen_pop: Cannot find henv_lawGuys to create population volumes");
			}
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_nightPop");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, bVar2, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_nightPop to create population volumes");
		}
		if (!Function_22())
		{
			if (Global_25974[0])
			{
				bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_Poker");
				bVar15 = Function_7(bVar13, bVar4, 5, 1, 0, 0);
				if (IS_ZONE_VALID(bVar15))
				{
					Function_6(bVar15);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar15, 20.0f);
				}
				else
				{
					LOG_ERROR("hen_pop: Cannot find henv_Poker to create population volumes");
				}
			}
			if (Global_25974[5])
			{
				bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_HorseShoePit");
				bVar16 = Function_7(bVar13, bVar5, 1, 1, 1, 0);
				if (IS_ZONE_VALID(bVar16))
				{
					Function_4(bVar16);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar16, 50.0f);
				}
				else
				{
					LOG_ERROR("hen_pop: Cannot find henv_HorseShoePit to create population volumes");
				}
			}
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_pop_chickens_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, bVar8, 4, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_pop_chickens_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_chickenCoop_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, bVar8, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_pop_chickens_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_horses_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, Global_30750[15], 7, 11, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_horsepop01 to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_women");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, bVar10, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_women to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_trainstation_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, bVar6, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_trainstation_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "hen_cows_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, Global_30750[8], 7, 11, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "hen_cows_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_7(bVar13, bVar7, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find hen_cows_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "hen_dogs_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, bVar9, 1, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find hen_dogs_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "hen_birds_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, Global_30750[7], 9E-06f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find hen_birds_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_region");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, bVar11, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_region to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "henv_null_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, bVar11, 0.0f, 0, 0, 1);
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
	Function_10("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x196F / 6511
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x197E / 6526
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

var Function_3(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x19D3 / 6611
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

void Function_4(bool bParam0) //Position: 0x1A53 / 6739
{
	Function_5(bParam0);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 1);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_horseshoe");
	return;
}

void Function_5(bool bParam0) //Position: 0x1A80 / 6784
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x1A9F / 6815
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_poker");
	return;
}

var Function_7(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1AC1 / 6849
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

var Function_8(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1B41 / 6977
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

bool Function_9(int iParam0) //Position: 0x1BC3 / 7107
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x1BDF / 7135
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x1C1D / 7197
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x1C39 / 7225
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_13(int iParam0) //Position: 0x1C49 / 7241
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

bool Function_14(int iParam0) //Position: 0x1C7F / 7295
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

bool Function_15(int iParam0) //Position: 0x1CA3 / 7331
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0x1CB8 / 7352
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_17(int iParam0) //Position: 0x1CCF / 7375
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x1CE9 / 7401
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_19(int iParam0) //Position: 0x1CFF / 7423
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_20(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1D0B / 7435
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

bool Function_21(int iParam0, bool bParam1) //Position: 0x1D80 / 7552
{
	int iVar0;
	
	iVar0 = Function_17(iParam0);
	if (!Function_16(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_22() //Position: 0x1DBD / 7613
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_23(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1DC6 / 7622
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_20(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_24(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1E0B / 7691
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_26(iParam3), Function_25(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_25(int iParam0) //Position: 0x1E6D / 7789
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

var Function_26(int iParam0) //Position: 0x1ED9 / 7897
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

var Function_27(bool bParam0, int iParam1) //Position: 0x1F45 / 8005
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_28(bool bParam0, var uParam1) //Position: 0x1F52 / 8018
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

