//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 66
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
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	var uVar15;
	bool bVar16;
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
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_20("Loading Chuparosa population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_19("ped_generic", 0);
	Function_16(&bVar0, 263, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 321, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 322, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 323, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 285, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 287, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 304, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 320, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 311, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 284, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 292, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 293, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 275, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 278, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 279, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 313, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 253, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 240, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 241, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 317, 100.0f, 15, 0, 0);
	Function_16(&bVar0, 318, 100.0f, 15, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(&bVar0);
	SET_TOWN_DENSITY(20.0f);
	bVar1 = Function_19("ped_conv_start", 0);
	Function_15(&bVar1, 263, 100.0f, 0, 0);
	Function_15(&bVar1, 304, 100.0f, 0, 0);
	Function_15(&bVar1, 240, 100.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(&bVar1);
	bVar2 = Function_19("ped_conv_reply", 0);
	Function_15(&bVar2, 263, 100.0f, 0, 0);
	Function_15(&bVar2, 322, 100.0f, 0, 0);
	Function_15(&bVar2, 285, 100.0f, 0, 0);
	Function_15(&bVar2, 304, 100.0f, 0, 0);
	Function_15(&bVar2, 284, 100.0f, 0, 0);
	Function_15(&bVar2, 278, 100.0f, 0, 0);
	Function_15(&bVar2, 279, 100.0f, 0, 0);
	Function_15(&bVar2, 240, 100.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(&bVar2);
	bVar3 = Function_19("ped_worker", 0);
	Function_16(&bVar3, 321, 100.0f, 15, 0, 0);
	Function_16(&bVar3, 322, 100.0f, 15, 0, 0);
	Function_16(&bVar3, 323, 100.0f, 15, 0, 0);
	Function_16(&bVar3, 285, 100.0f, 15, 0, 0);
	Function_16(&bVar3, 287, 100.0f, 15, 0, 0);
	Function_16(&bVar3, 292, 100.0f, 15, 0, 0);
	Function_16(&bVar3, 293, 100.0f, 15, 0, 0);
	bVar4 = Function_19("nped_women", 0);
	Function_16(&bVar4, 313, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 237, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 251, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 253, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 240, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 241, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 317, 100.0f, 15, 0, 0);
	Function_16(&bVar4, 318, 100.0f, 15, 0, 0);
	uVar5 = Function_19("ped_men", 0);
	Function_16(&uVar5, 263, 100.0f, 14, 0, 0);
	Function_16(&uVar5, 320, 100.0f, 14, 0, 0);
	Function_16(&uVar5, 321, 100.0f, 14, 0, 0);
	Function_16(&uVar5, 322, 100.0f, 14, 0, 0);
	Function_16(&uVar5, 323, 100.0f, 14, 0, 0);
	Function_16(&uVar5, 285, 100.0f, 14, 0, 0);
	Function_16(&uVar5, 287, 100.0f, 14, 0, 0);
	uVar6 = Function_19("nped_whore", 0);
	Function_16(&uVar6, 245, 100.0f, 62, 0, 0);
	Function_16(&uVar6, 250, 100.0f, 62, 0, 0);
	Function_16(&uVar6, 246, 100.0f, 62, 0, 0);
	Function_16(&uVar6, 247, 100.0f, 62, 0, 0);
	Function_16(&uVar6, 248, 100.0f, 62, 0, 0);
	Function_16(&uVar6, 249, 100.0f, 62, 0, 0);
	Function_16(&uVar6, 315, 100.0f, 62, 0, 0);
	bVar7 = Function_19("ped_saloon", 0);
	Function_16(&bVar7, 263, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 311, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 284, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 278, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 279, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 280, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 281, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 311, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 135, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 136, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 245, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 249, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 246, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 245, 100.0f, 56, 0, 0);
	Function_16(&bVar7, 250, 100.0f, 56, 0, 0);
	bVar8 = Function_19("ped_saloonD", 0);
	Function_16(&bVar8, 263, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 311, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 284, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 278, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 279, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 280, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 281, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 311, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 135, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 136, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 245, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 249, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 246, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 245, 100.0f, 6, 0, 0);
	Function_16(&bVar8, 250, 100.0f, 6, 0, 0);
	if (Global_39266[0])
	{
		bVar9 = Function_19("nped_poker", 0);
		Function_15(&bVar9, 133, 100.0f, 0, 0);
		Function_15(&bVar9, 518, 100.0f, 0, 0);
		Function_15(&bVar9, 262, 100.0f, 0, 0);
		Function_15(&bVar9, 279, 100.0f, 0, 0);
		Function_15(&bVar9, 27, 100.0f, 0, 0);
	}
	if (Global_39266[2])
	{
		bVar10 = Function_19("ped_blackjack", 0);
		Function_15(&bVar10, 264, 100.0f, 0, 0);
		Function_15(&bVar10, 516, 100.0f, 0, 0);
		Function_15(&bVar10, 13, 100.0f, 0, 0);
	}
	bVar11 = Function_19("mules", 0);
	Function_15(&bVar11, 1000, 100.0f, 0, 0);
	Function_15(&bVar11, 1001, 100.0f, 0, 0);
	Function_15(&bVar11, 1002, 100.0f, 0, 0);
	bVar12 = Function_19("rabbits", 0);
	Function_15(&bVar12, 1078, 100.0f, 0, 0);
	Function_15(&bVar12, 1078, 100.0f, 0, 0);
	uVar13 = Function_19("dogs", 0);
	Function_16(&uVar13, 1030, 100.0f, 14, 0, 0);
	Function_16(&uVar13, 1031, 100.0f, 14, 0, 0);
	Function_16(&uVar13, 1032, 100.0f, 14, 0, 0);
	bVar14 = Function_19("dogCantina", 0);
	Function_15(&bVar14, 1030, 100.0f, 0, 0);
	uVar15 = Function_19("dogsN", 0);
	Function_16(&uVar15, 1030, 100.0f, 49, 0, 0);
	Function_16(&uVar15, 1031, 100.0f, 49, 0, 0);
	Function_16(&uVar15, 1032, 100.0f, 49, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_19("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 47, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 62, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 61, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 87, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 203, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 208, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 230, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 274, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 302, 1.0f, 0, 0);
	Function_15(&(Global_46972[1]), 308, 1.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_19("animal_wilderness", 1);
	Function_16(&(Global_46972[5]), 1128, 6.0f, 14, 0, 0);
	Function_16(&(Global_46972[5]), 1059, 2.0f, 15, 0, 0);
	Function_15(&(Global_46972[5]), 1081, 6.0f, 0, 0);
	Function_16(&(Global_46972[5]), 1078, 6.0f, 33, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_19("animal_hunt", 1);
	Function_15(&(Global_46972[10]), 1050, 100.0f, 0, 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_19("animal_predator", 1);
	Function_15(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_19("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1009, 100.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1010, 100.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1011, 100.0f, 0, 0);
	bVar16 = Function_19("coyote_den", 0);
	Function_15(&bVar16, 1021, 100.0f, 0, 0);
	Function_15(&bVar16, 1021, 100.0f, 0, 0);
	Function_15(&bVar16, 1022, 100.0f, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_19("animal_bird", 1);
	Function_16(&(Global_46972[7]), 1131, 2.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1134, 1.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1135, 1.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1136, 1.0f, 14, 0, 0);
	uVar17 = Function_19("chickens", 0);
	Function_16(&uVar17, 1015, 100.0f, 15, 0, 0);
	Function_16(&uVar17, 1017, 100.0f, 15, 0, 0);
	Function_16(&uVar17, 1018, 100.0f, 15, 0, 0);
	Function_16(&uVar17, 1019, 100.0f, 15, 0, 0);
	uVar18 = Function_19("goats", 0);
	Function_16(&uVar18, 1026, 100.0f, 14, 0, 0);
	Function_16(&uVar18, 1027, 100.0f, 14, 0, 0);
	Function_16(&uVar18, 1028, 100.0f, 14, 0, 0);
	uVar19 = Function_19("goatsN", 0);
	Function_16(&uVar19, 1026, 100.0f, 49, 0, 0);
	Function_16(&uVar19, 1027, 100.0f, 49, 0, 0);
	Function_16(&uVar19, 1028, 100.0f, 49, 0, 0);
	Function_13(&(Global_46972[5]), 0.0f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_19("ped_law", 1);
	Function_15(&(Global_46972[2]), 455, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 456, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 457, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 458, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 459, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 460, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 461, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 462, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 463, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 464, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 465, 100.0f, 0, 0);
	Function_15(&(Global_46972[2]), 466, 100.0f, 0, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_19("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 496, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 496, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 496, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 499, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 500, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 501, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 502, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 503, 100.0f, 0, 0);
	Function_15(&(Global_46972[3]), 504, 100.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_19("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 406, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 407, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 408, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 409, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 410, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 411, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 412, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 413, 100.0f, 0, 0);
	Function_15(&(Global_46972[4]), 414, 100.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_19("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1185, 100.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1184, 100.0f, 0, 0);
	uVar20 = CREATE_POPULATION_SET(1);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_19("ped_wilderness", Global_47149);
	Function_15(&(Global_46972[0]), 17, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 267, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 283, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 291, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 270, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 271, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 272, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 282, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 286, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 288, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 295, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 296, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 297, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 298, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 299, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 306, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 314, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 312, 1.0f, 0, 0);
	Function_15(&(Global_46972[0]), 319, 1.0f, 0, 0);
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_19("animal_horse", 4);
	Function_12(&(Global_46972[6]), 1000, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 1001, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 1002, 100.0f, 0, 3);
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
	Function_12(&(Global_46972[6]), 996, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 997, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 998, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_19("animal_horse_unsaddled", 0);
	Function_15(&(Global_46972[15]), 1000, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 1001, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 1002, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 996, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 997, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 998, 100.0f, 0, 0);
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
	uVar21 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (IS_LAYOUTREF_VALID(&uVar21))
	{
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_streetSpawn");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &bVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streetSpawn to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_dog_market_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &uVar15, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_dog_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &uVar13, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_dog_Saloon_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &bVar14, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_church_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &bVar4, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_stagecoachStop_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &uVar5, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_trainStation_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &bVar3, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_courthouse_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &(Global_46972[2]), 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_courthouse_outside_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &(Global_46972[2]), 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_courthouse_outside_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_chicken_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			uVar23 = Function_6(&uVar22, &uVar17, 0,001f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar23, 3);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_chickens_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_goat_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &uVar18, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_goats_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_dog_market_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &uVar19, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_goats_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_bird_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &(Global_46972[7]), 1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_region1_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_stables_cow_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &(Global_46972[8]), 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_region1_set to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_saloon_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			uVar24 = CREATE_OBJECT_ITERATOR(&uVar21);
			ITERATE_IN_VOLUME(&uVar24, &uVar22);
			ITERATE_ON_OBJECT_TYPE(&uVar24, 12);
			uVar25 = START_OBJECT_ITERATOR(&uVar24);
			while (IS_OBJECT_VALID(&uVar25))
			{
				uVar26 = GET_OBJECT_MODEL_NAME(&uVar25);
				if (STRING_CONTAINS_STRING(&uVar26, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar25), 0);
				}
				uVar25 = OBJECT_ITERATOR_NEXT(&uVar24);
			}
			DESTROY_ITERATOR(&uVar24);
			Function_8(&uVar22, &bVar8, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_saloon_outside_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			uVar27 = CREATE_OBJECT_ITERATOR(&uVar21);
			ITERATE_IN_VOLUME(&uVar27, &uVar22);
			ITERATE_ON_OBJECT_TYPE(&uVar27, 12);
			uVar28 = START_OBJECT_ITERATOR(&uVar27);
			while (IS_OBJECT_VALID(&uVar28))
			{
				uVar29 = GET_OBJECT_MODEL_NAME(&uVar28);
				if (STRING_CONTAINS_STRING(&uVar29, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar28), 0);
				}
				uVar28 = OBJECT_ITERATOR_NEXT(&uVar27);
			}
			DESTROY_ITERATOR(&uVar27);
			Function_8(&uVar22, &bVar8, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_saloon_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			uVar30 = CREATE_OBJECT_ITERATOR(&uVar21);
			ITERATE_IN_VOLUME(&uVar30, &uVar22);
			ITERATE_ON_OBJECT_TYPE(&uVar30, 12);
			uVar31 = START_OBJECT_ITERATOR(&uVar30);
			while (IS_OBJECT_VALID(&uVar31))
			{
				uVar32 = GET_OBJECT_MODEL_NAME(&uVar31);
				if (STRING_CONTAINS_STRING(&uVar32, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar31), 0);
				}
				uVar31 = OBJECT_ITERATOR_NEXT(&uVar30);
			}
			DESTROY_ITERATOR(&uVar30);
			Function_8(&uVar22, &bVar7, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_saloon_outside_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			uVar33 = CREATE_OBJECT_ITERATOR(&uVar21);
			ITERATE_IN_VOLUME(&uVar33, &uVar22);
			ITERATE_ON_OBJECT_TYPE(&uVar33, 12);
			uVar34 = START_OBJECT_ITERATOR(&uVar33);
			while (IS_OBJECT_VALID(&uVar34))
			{
				uVar35 = GET_OBJECT_MODEL_NAME(&uVar34);
				if (STRING_CONTAINS_STRING(&uVar35, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar34), 0);
				}
				uVar34 = OBJECT_ITERATOR_NEXT(&uVar33);
			}
			DESTROY_ITERATOR(&uVar33);
			Function_8(&uVar22, &bVar7, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		if (Global_39266[0])
		{
			uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_Poker");
			if (IS_VOLUME_VALID(&uVar22))
			{
				uVar36 = Function_8(&uVar22, &bVar9, 4, 5, 1, 0, 0);
				if (IS_ZONE_VALID(&uVar36))
				{
					Function_5(&uVar36);
					SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar36, 40.0f);
				}
			}
			else
			{
				LOG_ERROR("chu_pop: Cannot find chuv_Poker to create population volumes");
			}
		}
		if (Global_39266[2])
		{
			uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_Blackjack");
			if (IS_VOLUME_VALID(&uVar22))
			{
				uVar37 = Function_8(&uVar22, &bVar10, 2, 2, 1, 0, 0);
				if (IS_ZONE_VALID(&uVar37))
				{
					Function_3(&uVar37);
					SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar37, 20.0f);
				}
			}
			else
			{
				LOG_ERROR("chu_pop: Cannot find chuv_Blackjack to create population volumes");
			}
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_badAsses");
		if (IS_VOLUME_VALID(&uVar22))
		{
			uVar38 = Function_8(&uVar22, &(Global_46972[3]), 4, 5, 0, 0, 1);
			if (IS_ZONE_VALID(&uVar38))
			{
				SET_ZONE_PRIORITY(&uVar38, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar38, 20.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar38, 1);
			}
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_Blackjack to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_townsquare_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &bVar0, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_workers_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &bVar3, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_courthouse_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &bVar4, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_hotel_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &bVar7, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_hotel_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_7(&uVar22, &bVar8, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_walkways_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &bVar0, 3, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_walkways to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_market_set");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_8(&uVar22, &bVar0, 5, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find market popset to create population volumes");
		}
		uVar22 = FIND_VOLUME_IN_LAYOUT(&uVar21, "chuv_region");
		if (IS_VOLUME_VALID(&uVar22))
		{
			Function_6(&uVar22, &uVar20, 0.0f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find henv_region to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("chu_pop: Cannot find one of the volumes to create population volumes");
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
	Function_10("Finished loading Chuparosa population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x265F / 9823
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x2670 / 9840
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

void Function_3(int iParam0) //Position: 0x26C8 / 9928
{
	Function_4(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_blackjack");
	return;
}

void Function_4(int iParam0) //Position: 0x26F1 / 9969
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_5(bool bParam0) //Position: 0x2714 / 10004
{
	Function_4(&bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&bParam0, "fake_poker");
	return;
}

var Function_6(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2739 / 10041
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

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x27C9 / 10185
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

var Function_8(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x2859 / 10329
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

bool Function_9(int iParam0) //Position: 0x28EB / 10475
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x2907 / 10503
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

bool Function_11(var uParam0, int iParam1) //Position: 0x2947 / 10567
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_12(bool bParam0, int iParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x2964 / 10596
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

void Function_13(var uParam0, bool bParam1) //Position: 0x29AB / 10667
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_14(int iParam0) //Position: 0x29BC / 10684
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_15(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x29C9 / 10697
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

var Function_16(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2A4B / 10827
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

var Function_17(int iParam0) //Position: 0x2AC9 / 10953
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

var Function_18(int iParam0) //Position: 0x2B35 / 11061
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

var Function_19(var uParam0, int iParam1) //Position: 0x2BA1 / 11169
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_20(char* cParam0) //Position: 0x2BB0 / 11184
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

