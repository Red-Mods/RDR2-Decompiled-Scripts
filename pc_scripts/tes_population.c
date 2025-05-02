//Decompiled with MagicRDR v1.0
//Function Count : 16
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
	var uVar3;
	
	ENABLE_AMBIENT_SPAWNING(true);
	strcpy(&Global_21682, "Loa", 4);
	Function_15("Loading Tesoro Azul population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_13("ped_wilderness", Global_47149);
	Function_11(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_46972[1]), 63, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 62, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 253, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 263, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 265, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 275, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 302, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 303, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 311, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 318, 10.0f, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_13("animal_hunt", 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_13("animal_predator", 0);
	Function_11(&(Global_46972[11]), 1049, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_13("animal_wilderness", 1);
	Function_11(&(Global_46972[5]), 1081, 12.0f, 0, 0);
	Function_8(&(Global_46972[5]), 1059, 3.0f, 14, 1, 0);
	Function_11(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_11(&(Global_46972[5]), 1079, 4.0f, 0, 0);
	Function_11(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_8(&(Global_46972[5]), 1128, 8.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 2.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 2.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1051, 2.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 2.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 2.0f, 30, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1050, 3.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1051, 3.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1052, 3.0f, 33, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_46972[8]), 1008, 6.0f, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_7(&(Global_46972[5]), 6E-05f);
	uVar0 = Function_13("chickens", 0);
	Function_8(&uVar0, 1015, 100.0f, 15, 0, 0);
	Function_8(&uVar0, 1017, 100.0f, 15, 0, 0);
	switch (Global_46720)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Function_14(&(Global_46972[2]));
			Global_46972[2] = Function_13("ped_law", 1);
			Function_11(&(Global_46972[2]), 465, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 462, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 464, 8.0f, 0, 0);
			Function_14(&(Global_46972[3]));
			Global_46972[3] = Function_13("ped_bad_guys_local", 1);
			Function_11(&(Global_46972[3]), 407, 1.0f, 0, 0);
			Function_11(&(Global_46972[3]), 406, 4.0f, 0, 0);
			Function_14(&(Global_46972[4]));
			Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
			Function_11(&(Global_46972[4]), 516, 1.0f, 0, 0);
			Function_11(&(Global_46972[4]), 518, 1.0f, 0, 0);
			Function_11(&(Global_46972[4]), 521, 1.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_14(&(Global_46972[2]));
			Global_46972[2] = Function_13("ped_law", 1);
			Function_11(&(Global_46972[2]), 516, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 521, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 518, 8.0f, 0, 0);
			Function_14(&(Global_46972[3]));
			Global_46972[3] = Function_13("ped_bad_guys_local", 1);
			Function_11(&(Global_46972[3]), 407, 1.0f, 0, 0);
			Function_11(&(Global_46972[3]), 406, 4.0f, 0, 0);
			Function_14(&(Global_46972[4]));
			Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
			Function_11(&(Global_46972[4]), 462, 1.0f, 0, 0);
			break;
	}
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	uVar1 = CREATE_POPULATION_SET(1);
	while (!Function_6(&(Global_43791[iScriptParam_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar2 = FIND_NAMED_LAYOUT("TesoroAzul_layout");
	if (IS_LAYOUTREF_VALID(&uVar2))
	{
		uVar3 = FIND_VOLUME_IN_LAYOUT(&uVar2, "tesv_stable02");
		if (IS_VOLUME_VALID(&uVar3))
		{
			Function_3(&uVar3, &(Global_46972[15]), 0,0004f, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("tes_pop: Cannot find tesv_stable_set to create population volumes");
		}
		uVar3 = FIND_VOLUME_IN_LAYOUT(&uVar2, "tesv_region");
		if (IS_VOLUME_VALID(&uVar3))
		{
			Function_3(&uVar3, &uVar0, 2E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("tes_pop: Cannot find tesv_region to create chickens");
		}
		uVar3 = FIND_VOLUME_IN_LAYOUT(&uVar2, "tesv_region");
		if (IS_VOLUME_VALID(&uVar3))
		{
			Function_3(&uVar3, &uVar1, 0,00015f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find Fomv_cattlepop01 to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_6(&(Global_43791[iScriptParam_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	Global_21682 = &Global_44085[iScriptParam_09] + 32;
	Function_5("Finished loading Tesoro Azul population file", 5.0f);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0xD00 / 3328
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0xD11 / 3345
{
	int iVar0;
	
	if (!Function_4(1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= Global_46972)
	{
		if (!IS_POPSET_VALID(&(Global_46972[iVar0])))
		{
		}
		else if (IS_POPULATION_SET_REQUIRED_RESIDENT(&(Global_46972[iVar0])))
		{
			if (!IS_POPULATION_SET_READY(&(Global_46972[iVar0]), 0, 4294967295))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xD69 / 3433
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_DENSITY(&uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &iParam3);
	if (&bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(&uVar0, !&bParam5);
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (1 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", true);
	}
	return &uVar0;
}

bool Function_4(int iParam0) //Position: 0xDF9 / 3577
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0xE15 / 3605
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0xE55 / 3669
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0xE72 / 3698
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xE83 / 3715
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0xF01 / 3841
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

var Function_10(int iParam0) //Position: 0xF6D / 3949
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

var Function_11(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xFD9 / 4057
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

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x105B / 4187
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(&uParam0, bParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_13(var uParam0, int iParam1) //Position: 0x10A2 / 4258
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_14(int iParam0) //Position: 0x10B1 / 4273
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_15(char* cParam0) //Position: 0x10BE / 4286
{
	if (!Function_4(128))
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

