//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 40
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_15("Loading WotS population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 980, 100.0f, 0, 3);
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
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_13("ped_wilderness", Global_30840);
	Function_11(&(Global_30750[0]), 17, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 23, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 28, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 29, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 30, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 32, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 36, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 45, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 96, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 108, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 109, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 110, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 113, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 152, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 168, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 169, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 176, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 177, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 218, 10.0f, 0, 0);
	Function_11(&(Global_30750[0]), 16, 10.0f, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_30750[1]), 89, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 130, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 223, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 225, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 226, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 227, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 229, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 230, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 18, 1.0f, 0, 0);
	Function_11(&(Global_30750[1]), 75, 1.0f, 0, 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_13("animal_hunt", 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_30750[11]), 1069, 4.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1070, 4.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1071, 4.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1091, 4.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1092, 4.0f, 0, 0);
	Function_11(&(Global_30750[11]), 1093, 4.0f, 0, 0);
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_30750[5]), 1058, 2.0f, 14, 1, 0);
	Function_8(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1050, 2.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1051, 2.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 2.0f, 30, 0, 0);
	Function_8(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1050, 3.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1051, 3.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1052, 3.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1084, 12.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1082, 12.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1069, 2.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1070, 2.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1071, 2.0f, 33, 0, 0);
	Function_8(&(Global_30750[5]), 1128, 8.0f, 14, 1, 0);
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_14(&(Global_30750[14]));
	Global_30750[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_7(Global_30750[5], 6E-05f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_13("ped_law", 1);
	Function_11(&(Global_30750[2]), 449, 1.0f, 0, 0);
	Function_11(&(Global_30750[2]), 436, 4.0f, 0, 0);
	Function_11(&(Global_30750[2]), 437, 8.0f, 0, 0);
	Function_11(&(Global_30750[2]), 438, 8.0f, 0, 0);
	Function_11(&(Global_30750[2]), 440, 8.0f, 0, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_30750[3]), 403, 1.0f, 0, 0);
	Function_11(&(Global_30750[3]), 400, 4.0f, 0, 0);
	Function_11(&(Global_30750[3]), 397, 8.0f, 0, 0);
	Function_11(&(Global_30750[3]), 397, 8.0f, 0, 0);
	Function_11(&(Global_30750[3]), 398, 8.0f, 0, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_30750[4]), 474, 1.0f, 0, 0);
	Function_11(&(Global_30750[4]), 470, 4.0f, 0, 0);
	Function_11(&(Global_30750[4]), 467, 8.0f, 0, 0);
	Function_11(&(Global_30750[4]), 467, 8.0f, 0, 0);
	Function_11(&(Global_30750[4]), 467, 8.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	while (!Function_6(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar0 = FIND_NAMED_LAYOUT("WreckSerendipity_layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(bVar0, "serv_birdVol");
		if (IS_VOLUME_VALID(bVar1))
		{
			Function_3(bVar1, Global_30750[7], 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("SER_Pop: Cannot find serv_birdVol to create bird volumes");
		}
	}
	else
	{
		LOG_ERROR("SER_Pop: Layout Invalid - Cannot create population volumes for TumPopArea_1");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_6(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_5("Finished loading WotS population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xBEB / 3051
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xBFA / 3066
{
	int iVar0;
	
	if (!Function_4(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xC4F / 3151
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

bool Function_4(int iParam0) //Position: 0xCCF / 3279
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, float fParam1) //Position: 0xCEB / 3307
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0xD29 / 3369
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0xD45 / 3397
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xD55 / 3413
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0xDCD / 3533
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

var Function_10(int iParam0) //Position: 0xE39 / 3641
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

var Function_11(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xEA5 / 3749
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

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0xF21 / 3873
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_13(bool bParam0, int iParam1) //Position: 0xF66 / 3942
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_14(int iParam0) //Position: 0xF73 / 3955
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_15(bool bParam0, var uParam1) //Position: 0xF7F / 3967
{
	if (!Function_4(128))
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

