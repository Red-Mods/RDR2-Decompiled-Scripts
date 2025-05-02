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
	var uVar7;
	
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_16("Loading GHOST TOWN file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_15(&(Global_46972[0]));
	Global_46972[0] = Function_14("ped_wilderness", Global_47149);
	Function_13(&(Global_46972[0]), 406, 8.0f, 0, 0);
	Function_13(&(Global_46972[0]), 407, 8.0f, 0, 0);
	Function_13(&(Global_46972[0]), 409, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 410, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]), 412, 1.0f, 0, 0);
	Function_13(&(Global_46972[0]), 413, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]));
	Global_46972[1] = Function_14("ped_traveller", 3);
	Function_13(&(Global_46972[1]), 406, 8.0f, 0, 0);
	Function_13(&(Global_46972[1]), 407, 8.0f, 0, 0);
	Function_13(&(Global_46972[1]), 409, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 410, 2.0f, 0, 0);
	Function_13(&(Global_46972[1]), 412, 1.0f, 0, 0);
	Function_13(&(Global_46972[1]), 413, 1.0f, 0, 0);
	Function_15(&(Global_46972[10]));
	Global_46972[10] = Function_14("animal_hunt", 0);
	Function_15(&(Global_46972[11]));
	Global_46972[11] = Function_14("animal_predator", 0);
	Function_13(&(Global_46972[11]), 1049, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_13(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_15(&(Global_46972[2]));
	Global_46972[2] = Function_14("ped_law", 1);
	Function_13(&(Global_46972[2]), 391, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]));
	Global_46972[3] = Function_14("ped_bad_guys_local", 1);
	Function_13(&(Global_46972[3]), 407, 1.0f, 0, 0);
	Function_13(&(Global_46972[3]), 406, 4.0f, 0, 0);
	Function_13(&(Global_46972[3]), 407, 8.0f, 0, 0);
	Function_13(&(Global_46972[3]), 406, 8.0f, 0, 0);
	Function_13(&(Global_46972[3]), 407, 8.0f, 0, 0);
	Function_15(&(Global_46972[4]));
	Global_46972[4] = Function_14("ped_bad_guys_generic", 1);
	Function_13(&(Global_46972[4]), 407, 1.0f, 0, 0);
	Function_13(&(Global_46972[4]), 406, 4.0f, 0, 0);
	Function_13(&(Global_46972[4]), 407, 8.0f, 0, 0);
	Function_13(&(Global_46972[4]), 406, 8.0f, 0, 0);
	Function_13(&(Global_46972[4]), 407, 8.0f, 0, 0);
	Function_15(&(Global_46972[5]));
	Global_46972[5] = Function_14("animal_wilderness", 1);
	Function_13(&(Global_46972[5]), 1049, 8.0f, 0, 0);
	Function_13(&(Global_46972[5]), 1128, 3.0f, 0, 0);
	Function_15(&(Global_46972[6]));
	Global_46972[6] = Function_14("animal_horse", 4);
	Function_12(&(Global_46972[6]), 996, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 997, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 998, 100.0f, 0, 3);
	Function_15(&(Global_46972[15]));
	Global_46972[15] = Function_14("animal_horse_unsaddled", 0);
	Function_13(&(Global_46972[6]), 996, 100.0f, 0, 0);
	Function_13(&(Global_46972[6]), 997, 100.0f, 0, 0);
	Function_13(&(Global_46972[6]), 998, 100.0f, 0, 0);
	Function_15(&(Global_46972[7]));
	Global_46972[7] = Function_14("animal_bird", 1);
	Function_13(&(Global_46972[7]), 1128, 5.0f, 0, 0);
	Function_13(&(Global_46972[7]), 1131, 1.0f, 0, 0);
	Function_15(&(Global_46972[8]));
	Global_46972[8] = Function_14("animal_herd", 1);
	Function_13(&(Global_46972[8]), 1029, 6.0f, 0, 0);
	Function_15(&(Global_46972[9]));
	Global_46972[9] = Function_14("ped_vehicle", 1);
	Function_13(&(Global_46972[9]), 1183, 2.0f, 0, 0);
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
	Function_11(&(Global_46972[5]), 5E-05f);
	while (!((Function_10(&(Global_43791[iScriptParam_0]), 16) && Function_10(&(Global_43791[iScriptParam_0]), 512)) && Function_10(&(Global_43791[iScriptParam_0]), 4)) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_9("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_8(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	if (!Global_6623)
	{
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			uVar7 = GET_VOLUME_FROM_OBJECT(Function_4(&Global_54076, 4));
			if (IS_VOLUME_VALID(&uVar7))
			{
				Function_3(&uVar7, &(uVar0[0]), RAND_INT_RANGE(2, 3), 0, 0, 1);
				Function_3(&uVar7, &(uVar0[1]), RAND_INT_RANGE(true, 2), 0, 0, 1);
				Function_3(&uVar7, &(uVar0[2]), RAND_INT_RANGE(2, 3), 0, 0, 1);
				Function_3(&uVar7, &(uVar0[3]), RAND_INT_RANGE(2, 3), 0, 0, 1);
				Function_3(&uVar7, &(uVar0[4]), RAND_INT_RANGE(true, 3), 0, 0, 1);
				Function_3(&uVar7, &(uVar0[5]), RAND_INT_RANGE(2, 3), 0, 0, 1);
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
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_10(&(Global_43791[iScriptParam_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	strcpy(&Global_21682, "gho", 4);
	Function_9("Finished GHOST TOWN file", 5.0f);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x804 / 2052
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x815 / 2069
{
	int iVar0;
	
	if (!Function_8(1))
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

var Function_3(var uParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x86D / 2157
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, bParam2);
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

var Function_4(bool bParam0, int iParam1) //Position: 0x8FD / 2301
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	bVar0 = 99999.0f;
	iVar5 = "";
	iVar6 = "";
	uVar7 = "";
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(&bParam0, &Var1);
	uVar8 = CREATE_OBJECT_ITERATOR(&Global_43578);
	iVar9 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar8, 9);
	iVar6 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_7(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&uVar8);
	}
	Function_5(&uVar8);
	ITERATE_IN_LAYOUT(&uVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar8, 10);
	iVar6 = START_OBJECT_ITERATOR(&uVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_7(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		Function_5(&iVar9);
		ITERATE_IN_LAYOUT(&iVar9, &Global_46715);
		ITERATE_IN_VOLUME_SET(&iVar9, GET_VOLUME_FROM_OBJECT(&iVar6));
		uVar7 = START_OBJECT_ITERATOR(&iVar9);
		while (IS_OBJECT_VALID(&uVar7))
		{
			if (DECOR_CHECK_EXIST(&uVar7, "locflag"))
			{
				if (Function_7(GET_VOLUME_FROM_OBJECT(&uVar7), &iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&uVar7), &Var3);
					if (VDIST(Var1, Var3) > bVar0)
					{
						iVar5 = &uVar7;
						bVar0 = VDIST(Var1, Var3);
					}
				}
			}
			uVar7 = OBJECT_ITERATOR_NEXT(&iVar9);
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&uVar8);
	}
	DESTROY_ITERATOR(&uVar8);
	DESTROY_ITERATOR(&iVar9);
	return &iVar5;
}

int Function_5(int iParam0) //Position: 0xAE5 / 2789
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_6());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_6());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_6() //Position: 0xB1B / 2843
{
	int iVar0;
	
	return &iVar0;
}

bool Function_7(float fParam0, int iParam1) //Position: 0xB24 / 2852
{
	if (!DECOR_CHECK_EXIST(&fParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&fParam0, "locflag") && iParam1) < 0;
}

bool Function_8(int iParam0) //Position: 0xB55 / 2901
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(char* cParam0) //Position: 0xB71 / 2929
{
	if (!Function_8(128))
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

bool Function_10(var uParam0, int iParam1) //Position: 0xBB1 / 2993
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0xBCE / 3022
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_12(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xBDF / 3039
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(&bParam0, bParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&bParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_13(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xC26 / 3110
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

var Function_14(var uParam0, int iParam1) //Position: 0xCA8 / 3240
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_15(int iParam0) //Position: 0xCB7 / 3255
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_16(char* cParam0) //Position: 0xCC4 / 3268
{
	if (!Function_8(128))
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

