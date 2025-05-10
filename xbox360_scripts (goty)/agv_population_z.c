//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 4
//Natives Count : 39
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Agv", 4);
	Function_14("Loading Agave Viejo population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_13("ped_generic", 0);
	Function_12(&uVar0, 240, 4.0f, 0, 0);
	Function_12(&uVar0, 241, 4.0f, 0, 0);
	Function_12(&uVar0, 295, 4.0f, 0, 0);
	Function_12(&uVar0, 296, 4.0f, 0, 0);
	Function_12(&uVar0, 313, 4.0f, 0, 0);
	Function_12(&uVar0, 269, 4.0f, 0, 0);
	Function_12(&uVar0, 270, 4.0f, 0, 0);
	Function_12(&uVar0, 271, 4.0f, 0, 0);
	Function_12(&uVar0, 272, 4.0f, 0, 0);
	Function_12(&uVar0, 311, 4.0f, 0, 0);
	Function_12(&uVar0, 279, 4.0f, 0, 0);
	Function_12(&uVar0, 284, 4.0f, 0, 0);
	Function_12(&uVar0, 287, 4.0f, 0, 0);
	Function_12(&uVar0, 292, 4.0f, 0, 0);
	Function_12(&uVar0, 297, 4.0f, 0, 0);
	Function_12(&uVar0, 299, 4.0f, 0, 0);
	Function_12(&uVar0, 314, 4.0f, 0, 0);
	Function_12(&uVar0, 317, 4.0f, 0, 0);
	Function_12(&uVar0, 322, 4.0f, 0, 0);
	Function_12(&uVar0, 323, 4.0f, 0, 0);
	Function_12(&uVar0, 250, 4.0f, 0, 0);
	Function_12(&uVar0, 298, 4.0f, 0, 0);
	Function_12(&uVar0, 288, 4.0f, 0, 0);
	Function_12(&uVar0, 1204, 5.0f, 0, 0);
	Function_12(&uVar0, 1205, 5.0f, 0, 0);
	Function_12(&uVar0, 1206, 5.0f, 0, 0);
	Function_12(&uVar0, 1207, 5.0f, 0, 0);
	Function_12(&uVar0, 1208, 5.0f, 0, 0);
	Function_12(&uVar0, 1209, 5.0f, 0, 0);
	Function_12(&uVar0, 1210, 5.0f, 0, 0);
	Function_12(&uVar0, 1211, 5.0f, 0, 0);
	Function_12(&uVar0, 1212, 5.0f, 0, 0);
	Function_12(&uVar0, 1213, 5.0f, 0, 0);
	Function_12(&uVar0, 1214, 5.0f, 0, 0);
	Function_12(&uVar0, 1215, 5.0f, 0, 0);
	Function_12(&uVar0, 1216, 5.0f, 0, 0);
	Function_12(&uVar0, 1217, 5.0f, 0, 0);
	Function_12(&uVar0, 1218, 5.0f, 0, 0);
	Function_12(&uVar0, 1219, 5.0f, 0, 0);
	Function_12(&uVar0, 1220, 5.0f, 0, 0);
	Function_12(&uVar0, 1222, 5.0f, 0, 0);
	Function_12(&uVar0, 1223, 5.0f, 0, 0);
	Function_12(&uVar0, 1224, 5.0f, 0, 0);
	Function_12(&uVar0, 1225, 5.0f, 0, 0);
	Function_12(&uVar0, 1226, 5.0f, 0, 0);
	Function_12(&uVar0, 1227, 5.0f, 0, 0);
	Function_11(&(Global_30750[0]));
	Global_30750[0] = Function_13("ped_wilderness", Global_30840);
	Function_12(&(Global_30750[0]), 38, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 39, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 53, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 54, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 153, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 166, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 167, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 170, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 171, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 172, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 173, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 174, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 175, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 232, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 288, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 51, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 289, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 35, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 37, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 135, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 136, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 154, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 155, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 156, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 159, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 162, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 117, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 194, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 196, 4.0f, 0, 0);
	Function_12(&(Global_30750[0]), 311, 4.0f, 0, 0);
	Function_11(&(Global_30750[1]));
	Global_30750[1] = Function_13("ped_traveller", 3);
	Function_12(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 56, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 195, 2.0f, 0, 0);
	Function_12(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_11(&(Global_30750[6]));
	Global_30750[6] = Function_13("animal_horse", 4);
	Function_10(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_10(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_11(&(Global_30750[15]));
	Global_30750[15] = Function_13("animal_horse_unsaddled", 0);
	Function_12(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_12(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_11(&(Global_30750[5]));
	Global_30750[5] = Function_13("animal_wilderness", 0);
	Function_11(&(Global_30750[11]));
	Global_30750[11] = Function_13("animal_predator", 0);
	Function_11(&(Global_30750[10]));
	Global_30750[10] = Function_13("animal_hunt", 0);
	Function_11(&(Global_30750[8]));
	Global_30750[8] = Function_13("animal_herd", 0);
	Function_11(&(Global_30750[7]));
	Global_30750[7] = Function_13("animal_bird", 1);
	uVar1 = Function_13("zombie_dogs", 0);
	Function_12(&uVar1, 1240, 10.0f, 0, 0);
	Function_9(Global_30750[5], 2E-05f);
	Function_11(&(Global_30750[2]));
	Global_30750[2] = Function_13("ped_law", 1);
	Function_12(&(Global_30750[2]), 1222, 5.0f, 0, 0);
	Function_12(&(Global_30750[2]), 1223, 5.0f, 0, 0);
	Function_12(&(Global_30750[2]), 1224, 5.0f, 0, 0);
	Function_12(&(Global_30750[2]), 1225, 5.0f, 0, 0);
	Function_12(&(Global_30750[2]), 1226, 5.0f, 0, 0);
	Function_12(&(Global_30750[2]), 1227, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]));
	Global_30750[3] = Function_13("ped_bad_guys_local", 1);
	Function_12(&(Global_30750[3]), 1214, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]), 1215, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]), 1216, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]), 1217, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]), 1218, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]), 1219, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]), 1220, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]));
	Global_30750[4] = Function_13("ped_bad_guys_generic", 1);
	Function_12(&(Global_30750[4]), 1204, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1205, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1206, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1207, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1208, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1209, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1210, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1211, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1212, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]), 1213, 5.0f, 0, 0);
	Function_11(&(Global_30750[9]));
	Global_30750[9] = Function_13("ped_vehicle", 1);
	Function_12(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_12(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_12(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_12(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_12(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	uVar2 = CREATE_POPULATION_SET(1);
	while (!Function_8(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_7("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_6(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar3 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (IS_LAYOUTREF_VALID(bVar3))
	{
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "agvv_Horses");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_5(bVar4, Global_30750[15], 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_Horses to create population volumes");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "agvv_crows_set");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_4(bVar4, uVar0, 5, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_crows_set to create population volumes");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "agvv_region");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_4(bVar4, uVar0, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_vultures_set to create population volumes");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "agvv_region");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_5(bVar4, uVar1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_region to create population volumes");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "agvv_rebel_base");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_4(bVar4, uVar0, 15, 30, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agv_pop: Cannot find agvv_rebel_base to create population volumes");
		}
		bVar4 = FIND_VOLUME_IN_LAYOUT(bVar3, "agvv_region");
		if (IS_VOLUME_VALID(bVar4))
		{
			Function_3(bVar4, uVar2, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("agvv_pop: Cannot find henv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("rwf_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_8(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_6(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_7("Finished loading Agave Viejo population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xEBA / 3770
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xEC9 / 3785
{
	int iVar0;
	
	if (!Function_6(1))
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
			if (!IS_POPULATION_SET_READY(Global_30750[iVar0], 0, 4294967295))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xF1E / 3870
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(uVar0, uParam1);
	SET_ZONE_POPULATION_DENSITY(uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(uVar0, iParam3);
	if (bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(uVar0, !bParam5);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", 1 | DECOR_GET_INT(bParam0, "locflag"));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return uVar0;
}

var Function_4(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0xF9E / 3998
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(uVar0, uParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(uVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(uVar0, iParam4);
	if (bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(uVar0, !bParam6);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", 1 | DECOR_GET_INT(bParam0, "locflag"));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return uVar0;
}

var Function_5(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1020 / 4128
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(uVar0, uParam1);
	SET_ZONE_POPULATION_COUNT(uVar0, iParam2);
	SET_ZONE_RESTRICT_ACTORS(uVar0, iParam3);
	if (bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(uVar0, !bParam5);
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", 1 | DECOR_GET_INT(bParam0, "locflag"));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", true);
	}
	return uVar0;
}

bool Function_6(int iParam0) //Position: 0x10A0 / 4256
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0, float fParam1) //Position: 0x10BC / 4284
{
	if (!Function_6(128))
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

bool Function_8(var uParam0, int iParam1) //Position: 0x10FA / 4346
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, int iParam1) //Position: 0x1116 / 4374
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(iParam1);
	return;
}

var Function_10(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x1126 / 4390
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_12(uParam0, iParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(*uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

void Function_11(int iParam0) //Position: 0x116B / 4459
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_12(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1177 / 4471
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION(*uParam0, iParam1, fParam2);
	if (bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_13(int iParam0, int iParam1) //Position: 0x11F3 / 4595
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_14(bool bParam0, var uParam1) //Position: 0x1200 / 4608
{
	if (!Function_6(128))
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

