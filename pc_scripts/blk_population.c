//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 54
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	bool bVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_20("Loading Black Water population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_19("ped_generic_day", 0);
	Function_16(&uVar0, 202, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 232, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 235, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 230, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 210, 2.0f, 31, 0, 0);
	Function_16(&uVar0, 235, 2.0f, 31, 0, 0);
	Function_16(&uVar0, 225, 10.0f, 15, 0, 0);
	Function_16(&uVar0, 227, 10.0f, 15, 0, 0);
	Function_16(&uVar0, 230, 1.0f, 15, 0, 0);
	Function_16(&uVar0, 184, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 186, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 168, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 176, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 40, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 109, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 110, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 29, 1.0f, 14, 0, 0);
	Function_16(&uVar0, 17, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 23, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 75, 5.0f, 31, 0, 0);
	Function_16(&uVar0, 76, 5.0f, 31, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(&uVar0);
	SET_TOWN_DENSITY(20.0f);
	uVar1 = Function_19("ped_generic_night", 0);
	Function_16(&uVar1, 202, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 17, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 23, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 75, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 76, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 232, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 235, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 230, 5.0f, 48, 0, 0);
	Function_16(&uVar1, 210, 2.0f, 48, 0, 0);
	Function_16(&uVar1, 185, 1.0f, 48, 0, 0);
	Function_16(&uVar1, 187, 1.0f, 48, 0, 0);
	Function_16(&uVar1, 188, 1.0f, 48, 0, 0);
	Function_16(&uVar1, 168, 8.0f, 48, 0, 0);
	Function_16(&uVar1, 176, 8.0f, 48, 0, 0);
	Function_16(&uVar1, 40, 8.0f, 48, 0, 0);
	Function_16(&uVar1, 109, 4.0f, 48, 0, 0);
	Function_16(&uVar1, 110, 4.0f, 48, 0, 0);
	Function_16(&uVar1, 29, 4.0f, 48, 0, 0);
	bVar2 = Function_19("ped_conversation_start", 0);
	Function_15(&bVar2, 232, 5.0f, 0, 0);
	Function_15(&bVar2, 232, 5.0f, 0, 0);
	Function_15(&bVar2, 235, 2.0f, 0, 0);
	Function_15(&bVar2, 235, 5.0f, 0, 0);
	Function_15(&bVar2, 184, 1.0f, 0, 0);
	Function_15(&bVar2, 186, 1.0f, 0, 0);
	Function_15(&bVar2, 185, 1.0f, 0, 0);
	Function_15(&bVar2, 187, 1.0f, 0, 0);
	Function_15(&bVar2, 188, 1.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(&bVar2);
	bVar3 = Function_19("ped_conversation_reply", 0);
	Function_15(&bVar3, 232, 5.0f, 0, 0);
	Function_15(&bVar3, 232, 5.0f, 0, 0);
	Function_15(&bVar3, 235, 5.0f, 0, 0);
	Function_15(&bVar3, 235, 5.0f, 0, 0);
	Function_15(&bVar3, 184, 1.0f, 0, 0);
	Function_15(&bVar3, 186, 1.0f, 0, 0);
	Function_15(&bVar3, 185, 1.0f, 0, 0);
	Function_15(&bVar3, 187, 1.0f, 0, 0);
	Function_15(&bVar3, 188, 1.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(&bVar3);
	uVar4 = Function_19("ped_slum", 0);
	Function_16(&uVar4, 218, 3.0f, 30, 0, 0);
	Function_16(&uVar4, 217, 2.0f, 30, 0, 0);
	Function_16(&uVar4, 45, 1.0f, 30, 0, 0);
	Function_16(&uVar4, 22, 1.0f, 30, 0, 0);
	Function_16(&uVar4, 70, 1.0f, 30, 0, 0);
	uVar5 = Function_19("ped_factory", 0);
	Function_16(&uVar5, 109, 4.0f, 14, 0, 0);
	Function_16(&uVar5, 110, 4.0f, 14, 0, 0);
	Function_16(&uVar5, 29, 4.0f, 14, 0, 0);
	uVar6 = Function_19("nped_docks", 0);
	Function_16(&uVar6, 100, 10.0f, 14, 0, 0);
	Function_16(&uVar6, 101, 10.0f, 14, 0, 0);
	Function_16(&uVar6, 102, 1.0f, 14, 0, 0);
	Function_16(&uVar6, 99, 1.0f, 14, 0, 0);
	uVar7 = Function_19("ped_cityhall", 0);
	Function_16(&uVar7, 225, 10.0f, 14, 0, 0);
	Function_16(&uVar7, 227, 10.0f, 14, 0, 0);
	Function_16(&uVar7, 230, 1.0f, 14, 0, 0);
	uVar8 = Function_19("ped_worker", 0);
	Function_16(&uVar8, 168, 8.0f, 14, 0, 0);
	Function_16(&uVar8, 176, 8.0f, 14, 0, 0);
	Function_16(&uVar8, 40, 8.0f, 14, 0, 0);
	uVar9 = Function_19("ped_saloon_day", 0);
	Function_16(&uVar9, 71, 4.0f, 56, 0, 0);
	Function_16(&uVar9, 72, 4.0f, 56, 0, 0);
	Function_16(&uVar9, 135, 4.0f, 10, 0, 0);
	Function_16(&uVar9, 136, 4.0f, 10, 0, 0);
	Function_16(&uVar9, 113, 4.0f, 10, 0, 0);
	Function_16(&uVar9, 95, 4.0f, 10, 0, 0);
	Function_16(&uVar9, 65, 1.0f, 10, 0, 0);
	Function_16(&uVar9, 66, 1.0f, 10, 0, 0);
	uVar10 = Function_19("ped_saloon_night", 0);
	Function_16(&uVar10, 71, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 72, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 65, 1.0f, 48, 0, 0);
	Function_16(&uVar10, 66, 1.0f, 48, 0, 0);
	Function_16(&uVar10, 135, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 136, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 113, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 95, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 168, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 176, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 40, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 109, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 110, 5.0f, 48, 0, 0);
	Function_16(&uVar10, 29, 5.0f, 48, 0, 0);
	uVar11 = Function_19("ped_theatre", 0);
	Function_16(&uVar11, 95, 10.0f, 48, 0, 0);
	Function_16(&uVar11, 202, 5.0f, 48, 0, 0);
	Function_16(&uVar11, 75, 5.0f, 48, 0, 0);
	Function_16(&uVar11, 76, 5.0f, 48, 0, 0);
	Function_16(&uVar11, 230, 5.0f, 48, 0, 0);
	Function_16(&uVar11, 210, 2.0f, 48, 0, 0);
	Function_16(&uVar11, 184, 1.0f, 48, 0, 0);
	Function_16(&uVar11, 225, 10.0f, 48, 0, 0);
	Function_16(&uVar11, 227, 10.0f, 48, 0, 0);
	uVar12 = Function_19("ped_fbi", 0);
	Function_16(&uVar12, 449, 8.0f, 62, 0, 0);
	Function_16(&uVar12, 450, 2.0f, 62, 0, 0);
	Function_16(&uVar12, 451, 2.0f, 62, 0, 0);
	Function_16(&uVar12, 184, 1.0f, 30, 0, 0);
	Function_16(&uVar12, 185, 1.0f, 30, 0, 0);
	Function_16(&uVar12, 186, 1.0f, 30, 0, 0);
	Function_16(&uVar12, 187, 1.0f, 30, 0, 0);
	Function_16(&uVar12, 188, 1.0f, 30, 0, 0);
	if (Global_39266[0])
	{
		bVar13 = Function_19("nped_poker", 0);
		Function_15(&bVar13, 7, 1.0f, 0, 0);
		Function_15(&bVar13, 19, 1.0f, 0, 0);
		Function_15(&bVar13, 123, 1.0f, 0, 0);
		Function_15(&bVar13, 27, 1.0f, 0, 0);
		Function_15(&bVar13, 90, 1.0f, 0, 0);
		Function_15(&bVar13, 39, 1.0f, 0, 0);
	}
	if (Global_39266[0])
	{
		if (Global_42825 == 1)
		{
			bVar14 = Function_19("ped_poker_H", 0);
			Function_15(&bVar14, 221, 1.0f, 0, 0);
			Function_15(&bVar14, 87, 1.0f, 0, 0);
			Function_15(&bVar14, 438, 1.0f, 0, 0);
			Function_15(&bVar14, 133, 1.0f, 0, 0);
			Function_15(&bVar14, 91, 1.0f, 0, 0);
			Function_15(&bVar14, 124, 1.0f, 0, 0);
		}
	}
	if (Global_39266[2])
	{
		bVar15 = Function_19("ped_blackjack", 0);
		Function_15(&bVar15, 119, 1.0f, 0, 0);
		Function_15(&bVar15, 126, 1.0f, 0, 0);
		Function_15(&bVar15, 8, 1.0f, 0, 0);
		Function_15(&bVar15, 128, 1.0f, 0, 0);
	}
	if (Global_42825 == 1)
	{
		bVar16 = Function_19("highStakesAmb", 0);
		Function_15(&bVar16, 65, 1.0f, 0, 0);
		Function_15(&bVar16, 66, 1.0f, 0, 0);
		Function_15(&bVar16, 67, 1.0f, 0, 0);
		Function_15(&bVar16, 68, 1.0f, 0, 0);
	}
	if (Global_42825 == 1)
	{
		bVar17 = Function_19("highStakesSec", 0);
		Function_15(&bVar17, 184, 1.0f, 0, 0);
		Function_15(&bVar17, 185, 1.0f, 0, 0);
		Function_15(&bVar17, 186, 1.0f, 0, 0);
	}
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_19("animal_wilderness", 0);
	Function_15(&(Global_46972[5]), 1128, 9.0f, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_19("animal_hunt", 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_19("animal_predator", 0);
	Function_15(&(Global_46972[11]), 1069, 4.0f, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_19("animal_herd", 0);
	Function_15(&(Global_46972[8]), 1008, 3.0f, 0, 0);
	bVar18 = Function_19("animal_pig", 0);
	Function_15(&bVar18, 1020, 100.0f, 0, 0);
	bVar19 = Function_19("animal_dog", 0);
	Function_15(&bVar19, 1030, 100.0f, 0, 0);
	Function_15(&bVar19, 1031, 100.0f, 0, 0);
	Function_15(&bVar19, 1032, 100.0f, 0, 0);
	bVar20 = Function_19("animal_cow", 0);
	Function_16(&bVar20, 1008, 100.0f, 15, 0, 0);
	Function_16(&bVar20, 1009, 100.0f, 15, 0, 0);
	Function_16(&bVar20, 1010, 100.0f, 15, 0, 0);
	Function_16(&bVar20, 1011, 100.0f, 15, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_19("animal_bird", 0);
	Function_15(&(Global_46972[7]), 1131, 9.0f, 0, 0);
	Function_15(&(Global_46972[7]), 1134, 9.0f, 0, 0);
	uVar21 = Function_19("animal_gulls", 0);
	Function_16(&uVar21, 1154, 100.0f, 15, 1, 0);
	uVar22 = Function_19("animal_chicken", 0);
	Function_16(&uVar22, 1017, 100.0f, 15, 0, 0);
	Function_16(&uVar22, 1016, 100.0f, 15, 0, 0);
	Function_13(&(Global_46972[5]), 0.0f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_19("ped_law", 1);
	Function_15(&(Global_46972[2]), 184, 10.0f, 0, 0);
	Function_15(&(Global_46972[2]), 185, 10.0f, 0, 0);
	Function_15(&(Global_46972[2]), 186, 10.0f, 0, 0);
	Function_15(&(Global_46972[2]), 187, 10.0f, 0, 0);
	Function_15(&(Global_46972[2]), 188, 10.0f, 0, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_19("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 398, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 397, 4.0f, 0, 0);
	Function_15(&(Global_46972[3]), 399, 4.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_19("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 474, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 475, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 476, 1.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_19("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1186, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1187, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_19("ped_wilderness", Global_47149);
	Function_15(&(Global_46972[0]), 223, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 229, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 224, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 177, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 16, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 205, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 46, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 162, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 35, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 155, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 204, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 207, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 10, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 27, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 236, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 42, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 174, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 17, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 23, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 57, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 79, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_19("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 24, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 75, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 48, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 73, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 78, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 199, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 203, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 208, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 262, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]), 263, 2.0f, 0, 0);
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_19("animal_horse", 2);
	Function_12(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_19("animal_horse_unsaddled", 0);
	Function_15(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 991, 100.0f, 0, 0);
	uVar23 = CREATE_POPULATION_SET(1);
	while (!Function_11(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_10("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar24 = FIND_NAMED_LAYOUT("BlackWater_layout");
	if (IS_LAYOUTREF_VALID(&uVar24))
	{
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_streetSpawn_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			SET_TOWN_VOLUME_FOR_AMBIENT_PEDS(&uVar25);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find blkv_streetSpawn to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_sidewalk_docks_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar6, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_docks_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_sidewalk_factory_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar5, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_factory_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_construction_C_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar8, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_construction_C_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_sidewalk_slums_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar4, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_slums_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_sidewalk_town_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			uVar26 = Function_8(&uVar25, &uVar0, 4, 8, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar26))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar26, 1);
			}
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_town_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_sidewalk_town_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			uVar27 = Function_8(&uVar25, &uVar1, 3, 5, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar27))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar27, 1);
			}
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_town_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_sidewalk_town_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &(Global_46972[2]), 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_town_set to create population volumes");
		}
		if (Global_39266[0])
		{
			uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_Poker");
			if (IS_VOLUME_VALID(&uVar25))
			{
				uVar28 = Function_7(&uVar25, &bVar13, 5, 1, 0, 0);
				Function_6(&uVar28);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar28, 60.0f);
			}
			else
			{
				LOG_ERROR("blk_pop: Cannot find blkv_Poker to create population volumes");
			}
		}
		if (Global_39266[0])
		{
			uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_Poker_H");
			if (IS_VOLUME_VALID(&uVar25))
			{
				bVar29 = Function_7(&uVar25, &bVar14, 5, 1, 0, 0);
				Function_6(&bVar29);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&bVar29, 20.0f);
			}
			else
			{
				LOG_ERROR("blk_pop: Cannot find blkv_Poker_H to create population volumes");
			}
		}
		if (Global_39266[0])
		{
			uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_highStakesSecurity");
			if (IS_VOLUME_VALID(&uVar25))
			{
				uVar30 = Function_7(&uVar25, &bVar17, 2, 1, 0, 0);
				if (IS_ZONE_VALID(&uVar30))
				{
					SET_ZONE_PRIORITY(&uVar30, 2);
					SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar30, 20.0f);
					SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar30, 1);
				}
			}
			else
			{
				LOG_ERROR("blk_pop: Cannot find blkv_highStakesSecurity to create population volumes");
			}
		}
		if (Global_39266[0])
		{
			uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_highStakesWhores");
			if (IS_VOLUME_VALID(&uVar25))
			{
				uVar31 = Function_7(&uVar25, &bVar16, 2, 1, 0, 0);
				if (IS_ZONE_VALID(&uVar31))
				{
					SET_ZONE_PRIORITY(&uVar31, 2);
					SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar31, 20.0f);
					SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar31, 1);
				}
			}
			else
			{
				LOG_ERROR("blk_pop: Cannot find blkv_highStakesWhores to create population volumes");
			}
		}
		if (Global_39266[2])
		{
			uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_blackjack");
			uVar32 = Function_7(&uVar25, &bVar15, 2, 1, 0, 0);
			if (IS_ZONE_VALID(&uVar32))
			{
				Function_4(&uVar32);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar32, 20.0f);
			}
			else
			{
				LOG_ERROR("blk_pop: Cannot find blkv_blackjack to create population volumes");
			}
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_bank_int_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar0, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_bank_int_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_saloon_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar9, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_saloon_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_saloon_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar10, 5, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_saloon_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_saloon_lobby_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar10, 3, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_saloon_lobby_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_barnyard_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar8, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_barnyard_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_church_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_church_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_fbi_int_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar12, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_fbi_int_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_hotel_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_hotel_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_hotel_lobby");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar1, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_hotel_lobby to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_freightStation_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar8, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_freightStation_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_train_platform_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar0, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_train_platform_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_gazebo_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar0, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_gazebo_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_seagulls_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar21, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_seagulls_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_chickens_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &uVar22, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_chickens_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_dog_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &bVar19, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_dog_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_pigs_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &bVar18, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_pigs_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_cows_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &bVar20, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_cows_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_birds_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_3(&uVar25, &(Global_46972[7]), 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_birds_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_horses_set");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_8(&uVar25, &(Global_46972[15]), 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop:  Cannot find blk_horses_set to create population volumes");
		}
		uVar25 = FIND_VOLUME_IN_LAYOUT(&uVar24, "blkv_region");
		if (IS_VOLUME_VALID(&uVar25))
		{
			Function_3(&uVar25, &uVar23, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop:  Cannot find blkv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("blk_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_11(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_10("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x23B9 / 9145
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x23CA / 9162
{
	int iVar0;
	
	if (!Function_9(1))
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

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2422 / 9250
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

void Function_4(int iParam0) //Position: 0x24B2 / 9394
{
	Function_5(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_blackjack");
	return;
}

void Function_5(int iParam0) //Position: 0x24DB / 9435
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x24FE / 9470
{
	Function_5(&bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0, "fake_poker");
	return;
}

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2523 / 9507
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, iParam2);
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

var Function_8(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x25B3 / 9651
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(&uVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &iParam4);
	if (&bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(&uVar0, !&bParam6);
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

bool Function_9(int iParam0) //Position: 0x2645 / 9797
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x2661 / 9825
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x26A1 / 9889
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_12(bool bParam0, int iParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x26BE / 9918
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(&bParam0, iParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&bParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

void Function_13(var uParam0, bool bParam1) //Position: 0x2705 / 9989
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_14(int iParam0) //Position: 0x2716 / 10006
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_15(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x2723 / 10019
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION(&bParam0, iParam1, fParam2);
	if (&bParam3)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&bParam0) - 1);
}

var Function_16(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x27A5 / 10149
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam1);
	iVar1 = GET_ACTORENUM_SPECIES(iParam1);
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_18(iParam3), Function_17(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_17(int iParam0) //Position: 0x2823 / 10275
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

var Function_18(int iParam0) //Position: 0x288F / 10383
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

var Function_19(var uParam0, int iParam1) //Position: 0x28FB / 10491
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_20(char* cParam0) //Position: 0x290A / 10506
{
	if (!Function_9(128))
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

