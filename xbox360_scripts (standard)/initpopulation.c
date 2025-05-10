//Decompiled with MagicRDR v1.0
//Function Count : 13
//Statics Count : 4
//Natives Count : 20
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_0 = { StackVal, ScriptParam_0 };
	Global_30839++;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_12("Loading population file", 3);
	BEGIN_POPULATION_DEFINITION();
	Function_11(&(Global_30750[0]));
	Global_30750[0] = Function_10("ped_wilderness", Global_30840);
	Function_9(&(Global_30750[0]), 111, 8.0f, 0, 0);
	Function_9(&(Global_30750[0]), 112, 8.0f, 0, 0);
	Function_9(&(Global_30750[0]), 113, 8.0f, 0, 0);
	Function_11(&(Global_30750[1]));
	Global_30750[1] = Function_10("ped_traveller", 3);
	Function_9(&(Global_30750[1]), 111, 8.0f, 0, 0);
	Function_9(&(Global_30750[1]), 112, 8.0f, 0, 0);
	Function_9(&(Global_30750[1]), 113, 8.0f, 0, 0);
	Function_9(&(Global_30750[1]), 76, 8.0f, 0, 0);
	Function_11(&(Global_30750[2]));
	Global_30750[2] = Function_10("ped_law", 1);
	Function_9(&(Global_30750[2]), 449, 1.0f, 0, 0);
	Function_9(&(Global_30750[2]), 436, 4.0f, 0, 0);
	Function_9(&(Global_30750[2]), 437, 8.0f, 0, 0);
	Function_9(&(Global_30750[2]), 438, 8.0f, 0, 0);
	Function_9(&(Global_30750[2]), 440, 8.0f, 0, 0);
	Function_11(&(Global_30750[3]));
	Global_30750[3] = Function_10("ped_bad_guys_local", 1);
	Function_9(&(Global_30750[3]), 398, 1.0f, 1, 0);
	Function_9(&(Global_30750[3]), 397, 4.0f, 1, 0);
	Function_9(&(Global_30750[3]), 397, 8.0f, 1, 0);
	Function_9(&(Global_30750[3]), 397, 8.0f, 1, 0);
	Function_9(&(Global_30750[3]), 398, 8.0f, 1, 0);
	Function_11(&(Global_30750[4]));
	Global_30750[4] = Function_10("ped_bad_guys_generic", 1);
	Function_9(&(Global_30750[4]), 474, 1.0f, 1, 0);
	Function_9(&(Global_30750[4]), 470, 4.0f, 1, 0);
	Function_9(&(Global_30750[4]), 467, 8.0f, 1, 0);
	Function_9(&(Global_30750[4]), 467, 8.0f, 1, 0);
	Function_9(&(Global_30750[4]), 467, 8.0f, 1, 0);
	Function_11(&(Global_30750[11]));
	Global_30750[11] = Function_10("animal_predator", 0);
	Function_9(&(Global_30750[11]), 1049, 2.0f, 0, 0);
	Function_9(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_9(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_11(&(Global_30750[12]));
	Global_30750[12] = Function_10("animal_prey", 0);
	Function_9(&(Global_30750[12]), 1026, 2.0f, 0, 0);
	Function_9(&(Global_30750[12]), 1118, 2.0f, 0, 0);
	Function_9(&(Global_30750[12]), 1109, 2.0f, 0, 0);
	Function_11(&(Global_30750[13]));
	Global_30750[13] = Function_10("animal_hunted", 0);
	Function_9(&(Global_30750[13]), 1050, 2.0f, 0, 0);
	Function_9(&(Global_30750[13]), 1118, 2.0f, 0, 0);
	Function_9(&(Global_30750[13]), 1109, 2.0f, 0, 0);
	Function_11(&(Global_30750[5]));
	Global_30750[5] = Function_10("animal_wilderness", 1);
	Function_6(&(Global_30750[5]), 976, 6.0f, 30, 0, 0);
	Function_6(&(Global_30750[5]), 1049, 3.0f, 30, 0, 0);
	Function_6(&(Global_30750[5]), 1128, 9.0f, 30, 0, 0);
	Function_6(&(Global_30750[5]), 1012, 6.0f, 30, 0, 0);
	Function_6(&(Global_30750[5]), 976, 8.0f, 33, 0, 0);
	Function_6(&(Global_30750[5]), 1049, 8.0f, 33, 0, 0);
	Function_11(&(Global_30750[6]));
	Global_30750[6] = Function_10("animal_horse", 1);
	Function_9(&(Global_30750[6]), 976, 8.0f, 0, 0);
	Function_9(&(Global_30750[6]), 977, 8.0f, 0, 0);
	Function_9(&(Global_30750[6]), 978, 8.0f, 0, 0);
	Function_11(&(Global_30750[7]));
	Global_30750[7] = Function_10("animal_bird", 1);
	Function_9(&(Global_30750[7]), 1128, 100.0f, 0, 0);
	Function_6(&(Global_30750[7]), 1131, 9.0f, 14, 0, 0);
	Function_11(&(Global_30750[14]));
	Global_30750[14] = Function_10("birds_trees", 1);
	Function_9(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_9(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_9(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_9(&(Global_30750[14]), 1134, 100.0f, 0, 0);
	Function_9(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_9(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_9(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_11(&(Global_30750[8]));
	Global_30750[8] = Function_10("animal_herd", 1);
	Function_6(&(Global_30750[8]), 1008, 6.0f, 30, 0, 0);
	Function_6(&(Global_30750[8]), 976, 3.0f, 30, 0, 0);
	Function_6(&(Global_30750[8]), 1128, 1.0f, 30, 0, 0);
	Function_6(&(Global_30750[8]), 976, 2.0f, 33, 0, 0);
	Function_6(&(Global_30750[8]), 1049, 1.0f, 33, 0, 0);
	Function_11(&(Global_30750[9]));
	Global_30750[9] = Function_10("ped_vehicle", 1);
	Function_9(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_5(Global_30750[6], 0,0001f);
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	if (!Function_4(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_3(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_2("Finished loading population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x6D6 / 1750
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_2(bool bParam0, float fParam1) //Position: 0x6E5 / 1765
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

bool Function_3(int iParam0) //Position: 0x723 / 1827
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x73F / 1855
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, bool bParam1) //Position: 0x75B / 1883
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_6(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x76B / 1899
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_8(iParam3), Function_7(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_7(int iParam0) //Position: 0x7CD / 1997
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

var Function_8(int iParam0) //Position: 0x839 / 2105
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

var Function_9(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x8A5 / 2213
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

var Function_10(bool bParam0, int iParam1) //Position: 0x91A / 2330
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_11(int iParam0) //Position: 0x927 / 2343
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_12(bool bParam0, var uParam1) //Position: 0x933 / 2355
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

