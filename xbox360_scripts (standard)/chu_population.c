//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 67
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
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
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_21("Loading Chuparosa population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_20("ped_generic", 0);
	Function_17(&bVar0, 263, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 321, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 322, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 323, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 285, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 287, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 304, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 320, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 311, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 284, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 292, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 293, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 275, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 278, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 279, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 313, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 253, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 240, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 241, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 317, 100.0f, 15, 0, 0);
	Function_17(&bVar0, 318, 100.0f, 15, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN(bVar0);
	SET_TOWN_DENSITY(20.0f);
	uVar1 = Function_20("ped_conv_start", 0);
	Function_16(&uVar1, 263, 100.0f, 0, 0);
	Function_16(&uVar1, 304, 100.0f, 0, 0);
	Function_16(&uVar1, 240, 100.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_FULL(uVar1);
	uVar2 = Function_20("ped_conv_reply", 0);
	Function_16(&uVar2, 263, 100.0f, 0, 0);
	Function_16(&uVar2, 322, 100.0f, 0, 0);
	Function_16(&uVar2, 285, 100.0f, 0, 0);
	Function_16(&uVar2, 304, 100.0f, 0, 0);
	Function_16(&uVar2, 284, 100.0f, 0, 0);
	Function_16(&uVar2, 278, 100.0f, 0, 0);
	Function_16(&uVar2, 279, 100.0f, 0, 0);
	Function_16(&uVar2, 240, 100.0f, 0, 0);
	SAVE_POP_SET_HUMAN_SPAWNING_IN_TOWN_CONVERSATION_RESPONSE(uVar2);
	bVar3 = Function_20("ped_worker", 0);
	Function_17(&bVar3, 321, 100.0f, 15, 0, 0);
	Function_17(&bVar3, 322, 100.0f, 15, 0, 0);
	Function_17(&bVar3, 323, 100.0f, 15, 0, 0);
	Function_17(&bVar3, 285, 100.0f, 15, 0, 0);
	Function_17(&bVar3, 287, 100.0f, 15, 0, 0);
	Function_17(&bVar3, 292, 100.0f, 15, 0, 0);
	Function_17(&bVar3, 293, 100.0f, 15, 0, 0);
	bVar4 = Function_20("nped_women", 0);
	Function_17(&bVar4, 313, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 237, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 251, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 253, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 240, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 241, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 317, 100.0f, 15, 0, 0);
	Function_17(&bVar4, 318, 100.0f, 15, 0, 0);
	bVar5 = Function_20("ped_men", 0);
	Function_17(&bVar5, 263, 100.0f, 14, 0, 0);
	Function_17(&bVar5, 320, 100.0f, 14, 0, 0);
	Function_17(&bVar5, 321, 100.0f, 14, 0, 0);
	Function_17(&bVar5, 322, 100.0f, 14, 0, 0);
	Function_17(&bVar5, 323, 100.0f, 14, 0, 0);
	Function_17(&bVar5, 285, 100.0f, 14, 0, 0);
	Function_17(&bVar5, 287, 100.0f, 14, 0, 0);
	uVar6 = Function_20("nped_whore", 0);
	Function_17(&uVar6, 245, 100.0f, 62, 0, 0);
	Function_17(&uVar6, 250, 100.0f, 62, 0, 0);
	Function_17(&uVar6, 246, 100.0f, 62, 0, 0);
	Function_17(&uVar6, 247, 100.0f, 62, 0, 0);
	Function_17(&uVar6, 248, 100.0f, 62, 0, 0);
	Function_17(&uVar6, 249, 100.0f, 62, 0, 0);
	Function_17(&uVar6, 315, 100.0f, 62, 0, 0);
	bVar7 = Function_20("ped_saloon", 0);
	Function_17(&bVar7, 263, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 311, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 284, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 278, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 279, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 280, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 281, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 311, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 135, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 136, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 245, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 249, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 246, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 245, 100.0f, 56, 0, 0);
	Function_17(&bVar7, 250, 100.0f, 56, 0, 0);
	bVar8 = Function_20("ped_saloonD", 0);
	Function_17(&bVar8, 263, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 311, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 284, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 278, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 279, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 280, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 281, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 311, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 135, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 136, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 245, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 249, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 246, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 245, 100.0f, 6, 0, 0);
	Function_17(&bVar8, 250, 100.0f, 6, 0, 0);
	if (!Function_15())
	{
		if (Global_25974[0])
		{
			bVar9 = Function_20("nped_poker", 0);
			Function_16(&bVar9, 133, 100.0f, 0, 0);
			Function_16(&bVar9, 518, 100.0f, 0, 0);
			Function_16(&bVar9, 262, 100.0f, 0, 0);
			Function_16(&bVar9, 279, 100.0f, 0, 0);
			Function_16(&bVar9, 27, 100.0f, 0, 0);
		}
		if (Global_25974[2])
		{
			bVar10 = Function_20("ped_blackjack", 0);
			Function_16(&bVar10, 264, 100.0f, 0, 0);
			Function_16(&bVar10, 516, 100.0f, 0, 0);
			Function_16(&bVar10, 13, 100.0f, 0, 0);
		}
	}
	uVar11 = Function_20("mules", 0);
	Function_16(&uVar11, 1000, 100.0f, 0, 0);
	Function_16(&uVar11, 1001, 100.0f, 0, 0);
	Function_16(&uVar11, 1002, 100.0f, 0, 0);
	uVar12 = Function_20("rabbits", 0);
	Function_16(&uVar12, 1078, 100.0f, 0, 0);
	Function_16(&uVar12, 1078, 100.0f, 0, 0);
	bVar13 = Function_20("dogs", 0);
	Function_17(&bVar13, 1030, 100.0f, 14, 0, 0);
	Function_17(&bVar13, 1031, 100.0f, 14, 0, 0);
	Function_17(&bVar13, 1032, 100.0f, 14, 0, 0);
	bVar14 = Function_20("dogCantina", 0);
	Function_16(&bVar14, 1030, 100.0f, 0, 0);
	uVar15 = Function_20("dogsN", 0);
	Function_17(&uVar15, 1030, 100.0f, 49, 0, 0);
	Function_17(&uVar15, 1031, 100.0f, 49, 0, 0);
	Function_17(&uVar15, 1032, 100.0f, 49, 0, 0);
	Function_14(&(Global_30750[1]));
	Global_30750[1] = Function_20("ped_traveller", 3);
	Function_16(&(Global_30750[1]), 47, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 62, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 61, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 87, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 203, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 208, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 230, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 274, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 302, 1.0f, 0, 0);
	Function_16(&(Global_30750[1]), 308, 1.0f, 0, 0);
	Function_14(&(Global_30750[5]));
	Global_30750[5] = Function_20("animal_wilderness", 1);
	Function_17(&(Global_30750[5]), 1128, 6.0f, 14, 0, 0);
	Function_17(&(Global_30750[5]), 1059, 2.0f, 15, 0, 0);
	Function_16(&(Global_30750[5]), 1081, 6.0f, 0, 0);
	Function_17(&(Global_30750[5]), 1078, 6.0f, 33, 0, 0);
	Function_14(&(Global_30750[10]));
	Global_30750[10] = Function_20("animal_hunt", 1);
	Function_16(&(Global_30750[10]), 1050, 100.0f, 0, 0);
	Function_14(&(Global_30750[11]));
	Global_30750[11] = Function_20("animal_predator", 1);
	Function_16(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_14(&(Global_30750[8]));
	Global_30750[8] = Function_20("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1009, 100.0f, 0, 0);
	Function_16(&(Global_30750[8]), 1010, 100.0f, 0, 0);
	Function_16(&(Global_30750[8]), 1011, 100.0f, 0, 0);
	uVar16 = Function_20("coyote_den", 0);
	Function_16(&uVar16, 1021, 100.0f, 0, 0);
	Function_16(&uVar16, 1021, 100.0f, 0, 0);
	Function_16(&uVar16, 1022, 100.0f, 0, 0);
	Function_14(&(Global_30750[7]));
	Global_30750[7] = Function_20("animal_bird", 1);
	Function_17(&(Global_30750[7]), 1131, 2.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1134, 1.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1135, 1.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1136, 1.0f, 14, 0, 0);
	uVar17 = Function_20("chickens", 0);
	Function_17(&uVar17, 1015, 100.0f, 15, 0, 0);
	Function_17(&uVar17, 1017, 100.0f, 15, 0, 0);
	Function_17(&uVar17, 1018, 100.0f, 15, 0, 0);
	Function_17(&uVar17, 1019, 100.0f, 15, 0, 0);
	bVar18 = Function_20("goats", 0);
	Function_17(&bVar18, 1026, 100.0f, 14, 0, 0);
	Function_17(&bVar18, 1027, 100.0f, 14, 0, 0);
	Function_17(&bVar18, 1028, 100.0f, 14, 0, 0);
	bVar19 = Function_20("goatsN", 0);
	Function_17(&bVar19, 1026, 100.0f, 49, 0, 0);
	Function_17(&bVar19, 1027, 100.0f, 49, 0, 0);
	Function_17(&bVar19, 1028, 100.0f, 49, 0, 0);
	Function_13(Global_30750[5], 0.0f);
	Function_14(&(Global_30750[2]));
	Global_30750[2] = Function_20("ped_law", 1);
	Function_16(&(Global_30750[2]), 455, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 456, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 457, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 458, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 459, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 460, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 461, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 462, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 463, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 464, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 465, 100.0f, 0, 0);
	Function_16(&(Global_30750[2]), 466, 100.0f, 0, 0);
	Function_14(&(Global_30750[3]));
	Global_30750[3] = Function_20("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 496, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 496, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 496, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 499, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 500, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 501, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 502, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 503, 100.0f, 0, 0);
	Function_16(&(Global_30750[3]), 504, 100.0f, 0, 0);
	Function_14(&(Global_30750[4]));
	Global_30750[4] = Function_20("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 406, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 407, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 408, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 409, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 410, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 411, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 412, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 413, 100.0f, 0, 0);
	Function_16(&(Global_30750[4]), 414, 100.0f, 0, 0);
	Function_14(&(Global_30750[9]));
	Global_30750[9] = Function_20("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1185, 100.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1184, 100.0f, 0, 0);
	bVar20 = CREATE_POPULATION_SET(1);
	Function_14(&(Global_30750[0]));
	Global_30750[0] = Function_20("ped_wilderness", Global_30840);
	Function_16(&(Global_30750[0]), 17, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 267, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 283, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 291, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 270, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 271, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 272, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 282, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 286, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 288, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 295, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 296, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 297, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 298, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 299, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 306, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 314, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 312, 1.0f, 0, 0);
	Function_16(&(Global_30750[0]), 319, 1.0f, 0, 0);
	Function_14(&(Global_30750[6]));
	Global_30750[6] = Function_20("animal_horse", 4);
	Function_12(&(Global_30750[6]), 1000, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 1001, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 1002, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 996, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 997, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 998, 100.0f, 0, 3);
	Function_14(&(Global_30750[15]));
	Global_30750[15] = Function_20("animal_horse_unsaddled", 0);
	Function_16(&(Global_30750[15]), 1000, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 1001, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 1002, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 996, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 997, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 998, 100.0f, 0, 0);
	while (!Function_11(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
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
	bVar21 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (IS_LAYOUTREF_VALID(bVar21))
	{
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_streetSpawn");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streetSpawn to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_dog_market_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, uVar15, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_dog_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, bVar13, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_dog_Saloon_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, bVar14, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_church_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar4, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_stagecoachStop_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar5, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_trainStation_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar3, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_courthouse_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, Global_30750[2], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_streets_pop_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_courthouse_outside_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, Global_30750[2], 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_courthouse_outside_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_chicken_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			uVar23 = Function_6(bVar22, uVar17, 0,001f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar23, 3);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_chickens_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_goat_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar18, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_goats_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_dog_market_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar19, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_goats_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_bird_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, Global_30750[7], 1, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_region1_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_stables_cow_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, Global_30750[8], 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_region1_set to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_saloon_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			bVar24 = CREATE_OBJECT_ITERATOR(bVar21);
			ITERATE_IN_VOLUME(bVar24, bVar22);
			ITERATE_ON_OBJECT_TYPE(bVar24, 12);
			bVar25 = START_OBJECT_ITERATOR(bVar24);
			while (IS_OBJECT_VALID(bVar25))
			{
				bVar26 = GET_OBJECT_MODEL_NAME(bVar25);
				if (STRING_CONTAINS_STRING(bVar26, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar25), 0);
				}
				bVar25 = OBJECT_ITERATOR_NEXT(bVar24);
			}
			DESTROY_ITERATOR(bVar24);
			Function_8(bVar22, bVar8, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_saloon_outside_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			bVar27 = CREATE_OBJECT_ITERATOR(bVar21);
			ITERATE_IN_VOLUME(bVar27, bVar22);
			ITERATE_ON_OBJECT_TYPE(bVar27, 12);
			bVar28 = START_OBJECT_ITERATOR(bVar27);
			while (IS_OBJECT_VALID(bVar28))
			{
				bVar29 = GET_OBJECT_MODEL_NAME(bVar28);
				if (STRING_CONTAINS_STRING(bVar29, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar28), 0);
				}
				bVar28 = OBJECT_ITERATOR_NEXT(bVar27);
			}
			DESTROY_ITERATOR(bVar27);
			Function_8(bVar22, bVar8, 2, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_saloon_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			bVar30 = CREATE_OBJECT_ITERATOR(bVar21);
			ITERATE_IN_VOLUME(bVar30, bVar22);
			ITERATE_ON_OBJECT_TYPE(bVar30, 12);
			bVar31 = START_OBJECT_ITERATOR(bVar30);
			while (IS_OBJECT_VALID(bVar31))
			{
				bVar32 = GET_OBJECT_MODEL_NAME(bVar31);
				if (STRING_CONTAINS_STRING(bVar32, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar31), 0);
				}
				bVar31 = OBJECT_ITERATOR_NEXT(bVar30);
			}
			DESTROY_ITERATOR(bVar30);
			Function_8(bVar22, bVar7, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_saloon_outside_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			bVar33 = CREATE_OBJECT_ITERATOR(bVar21);
			ITERATE_IN_VOLUME(bVar33, bVar22);
			ITERATE_ON_OBJECT_TYPE(bVar33, 12);
			bVar34 = START_OBJECT_ITERATOR(bVar33);
			while (IS_OBJECT_VALID(bVar34))
			{
				bVar35 = GET_OBJECT_MODEL_NAME(bVar34);
				if (STRING_CONTAINS_STRING(bVar35, "fake_"))
				{
					GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar34), 0);
				}
				bVar34 = OBJECT_ITERATOR_NEXT(bVar33);
			}
			DESTROY_ITERATOR(bVar33);
			Function_8(bVar22, bVar7, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_cantina to create population volumes");
		}
		if (!Function_15())
		{
			if (Global_25974[0])
			{
				bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_Poker");
				if (IS_VOLUME_VALID(bVar22))
				{
					bVar36 = Function_8(bVar22, bVar9, 4, 5, 1, 0, 0);
					if (IS_ZONE_VALID(bVar36))
					{
						Function_5(bVar36);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar36, 40.0f);
					}
				}
				else
				{
					LOG_ERROR("chu_pop: Cannot find chuv_Poker to create population volumes");
				}
			}
			if (Global_25974[2])
			{
				bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_Blackjack");
				if (IS_VOLUME_VALID(bVar22))
				{
					bVar37 = Function_8(bVar22, bVar10, 2, 2, 1, 0, 0);
					if (IS_ZONE_VALID(bVar37))
					{
						Function_3(bVar37);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar37, 20.0f);
					}
				}
				else
				{
					LOG_ERROR("chu_pop: Cannot find chuv_Blackjack to create population volumes");
				}
			}
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_badAsses");
		if (IS_VOLUME_VALID(bVar22))
		{
			bVar38 = Function_8(bVar22, Global_30750[3], 4, 5, 0, 0, 1);
			if (IS_ZONE_VALID(bVar38))
			{
				SET_ZONE_PRIORITY(bVar38, 2);
				SET_ZONE_FORCE_SPAWN_DISTANCE(bVar38, 20.0f);
				SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar38, 1);
			}
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_Blackjack to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_townsquare_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar0, 5, 8, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_workers_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, bVar3, 4, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_courthouse_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, bVar4, 1, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_hotel_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, bVar7, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_hotel_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_7(bVar22, bVar8, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_TownSquare to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_walkways_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar0, 3, 6, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find chuv_walkways to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_market_set");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_8(bVar22, bVar0, 5, 10, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("chu_pop: Cannot find market popset to create population volumes");
		}
		bVar22 = FIND_VOLUME_IN_LAYOUT(bVar21, "chuv_region");
		if (IS_VOLUME_VALID(bVar22))
		{
			Function_6(bVar22, bVar20, 0.0f, 0, 0, 1);
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
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_11(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_10("Finished loading Chuparosa population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x2567 / 9575
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x2576 / 9590
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

void Function_3(bool bParam0) //Position: 0x25CB / 9675
{
	Function_4(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_blackjack");
	return;
}

void Function_4(bool bParam0) //Position: 0x25F1 / 9713
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_5(bool bParam0) //Position: 0x2610 / 9744
{
	Function_4(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_poker");
	return;
}

var Function_6(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2632 / 9778
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

var Function_7(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x26B2 / 9906
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

var Function_8(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x2732 / 10034
{
	bool bVar0;
	
	bVar0 = CREATE_ZONE_VOLUME(bParam0);
	SET_ZONE_POPULATION_TYPE(bVar0, bParam1);
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

bool Function_9(int iParam0) //Position: 0x27B4 / 10164
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x27D0 / 10192
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x280E / 10254
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_12(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x282A / 10282
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

void Function_13(var uParam0, bool bParam1) //Position: 0x286F / 10351
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_14(var uParam0) //Position: 0x287F / 10367
{
	DESTROY_POPULATION_SET(*uParam0);
	return;
}

bool Function_15() //Position: 0x288B / 10379
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x2894 / 10388
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam1);
	iVar1 = GET_ACTORENUM_SPECIES(bParam1);
	if (IS_FACTION_VALID(iVar0))
	{
		if (!Global_30804[iVar0] && !bParam4)
		{
			return 4294967295;
		}
	}
	if (iVar1 < 4294967295 && iVar1 >= 36)
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2909 / 10505
{
	if (!Global_30804[GET_ACTOR_ENUM_FACTION(bParam1)] && !bParam5)
	{
		return 4294967295;
	}
	if (!Global_30767[GET_ACTORENUM_SPECIES(bParam1)])
	{
		return 4294967295;
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

var Function_18(int iParam0) //Position: 0x296B / 10603
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

var Function_19(int iParam0) //Position: 0x29D7 / 10711
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

var Function_20(int iParam0, int iParam1) //Position: 0x2A43 / 10819
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_21(bool bParam0, var uParam1) //Position: 0x2A50 / 10832
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

