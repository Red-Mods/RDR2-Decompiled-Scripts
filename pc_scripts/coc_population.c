//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 40
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
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	var uVar17;
	var uVar18;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_15("Loading Cochinay population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_46972[15]), 1001, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 1002, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_13("ped_wilderness", Global_47149);
	Function_11(&(Global_46972[0]), 89, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 223, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 227, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 229, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 95, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 131, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 224, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 228, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 17, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 23, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 28, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 29, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 30, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 32, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 36, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 45, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 96, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 108, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 109, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 110, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 168, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 169, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 176, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 177, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 218, 1.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_46972[1]), 130, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 225, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 226, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 230, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 18, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 58, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 75, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 115, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 206, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 205, 1.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_46972[5]), 1058, 3.0f, 15, 0, 0);
	Function_8(&(Global_46972[5]), 1128, 6.0f, 15, 0, 0);
	Function_8(&(Global_46972[5]), 1084, 4.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1082, 4.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1137, 4.0f, 33, 0, 0);
	Function_11(&(Global_46972[5]), 1078, 5.0f, 0, 0);
	Function_11(&(Global_46972[5]), 1078, 5.0f, 0, 0);
	Function_11(&(Global_46972[5]), 1078, 5.0f, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_13("animal_hunt", 1);
	Function_11(&(Global_46972[10]), 1082, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1091, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1092, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1093, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1115, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1050, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1050, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1051, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1052, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1052, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1120, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1117, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1069, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1070, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1071, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1054, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1055, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1056, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1125, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1126, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1125, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1096, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1097, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_46972[11]), 1099, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1100, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1101, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1115, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1069, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1070, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1071, 2.0f, 0, 0);
	bVar0 = Function_13("pigs", 1);
	Function_11(&bVar0, 1021, 1.0f, 0, 0);
	Function_11(&bVar0, 1021, 1.0f, 0, 0);
	Function_11(&bVar0, 1022, 1.0f, 0, 0);
	bVar1 = Function_13("goats", 1);
	Function_11(&bVar1, 1026, 1.0f, 0, 0);
	Function_11(&bVar1, 1027, 1.0f, 0, 0);
	Function_11(&bVar1, 1028, 1.0f, 0, 0);
	bVar2 = Function_13("chickens", 1);
	Function_11(&bVar2, 1017, 1.0f, 0, 0);
	Function_11(&bVar2, 1016, 1.0f, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_46972[8]), 1125, 4.0f, 0, 0);
	Function_11(&(Global_46972[8]), 1126, 4.0f, 0, 0);
	Function_11(&(Global_46972[8]), 1125, 4.0f, 0, 0);
	bVar3 = Function_13("wolfs", 0);
	Function_11(&bVar3, 1069, 8.0f, 0, 0);
	Function_11(&bVar3, 1070, 8.0f, 0, 0);
	Function_11(&bVar3, 1071, 8.0f, 0, 0);
	bVar4 = Function_13("cougars", 0);
	Function_11(&bVar4, 1114, 8.0f, 0, 0);
	Function_11(&bVar4, 1114, 8.0f, 0, 0);
	Function_11(&bVar4, 1115, 8.0f, 0, 0);
	bVar5 = Function_13("coyote", 0);
	Function_11(&bVar5, 1050, 4.0f, 0, 0);
	Function_11(&bVar5, 1050, 4.0f, 0, 0);
	Function_11(&bVar5, 1051, 4.0f, 0, 0);
	Function_11(&bVar5, 1052, 4.0f, 0, 0);
	Function_11(&bVar5, 1052, 4.0f, 0, 0);
	bVar6 = Function_13("deer", 0);
	Function_11(&bVar6, 1119, 4.0f, 0, 0);
	Function_11(&bVar6, 1119, 4.0f, 0, 0);
	Function_11(&bVar6, 1120, 4.0f, 0, 0);
	Function_11(&bVar6, 1116, 4.0f, 0, 0);
	Function_11(&bVar6, 1117, 4.0f, 0, 0);
	Function_11(&bVar6, 1116, 4.0f, 0, 0);
	bVar7 = Function_13("fox_pop", 0);
	Function_11(&bVar7, 1054, 4.0f, 0, 0);
	Function_11(&bVar7, 1055, 4.0f, 0, 0);
	Function_11(&bVar7, 1056, 4.0f, 0, 0);
	bVar8 = Function_13("owl", 0);
	Function_11(&bVar8, 1137, 4.0f, 0, 0);
	Function_11(&bVar8, 1138, 4.0f, 0, 0);
	Function_11(&bVar8, 1139, 4.0f, 0, 0);
	bVar9 = Function_13("rabbit_pop", 0);
	Function_11(&bVar9, 1078, 4.0f, 0, 0);
	Function_11(&bVar9, 1078, 4.0f, 0, 0);
	Function_11(&bVar9, 1078, 4.0f, 0, 0);
	bVar10 = Function_13("bear", 0);
	Function_11(&bVar10, 1099, 4.0f, 0, 0);
	Function_11(&bVar10, 1100, 4.0f, 0, 0);
	Function_11(&bVar10, 1101, 4.0f, 0, 0);
	bVar11 = Function_13("bigHorn", 0);
	Function_11(&bVar11, 1122, 4.0f, 0, 0);
	Function_11(&bVar11, 1123, 4.0f, 0, 0);
	Function_11(&bVar11, 1123, 4.0f, 0, 0);
	bVar12 = Function_13("wildBoar_pop", 0);
	Function_11(&bVar12, 1074, 4.0f, 0, 0);
	Function_11(&bVar12, 1075, 4.0f, 0, 0);
	Function_11(&bVar12, 1076, 4.0f, 0, 0);
	Function_11(&bVar12, 1076, 4.0f, 0, 0);
	uVar13 = Function_13("nnight_pop", 0);
	Function_8(&uVar13, 1084, 4.0f, 33, 0, 0);
	Function_8(&uVar13, 1082, 4.0f, 33, 0, 0);
	bVar14 = Function_13("nwildhorse", 0);
	Function_11(&bVar14, 977, 4.0f, 0, 0);
	Function_11(&bVar14, 980, 4.0f, 0, 0);
	Function_11(&bVar14, 984, 4.0f, 0, 0);
	Function_11(&bVar14, 985, 4.0f, 0, 0);
	Function_11(&bVar14, 988, 4.0f, 0, 0);
	Function_11(&bVar14, 990, 4.0f, 0, 0);
	bVar15 = Function_13("animal_duck", 0);
	Function_11(&bVar15, 1140, 100.0f, 0, 0);
	Function_11(&bVar15, 1140, 100.0f, 0, 0);
	Function_11(&bVar15, 1140, 100.0f, 0, 0);
	bVar16 = Function_13("animal_beaver", 0);
	Function_11(&bVar16, 1106, 100.0f, 0, 0);
	Function_11(&bVar16, 1107, 100.0f, 0, 0);
	Function_11(&bVar16, 1108, 100.0f, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1137, 5.0f, 33, 0, 0);
	Function_8(&(Global_46972[7]), 1134, 5.0f, 15, 0, 0);
	Function_8(&(Global_46972[7]), 1135, 5.0f, 15, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 5.0f, 15, 0, 0);
	Function_8(&(Global_46972[7]), 1131, 5.0f, 15, 0, 0);
	Function_8(&(Global_46972[7]), 1145, 5.0f, 15, 0, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_7(&(Global_46972[5]), 6E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_13("ped_law", 1);
	Function_11(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_11(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_11(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_46972[3]), 474, 1.0f, 0, 0);
	Function_11(&(Global_46972[3]), 470, 1.0f, 0, 0);
	Function_11(&(Global_46972[3]), 467, 1.0f, 0, 0);
	Function_11(&(Global_46972[3]), 468, 1.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_46972[4]), 398, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 397, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 403, 4.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_46972[9]), 1186, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1187, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	while (!Function_6(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar17 = FIND_NAMED_LAYOUT("Cochinay_layout");
	if (IS_LAYOUTREF_VALID(&uVar17))
	{
		uVar18 = FIND_VOLUME_IN_LAYOUT(&uVar17, "ncocv_pigs");
		if (IS_VOLUME_VALID(&uVar18))
		{
			Function_3(&uVar18, &bVar0, 3, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("coc_pop: Cannot find cocv_pigs to create population volumes");
		}
		uVar18 = FIND_VOLUME_IN_LAYOUT(&uVar17, "cocv_goats");
		if (IS_VOLUME_VALID(&uVar18))
		{
			Function_3(&uVar18, &bVar1, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("coc_pop: Cannot find cocv_goats to create population volumes");
		}
		uVar18 = FIND_VOLUME_IN_LAYOUT(&uVar17, "cocv_chickens_set");
		if (IS_VOLUME_VALID(&uVar18))
		{
			Function_3(&uVar18, &bVar2, 4, 6, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("coc_pop: Cannot find cocv_chickens to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("coc_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_6(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_5("Finished loading Cochinay population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1290 / 4752
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x12A1 / 4769
{
	int iVar0;
	
	if (!Function_4(1))
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

var Function_3(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x12F9 / 4857
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

bool Function_4(int iParam0) //Position: 0x138B / 5003
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0x13A7 / 5031
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0x13E7 / 5095
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x1404 / 5124
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1415 / 5141
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x1493 / 5267
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

var Function_10(int iParam0) //Position: 0x14FF / 5375
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

var Function_11(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x156B / 5483
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION(&bParam0, iParam1, fParam2);
	if (&bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&bParam0) - 1);
}

var Function_12(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x15ED / 5613
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(&uParam0, iParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_13(var uParam0, int iParam1) //Position: 0x1634 / 5684
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_14(int iParam0) //Position: 0x1643 / 5699
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_15(char* cParam0) //Position: 0x1650 / 5712
{
	if (!Function_4(128))
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

