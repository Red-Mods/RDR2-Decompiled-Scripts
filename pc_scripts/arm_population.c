//Decompiled with MagicRDR v1.0
//Function Count : 27
//Statics Count : 2
//Natives Count : 54
//Parameters Count : 2

#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	bool bVar11;
	bool bVar12;
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
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_26("Loading Armadillo population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_25("ped_generic", 0);
	Function_22(&uVar0, 202, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 87, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 235, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 217, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 140, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 137, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 46, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 50, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 22, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 311, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 33, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 34, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 76, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 79, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 141, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 204, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 155, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 142, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 49, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 56, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 74, 4.0f, 14, 0, 0);
	Function_22(&uVar0, 178, 4.0f, 14, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(&uVar0);
	SET_TOWN_DENSITY(25.0f);
	bVar1 = Function_25("ped_conversation_start", 0);
	Function_21(&bVar1, 87, 4.0f, 0, 0);
	Function_21(&bVar1, 235, 4.0f, 0, 0);
	Function_21(&bVar1, 50, 4.0f, 0, 0);
	Function_21(&bVar1, 33, 4.0f, 0, 0);
	Function_21(&bVar1, 34, 4.0f, 0, 0);
	Function_21(&bVar1, 155, 4.0f, 0, 0);
	Function_21(&bVar1, 74, 4.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(&bVar1);
	bVar2 = Function_25("ped_conversation_reply", 0);
	Function_21(&bVar2, 87, 4.0f, 0, 0);
	Function_21(&bVar2, 235, 4.0f, 0, 0);
	Function_21(&bVar2, 140, 4.0f, 0, 0);
	Function_21(&bVar2, 137, 4.0f, 0, 0);
	Function_21(&bVar2, 50, 4.0f, 0, 0);
	Function_21(&bVar2, 33, 4.0f, 0, 0);
	Function_21(&bVar2, 34, 4.0f, 0, 0);
	Function_21(&bVar2, 141, 4.0f, 0, 0);
	Function_21(&bVar2, 155, 4.0f, 0, 0);
	Function_21(&bVar2, 142, 4.0f, 0, 0);
	Function_21(&bVar2, 74, 4.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(&bVar2);
	bVar3 = Function_25("ped_saloon", 0);
	Function_22(&bVar3, 48, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 203, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 203, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 202, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 87, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 235, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 140, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 137, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 46, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 50, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 311, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 33, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 34, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 141, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 204, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 155, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 142, 4.0f, 48, 0, 0);
	Function_22(&bVar3, 178, 4.0f, 48, 0, 0);
	bVar4 = Function_25("ped_saloonD", 0);
	Function_22(&bVar4, 48, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 203, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 203, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 202, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 87, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 235, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 140, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 137, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 46, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 50, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 311, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 33, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 34, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 141, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 204, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 155, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 142, 4.0f, 14, 0, 0);
	Function_22(&bVar4, 178, 4.0f, 14, 0, 0);
	if (Global_39266[0])
	{
		bVar5 = Function_25("nped_poker", 0);
		Function_21(&bVar5, 399, 1.0f, 0, 0);
		Function_21(&bVar5, 118, 1.0f, 0, 0);
		Function_21(&bVar5, 144, 1.0f, 0, 0);
		Function_21(&bVar5, 158, 1.0f, 0, 0);
		Function_21(&bVar5, 488, 1.0f, 0, 0);
		Function_21(&bVar5, 37, 1.0f, 0, 0);
	}
	if (Global_39266[8])
	{
		bVar6 = Function_25("ped_fivefinger", 0);
		Function_21(&bVar6, 84, 1.0f, 0, 0);
		Function_21(&bVar6, 175, 1.0f, 0, 0);
		Function_21(&bVar6, 422, 1.0f, 0, 0);
		Function_21(&bVar6, 174, 1.0f, 0, 0);
		Function_21(&bVar6, 506, 1.0f, 0, 0);
	}
	uVar7 = Function_25("ped_storyTeller", 0);
	Function_22(&uVar7, 180, 4.0f, 62, 0, 0);
	Function_22(&uVar7, 183, 4.0f, 62, 0, 0);
	uVar8 = Function_25("ped_storyListen", 0);
	Function_22(&uVar8, 164, 4.0f, 62, 0, 0);
	Function_22(&uVar8, 217, 4.0f, 62, 0, 0);
	bVar9 = Function_25("ped_prostitute", 0);
	Function_21(&bVar9, 250, 5.0f, 0, 0);
	Function_21(&bVar9, 66, 5.0f, 0, 0);
	Function_21(&bVar9, 67, 5.0f, 0, 0);
	Function_21(&bVar9, 69, 5.0f, 0, 0);
	Function_21(&bVar9, 65, 5.0f, 0, 0);
	Function_21(&bVar9, 71, 5.0f, 0, 0);
	Function_21(&bVar9, 72, 5.0f, 0, 0);
	uVar10 = Function_25("ped_prostituteD", 0);
	Function_22(&uVar10, 250, 5.0f, 14, 0, 0);
	Function_22(&uVar10, 66, 5.0f, 14, 0, 0);
	Function_22(&uVar10, 67, 5.0f, 14, 0, 0);
	Function_22(&uVar10, 69, 5.0f, 14, 0, 0);
	Function_22(&uVar10, 65, 5.0f, 14, 0, 0);
	Function_22(&uVar10, 71, 5.0f, 14, 0, 0);
	Function_22(&uVar10, 72, 5.0f, 14, 0, 0);
	bVar11 = Function_25("ped_worker", 0);
	Function_22(&bVar11, 33, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 34, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 298, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 288, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 153, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 154, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 33, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 34, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 155, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 142, 8.0f, 15, 0, 0);
	Function_22(&bVar11, 178, 8.0f, 15, 0, 0);
	bVar12 = Function_25("ped_prisoner", 0);
	Function_20(&bVar12, 33, 8.0f, 0, 0);
	Function_20(&bVar12, 34, 8.0f, 0, 0);
	Function_20(&bVar12, 298, 8.0f, 0, 0);
	Function_20(&bVar12, 288, 8.0f, 0, 0);
	Function_20(&bVar12, 153, 8.0f, 0, 0);
	Function_20(&bVar12, 154, 8.0f, 0, 0);
	Function_20(&bVar12, 33, 8.0f, 0, 0);
	Function_20(&bVar12, 34, 8.0f, 0, 0);
	Function_20(&bVar12, 155, 8.0f, 0, 0);
	Function_20(&bVar12, 142, 8.0f, 0, 0);
	Function_20(&bVar12, 178, 8.0f, 0, 0);
	bVar13 = Function_25("nped_tough", 0);
	Function_22(&bVar13, 486, 5.0f, 14, 0, 0);
	Function_22(&bVar13, 487, 5.0f, 14, 0, 0);
	Function_22(&bVar13, 489, 5.0f, 14, 0, 0);
	Function_22(&bVar13, 490, 5.0f, 14, 0, 0);
	Function_22(&bVar13, 491, 5.0f, 14, 0, 0);
	Function_22(&bVar13, 493, 5.0f, 14, 0, 0);
	bVar14 = Function_25("ped_toughN", 0);
	Function_22(&bVar14, 486, 5.0f, 48, 0, 0);
	Function_22(&bVar14, 487, 5.0f, 48, 0, 0);
	Function_22(&bVar14, 489, 5.0f, 48, 0, 0);
	Function_22(&bVar14, 490, 5.0f, 48, 0, 0);
	Function_22(&bVar14, 491, 5.0f, 48, 0, 0);
	Function_22(&bVar14, 493, 5.0f, 48, 0, 0);
	Function_19(&(Global_46972[6]));
	Global_46972[6] = Function_25("animal_horse", 4);
	if (!Function_13(1))
	{
		Function_20(&(Global_46972[6]), 977, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 981, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 983, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 984, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 985, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 986, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 987, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 988, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 989, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 990, 100.0f, 0, 3);
		Function_20(&(Global_46972[6]), 991, 100.0f, 0, 3);
	}
	Function_19(&(Global_46972[15]));
	Global_46972[15] = Function_25("animal_horse_unsaddled", 0);
	if (!Function_13(1))
	{
		Function_21(&(Global_46972[15]), 977, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 981, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 983, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 984, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 985, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 986, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 987, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 988, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 989, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 990, 100.0f, 0, 0);
		Function_21(&(Global_46972[15]), 991, 100.0f, 0, 0);
	}
	Function_19(&(Global_46972[0]));
	Global_46972[0] = Function_25("ped_wilderness", Global_47149);
	Function_21(&(Global_46972[0]), 38, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 39, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 53, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 54, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 55, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 85, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 153, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 166, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 167, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 170, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 171, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 172, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 173, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 174, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 175, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 232, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 288, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 51, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 289, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 35, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 37, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 55, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 135, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 136, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 154, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 155, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 156, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 159, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 162, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 85, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 117, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 194, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 196, 4.0f, 0, 0);
	Function_21(&(Global_46972[0]), 311, 4.0f, 0, 0);
	Function_19(&(Global_46972[10]));
	Global_46972[10] = Function_25("animal_hunt", 0);
	Function_19(&(Global_46972[1]));
	Global_46972[1] = Function_25("ped_traveller", 3);
	Function_21(&(Global_46972[1]), 56, 2.0f, 0, 0);
	Function_21(&(Global_46972[1]), 64, 2.0f, 0, 0);
	Function_21(&(Global_46972[1]), 73, 2.0f, 0, 0);
	Function_21(&(Global_46972[1]), 74, 2.0f, 0, 0);
	Function_21(&(Global_46972[1]), 78, 2.0f, 0, 0);
	Function_21(&(Global_46972[1]), 195, 2.0f, 0, 0);
	Function_21(&(Global_46972[1]), 202, 2.0f, 0, 0);
	Function_19(&(Global_46972[5]));
	Global_46972[5] = Function_25("animal_wilderness", 0);
	Function_22(&(Global_46972[5]), 1128, 9.0f, 14, 0, 0);
	Function_22(&(Global_46972[5]), 1057, 2.0f, 15, 0, 0);
	Function_22(&(Global_46972[5]), 1082, 6.0f, 33, 0, 0);
	Function_22(&(Global_46972[5]), 1084, 6.0f, 33, 0, 0);
	Function_19(&(Global_46972[8]));
	Global_46972[8] = Function_25("animal_herd", 0);
	Function_21(&(Global_46972[8]), 1008, 6.0f, 0, 0);
	bVar15 = Function_25("coyote_den", 0);
	Function_21(&bVar15, 1049, 100.0f, 0, 0);
	bVar16 = Function_25("timed_horse", 0);
	Function_22(&bVar16, 977, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 981, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 983, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 984, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 985, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 986, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 987, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 988, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 989, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 990, 100.0f, 15, 0, 0);
	Function_22(&bVar16, 991, 100.0f, 15, 0, 0);
	bVar17 = Function_25("critter", 0);
	Function_22(&bVar17, 1082, 100.0f, 48, 0, 0);
	Function_22(&bVar17, 1082, 100.0f, 48, 0, 0);
	Function_22(&bVar17, 1082, 100.0f, 48, 0, 0);
	Function_22(&bVar17, 1084, 100.0f, 48, 0, 0);
	Function_22(&bVar17, 1085, 100.0f, 48, 0, 0);
	Function_22(&bVar17, 1086, 100.0f, 48, 0, 0);
	bVar18 = Function_25("sheep", 0);
	Function_22(&bVar18, 1023, 100.0f, 15, 0, 0);
	Function_22(&bVar18, 1024, 100.0f, 15, 0, 0);
	Function_22(&bVar18, 1024, 100.0f, 15, 0, 0);
	Function_22(&bVar18, 1025, 100.0f, 15, 0, 0);
	bVar19 = Function_25("chickens", 0);
	Function_22(&bVar19, 1015, 100.0f, 15, 0, 0);
	Function_22(&bVar19, 1016, 100.0f, 15, 0, 0);
	bVar20 = Function_25("dogs", 0);
	Function_21(&bVar20, 1043, 100.0f, 0, 0);
	Function_19(&(Global_46972[7]));
	Global_46972[7] = Function_25("animal_bird", 1);
	Function_22(&(Global_46972[7]), 1131, 9.0f, 14, 0, 0);
	Function_22(&(Global_46972[7]), 1135, 3.0f, 14, 0, 0);
	Function_22(&(Global_46972[7]), 1136, 3.0f, 14, 0, 0);
	Function_22(&(Global_46972[7]), 1136, 3.0f, 14, 0, 0);
	Function_12(&(Global_46972[5]), 2E-05f);
	Function_19(&(Global_46972[2]));
	Global_46972[2] = Function_25("ped_law", 1);
	Function_21(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_21(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_21(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_19(&(Global_46972[3]));
	Global_46972[3] = Function_25("ped_bad_guys_local", 1);
	Function_21(&(Global_46972[3]), 486, 5.0f, 0, 0);
	Function_21(&(Global_46972[3]), 487, 5.0f, 0, 0);
	Function_21(&(Global_46972[3]), 489, 5.0f, 0, 0);
	Function_21(&(Global_46972[3]), 490, 5.0f, 0, 0);
	Function_21(&(Global_46972[3]), 491, 5.0f, 0, 0);
	Function_21(&(Global_46972[3]), 493, 5.0f, 0, 0);
	Function_19(&(Global_46972[4]));
	Global_46972[4] = Function_25("ped_bad_guys_generic", 1);
	Function_21(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_21(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_21(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_21(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_21(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_21(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_21(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_21(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_21(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_19(&(Global_46972[9]));
	Global_46972[9] = Function_25("ped_vehicle", 1);
	Function_21(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_21(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_21(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_21(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_21(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	uVar21 = CREATE_POPULATION_SET(1);
	while (!Function_11(&(Global_43791[iScriptParam_0]), 16) && !IS_EXITFLAG_SET())
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
	uVar22 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (IS_LAYOUTREF_VALID(&uVar22))
	{
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_streetSpawn");
		if (IS_VOLUME_VALID(&uVar23))
		{
			SET_TOWN_VOLUME_FOR_AMBIENT_PEDS(&uVar23);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_streetSpawn to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_street_pop_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar24 = Function_8(&uVar23, &uVar0, 5, 10, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar24))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar24, 1);
			}
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_street_pop_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_street_pop_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar25 = Function_8(&uVar23, &bVar3, 2, 5, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar25))
			{
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar25, 1);
			}
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_street_pop_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_gstore_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &uVar0, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_gstore_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_TrnPlatform");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &uVar0, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_train_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloon_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &bVar3, 3, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloon_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloon_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &uVar7, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloon_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloon_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &uVar8, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloon_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloon_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &bVar9, 4, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloon_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_bar");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar26 = Function_8(&uVar23, &bVar3, 4, 6, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar26))
			{
				SET_ZONE_PRIORITY(&uVar26, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar26, 20.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar26, 1);
			}
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_bar to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_bar");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar27 = Function_8(&uVar23, &bVar4, 2, 4, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar27))
			{
				SET_ZONE_PRIORITY(&uVar27, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar27, 20.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar27, 1);
				SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(&uVar27, false);
			}
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_bar to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_balconyWhore");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar28 = Function_8(&uVar23, &bVar9, 2, 3, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar28))
			{
				SET_ZONE_PRIORITY(&uVar28, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar28, 40.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar28, 1);
			}
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_bar to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloonBalcony_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &bVar3, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloonBalcony_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloonBalcony_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &bVar4, 2, 5, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloonBalcony_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_saloon_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &bVar4, 2, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_saloon_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_Poker");
		if (IS_VOLUME_VALID(&uVar23))
		{
			if (Global_39266[0])
			{
				uVar29 = Function_7(&uVar23, &bVar5, 4, 1, 0, 0);
				Function_6(&uVar29);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar29, 20.0f);
			}
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_Poker to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_fff");
		if (IS_VOLUME_VALID(&uVar23))
		{
			if (Global_39266[8])
			{
				uVar30 = Function_7(&uVar23, &bVar6, 5, 1, 0, 0);
				Function_4(&uVar30);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar30, 50.0f);
			}
		}
		else
		{
			LOG_ERROR("thi_pop: Cannot find armv_fff to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_toughGuys_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar31 = Function_8(&uVar23, &bVar13, 3, 5, 0, 0, 1);
			SET_ZONE_PRIORITY(&uVar31, 2);
			SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar31, 20.0f);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar31, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_toughGuys to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_toughGuys_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar32 = Function_8(&uVar23, &bVar14, 4, 7, 0, 0, 1);
			SET_ZONE_PRIORITY(&uVar32, 2);
			SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar32, 20.0f);
			SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar32, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_toughGuys to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_workers_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &bVar11, 4, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_workers_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_cell01");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar12, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_workers_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_horses_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar16, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_horses_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_pigs_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar18, 1, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_pigs_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_sheep_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar18, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_sheep_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_dogs_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar20, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_dogs_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_nightCritters_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar17, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_dogs_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_birds_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_8(&uVar23, &(Global_46972[7]), 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_birds_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_chickens_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_7(&uVar23, &bVar19, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_chickens_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "armv_region");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_3(&uVar23, &uVar21, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("arm_pop: Cannot find armv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("arm_pop: Cannot find ArmPopArea_1 to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_11(&(Global_43791[iScriptParam_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_21682 = &Global_44085[iScriptParam_09] + 32;
	Function_10("Finished loading Armadillo population file", 5.0f);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x23CE / 9166
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x23DF / 9183
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

var Function_3(var uParam0, var uParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x2437 / 9271
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

void Function_4(int iParam0) //Position: 0x24C7 / 9415
{
	Function_5(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(int iParam0) //Position: 0x2561 / 9569
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x2584 / 9604
{
	Function_5(&bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0, "fake_poker");
	return;
}

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x25A9 / 9641
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

var Function_8(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x2639 / 9785
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

bool Function_9(int iParam0) //Position: 0x26CB / 9931
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x26E7 / 9959
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

bool Function_11(var uParam0, int iParam1) //Position: 0x2727 / 10023
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, int iParam1) //Position: 0x2744 / 10052
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(iParam1);
	return;
}

bool Function_13(int iParam0) //Position: 0x2755 / 10069
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

bool Function_14(int iParam0) //Position: 0x278B / 10123
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

bool Function_15(int iParam0) //Position: 0x27AF / 10159
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_16(int iParam0) //Position: 0x27C4 / 10180
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_17(int iParam0) //Position: 0x27DB / 10203
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x27F5 / 10229
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_19(int iParam0) //Position: 0x280B / 10251
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_20(bool bParam0, int iParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x2818 / 10264
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_21(&bParam0, iParam1, fParam2, bParam3, 0);
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

var Function_21(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x285F / 10335
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

var Function_22(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x28E1 / 10465
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_24(iParam3), Function_23(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_23(int iParam0) //Position: 0x295F / 10591
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

var Function_24(int iParam0) //Position: 0x29CB / 10699
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

var Function_25(var uParam0, int iParam1) //Position: 0x2A37 / 10807
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_26(char* cParam0) //Position: 0x2A46 / 10822
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

