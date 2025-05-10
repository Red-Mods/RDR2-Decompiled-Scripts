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
	bool bVar11;
	bool bVar12;
	bool bVar13;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_20("Loading Las Hermanas population file", 3);
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
	Function_16(&(Global_30750[0]), 239, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 240, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 241, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 292, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 295, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 297, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 269, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 270, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 271, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 272, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 278, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 279, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 280, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 281, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 282, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 284, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 306, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 317, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 321, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 323, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]));
	Global_30750[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 253, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 263, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 265, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 275, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 302, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 303, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 304, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 311, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 318, 1.0f, 0, 0);
	Function_19(&(Global_30750[5]));
	Global_30750[5] = Function_18("animal_wilderness", 1);
	Function_16(&(Global_30750[5]), 1078, 11.0f, 1, 0);
	Function_13(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1051, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_13(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1051, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_13(&(Global_30750[5]), 1128, 8.0f, 30, 1, 0);
	Function_16(&(Global_30750[5]), 1081, 10.0f, 0, 0);
	Function_13(&(Global_30750[5]), 1059, 2.0f, 14, 1, 0);
	Function_19(&(Global_30750[11]));
	Global_30750[11] = Function_18("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_19(&(Global_30750[10]));
	Global_30750[10] = Function_18("animal_hunt", 0);
	Function_19(&(Global_30750[8]));
	Global_30750[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1064, 1.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1057, 5.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	uVar0 = Function_18("chickens", 0);
	Function_13(&uVar0, 1015, 100.0f, 15, 0, 0);
	Function_13(&uVar0, 1017, 100.0f, 15, 0, 0);
	uVar1 = Function_18("refugees", 0);
	Function_13(&uVar1, 287, 3.0f, 10, 0, 0);
	Function_13(&uVar1, 62, 5.0f, 10, 0, 0);
	Function_13(&uVar1, 243, 5.0f, 10, 0, 0);
	Function_13(&uVar1, 320, 4.0f, 10, 0, 0);
	Function_13(&uVar1, 319, 4.0f, 10, 0, 0);
	Function_13(&uVar1, 313, 4.0f, 10, 0, 0);
	Function_13(&uVar1, 314, 4.0f, 10, 0, 0);
	Function_13(&uVar1, 63, 5.0f, 10, 0, 0);
	Function_13(&uVar1, 317, 5.0f, 2, 0, 0);
	uVar2 = Function_18("people", 0);
	Function_13(&uVar2, 287, 3.0f, 7, 0, 0);
	Function_13(&uVar2, 293, 2.0f, 7, 0, 0);
	Function_13(&uVar2, 292, 2.0f, 7, 0, 0);
	Function_13(&uVar2, 314, 5.0f, 7, 0, 0);
	Function_13(&uVar2, 313, 5.0f, 7, 0, 0);
	Function_13(&uVar2, 251, 3.0f, 7, 0, 0);
	Function_13(&uVar2, 297, 3.0f, 7, 0, 0);
	Function_13(&uVar2, 299, 3.0f, 7, 0, 0);
	uVar3 = Function_18("people1", 0);
	Function_13(&uVar3, 295, 3.0f, 24, 0, 0);
	Function_13(&uVar3, 296, 2.0f, 24, 0, 0);
	Function_13(&uVar3, 297, 2.0f, 24, 0, 0);
	Function_13(&uVar3, 314, 5.0f, 24, 0, 0);
	Function_13(&uVar3, 313, 5.0f, 24, 0, 0);
	Function_13(&uVar3, 319, 3.0f, 24, 0, 0);
	Function_13(&uVar3, 320, 3.0f, 24, 0, 0);
	Function_13(&uVar3, 251, 5.0f, 24, 0, 0);
	Function_13(&uVar3, 252, 5.0f, 24, 0, 0);
	if (!Function_12() && Global_25974[5])
	{
		uVar4 = Function_18("ped_horseshoes", 0);
		Function_16(&uVar4, 305, 1.0f, 0, 0);
		Function_16(&uVar4, 237, 1.0f, 0, 0);
		Function_16(&uVar4, 260, 1.0f, 0, 0);
		Function_16(&uVar4, 286, 1.0f, 0, 0);
		Function_16(&uVar4, 291, 1.0f, 0, 0);
		Function_16(&uVar4, 294, 1.0f, 0, 0);
	}
	uVar5 = Function_18("snakes", 0);
	Function_13(&uVar5, 1059, 8.0f, 14, 0, 0);
	uVar6 = Function_18("vultures", 0);
	Function_13(&uVar6, 1128, 10.0f, 14, 0, 0);
	uVar7 = Function_18("Mules", 0);
	Function_16(&uVar7, 1000, 10.0f, 0, 0);
	uVar8 = Function_18("Crows", 0);
	Function_13(&uVar8, 1131, 10.0f, 14, 0, 0);
	uVar9 = Function_18("Rabbits", 0);
	Function_13(&uVar9, 1078, 6.5f, 49, 0, 0);
	Function_19(&(Global_30750[7]));
	Global_30750[7] = Function_18("animal_bird", 1);
	Function_13(&(Global_30750[7]), 1131, 2.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]), 1135, 1.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 1.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 1.0f, 15, 0, 0);
	Function_19(&(Global_30750[14]));
	Global_30750[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_11(Global_30750[5], 4E-05f);
	Function_19(&(Global_30750[2]));
	Global_30750[2] = Function_18("ped_law", 1);
	Function_16(&(Global_30750[2]), 466, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 462, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 463, 8.0f, 1, 0);
	Function_19(&(Global_30750[3]));
	Global_30750[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 410, 1.0f, 1, 0);
	Function_16(&(Global_30750[3]), 413, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 406, 4.0f, 1, 0);
	Function_19(&(Global_30750[4]));
	Global_30750[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 500, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 501, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 499, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 496, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 497, 1.0f, 1, 0);
	Function_19(&(Global_30750[9]));
	Global_30750[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1185, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1184, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar10 = CREATE_POPULATION_SET(1);
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
	bVar11 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (IS_LAYOUTREF_VALID(bVar11))
	{
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_birds_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_7(bVar12, uVar8, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_birds_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_vulture_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_7(bVar12, uVar6, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_vulture_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_rabbits_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_7(bVar12, uVar9, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_rabbits_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_courtyard_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar3, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_courtyard_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_courtyard_west_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar3, 3, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_courtyard_west_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_church_bottom_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar1, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_church_bottom_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_office_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar1, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_office_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_night_set");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar3, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_night_set to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_trainStn");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar2, 1, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_trainStn to create population volumes");
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_customers");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_6(bVar12, uVar2, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find lshv_custmrs to create population volumes");
		}
		if (!Function_12() && Global_25974[5])
		{
			bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_HorseShoePit");
			bVar13 = Function_5(bVar12, uVar4, 1, 1, 0, 0);
			if (IS_ZONE_VALID(bVar13))
			{
				Function_3(bVar13);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar13, 50.0f);
			}
			else
			{
				LOG_ERROR("lsh_pop: Cannot find lshv_HorseShoePit to create population volumes");
			}
		}
		bVar12 = FIND_VOLUME_IN_LAYOUT(bVar11, "lshv_region");
		if (IS_VOLUME_VALID(bVar12))
		{
			Function_7(bVar12, uVar10, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("lsh_pop: Cannot find henv_region to create population volumes");
		}
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
	Function_9("Finished loading Las Hermanas population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1370 / 4976
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x137F / 4991
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

void Function_3(bool bParam0) //Position: 0x13D4 / 5076
{
	Function_4(bParam0);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 1);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_horseshoe");
	return;
}

void Function_4(bool bParam0) //Position: 0x1401 / 5121
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_5(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1420 / 5152
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

var Function_6(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x14A0 / 5280
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

var Function_7(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1522 / 5410
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

bool Function_8(int iParam0) //Position: 0x15A2 / 5538
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0x15BE / 5566
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

bool Function_10(var uParam0, int iParam1) //Position: 0x15FC / 5628
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x1618 / 5656
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_12() //Position: 0x1628 / 5672
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1631 / 5681
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_15(iParam3), Function_14(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_14(int iParam0) //Position: 0x16A9 / 5801
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

var Function_15(int iParam0) //Position: 0x1715 / 5909
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

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1781 / 6017
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x17FD / 6141
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

var Function_18(bool bParam0, int iParam1) //Position: 0x1842 / 6210
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_19(int iParam0) //Position: 0x184F / 6223
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_20(bool bParam0, var uParam1) //Position: 0x185B / 6235
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

