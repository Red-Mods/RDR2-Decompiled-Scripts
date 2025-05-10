//Decompiled with MagicRDR v1.0
//Function Count : 20
//Statics Count : 2
//Natives Count : 56
//Parameters Count : 2

#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0[3];
	bool bVar4;
	
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_19("Loading GHOST TOWN file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_18(&(Global_30750[0]));
	Global_30750[0] = Function_17("ped_wilderness", Global_30840);
	Function_16(&(Global_30750[0]), 397, 8.0f, 0, 0);
	Function_16(&(Global_30750[0]), 398, 8.0f, 0, 0);
	Function_16(&(Global_30750[0]), 400, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 401, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 403, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 404, 1.0f, 0, 0);
	Function_18(&(Global_30750[1]));
	Global_30750[1] = Function_17("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 397, 8.0f, 0, 0);
	Function_16(&(Global_30750[1]), 398, 8.0f, 0, 0);
	Function_16(&(Global_30750[1]), 400, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 401, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 403, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 404, 1.0f, 0, 0);
	Function_18(&(Global_30750[2]));
	Global_30750[2] = Function_17("ped_law", 1);
	Function_16(&(Global_30750[2]), 449, 1.0f, 0, 0);
	Function_18(&(Global_30750[3]));
	Global_30750[3] = Function_17("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 397, 10.0f, 0, 0);
	Function_16(&(Global_30750[3]), 398, 10.0f, 0, 0);
	Function_16(&(Global_30750[3]), 400, 2.0f, 0, 0);
	Function_16(&(Global_30750[3]), 401, 2.0f, 0, 0);
	Function_16(&(Global_30750[3]), 403, 1.0f, 0, 0);
	Function_16(&(Global_30750[3]), 404, 1.0f, 0, 0);
	Function_18(&(Global_30750[4]));
	Global_30750[4] = Function_17("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 397, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 398, 10.0f, 0, 0);
	Function_16(&(Global_30750[4]), 400, 2.0f, 0, 0);
	Function_16(&(Global_30750[4]), 401, 2.0f, 0, 0);
	Function_16(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_18(&(Global_30750[5]));
	Global_30750[5] = Function_17("animal_wilderness", 1);
	Function_16(&(Global_30750[5]), 1049, 8.0f, 0, 0);
	Function_16(&(Global_30750[5]), 1128, 3.0f, 0, 0);
	Function_18(&(Global_30750[6]));
	Global_30750[6] = Function_17("animal_horse", 4);
	Function_15(&(Global_30750[6]), 996, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 997, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 998, 100.0f, 0, 3);
	Function_18(&(Global_30750[15]));
	Global_30750[15] = Function_17("animal_horse_unsaddled", 0);
	Function_16(&(Global_30750[6]), 996, 100.0f, 0, 0);
	Function_16(&(Global_30750[6]), 997, 100.0f, 0, 0);
	Function_16(&(Global_30750[6]), 998, 100.0f, 0, 0);
	Function_18(&(Global_30750[10]));
	Global_30750[10] = Function_17("animal_hunt", 0);
	Function_18(&(Global_30750[5]));
	Global_30750[5] = Function_17("animal_wilderness", 1);
	Function_16(&(Global_30750[5]), 1081, 2.0f, 0, 0);
	Function_12(&(Global_30750[5]), 1057, 1.0f, 15, 0, 0);
	Function_18(&(Global_30750[14]));
	Global_30750[14] = Function_17("birds_trees", 1);
	Function_16(&(Global_30750[14]), 1131, 3.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1135, 1.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 1.0f, 0, 0);
	Function_16(&(Global_30750[14]), 1136, 1.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_18(&(Global_30750[7]));
	Global_30750[7] = Function_17("animal_bird", 1);
	Function_12(&(Global_30750[7]), 1131, 1.0f, 14, 0, 0);
	Function_12(&(Global_30750[7]), 1128, 1.0f, 14, 0, 0);
	Function_18(&(Global_30750[8]));
	Global_30750[8] = Function_17("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1008, 6.0f, 0, 0);
	Function_18(&(Global_30750[9]));
	Global_30750[9] = Function_17("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	uVar0[0] = Function_17("ghost_pop1", 1);
	Function_16(&(uVar0[0]), 1049, 1.0f, 0, 0);
	uVar0[1] = Function_17("ghost_pop2", 1);
	Function_16(&(uVar0[1]), 1128, 1.0f, 0, 0);
	uVar0[2] = Function_17("ghost_pop3", 1);
	Function_16(&(uVar0[2]), 1057, 1.0f, 0, 0);
	Function_11(Global_30750[5], 9E-05f);
	while (!((Function_10(&(Global_29008[iScriptParam_0]), 16) && Function_10(&(Global_29008[iScriptParam_0]), 512)) && Function_10(&(Global_29008[iScriptParam_0]), 4)) && !IS_EXITFLAG_SET())
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
	if (!Global_3380)
	{
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			bVar4 = GET_VOLUME_FROM_OBJECT(Function_4(GET_PLAYER_ACTOR(0), 4));
			if (IS_VOLUME_VALID(bVar4))
			{
				Function_3(bVar4, uVar0[0], RAND_INT_RANGE(3, 5), 0, 0, 1);
				Function_3(bVar4, uVar0[1], RAND_INT_RANGE(3, 5), 0, 0, 1);
				Function_3(bVar4, uVar0[2], RAND_INT_RANGE(2, 4), 0, 0, 1);
			}
			else
			{
				LOG_ERROR("fro_ghost_town: Cannot find the regionVol to create population volumes");
			}
		}
		else
		{
			LOG_ERROR("fro_ghost_town: Cannot find region layout to create population volumes");
		}
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_10(&(Global_29008[iScriptParam_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	strcpy(&Global_13171, "gho", 4);
	Function_9("Finished GHOST TOWN file", 5.0f);
	Function_1(&(Global_29008[iScriptParam_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x7B6 / 1974
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x7C5 / 1989
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

var Function_3(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x81A / 2074
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

var Function_4(bool bParam0, int iParam1) //Position: 0x89A / 2202
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	bVar0 = 99999.0f;
	bVar7 = "";
	bVar8 = "";
	bVar9 = "";
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar10 = CREATE_OBJECT_ITERATOR(Global_28841);
	bVar11 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 9);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_7(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	Function_5(&bVar10);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 10);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_7(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		Function_5(&bVar11);
		ITERATE_IN_LAYOUT(bVar11, Global_30616);
		ITERATE_IN_VOLUME_SET(bVar11, GET_VOLUME_FROM_OBJECT(bVar8));
		bVar9 = START_OBJECT_ITERATOR(bVar11);
		while (IS_OBJECT_VALID(bVar9))
		{
			if (DECOR_CHECK_EXIST(bVar9, "locflag"))
			{
				if (Function_7(GET_VOLUME_FROM_OBJECT(bVar9), iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar9), &vVar4);
					if (VDIST(vVar1, vVar4) > bVar0)
					{
						bVar7 = bVar9;
						bVar0 = VDIST(vVar1, vVar4);
					}
				}
			}
			bVar9 = OBJECT_ITERATOR_NEXT(bVar11);
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	DESTROY_ITERATOR(bVar10);
	DESTROY_ITERATOR(bVar11);
	return bVar7;
}

int Function_5(int iParam0) //Position: 0xA4B / 2635
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_6());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_6());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_6() //Position: 0xA7C / 2684
{
	int iVar0;
	
	return iVar0;
}

bool Function_7(bool bParam0, int iParam1) //Position: 0xA84 / 2692
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

bool Function_8(int iParam0) //Position: 0xAB3 / 2739
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0xACF / 2767
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

bool Function_10(var uParam0, int iParam1) //Position: 0xB0D / 2829
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0xB29 / 2857
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0xB39 / 2873
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_14(iParam3), Function_13(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_13(int iParam0) //Position: 0xBB1 / 2993
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

var Function_14(int iParam0) //Position: 0xC1D / 3101
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

var Function_15(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xC89 / 3209
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(uParam0, bParam1, fParam2, bParam3, 0);
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

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xCCE / 3278
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

var Function_17(bool bParam0, int iParam1) //Position: 0xD4A / 3402
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_18(int iParam0) //Position: 0xD57 / 3415
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_19(bool bParam0, var uParam1) //Position: 0xD63 / 3427
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

