//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 47
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
	vector3 vVar20;
	bool bVar23;
	bool bVar24;
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
	var uVar41;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_21("Loading Hennigan's Stead population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_20(&(Global_30750[6]));
	Global_30750[6] = Function_19("animal_horse", 4);
	Function_18(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_18(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_20(&(Global_30750[15]));
	Global_30750[15] = Function_19("animal_horse_unsaddled", 0);
	Function_17(&(Global_30750[15]), 976, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_17(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_20(&(Global_30750[0]));
	Global_30750[0] = Function_19("ped_wilderness", Global_30840);
	Function_17(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_17(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_17(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_17(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_17(&(Global_30750[0]), 175, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 155, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 55, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 178, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 153, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 173, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 199, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 22, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 46, 8.0f, 0, 0);
	Function_17(&(Global_30750[0]), 50, 10.0f, 0, 0);
	Function_17(&(Global_30750[0]), 202, 10.0f, 0, 0);
	Function_17(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_17(&(Global_30750[0]), 54, 10.0f, 0, 0);
	Function_17(&(Global_30750[0]), 53, 10.0f, 0, 0);
	Function_17(&(Global_30750[0]), 33, 10.0f, 0, 0);
	Function_17(&(Global_30750[0]), 34, 10.0f, 0, 0);
	Function_20(&(Global_30750[1]));
	Global_30750[1] = Function_19("ped_traveller", 3);
	Function_17(&(Global_30750[1]), 64, 10.0f, 0, 0);
	Function_17(&(Global_30750[1]), 74, 10.0f, 0, 0);
	Function_17(&(Global_30750[1]), 311, 10.0f, 0, 0);
	Function_17(&(Global_30750[1]), 73, 10.0f, 0, 0);
	Function_17(&(Global_30750[1]), 78, 10.0f, 0, 0);
	Function_17(&(Global_30750[1]), 49, 10.0f, 0, 0);
	Function_20(&(Global_30750[5]));
	Global_30750[5] = Function_19("animal_wilderness", 1);
	Function_14(&(Global_30750[5]), 1057, 6.0f, 15, 0, 0);
	uVar0 = Function_19("critter_pop", 0);
	Function_14(&uVar0, 1058, 2.0f, 14, 1, 0);
	Function_14(&uVar0, 1059, 2.0f, 14, 1, 0);
	Function_20(&(Global_30750[10]));
	Global_30750[10] = Function_19("animal_hunt", 1);
	Function_17(&(Global_30750[10]), 1088, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1089, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1090, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1050, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1050, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1051, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1052, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1052, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1119, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1119, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1120, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1116, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1117, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1116, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1061, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1062, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1063, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1054, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1055, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1056, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1074, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1075, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1076, 2.0f, 0, 0);
	Function_17(&(Global_30750[10]), 1076, 2.0f, 0, 0);
	if (Function_10(10, 0))
	{
		Function_20(&(Global_30750[11]));
		Global_30750[11] = Function_19("animal_predator", 1);
		Function_17(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1051, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1052, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1052, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1061, 2.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1062, 2.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1063, 2.0f, 0, 0);
	}
	else
	{
		Function_20(&(Global_30750[11]));
		Global_30750[11] = Function_19("animal_predator", 1);
		Function_17(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1051, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1052, 3.0f, 0, 0);
		Function_17(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	}
	Function_20(&(Global_30750[13]));
	Global_30750[13] = Function_19("animal_hunted", 0);
	Function_17(&(Global_30750[13]), 1050, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1050, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1051, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1052, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1052, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1061, 5.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1062, 5.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1063, 5.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1119, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1119, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1120, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1116, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1117, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1116, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1074, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1075, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1076, 3.0f, 0, 0);
	Function_17(&(Global_30750[13]), 1076, 3.0f, 0, 0);
	Function_20(&(Global_30750[12]));
	Global_30750[12] = Function_19("animal_prey", 0);
	Function_17(&(Global_30750[12]), 1119, 3.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1119, 3.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1120, 3.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1116, 3.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1117, 3.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1116, 3.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_17(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_20(&(Global_30750[8]));
	Global_30750[8] = Function_19("animal_herd", 1);
	Function_17(&(Global_30750[8]), 1013, 10.0f, 0, 0);
	Function_17(&(Global_30750[8]), 1014, 10.0f, 0, 0);
	Function_17(&(Global_30750[8]), 1008, 10.0f, 0, 0);
	Function_17(&(Global_30750[8]), 1009, 10.0f, 0, 0);
	Function_17(&(Global_30750[8]), 1010, 10.0f, 0, 0);
	Function_17(&(Global_30750[8]), 1011, 10.0f, 0, 0);
	uVar1 = Function_19("coyote_den", 0);
	Function_17(&uVar1, 1050, 4.0f, 0, 0);
	Function_17(&uVar1, 1050, 4.0f, 0, 0);
	Function_17(&uVar1, 1051, 4.0f, 0, 0);
	Function_17(&uVar1, 1052, 4.0f, 0, 0);
	Function_17(&uVar1, 1052, 4.0f, 0, 0);
	uVar2 = Function_19("cougar_pop", 0);
	Function_17(&uVar2, 1088, 4.0f, 0, 0);
	Function_17(&uVar2, 1089, 4.0f, 0, 0);
	Function_17(&uVar2, 1090, 4.0f, 0, 0);
	uVar3 = Function_19("animal_duck", 0);
	Function_17(&uVar3, 1140, 100.0f, 0, 0);
	Function_17(&uVar3, 1140, 100.0f, 0, 0);
	Function_17(&uVar3, 1140, 100.0f, 0, 0);
	uVar4 = Function_19("deer_pop", 0);
	Function_17(&uVar4, 1119, 4.0f, 0, 0);
	Function_17(&uVar4, 1119, 4.0f, 0, 0);
	Function_17(&uVar4, 1120, 4.0f, 0, 0);
	Function_17(&uVar4, 1116, 1.0f, 0, 0);
	Function_17(&uVar4, 1117, 1.0f, 0, 0);
	Function_17(&uVar4, 1116, 1.0f, 0, 0);
	uVar5 = Function_19("wolf_pop", 0);
	Function_17(&uVar5, 1061, 4.0f, 0, 0);
	Function_17(&uVar5, 1062, 4.0f, 0, 0);
	Function_17(&uVar5, 1063, 4.0f, 0, 0);
	uVar6 = Function_19("fox_pop", 0);
	Function_17(&uVar6, 1054, 4.0f, 0, 0);
	Function_17(&uVar6, 1055, 4.0f, 0, 0);
	Function_17(&uVar6, 1056, 4.0f, 0, 0);
	uVar7 = Function_19("rabbit_pop", 0);
	Function_17(&uVar7, 1078, 4.0f, 0, 0);
	Function_17(&uVar7, 1078, 4.0f, 0, 0);
	Function_17(&uVar7, 1078, 4.0f, 0, 0);
	uVar8 = Function_19("wildBoar_pop", 0);
	Function_17(&uVar8, 1074, 4.0f, 0, 0);
	Function_17(&uVar8, 1075, 4.0f, 0, 0);
	Function_17(&uVar8, 1076, 4.0f, 0, 0);
	Function_17(&uVar8, 1076, 4.0f, 0, 0);
	uVar9 = Function_19("horseAM", 0);
	Function_14(&uVar9, 977, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 981, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 983, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 984, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 985, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 986, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 987, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 988, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 989, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 990, 100.0f, 15, 0, 0);
	Function_14(&uVar9, 991, 100.0f, 15, 0, 0);
	uVar10 = Function_19("horsePM", 0);
	Function_14(&uVar10, 977, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 981, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 983, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 984, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 985, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 986, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 987, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 988, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 989, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 990, 100.0f, 48, 0, 0);
	Function_14(&uVar10, 991, 100.0f, 48, 0, 0);
	uVar11 = Function_19("chickens", 0);
	Function_14(&uVar11, 1015, 100.0f, 15, 0, 0);
	Function_14(&uVar11, 1016, 100.0f, 15, 0, 0);
	uVar12 = Function_19("pigs", 0);
	Function_17(&uVar12, 1020, 100.0f, 0, 0);
	Function_17(&uVar12, 1021, 100.0f, 0, 0);
	Function_17(&uVar12, 1021, 100.0f, 0, 0);
	Function_17(&uVar12, 1022, 100.0f, 0, 0);
	uVar13 = Function_19("nnight_pop", 0);
	Function_14(&uVar13, 1084, 4.0f, 49, 0, 0);
	Function_14(&uVar13, 1082, 4.0f, 33, 0, 0);
	Function_20(&(Global_30750[7]));
	Global_30750[7] = Function_19("animal_bird", 1);
	Function_14(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_14(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_14(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_14(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_14(&(Global_30750[7]), 1145, 3.0f, 14, 0, 0);
	Function_14(&(Global_30750[7]), 1137, 3.0f, 33, 0, 0);
	uVar14 = Function_19("hawk", 0);
	Function_14(&uVar14, 1145, 3.0f, 15, 0, 0);
	Function_14(&uVar14, 1137, 1.0f, 33, 0, 0);
	uVar15 = Function_19("crow", 0);
	Function_14(&uVar15, 1131, 6.0f, 14, 0, 0);
	uVar16 = Function_19("nsmallbird", 0);
	Function_14(&uVar16, 1135, 2.0f, 15, 0, 0);
	Function_14(&uVar16, 1136, 2.0f, 15, 0, 0);
	Function_14(&uVar16, 1136, 2.0f, 15, 0, 0);
	Function_20(&(Global_30750[14]));
	Global_30750[14] = Function_19("birds_trees", 1);
	Function_17(&(Global_30750[14]), 1131, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1132, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1133, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_17(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar17 = Function_19("wildHorses", 0);
	Function_17(&uVar17, 976, 8.0f, 0, 0);
	Function_17(&uVar17, 981, 8.0f, 0, 0);
	Function_17(&uVar17, 986, 8.0f, 0, 0);
	Function_17(&uVar17, 987, 8.0f, 0, 0);
	Function_17(&uVar17, 989, 8.0f, 0, 0);
	Function_17(&uVar17, 991, 8.0f, 0, 0);
	if (Function_10(6, 0))
	{
		Function_17(&uVar17, 978, 8.0f, 0, 0);
	}
	Function_9(Global_30750[5], 6E-05f);
	Function_20(&(Global_30750[2]));
	Global_30750[2] = Function_19("ped_law", 1);
	Function_17(&(Global_30750[2]), 436, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 437, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 438, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 440, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 441, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 442, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 424, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 425, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 426, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 427, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 428, 8.0f, 0, 0);
	Function_17(&(Global_30750[2]), 429, 8.0f, 0, 0);
	Function_20(&(Global_30750[3]));
	Global_30750[3] = Function_19("ped_bad_guys_local", 1);
	Function_17(&(Global_30750[3]), 477, 8.0f, 0, 0);
	Function_17(&(Global_30750[3]), 478, 8.0f, 0, 0);
	Function_17(&(Global_30750[3]), 479, 8.0f, 0, 0);
	Function_17(&(Global_30750[3]), 480, 4.0f, 0, 0);
	Function_17(&(Global_30750[3]), 481, 4.0f, 0, 0);
	Function_17(&(Global_30750[3]), 482, 4.0f, 0, 0);
	Function_17(&(Global_30750[3]), 483, 1.0f, 0, 0);
	Function_17(&(Global_30750[3]), 484, 1.0f, 0, 0);
	Function_17(&(Global_30750[3]), 485, 1.0f, 0, 0);
	Function_20(&(Global_30750[4]));
	Global_30750[4] = Function_19("ped_bad_guys_generic", 1);
	Function_17(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_17(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_17(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_17(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_17(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_17(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_17(&(Global_30750[4]), 397, 8.0f, 0, 0);
	Function_17(&(Global_30750[4]), 397, 8.0f, 0, 0);
	Function_17(&(Global_30750[4]), 398, 8.0f, 0, 0);
	Function_20(&(Global_30750[9]));
	Global_30750[9] = Function_19("ped_vehicle", 1);
	Function_17(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_17(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar18 = CREATE_POPULATION_SET(1);
	uVar19 = Function_19("thieves_prestream", 0);
	Function_14(&uVar19, 99, 8.0f, 14, 0, 0);
	Function_14(&uVar19, 100, 4.0f, 14, 0, 0);
	Function_14(&uVar19, 101, 4.0f, 14, 0, 0);
	Function_14(&uVar19, 102, 2.0f, 14, 0, 0);
	Function_14(&uVar19, 397, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 398, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 400, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 401, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 402, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 403, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 404, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 405, 1.0f, 30, 0, 0);
	Function_14(&uVar19, 73, 8.0f, 30, 0, 0);
	Function_14(&uVar19, 74, 8.0f, 30, 0, 0);
	Function_14(&uVar19, 50, 8.0f, 30, 0, 0);
	Function_14(&uVar19, 23, 8.0f, 30, 0, 0);
	Function_14(&uVar19, 57, 8.0f, 14, 0, 0);
	Function_14(&uVar19, 64, 8.0f, 14, 0, 0);
	Function_14(&uVar19, 200, 8.0f, 14, 0, 0);
	Function_14(&uVar19, 44, 8.0f, 14, 0, 0);
	Function_14(&uVar19, 48, 8.0f, 14, 0, 0);
	vVar20 = { 119.5282f, 73.31f, 2284.021f };
	AMBIENT_SPAWN_PRESTREAM_SET(uVar19, vVar20, 450.0f, 15);
	while (!Function_8(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_7("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_6(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar23 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (IS_LAYOUTREF_VALID(bVar23))
	{
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_flk_ALL_set");
		if (IS_VOLUME_VALID(bVar24))
		{
			uVar25 = Function_5(bVar24, uVar1, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar25, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar25, 4);
			uVar26 = Function_5(bVar24, uVar4, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar26, 4);
			uVar27 = Function_5(bVar24, uVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar27, 2);
			uVar28 = Function_5(bVar24, uVar0, 4.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar28, 2);
			uVar29 = Function_5(bVar24, uVar13, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar29, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_ALL_set to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_flk_NE_NW_set");
		if (IS_VOLUME_VALID(bVar24))
		{
			uVar30 = Function_5(bVar24, uVar6, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar30, 2);
			uVar31 = Function_5(bVar24, uVar8, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar31, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar31, 4);
			uVar32 = Function_5(bVar24, uVar5, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar32, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar32, 6);
			uVar33 = Function_5(bVar24, uVar2, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar33, 1);
			uVar34 = Function_5(bVar24, uVar0, 4.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar34, 2);
			uVar35 = Function_5(bVar24, uVar13, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar35, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_NE_NW_set to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_flk_SE_set");
		if (IS_VOLUME_VALID(bVar24))
		{
			if (!Function_4())
			{
				uVar36 = Function_5(bVar24, uVar17, 1.5E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar36, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar36, 2);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar36, 4);
			}
			uVar37 = Function_5(bVar24, uVar1, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar37, 3);
			uVar38 = Function_5(bVar24, uVar4, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar38, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar38, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar38, 3);
			uVar39 = Function_5(bVar24, uVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar39, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar39, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar39, 2);
			uVar40 = Function_5(bVar24, uVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar40, 2);
			uVar41 = Function_5(bVar24, uVar13, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar41, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_SE_set to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_5(bVar24, uVar13, 0.00012f, 0, 0, 1);
			Function_5(bVar24, uVar3, 0.00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_aquaticWildlife_set to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_war_livestock");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_3(bVar24, uVar9, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_livestock to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_war_barn");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_3(bVar24, uVar10, 1, 2, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_barn to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_war_chickens");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_3(bVar24, uVar11, 3, 5, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_chickens to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_war_pigs");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_3(bVar24, uVar12, 2, 4, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_pigs to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_bacc_chickens");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_3(bVar24, uVar11, 2, 3, 1, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_bacc_chickens to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_BIRDS_set");
		if (IS_VOLUME_VALID(bVar24))
		{
			Function_5(bVar24, uVar14, 8E-05f, 0, 0, 1);
			Function_5(bVar24, uVar15, 8E-05f, 0, 0, 1);
			Function_5(bVar24, uVar16, 0.00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_BIRDS_set to create population volumes");
		}
		bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "bridgeNoSpawn_set");
		if (IS_VOLUME_VALID(bVar24))
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
	bVar24 = FIND_VOLUME_IN_LAYOUT(bVar23, "hgnv_null_set");
	if (IS_VOLUME_VALID(bVar24))
	{
		Function_5(bVar24, uVar18, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find hgnv_null_set to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_8(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_6(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_7("Finished loading Hennigan's Stead population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1F35 / 7989
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1F44 / 8004
{
	int iVar0;
	
	if (!Function_6(1))
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

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x1F99 / 8089
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

bool Function_4() //Position: 0x201B / 8219
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_5(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2024 / 8228
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

bool Function_6(int iParam0) //Position: 0x20A4 / 8356
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0, float fParam1) //Position: 0x20C0 / 8384
{
	if (!Function_6(128))
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

bool Function_8(var uParam0, int iParam1) //Position: 0x20FE / 8446
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x211A / 8474
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_10(int iParam0, bool bParam1) //Position: 0x212A / 8490
{
	int iVar0;
	
	iVar0 = Function_12(iParam0);
	if (!Function_11(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_11(int iParam0) //Position: 0x2167 / 8551
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_12(int iParam0) //Position: 0x217E / 8574
{
	if (!Function_13(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_13(bool bParam0) //Position: 0x2198 / 8600
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_14(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x21AE / 8622
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_16(iParam3), Function_15(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_15(int iParam0) //Position: 0x2226 / 8742
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

var Function_16(int iParam0) //Position: 0x2292 / 8850
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

var Function_17(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x22FE / 8958
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

var Function_18(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x237A / 9082
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_17(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_19(bool bParam0, int iParam1) //Position: 0x23BF / 9151
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_20(int iParam0) //Position: 0x23CC / 9164
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_21(bool bParam0, var uParam1) //Position: 0x23D8 / 9176
{
	if (!Function_6(128))
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

