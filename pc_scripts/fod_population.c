//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 41
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
	bool bVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_20("Loading El Presidio population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_19(&(Global_46972[6]));
	Global_46972[6] = Function_18("animal_horse", 4);
	Function_17(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_19(&(Global_46972[15]));
	Global_46972[15] = Function_18("animal_horse_unsaddled", 0);
	Function_16(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_19(&(Global_46972[0]));
	Global_46972[0] = Function_18("ped_wilderness", Global_47149);
	Function_16(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_19(&(Global_46972[1]));
	Global_46972[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_46972[1]), 63, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 62, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 253, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 263, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 265, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 275, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 302, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 303, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 311, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 318, 10.0f, 0, 0);
	Function_19(&(Global_46972[5]));
	Global_46972[5] = Function_18("animal_wilderness", 1);
	Function_13(&(Global_46972[5]), 1059, 3.0f, 15, 1, 0);
	Function_16(&(Global_46972[5]), 1078, 10.0f, 1, 0);
	Function_13(&(Global_46972[5]), 1128, 9.0f, 15, 1, 0);
	Function_16(&(Global_46972[5]), 1081, 8.0f, 0, 0);
	Function_19(&(Global_46972[10]));
	Global_46972[10] = Function_18("animal_hunt", 0);
	Function_19(&(Global_46972[11]));
	Global_46972[11] = Function_18("animal_predator", 1);
	Function_16(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1115, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1050, 1.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1051, 1.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_16(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_19(&(Global_46972[8]));
	Global_46972[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_46972[8]), 1064, 1.0f, 1, 0);
	Function_16(&(Global_46972[8]), 1059, 5.0f, 1, 0);
	Function_16(&(Global_46972[8]), 1078, 20.0f, 1, 0);
	Function_16(&(Global_46972[8]), 1049, 2.0f, 1, 0);
	bVar0 = Function_18("snakes", 0);
	Function_13(&bVar0, 1059, 3.0f, 15, 1, 0);
	uVar1 = Function_18("vultures", 0);
	Function_13(&uVar1, 1128, 10.0f, 14, 0, 0);
	uVar2 = Function_18("Crows", 0);
	Function_13(&uVar2, 1131, 10.0f, 14, 0, 0);
	bVar3 = Function_18("nArmadillo", 0);
	Function_16(&bVar3, 1081, 6,5f, 0, 0);
	uVar4 = Function_18("GenericSoldiers", 0);
	Function_13(&uVar4, 382, 10.0f, 14, 1, 0);
	Function_13(&uVar4, 383, 10.0f, 14, 1, 0);
	Function_13(&uVar4, 384, 10.0f, 14, 1, 0);
	Function_13(&uVar4, 385, 10.0f, 14, 1, 0);
	uVar5 = Function_18("GenericRebels", 0);
	Function_13(&uVar5, 519, 10.0f, 14, 1, 0);
	Function_13(&uVar5, 520, 10.0f, 14, 1, 0);
	Function_13(&uVar5, 518, 10.0f, 14, 1, 0);
	Function_13(&uVar5, 517, 10.0f, 14, 1, 0);
	Function_19(&(Global_46972[7]));
	Global_46972[7] = Function_18("animal_bird", 1);
	Function_13(&(Global_46972[7]), 1131, 10.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1135, 3.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1136, 3.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1136, 3.0f, 14, 0, 0);
	Function_19(&(Global_46972[14]));
	Global_46972[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_12(&(Global_46972[5]), 4E-05f);
	Function_19(&(Global_46972[2]));
	Global_46972[2] = Function_18("ped_law", 1);
	Function_16(&(Global_46972[2]), 455, 8.0f, 1, 0);
	Function_16(&(Global_46972[2]), 456, 8.0f, 1, 0);
	Function_16(&(Global_46972[2]), 457, 8.0f, 1, 0);
	Function_19(&(Global_46972[3]));
	Global_46972[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_46972[3]), 410, 1.0f, 1, 0);
	Function_16(&(Global_46972[3]), 413, 4.0f, 1, 0);
	Function_16(&(Global_46972[3]), 406, 4.0f, 1, 0);
	Function_19(&(Global_46972[4]));
	Global_46972[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_46972[4]), 407, 4.0f, 0, 0);
	Function_19(&(Global_46972[9]));
	Global_46972[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_46972[9]), 1185, 2.0f, 1, 0);
	Function_16(&(Global_46972[9]), 1184, 2.0f, 1, 0);
	Function_16(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	bVar6 = CREATE_POPULATION_SET(1);
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
	uVar7 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (IS_LAYOUTREF_VALID(&uVar7))
	{
		uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_crows_set");
		if (IS_VOLUME_VALID(&uVar8))
		{
			Function_8(&uVar8, &uVar2, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_birds_set to create population volumes");
		}
		uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_vultures_set");
		if (IS_VOLUME_VALID(&uVar8))
		{
			Function_8(&uVar8, &uVar1, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_vultures_set to create population volumes");
		}
		uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_Armadillo_set");
		if (IS_VOLUME_VALID(&uVar8))
		{
			Function_8(&uVar8, &bVar3, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_Armadillo_set to create population volumes");
		}
		uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_snakes_set");
		if (IS_VOLUME_VALID(&uVar8))
		{
			Function_8(&uVar8, &bVar0, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_snakes_set to create population volumes");
		}
		if (Function_4(41, 0))
		{
			uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_soldiers_set");
			if (IS_VOLUME_VALID(&uVar8))
			{
				Function_3(&uVar8, &uVar5, 2, 3, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("fod_pop: Cannot find fodv_soldiers_set to create population volumes");
			}
		}
		else
		{
			uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_soldiers_set");
			if (IS_VOLUME_VALID(&uVar8))
			{
				Function_3(&uVar8, &uVar4, 2, 3, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("fod_pop: Cannot find fodv_soldiers_set to create population volumes");
			}
		}
		uVar8 = FIND_VOLUME_IN_LAYOUT(&uVar7, "fodv_region");
		if (IS_VOLUME_VALID(&uVar8))
		{
			Function_8(&uVar8, &bVar6, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_region to create population volumes");
		}
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
	Function_10("Finished loading El Presidio population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xF2B / 3883
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xF3C / 3900
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

var Function_3(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0xF94 / 3988
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

bool Function_4(var uParam0, bool bParam1) //Position: 0x1026 / 4134
{
	int iVar0;
	
	iVar0 = Function_6(uParam0);
	if (!Function_5(iVar0))
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

bool Function_5(int iParam0) //Position: 0x1064 / 4196
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_6(int iParam0) //Position: 0x107B / 4219
{
	if (!Function_7(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_7(bool bParam0) //Position: 0x1095 / 4245
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x10AB / 4267
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
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

bool Function_9(int iParam0) //Position: 0x113B / 4411
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x1157 / 4439
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

bool Function_11(var uParam0, int iParam1) //Position: 0x1197 / 4503
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x11B4 / 4532
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x11C5 / 4549
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_15(iParam3), Function_14(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_14(int iParam0) //Position: 0x1243 / 4675
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

var Function_15(int iParam0) //Position: 0x12AF / 4783
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

var Function_16(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x131B / 4891
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x139D / 5021
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_18(var uParam0, int iParam1) //Position: 0x13E4 / 5092
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_19(int iParam0) //Position: 0x13F3 / 5107
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_20(char* cParam0) //Position: 0x1400 / 5120
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

