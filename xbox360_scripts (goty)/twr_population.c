//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 4
//Natives Count : 26
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_14("Loading Twin Rocks population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_13(&(Global_30750[6]));
	Global_30750[6] = Function_12("animal_horse", 4);
	Function_11(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_13(&(Global_30750[15]));
	Global_30750[15] = Function_12("animal_horse_unsaddled", 0);
	Function_10(&(Global_30750[15]), 976, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_13(&(Global_30750[0]));
	Global_30750[0] = Function_12("ped_wilderness", Global_30840);
	Function_10(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 175, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 174, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 55, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 178, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 153, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 173, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 199, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 56, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 46, 8.0f, 0, 0);
	Function_10(&(Global_30750[0]), 50, 10.0f, 0, 0);
	Function_10(&(Global_30750[0]), 202, 10.0f, 0, 0);
	Function_10(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_10(&(Global_30750[0]), 54, 10.0f, 0, 0);
	Function_10(&(Global_30750[0]), 53, 10.0f, 0, 0);
	Function_10(&(Global_30750[0]), 33, 10.0f, 0, 0);
	Function_10(&(Global_30750[0]), 34, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]));
	Global_30750[1] = Function_12("ped_traveller", 3);
	Function_10(&(Global_30750[1]), 64, 10.0f, 0, 0);
	Function_10(&(Global_30750[1]), 74, 10.0f, 0, 0);
	Function_10(&(Global_30750[1]), 48, 10.0f, 0, 0);
	Function_10(&(Global_30750[1]), 73, 10.0f, 0, 0);
	Function_10(&(Global_30750[1]), 78, 10.0f, 0, 0);
	Function_10(&(Global_30750[1]), 49, 10.0f, 0, 0);
	Function_13(&(Global_30750[11]));
	Global_30750[11] = Function_12("animal_predator", 1);
	Function_10(&(Global_30750[11]), 1061, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1062, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1063, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1088, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1089, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1090, 5.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_10(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_13(&(Global_30750[10]));
	Global_30750[10] = Function_12("animal_hunt", 0);
	Function_13(&(Global_30750[5]));
	Global_30750[5] = Function_12("animal_wilderness", 1);
	Function_7(&(Global_30750[5]), 976, 7.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 976, 8.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1050, 1.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1050, 1.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1051, 1.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1052, 1.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1052, 1.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1012, 4.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1128, 10.0f, 30, 0, 0);
	Function_7(&(Global_30750[5]), 1058, 9.0f, 14, 0, 0);
	Function_7(&(Global_30750[5]), 1050, 1.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1050, 1.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1051, 1.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1052, 1.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1052, 1.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1084, 8.0f, 33, 0, 0);
	Function_7(&(Global_30750[5]), 1082, 8.0f, 33, 0, 0);
	Function_13(&(Global_30750[8]));
	Global_30750[8] = Function_12("animal_herd", 1);
	Function_7(&(Global_30750[8]), 1008, 6.0f, 30, 0, 0);
	Function_7(&(Global_30750[8]), 976, 3.0f, 30, 0, 0);
	Function_7(&(Global_30750[8]), 1128, 1.0f, 30, 0, 0);
	Function_7(&(Global_30750[8]), 976, 2.0f, 33, 0, 0);
	Function_7(&(Global_30750[8]), 1049, 1.0f, 33, 0, 0);
	Function_13(&(Global_30750[7]));
	Global_30750[7] = Function_12("animal_bird", 1);
	Function_7(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_7(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_7(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_7(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_7(&(Global_30750[7]), 1145, 3.0f, 14, 0, 0);
	Function_13(&(Global_30750[14]));
	Global_30750[14] = Function_12("birds_trees", 1);
	Function_10(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_10(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_6(Global_30750[5], 6E-05f);
	Function_13(&(Global_30750[2]));
	Global_30750[2] = Function_12("ped_law", 1);
	Function_10(&(Global_30750[2]), 449, 1.0f, 0, 0);
	Function_10(&(Global_30750[2]), 438, 4.0f, 0, 0);
	Function_10(&(Global_30750[2]), 440, 8.0f, 0, 0);
	Function_10(&(Global_30750[2]), 441, 8.0f, 0, 0);
	Function_10(&(Global_30750[2]), 442, 8.0f, 0, 0);
	Function_13(&(Global_30750[3]));
	Global_30750[3] = Function_12("ped_bad_guys_local", 1);
	Function_10(&(Global_30750[3]), 398, 1.0f, 0, 0);
	Function_10(&(Global_30750[3]), 397, 4.0f, 0, 0);
	Function_10(&(Global_30750[3]), 397, 8.0f, 0, 0);
	Function_10(&(Global_30750[3]), 397, 8.0f, 0, 0);
	Function_10(&(Global_30750[3]), 398, 8.0f, 0, 0);
	Function_13(&(Global_30750[4]));
	Global_30750[4] = Function_12("ped_bad_guys_generic", 1);
	Function_10(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_10(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_10(&(Global_30750[4]), 399, 10.0f, 0, 0);
	Function_10(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_10(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_10(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_10(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_10(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_10(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_13(&(Global_30750[9]));
	Global_30750[9] = Function_12("ped_vehicle", 1);
	Function_10(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_5() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_4(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_3(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_2("Finished loading Twin Rocks population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xBA0 / 2976
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_2(bool bParam0, float fParam1) //Position: 0xBAF / 2991
{
	if (!Function_3(128))
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

bool Function_3(int iParam0) //Position: 0xBED / 3053
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_4(int iParam0, int iParam1) //Position: 0xC09 / 3081
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5() //Position: 0xC25 / 3109
{
	int iVar0;
	
	if (!Function_3(1))
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

void Function_6(var uParam0, bool bParam1) //Position: 0xC7A / 3194
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_7(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xC8A / 3210
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_9(iParam3), Function_8(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_8(int iParam0) //Position: 0xD02 / 3330
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

var Function_9(int iParam0) //Position: 0xD6E / 3438
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

var Function_10(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xDDA / 3546
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

var Function_11(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0xE56 / 3670
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_10(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_12(bool bParam0, int iParam1) //Position: 0xE9B / 3739
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_13(int iParam0) //Position: 0xEA8 / 3752
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_14(bool bParam0, var uParam1) //Position: 0xEB4 / 3764
{
	if (!Function_3(128))
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

