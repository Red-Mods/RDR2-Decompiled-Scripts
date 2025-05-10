//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 51
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_20("Loading plainview's Point population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_19(&(Global_30750[6]));
	Global_30750[6] = Function_18("animal_horse", 4);
	Function_17(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_17(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_19(&(Global_30750[15]));
	Global_30750[15] = Function_18("animal_horse_unsaddled", 0);
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
	Function_19(&(Global_30750[0]));
	Global_30750[0] = Function_18("ped_wilderness", Global_30840);
	Function_16(&(Global_30750[0]), 34, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 46, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 49, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 50, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 53, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 54, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 56, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 74, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 136, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 143, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 173, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 174, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 175, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 22, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 202, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]));
	Global_30750[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 48, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 87, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 199, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 203, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 204, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 230, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 312, 2.0f, 0, 0);
	Function_19(&(Global_30750[5]));
	Global_30750[5] = Function_18("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 1057, 2.0f, 14, 1, 0);
	Function_16(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_16(&(Global_30750[5]), 1079, 4.0f, 0, 0);
	Function_16(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_13(&(Global_30750[5]), 1128, 8.0f, 30, 1, 0);
	Function_13(&(Global_30750[5]), 1082, 8.0f, 33, 1, 0);
	Function_13(&(Global_30750[5]), 1084, 8.0f, 33, 1, 0);
	Function_19(&(Global_30750[11]));
	Global_30750[11] = Function_18("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1061, 3.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1062, 5.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1063, 5.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1088, 5.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1089, 5.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1090, 5.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_19(&(Global_30750[10]));
	Global_30750[10] = Function_18("animal_hunt", 0);
	Function_19(&(Global_30750[8]));
	Global_30750[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1060, 1.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1057, 5.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	bVar0 = Function_18("crows", 0);
	Function_13(&bVar0, 1131, 6.0f, 14, 0, 0);
	Function_19(&(Global_30750[14]));
	Global_30750[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar1 = Function_18("Buisness", 0);
	Function_13(&uVar1, 87, 10.0f, 14, 0, 0);
	Function_13(&uVar1, 230, 10.0f, 14, 0, 0);
	Function_13(&uVar1, 16, 10.0f, 14, 0, 0);
	Function_13(&uVar1, 136, 10.0f, 14, 0, 0);
	bVar2 = Function_18("Business_night", 0);
	Function_13(&bVar2, 87, 1.0f, 48, 1, 0);
	Function_13(&bVar2, 230, 1.0f, 48, 1, 0);
	Function_13(&bVar2, 16, 1.0f, 48, 1, 0);
	Function_13(&bVar2, 136, 1.0f, 48, 1, 0);
	bVar3 = Function_18("People_night", 0);
	Function_13(&bVar3, 203, 1.0f, 52, 1, 0);
	Function_13(&bVar3, 204, 1.0f, 52, 1, 0);
	Function_13(&bVar3, 87, 1.0f, 52, 1, 0);
	Function_13(&bVar3, 48, 1.0f, 52, 1, 0);
	Function_13(&bVar3, 230, 1.0f, 52, 1, 0);
	Function_13(&bVar3, 312, 1.0f, 52, 1, 0);
	bVar4 = Function_18("generic_workers", 0);
	Function_13(&bVar4, 152, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 153, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 154, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 155, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 164, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 165, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 166, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 167, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 43, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 41, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 40, 1.0f, 14, 1, 0);
	Function_13(&bVar4, 38, 1.0f, 14, 1, 0);
	if (!Function_12() && Global_25974[4])
	{
		uVar5 = Function_18("pop_armwrestling", 0);
		Function_16(&uVar5, 506, 1.0f, 0, 0);
		Function_16(&uVar5, 486, 1.0f, 0, 0);
		Function_16(&uVar5, 297, 1.0f, 0, 0);
		Function_16(&uVar5, 111, 1.0f, 0, 0);
		Function_16(&uVar5, 437, 1.0f, 0, 0);
		Function_16(&uVar5, 138, 1.0f, 0, 0);
	}
	bVar6 = Function_18("snakes", 0);
	Function_13(&bVar6, 1057, 8.0f, 14, 0, 0);
	uVar7 = Function_18("vultures", 0);
	Function_13(&uVar7, 1128, 8.0f, 14, 0, 0);
	Function_13(&uVar7, 1129, 7.0f, 14, 0, 0);
	Function_13(&uVar7, 1130, 8.0f, 14, 0, 0);
	uVar8 = Function_18("owls", 0);
	Function_13(&uVar8, 1137, 10.0f, 49, 0, 0);
	Function_13(&uVar8, 1138, 10.0f, 49, 0, 0);
	Function_13(&uVar8, 1139, 10.0f, 49, 0, 0);
	uVar9 = Function_18("dogs", 0);
	Function_16(&uVar9, 1035, 10.0f, 0, 0);
	Function_16(&uVar9, 1033, 10.0f, 0, 0);
	Function_16(&uVar9, 1038, 10.0f, 0, 0);
	uVar10 = Function_18("racoons", 0);
	Function_13(&uVar10, 1082, 10.0f, 49, 0, 0);
	Function_13(&uVar10, 1082, 10.0f, 49, 0, 0);
	Function_13(&uVar10, 1082, 10.0f, 49, 0, 0);
	uVar11 = Function_18("rabbits", 0);
	Function_13(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_13(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_13(&uVar11, 1078, 10.0f, 49, 0, 0);
	Function_19(&(Global_30750[7]));
	Global_30750[7] = Function_18("animal_bird", 0);
	Function_13(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_11(Global_30750[5], 4E-05f);
	Function_19(&(Global_30750[2]));
	Global_30750[2] = Function_18("ped_law", 1);
	Function_16(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 441, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_19(&(Global_30750[3]));
	Global_30750[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 487, 1.0f, 1, 0);
	Function_16(&(Global_30750[3]), 486, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 488, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 489, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 490, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 491, 4.0f, 1, 0);
	Function_19(&(Global_30750[4]));
	Global_30750[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_16(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_16(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_16(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_19(&(Global_30750[9]));
	Global_30750[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1183, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1188, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar12 = CREATE_POPULATION_SET(1);
	while (!Function_10(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_9("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_8(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar13 = FIND_NAMED_LAYOUT("Plainview_layout");
	if (IS_LAYOUTREF_VALID(bVar13))
	{
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_vultures_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, uVar7, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_vultures_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_crows_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, bVar0, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_crows_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_people");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, uVar1, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_people to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_cards");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, bVar2, 1, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_cards to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_fires_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, bVar3, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_fires_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_workers_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, bVar4, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_workers_set to create population volumes");
		}
		if (!Function_12() && Global_25974[4])
		{
			bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_armwrestling");
			bVar15 = Function_5(bVar14, uVar5, 3, 1, 0, 0);
			if (IS_ZONE_VALID(bVar15))
			{
				Function_3(bVar15);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar15, 50.0f);
			}
			else
			{
				LOG_ERROR("pln_pop: Cannot find plnv_armwrestling to create population volumes");
			}
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_snakes_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, bVar6, 0,001f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("pln_pop: Cannot find plnv_snakes_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "plnv_region");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, bVar12, 0.0f, 0, 0, 1);
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
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_10(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_9("Finished loading plainview's Point population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1346 / 4934
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1355 / 4949
{
	int iVar0;
	
	if (!Function_8(1))
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

void Function_3(bool bParam0) //Position: 0x13AA / 5034
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

void Function_4(bool bParam0) //Position: 0x1459 / 5209
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_5(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1478 / 5240
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

var Function_6(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x14F8 / 5368
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

var Function_7(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x157A / 5498
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

bool Function_8(int iParam0) //Position: 0x15FA / 5626
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0x1616 / 5654
{
	if (!Function_8(128))
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

bool Function_10(var uParam0, int iParam1) //Position: 0x1654 / 5716
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x1670 / 5744
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_12() //Position: 0x1680 / 5760
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1689 / 5769
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_15(iParam3), Function_14(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_14(int iParam0) //Position: 0x16EB / 5867
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

var Function_15(int iParam0) //Position: 0x1757 / 5975
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

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x17C3 / 6083
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1838 / 6200
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_18(bool bParam0, int iParam1) //Position: 0x187D / 6269
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_19(int iParam0) //Position: 0x188A / 6282
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_20(bool bParam0, var uParam1) //Position: 0x1896 / 6294
{
	if (!Function_8(128))
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

