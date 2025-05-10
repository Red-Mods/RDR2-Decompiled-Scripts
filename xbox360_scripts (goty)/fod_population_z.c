//Decompiled with MagicRDR v1.0
//Function Count : 14
//Statics Count : 4
//Natives Count : 38
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
	strcpy(&Global_13171, "Fod", 4);
	Function_13("Loading El Presidio population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_12("ped_generic", 0);
	Function_11(&uVar0, 240, 4.0f, 0, 0);
	Function_11(&uVar0, 241, 4.0f, 0, 0);
	Function_11(&uVar0, 295, 4.0f, 0, 0);
	Function_11(&uVar0, 296, 4.0f, 0, 0);
	Function_11(&uVar0, 313, 4.0f, 0, 0);
	Function_11(&uVar0, 269, 4.0f, 0, 0);
	Function_11(&uVar0, 270, 4.0f, 0, 0);
	Function_11(&uVar0, 271, 4.0f, 0, 0);
	Function_11(&uVar0, 272, 4.0f, 0, 0);
	Function_11(&uVar0, 311, 4.0f, 0, 0);
	Function_11(&uVar0, 279, 4.0f, 0, 0);
	Function_11(&uVar0, 284, 4.0f, 0, 0);
	Function_11(&uVar0, 287, 4.0f, 0, 0);
	Function_11(&uVar0, 292, 4.0f, 0, 0);
	Function_11(&uVar0, 297, 4.0f, 0, 0);
	Function_11(&uVar0, 299, 4.0f, 0, 0);
	Function_11(&uVar0, 314, 4.0f, 0, 0);
	Function_11(&uVar0, 317, 4.0f, 0, 0);
	Function_11(&uVar0, 322, 4.0f, 0, 0);
	Function_11(&uVar0, 323, 4.0f, 0, 0);
	Function_11(&uVar0, 250, 4.0f, 0, 0);
	Function_11(&uVar0, 298, 4.0f, 0, 0);
	Function_11(&uVar0, 288, 4.0f, 0, 0);
	Function_10(&(Global_30750[0]));
	Global_30750[0] = Function_12("ped_wilderness", Global_30840);
	Function_11(&(Global_30750[0]), 38, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 39, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 53, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 54, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 153, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 166, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 167, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 170, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 171, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 172, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 173, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 174, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 175, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 232, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 288, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 51, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 289, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 35, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 37, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 135, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 136, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 154, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 155, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 156, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 159, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 162, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 117, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 194, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 196, 4.0f, 0, 0);
	Function_11(&(Global_30750[0]), 311, 4.0f, 0, 0);
	Function_10(&(Global_30750[1]));
	Global_30750[1] = Function_12("ped_traveller", 3);
	Function_11(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 56, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 195, 2.0f, 0, 0);
	Function_11(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_10(&(Global_30750[6]));
	Global_30750[6] = Function_12("animal_horse", 4);
	Function_9(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_9(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_10(&(Global_30750[15]));
	Global_30750[15] = Function_12("animal_horse_unsaddled", 0);
	Function_11(&(Global_30750[15]), 977, 100.0f, 0, 0);
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
	Function_10(&(Global_30750[5]));
	Global_30750[5] = Function_12("animal_wilderness", 0);
	Function_10(&(Global_30750[11]));
	Global_30750[11] = Function_12("animal_predator", 0);
	Function_10(&(Global_30750[10]));
	Global_30750[10] = Function_12("animal_hunt", 0);
	Function_10(&(Global_30750[8]));
	Global_30750[8] = Function_12("animal_herd", 0);
	Function_10(&(Global_30750[7]));
	Global_30750[7] = Function_12("animal_bird", 1);
	Function_8(Global_30750[5], 2E-05f);
	Function_10(&(Global_30750[2]));
	Global_30750[2] = Function_12("ped_law", 1);
	Function_11(&(Global_30750[2]), 1222, 5.0f, 0, 0);
	Function_11(&(Global_30750[2]), 1223, 5.0f, 0, 0);
	Function_11(&(Global_30750[2]), 1224, 5.0f, 0, 0);
	Function_11(&(Global_30750[2]), 1225, 5.0f, 0, 0);
	Function_11(&(Global_30750[2]), 1226, 5.0f, 0, 0);
	Function_11(&(Global_30750[2]), 1227, 5.0f, 0, 0);
	Function_10(&(Global_30750[3]));
	Global_30750[3] = Function_12("ped_bad_guys_local", 1);
	Function_11(&(Global_30750[3]), 1214, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]), 1215, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]), 1216, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]), 1217, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]), 1218, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]), 1219, 5.0f, 0, 0);
	Function_11(&(Global_30750[3]), 1220, 5.0f, 0, 0);
	Function_10(&(Global_30750[4]));
	Global_30750[4] = Function_12("ped_bad_guys_generic", 1);
	Function_11(&(Global_30750[4]), 1204, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1205, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1206, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1207, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1208, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1209, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1210, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1211, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1212, 5.0f, 0, 0);
	Function_11(&(Global_30750[4]), 1213, 5.0f, 0, 0);
	Function_10(&(Global_30750[9]));
	Global_30750[9] = Function_12("ped_vehicle", 1);
	Function_11(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	uVar1 = CREATE_POPULATION_SET(1);
	while (!Function_7(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
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
	bVar2 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (IS_LAYOUTREF_VALID(bVar2))
	{
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_01");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, uVar0, 5, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_01");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[3], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_01");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[4], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_01");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[2], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_02");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, uVar0, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_02");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[3], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_02");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[4], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_02");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[2], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_03");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, uVar0, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_03");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[3], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_03");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[4], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_zombies_03");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_4(bVar3, Global_30750[2], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
		bVar3 = FIND_VOLUME_IN_LAYOUT(bVar2, "fodv_region");
		if (IS_VOLUME_VALID(bVar3))
		{
			Function_3(bVar3, uVar1, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("El Presidio: Cannot find ElPresidioPop to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_7(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_5(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_6("Finished loading El Presidio population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x10CE / 4302
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x10DD / 4317
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1132 / 4402
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

var Function_4(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x11B2 / 4530
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

bool Function_5(int iParam0) //Position: 0x1234 / 4660
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0, float fParam1) //Position: 0x1250 / 4688
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

bool Function_7(var uParam0, int iParam1) //Position: 0x128E / 4750
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x12AA / 4778
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_9(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x12BA / 4794
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_10(int iParam0) //Position: 0x12FF / 4863
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_11(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x130B / 4875
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

var Function_12(bool bParam0, int iParam1) //Position: 0x1387 / 4999
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_13(bool bParam0, var uParam1) //Position: 0x1394 / 5012
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

