//Decompiled with MagicRDR v1.0
//Function Count : 17
//Statics Count : 2
//Natives Count : 40
//Parameters Count : 2

#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	ENABLE_AMBIENT_SPAWNING(true);
	strcpy(&Global_13171, "Loa", 4);
	Function_16("Loading Nosalida population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_15(&(Global_30750[6]));
	Global_30750[6] = Function_14("animal_horse", 4);
	Function_13(&(Global_30750[6]), 976, 8.0f, 0, 0);
	Function_13(&(Global_30750[6]), 977, 8.0f, 0, 0);
	Function_13(&(Global_30750[6]), 981, 8.0f, 0, 0);
	Function_13(&(Global_30750[6]), 983, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 984, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 985, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 986, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 987, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 988, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 989, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 990, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 991, 100.0f, 0, 0);
	Function_15(&(Global_30750[6]));
	Global_30750[6] = Function_14("animal_horse", 4);
	Function_12(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_15(&(Global_30750[15]));
	Global_30750[15] = Function_14("animal_horse_unsaddled", 0);
	Function_13(&(Global_30750[15]), 1000, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 1001, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 1002, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 996, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 997, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 998, 100.0f, 0, 0);
	Function_15(&(Global_30750[0]));
	Global_30750[0] = Function_14("ped_wilderness", Global_30840);
	Function_13(&(Global_30750[0]), 239, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 240, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 241, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 292, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 295, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 297, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 269, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 270, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 271, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 272, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 278, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 279, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 280, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 281, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 282, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 284, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 306, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 317, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 323, 2.0f, 0, 0);
	Function_15(&(Global_30750[1]));
	Global_30750[1] = Function_14("ped_traveller", 3);
	Function_13(&(Global_30750[1]), 63, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 62, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 253, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 263, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 265, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 275, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 302, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 303, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 311, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 318, 10.0f, 0, 0);
	Function_15(&(Global_30750[10]));
	Global_30750[10] = Function_14("animal_hunt", 0);
	Function_15(&(Global_30750[11]));
	Global_30750[11] = Function_14("animal_predator", 1);
	Function_13(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_15(&(Global_30750[5]));
	Global_30750[5] = Function_14("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_13(&(Global_30750[5]), 1079, 4.0f, 0, 0);
	Function_13(&(Global_30750[5]), 1078, 4.0f, 0, 0);
	Function_9(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_9(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_9(&(Global_30750[5]), 1051, 2.0f, 30, 0, 0);
	Function_9(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_9(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_9(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_9(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_9(&(Global_30750[5]), 1051, 3.0f, 33, 0, 0);
	Function_9(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_9(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_9(&(Global_30750[5]), 1128, 8.0f, 30, 1, 0);
	Function_13(&(Global_30750[5]), 1081, 10.0f, 0, 0);
	Function_9(&(Global_30750[5]), 1059, 2.0f, 14, 1, 0);
	Function_15(&(Global_30750[8]));
	Global_30750[8] = Function_14("animal_herd", 1);
	Function_13(&(Global_30750[8]), 1008, 6.0f, 0, 0);
	Function_15(&(Global_30750[7]));
	Global_30750[7] = Function_14("animal_bird", 1);
	Function_9(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_9(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_9(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_9(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(Global_30750[5], 6E-05f);
	uVar0 = Function_14("chickens", 0);
	Function_9(&uVar0, 1015, 100.0f, 15, 0, 0);
	Function_9(&uVar0, 1017, 100.0f, 15, 0, 0);
	uVar1 = Function_14("goats", 0);
	Function_9(&uVar1, 1026, 10.0f, 14, 0, 0);
	Function_9(&uVar1, 1027, 10.0f, 14, 0, 0);
	Function_9(&uVar1, 1028, 10.0f, 14, 0, 0);
	uVar2 = Function_14("dog_general", 0);
	Function_13(&uVar2, 1030, 1.0f, 0, 0);
	Function_13(&uVar2, 1031, 1.0f, 0, 0);
	Function_13(&uVar2, 1032, 1.0f, 0, 0);
	switch (Global_30619)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Function_15(&(Global_30750[2]));
			Global_30750[2] = Function_14("ped_law", 1);
			Function_13(&(Global_30750[2]), 379, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 380, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 381, 8.0f, 0, 0);
			Function_15(&(Global_30750[3]));
			Global_30750[3] = Function_14("ped_bad_guys_local", 1);
			Function_13(&(Global_30750[3]), 407, 1.0f, 0, 0);
			Function_13(&(Global_30750[3]), 406, 4.0f, 0, 0);
			Function_15(&(Global_30750[4]));
			Global_30750[4] = Function_14("ped_bad_guys_generic", 1);
			Function_13(&(Global_30750[4]), 516, 1.0f, 0, 0);
			Function_13(&(Global_30750[4]), 518, 1.0f, 0, 0);
			Function_13(&(Global_30750[4]), 521, 1.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_15(&(Global_30750[2]));
			Global_30750[2] = Function_14("ped_law", 1);
			Function_13(&(Global_30750[2]), 379, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 379, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 379, 8.0f, 0, 0);
			Function_15(&(Global_30750[3]));
			Global_30750[3] = Function_14("ped_bad_guys_local", 1);
			Function_13(&(Global_30750[3]), 516, 1.0f, 0, 0);
			Function_13(&(Global_30750[3]), 521, 4.0f, 0, 0);
			Function_13(&(Global_30750[3]), 518, 4.0f, 0, 0);
			Function_15(&(Global_30750[4]));
			Global_30750[4] = Function_14("ped_bad_guys_generic", 1);
			Function_13(&(Global_30750[4]), 392, 1.0f, 0, 0);
			break;
	}
	Function_15(&(Global_30750[9]));
	Global_30750[9] = Function_14("ped_vehicle", 1);
	Function_13(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	while (!Function_7(&(Global_29008[iScriptParam_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_6("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_5(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar3 = FIND_NAMED_LAYOUT("Nosalida_layout");
	if (IS_LAYOUTREF_VALID(bVar3))
	{
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "nosv_chickens_set");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_4(bVar4, uVar0, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("nos_pop: Cannot find nosv_chickens to create chickens");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "nosv_dogs_set");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_4(bVar4, uVar2, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("nos_pop: Cannot find nosv_dogs to create dogs");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "nosv_goats_set");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_4(bVar4, uVar1, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("nos_pop: Cannot find nosv_goats to create goats");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "nv_BirdPop");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_3(bVar4, Global_30750[7], 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tum_pop: Cannot find NosalidaPopArea_1 to create bird volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_7(&(Global_29008[iScriptParam_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_5(1));
	}
	Global_13171 = Global_29155[iScriptParam_010].f_20;
	Function_6("Finished loading Nosalida population file", 5.0f);
	Function_1(&(Global_29008[iScriptParam_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xEBD / 3773
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xECC / 3788
{
	int iVar0;
	
	if (!Function_5(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xF21 / 3873
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

var Function_4(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xFA1 / 4001
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

bool Function_5(int iParam0) //Position: 0x1021 / 4129
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0, float fParam1) //Position: 0x103D / 4157
{
	if (!Function_5(128))
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

bool Function_7(var uParam0, int iParam1) //Position: 0x107B / 4219
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x1097 / 4247
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_9(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x10A7 / 4263
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_11(iParam3), Function_10(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_10(int iParam0) //Position: 0x111F / 4383
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

var Function_11(int iParam0) //Position: 0x118B / 4491
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

var Function_12(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x11F7 / 4599
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(uParam0, bParam1, fParam2, bParam3, 0);
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

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x123C / 4668
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

var Function_14(bool bParam0, int iParam1) //Position: 0x12B8 / 4792
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_15(int iParam0) //Position: 0x12C5 / 4805
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_16(bool bParam0, var uParam1) //Position: 0x12D1 / 4817
{
	if (!Function_5(128))
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

