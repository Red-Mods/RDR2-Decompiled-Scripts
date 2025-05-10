//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 55
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
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_21("Loading Black Water population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_20("ped_generic_day", 0);
	Function_17(&uVar0, 202, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 232, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 235, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 230, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 210, 2.0f, 31, 0, 0);
	Function_17(&uVar0, 235, 2.0f, 31, 0, 0);
	Function_17(&uVar0, 225, 10.0f, 15, 0, 0);
	Function_17(&uVar0, 227, 10.0f, 15, 0, 0);
	Function_17(&uVar0, 230, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 184, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 186, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 168, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 176, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 40, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 109, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 110, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 29, 1.0f, 14, 0, 0);
	Function_17(&uVar0, 17, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 23, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 75, 5.0f, 31, 0, 0);
	Function_17(&uVar0, 76, 5.0f, 31, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(uVar0);
	SET_TOWN_DENSITY(20.0f);
	uVar1 = Function_20("ped_generic_night", 0);
	Function_17(&uVar1, 202, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 17, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 23, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 75, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 76, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 232, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 235, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 230, 5.0f, 48, 0, 0);
	Function_17(&uVar1, 210, 2.0f, 48, 0, 0);
	Function_17(&uVar1, 185, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 187, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 188, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 168, 8.0f, 48, 0, 0);
	Function_17(&uVar1, 176, 8.0f, 48, 0, 0);
	Function_17(&uVar1, 40, 8.0f, 48, 0, 0);
	Function_17(&uVar1, 109, 4.0f, 48, 0, 0);
	Function_17(&uVar1, 110, 4.0f, 48, 0, 0);
	Function_17(&uVar1, 29, 4.0f, 48, 0, 0);
	uVar2 = Function_20("ped_conversation_start", 0);
	Function_16(&uVar2, 232, 5.0f, 0, 0);
	Function_16(&uVar2, 232, 5.0f, 0, 0);
	Function_16(&uVar2, 235, 2.0f, 0, 0);
	Function_16(&uVar2, 235, 5.0f, 0, 0);
	Function_16(&uVar2, 184, 1.0f, 0, 0);
	Function_16(&uVar2, 186, 1.0f, 0, 0);
	Function_16(&uVar2, 185, 1.0f, 0, 0);
	Function_16(&uVar2, 187, 1.0f, 0, 0);
	Function_16(&uVar2, 188, 1.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(uVar2);
	uVar3 = Function_20("ped_conversation_reply", 0);
	Function_16(&uVar3, 232, 5.0f, 0, 0);
	Function_16(&uVar3, 232, 5.0f, 0, 0);
	Function_16(&uVar3, 235, 5.0f, 0, 0);
	Function_16(&uVar3, 235, 5.0f, 0, 0);
	Function_16(&uVar3, 184, 1.0f, 0, 0);
	Function_16(&uVar3, 186, 1.0f, 0, 0);
	Function_16(&uVar3, 185, 1.0f, 0, 0);
	Function_16(&uVar3, 187, 1.0f, 0, 0);
	Function_16(&uVar3, 188, 1.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(uVar3);
	uVar4 = Function_20("ped_slum", 0);
	Function_17(&uVar4, 218, 3.0f, 30, 0, 0);
	Function_17(&uVar4, 217, 2.0f, 30, 0, 0);
	Function_17(&uVar4, 45, 1.0f, 30, 0, 0);
	Function_17(&uVar4, 22, 1.0f, 30, 0, 0);
	Function_17(&uVar4, 70, 1.0f, 30, 0, 0);
	uVar5 = Function_20("ped_factory", 0);
	Function_17(&uVar5, 109, 4.0f, 14, 0, 0);
	Function_17(&uVar5, 110, 4.0f, 14, 0, 0);
	Function_17(&uVar5, 29, 4.0f, 14, 0, 0);
	uVar6 = Function_20("nped_docks", 0);
	Function_17(&uVar6, 100, 10.0f, 14, 0, 0);
	Function_17(&uVar6, 101, 10.0f, 14, 0, 0);
	Function_17(&uVar6, 102, 1.0f, 14, 0, 0);
	Function_17(&uVar6, 99, 1.0f, 14, 0, 0);
	uVar7 = Function_20("ped_cityhall", 0);
	Function_17(&uVar7, 225, 10.0f, 14, 0, 0);
	Function_17(&uVar7, 227, 10.0f, 14, 0, 0);
	Function_17(&uVar7, 230, 1.0f, 14, 0, 0);
	uVar8 = Function_20("ped_worker", 0);
	Function_17(&uVar8, 168, 8.0f, 14, 0, 0);
	Function_17(&uVar8, 176, 8.0f, 14, 0, 0);
	Function_17(&uVar8, 40, 8.0f, 14, 0, 0);
	uVar9 = Function_20("ped_saloon_day", 0);
	Function_17(&uVar9, 71, 4.0f, 56, 0, 0);
	Function_17(&uVar9, 72, 4.0f, 56, 0, 0);
	Function_17(&uVar9, 135, 4.0f, 10, 0, 0);
	Function_17(&uVar9, 136, 4.0f, 10, 0, 0);
	Function_17(&uVar9, 113, 4.0f, 10, 0, 0);
	Function_17(&uVar9, 95, 4.0f, 10, 0, 0);
	Function_17(&uVar9, 65, 1.0f, 10, 0, 0);
	Function_17(&uVar9, 66, 1.0f, 10, 0, 0);
	uVar10 = Function_20("ped_saloon_night", 0);
	Function_17(&uVar10, 71, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 72, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 65, 1.0f, 48, 0, 0);
	Function_17(&uVar10, 66, 1.0f, 48, 0, 0);
	Function_17(&uVar10, 135, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 136, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 113, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 95, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 168, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 176, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 40, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 109, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 110, 5.0f, 48, 0, 0);
	Function_17(&uVar10, 29, 5.0f, 48, 0, 0);
	uVar11 = Function_20("ped_theatre", 0);
	Function_17(&uVar11, 95, 10.0f, 48, 0, 0);
	Function_17(&uVar11, 202, 5.0f, 48, 0, 0);
	Function_17(&uVar11, 75, 5.0f, 48, 0, 0);
	Function_17(&uVar11, 76, 5.0f, 48, 0, 0);
	Function_17(&uVar11, 230, 5.0f, 48, 0, 0);
	Function_17(&uVar11, 210, 2.0f, 48, 0, 0);
	Function_17(&uVar11, 184, 1.0f, 48, 0, 0);
	Function_17(&uVar11, 225, 10.0f, 48, 0, 0);
	Function_17(&uVar11, 227, 10.0f, 48, 0, 0);
	uVar12 = Function_20("ped_fbi", 0);
	Function_17(&uVar12, 449, 8.0f, 62, 0, 0);
	Function_17(&uVar12, 450, 2.0f, 62, 0, 0);
	Function_17(&uVar12, 451, 2.0f, 62, 0, 0);
	Function_17(&uVar12, 184, 1.0f, 30, 0, 0);
	Function_17(&uVar12, 185, 1.0f, 30, 0, 0);
	Function_17(&uVar12, 186, 1.0f, 30, 0, 0);
	Function_17(&uVar12, 187, 1.0f, 30, 0, 0);
	Function_17(&uVar12, 188, 1.0f, 30, 0, 0);
	if (!Function_15())
	{
		if (Global_25974[0])
		{
			uVar13 = Function_20("nped_poker", 0);
			Function_16(&uVar13, 7, 1.0f, 0, 0);
			Function_16(&uVar13, 19, 1.0f, 0, 0);
			Function_16(&uVar13, 123, 1.0f, 0, 0);
			Function_16(&uVar13, 27, 1.0f, 0, 0);
			Function_16(&uVar13, 90, 1.0f, 0, 0);
			Function_16(&uVar13, 39, 1.0f, 0, 0);
		}
		if (Global_25974[0])
		{
			if (Global_28178 == 1)
			{
				uVar14 = Function_20("ped_poker_H", 0);
				Function_16(&uVar14, 221, 1.0f, 0, 0);
				Function_16(&uVar14, 87, 1.0f, 0, 0);
				Function_16(&uVar14, 438, 1.0f, 0, 0);
				Function_16(&uVar14, 133, 1.0f, 0, 0);
				Function_16(&uVar14, 91, 1.0f, 0, 0);
				Function_16(&uVar14, 124, 1.0f, 0, 0);
			}
		}
		if (Global_25974[2])
		{
			uVar15 = Function_20("ped_blackjack", 0);
			Function_16(&uVar15, 119, 1.0f, 0, 0);
			Function_16(&uVar15, 126, 1.0f, 0, 0);
			Function_16(&uVar15, 8, 1.0f, 0, 0);
			Function_16(&uVar15, 128, 1.0f, 0, 0);
		}
	}
	if (Global_28178 == 1)
	{
		uVar16 = Function_20("highStakesAmb", 0);
		Function_16(&uVar16, 65, 1.0f, 0, 0);
		Function_16(&uVar16, 66, 1.0f, 0, 0);
		Function_16(&uVar16, 67, 1.0f, 0, 0);
		Function_16(&uVar16, 68, 1.0f, 0, 0);
	}
	if (Global_28178 == 1)
	{
		uVar17 = Function_20("highStakesSec", 0);
		Function_16(&uVar17, 184, 1.0f, 0, 0);
		Function_16(&uVar17, 185, 1.0f, 0, 0);
		Function_16(&uVar17, 186, 1.0f, 0, 0);
	}
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_20("animal_wilderness", 0);
	Function_16(&(Global_30750[5]), 1128, 9.0f, 0, 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_20("animal_hunt", 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_20("animal_predator", 0);
	Function_16(&(Global_30750[11]), 1069, 4.0f, 0, 0);
	Function_14(&(Global_30750[8]));
	Global_30750[8] = Function_20("animal_herd", 0);
	Function_16(&(Global_30750[8]), 1008, 3.0f, 0, 0);
	uVar18 = Function_20("animal_pig", 0);
	Function_16(&uVar18, 1020, 100.0f, 0, 0);
	uVar19 = Function_20("animal_dog", 0);
	Function_16(&uVar19, 1030, 100.0f, 0, 0);
	Function_16(&uVar19, 1031, 100.0f, 0, 0);
	Function_16(&uVar19, 1032, 100.0f, 0, 0);
	uVar20 = Function_20("animal_cow", 0);
	Function_17(&uVar20, 1008, 100.0f, 15, 0, 0);
	Function_17(&uVar20, 1009, 100.0f, 15, 0, 0);
	Function_17(&uVar20, 1010, 100.0f, 15, 0, 0);
	Function_17(&uVar20, 1011, 100.0f, 15, 0, 0);
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_20("animal_bird", 0);
	Function_16(&(Global_30750[7]), 1131, 9.0f, 0, 0);
	Function_16(&(Global_30750[7]), 1134, 9.0f, 0, 0);
	uVar21 = Function_20("animal_gulls", 0);
	Function_17(&uVar21, 1154, 100.0f, 15, 1, 0);
	uVar22 = Function_20("animal_chicken", 0);
	Function_17(&uVar22, 1017, 100.0f, 15, 0, 0);
	Function_17(&uVar22, 1016, 100.0f, 15, 0, 0);
	Function_13(Global_30750[5], 0.0f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_20("ped_law", 1);
	Function_16(&(Global_30750[2]), 184, 10.0f, 0, 0);
	Function_16(&(Global_30750[2]), 185, 10.0f, 0, 0);
	Function_16(&(Global_30750[2]), 186, 10.0f, 0, 0);
	Function_16(&(Global_30750[2]), 187, 10.0f, 0, 0);
	Function_16(&(Global_30750[2]), 188, 10.0f, 0, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_20("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 398, 1.0f, 0, 0);
	Function_16(&(Global_30750[3]), 397, 4.0f, 0, 0);
	Function_16(&(Global_30750[3]), 399, 4.0f, 0, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_20("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 474, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 475, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 476, 1.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_20("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1186, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1187, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_20("ped_wilderness", Global_30840);
	Function_16(&(Global_30750[0]), 223, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 229, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 224, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 177, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 16, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 205, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 46, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 162, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 35, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 155, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 204, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 207, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 10, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 27, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 236, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 42, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 174, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 17, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 23, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 57, 2.0f, 0, 0);
	Function_16(&(Global_30750[0]), 79, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_20("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 24, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 75, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 48, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 199, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 203, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 208, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 262, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]), 263, 2.0f, 0, 0);
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_20("animal_horse", 2);
	Function_12(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_20("animal_horse_unsaddled", 0);
	Function_16(&(Global_30750[15]), 976, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 991, 100.0f, 0, 0);
	uVar23 = CREATE_POPULATION_SET(1);
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
	bVar24 = FIND_NAMED_LAYOUT("BlackWater_layout");
	if (IS_LAYOUTREF_VALID(bVar24))
	{
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_streetSpawn_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			SET_TOWN_VOLUME_FOR_AMBIENT_PEDS(bVar25);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find blkv_streetSpawn to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_sidewalk_docks_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar6, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_docks_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_sidewalk_factory_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar5, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_factory_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_construction_C_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar8, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_construction_C_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_sidewalk_slums_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar4, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_slums_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_sidewalk_town_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			bVar26 = Function_8(bVar25, uVar0, 4, 8, 0, 0, 1);
			if (IS_ZONE_VALID(bVar26))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar26, 1);
			}
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_town_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_sidewalk_town_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			bVar27 = Function_8(bVar25, uVar1, 3, 5, 0, 0, 1);
			if (IS_ZONE_VALID(bVar27))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar27, 1);
			}
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_town_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_sidewalk_town_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, Global_30750[2], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_sidewalk_town_set to create population volumes");
		}
		if (!Function_15())
		{
			if (Global_25974[0])
			{
				bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_Poker");
				if (IS_VOLUME_VALID(bVar25))
				{
					bVar28 = Function_7(bVar25, uVar13, 5, 1, 0, 0);
					Function_6(bVar28);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar28, 60.0f);
				}
				else
				{
					LOG_ERROR("blk_pop: Cannot find blkv_Poker to create population volumes");
				}
			}
			if (Global_25974[0])
			{
				bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_Poker_H");
				if (IS_VOLUME_VALID(bVar25))
				{
					bVar29 = Function_7(bVar25, uVar14, 5, 1, 0, 0);
					Function_6(bVar29);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar29, 20.0f);
				}
				else
				{
					LOG_ERROR("blk_pop: Cannot find blkv_Poker_H to create population volumes");
				}
			}
			if (Global_25974[0])
			{
				bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_highStakesSecurity");
				if (IS_VOLUME_VALID(bVar25))
				{
					bVar30 = Function_7(bVar25, uVar17, 2, 1, 0, 0);
					if (IS_ZONE_VALID(bVar30))
					{
						SET_ZONE_PRIORITY(bVar30, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar30, 20.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar30, 1);
					}
				}
				else
				{
					LOG_ERROR("blk_pop: Cannot find blkv_highStakesSecurity to create population volumes");
				}
			}
			if (Global_25974[0])
			{
				bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_highStakesWhores");
				if (IS_VOLUME_VALID(bVar25))
				{
					bVar31 = Function_7(bVar25, uVar16, 2, 1, 0, 0);
					if (IS_ZONE_VALID(bVar31))
					{
						SET_ZONE_PRIORITY(bVar31, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar31, 20.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar31, 1);
					}
				}
				else
				{
					LOG_ERROR("blk_pop: Cannot find blkv_highStakesWhores to create population volumes");
				}
			}
			if (Global_25974[2])
			{
				bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_blackjack");
				bVar32 = Function_7(bVar25, uVar15, 2, 1, 0, 0);
				if (IS_ZONE_VALID(bVar32))
				{
					Function_4(bVar32);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar32, 20.0f);
				}
				else
				{
					LOG_ERROR("blk_pop: Cannot find blkv_blackjack to create population volumes");
				}
			}
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_bank_int_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar0, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_bank_int_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_saloon_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar9, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_saloon_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_saloon_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar10, 5, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_saloon_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_saloon_lobby_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar10, 3, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_saloon_lobby_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_barnyard_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar8, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_barnyard_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_church_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_church_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_fbi_int_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar12, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_fbi_int_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_hotel_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_hotel_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_hotel_lobby");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar1, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_hotel_lobby to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_freightStation_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar8, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_freightStation_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_train_platform_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar0, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_train_platform_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_gazebo_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar0, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_gazebo_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_seagulls_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar21, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_seagulls_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_chickens_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar22, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_chickens_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_dog_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar19, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_dog_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_pigs_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar18, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_pigs_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_cows_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, uVar20, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_cows_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_birds_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_3(bVar25, Global_30750[7], 1E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop: Cannot find blkv_birds_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_horses_set");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_8(bVar25, Global_30750[15], 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("blk_pop:  Cannot find blk_horses_set to create population volumes");
		}
		bVar25 = FIND_VOLUME_IN_LAYOUT(bVar24, "blkv_region");
		if (IS_VOLUME_VALID(bVar25))
		{
			Function_3(bVar25, uVar23, 0.0f, 0, 0, 1);
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
	Function_10("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x22DF / 8927
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x22EE / 8942
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2343 / 9027
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

void Function_4(bool bParam0) //Position: 0x23C3 / 9155
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_blackjack");
	return;
}

void Function_5(bool bParam0) //Position: 0x23E9 / 9193
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x2408 / 9224
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_poker");
	return;
}

var Function_7(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x242A / 9258
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

var Function_8(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x24AA / 9386
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

bool Function_9(int iParam0) //Position: 0x252C / 9516
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x2548 / 9544
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

bool Function_11(var uParam0, int iParam1) //Position: 0x2586 / 9606
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_12(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x25A2 / 9634
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

void Function_13(var uParam0, bool bParam1) //Position: 0x25E7 / 9703
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_14(var uParam0) //Position: 0x25F7 / 9719
{
	DESTROY_POPULATION_SET(*uParam0);
	return;
}

bool Function_15() //Position: 0x2603 / 9731
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x260C / 9740
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2688 / 9864
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_19(iParam3), Function_18(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_18(int iParam0) //Position: 0x2700 / 9984
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

var Function_19(int iParam0) //Position: 0x276C / 10092
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

var Function_20(int iParam0, int iParam1) //Position: 0x27D8 / 10200
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_21(bool bParam0, var uParam1) //Position: 0x27E5 / 10213
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

