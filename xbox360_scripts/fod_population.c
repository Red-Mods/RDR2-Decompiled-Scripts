//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 41
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_20("Loading El Presidio population file", 3);
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
	Function_16(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 323, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]));
	Global_30750[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 63, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 62, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 253, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 263, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 265, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 275, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 302, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 303, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 311, 10.0f, 0, 0);
	Function_16(&(Global_30750[1]), 318, 10.0f, 0, 0);
	Function_19(&(Global_30750[5]));
	Global_30750[5] = Function_18("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 1059, 3.0f, 15, 1, 0);
	Function_16(&(Global_30750[5]), 1078, 10.0f, 1, 0);
	Function_13(&(Global_30750[5]), 1128, 9.0f, 15, 1, 0);
	Function_16(&(Global_30750[5]), 1081, 8.0f, 0, 0);
	Function_19(&(Global_30750[10]));
	Global_30750[10] = Function_18("animal_hunt", 0);
	Function_19(&(Global_30750[11]));
	Global_30750[11] = Function_18("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1115, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1050, 1.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1051, 1.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_19(&(Global_30750[8]));
	Global_30750[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1064, 1.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1059, 5.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_16(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	bVar0 = Function_18("snakes", 0);
	Function_13(&bVar0, 1059, 3.0f, 15, 1, 0);
	bVar1 = Function_18("vultures", 0);
	Function_13(&bVar1, 1128, 10.0f, 14, 0, 0);
	uVar2 = Function_18("Crows", 0);
	Function_13(&uVar2, 1131, 10.0f, 14, 0, 0);
	bVar3 = Function_18("nArmadillo", 0);
	Function_16(&bVar3, 1081, 6,5f, 0, 0);
	bVar4 = Function_18("GenericSoldiers", 0);
	Function_13(&bVar4, 382, 10.0f, 14, 1, 0);
	Function_13(&bVar4, 383, 10.0f, 14, 1, 0);
	Function_13(&bVar4, 384, 10.0f, 14, 1, 0);
	Function_13(&bVar4, 385, 10.0f, 14, 1, 0);
	uVar5 = Function_18("GenericRebels", 0);
	Function_13(&uVar5, 519, 10.0f, 14, 1, 0);
	Function_13(&uVar5, 520, 10.0f, 14, 1, 0);
	Function_13(&uVar5, 518, 10.0f, 14, 1, 0);
	Function_13(&uVar5, 517, 10.0f, 14, 1, 0);
	Function_19(&(Global_30750[7]));
	Global_30750[7] = Function_18("animal_bird", 1);
	Function_13(&(Global_30750[7]), 1131, 10.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1135, 3.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 3.0f, 14, 0, 0);
	Function_13(&(Global_30750[7]), 1136, 3.0f, 14, 0, 0);
	Function_19(&(Global_30750[14]));
	Global_30750[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_12(Global_30750[5], 4E-05f);
	Function_19(&(Global_30750[2]));
	Global_30750[2] = Function_18("ped_law", 1);
	Function_16(&(Global_30750[2]), 455, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 456, 8.0f, 1, 0);
	Function_16(&(Global_30750[2]), 457, 8.0f, 1, 0);
	Function_19(&(Global_30750[3]));
	Global_30750[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 410, 1.0f, 1, 0);
	Function_16(&(Global_30750[3]), 413, 4.0f, 1, 0);
	Function_16(&(Global_30750[3]), 406, 4.0f, 1, 0);
	Function_19(&(Global_30750[4]));
	Global_30750[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 407, 4.0f, 0, 0);
	Function_19(&(Global_30750[9]));
	Global_30750[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1185, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1184, 2.0f, 1, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	bVar6 = CREATE_POPULATION_SET(1);
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
	bVar7 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (IS_LAYOUTREF_VALID(bVar7))
	{
		bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_crows_set");
		if (IS_VOLUME_VALID(bVar8))
		{
			Function_8(bVar8, uVar2, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_birds_set to create population volumes");
		}
		bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_vultures_set");
		if (IS_VOLUME_VALID(bVar8))
		{
			Function_8(bVar8, bVar1, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_vultures_set to create population volumes");
		}
		bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_Armadillo_set");
		if (IS_VOLUME_VALID(bVar8))
		{
			Function_8(bVar8, bVar3, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_Armadillo_set to create population volumes");
		}
		bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_snakes_set");
		if (IS_VOLUME_VALID(bVar8))
		{
			Function_8(bVar8, bVar0, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("fod_pop: Cannot find fodv_snakes_set to create population volumes");
		}
		if (Function_4(41, 0))
		{
			bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_soldiers_set");
			if (IS_VOLUME_VALID(bVar8))
			{
				Function_3(bVar8, uVar5, 2, 3, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("fod_pop: Cannot find fodv_soldiers_set to create population volumes");
			}
		}
		else
		{
			bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_soldiers_set");
			if (IS_VOLUME_VALID(bVar8))
			{
				Function_3(bVar8, bVar4, 2, 3, 1, 0, 1);
			}
			else
			{
				LOG_ERROR("fod_pop: Cannot find fodv_soldiers_set to create population volumes");
			}
		}
		bVar8 = FIND_VOLUME_IN_LAYOUT(bVar7, "fodv_region");
		if (IS_VOLUME_VALID(bVar8))
		{
			Function_8(bVar8, bVar6, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_region to create population volumes");
		}
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
	Function_10("Finished loading El Presidio population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xEEF / 3823
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xEFE / 3838
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

var Function_3(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0xF53 / 3923
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

bool Function_4(var uParam0, bool bParam1) //Position: 0xFD5 / 4053
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_5(int iParam0) //Position: 0x1012 / 4114
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_6(int iParam0) //Position: 0x1029 / 4137
{
	if (!Function_7(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_7(bool bParam0) //Position: 0x1043 / 4163
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_8(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1059 / 4185
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

bool Function_9(int iParam0) //Position: 0x10D9 / 4313
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x10F5 / 4341
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

bool Function_11(var uParam0, int iParam1) //Position: 0x1133 / 4403
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x114F / 4431
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x115F / 4447
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

var Function_14(int iParam0) //Position: 0x11C1 / 4545
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

var Function_15(int iParam0) //Position: 0x122D / 4653
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

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1299 / 4761
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x130E / 4878
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

var Function_18(bool bParam0, int iParam1) //Position: 0x1353 / 4947
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_19(int iParam0) //Position: 0x1360 / 4960
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_20(bool bParam0, var uParam1) //Position: 0x136C / 4972
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

