//Decompiled with MagicRDR v1.0
//Function Count : 23
//Statics Count : 4
//Natives Count : 48
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
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
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
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	struct<2> Var26;
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
	var uVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	var uVar54;
	var uVar55;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_22("Loading Cholla Springs population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_21(&(Global_46972[6]));
	Global_46972[6] = Function_20("animal_horse", 4);
	Function_19(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_19(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_21(&(Global_46972[15]));
	Global_46972[15] = Function_20("animal_horse_unsaddled", 0);
	Function_18(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_18(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_21(&(Global_46972[0]));
	Global_46972[0] = Function_20("ped_wilderness", Global_47149);
	Function_18(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 175, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 174, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 178, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 153, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 173, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 199, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 56, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_18(&(Global_46972[0]), 50, 10.0f, 0, 0);
	Function_18(&(Global_46972[0]), 202, 10.0f, 0, 0);
	Function_18(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_18(&(Global_46972[0]), 54, 10.0f, 0, 0);
	Function_18(&(Global_46972[0]), 53, 10.0f, 0, 0);
	Function_18(&(Global_46972[0]), 33, 10.0f, 0, 0);
	Function_18(&(Global_46972[0]), 34, 10.0f, 0, 0);
	Function_21(&(Global_46972[1]));
	Global_46972[1] = Function_20("ped_traveller", 3);
	Function_18(&(Global_46972[1]), 64, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]), 74, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]), 48, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]), 73, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]), 78, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]), 49, 10.0f, 0, 0);
	Function_21(&(Global_46972[5]));
	Global_46972[5] = Function_20("animal_wilderness", 1);
	Function_15(&(Global_46972[5]), 1059, 1.0f, 15, 0, 0);
	bVar0 = Function_20("critter_pop", 0);
	Function_18(&bVar0, 1059, 1.0f, 0, 0);
	Function_21(&(Global_46972[10]));
	Global_46972[10] = Function_20("animal_hunt", 1);
	Function_18(&(Global_46972[10]), 1082, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1088, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1089, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1090, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1050, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1050, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1051, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1052, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1052, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1119, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1119, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1120, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1116, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1117, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1116, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1061, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1062, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1063, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1054, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1055, 1.0f, 0, 0);
	Function_18(&(Global_46972[10]), 1056, 1.0f, 0, 0);
	if (Function_11(10, 0))
	{
		Function_21(&(Global_46972[11]));
		Global_46972[11] = Function_20("animal_predator", 1);
		Function_18(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1051, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1052, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1052, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1089, 8.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1090, 7.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1061, 5.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1062, 5.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1063, 5.0f, 0, 0);
	}
	else
	{
		Function_21(&(Global_46972[11]));
		Global_46972[11] = Function_20("animal_predator", 1);
		Function_18(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1050, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1051, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1052, 3.0f, 0, 0);
		Function_18(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	}
	Function_21(&(Global_46972[13]));
	Global_46972[13] = Function_20("animal_hunted", 0);
	Function_18(&(Global_46972[13]), 1050, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1050, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1051, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1052, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1052, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1061, 5.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1062, 5.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1063, 5.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1119, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1119, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1120, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1116, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1117, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]), 1116, 3.0f, 0, 0);
	Function_21(&(Global_46972[12]));
	Global_46972[12] = Function_20("animal_prey", 0);
	Function_18(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_18(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_21(&(Global_46972[8]));
	Global_46972[8] = Function_20("animal_herd", 1);
	Function_18(&(Global_46972[8]), 1013, 10.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1014, 10.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1008, 10.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1009, 10.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1010, 10.0f, 0, 0);
	Function_18(&(Global_46972[8]), 1011, 10.0f, 0, 0);
	uVar1 = Function_20("horseAM", 0);
	Function_15(&uVar1, 977, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 981, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 983, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 984, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 985, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 986, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 987, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 988, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 989, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 990, 100.0f, 15, 0, 0);
	Function_15(&uVar1, 991, 100.0f, 15, 0, 0);
	uVar2 = Function_20("horsePM", 0);
	Function_15(&uVar2, 977, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 981, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 983, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 984, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 985, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 986, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 987, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 988, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 989, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 990, 100.0f, 48, 0, 0);
	Function_15(&uVar2, 991, 100.0f, 48, 0, 0);
	uVar3 = Function_20("goats", 0);
	Function_15(&uVar3, 1029, 100.0f, 15, 0, 0);
	Function_15(&uVar3, 1026, 100.0f, 15, 0, 0);
	Function_15(&uVar3, 1027, 100.0f, 15, 0, 0);
	Function_15(&uVar3, 1028, 100.0f, 15, 0, 0);
	uVar4 = Function_20("goatsPM", 0);
	Function_15(&uVar4, 1029, 100.0f, 48, 0, 0);
	Function_15(&uVar4, 1026, 100.0f, 48, 0, 0);
	Function_15(&uVar4, 1027, 100.0f, 48, 0, 0);
	Function_15(&uVar4, 1028, 100.0f, 48, 0, 0);
	uVar5 = Function_20("chickens", 0);
	Function_15(&uVar5, 1015, 100.0f, 15, 0, 0);
	Function_15(&uVar5, 1016, 100.0f, 15, 0, 0);
	uVar6 = Function_20("chickensPM", 0);
	Function_15(&uVar6, 1015, 100.0f, 48, 0, 0);
	Function_15(&uVar6, 1016, 100.0f, 48, 0, 0);
	bVar7 = Function_20("dogsV", 0);
	Function_18(&bVar7, 1030, 100.0f, 0, 0);
	bVar8 = Function_20("dogsC", 0);
	Function_18(&bVar8, 1031, 100.0f, 0, 0);
	Function_18(&bVar8, 1032, 100.0f, 0, 0);
	bVar9 = Function_20("coyote_den", 0);
	Function_18(&bVar9, 1050, 4.0f, 0, 0);
	Function_18(&bVar9, 1050, 1.0f, 0, 0);
	Function_18(&bVar9, 1051, 4.0f, 0, 0);
	Function_18(&bVar9, 1052, 4.0f, 0, 0);
	Function_18(&bVar9, 1052, 4.0f, 0, 0);
	bVar10 = Function_20("cougar_pop", 0);
	Function_18(&bVar10, 1088, 4.0f, 0, 0);
	Function_18(&bVar10, 1089, 4.0f, 0, 0);
	Function_18(&bVar10, 1090, 4.0f, 0, 0);
	bVar11 = Function_20("armadillo_pop", 0);
	Function_18(&bVar11, 1081, 4.0f, 0, 0);
	Function_18(&bVar11, 1081, 4.0f, 0, 0);
	Function_18(&bVar11, 1081, 4.0f, 0, 0);
	bVar12 = Function_20("deer_pop", 0);
	Function_18(&bVar12, 1119, 4.0f, 0, 0);
	Function_18(&bVar12, 1119, 4.0f, 0, 0);
	Function_18(&bVar12, 1120, 4.0f, 0, 0);
	Function_18(&bVar12, 1116, 1.0f, 0, 0);
	Function_18(&bVar12, 1117, 1.0f, 0, 0);
	Function_18(&bVar12, 1116, 1.0f, 0, 0);
	bVar13 = Function_20("wolf_pop", 0);
	Function_18(&bVar13, 1061, 4.0f, 0, 0);
	Function_18(&bVar13, 1062, 4.0f, 0, 0);
	Function_18(&bVar13, 1063, 4.0f, 0, 0);
	bVar14 = Function_20("fox_pop", 0);
	Function_18(&bVar14, 1054, 4.0f, 0, 0);
	Function_18(&bVar14, 1055, 4.0f, 0, 0);
	Function_18(&bVar14, 1056, 4.0f, 0, 0);
	bVar15 = Function_20("animal_duck", 0);
	Function_18(&bVar15, 1140, 100.0f, 0, 0);
	Function_18(&bVar15, 1140, 100.0f, 0, 0);
	Function_18(&bVar15, 1140, 100.0f, 0, 0);
	bVar16 = Function_20("rabbit_pop", 0);
	Function_18(&bVar16, 1078, 4.0f, 0, 0);
	Function_18(&bVar16, 1078, 4.0f, 0, 0);
	Function_18(&bVar16, 1078, 4.0f, 0, 0);
	bVar17 = Function_20("bigHorn", 0);
	Function_18(&bVar17, 1122, 4.0f, 0, 0);
	Function_18(&bVar17, 1123, 4.0f, 0, 0);
	Function_18(&bVar17, 1123, 4.0f, 0, 0);
	bVar18 = Function_20("nnight_pop", 0);
	Function_15(&bVar18, 1084, 4.0f, 49, 0, 0);
	Function_15(&bVar18, 1082, 4.0f, 33, 0, 0);
	Function_21(&(Global_46972[7]));
	Global_46972[7] = Function_20("animal_bird", 1);
	Function_15(&(Global_46972[7]), 1128, 6.0f, 15, 0, 0);
	Function_15(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_15(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_15(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_15(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_15(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_15(&(Global_46972[7]), 1137, 6.0f, 33, 0, 0);
	bVar19 = Function_20("hawk", 0);
	Function_15(&bVar19, 1145, 3.0f, 15, 0, 0);
	bVar20 = Function_20("vulture", 0);
	Function_15(&bVar20, 1131, 6.0f, 14, 0, 0);
	bVar21 = Function_20("crow", 0);
	Function_15(&bVar21, 1131, 6.0f, 14, 0, 0);
	bVar22 = Function_20("nsmallbird", 0);
	Function_15(&bVar22, 1135, 2.0f, 15, 0, 0);
	Function_15(&bVar22, 1136, 2.0f, 15, 0, 0);
	Function_15(&bVar22, 1136, 2.0f, 15, 0, 0);
	Function_15(&bVar22, 1137, 2.0f, 33, 0, 0);
	Function_21(&(Global_46972[14]));
	Global_46972[14] = Function_20("birds_trees", 1);
	Function_18(&(Global_46972[14]), 1131, 3.0f, 0, 0);
	Function_18(&(Global_46972[14]), 1135, 1.0f, 0, 0);
	Function_18(&(Global_46972[14]), 1136, 1.0f, 0, 0);
	Function_18(&(Global_46972[14]), 1136, 1.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar23 = Function_20("wildHorses", 1);
	Function_18(&bVar23, 977, 8.0f, 0, 0);
	Function_18(&bVar23, 984, 8.0f, 0, 0);
	Function_18(&bVar23, 985, 8.0f, 0, 0);
	Function_18(&bVar23, 986, 8.0f, 0, 0);
	Function_18(&bVar23, 988, 8.0f, 0, 0);
	Function_18(&bVar23, 990, 8.0f, 0, 0);
	if (Function_11(6, 0))
	{
		Function_18(&bVar23, 978, 16.0f, 0, 0);
	}
	Function_10(&(Global_46972[5]), 9E-05f);
	Function_21(&(Global_46972[2]));
	Global_46972[2] = Function_20("ped_law", 1);
	Function_18(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_18(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_18(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_21(&(Global_46972[3]));
	Global_46972[3] = Function_20("ped_bad_guys_local", 1);
	Function_18(&(Global_46972[3]), 486, 10.0f, 0, 0);
	Function_18(&(Global_46972[3]), 487, 10.0f, 0, 0);
	Function_18(&(Global_46972[3]), 488, 10.0f, 0, 0);
	Function_18(&(Global_46972[3]), 489, 3.0f, 0, 0);
	Function_18(&(Global_46972[3]), 490, 3.0f, 0, 0);
	Function_18(&(Global_46972[3]), 491, 3.0f, 0, 0);
	Function_18(&(Global_46972[3]), 492, 1.0f, 0, 0);
	Function_18(&(Global_46972[3]), 493, 1.0f, 0, 0);
	Function_21(&(Global_46972[4]));
	Global_46972[4] = Function_20("ped_bad_guys_generic", 1);
	Function_18(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_18(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_18(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_18(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_18(&(Global_46972[4]), 397, 8.0f, 0, 0);
	Function_18(&(Global_46972[4]), 397, 8.0f, 0, 0);
	Function_18(&(Global_46972[4]), 398, 8.0f, 0, 0);
	Function_21(&(Global_46972[9]));
	Global_46972[9] = Function_20("ped_vehicle", 1);
	Function_18(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_18(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	bVar24 = CREATE_POPULATION_SET(1);
	uVar25 = Function_20("armadillo_prestream", 0);
	Function_15(&uVar25, 202, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 87, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 235, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 217, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 140, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 137, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 46, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 50, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 22, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 311, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 33, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 34, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 76, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 79, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 141, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 204, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 155, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 142, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 49, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 56, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 74, 4.0f, 14, 0, 0);
	Function_15(&uVar25, 178, 4.0f, 14, 0, 0);
	Var26 = Vector(-2148,719f, 16,323f, 2602,377f);
	AMBIENT_SPAWN_PRESTREAM_SET(&uVar25, Var26, 450.0f, 15);
	while (!Function_9(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_8("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_7(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar28 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (IS_LAYOUTREF_VALID(&uVar28))
	{
		uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_flk_CENTER_set");
		if (IS_VOLUME_VALID(&uVar29))
		{
			uVar30 = Function_6(&uVar29, &bVar23, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar30, 3);
			uVar31 = Function_6(&uVar29, &bVar9, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar31, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar31, 4);
			uVar32 = Function_6(&uVar29, &bVar12, 3,7E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar32, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar32, 3);
			uVar33 = Function_6(&uVar29, &bVar11, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar33, 2);
			uVar34 = Function_6(&uVar29, &bVar0, 3,2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar34, 2);
			uVar35 = Function_6(&uVar29, &bVar18, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar35, 2);
			uVar36 = Function_6(&uVar29, &bVar16, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar36, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_CENTER_set to create population volumes");
		}
		uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_flk_SE_set");
		if (IS_VOLUME_VALID(&uVar29))
		{
			uVar37 = Function_6(&uVar29, &bVar23, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar37, 3);
			uVar38 = Function_6(&uVar29, &bVar9, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar38, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar38, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar38, 4);
			uVar39 = Function_6(&uVar29, &bVar14, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar39, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar39, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar39, 3);
			uVar40 = Function_6(&uVar29, &bVar13, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar40, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar40, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar40, 7);
			uVar41 = Function_6(&uVar29, &bVar12, 0,00019f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar41, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar41, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar41, 3);
			uVar42 = Function_6(&uVar29, &bVar11, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar42, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar42, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar42, 2);
			uVar43 = Function_6(&uVar29, &bVar0, 3,2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar43, 2);
			uVar44 = Function_6(&uVar29, &bVar18, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar44, 2);
			uVar45 = Function_6(&uVar29, &bVar16, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar45, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_SE_set to create population volumes");
		}
		uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_flk_NW_set");
		if (IS_VOLUME_VALID(&uVar29))
		{
			uVar46 = Function_6(&uVar29, &bVar23, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar46, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar46, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar46, 4);
			uVar47 = Function_6(&uVar29, &bVar10, 1,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar47, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar47, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar47, 1);
			uVar48 = Function_6(&uVar29, &bVar9, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar48, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar48, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar48, 4);
			uVar49 = Function_6(&uVar29, &bVar13, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar49, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar49, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar49, 3);
			uVar50 = Function_6(&uVar29, &bVar12, 3,6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar50, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar50, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar50, 3);
			uVar51 = Function_6(&uVar29, &bVar17, 3,6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar51, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar51, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar51, 3);
			uVar52 = Function_6(&uVar29, &bVar11, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar52, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar52, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar52, 2);
			uVar53 = Function_6(&uVar29, &bVar0, 3,2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar53, 2);
			uVar54 = Function_6(&uVar29, &bVar18, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar54, 2);
			uVar55 = Function_6(&uVar29, &bVar16, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar55, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_NW_set to create population volumes");
		}
		uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_flk_BIRD_set");
		if (IS_VOLUME_VALID(&uVar29))
		{
			Function_6(&uVar29, &bVar19, 4,5E-05f, 0, 0, 1);
			Function_6(&uVar29, &bVar20, 4,5E-05f, 0, 0, 1);
			Function_6(&uVar29, &bVar21, 4,5E-05f, 0, 0, 1);
			Function_6(&uVar29, &bVar22, 6E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_BIRD_set to create population volumes");
		}
		uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar29))
		{
			Function_5(&uVar29, &bVar15, 0,0001f, 0, 0);
			Function_6(&uVar29, &bVar0, 0,00012f, 0, 0, 1);
			Function_6(&uVar29, &bVar18, 0,00024f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_aquaticWildlife_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find one of the volumes to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_Venters");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_6(&uVar29, &bVar24, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find chov_Venters to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_venter_chickens");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar5, 3, 5, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_chickens to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_venter_livestock");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar1, 2, 3, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_livestock to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_venter_dog");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_3(&uVar29, &bVar7, 1, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_dog to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_venter_barn");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar2, 1, 2, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_barn to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_critchly");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_6(&uVar29, &bVar24, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find chov_critchly to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_critchly_goats");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar3, 5, 8, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_goats to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_critchly_barn");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar4, 3, 5, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchly_barn to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_critchly_chickens");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar5, 3, 5, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_chickens to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_critchly_barn");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_4(&uVar29, &uVar6, 2, 3, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_barn to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "chov_critchly_dog");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_3(&uVar29, &bVar8, 2, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_dog to create population volumes");
	}
	uVar29 = FIND_VOLUME_IN_LAYOUT(&uVar28, "nchov_null");
	if (IS_VOLUME_VALID(&uVar29))
	{
		Function_6(&uVar29, &bVar24, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find chov_null to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_9(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_7(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_8("Finished loading Cholla Springs population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x23B6 / 9142
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x23C7 / 9159
{
	int iVar0;
	
	if (!Function_7(1))
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

var Function_3(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x241F / 9247
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

var Function_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x24AF / 9391
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
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

var Function_5(var uParam0, var uParam1, float fParam2, var uParam3, bool bParam4) //Position: 0x2541 / 9537
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

var Function_6(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x25C7 / 9671
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

bool Function_7(int iParam0) //Position: 0x2657 / 9815
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(char* cParam0) //Position: 0x2673 / 9843
{
	if (!Function_7(128))
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

bool Function_9(var uParam0, int iParam1) //Position: 0x26B3 / 9907
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(var uParam0, bool bParam1) //Position: 0x26D0 / 9936
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_11(int iParam0, bool bParam1) //Position: 0x26E1 / 9953
{
	int iVar0;
	
	iVar0 = Function_13(iParam0);
	if (!Function_12(iVar0))
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

bool Function_12(int iParam0) //Position: 0x271F / 10015
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_13(int iParam0) //Position: 0x2736 / 10038
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_14(bool bParam0) //Position: 0x2750 / 10064
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_15(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2766 / 10086
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_17(iParam3), Function_16(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_16(int iParam0) //Position: 0x27E4 / 10212
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

var Function_17(int iParam0) //Position: 0x2850 / 10320
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

var Function_18(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x28BC / 10428
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

var Function_19(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x293E / 10558
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_18(&uParam0, iParam1, fParam2, iParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&uParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_20(var uParam0, int iParam1) //Position: 0x2985 / 10629
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_21(int iParam0) //Position: 0x2994 / 10644
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_22(char* cParam0) //Position: 0x29A1 / 10657
{
	if (!Function_7(128))
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

