//Decompiled with MagicRDR v1.0
//Function Count : 17
//Statics Count : 2
//Natives Count : 52
//Parameters Count : 2

#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0[6];
	bool bVar7;
	
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_16("Loading GHOST TOWN file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_15(&(Global_30750[0]));
	Global_30750[0] = Function_14("ped_wilderness", Global_30840);
	Function_13(&(Global_30750[0]), 406, 8.0f, 0, 0);
	Function_13(&(Global_30750[0]), 407, 8.0f, 0, 0);
	Function_13(&(Global_30750[0]), 409, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 410, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 412, 1.0f, 0, 0);
	Function_13(&(Global_30750[0]), 413, 1.0f, 0, 0);
	Function_15(&(Global_30750[1]));
	Global_30750[1] = Function_14("ped_traveller", 3);
	Function_13(&(Global_30750[1]), 406, 8.0f, 0, 0);
	Function_13(&(Global_30750[1]), 407, 8.0f, 0, 0);
	Function_13(&(Global_30750[1]), 409, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 410, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 412, 1.0f, 0, 0);
	Function_13(&(Global_30750[1]), 413, 1.0f, 0, 0);
	Function_15(&(Global_30750[10]));
	Global_30750[10] = Function_14("animal_hunt", 0);
	Function_15(&(Global_30750[11]));
	Global_30750[11] = Function_14("animal_predator", 0);
	Function_13(&(Global_30750[11]), 1049, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_15(&(Global_30750[2]));
	Global_30750[2] = Function_14("ped_law", 1);
	Function_13(&(Global_30750[2]), 391, 1.0f, 0, 0);
	Function_15(&(Global_30750[3]));
	Global_30750[3] = Function_14("ped_bad_guys_local", 1);
	Function_13(&(Global_30750[3]), 407, 1.0f, 0, 0);
	Function_13(&(Global_30750[3]), 406, 4.0f, 0, 0);
	Function_13(&(Global_30750[3]), 407, 8.0f, 0, 0);
	Function_13(&(Global_30750[3]), 406, 8.0f, 0, 0);
	Function_13(&(Global_30750[3]), 407, 8.0f, 0, 0);
	Function_15(&(Global_30750[4]));
	Global_30750[4] = Function_14("ped_bad_guys_generic", 1);
	Function_13(&(Global_30750[4]), 407, 1.0f, 0, 0);
	Function_13(&(Global_30750[4]), 406, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 407, 8.0f, 0, 0);
	Function_13(&(Global_30750[4]), 406, 8.0f, 0, 0);
	Function_13(&(Global_30750[4]), 407, 8.0f, 0, 0);
	Function_15(&(Global_30750[5]));
	Global_30750[5] = Function_14("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 1049, 8.0f, 0, 0);
	Function_13(&(Global_30750[5]), 1128, 3.0f, 0, 0);
	Function_15(&(Global_30750[6]));
	Global_30750[6] = Function_14("animal_horse", 4);
	Function_12(&(Global_30750[6]), 996, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 997, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 998, 100.0f, 0, 3);
	Function_15(&(Global_30750[15]));
	Global_30750[15] = Function_14("animal_horse_unsaddled", 0);
	Function_13(&(Global_30750[6]), 996, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 997, 100.0f, 0, 0);
	Function_13(&(Global_30750[6]), 998, 100.0f, 0, 0);
	Function_15(&(Global_30750[7]));
	Global_30750[7] = Function_14("animal_bird", 1);
	Function_13(&(Global_30750[7]), 1128, 5.0f, 0, 0);
	Function_13(&(Global_30750[7]), 1131, 1.0f, 0, 0);
	Function_15(&(Global_30750[8]));
	Global_30750[8] = Function_14("animal_herd", 1);
	Function_13(&(Global_30750[8]), 1029, 6.0f, 0, 0);
	Function_15(&(Global_30750[9]));
	Global_30750[9] = Function_14("ped_vehicle", 1);
	Function_13(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	uVar0[0] = Function_14("ghost_pop1", 1);
	Function_13(&(uVar0[0]), 1064, 1.0f, 0, 0);
	uVar0[1] = Function_14("ghost_pop2", 1);
	Function_13(&(uVar0[1]), 1112, 1.0f, 0, 0);
	uVar0[2] = Function_14("ghost_pop3", 1);
	Function_13(&(uVar0[2]), 1049, 1.0f, 0, 0);
	uVar0[3] = Function_14("ghost_pop4", 1);
	Function_13(&(uVar0[3]), 1128, 1.0f, 0, 0);
	uVar0[4] = Function_14("ghost_pop5", 1);
	Function_13(&(uVar0[4]), 1059, 1.0f, 0, 0);
	uVar0[5] = Function_14("ghost_pop6", 1);
	Function_13(&(uVar0[5]), 1131, 1.0f, 0, 0);
	Function_11(Global_30750[5], 5E-05f);
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
			bVar7 = GET_VOLUME_FROM_OBJECT(Function_4(Global_34573, 4));
			if (IS_VOLUME_VALID(bVar7))
			{
				Function_3(bVar7, uVar0[0], RAND_INT_RANGE(2, 3), 0, 0, 1);
				Function_3(bVar7, uVar0[1], RAND_INT_RANGE(true, 2), 0, 0, 1);
				Function_3(bVar7, uVar0[2], RAND_INT_RANGE(2, 3), 0, 0, 1);
				Function_3(bVar7, uVar0[3], RAND_INT_RANGE(2, 3), 0, 0, 1);
				Function_3(bVar7, uVar0[4], RAND_INT_RANGE(true, 3), 0, 0, 1);
				Function_3(bVar7, uVar0[5], RAND_INT_RANGE(2, 3), 0, 0, 1);
			}
			else
			{
				LOG_ERROR("mex_ghost_town: Cannot find the regionVol to create population volumes");
			}
		}
		else
		{
			LOG_ERROR("mex_ghost_town: Cannot find region layout to create population volumes");
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

void Function_1(var uParam0, var uParam1) //Position: 0x7E0 / 2016
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x7EF / 2031
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

var Function_3(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x844 / 2116
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

var Function_4(bool bParam0, int iParam1) //Position: 0x8C4 / 2244
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

int Function_5(int iParam0) //Position: 0xA75 / 2677
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

var Function_6() //Position: 0xAA6 / 2726
{
	int iVar0;
	
	return iVar0;
}

bool Function_7(bool bParam0, int iParam1) //Position: 0xAAE / 2734
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

bool Function_8(int iParam0) //Position: 0xADD / 2781
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0xAF9 / 2809
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

bool Function_10(var uParam0, int iParam1) //Position: 0xB37 / 2871
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0xB53 / 2899
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xB63 / 2915
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

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xBA8 / 2984
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

var Function_14(bool bParam0, int iParam1) //Position: 0xC24 / 3108
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_15(int iParam0) //Position: 0xC31 / 3121
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_16(bool bParam0, var uParam1) //Position: 0xC3D / 3133
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

