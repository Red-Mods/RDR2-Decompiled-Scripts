//Decompiled with MagicRDR v1.0
//Function Count : 28
//Statics Count : 4
//Natives Count : 50
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_27("Loading Torquemada population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_26(&(Global_30750[6]));
	Global_30750[6] = Function_25("animal_horse", 4);
	Function_24(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_26(&(Global_30750[15]));
	Global_30750[15] = Function_25("animal_horse_unsaddled", 0);
	Function_23(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_26(&(Global_30750[0]));
	Global_30750[0] = Function_25("ped_wilderness", Global_30840);
	Function_23(&(Global_30750[0]), 239, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 240, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 241, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 292, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 295, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 297, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 269, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 270, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 271, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 272, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 278, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 279, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 280, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 281, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 282, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 284, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 306, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 317, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_23(&(Global_30750[0]), 323, 2.0f, 0, 0);
	Function_26(&(Global_30750[1]));
	Global_30750[1] = Function_25("ped_traveller", 3);
	Function_23(&(Global_30750[1]), 63, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 62, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 253, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 263, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 265, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 275, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 302, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 303, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 311, 10.0f, 0, 0);
	Function_23(&(Global_30750[1]), 318, 10.0f, 0, 0);
	Function_26(&iVar0);
	if (!Function_22() && Global_25974[8])
	{
		if (Function_21(28, 0) || Function_15(28))
		{
			iVar0 = Function_25("ped_fivefingerarmy", 0);
			Function_23(&iVar0, 392, 1.0f, 0, 0);
			Function_23(&iVar0, 462, 1.0f, 0, 0);
			Function_23(&iVar0, 311, 1.0f, 0, 0);
			Function_23(&iVar0, 294, 1.0f, 0, 0);
		}
		else
		{
			iVar0 = Function_25("ped_fivefinger", 0);
			Function_23(&iVar0, 311, 1.0f, 0, 0);
			Function_23(&iVar0, 294, 1.0f, 0, 0);
			Function_23(&iVar0, 280, 1.0f, 0, 0);
			Function_23(&iVar0, 283, 1.0f, 0, 0);
		}
	}
	Function_26(&(Global_30750[5]));
	Global_30750[5] = Function_25("animal_wilderness", 1);
	Function_12(&(Global_30750[5]), 1059, 3.0f, 15, 1, 0);
	Function_23(&(Global_30750[5]), 1078, 10.0f, 1, 0);
	Function_12(&(Global_30750[5]), 1128, 9.0f, 15, 1, 0);
	Function_23(&(Global_30750[5]), 1081, 8.0f, 0, 0);
	Function_26(&(Global_30750[11]));
	Global_30750[11] = Function_25("animal_predator", 1);
	Function_23(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1050, 1.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1051, 1.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_26(&(Global_30750[10]));
	Global_30750[10] = Function_25("animal_hunt", 0);
	Function_26(&(Global_30750[8]));
	Global_30750[8] = Function_25("animal_herd", 1);
	Function_23(&(Global_30750[8]), 1064, 1.0f, 1, 0);
	Function_23(&(Global_30750[8]), 1059, 5.0f, 1, 0);
	Function_23(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_23(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	iVar1 = Function_25("snakes", 0);
	Function_12(&iVar1, 1059, 8.0f, 14, 0, 0);
	iVar2 = Function_25("vultures", 0);
	Function_12(&iVar2, 1128, 10.0f, 14, 0, 0);
	iVar3 = Function_25("Crows", 0);
	Function_23(&iVar3, 1131, 10.0f, 0, 0);
	iVar4 = Function_25("Dogs", 0);
	Function_23(&iVar4, 1032, 8.0f, 0, 0);
	Function_23(&iVar4, 1032, 8.0f, 0, 0);
	Function_26(&(Global_30750[7]));
	Global_30750[7] = Function_25("animal_bird", 1);
	Function_12(&(Global_30750[7]), 1131, 10.0f, 14, 0, 0);
	Function_26(&(Global_30750[14]));
	Global_30750[14] = Function_25("birds_trees", 1);
	Function_23(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_23(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_23(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_23(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_23(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_23(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_11(Global_30750[5], 4E-05f);
	Function_26(&(Global_30750[2]));
	Global_30750[2] = Function_25("ped_law", 1);
	Function_23(&(Global_30750[2]), 466, 8.0f, 1, 0);
	Function_23(&(Global_30750[2]), 462, 8.0f, 1, 0);
	Function_23(&(Global_30750[2]), 463, 8.0f, 1, 0);
	Function_26(&(Global_30750[3]));
	Global_30750[3] = Function_25("ped_bad_guys_local", 1);
	Function_23(&(Global_30750[3]), 410, 1.0f, 1, 0);
	Function_23(&(Global_30750[3]), 413, 4.0f, 1, 0);
	Function_23(&(Global_30750[3]), 406, 4.0f, 1, 0);
	Function_26(&(Global_30750[4]));
	Global_30750[4] = Function_25("ped_bad_guys_generic", 1);
	Function_23(&(Global_30750[4]), 500, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 501, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 499, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 496, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 497, 1.0f, 1, 0);
	Function_26(&(Global_30750[9]));
	Global_30750[9] = Function_25("ped_vehicle", 1);
	Function_23(&(Global_30750[9]), 1183, 4.0f, 1, 0);
	Function_23(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_23(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_23(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_23(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar5 = CREATE_POPULATION_SET(1);
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
	bVar6 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (IS_LAYOUTREF_VALID(bVar6))
	{
		bVar7 = FIND_VOLUME_IN_LAYOUT(bVar6, "torv_crows_set");
		if (IS_VOLUME_VALID(bVar7))
		{
			Function_7(bVar7, iVar3, 6E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_birds_set to create population volumes");
		}
		if (!Function_22() && Global_25974[8])
		{
			bVar7 = FIND_VOLUME_IN_LAYOUT(bVar6, "torv_fff");
			if (IS_VOLUME_VALID(bVar7))
			{
				bVar8 = Function_6(bVar7, iVar0, 5, 1, 0, 0);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar8, 50.0f);
				Function_4(bVar8);
			}
			else
			{
				LOG_ERROR("tor_pop: Cannot find torv_fff to create population volumes");
			}
		}
		bVar7 = FIND_VOLUME_IN_LAYOUT(bVar6, "torv_snakes_set");
		if (IS_VOLUME_VALID(bVar7))
		{
			Function_6(bVar7, iVar1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_snakes_set to create population volumes");
		}
		bVar7 = FIND_VOLUME_IN_LAYOUT(bVar6, "torv_vultures_set");
		if (IS_VOLUME_VALID(bVar7))
		{
			Function_3(bVar7, iVar2, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_vultures_set to create population volumes");
		}
		bVar7 = FIND_VOLUME_IN_LAYOUT(bVar6, "torv_dogs_set");
		if (IS_VOLUME_VALID(bVar7))
		{
			Function_6(bVar7, iVar4, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tor_pop: Cannot find torv_dogs_set to create population volumes");
		}
		bVar7 = FIND_VOLUME_IN_LAYOUT(bVar6, "torv_region_set");
		if (IS_VOLUME_VALID(bVar7))
		{
			Function_7(bVar7, uVar5, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agvv_pop: Cannot find henv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("tor_pop: Cannot find layout Torquemada_layout to create population volumes");
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
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	Global_13171 = Global_29155[Local_010].f_20;
	Function_9("Finished loading Torquemada population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xEB8 / 3768
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xEC7 / 3783
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

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0xF1C / 3868
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

void Function_4(bool bParam0) //Position: 0xF9E / 3998
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(bool bParam0) //Position: 0x1032 / 4146
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

var Function_6(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1051 / 4177
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, iParam1);
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

var Function_7(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x10D1 / 4305
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

bool Function_8(int iParam0) //Position: 0x1151 / 4433
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0x116D / 4461
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

bool Function_10(var uParam0, int iParam1) //Position: 0x11AB / 4523
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x11C7 / 4551
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(int iParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x11D7 / 4567
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
	if (!IS_POPSET_VALID(*iParam0))
	{
		*iParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION_TIMED(*iParam0, bParam1, fParam2, Function_14(iParam3), Function_13(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*iParam0) - 1);
}

var Function_13(int iParam0) //Position: 0x124F / 4687
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_14(int iParam0) //Position: 0x12BB / 4795
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

int Function_15(int iParam0) //Position: 0x1327 / 4903
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		return 0;
	}
	iVar0 = Function_19(iParam0);
	if (!Function_16(Function_19(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_16(int iParam0) //Position: 0x135D / 4957
{
	if (!Function_18(iParam0))
	{
		return 0;
	}
	if (!Function_17(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_17(int iParam0) //Position: 0x1381 / 4993
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_18(int iParam0) //Position: 0x1396 / 5014
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_19(int iParam0) //Position: 0x13AD / 5037
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_20(int iParam0) //Position: 0x13C7 / 5063
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_21(int iParam0, bool bParam1) //Position: 0x13DD / 5085
{
	int iVar0;
	
	iVar0 = Function_19(iParam0);
	if (!Function_18(iVar0))
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

bool Function_22() //Position: 0x141A / 5146
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_23(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1423 / 5155
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
	if (!IS_POPSET_VALID(*iParam0))
	{
		*iParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION(*iParam0, bParam1, fParam2);
	if (bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*iParam0) - 1);
}

var Function_24(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x149F / 5279
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_23(uParam0, bParam1, fParam2, iParam3, 0);
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

int Function_25(bool bParam0, int iParam1) //Position: 0x14E4 / 5348
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_26(int iParam0) //Position: 0x14F1 / 5361
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_27(bool bParam0, var uParam1) //Position: 0x14FD / 5373
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

