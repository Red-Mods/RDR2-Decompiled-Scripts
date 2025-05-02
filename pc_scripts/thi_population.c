//Decompiled with MagicRDR v1.0
//Function Count : 24
//Statics Count : 4
//Natives Count : 65
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_23("Loading Thieves Landing population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_22("ped_generic", 0);
	Function_19(&bVar0, 99, 8.0f, 14, 0, 0);
	Function_19(&bVar0, 100, 4.0f, 14, 0, 0);
	Function_19(&bVar0, 101, 4.0f, 14, 0, 0);
	Function_19(&bVar0, 102, 2.0f, 14, 0, 0);
	Function_19(&bVar0, 397, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 398, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 400, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 401, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 402, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 403, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 404, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 405, 1.0f, 30, 0, 0);
	Function_19(&bVar0, 73, 8.0f, 30, 0, 0);
	Function_19(&bVar0, 74, 8.0f, 30, 0, 0);
	Function_19(&bVar0, 50, 8.0f, 30, 0, 0);
	Function_19(&bVar0, 23, 8.0f, 30, 0, 0);
	Function_19(&bVar0, 57, 8.0f, 14, 0, 0);
	Function_19(&bVar0, 64, 8.0f, 14, 0, 0);
	Function_19(&bVar0, 200, 8.0f, 14, 0, 0);
	Function_19(&bVar0, 44, 8.0f, 14, 0, 0);
	Function_19(&bVar0, 48, 8.0f, 14, 0, 0);
	bVar1 = Function_22("ped_conv_start", 0);
	Function_18(&bVar1, 73, 8.0f, 0, 0);
	Function_18(&bVar1, 74, 8.0f, 0, 0);
	Function_18(&bVar1, 50, 8.0f, 0, 0);
	Function_18(&bVar1, 44, 8.0f, 0, 0);
	Function_18(&bVar1, 48, 8.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(&bVar1);
	bVar2 = Function_22("ped_conv_reply", 0);
	Function_19(&bVar2, 397, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 398, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 400, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 401, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 402, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 403, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 404, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 405, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 73, 8.0f, 30, 0, 0);
	Function_19(&bVar2, 74, 8.0f, 30, 0, 0);
	Function_19(&bVar2, 50, 8.0f, 30, 0, 0);
	Function_19(&bVar2, 44, 8.0f, 14, 0, 0);
	Function_19(&bVar2, 48, 8.0f, 14, 0, 0);
	Function_18(&bVar2, 397, 1.0f, 0, 0);
	Function_18(&bVar2, 398, 1.0f, 0, 0);
	Function_18(&bVar2, 400, 1.0f, 0, 0);
	Function_18(&bVar2, 401, 1.0f, 0, 0);
	Function_18(&bVar2, 402, 1.0f, 0, 0);
	Function_18(&bVar2, 403, 1.0f, 0, 0);
	Function_18(&bVar2, 404, 1.0f, 0, 0);
	Function_18(&bVar2, 405, 1.0f, 0, 0);
	Function_18(&bVar2, 73, 8.0f, 0, 0);
	Function_18(&bVar2, 74, 8.0f, 0, 0);
	Function_18(&bVar2, 50, 8.0f, 0, 0);
	Function_18(&bVar2, 44, 8.0f, 0, 0);
	Function_18(&bVar2, 48, 8.0f, 0, 0);
	Function_19(&bVar2, 397, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 398, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 400, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 401, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 402, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 403, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 404, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 405, 1.0f, 30, 0, 0);
	Function_19(&bVar2, 73, 8.0f, 30, 0, 0);
	Function_19(&bVar2, 74, 8.0f, 30, 0, 0);
	Function_19(&bVar2, 50, 8.0f, 30, 0, 0);
	Function_19(&bVar2, 44, 8.0f, 14, 0, 0);
	Function_19(&bVar2, 48, 8.0f, 14, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(&bVar2);
	bVar3 = Function_22("ped_worker", 0);
	Function_19(&bVar3, 99, 8.0f, 15, 0, 0);
	Function_19(&bVar3, 100, 4.0f, 15, 0, 0);
	Function_19(&bVar3, 101, 4.0f, 15, 0, 0);
	Function_19(&bVar3, 102, 2.0f, 15, 0, 0);
	Function_19(&bVar3, 178, 8.0f, 15, 0, 0);
	Function_19(&bVar3, 35, 8.0f, 15, 0, 0);
	Function_19(&bVar3, 37, 8.0f, 15, 0, 0);
	Function_19(&bVar3, 200, 8.0f, 14, 0, 0);
	Function_19(&bVar3, 480, 2.0f, 15, 0, 0);
	Function_19(&bVar3, 483, 1.0f, 15, 0, 0);
	bVar4 = Function_22("ped_saloon", 2);
	Function_18(&bVar4, 230, 2.0f, 0, 0);
	Function_18(&bVar4, 142, 2.0f, 0, 0);
	Function_18(&bVar4, 143, 2.0f, 0, 0);
	Function_18(&bVar4, 178, 2.0f, 0, 0);
	Function_18(&bVar4, 35, 2.0f, 0, 0);
	Function_18(&bVar4, 37, 2.0f, 0, 0);
	Function_18(&bVar4, 71, 2.0f, 0, 0);
	Function_18(&bVar4, 72, 2.0f, 0, 0);
	Function_18(&bVar4, 397, 2.0f, 0, 0);
	Function_18(&bVar4, 398, 2.0f, 0, 0);
	Function_18(&bVar4, 400, 2.0f, 0, 0);
	Function_18(&bVar4, 401, 2.0f, 0, 0);
	Function_18(&bVar4, 402, 2.0f, 0, 0);
	Function_18(&bVar4, 403, 2.0f, 0, 0);
	Function_18(&bVar4, 404, 2.0f, 0, 0);
	Function_18(&bVar4, 405, 2.0f, 0, 0);
	Function_18(&bVar4, 99, 2.0f, 0, 0);
	Function_18(&bVar4, 100, 2.0f, 0, 0);
	Function_18(&bVar4, 101, 2.0f, 0, 0);
	Function_18(&bVar4, 102, 2.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(&bVar4);
	SET_TOWN_DENSITY(15.0f);
	bVar5 = Function_22("ped_brothel", 0);
	Function_18(&bVar5, 99, 1.0f, 0, 0);
	Function_18(&bVar5, 100, 1.0f, 0, 0);
	Function_18(&bVar5, 101, 1.0f, 0, 0);
	Function_18(&bVar5, 102, 1.0f, 0, 0);
	Function_18(&bVar5, 230, 1.0f, 0, 0);
	Function_18(&bVar5, 142, 1.0f, 0, 0);
	Function_18(&bVar5, 477, 1.0f, 0, 0);
	Function_18(&bVar5, 478, 1.0f, 0, 0);
	Function_18(&bVar5, 480, 1.0f, 0, 0);
	Function_18(&bVar5, 481, 1.0f, 0, 0);
	Function_18(&bVar5, 482, 1.0f, 0, 0);
	Function_18(&bVar5, 483, 1.0f, 0, 0);
	Function_18(&bVar5, 484, 1.0f, 0, 0);
	Function_18(&bVar5, 485, 1.0f, 0, 0);
	bVar6 = Function_22("nped_whore", 0);
	Function_18(&bVar6, 65, 2.0f, 0, 0);
	Function_18(&bVar6, 66, 2.0f, 0, 0);
	Function_18(&bVar6, 67, 2.0f, 0, 0);
	Function_18(&bVar6, 68, 2.0f, 0, 0);
	Function_18(&bVar6, 69, 2.0f, 0, 0);
	Function_18(&bVar6, 70, 2.0f, 0, 0);
	if (Global_39266[0])
	{
		bVar7 = Function_22("nped_poker", 0);
		Function_18(&bVar7, 139, 2.0f, 0, 0);
		Function_18(&bVar7, 39, 1.0f, 0, 0);
		Function_18(&bVar7, 399, 1.0f, 0, 0);
		Function_18(&bVar7, 87, 1.0f, 0, 0);
		Function_18(&bVar7, 479, 1.0f, 0, 0);
		Function_18(&bVar7, 16, 1.0f, 0, 0);
	}
	if (Global_39266[2])
	{
		bVar8 = Function_22("ped_blackjack", 0);
		Function_18(&bVar8, 26, 1.0f, 0, 0);
		Function_18(&bVar8, 83, 1.0f, 0, 0);
		Function_18(&bVar8, 80, 1.0f, 0, 0);
		Function_18(&bVar8, 104, 1.0f, 0, 0);
		Function_18(&bVar8, 106, 1.0f, 0, 0);
		Function_18(&bVar8, 114, 1.0f, 0, 0);
		Function_18(&bVar8, 116, 1.0f, 0, 0);
		Function_18(&bVar8, 135, 1.0f, 0, 0);
	}
	if (Global_39266[8])
	{
		bVar9 = Function_22("ped_fivefinger", 0);
		Function_18(&bVar9, 93, 1.0f, 0, 0);
		Function_18(&bVar9, 98, 1.0f, 0, 0);
		Function_18(&bVar9, 129, 1.0f, 0, 0);
		Function_18(&bVar9, 137, 1.0f, 0, 0);
		Function_18(&bVar9, 173, 1.0f, 0, 0);
		Function_18(&bVar9, 175, 1.0f, 0, 0);
	}
	if (Global_39266[7])
	{
		bVar10 = Function_22("ped_liarsdice", 0);
		Function_18(&bVar10, 26, 1.0f, 0, 0);
		Function_18(&bVar10, 34, 1.0f, 0, 0);
		Function_18(&bVar10, 93, 1.0f, 0, 0);
		Function_18(&bVar10, 97, 1.0f, 0, 0);
		Function_18(&bVar10, 111, 1.0f, 0, 0);
		Function_18(&bVar10, 138, 1.0f, 0, 0);
		Function_18(&bVar10, 174, 1.0f, 0, 0);
		Function_18(&bVar10, 179, 1.0f, 0, 0);
	}
	Function_17(&(Global_46972[1]));
	Global_46972[1] = Function_22("ped_traveller", 3);
	Function_18(&(Global_46972[1]), 48, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 49, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 50, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 74, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 77, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 78, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 111, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 199, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 202, 2.0f, 0, 0);
	Function_18(&(Global_46972[1]), 204, 2.0f, 0, 0);
	Function_17(&(Global_46972[10]));
	Global_46972[10] = Function_22("animal_hunt", 0);
	Function_17(&(Global_46972[11]));
	Global_46972[11] = Function_22("animal_predator", 1);
	Function_18(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1061, 2.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1062, 2.0f, 0, 0);
	Function_18(&(Global_46972[11]), 1063, 2.0f, 0, 0);
	Function_17(&(Global_46972[8]));
	Global_46972[8] = Function_22("animal_herd", 1);
	Function_18(&(Global_46972[8]), 1008, 3.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1009, 3.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1010, 3.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1011, 3.0f, 0, 0);
	Function_17(&(Global_46972[5]));
	Global_46972[5] = Function_22("animal_wilderness", 1);
	Function_19(&(Global_46972[5]), 1128, 9.0f, 14, 0, 0);
	Function_19(&(Global_46972[5]), 1057, 3.0f, 14, 0, 0);
	Function_19(&(Global_46972[5]), 1084, 8.0f, 33, 0, 0);
	Function_19(&(Global_46972[5]), 1082, 8.0f, 33, 0, 0);
	bVar11 = Function_22("animal_pig", 0);
	Function_18(&bVar11, 1020, 100.0f, 0, 0);
	Function_18(&bVar11, 1021, 100.0f, 0, 0);
	Function_18(&bVar11, 1021, 100.0f, 0, 0);
	bVar12 = Function_22("animal_dog", 0);
	Function_18(&bVar12, 1030, 100.0f, 0, 0);
	Function_18(&bVar12, 1031, 100.0f, 0, 0);
	Function_18(&bVar12, 1032, 100.0f, 0, 0);
	Function_17(&(Global_46972[7]));
	Global_46972[7] = Function_22("animal_bird", 1);
	Function_19(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_19(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_19(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_19(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_19(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	bVar13 = Function_22("chickens", 0);
	Function_19(&bVar13, 1015, 100.0f, 15, 0, 0);
	Function_19(&bVar13, 1016, 100.0f, 15, 0, 0);
	bVar14 = Function_22("animal_duck", 0);
	Function_18(&bVar14, 1140, 100.0f, 0, 0);
	Function_18(&bVar14, 1140, 100.0f, 0, 0);
	Function_18(&bVar14, 1140, 100.0f, 0, 0);
	Function_16(&(Global_46972[5]), 2E-05f);
	Function_17(&(Global_46972[2]));
	Global_46972[2] = Function_22("ped_law", 1);
	Function_18(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_18(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_18(&(Global_46972[2]), 441, 8.0f, 0, 0);
	Function_17(&(Global_46972[3]));
	Global_46972[3] = Function_22("ped_bad_guys_local", 1);
	Function_18(&(Global_46972[3]), 398, 1.0f, 0, 0);
	Function_18(&(Global_46972[3]), 397, 4.0f, 0, 0);
	Function_18(&(Global_46972[3]), 399, 4.0f, 0, 0);
	Function_17(&(Global_46972[4]));
	Global_46972[4] = Function_22("ped_bad_guys_generic", 1);
	Function_18(&(Global_46972[4]), 477, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 478, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 479, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 480, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 481, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 482, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 483, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 484, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 485, 1.0f, 0, 0);
	Function_17(&(Global_46972[9]));
	Global_46972[9] = Function_22("ped_vehicle", 1);
	Function_18(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	Function_17(&(Global_46972[0]));
	Global_46972[0] = Function_22("ped_wilderness", Global_47149);
	Function_18(&(Global_46972[0]), 33, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 34, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 54, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 56, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 35, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 212, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 166, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 141, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 153, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 155, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 165, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 167, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 170, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 172, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 174, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 175, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 477, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 22, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 76, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 79, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 85, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 154, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 155, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 156, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 159, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 162, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 164, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 166, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 171, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 195, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 203, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 232, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 235, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 288, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 289, 2.0f, 0, 0);
	Function_17(&(Global_46972[6]));
	Global_46972[6] = Function_22("animal_horse", 4);
	Function_15(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_15(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_17(&(Global_46972[15]));
	Global_46972[15] = Function_22("animal_horse_unsaddled", 0);
	Function_18(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 991, 100.0f, 0, 0);
	uVar15 = CREATE_POPULATION_SET(1);
	while (!Function_14(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_13("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_12(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar16 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (IS_LAYOUTREF_VALID(&uVar16))
	{
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_streetSpawn_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			SET_TOWN_VOLUME_FOR_AMBIENT_PEDS(&uVar17);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find thiv_streetSpawn to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_southdocks_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar18 = Function_11(&uVar17, &bVar3, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar18))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar18, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_townpop01 to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_northdocks_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar19 = Function_11(&uVar17, &bVar3, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar19))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar19, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_horsepop01 to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_crateyard_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_11(&uVar17, &bVar3, 7, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_south_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar20 = Function_11(&uVar17, &bVar0, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar20))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar20, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_north_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar21 = Function_11(&uVar17, &bVar0, 10, 15, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar21))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar21, 1);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_birds_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &(Global_46972[7]), 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_birds_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_north_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar12, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pop_north_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_south_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar12, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pop_north_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_toughGuys_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar22 = Function_11(&uVar17, &(Global_46972[4]), 5, 10, 0, 0, 1);
			SET_ZONE_PRIORITY(&uVar22, 2);
			SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar22, 50.0f);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar22, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find henv_cattlepop01 to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_poker");
		if (IS_VOLUME_VALID(&uVar17))
		{
			if (Global_39266[0])
			{
				uVar23 = Function_10(&uVar17, &bVar7, 5, 1, 0, 0);
				Function_9(&uVar23);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar23, 30.0f);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_poker to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_fff");
		if (IS_VOLUME_VALID(&uVar17))
		{
			if (Global_39266[8])
			{
				uVar24 = Function_10(&uVar17, &bVar9, 5, 1, 0, 0);
				Function_8(&uVar24);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar24, 50.0f);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_fff to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_blackjack");
		if (IS_VOLUME_VALID(&uVar17))
		{
			if (Global_39266[2])
			{
				uVar25 = Function_10(&uVar17, &bVar8, 2, 1, 1, 0);
				Function_7(&uVar25);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar25, 20.0f);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_blackjack to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_liarsdice");
		if (IS_VOLUME_VALID(&uVar17))
		{
			if (Global_39266[7])
			{
				uVar26 = Function_10(&uVar17, &bVar10, 3, 1, 1, 0);
				Function_5(&uVar26);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar26, 30.0f);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_liarsdice to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_pigsty");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar11, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pigsty to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_chickens_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar13, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find thiv_chickens_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_fish_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_4(&uVar17, &bVar14, 0,0005f, 0, 0);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find thiv_fish_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_pop_corral");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &(Global_46972[15]), 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_pop_corral to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_brothel1_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar27 = Function_10(&uVar17, &bVar6, 6, 0, 0, 1);
			SET_ZONE_PRIORITY(&uVar27, 2);
			SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar27, 40.0f);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar27, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_brothel1_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_brothel1_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_brothel_more_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_brothel_more_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_brothel_more_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_saloon_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar28 = CREATE_OBJECT_ITERATOR(&uVar16);
			ITERATE_IN_VOLUME(&uVar28, &uVar17);
			ITERATE_ON_OBJECT_TYPE(&uVar28, 12);
			uVar29 = START_OBJECT_ITERATOR(&uVar28);
			while (IS_OBJECT_VALID(&uVar29))
			{
				uVar30 = GET_OBJECT_MODEL_NAME(&uVar29);
				if (STRING_CONTAINS_STRING(&uVar30, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar29), 0);
				}
				uVar29 = OBJECT_ITERATOR_NEXT(&uVar28);
			}
			DESTROY_ITERATOR(&uVar28);
			Function_11(&uVar17, &bVar4, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_saloon_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar31 = CREATE_OBJECT_ITERATOR(&uVar16);
			ITERATE_IN_VOLUME(&uVar31, &uVar17);
			ITERATE_ON_OBJECT_TYPE(&uVar31, 12);
			uVar32 = START_OBJECT_ITERATOR(&uVar31);
			while (IS_OBJECT_VALID(&uVar32))
			{
				uVar33 = GET_OBJECT_MODEL_NAME(&uVar32);
				if (STRING_CONTAINS_STRING(&uVar33, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar32), 0);
				}
				uVar32 = OBJECT_ITERATOR_NEXT(&uVar31);
			}
			DESTROY_ITERATOR(&uVar31);
			Function_11(&uVar17, &bVar4, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_warehouse_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_11(&uVar17, &bVar3, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_saloon_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_10(&uVar17, &bVar6, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find thiv_saloon_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "thiv_region");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_3(&uVar17, &uVar15, 0.0f, 0, 0, 1);
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
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_14(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_12(1));
	}
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_13("Finished loading Hennigan's Ranch population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x2387 / 9095
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x2398 / 9112
{
	int iVar0;
	
	if (!Function_12(1))
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

var Function_3(var uParam0, var uParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x23F0 / 9200
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_DENSITY(&uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &uParam3);
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

var Function_4(var uParam0, var uParam1, float fParam2, var uParam3, bool bParam4) //Position: 0x2480 / 9344
{
	var uVar0;
	
	uVar0 = CREATE_VOLUME_SPAWNING_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_DENSITY(&uVar0, fParam2);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &uParam3);
	if (&bParam4)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&uVar0, 1);
	}
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

void Function_5(int iParam0) //Position: 0x2506 / 9478
{
	Function_6(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_liars_dice");
	return;
}

void Function_6(int iParam0) //Position: 0x2530 / 9520
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_7(int iParam0) //Position: 0x2553 / 9555
{
	Function_6(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_blackjack");
	return;
}

void Function_8(int iParam0) //Position: 0x257C / 9596
{
	Function_6(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_9(bool bParam0) //Position: 0x2616 / 9750
{
	Function_6(&bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0, "fake_poker");
	return;
}

var Function_10(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x263B / 9787
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
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

var Function_11(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x26CB / 9931
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

bool Function_12(int iParam0) //Position: 0x275D / 10077
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_13(char* cParam0) //Position: 0x2779 / 10105
{
	if (!Function_12(128))
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

bool Function_14(var uParam0, int iParam1) //Position: 0x27B9 / 10169
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x27D6 / 10198
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_18(&bParam0, bParam1, fParam2, bParam3, 0);
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

void Function_16(var uParam0, bool bParam1) //Position: 0x281D / 10269
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_17(int iParam0) //Position: 0x282E / 10286
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_18(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x283B / 10299
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

var Function_19(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x28BD / 10429
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
	if (!IS_POPSET_VALID(&bParam0))
	{
		bParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION_TIMED(&bParam0, bParam1, fParam2, Function_21(iParam3), Function_20(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&bParam0) - 1);
}

var Function_20(int iParam0) //Position: 0x293B / 10555
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

var Function_21(int iParam0) //Position: 0x29A7 / 10663
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

var Function_22(var uParam0, int iParam1) //Position: 0x2A13 / 10771
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_23(char* cParam0) //Position: 0x2A22 / 10786
{
	if (!Function_12(128))
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

