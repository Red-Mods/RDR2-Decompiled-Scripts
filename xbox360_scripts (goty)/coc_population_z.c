//Decompiled with MagicRDR v1.0
//Function Count : 13
//Statics Count : 4
//Natives Count : 37
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Coc", 4);
	Function_12("Loading Cochinay population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_11("ped_generic", 0);
	Function_10(&uVar0, 202, 4.0f, 0, 0);
	Function_10(&uVar0, 87, 4.0f, 0, 0);
	Function_10(&uVar0, 235, 4.0f, 0, 0);
	Function_10(&uVar0, 217, 4.0f, 0, 0);
	Function_10(&uVar0, 140, 4.0f, 0, 0);
	Function_10(&uVar0, 137, 4.0f, 0, 0);
	Function_10(&uVar0, 46, 4.0f, 0, 0);
	Function_10(&uVar0, 50, 4.0f, 0, 0);
	Function_10(&uVar0, 22, 4.0f, 0, 0);
	Function_10(&uVar0, 33, 4.0f, 0, 0);
	Function_10(&uVar0, 34, 4.0f, 0, 0);
	Function_10(&uVar0, 76, 4.0f, 0, 0);
	Function_10(&uVar0, 79, 4.0f, 0, 0);
	Function_10(&uVar0, 136, 4.0f, 0, 0);
	Function_10(&uVar0, 204, 4.0f, 0, 0);
	Function_10(&uVar0, 155, 4.0f, 0, 0);
	Function_10(&uVar0, 142, 4.0f, 0, 0);
	Function_10(&uVar0, 49, 4.0f, 0, 0);
	Function_10(&uVar0, 56, 4.0f, 0, 0);
	Function_10(&uVar0, 74, 4.0f, 0, 0);
	Function_10(&uVar0, 178, 4.0f, 0, 0);
	Function_10(&uVar0, 48, 4.0f, 0, 0);
	Function_10(&uVar0, 203, 4.0f, 0, 0);
	Function_10(&uVar0, 153, 4.0f, 0, 0);
	Function_10(&uVar0, 154, 4.0f, 0, 0);
	Function_9(&(Global_30750[0]));
	Global_30750[0] = Function_11("ped_wilderness", Global_30840);
	Function_10(&(Global_30750[0]), 38, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 39, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 53, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 54, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 153, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 166, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 167, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 170, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 171, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 172, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 173, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 174, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 175, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 232, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 51, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 35, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 37, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 135, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 136, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 154, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 155, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 156, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 159, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 162, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 117, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 194, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]), 196, 4.0f, 0, 0);
	Function_9(&(Global_30750[1]));
	Global_30750[1] = Function_11("ped_traveller", 3);
	Function_10(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 56, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 195, 2.0f, 0, 0);
	Function_10(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_9(&(Global_30750[6]));
	Global_30750[6] = Function_11("animal_horse", 4);
	Function_8(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_8(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_9(&(Global_30750[15]));
	Global_30750[15] = Function_11("animal_horse_unsaddled", 0);
	Function_10(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_10(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_9(&(Global_30750[5]));
	Global_30750[5] = Function_11("animal_wilderness", 0);
	Function_9(&(Global_30750[11]));
	Global_30750[11] = Function_11("animal_predator", 0);
	Function_9(&(Global_30750[10]));
	Global_30750[10] = Function_11("animal_hunt", 0);
	Function_9(&(Global_30750[8]));
	Global_30750[8] = Function_11("animal_herd", 0);
	Function_9(&(Global_30750[7]));
	Global_30750[7] = Function_11("animal_bird", 1);
	Function_7(Global_30750[5], 2E-05f);
	Function_9(&(Global_30750[2]));
	Global_30750[2] = Function_11("ped_law", 1);
	Function_10(&(Global_30750[2]), 1222, 5.0f, 0, 0);
	Function_10(&(Global_30750[2]), 1223, 5.0f, 0, 0);
	Function_10(&(Global_30750[2]), 1224, 5.0f, 0, 0);
	Function_10(&(Global_30750[2]), 1225, 5.0f, 0, 0);
	Function_10(&(Global_30750[2]), 1226, 5.0f, 0, 0);
	Function_10(&(Global_30750[2]), 1227, 5.0f, 0, 0);
	Function_9(&(Global_30750[3]));
	Global_30750[3] = Function_11("ped_bad_guys_local", 1);
	Function_10(&(Global_30750[3]), 1214, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]), 1215, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]), 1216, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]), 1217, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]), 1218, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]), 1219, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]), 1220, 5.0f, 0, 0);
	Function_9(&(Global_30750[4]));
	Global_30750[4] = Function_11("ped_bad_guys_generic", 1);
	Function_10(&(Global_30750[4]), 1204, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1205, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1206, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1207, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1208, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1209, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1210, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1211, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1212, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]), 1213, 5.0f, 0, 0);
	Function_9(&(Global_30750[9]));
	Global_30750[9] = Function_11("ped_vehicle", 1);
	Function_10(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_10(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	uVar1 = CREATE_POPULATION_SET(1);
	while (!Function_6(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
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
	bVar2 = FIND_NAMED_LAYOUT("Cochinay_layout");
	if (IS_LAYOUTREF_VALID(bVar2))
	{
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "cocv_zombies");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_3(bVar3, uVar0, 20, 50, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find cocv_flk_ALL_set to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_6(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_5("Finished loading Cochinay population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xABD / 2749
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xACC / 2764
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

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0xB21 / 2849
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

bool Function_4(int iParam0) //Position: 0xBA3 / 2979
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, float fParam1) //Position: 0xBBF / 3007
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0xBFD / 3069
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0xC19 / 3097
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xC29 / 3113
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_10(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_9(int iParam0) //Position: 0xC6E / 3182
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_10(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xC7A / 3194
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

var Function_11(int iParam0, int iParam1) //Position: 0xCF6 / 3318
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_12(bool bParam0, var uParam1) //Position: 0xD03 / 3331
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

