//Decompiled with MagicRDR v1.0
//Function Count : 13
//Statics Count : 4
//Natives Count : 20
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = &uScriptParam_0;
	Global_47148++;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_12("Loading population file", 3);
	BEGIN_POPULATION_DEFINITION();
	Function_11(&(Global_46972[0]));
	Global_46972[0] = Function_10("ped_wilderness", Global_47149);
	Function_9(&(Global_46972[0]), 111, 8.0f, 0, 0);
	Function_9(&(Global_46972[0]), 112, 8.0f, 0, 0);
	Function_9(&(Global_46972[0]), 113, 8.0f, 0, 0);
	Function_11(&(Global_46972[1]));
	Global_46972[1] = Function_10("ped_traveller", 3);
	Function_9(&(Global_46972[1]), 111, 8.0f, 0, 0);
	Function_9(&(Global_46972[1]), 112, 8.0f, 0, 0);
	Function_9(&(Global_46972[1]), 113, 8.0f, 0, 0);
	Function_9(&(Global_46972[1]), 76, 8.0f, 0, 0);
	Function_11(&(Global_46972[2]));
	Global_46972[2] = Function_10("ped_law", 1);
	Function_9(&(Global_46972[2]), 449, 1.0f, 0, 0);
	Function_9(&(Global_46972[2]), 436, 4.0f, 0, 0);
	Function_9(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_9(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_9(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_11(&(Global_46972[3]));
	Global_46972[3] = Function_10("ped_bad_guys_local", 1);
	Function_9(&(Global_46972[3]), 398, 1.0f, 1, 0);
	Function_9(&(Global_46972[3]), 397, 4.0f, 1, 0);
	Function_9(&(Global_46972[3]), 397, 8.0f, 1, 0);
	Function_9(&(Global_46972[3]), 397, 8.0f, 1, 0);
	Function_9(&(Global_46972[3]), 398, 8.0f, 1, 0);
	Function_11(&(Global_46972[4]));
	Global_46972[4] = Function_10("ped_bad_guys_generic", 1);
	Function_9(&(Global_46972[4]), 474, 1.0f, 1, 0);
	Function_9(&(Global_46972[4]), 470, 4.0f, 1, 0);
	Function_9(&(Global_46972[4]), 467, 8.0f, 1, 0);
	Function_9(&(Global_46972[4]), 467, 8.0f, 1, 0);
	Function_9(&(Global_46972[4]), 467, 8.0f, 1, 0);
	Function_11(&(Global_46972[11]));
	Global_46972[11] = Function_10("animal_predator", 0);
	Function_9(&(Global_46972[11]), 1049, 2.0f, 0, 0);
	Function_9(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_9(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_11(&(Global_46972[12]));
	Global_46972[12] = Function_10("animal_prey", 0);
	Function_9(&(Global_46972[12]), 1026, 2.0f, 0, 0);
	Function_9(&(Global_46972[12]), 1118, 2.0f, 0, 0);
	Function_9(&(Global_46972[12]), 1109, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]));
	Global_46972[13] = Function_10("animal_hunted", 0);
	Function_9(&(Global_46972[13]), 1050, 2.0f, 0, 0);
	Function_9(&(Global_46972[13]), 1118, 2.0f, 0, 0);
	Function_9(&(Global_46972[13]), 1109, 2.0f, 0, 0);
	Function_11(&(Global_46972[5]));
	Global_46972[5] = Function_10("animal_wilderness", 1);
	Function_6(&(Global_46972[5]), 976, 6.0f, 30, 0, 0);
	Function_6(&(Global_46972[5]), 1049, 3.0f, 30, 0, 0);
	Function_6(&(Global_46972[5]), 1128, 9.0f, 30, 0, 0);
	Function_6(&(Global_46972[5]), 1012, 6.0f, 30, 0, 0);
	Function_6(&(Global_46972[5]), 976, 8.0f, 33, 0, 0);
	Function_6(&(Global_46972[5]), 1049, 8.0f, 33, 0, 0);
	Function_11(&(Global_46972[6]));
	Global_46972[6] = Function_10("animal_horse", 1);
	Function_9(&(Global_46972[6]), 976, 8.0f, 0, 0);
	Function_9(&(Global_46972[6]), 977, 8.0f, 0, 0);
	Function_9(&(Global_46972[6]), 978, 8.0f, 0, 0);
	Function_11(&(Global_46972[7]));
	Global_46972[7] = Function_10("animal_bird", 1);
	Function_9(&(Global_46972[7]), 1128, 100.0f, 0, 0);
	Function_6(&(Global_46972[7]), 1131, 9.0f, 14, 0, 0);
	Function_11(&(Global_46972[14]));
	Global_46972[14] = Function_10("birds_trees", 1);
	Function_9(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_9(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_9(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_9(&(Global_46972[14]), 1134, 100.0f, 0, 0);
	Function_9(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_9(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_9(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_11(&(Global_46972[8]));
	Global_46972[8] = Function_10("animal_herd", 1);
	Function_6(&(Global_46972[8]), 1008, 6.0f, 30, 0, 0);
	Function_6(&(Global_46972[8]), 976, 3.0f, 30, 0, 0);
	Function_6(&(Global_46972[8]), 1128, 1.0f, 30, 0, 0);
	Function_6(&(Global_46972[8]), 976, 2.0f, 33, 0, 0);
	Function_6(&(Global_46972[8]), 1049, 1.0f, 33, 0, 0);
	Function_11(&(Global_46972[9]));
	Global_46972[9] = Function_10("ped_vehicle", 1);
	Function_9(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_5(&(Global_46972[6]), 0,0001f);
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	if (!Function_4(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_3(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_2("Finished loading population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x6E6 / 1766
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_2(char* cParam0) //Position: 0x6F7 / 1783
{
	if (!Function_3(128))
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

bool Function_3(int iParam0) //Position: 0x737 / 1847
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x753 / 1875
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, bool bParam1) //Position: 0x770 / 1904
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_6(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x781 / 1921
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_8(iParam3), Function_7(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_7(int iParam0) //Position: 0x7FF / 2047
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

var Function_8(int iParam0) //Position: 0x86B / 2155
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

var Function_9(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x8D7 / 2263
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

var Function_10(var uParam0, int iParam1) //Position: 0x959 / 2393
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_11(int iParam0) //Position: 0x968 / 2408
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_12(char* cParam0) //Position: 0x975 / 2421
{
	if (!Function_3(128))
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

