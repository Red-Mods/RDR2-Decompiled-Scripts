//Decompiled with MagicRDR v1.0
//Function Count : 24
//Statics Count : 4
//Natives Count : 49
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
	var uVar24;
	var uVar25;
	vector3 vVar26;
	bool bVar29;
	bool bVar30;
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
	var uVar56;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_23("Loading Cholla Springs population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_22(&(Global_30750[6]));
	Global_30750[6] = Function_21("animal_horse", 4);
	Function_20(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_20(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_22(&(Global_30750[15]));
	Global_30750[15] = Function_21("animal_horse_unsaddled", 0);
	Function_19(&(Global_30750[15]), 976, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_19(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_22(&(Global_30750[0]));
	Global_30750[0] = Function_21("ped_wilderness", Global_30840);
	Function_19(&(Global_30750[0]), 37, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 38, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 39, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 51, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 175, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 174, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 55, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 178, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 153, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 173, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 199, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 56, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 46, 8.0f, 0, 0);
	Function_19(&(Global_30750[0]), 50, 10.0f, 0, 0);
	Function_19(&(Global_30750[0]), 202, 10.0f, 0, 0);
	Function_19(&(Global_30750[0]), 55, 2.0f, 0, 0);
	Function_19(&(Global_30750[0]), 54, 10.0f, 0, 0);
	Function_19(&(Global_30750[0]), 53, 10.0f, 0, 0);
	Function_19(&(Global_30750[0]), 33, 10.0f, 0, 0);
	Function_19(&(Global_30750[0]), 34, 10.0f, 0, 0);
	Function_22(&(Global_30750[1]));
	Global_30750[1] = Function_21("ped_traveller", 3);
	Function_19(&(Global_30750[1]), 64, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]), 74, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]), 48, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]), 73, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]), 78, 10.0f, 0, 0);
	Function_19(&(Global_30750[1]), 49, 10.0f, 0, 0);
	Function_22(&(Global_30750[5]));
	Global_30750[5] = Function_21("animal_wilderness", 1);
	Function_16(&(Global_30750[5]), 1059, 1.0f, 15, 0, 0);
	uVar0 = Function_21("critter_pop", 0);
	Function_19(&uVar0, 1059, 1.0f, 0, 0);
	Function_22(&(Global_30750[10]));
	Global_30750[10] = Function_21("animal_hunt", 1);
	Function_19(&(Global_30750[10]), 1082, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1088, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1089, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1090, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1050, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1050, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1051, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1052, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1052, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1119, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1119, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1120, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1116, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1117, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1116, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1061, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1062, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1063, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1054, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1055, 1.0f, 0, 0);
	Function_19(&(Global_30750[10]), 1056, 1.0f, 0, 0);
	if (Function_12(10, 0))
	{
		Function_22(&(Global_30750[11]));
		Global_30750[11] = Function_21("animal_predator", 1);
		Function_19(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1051, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1052, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1052, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1089, 8.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1090, 7.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1061, 5.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1062, 5.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1063, 5.0f, 0, 0);
	}
	else
	{
		Function_22(&(Global_30750[11]));
		Global_30750[11] = Function_21("animal_predator", 1);
		Function_19(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1050, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1051, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1052, 3.0f, 0, 0);
		Function_19(&(Global_30750[11]), 1052, 3.0f, 0, 0);
	}
	Function_22(&(Global_30750[13]));
	Global_30750[13] = Function_21("animal_hunted", 0);
	Function_19(&(Global_30750[13]), 1050, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1050, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1051, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1052, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1052, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1061, 5.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1062, 5.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1063, 5.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1119, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1119, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1120, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1116, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1117, 3.0f, 0, 0);
	Function_19(&(Global_30750[13]), 1116, 3.0f, 0, 0);
	Function_22(&(Global_30750[12]));
	Global_30750[12] = Function_21("animal_prey", 0);
	Function_19(&(Global_30750[12]), 1119, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1119, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1120, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1116, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1117, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1116, 3.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_19(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_22(&(Global_30750[8]));
	Global_30750[8] = Function_21("animal_herd", 1);
	Function_19(&(Global_30750[8]), 1013, 10.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1014, 10.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1008, 10.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1009, 10.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1010, 10.0f, 0, 0);
	Function_19(&(Global_30750[8]), 1011, 10.0f, 0, 0);
	uVar1 = Function_21("horseAM", 0);
	Function_16(&uVar1, 977, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 981, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 983, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 984, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 985, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 986, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 987, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 988, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 989, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 990, 100.0f, 15, 0, 0);
	Function_16(&uVar1, 991, 100.0f, 15, 0, 0);
	uVar2 = Function_21("horsePM", 0);
	Function_16(&uVar2, 977, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 981, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 983, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 984, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 985, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 986, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 987, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 988, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 989, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 990, 100.0f, 48, 0, 0);
	Function_16(&uVar2, 991, 100.0f, 48, 0, 0);
	uVar3 = Function_21("goats", 0);
	Function_16(&uVar3, 1029, 100.0f, 15, 0, 0);
	Function_16(&uVar3, 1026, 100.0f, 15, 0, 0);
	Function_16(&uVar3, 1027, 100.0f, 15, 0, 0);
	Function_16(&uVar3, 1028, 100.0f, 15, 0, 0);
	uVar4 = Function_21("goatsPM", 0);
	Function_16(&uVar4, 1029, 100.0f, 48, 0, 0);
	Function_16(&uVar4, 1026, 100.0f, 48, 0, 0);
	Function_16(&uVar4, 1027, 100.0f, 48, 0, 0);
	Function_16(&uVar4, 1028, 100.0f, 48, 0, 0);
	uVar5 = Function_21("chickens", 0);
	Function_16(&uVar5, 1015, 100.0f, 15, 0, 0);
	Function_16(&uVar5, 1016, 100.0f, 15, 0, 0);
	uVar6 = Function_21("chickensPM", 0);
	Function_16(&uVar6, 1015, 100.0f, 48, 0, 0);
	Function_16(&uVar6, 1016, 100.0f, 48, 0, 0);
	uVar7 = Function_21("dogsV", 0);
	Function_19(&uVar7, 1030, 100.0f, 0, 0);
	uVar8 = Function_21("dogsC", 0);
	Function_19(&uVar8, 1031, 100.0f, 0, 0);
	Function_19(&uVar8, 1032, 100.0f, 0, 0);
	uVar9 = Function_21("coyote_den", 0);
	Function_19(&uVar9, 1050, 4.0f, 0, 0);
	Function_19(&uVar9, 1050, 1.0f, 0, 0);
	Function_19(&uVar9, 1051, 4.0f, 0, 0);
	Function_19(&uVar9, 1052, 4.0f, 0, 0);
	Function_19(&uVar9, 1052, 4.0f, 0, 0);
	uVar10 = Function_21("cougar_pop", 0);
	Function_19(&uVar10, 1088, 4.0f, 0, 0);
	Function_19(&uVar10, 1089, 4.0f, 0, 0);
	Function_19(&uVar10, 1090, 4.0f, 0, 0);
	uVar11 = Function_21("armadillo_pop", 0);
	Function_19(&uVar11, 1081, 4.0f, 0, 0);
	Function_19(&uVar11, 1081, 4.0f, 0, 0);
	Function_19(&uVar11, 1081, 4.0f, 0, 0);
	uVar12 = Function_21("deer_pop", 0);
	Function_19(&uVar12, 1119, 4.0f, 0, 0);
	Function_19(&uVar12, 1119, 4.0f, 0, 0);
	Function_19(&uVar12, 1120, 4.0f, 0, 0);
	Function_19(&uVar12, 1116, 1.0f, 0, 0);
	Function_19(&uVar12, 1117, 1.0f, 0, 0);
	Function_19(&uVar12, 1116, 1.0f, 0, 0);
	uVar13 = Function_21("wolf_pop", 0);
	Function_19(&uVar13, 1061, 4.0f, 0, 0);
	Function_19(&uVar13, 1062, 4.0f, 0, 0);
	Function_19(&uVar13, 1063, 4.0f, 0, 0);
	uVar14 = Function_21("fox_pop", 0);
	Function_19(&uVar14, 1054, 4.0f, 0, 0);
	Function_19(&uVar14, 1055, 4.0f, 0, 0);
	Function_19(&uVar14, 1056, 4.0f, 0, 0);
	uVar15 = Function_21("animal_duck", 0);
	Function_19(&uVar15, 1140, 100.0f, 0, 0);
	Function_19(&uVar15, 1140, 100.0f, 0, 0);
	Function_19(&uVar15, 1140, 100.0f, 0, 0);
	uVar16 = Function_21("rabbit_pop", 0);
	Function_19(&uVar16, 1078, 4.0f, 0, 0);
	Function_19(&uVar16, 1078, 4.0f, 0, 0);
	Function_19(&uVar16, 1078, 4.0f, 0, 0);
	uVar17 = Function_21("bigHorn", 0);
	Function_19(&uVar17, 1122, 4.0f, 0, 0);
	Function_19(&uVar17, 1123, 4.0f, 0, 0);
	Function_19(&uVar17, 1123, 4.0f, 0, 0);
	uVar18 = Function_21("nnight_pop", 0);
	Function_16(&uVar18, 1084, 4.0f, 49, 0, 0);
	Function_16(&uVar18, 1082, 4.0f, 33, 0, 0);
	Function_22(&(Global_30750[7]));
	Global_30750[7] = Function_21("animal_bird", 1);
	Function_16(&(Global_30750[7]), 1128, 6.0f, 15, 0, 0);
	Function_16(&(Global_30750[7]), 1131, 6.0f, 14, 0, 0);
	Function_16(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_16(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_16(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_16(&(Global_30750[7]), 1145, 3.0f, 14, 0, 0);
	Function_16(&(Global_30750[7]), 1137, 6.0f, 33, 0, 0);
	uVar19 = Function_21("hawk", 0);
	Function_16(&uVar19, 1145, 3.0f, 15, 0, 0);
	uVar20 = Function_21("vulture", 0);
	Function_16(&uVar20, 1131, 6.0f, 14, 0, 0);
	uVar21 = Function_21("crow", 0);
	Function_16(&uVar21, 1131, 6.0f, 14, 0, 0);
	uVar22 = Function_21("nsmallbird", 0);
	Function_16(&uVar22, 1135, 2.0f, 15, 0, 0);
	Function_16(&uVar22, 1136, 2.0f, 15, 0, 0);
	Function_16(&uVar22, 1136, 2.0f, 15, 0, 0);
	Function_16(&uVar22, 1137, 2.0f, 33, 0, 0);
	Function_22(&(Global_30750[14]));
	Global_30750[14] = Function_21("birds_trees", 1);
	Function_19(&(Global_30750[14]), 1131, 3.0f, 0, 0);
	Function_19(&(Global_30750[14]), 1135, 1.0f, 0, 0);
	Function_19(&(Global_30750[14]), 1136, 1.0f, 0, 0);
	Function_19(&(Global_30750[14]), 1136, 1.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar23 = Function_21("wildHorses", 1);
	Function_19(&uVar23, 977, 8.0f, 0, 0);
	Function_19(&uVar23, 984, 8.0f, 0, 0);
	Function_19(&uVar23, 985, 8.0f, 0, 0);
	Function_19(&uVar23, 986, 8.0f, 0, 0);
	Function_19(&uVar23, 988, 8.0f, 0, 0);
	Function_19(&uVar23, 990, 8.0f, 0, 0);
	if (Function_12(6, 0))
	{
		Function_19(&uVar23, 978, 16.0f, 0, 0);
	}
	Function_11(Global_30750[5], 9E-05f);
	Function_22(&(Global_30750[2]));
	Global_30750[2] = Function_21("ped_law", 1);
	Function_19(&(Global_30750[2]), 436, 8.0f, 0, 0);
	Function_19(&(Global_30750[2]), 437, 8.0f, 0, 0);
	Function_19(&(Global_30750[2]), 438, 8.0f, 0, 0);
	Function_22(&(Global_30750[3]));
	Global_30750[3] = Function_21("ped_bad_guys_local", 1);
	Function_19(&(Global_30750[3]), 486, 10.0f, 0, 0);
	Function_19(&(Global_30750[3]), 487, 10.0f, 0, 0);
	Function_19(&(Global_30750[3]), 488, 10.0f, 0, 0);
	Function_19(&(Global_30750[3]), 489, 3.0f, 0, 0);
	Function_19(&(Global_30750[3]), 490, 3.0f, 0, 0);
	Function_19(&(Global_30750[3]), 491, 3.0f, 0, 0);
	Function_19(&(Global_30750[3]), 492, 1.0f, 0, 0);
	Function_19(&(Global_30750[3]), 493, 1.0f, 0, 0);
	Function_22(&(Global_30750[4]));
	Global_30750[4] = Function_21("ped_bad_guys_generic", 1);
	Function_19(&(Global_30750[4]), 403, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 404, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 405, 1.0f, 0, 0);
	Function_19(&(Global_30750[4]), 400, 4.0f, 0, 0);
	Function_19(&(Global_30750[4]), 401, 4.0f, 0, 0);
	Function_19(&(Global_30750[4]), 402, 4.0f, 0, 0);
	Function_19(&(Global_30750[4]), 397, 8.0f, 0, 0);
	Function_19(&(Global_30750[4]), 397, 8.0f, 0, 0);
	Function_19(&(Global_30750[4]), 398, 8.0f, 0, 0);
	Function_22(&(Global_30750[9]));
	Global_30750[9] = Function_21("ped_vehicle", 1);
	Function_19(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_19(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	uVar24 = CREATE_POPULATION_SET(1);
	uVar25 = Function_21("armadillo_prestream", 0);
	Function_16(&uVar25, 202, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 87, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 235, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 217, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 140, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 137, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 46, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 50, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 22, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 311, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 33, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 34, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 76, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 79, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 141, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 204, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 155, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 142, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 49, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 56, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 74, 4.0f, 14, 0, 0);
	Function_16(&uVar25, 178, 4.0f, 14, 0, 0);
	vVar26 = { -2148.719f, 16.323f, 2602.377f };
	AMBIENT_SPAWN_PRESTREAM_SET(uVar25, vVar26, 450.0f, 15);
	while (!Function_10(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_9("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_8(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar29 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (IS_LAYOUTREF_VALID(bVar29))
	{
		bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_flk_CENTER_set");
		if (IS_VOLUME_VALID(bVar30))
		{
			if (!Function_7())
			{
				uVar31 = Function_6(bVar30, uVar23, 1.5E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar31, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar31, 1);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar31, 3);
			}
			uVar32 = Function_6(bVar30, uVar9, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar32, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar32, 4);
			uVar33 = Function_6(bVar30, uVar12, 3.7E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar33, 3);
			uVar34 = Function_6(bVar30, uVar11, 4.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar34, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar34, 2);
			uVar35 = Function_6(bVar30, uVar0, 3.2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar35, 2);
			uVar36 = Function_6(bVar30, uVar18, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar36, 2);
			uVar37 = Function_6(bVar30, uVar16, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar37, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_CENTER_set to create population volumes");
		}
		bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_flk_SE_set");
		if (IS_VOLUME_VALID(bVar30))
		{
			if (!Function_7())
			{
				uVar38 = Function_6(bVar30, uVar23, 1E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar38, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar38, 1);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar38, 3);
			}
			uVar39 = Function_6(bVar30, uVar9, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar39, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar39, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar39, 4);
			uVar40 = Function_6(bVar30, uVar14, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar40, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar40, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar40, 3);
			uVar41 = Function_6(bVar30, uVar13, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar41, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar41, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar41, 7);
			uVar42 = Function_6(bVar30, uVar12, 0.00019f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar42, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar42, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar42, 3);
			uVar43 = Function_6(bVar30, uVar11, 4.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar43, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar43, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar43, 2);
			uVar44 = Function_6(bVar30, uVar0, 3.2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar44, 2);
			uVar45 = Function_6(bVar30, uVar18, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar45, 2);
			uVar46 = Function_6(bVar30, uVar16, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar46, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_SE_set to create population volumes");
		}
		bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_flk_NW_set");
		if (IS_VOLUME_VALID(bVar30))
		{
			if (!Function_7())
			{
				uVar47 = Function_6(bVar30, uVar23, 1E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar47, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar47, 1);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar47, 4);
			}
			uVar48 = Function_6(bVar30, uVar10, 1.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar48, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar48, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar48, 1);
			uVar49 = Function_6(bVar30, uVar9, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar49, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar49, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar49, 4);
			uVar50 = Function_6(bVar30, uVar13, 2.1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar50, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar50, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar50, 3);
			uVar51 = Function_6(bVar30, uVar12, 3.6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar51, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar51, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar51, 3);
			uVar52 = Function_6(bVar30, uVar17, 3.6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar52, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar52, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar52, 3);
			uVar53 = Function_6(bVar30, uVar11, 4.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar53, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar53, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar53, 2);
			uVar54 = Function_6(bVar30, uVar0, 3.2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar54, 2);
			uVar55 = Function_6(bVar30, uVar18, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar55, 2);
			uVar56 = Function_6(bVar30, uVar16, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar56, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_NW_set to create population volumes");
		}
		bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_flk_BIRD_set");
		if (IS_VOLUME_VALID(bVar30))
		{
			Function_6(bVar30, uVar19, 4.5E-05f, 0, 0, 1);
			Function_6(bVar30, uVar20, 4.5E-05f, 0, 0, 1);
			Function_6(bVar30, uVar21, 4.5E-05f, 0, 0, 1);
			Function_6(bVar30, uVar22, 6E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find chov_flk_BIRD_set to create population volumes");
		}
		bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_aquaticWildlife_set");
		if (IS_VOLUME_VALID(bVar30))
		{
			Function_5(bVar30, uVar15, 0.0001f, 0, 0);
			Function_6(bVar30, uVar0, 0.00012f, 0, 0, 1);
			Function_6(bVar30, uVar18, 0.00024f, 0, 0, 1);
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
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_Venters");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_6(bVar30, uVar24, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find chov_Venters to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_venter_chickens");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar5, 3, 5, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_chickens to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_venter_livestock");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar1, 2, 3, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_livestock to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_venter_dog");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_3(bVar30, uVar7, 1, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_dog to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_venter_barn");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar2, 1, 2, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_venter_barn to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_critchly");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_6(bVar30, uVar24, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find chov_critchly to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_critchly_goats");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar3, 5, 8, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_goats to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_critchly_barn");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar4, 3, 5, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchly_barn to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_critchly_chickens");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar5, 3, 5, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_chickens to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_critchly_barn");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_4(bVar30, uVar6, 2, 3, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_barn to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "chov_critchly_dog");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_3(bVar30, uVar8, 2, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find chov_critchley_dog to create population volumes");
	}
	bVar30 = FIND_VOLUME_IN_LAYOUT(bVar29, "nchov_null");
	if (IS_VOLUME_VALID(bVar30))
	{
		Function_6(bVar30, uVar24, 0.0f, 0, 0, 1);
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find chov_null to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_10(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_8(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_9("Finished loading Cholla Springs population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x22B8 / 8888
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x22C7 / 8903
{
	int iVar0;
	
	if (!Function_8(1))
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

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x231C / 8988
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

var Function_4(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x239C / 9116
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

var Function_5(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4) //Position: 0x241E / 9246
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

var Function_6(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2496 / 9366
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

bool Function_7() //Position: 0x2516 / 9494
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_8(int iParam0) //Position: 0x251F / 9503
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(bool bParam0, float fParam1) //Position: 0x253B / 9531
{
	if (!Function_8(128))
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

bool Function_10(var uParam0, int iParam1) //Position: 0x2579 / 9593
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x2595 / 9621
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_12(int iParam0, bool bParam1) //Position: 0x25A5 / 9637
{
	int iVar0;
	
	iVar0 = Function_14(iParam0);
	if (!Function_13(iVar0))
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

bool Function_13(int iParam0) //Position: 0x25E2 / 9698
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_14(int iParam0) //Position: 0x25F9 / 9721
{
	if (!Function_15(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_15(bool bParam0) //Position: 0x2613 / 9747
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x2629 / 9769
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_18(iParam3), Function_17(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_17(int iParam0) //Position: 0x26A1 / 9889
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

var Function_18(int iParam0) //Position: 0x270D / 9997
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

var Function_19(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x2779 / 10105
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

var Function_20(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x27F5 / 10229
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_19(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_21(int iParam0, int iParam1) //Position: 0x283A / 10298
{
	return CREATE_NAMED_POPULATION_SET(iParam0, iParam1);
}

void Function_22(int iParam0) //Position: 0x2847 / 10311
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_23(bool bParam0, var uParam1) //Position: 0x2853 / 10323
{
	if (!Function_8(128))
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

