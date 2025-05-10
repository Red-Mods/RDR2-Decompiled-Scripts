//Decompiled with MagicRDR v1.0
//Function Count : 28
//Statics Count : 4
//Natives Count : 50
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
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_27("Loading Casa Madrugada population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_26(&(Global_30750[6]));
	Global_30750[6] = Function_25("animal_horse", 4);
	Function_24(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_24(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_26(&(Global_30750[15]));
	Global_30750[15] = Function_25("animal_horse_unsaddled", 0);
	Function_23(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_23(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_26(&(Global_30750[0]));
	Global_30750[0] = Function_25("ped_wilderness", Global_30840);
	Function_23(&(Global_30750[0]), 239, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 240, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 241, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 295, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 296, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 313, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 269, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 270, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 271, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 272, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 279, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 284, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 287, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 292, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 297, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 299, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 314, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 317, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 322, 1.0f, 0, 0);
	Function_23(&(Global_30750[0]), 323, 1.0f, 0, 0);
	Function_26(&(Global_30750[1]));
	Global_30750[1] = Function_25("ped_traveller", 3);
	Function_23(&(Global_30750[1]), 63, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 62, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 253, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 274, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 275, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 302, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 303, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 304, 1.0f, 0, 0);
	Function_23(&(Global_30750[1]), 318, 1.0f, 0, 0);
	Function_26(&(Global_30750[5]));
	Global_30750[5] = Function_25("animal_wilderness", 1);
	Function_20(&(Global_30750[5]), 1059, 3.0f, 14, 1, 0);
	Function_23(&(Global_30750[5]), 1078, 10.0f, 1, 0);
	Function_20(&(Global_30750[5]), 1128, 5.0f, 15, 1, 0);
	Function_23(&(Global_30750[5]), 1081, 8.0f, 1, 0);
	Function_26(&(Global_30750[11]));
	Global_30750[11] = Function_25("animal_predator", 1);
	Function_23(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1050, 1.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1051, 1.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_23(&(Global_30750[11]), 1052, 1.0f, 0, 0);
	Function_26(&(Global_30750[10]));
	Global_30750[10] = Function_25("animal_hunt", 0);
	Function_26(&(Global_30750[8]));
	Global_30750[8] = Function_25("animal_herd", 1);
	Function_23(&(Global_30750[8]), 1064, 1.0f, 1, 0);
	Function_23(&(Global_30750[8]), 1059, 5.0f, 1, 0);
	Function_23(&(Global_30750[8]), 1078, 20.0f, 1, 0);
	Function_23(&(Global_30750[8]), 1049, 2.0f, 1, 0);
	uVar0 = Function_25("snakes", 0);
	Function_20(&uVar0, 1059, 8.0f, 14, 0, 0);
	uVar1 = Function_25("vultures", 0);
	Function_20(&uVar1, 1128, 10.0f, 14, 0, 0);
	Function_20(&uVar1, 1129, 10.0f, 14, 0, 0);
	Function_20(&uVar1, 1130, 10.0f, 14, 0, 0);
	uVar2 = Function_25("crows", 0);
	Function_20(&uVar2, 1131, 10.0f, 14, 0, 0);
	Function_20(&uVar2, 1132, 10.0f, 14, 0, 0);
	Function_20(&uVar2, 1133, 10.0f, 14, 0, 0);
	uVar3 = Function_25("Horses", 0);
	Function_23(&uVar3, 977, 1.0f, 0, 0);
	Function_23(&uVar3, 976, 2.0f, 0, 0);
	Function_23(&uVar3, 980, 1.0f, 0, 0);
	Function_23(&uVar3, 981, 1.5f, 0, 0);
	uVar4 = Function_25("Train", 0);
	Function_20(&uVar4, 47, 3.0f, 15, 0, 0);
	Function_20(&uVar4, 311, 4.0f, 15, 0, 0);
	Function_20(&uVar4, 306, 1.0f, 15, 0, 0);
	Function_20(&uVar4, 87, 3.0f, 15, 0, 0);
	Function_20(&uVar4, 207, 2.0f, 15, 0, 0);
	Function_20(&uVar4, 138, 3.0f, 15, 0, 0);
	Function_20(&uVar4, 203, 2.0f, 15, 0, 0);
	Function_20(&uVar4, 208, 2.0f, 15, 0, 0);
	Function_20(&uVar4, 263, 2.0f, 15, 0, 0);
	Function_20(&uVar4, 265, 2.0f, 15, 0, 0);
	uVar5 = Function_25("BarFolk", 0);
	Function_20(&uVar5, 245, 8.0f, 57, 0, 0);
	Function_20(&uVar5, 247, 8.0f, 57, 0, 0);
	Function_20(&uVar5, 87, 5.0f, 57, 0, 0);
	Function_20(&uVar5, 207, 2.0f, 57, 0, 0);
	Function_20(&uVar5, 311, 4.0f, 57, 0, 0);
	Function_20(&uVar5, 280, 3.0f, 57, 0, 0);
	Function_20(&uVar5, 249, 8.0f, 57, 0, 0);
	Function_20(&uVar5, 248, 8.0f, 57, 0, 0);
	Function_20(&uVar5, 263, 5.0f, 57, 0, 0);
	Function_20(&uVar5, 265, 5.0f, 57, 0, 0);
	Function_20(&uVar5, 498, 6.0f, 48, 0, 0);
	Function_20(&uVar5, 501, 6.0f, 48, 0, 0);
	Function_20(&uVar5, 502, 6.0f, 48, 0, 0);
	Function_20(&uVar5, 503, 6.0f, 48, 0, 0);
	uVar6 = Function_25("Folk", 0);
	Function_20(&uVar6, 247, 12.0f, 57, 0, 0);
	Function_20(&uVar6, 248, 8.0f, 57, 0, 0);
	Function_20(&uVar6, 245, 12.0f, 57, 0, 0);
	Function_20(&uVar6, 263, 4.0f, 57, 0, 0);
	Function_20(&uVar6, 265, 8.0f, 57, 0, 0);
	Function_20(&uVar6, 230, 6.0f, 57, 0, 0);
	Function_20(&uVar6, 204, 4.0f, 57, 0, 0);
	Function_20(&uVar6, 203, 5.0f, 57, 0, 0);
	Function_20(&uVar6, 278, 6.0f, 57, 0, 0);
	Function_20(&uVar6, 497, 6.0f, 49, 0, 0);
	Function_20(&uVar6, 499, 6.0f, 49, 0, 0);
	Function_20(&uVar6, 502, 6.0f, 49, 0, 0);
	Function_20(&uVar6, 504, 6.0f, 49, 0, 0);
	uVar7 = Function_25("DayFolk", 0);
	Function_20(&uVar7, 285, 6.0f, 11, 0, 0);
	Function_20(&uVar7, 286, 6.0f, 11, 0, 0);
	Function_20(&uVar7, 288, 6.0f, 11, 0, 0);
	Function_20(&uVar7, 290, 6.0f, 11, 0, 0);
	Function_20(&uVar7, 294, 6.0f, 11, 0, 0);
	Function_20(&uVar7, 296, 6.0f, 11, 0, 0);
	Function_20(&uVar7, 298, 6.0f, 11, 0, 0);
	if (!Function_19() && !Function_13(26))
	{
		if (Global_25974[0])
		{
			uVar8 = Function_25("nped_poker", 0);
			Function_23(&uVar8, 133, 1.0f, 0, 0);
			Function_23(&uVar8, 518, 1.0f, 0, 0);
			Function_23(&uVar8, 262, 1.0f, 0, 0);
			Function_23(&uVar8, 463, 1.0f, 0, 0);
			Function_23(&uVar8, 410, 1.0f, 0, 0);
			Function_23(&uVar8, 411, 1.0f, 0, 0);
			Function_23(&uVar8, 279, 1.0f, 0, 0);
		}
		if (Global_25974[7])
		{
			uVar9 = Function_25("ped_liarsdice", 0);
			Function_23(&uVar9, 258, 1.0f, 0, 0);
			Function_23(&uVar9, 498, 1.0f, 0, 0);
			Function_23(&uVar9, 406, 1.0f, 0, 0);
			Function_23(&uVar9, 38, 1.0f, 0, 0);
			Function_23(&uVar9, 138, 1.0f, 0, 0);
			Function_23(&uVar9, 200, 1.0f, 0, 0);
			Function_23(&uVar9, 207, 1.0f, 0, 0);
		}
	}
	uVar10 = Function_25("Mules", 0);
	Function_23(&uVar10, 1000, 10.0f, 0, 0);
	Function_26(&(Global_30750[7]));
	Global_30750[7] = Function_25("animal_bird", 1);
	Function_20(&(Global_30750[7]), 1131, 2.0f, 15, 1, 0);
	Function_12(Global_30750[5], 4E-05f);
	Function_26(&(Global_30750[2]));
	Global_30750[2] = Function_25("ped_law", 1);
	Function_23(&(Global_30750[2]), 466, 8.0f, 1, 0);
	Function_23(&(Global_30750[2]), 462, 8.0f, 1, 0);
	Function_23(&(Global_30750[2]), 463, 8.0f, 1, 0);
	Function_26(&(Global_30750[3]));
	Global_30750[3] = Function_25("ped_bad_guys_local", 1);
	Function_23(&(Global_30750[3]), 410, 1.0f, 1, 0);
	Function_23(&(Global_30750[3]), 413, 4.0f, 1, 0);
	Function_23(&(Global_30750[3]), 406, 4.0f, 1, 0);
	Function_26(&(Global_30750[4]));
	Global_30750[4] = Function_25("ped_bad_guys_generic", 1);
	Function_23(&(Global_30750[4]), 500, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 501, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 499, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 496, 1.0f, 1, 0);
	Function_23(&(Global_30750[4]), 497, 1.0f, 1, 0);
	Function_26(&(Global_30750[9]));
	Global_30750[9] = Function_25("ped_vehicle", 1);
	Function_23(&(Global_30750[9]), 1185, 2.0f, 1, 0);
	Function_23(&(Global_30750[9]), 1184, 2.0f, 1, 0);
	Function_23(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_23(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_23(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_23(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar11 = CREATE_POPULATION_SET(1);
	while (!Function_11(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_10("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar12 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (IS_LAYOUTREF_VALID(bVar12))
	{
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_bar_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar5, 4, 8, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_regs_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_CourtYrd_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar7, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_CourtYrd_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_trainyard_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar7, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_CourtYrd_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_train_platform_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar4, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_train_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_patioupper");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar6, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_patio to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_patiolower");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar6, 4, 6, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_patio to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_brothel_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar6, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_brothel_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_walkway_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar5, 2, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_walkway_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_balcony_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_8(bVar13, uVar5, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_walkway_set to create population volumes");
		}
		if (!Function_19())
		{
			if (Global_25974[0])
			{
				bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_Poker");
				bVar14 = Function_7(bVar13, uVar8, 5, 1, 0, 0);
				if (IS_ZONE_VALID(bVar14))
				{
					Function_6(bVar14);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar14, 20.0f);
				}
				else
				{
					LOG_ERROR("cas_pop: Cannot find casv_Poker to create population volumes");
				}
			}
			if (Global_25974[7])
			{
				bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_liarsdice");
				bVar15 = Function_7(bVar13, uVar9, 3, 1, 0, 0);
				if (IS_ZONE_VALID(bVar15))
				{
					Function_4(bVar15);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar15, 20.0f);
				}
				else
				{
					LOG_ERROR("cas_pop: Cannot find casv_liarsdice to create population volumes");
				}
			}
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_crows_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, uVar2, 0.00015f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_crows_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_vultures_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, uVar1, 0.0001f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_vultures_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_snakes_set");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, uVar0, 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cas_pop: Cannot find casv_snakes_set to create population volumes");
		}
		bVar13 = FIND_VOLUME_IN_LAYOUT(bVar12, "casv_region");
		if (IS_VOLUME_VALID(bVar13))
		{
			Function_3(bVar13, uVar11, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("casv_pop: Cannot find casv_region_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("casv_region: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_11(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_10("Finished loading Casa Madrugada population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x15AC / 5548
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x15BB / 5563
{
	int iVar0;
	
	if (!Function_9(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1610 / 5648
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

void Function_4(bool bParam0) //Position: 0x1690 / 5776
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_liars_dice");
	return;
}

void Function_5(bool bParam0) //Position: 0x16B7 / 5815
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x16D6 / 5846
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_poker");
	return;
}

var Function_7(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x16F8 / 5880
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
	SET_ZONE_POPULATION_COUNT(bVar0, iParam2);
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

var Function_8(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1778 / 6008
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

bool Function_9(int iParam0) //Position: 0x17FA / 6138
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x1816 / 6166
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x1854 / 6228
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x1870 / 6256
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_13(int iParam0) //Position: 0x1880 / 6272
{
	int iVar0;
	
	if (!Function_18(iParam0))
	{
		return 0;
	}
	iVar0 = Function_17(iParam0);
	if (!Function_14(Function_17(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_14(int iParam0) //Position: 0x18B6 / 6326
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_15(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_15(int iParam0) //Position: 0x18DA / 6362
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0x18EF / 6383
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_17(int iParam0) //Position: 0x1906 / 6406
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x1920 / 6432
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_19() //Position: 0x1936 / 6454
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_20(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x193F / 6463
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_22(iParam3), Function_21(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_21(int iParam0) //Position: 0x19B7 / 6583
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

var Function_22(int iParam0) //Position: 0x1A23 / 6691
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

var Function_23(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1A8F / 6799
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

var Function_24(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1B0B / 6923
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_23(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_25(int iParam0, int iParam1) //Position: 0x1B50 / 6992
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_26(int iParam0) //Position: 0x1B5D / 7005
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_27(bool bParam0, var uParam1) //Position: 0x1B69 / 7017
{
	if (!Function_9(128))
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

