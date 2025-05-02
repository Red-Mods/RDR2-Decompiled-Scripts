//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 46
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
	var uVar9;
	var uVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	struct<2> Var20;
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
	var uVar39;
	var uVar40;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_20("Loading Hennigan's Stead population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_19(&(Global_46972[6]));
	Global_46972[6] = Function_18("animal_horse", 4);
	Function_17(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_17(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_19(&(Global_46972[15]));
	Global_46972[15] = Function_18("animal_horse_unsaddled", 0);
	Function_16(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_19(&(Global_46972[0]));
	Global_46972[0] = Function_18("ped_wilderness", Global_47149);
	Function_16(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 175, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 155, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 178, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 153, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 173, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 199, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 22, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_16(&(Global_46972[0]), 50, 10.0f, 0, 0);
	Function_16(&(Global_46972[0]), 202, 10.0f, 0, 0);
	Function_16(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_16(&(Global_46972[0]), 54, 10.0f, 0, 0);
	Function_16(&(Global_46972[0]), 53, 10.0f, 0, 0);
	Function_16(&(Global_46972[0]), 33, 10.0f, 0, 0);
	Function_16(&(Global_46972[0]), 34, 10.0f, 0, 0);
	Function_19(&(Global_46972[1]));
	Global_46972[1] = Function_18("ped_traveller", 3);
	Function_16(&(Global_46972[1]), 64, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 74, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 311, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 73, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 78, 10.0f, 0, 0);
	Function_16(&(Global_46972[1]), 49, 10.0f, 0, 0);
	Function_19(&(Global_46972[5]));
	Global_46972[5] = Function_18("animal_wilderness", 1);
	Function_13(&(Global_46972[5]), 1057, 6.0f, 15, 0, 0);
	bVar0 = Function_18("critter_pop", 0);
	Function_13(&bVar0, 1058, 2.0f, 14, 1, 0);
	Function_13(&bVar0, 1059, 2.0f, 14, 1, 0);
	Function_19(&(Global_46972[10]));
	Global_46972[10] = Function_18("animal_hunt", 1);
	Function_16(&(Global_46972[10]), 1088, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1089, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1090, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1051, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1120, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1117, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1061, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1062, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1063, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1054, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1055, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1056, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1074, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1075, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1076, 2.0f, 0, 0);
	Function_16(&(Global_46972[10]), 1076, 2.0f, 0, 0);
	if (Function_9(10, 0))
	{
		Function_19(&(Global_46972[11]));
		Global_46972[11] = Function_18("animal_predator", 1);
		Function_16(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1051, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1052, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1052, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1061, 2.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1062, 2.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1063, 2.0f, 0, 0);
	}
	else
	{
		Function_19(&(Global_46972[11]));
		Global_46972[11] = Function_18("animal_predator", 1);
		Function_16(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1051, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1052, 3.0f, 0, 0);
		Function_16(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	}
	Function_19(&(Global_46972[13]));
	Global_46972[13] = Function_18("animal_hunted", 0);
	Function_16(&(Global_46972[13]), 1050, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1050, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1051, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1052, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1052, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1061, 5.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1062, 5.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1063, 5.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1119, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1119, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1120, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1116, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1117, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1116, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1074, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1075, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1076, 3.0f, 0, 0);
	Function_16(&(Global_46972[13]), 1076, 3.0f, 0, 0);
	Function_19(&(Global_46972[12]));
	Global_46972[12] = Function_18("animal_prey", 0);
	Function_16(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_16(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_19(&(Global_46972[8]));
	Global_46972[8] = Function_18("animal_herd", 1);
	Function_16(&(Global_46972[8]), 1013, 10.0f, 0, 0);
	Function_16(&(Global_46972[8]), 1014, 10.0f, 0, 0);
	Function_16(&(Global_46972[8]), 1008, 10.0f, 0, 0);
	Function_16(&(Global_46972[8]), 1009, 10.0f, 0, 0);
	Function_16(&(Global_46972[8]), 1010, 10.0f, 0, 0);
	Function_16(&(Global_46972[8]), 1011, 10.0f, 0, 0);
	bVar1 = Function_18("coyote_den", 0);
	Function_16(&bVar1, 1050, 4.0f, 0, 0);
	Function_16(&bVar1, 1050, 4.0f, 0, 0);
	Function_16(&bVar1, 1051, 4.0f, 0, 0);
	Function_16(&bVar1, 1052, 4.0f, 0, 0);
	Function_16(&bVar1, 1052, 4.0f, 0, 0);
	bVar2 = Function_18("cougar_pop", 0);
	Function_16(&bVar2, 1088, 4.0f, 0, 0);
	Function_16(&bVar2, 1089, 4.0f, 0, 0);
	Function_16(&bVar2, 1090, 4.0f, 0, 0);
	bVar3 = Function_18("animal_duck", 0);
	Function_16(&bVar3, 1140, 100.0f, 0, 0);
	Function_16(&bVar3, 1140, 100.0f, 0, 0);
	Function_16(&bVar3, 1140, 100.0f, 0, 0);
	bVar4 = Function_18("deer_pop", 0);
	Function_16(&bVar4, 1119, 4.0f, 0, 0);
	Function_16(&bVar4, 1119, 4.0f, 0, 0);
	Function_16(&bVar4, 1120, 4.0f, 0, 0);
	Function_16(&bVar4, 1116, 1.0f, 0, 0);
	Function_16(&bVar4, 1117, 1.0f, 0, 0);
	Function_16(&bVar4, 1116, 1.0f, 0, 0);
	bVar5 = Function_18("wolf_pop", 0);
	Function_16(&bVar5, 1061, 4.0f, 0, 0);
	Function_16(&bVar5, 1062, 4.0f, 0, 0);
	Function_16(&bVar5, 1063, 4.0f, 0, 0);
	bVar6 = Function_18("fox_pop", 0);
	Function_16(&bVar6, 1054, 4.0f, 0, 0);
	Function_16(&bVar6, 1055, 4.0f, 0, 0);
	Function_16(&bVar6, 1056, 4.0f, 0, 0);
	bVar7 = Function_18("rabbit_pop", 0);
	Function_16(&bVar7, 1078, 4.0f, 0, 0);
	Function_16(&bVar7, 1078, 4.0f, 0, 0);
	Function_16(&bVar7, 1078, 4.0f, 0, 0);
	bVar8 = Function_18("wildBoar_pop", 0);
	Function_16(&bVar8, 1074, 4.0f, 0, 0);
	Function_16(&bVar8, 1075, 4.0f, 0, 0);
	Function_16(&bVar8, 1076, 4.0f, 0, 0);
	Function_16(&bVar8, 1076, 4.0f, 0, 0);
	uVar9 = Function_18("horseAM", 0);
	Function_13(&uVar9, 977, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 981, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 983, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 984, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 985, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 986, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 987, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 988, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 989, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 990, 100.0f, 15, 0, 0);
	Function_13(&uVar9, 991, 100.0f, 15, 0, 0);
	uVar10 = Function_18("horsePM", 0);
	Function_13(&uVar10, 977, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 981, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 983, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 984, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 985, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 986, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 987, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 988, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 989, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 990, 100.0f, 48, 0, 0);
	Function_13(&uVar10, 991, 100.0f, 48, 0, 0);
	bVar11 = Function_18("chickens", 0);
	Function_13(&bVar11, 1015, 100.0f, 15, 0, 0);
	Function_13(&bVar11, 1016, 100.0f, 15, 0, 0);
	bVar12 = Function_18("pigs", 0);
	Function_16(&bVar12, 1020, 100.0f, 0, 0);
	Function_16(&bVar12, 1021, 100.0f, 0, 0);
	Function_16(&bVar12, 1021, 100.0f, 0, 0);
	Function_16(&bVar12, 1022, 100.0f, 0, 0);
	bVar13 = Function_18("nnight_pop", 0);
	Function_13(&bVar13, 1084, 4.0f, 49, 0, 0);
	Function_13(&bVar13, 1082, 4.0f, 33, 0, 0);
	Function_19(&(Global_46972[7]));
	Global_46972[7] = Function_18("animal_bird", 1);
	Function_13(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_13(&(Global_46972[7]), 1137, 3.0f, 33, 0, 0);
	bVar14 = Function_18("hawk", 0);
	Function_13(&bVar14, 1145, 3.0f, 15, 0, 0);
	Function_13(&bVar14, 1137, 1.0f, 33, 0, 0);
	bVar15 = Function_18("crow", 0);
	Function_13(&bVar15, 1131, 6.0f, 14, 0, 0);
	bVar16 = Function_18("nsmallbird", 0);
	Function_13(&bVar16, 1135, 2.0f, 15, 0, 0);
	Function_13(&bVar16, 1136, 2.0f, 15, 0, 0);
	Function_13(&bVar16, 1136, 2.0f, 15, 0, 0);
	Function_19(&(Global_46972[14]));
	Global_46972[14] = Function_18("birds_trees", 1);
	Function_16(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_16(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar17 = Function_18("wildHorses", 0);
	Function_16(&bVar17, 976, 8.0f, 0, 0);
	Function_16(&bVar17, 981, 8.0f, 0, 0);
	Function_16(&bVar17, 986, 8.0f, 0, 0);
	Function_16(&bVar17, 987, 8.0f, 0, 0);
	Function_16(&bVar17, 989, 8.0f, 0, 0);
	Function_16(&bVar17, 991, 8.0f, 0, 0);
	if (Function_9(6, 0))
	{
		Function_16(&bVar17, 978, 8.0f, 0, 0);
	}
	Function_8(&(Global_46972[5]), 6E-05f);
	Function_19(&(Global_46972[2]));
	Global_46972[2] = Function_18("ped_law", 1);
	Function_16(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 441, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 442, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 424, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 425, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 426, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 427, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 428, 8.0f, 0, 0);
	Function_16(&(Global_46972[2]), 429, 8.0f, 0, 0);
	Function_19(&(Global_46972[3]));
	Global_46972[3] = Function_18("ped_bad_guys_local", 1);
	Function_16(&(Global_46972[3]), 477, 8.0f, 0, 0);
	Function_16(&(Global_46972[3]), 478, 8.0f, 0, 0);
	Function_16(&(Global_46972[3]), 479, 8.0f, 0, 0);
	Function_16(&(Global_46972[3]), 480, 4.0f, 0, 0);
	Function_16(&(Global_46972[3]), 481, 4.0f, 0, 0);
	Function_16(&(Global_46972[3]), 482, 4.0f, 0, 0);
	Function_16(&(Global_46972[3]), 483, 1.0f, 0, 0);
	Function_16(&(Global_46972[3]), 484, 1.0f, 0, 0);
	Function_16(&(Global_46972[3]), 485, 1.0f, 0, 0);
	Function_19(&(Global_46972[4]));
	Global_46972[4] = Function_18("ped_bad_guys_generic", 1);
	Function_16(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_16(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_16(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_16(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_16(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_16(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_16(&(Global_46972[4]), 397, 8.0f, 0, 0);
	Function_16(&(Global_46972[4]), 397, 8.0f, 0, 0);
	Function_16(&(Global_46972[4]), 398, 8.0f, 0, 0);
	Function_19(&(Global_46972[9]));
	Global_46972[9] = Function_18("ped_vehicle", 1);
	Function_16(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	bVar18 = CREATE_POPULATION_SET(1);
	uVar19 = Function_18("thieves_prestream", 0);
	Function_13(&uVar19, 99, 8.0f, 14, 0, 0);
	Function_13(&uVar19, 100, 4.0f, 14, 0, 0);
	Function_13(&uVar19, 101, 4.0f, 14, 0, 0);
	Function_13(&uVar19, 102, 2.0f, 14, 0, 0);
	Function_13(&uVar19, 397, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 398, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 400, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 401, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 402, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 403, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 404, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 405, 1.0f, 30, 0, 0);
	Function_13(&uVar19, 73, 8.0f, 30, 0, 0);
	Function_13(&uVar19, 74, 8.0f, 30, 0, 0);
	Function_13(&uVar19, 50, 8.0f, 30, 0, 0);
	Function_13(&uVar19, 23, 8.0f, 30, 0, 0);
	Function_13(&uVar19, 57, 8.0f, 14, 0, 0);
	Function_13(&uVar19, 64, 8.0f, 14, 0, 0);
	Function_13(&uVar19, 200, 8.0f, 14, 0, 0);
	Function_13(&uVar19, 44, 8.0f, 14, 0, 0);
	Function_13(&uVar19, 48, 8.0f, 14, 0, 0);
	Var20 = Vector(119,5282f, 73,31f, 2284,021f);
	AMBIENT_SPAWN_PRESTREAM_SET(&uVar19, Var20, 450.0f, 15);
	while (!Function_7(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_6("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_5(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar22 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (IS_LAYOUTREF_VALID(&uVar22))
	{
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_flk_ALL_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar24 = Function_4(&uVar23, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar24, 4);
			uVar25 = Function_4(&uVar23, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar25, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar25, 4);
			uVar26 = Function_4(&uVar23, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar26, 2);
			uVar27 = Function_4(&uVar23, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar27, 2);
			uVar28 = Function_4(&uVar23, &bVar13, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar28, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_ALL_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_flk_NE_NW_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar29 = Function_4(&uVar23, &bVar6, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar29, 2);
			uVar30 = Function_4(&uVar23, &bVar8, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar30, 4);
			uVar31 = Function_4(&uVar23, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar31, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar31, 6);
			uVar32 = Function_4(&uVar23, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar32, 1);
			uVar33 = Function_4(&uVar23, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar33, 2);
			uVar34 = Function_4(&uVar23, &bVar13, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar34, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_NE_NW_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_flk_SE_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			uVar35 = Function_4(&uVar23, &bVar17, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar35, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar35, 4);
			uVar36 = Function_4(&uVar23, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar36, 3);
			uVar37 = Function_4(&uVar23, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar37, 3);
			uVar38 = Function_4(&uVar23, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar38, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar38, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar38, 2);
			uVar39 = Function_4(&uVar23, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar39, 2);
			uVar40 = Function_4(&uVar23, &bVar13, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar40, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_SE_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_4(&uVar23, &bVar13, 0,00012f, 0, 0, 1);
			Function_4(&uVar23, &bVar3, 0,00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_aquaticWildlife_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_war_livestock");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_3(&uVar23, &uVar9, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_livestock to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_war_barn");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_3(&uVar23, &uVar10, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_barn to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_war_chickens");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_3(&uVar23, &bVar11, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_chickens to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_war_pigs");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_3(&uVar23, &bVar12, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_pigs to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_bacc_chickens");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_3(&uVar23, &bVar11, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_bacc_chickens to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_BIRDS_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
			Function_4(&uVar23, &bVar14, 8E-05f, 0, 0, 1);
			Function_4(&uVar23, &bVar15, 8E-05f, 0, 0, 1);
			Function_4(&uVar23, &bVar16, 0,00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_BIRDS_set to create population volumes");
		}
		uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "bridgeNoSpawn_set");
		if (IS_VOLUME_VALID(&uVar23))
		{
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find bridgeNoSpawn_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find one of the volumes to create population volumes");
	}
	uVar23 = FIND_VOLUME_IN_LAYOUT(&uVar22, "hgnv_null_set");
	if (IS_VOLUME_VALID(&uVar23))
	{
		Function_4(&uVar23, &bVar18, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find hgnv_null_set to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_7(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_5(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_6("Finished loading Hennigan's Stead population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1FEA / 8170
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1FFB / 8187
{
	int iVar0;
	
	if (!Function_5(1))
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

var Function_3(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x2053 / 8275
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

var Function_4(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x20E5 / 8421
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
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

bool Function_5(int iParam0) //Position: 0x2175 / 8565
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(char* cParam0) //Position: 0x2191 / 8593
{
	if (!Function_5(128))
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

bool Function_7(var uParam0, int iParam1) //Position: 0x21D1 / 8657
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x21EE / 8686
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_9(int iParam0, bool bParam1) //Position: 0x21FF / 8703
{
	int iVar0;
	
	iVar0 = Function_11(iParam0);
	if (!Function_10(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_10(int iParam0) //Position: 0x223D / 8765
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_11(int iParam0) //Position: 0x2254 / 8788
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_12(bool bParam0) //Position: 0x226E / 8814
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2284 / 8836
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
	if (!IS_POPSET_VALID(&uParam0))
	{
		uParam0 = CREATE_POPULATION_SET(0);
	}
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_15(iParam3), Function_14(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_14(int iParam0) //Position: 0x2302 / 8962
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

var Function_15(int iParam0) //Position: 0x236E / 9070
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

var Function_16(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x23DA / 9178
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x245C / 9308
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(&uParam0, bParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(bParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_18(var uParam0, int iParam1) //Position: 0x24A3 / 9379
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_19(int iParam0) //Position: 0x24B2 / 9394
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_20(char* cParam0) //Position: 0x24BF / 9407
{
	if (!Function_5(128))
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

