//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 50
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
	bool bVar13;
	bool bVar14;
	bool bVar15;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_20("Loading Manzanita Post population file", 3);
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
	Function_16(&(Global_30750[0]), 17, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 23, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 28, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 29, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 30, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 32, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 40, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 45, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 96, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 108, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 109, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 110, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 113, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 152, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 153, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 169, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 176, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 177, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 218, 10.0f, 0, 0);
	Function_16(&(Global_30750[0]), 16, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]));
	Global_30750[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 18, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 58, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 75, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 95, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 115, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 131, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 206, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 224, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 228, 1.0f, 0, 0);
	if (!Function_15() && Global_25974[8])
	{
		uVar0 = Function_18("ped_fivefinger", 0);
		Function_16(&uVar0, 86, 1.0f, 0, 0);
		Function_16(&uVar0, 25, 1.0f, 0, 0);
		Function_16(&uVar0, 469, 1.0f, 0, 0);
		Function_16(&uVar0, 404, 1.0f, 0, 0);
		Function_16(&uVar0, 422, 1.0f, 0, 0);
		Function_16(&uVar0, 137, 1.0f, 0, 0);
		Function_16(&uVar0, 162, 1.0f, 0, 0);
	}
	Function_19(&(Global_30750[5]));
	Global_30750[5] = Function_18("animal_wilderness", 1);
	Function_12(&(Global_30750[5]), 1058, 3.0f, 15, 1, 0);
	Function_16(&(Global_30750[5]), 1078, 15.0f, 1, 0);
	Function_16(&(Global_30750[5]), 1119, 4.0f, 1, 0);
	Function_16(&(Global_30750[5]), 1119, 4.0f, 1, 0);
	Function_16(&(Global_30750[5]), 1120, 4.0f, 1, 0);
	Function_19(&(Global_30750[11]));
	Global_30750[11] = Function_18("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1099, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1100, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1101, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1114, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1114, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1115, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1069, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1070, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1071, 2.0f, 0, 0);
	Function_19(&(Global_30750[10]));
	Global_30750[10] = Function_18("animal_hunt", 0);
	Function_19(&(Global_30750[8]));
	Global_30750[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1124, 4.0f, 1, 0);
	Function_19(&(Global_30750[14]));
	Global_30750[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar1 = Function_18("People", 0);
	Function_12(&uVar1, 207, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 263, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 325, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 208, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 262, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 205, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 79, 4.0f, 14, 0, 0);
	Function_12(&uVar1, 48, 4.0f, 14, 0, 0);
	uVar2 = Function_18("deer", 0);
	Function_16(&uVar2, 1118, 4.0f, 0, 0);
	uVar3 = Function_18("owl", 0);
	Function_12(&uVar3, 1137, 4.0f, 48, 0, 0);
	uVar4 = Function_18("birds", 0);
	Function_12(&uVar4, 1131, 8.0f, 15, 0, 0);
	uVar5 = Function_18("hawks", 0);
	Function_12(&uVar5, 1146, 8.0f, 15, 0, 0);
	uVar6 = Function_18("Songbird", 0);
	Function_12(&uVar6, 1134, 8.0f, 15, 0, 0);
	Function_12(&uVar6, 1135, 8.0f, 15, 0, 0);
	Function_12(&uVar6, 1136, 8.0f, 15, 0, 0);
	uVar7 = Function_18("bear", 0);
	Function_12(&uVar7, 1095, 4.0f, 32, 0, 0);
	uVar8 = Function_18("rabbits", 0);
	Function_16(&uVar8, 1078, 4.0f, 0, 0);
	uVar9 = Function_18("raccoon", 0);
	Function_12(&uVar9, 1082, 4.0f, 48, 0, 0);
	uVar10 = Function_18("dog", 0);
	Function_16(&uVar10, 1034, 4.0f, 0, 0);
	uVar11 = Function_18("nwildhorse", 0);
	Function_16(&uVar11, 976, 4.0f, 0, 0);
	Function_16(&uVar11, 980, 4.0f, 0, 0);
	Function_16(&uVar11, 981, 4.0f, 0, 0);
	Function_19(&(Global_30750[7]));
	Global_30750[7] = Function_18("animal_bird", 1);
	Function_12(&(Global_30750[7]), 1134, 3.0f, 15, 0, 0);
	Function_12(&(Global_30750[7]), 1135, 3.0f, 15, 0, 0);
	Function_12(&(Global_30750[7]), 1136, 3.0f, 15, 0, 0);
	Function_12(&(Global_30750[7]), 1131, 8.0f, 15, 0, 0);
	Function_11(Global_30750[5], 4E-05f);
	Function_19(&(Global_30750[2]));
	Global_30750[2] = Function_18("ped_law", 1);
	Function_16(&(Global_30750[2]), 424, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 425, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 426, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 427, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 429, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 436, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 442, 8.0f, 1, 0);
	Function_19(&(Global_30750[3]));
	Global_30750[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 398, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 397, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 399, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 400, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 401, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 402, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 405, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 404, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 403, 4.0f, 1, 0);
	Function_19(&(Global_30750[4]));
	Global_30750[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 474, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 475, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 476, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 470, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 471, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 472, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 467, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 468, 1.0f, 1, 0);
	Function_16(&(Global_30750[4]), 469, 1.0f, 1, 0);
	Function_19(&(Global_30750[9]));
	Global_30750[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1186, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1187, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar12 = CREATE_POPULATION_SET(1);
	Function_19(&(Global_30750[6]));
	Global_30750[6] = Function_18("animal_horse", 1);
	Function_16(&(Global_30750[6]), 976, 9.0f, 1, 0);
	Function_16(&(Global_30750[6]), 978, 9.0f, 1, 0);
	Function_16(&(Global_30750[6]), 981, 9.0f, 1, 0);
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
	bVar13 = FIND_NAMED_LAYOUT("ManzanitaPost_layout");
	if (IS_LAYOUTREF_VALID(bVar13))
	{
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_birds_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, uVar4, 7, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_birds to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_Songbirds_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, uVar6, 9E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_Songbirds_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "nmtpv_Hawk");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, uVar5, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_Hawk to create population volumes");
		}
		if (!Function_15() && Global_25974[8])
		{
			bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_fff");
			if (IS_VOLUME_VALID(bVar14))
			{
				bVar15 = Function_7(bVar14, uVar0, 5, 1, 0, 0);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar15, 50.0f);
				Function_4(bVar15);
			}
			else
			{
				LOG_ERROR("mtp_pop: Cannot find mtpv_fff to create population volumes");
			}
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_region");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, uVar10, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_dog_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_raccoon_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_7(bVar14, uVar9, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_raccoon_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_TrnPlatform_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_3(bVar14, uVar1, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_train_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_customers_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_3(bVar14, uVar1, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_customers1_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_store_set");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_3(bVar14, uVar1, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_customers1_set to create population volumes");
		}
		bVar14 = FIND_VOLUME_IN_LAYOUT(bVar13, "mtpv_region");
		if (IS_VOLUME_VALID(bVar14))
		{
			Function_6(bVar14, uVar12, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("mtp_pop: Cannot find mtpv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("mtp_pop: Cannot find one of the volumes to create population volumes");
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
	Function_9("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x12F1 / 4849
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1300 / 4864
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

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1355 / 4949
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

void Function_4(bool bParam0) //Position: 0x13D7 / 5079
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(bool bParam0) //Position: 0x146B / 5227
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_6(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x148A / 5258
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

var Function_7(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x150A / 5386
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

bool Function_8(int iParam0) //Position: 0x158A / 5514
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0x15A6 / 5542
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

bool Function_10(var uParam0, int iParam1) //Position: 0x15E4 / 5604
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x1600 / 5632
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1610 / 5648
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_14(iParam3), Function_13(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_13(int iParam0) //Position: 0x1688 / 5768
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

var Function_14(bool bParam0) //Position: 0x16F4 / 5876
{
	int iVar0;
	
	iVar0 = 0;
	if ((bParam0 && 33) == 1)
	{
		iVar0 = 5;
	}
	else if ((bParam0 && 3) == 2)
	{
		iVar0 = 7;
	}
	else if ((bParam0 && 6) == 4)
	{
		iVar0 = 11;
	}
	else if ((bParam0 && 12) == 8)
	{
		iVar0 = 14;
	}
	else if ((bParam0 && 24) == 16)
	{
		iVar0 = 18;
	}
	else if ((bParam0 && 48) == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

bool Function_15() //Position: 0x1760 / 5984
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1769 / 5993
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x17E5 / 6117
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

var Function_18(bool bParam0, int iParam1) //Position: 0x182A / 6186
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_19(int iParam0) //Position: 0x1837 / 6199
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_20(bool bParam0, var uParam1) //Position: 0x1843 / 6211
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

