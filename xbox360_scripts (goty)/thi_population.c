//Decompiled with MagicRDR v1.0
//Function Count : 25
//Statics Count : 4
//Natives Count : 66
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
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_24("Loading Thieves Landing population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_23("ped_generic", 0);
	Function_20(&uVar0, 99, 8.0f, 14, 0, 0);
	Function_20(&uVar0, 100, 4.0f, 14, 0, 0);
	Function_20(&uVar0, 101, 4.0f, 14, 0, 0);
	Function_20(&uVar0, 102, 2.0f, 14, 0, 0);
	Function_20(&uVar0, 397, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 398, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 400, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 401, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 402, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 403, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 404, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 405, 1.0f, 30, 0, 0);
	Function_20(&uVar0, 73, 8.0f, 30, 0, 0);
	Function_20(&uVar0, 74, 8.0f, 30, 0, 0);
	Function_20(&uVar0, 50, 8.0f, 30, 0, 0);
	Function_20(&uVar0, 23, 8.0f, 30, 0, 0);
	Function_20(&uVar0, 57, 8.0f, 14, 0, 0);
	Function_20(&uVar0, 64, 8.0f, 14, 0, 0);
	Function_20(&uVar0, 200, 8.0f, 14, 0, 0);
	Function_20(&uVar0, 44, 8.0f, 14, 0, 0);
	Function_20(&uVar0, 48, 8.0f, 14, 0, 0);
	uVar1 = Function_23("ped_conv_start", 0);
	Function_19(&uVar1, 73, 8.0f, 0, 0);
	Function_19(&uVar1, 74, 8.0f, 0, 0);
	Function_19(&uVar1, 50, 8.0f, 0, 0);
	Function_19(&uVar1, 44, 8.0f, 0, 0);
	Function_19(&uVar1, 48, 8.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(uVar1);
	uVar2 = Function_23("ped_conv_reply", 0);
	Function_20(&uVar2, 397, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 398, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 400, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 401, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 402, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 403, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 404, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 405, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 73, 8.0f, 30, 0, 0);
	Function_20(&uVar2, 74, 8.0f, 30, 0, 0);
	Function_20(&uVar2, 50, 8.0f, 30, 0, 0);
	Function_20(&uVar2, 44, 8.0f, 14, 0, 0);
	Function_20(&uVar2, 48, 8.0f, 14, 0, 0);
	Function_19(&uVar2, 397, 1.0f, 0, 0);
	Function_19(&uVar2, 398, 1.0f, 0, 0);
	Function_19(&uVar2, 400, 1.0f, 0, 0);
	Function_19(&uVar2, 401, 1.0f, 0, 0);
	Function_19(&uVar2, 402, 1.0f, 0, 0);
	Function_19(&uVar2, 403, 1.0f, 0, 0);
	Function_19(&uVar2, 404, 1.0f, 0, 0);
	Function_19(&uVar2, 405, 1.0f, 0, 0);
	Function_19(&uVar2, 73, 8.0f, 0, 0);
	Function_19(&uVar2, 74, 8.0f, 0, 0);
	Function_19(&uVar2, 50, 8.0f, 0, 0);
	Function_19(&uVar2, 44, 8.0f, 0, 0);
	Function_19(&uVar2, 48, 8.0f, 0, 0);
	Function_20(&uVar2, 397, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 398, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 400, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 401, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 402, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 403, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 404, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 405, 1.0f, 30, 0, 0);
	Function_20(&uVar2, 73, 8.0f, 30, 0, 0);
	Function_20(&uVar2, 74, 8.0f, 30, 0, 0);
	Function_20(&uVar2, 50, 8.0f, 30, 0, 0);
	Function_20(&uVar2, 44, 8.0f, 14, 0, 0);
	Function_20(&uVar2, 48, 8.0f, 14, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(uVar2);
	uVar3 = Function_23("ped_worker", 0);
	Function_20(&uVar3, 99, 8.0f, 15, 0, 0);
	Function_20(&uVar3, 100, 4.0f, 15, 0, 0);
	Function_20(&uVar3, 101, 4.0f, 15, 0, 0);
	Function_20(&uVar3, 102, 2.0f, 15, 0, 0);
	Function_20(&uVar3, 178, 8.0f, 15, 0, 0);
	Function_20(&uVar3, 35, 8.0f, 15, 0, 0);
	Function_20(&uVar3, 37, 8.0f, 15, 0, 0);
	Function_20(&uVar3, 200, 8.0f, 14, 0, 0);
	Function_20(&uVar3, 480, 2.0f, 15, 0, 0);
	Function_20(&uVar3, 483, 1.0f, 15, 0, 0);
	uVar4 = Function_23("ped_saloon", 2);
	Function_19(&uVar4, 230, 2.0f, 0, 0);
	Function_19(&uVar4, 142, 2.0f, 0, 0);
	Function_19(&uVar4, 143, 2.0f, 0, 0);
	Function_19(&uVar4, 178, 2.0f, 0, 0);
	Function_19(&uVar4, 35, 2.0f, 0, 0);
	Function_19(&uVar4, 37, 2.0f, 0, 0);
	Function_19(&uVar4, 71, 2.0f, 0, 0);
	Function_19(&uVar4, 72, 2.0f, 0, 0);
	Function_19(&uVar4, 397, 2.0f, 0, 0);
	Function_19(&uVar4, 398, 2.0f, 0, 0);
	Function_19(&uVar4, 400, 2.0f, 0, 0);
	Function_19(&uVar4, 401, 2.0f, 0, 0);
	Function_19(&uVar4, 402, 2.0f, 0, 0);
	Function_19(&uVar4, 403, 2.0f, 0, 0);
	Function_19(&uVar4, 404, 2.0f, 0, 0);
	Function_19(&uVar4, 405, 2.0f, 0, 0);
	Function_19(&uVar4, 99, 2.0f, 0, 0);
	Function_19(&uVar4, 100, 2.0f, 0, 0);
	Function_19(&uVar4, 101, 2.0f, 0, 0);
	Function_19(&uVar4, 102, 2.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(uVar4);
	SET_TOWN_DENSITY(15.0f);
	uVar5 = Function_23("ped_brothel", 0);
	Function_19(&uVar5, 99, 1.0f, 0, 0);
	Function_19(&uVar5, 100, 1.0f, 0, 0);
	Function_19(&uVar5, 101, 1.0f, 0, 0);
	Function_19(&uVar5, 102, 1.0f, 0, 0);
	Function_19(&uVar5, 230, 1.0f, 0, 0);
	Function_19(&uVar5, 142, 1.0f, 0, 0);
	Function_19(&uVar5, 477, 1.0f, 0, 0);
	Function_19(&uVar5, 478, 1.0f, 0, 0);
	Function_19(&uVar5, 480, 1.0f, 0, 0);
	Function_19(&uVar5, 481, 1.0f, 0, 0);
	Function_19(&uVar5, 482, 1.0f, 0, 0);
	Function_19(&uVar5, 483, 1.0f, 0, 0);
	Function_19(&uVar5, 484, 1.0f, 0, 0);
	Function_19(&uVar5, 485, 1.0f, 0, 0);
	uVar6 = Function_23("nped_whore", 0);
	Function_19(&uVar6, 65, 2.0f, 0, 0);
	Function_19(&uVar6, 66, 2.0f, 0, 0);
	Function_19(&uVar6, 67, 2.0f, 0, 0);
	Function_19(&uVar6, 68, 2.0f, 0, 0);
	Function_19(&uVar6, 69, 2.0f, 0, 0);
	Function_19(&uVar6, 70, 2.0f, 0, 0);
	if (!Function_18())
	{
		if (Global_25974[0])
		{
			uVar7 = Function_23("nped_poker", 0);
			Function_19(&uVar7, 139, 2.0f, 0, 0);
			Function_19(&uVar7, 39, 1.0f, 0, 0);
			Function_19(&uVar7, 399, 1.0f, 0, 0);
			Function_19(&uVar7, 87, 1.0f, 0, 0);
			Function_19(&uVar7, 479, 1.0f, 0, 0);
			Function_19(&uVar7, 16, 1.0f, 0, 0);
		}
		if (Global_25974[2])
		{
			uVar8 = Function_23("ped_blackjack", 0);
			Function_19(&uVar8, 26, 1.0f, 0, 0);
			Function_19(&uVar8, 83, 1.0f, 0, 0);
			Function_19(&uVar8, 80, 1.0f, 0, 0);
			Function_19(&uVar8, 104, 1.0f, 0, 0);
			Function_19(&uVar8, 106, 1.0f, 0, 0);
			Function_19(&uVar8, 114, 1.0f, 0, 0);
			Function_19(&uVar8, 116, 1.0f, 0, 0);
			Function_19(&uVar8, 135, 1.0f, 0, 0);
		}
		if (Global_25974[8])
		{
			uVar9 = Function_23("ped_fivefinger", 0);
			Function_19(&uVar9, 93, 1.0f, 0, 0);
			Function_19(&uVar9, 98, 1.0f, 0, 0);
			Function_19(&uVar9, 129, 1.0f, 0, 0);
			Function_19(&uVar9, 137, 1.0f, 0, 0);
			Function_19(&uVar9, 173, 1.0f, 0, 0);
			Function_19(&uVar9, 175, 1.0f, 0, 0);
		}
		if (Global_25974[7])
		{
			uVar10 = Function_23("ped_liarsdice", 0);
			Function_19(&uVar10, 26, 1.0f, 0, 0);
			Function_19(&uVar10, 34, 1.0f, 0, 0);
			Function_19(&uVar10, 93, 1.0f, 0, 0);
			Function_19(&uVar10, 97, 1.0f, 0, 0);
			Function_19(&uVar10, 111, 1.0f, 0, 0);
			Function_19(&uVar10, 138, 1.0f, 0, 0);
			Function_19(&uVar10, 174, 1.0f, 0, 0);
			Function_19(&uVar10, 179, 1.0f, 0, 0);
		}
	}
	Function_17(&(Global_30750[1]));
	Global_30750[1] = Function_23("ped_traveller", 3);
	Function_19(&(Global_30750[1]), 48, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 50, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 77, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 111, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 199, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_19(&(Global_30750[1]), 204, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]));
	Global_30750[10] = Function_23("animal_hunt", 0);
	Function_17(&(Global_30750[11]));
	Global_30750[11] = Function_23("animal_predator", 1);
	Function_19(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1050, 3.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1051, 3.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1061, 2.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1062, 2.0f, 0, 0);
	Function_19(&(Global_30750[11]), 1063, 2.0f, 0, 0);
	Function_17(&(Global_30750[8]));
	Global_30750[8] = Function_23("animal_herd", 1);
	Function_19(&(Global_30750[8]), 1008, 3.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1009, 3.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1010, 3.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1011, 3.0f, 0, 0);
	Function_17(&(Global_30750[5]));
	Global_30750[5] = Function_23("animal_wilderness", 1);
	Function_20(&(Global_30750[5]), 1128, 9.0f, 14, 0, 0);
	Function_20(&(Global_30750[5]), 1057, 3.0f, 14, 0, 0);
	Function_20(&(Global_30750[5]), 1084, 8.0f, 33, 0, 0);
	Function_20(&(Global_30750[5]), 1082, 8.0f, 33, 0, 0);
	uVar11 = Function_23("animal_pig", 0);
	Function_19(&uVar11, 1020, 100.0f, 0, 0);
	Function_19(&uVar11, 1021, 100.0f, 0, 0);
	Function_19(&uVar11, 1021, 100.0f, 0, 0);
	uVar12 = Function_23("animal_dog", 0);
	Function_19(&uVar12, 1030, 100.0f, 0, 0);
	Function_19(&uVar12, 1031, 100.0f, 0, 0);
	Function_19(&uVar12, 1032, 100.0f, 0, 0);
	Function_17(&(Global_30750[7]));
	Global_30750[7] = Function_23("animal_bird", 1);
	Function_20(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_20(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_20(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_20(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_20(&(Global_30750[7]), 1145, 3.0f, 14, 0, 0);
	uVar13 = Function_23("chickens", 0);
	Function_20(&uVar13, 1015, 100.0f, 15, 0, 0);
	Function_20(&uVar13, 1016, 100.0f, 15, 0, 0);
	uVar14 = Function_23("animal_duck", 0);
	Function_19(&uVar14, 1140, 100.0f, 0, 0);
	Function_19(&uVar14, 1140, 100.0f, 0, 0);
	Function_19(&uVar14, 1140, 100.0f, 0, 0);
	Function_16(Global_30750[5], 2E-05f);
	Function_17(&(Global_30750[2]));
	Global_30750[2] = Function_23("ped_law", 1);
	Function_19(&(Global_30750[2]), 436, 8.0f, 0, 0);
	Function_19(&(Global_30750[2]), 440, 8.0f, 0, 0);
	Function_19(&(Global_30750[2]), 441, 8.0f, 0, 0);
	Function_17(&(Global_30750[3]));
	Global_30750[3] = Function_23("ped_bad_guys_local", 1);
	Function_19(&(Global_30750[3]), 398, 1.0f, 0, 0);
	Function_19(&(Global_30750[3]), 397, 4.0f, 0, 0);
	Function_19(&(Global_30750[3]), 399, 4.0f, 0, 0);
	Function_17(&(Global_30750[4]));
	Global_30750[4] = Function_23("ped_bad_guys_generic", 1);
	Function_19(&(Global_30750[4]), 477, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 478, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 479, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 480, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 481, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 482, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 483, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 484, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 485, 1.0f, 0, 0);
	Function_17(&(Global_30750[9]));
	Global_30750[9] = Function_23("ped_vehicle", 1);
	Function_19(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	Function_17(&(Global_30750[0]));
	Global_30750[0] = Function_23("ped_wilderness", Global_30840);
	Function_19(&(Global_30750[0]), 33, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 34, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 54, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 56, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 35, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 212, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 166, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 141, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 153, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 155, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 165, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 167, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 170, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 172, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 174, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 175, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 477, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 22, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 76, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 79, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 85, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 154, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 155, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 156, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 159, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 162, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 164, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 166, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 171, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 195, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 203, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 232, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 235, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 288, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 289, 2.0f, 0, 0);
	Function_17(&(Global_30750[6]));
	Global_30750[6] = Function_23("animal_horse", 4);
	Function_15(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_17(&(Global_30750[15]));
	Global_30750[15] = Function_23("animal_horse_unsaddled", 0);
	Function_19(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 991, 100.0f, 0, 0);
	uVar15 = CREATE_POPULATION_SET(1);
	while (!Function_14(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_13("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_12(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar16 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (IS_LAYOUTREF_VALID(bVar16))
	{
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_streetSpawn_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			SET_TOWN_VOLUME_FOR_AMBIENT_PEDS(bVar17);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find thiv_streetSpawn to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_southdocks_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar18 = Function_11(bVar17, uVar3, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(bVar18))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar18, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_townpop01 to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_northdocks_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar19 = Function_11(bVar17, uVar3, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(bVar19))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar19, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_horsepop01 to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_crateyard_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_11(bVar17, uVar3, 7, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_south_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar20 = Function_11(bVar17, uVar0, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(bVar20))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar20, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_north_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar21 = Function_11(bVar17, uVar0, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(bVar21))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar21, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_birds_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, Global_30750[7], 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_birds_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_north_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar12, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pop_north_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_south_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar12, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pop_north_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_toughGuys_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar22 = Function_11(bVar17, Global_30750[4], 5, 10, 0, 0, 1);
			SET_ZONE_PRIORITY(bVar22, 2);
			SET_ZONE_FORCE_SPAWN_DISTANCE(bVar22, 50.0f);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar22, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		if (!Function_18())
		{
			bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_poker");
			if (IS_VOLUME_VALID(bVar17))
			{
				if (Global_25974[0])
				{
					bVar23 = Function_10(bVar17, uVar7, 5, 1, 0, 0);
					Function_9(bVar23);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar23, 30.0f);
				}
			}
			else
			{
				LOG_ERROR("thi_pop: Cannot find thiv_poker to create population volumes");
			}
			bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_fff");
			if (IS_VOLUME_VALID(bVar17))
			{
				if (Global_25974[8])
				{
					bVar24 = Function_10(bVar17, uVar9, 5, 1, 0, 0);
					Function_8(bVar24);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar24, 50.0f);
				}
			}
			else
			{
				LOG_ERROR("thi_pop: Cannot find thiv_fff to create population volumes");
			}
			bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_blackjack");
			if (IS_VOLUME_VALID(bVar17))
			{
				if (Global_25974[2])
				{
					bVar25 = Function_10(bVar17, uVar8, 2, 1, 1, 0);
					Function_7(bVar25);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar25, 20.0f);
				}
			}
			else
			{
				LOG_ERROR("thi_pop: Cannot find thiv_blackjack to create population volumes");
			}
			bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_liarsdice");
			if (IS_VOLUME_VALID(bVar17))
			{
				if (Global_25974[7])
				{
					bVar26 = Function_10(bVar17, uVar10, 3, 1, 1, 0);
					Function_5(bVar26);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar26, 30.0f);
				}
			}
			else
			{
				LOG_ERROR("thi_pop: Cannot find thiv_liarsdice to create population volumes");
			}
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_pigsty");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar11, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pigsty to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_chickens_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar13, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find thiv_chickens_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_fish_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_4(bVar17, uVar14, 0.0005f, 0, 0);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find thiv_fish_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_pop_corral");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, Global_30750[15], 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pop_corral to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_brothel1_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar27 = Function_10(bVar17, uVar6, 6, 0, 0, 1);
			SET_ZONE_PRIORITY(bVar27, 2);
			SET_ZONE_FORCE_SPAWN_DISTANCE(bVar27, 40.0f);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar27, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_brothel1_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_brothel1_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_brothel_more_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_brothel_more_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_brothel_more_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_saloon_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar28 = CREATE_OBJECT_ITERATOR(bVar16);
			ITERATE_IN_VOLUME(bVar28, bVar17);
			ITERATE_ON_OBJECT_TYPE(bVar28, 12);
			bVar29 = START_OBJECT_ITERATOR(bVar28);
			while (IS_OBJECT_VALID(bVar29))
			{
				bVar30 = GET_OBJECT_MODEL_NAME(bVar29);
				if (STRING_CONTAINS_STRING(bVar30, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar29), 0);
				}
				bVar29 = OBJECT_ITERATOR_NEXT(bVar28);
			}
			DESTROY_ITERATOR(bVar28);
			Function_11(bVar17, uVar4, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_saloon_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			bVar31 = CREATE_OBJECT_ITERATOR(bVar16);
			ITERATE_IN_VOLUME(bVar31, bVar17);
			ITERATE_ON_OBJECT_TYPE(bVar31, 12);
			bVar32 = START_OBJECT_ITERATOR(bVar31);
			while (IS_OBJECT_VALID(bVar32))
			{
				bVar33 = GET_OBJECT_MODEL_NAME(bVar32);
				if (STRING_CONTAINS_STRING(bVar33, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar32), 0);
				}
				bVar32 = OBJECT_ITERATOR_NEXT(bVar31);
			}
			DESTROY_ITERATOR(bVar31);
			Function_11(bVar17, uVar4, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_warehouse_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_11(bVar17, uVar3, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_saloon_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_10(bVar17, uVar6, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "thiv_region");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_3(bVar17, uVar15, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("hen_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_14(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_12(1));
	}
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	Global_13171 = Global_29155[Local_010].f_20;
	Function_13("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x22B3 / 8883
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x22C2 / 8898
{
	int iVar0;
	
	if (!Function_12(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2317 / 8983
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

var Function_4(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4) //Position: 0x2397 / 9111
{
	bool bVar0;
	
	bVar0 = CREATE_VOLUME_SPAWNING_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, uParam1);
	SET_ZONE_POPULATION_DENSITY(bVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(bVar0, iParam3);
	if (bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(bVar0, 1);
	}
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

void Function_5(bool bParam0) //Position: 0x240F / 9231
{
	Function_6(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_liars_dice");
	return;
}

void Function_6(bool bParam0) //Position: 0x2436 / 9270
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_7(bool bParam0) //Position: 0x2455 / 9301
{
	Function_6(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_blackjack");
	return;
}

void Function_8(bool bParam0) //Position: 0x247B / 9339
{
	Function_6(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_9(bool bParam0) //Position: 0x250F / 9487
{
	Function_6(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_poker");
	return;
}

var Function_10(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2531 / 9521
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

var Function_11(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x25B1 / 9649
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

bool Function_12(int iParam0) //Position: 0x2633 / 9779
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_13(bool bParam0, float fParam1) //Position: 0x264F / 9807
{
	if (!Function_12(128))
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

bool Function_14(var uParam0, int iParam1) //Position: 0x268D / 9869
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_15(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x26A9 / 9897
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_19(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_16(var uParam0, bool bParam1) //Position: 0x26EE / 9966
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_17(var uParam0) //Position: 0x26FE / 9982
{
	DESTROY_POPULATION_SET(*uParam0);
	return;
}

bool Function_18() //Position: 0x270A / 9994
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_19(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x2713 / 10003
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

var Function_20(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x278F / 10127
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

var Function_21(int iParam0) //Position: 0x2807 / 10247
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_22(int iParam0) //Position: 0x2873 / 10355
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_23(bool bParam0, int iParam1) //Position: 0x28DF / 10463
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_24(bool bParam0, var uParam1) //Position: 0x28EC / 10476
{
	if (!Function_12(128))
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

