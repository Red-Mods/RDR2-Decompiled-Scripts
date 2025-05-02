//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 44
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
	bool bVar15;
	bool bVar16;
	bool bVar17;
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
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_15("Loading Tall Trees population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_46972[15]));
	Global_46972[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_13("ped_wilderness", Global_47149);
	Function_11(&(Global_46972[0]), 89, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 223, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 227, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 229, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 95, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 131, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 224, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 228, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 17, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 23, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 28, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 29, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 30, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 32, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 36, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 45, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 96, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 108, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 109, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 110, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 168, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 169, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 176, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 177, 1.0f, 0, 0);
	Function_11(&(Global_46972[0]), 218, 1.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_46972[1]), 130, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 225, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 226, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 230, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 18, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 58, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 75, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 115, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 206, 1.0f, 0, 0);
	Function_11(&(Global_46972[1]), 205, 1.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_13("animal_wilderness", 1);
	Function_8(&(Global_46972[5]), 1084, 12.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1082, 12.0f, 33, 0, 0);
	Function_8(&(Global_46972[5]), 1128, 12.0f, 14, 1, 0);
	Function_11(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	Function_11(&(Global_46972[5]), 1079, 4.0f, 0, 0);
	Function_11(&(Global_46972[5]), 1078, 4.0f, 0, 0);
	bVar0 = Function_13("nnight_pop", 0);
	Function_8(&bVar0, 1084, 4.0f, 33, 0, 0);
	Function_8(&bVar0, 1082, 4.0f, 33, 0, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_13("animal_hunt", 1);
	Function_11(&(Global_46972[10]), 1082, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1091, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1092, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1093, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1115, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1051, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1120, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1117, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1069, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1070, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1071, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1054, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1055, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1056, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1074, 3.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1075, 3.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1076, 3.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1076, 3.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1099, 2.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1100, 2.0f, 0, 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_46972[11]), 1099, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1100, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1101, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1114, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1115, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1069, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1070, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1071, 2.0f, 0, 0);
	Function_14(&(Global_46972[13]));
	Global_46972[13] = Function_13("animal_hunted", 0);
	Function_11(&(Global_46972[13]), 1122, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1123, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1123, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1119, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1119, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1120, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1116, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1117, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1116, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1074, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1075, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1076, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1076, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1099, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1100, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1101, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1114, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1114, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1115, 4.0f, 0, 0);
	Function_14(&(Global_46972[12]));
	Global_46972[12] = Function_13("animal_prey", 0);
	Function_11(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1078, 6.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1078, 6.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1078, 6.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1122, 4.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1123, 4.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1123, 4.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1125, 4.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1126, 4.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1125, 4.0f, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_46972[8]), 1125, 4.0f, 0, 0);
	Function_11(&(Global_46972[8]), 1126, 4.0f, 0, 0);
	Function_11(&(Global_46972[8]), 1125, 4.0f, 0, 0);
	bVar1 = Function_13("wolfs", 0);
	Function_11(&bVar1, 1069, 8.0f, 0, 0);
	Function_11(&bVar1, 1070, 8.0f, 0, 0);
	Function_11(&bVar1, 1071, 8.0f, 0, 0);
	bVar2 = Function_13("cougars", 0);
	Function_11(&bVar2, 1114, 8.0f, 0, 0);
	Function_11(&bVar2, 1114, 8.0f, 0, 0);
	Function_11(&bVar2, 1115, 8.0f, 0, 0);
	bVar3 = Function_13("coyote", 0);
	Function_11(&bVar3, 1050, 4.0f, 0, 0);
	Function_11(&bVar3, 1050, 4.0f, 0, 0);
	Function_11(&bVar3, 1051, 4.0f, 0, 0);
	Function_11(&bVar3, 1052, 4.0f, 0, 0);
	Function_11(&bVar3, 1052, 4.0f, 0, 0);
	bVar4 = Function_13("deer", 0);
	Function_11(&bVar4, 1119, 4.0f, 0, 0);
	Function_11(&bVar4, 1119, 4.0f, 0, 0);
	Function_11(&bVar4, 1120, 4.0f, 0, 0);
	Function_11(&bVar4, 1116, 1.0f, 0, 0);
	Function_11(&bVar4, 1117, 1.0f, 0, 0);
	Function_11(&bVar4, 1116, 1.0f, 0, 0);
	bVar5 = Function_13("elk_pop", 0);
	Function_11(&bVar5, 1110, 4.0f, 0, 0);
	Function_11(&bVar5, 1111, 4.0f, 0, 0);
	Function_11(&bVar5, 1111, 4.0f, 0, 0);
	bVar6 = Function_13("fox_pop", 0);
	Function_11(&bVar6, 1054, 4.0f, 0, 0);
	Function_11(&bVar6, 1055, 4.0f, 0, 0);
	Function_11(&bVar6, 1056, 4.0f, 0, 0);
	bVar7 = Function_13("owl", 0);
	Function_11(&bVar7, 1138, 4.0f, 0, 0);
	Function_11(&bVar7, 1139, 4.0f, 0, 0);
	bVar8 = Function_13("rabbit_pop", 0);
	Function_11(&bVar8, 1078, 4.0f, 0, 0);
	Function_11(&bVar8, 1078, 4.0f, 0, 0);
	Function_11(&bVar8, 1078, 4.0f, 0, 0);
	bVar9 = Function_13("bear", 0);
	Function_11(&bVar9, 1099, 4.0f, 0, 0);
	Function_11(&bVar9, 1100, 4.0f, 0, 0);
	Function_11(&bVar9, 1101, 4.0f, 0, 0);
	bVar10 = Function_13("bigHorn", 0);
	Function_11(&bVar10, 1122, 4.0f, 0, 0);
	Function_11(&bVar10, 1123, 4.0f, 0, 0);
	Function_11(&bVar10, 1123, 4.0f, 0, 0);
	bVar11 = Function_13("wildBoar_pop", 0);
	Function_11(&bVar11, 1074, 4.0f, 0, 0);
	Function_11(&bVar11, 1075, 4.0f, 0, 0);
	Function_11(&bVar11, 1076, 4.0f, 0, 0);
	Function_11(&bVar11, 1076, 4.0f, 0, 0);
	bVar12 = Function_13("nwildhorse", 0);
	Function_11(&bVar12, 977, 4.0f, 0, 0);
	Function_11(&bVar12, 980, 4.0f, 0, 0);
	Function_11(&bVar12, 979, 10.0f, 0, 0);
	Function_11(&bVar12, 984, 4.0f, 0, 0);
	Function_11(&bVar12, 985, 4.0f, 0, 0);
	Function_11(&bVar12, 988, 4.0f, 0, 0);
	Function_11(&bVar12, 990, 4.0f, 0, 0);
	Function_11(&bVar12, 979, 4.0f, 0, 0);
	bVar13 = Function_13("animal_duck", 0);
	Function_8(&bVar13, 1140, 100.0f, 31, 0, 0);
	Function_8(&bVar13, 1140, 100.0f, 31, 0, 0);
	Function_8(&bVar13, 1140, 100.0f, 31, 0, 0);
	bVar14 = Function_13("animal_beaver", 0);
	Function_11(&bVar14, 1106, 100.0f, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1148, 8.0f, 15, 0, 0);
	Function_8(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1145, 4.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1137, 3.0f, 33, 0, 0);
	bVar15 = Function_13("hawk", 0);
	Function_8(&bVar15, 1145, 3.0f, 15, 0, 0);
	Function_8(&bVar15, 1148, 2.0f, 15, 0, 0);
	Function_8(&bVar15, 1137, 1.0f, 33, 0, 0);
	bVar16 = Function_13("crow", 0);
	Function_8(&bVar16, 1131, 6.0f, 14, 0, 0);
	bVar17 = Function_13("nsmallbird", 0);
	Function_8(&bVar17, 1135, 2.0f, 15, 0, 0);
	Function_8(&bVar17, 1136, 2.0f, 15, 0, 0);
	Function_8(&bVar17, 1136, 2.0f, 15, 0, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	Function_7(&(Global_46972[5]), 9E-05f);
	Function_14(&(Global_46972[2]));
	Global_46972[2] = Function_13("ped_law", 1);
	Function_11(&(Global_46972[2]), 436, 8.0f, 0, 0);
	Function_11(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_11(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_46972[3]), 474, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 475, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 476, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 470, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 471, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 472, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 467, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 468, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 469, 10.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_46972[4]), 398, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 397, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 399, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_11(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_11(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_11(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_46972[9]), 1186, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1187, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	while (!Function_6(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar18 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (IS_LAYOUTREF_VALID(&uVar18))
	{
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "talv_flk_CENTER_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			uVar20 = Function_3(&uVar19, &bVar9, 1,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar20, 2);
			uVar21 = Function_3(&uVar19, &bVar12, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar21, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar21, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar21, 2);
			uVar22 = Function_3(&uVar19, &bVar11, 1,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar22, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar22, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar22, 3);
			uVar23 = Function_3(&uVar19, &bVar6, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar23, 3);
			uVar24 = Function_3(&uVar19, &bVar10, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar24, 5);
			uVar25 = Function_3(&uVar19, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar25, 3);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar25, 5);
			uVar26 = Function_3(&uVar19, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar26, 2);
			uVar27 = Function_3(&uVar19, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar27, 2);
			uVar28 = Function_3(&uVar19, &bVar2, 2,3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar28, 1);
			uVar29 = Function_3(&uVar19, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar29, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find talv_flk_ALL_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "talv_flk_NORTH_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			uVar30 = Function_3(&uVar19, &bVar10, 1,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar30, 2);
			uVar31 = Function_3(&uVar19, &bVar12, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar31, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar31, 4);
			uVar32 = Function_3(&uVar19, &bVar6, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar32, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar32, 2);
			uVar33 = Function_3(&uVar19, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar33, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar33, 7);
			uVar34 = Function_3(&uVar19, &bVar8, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar34, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar34, 3);
			uVar35 = Function_3(&uVar19, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar35, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar35, 2);
			uVar36 = Function_3(&uVar19, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar36, 3);
			Function_3(&uVar19, &bVar14, 5E-05f, 0, 0, 1);
			uVar37 = Function_3(&uVar19, &bVar9, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar37, 1);
			uVar38 = Function_3(&uVar19, &bVar2, 2,3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar38, 1);
			uVar39 = Function_3(&uVar19, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar39, 2);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find talv_flk_NE_NW_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "talv_flk_SOUTH_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			uVar40 = Function_3(&uVar19, &bVar12, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar40, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar40, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar40, 4);
			uVar41 = Function_3(&uVar19, &bVar6, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar41, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar41, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar41, 2);
			Function_3(&uVar19, &bVar14, 5E-05f, 0, 0, 1);
			uVar42 = Function_3(&uVar19, &bVar11, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar42, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar42, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar42, 2);
			uVar43 = Function_3(&uVar19, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar43, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar43, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar43, 7);
			uVar44 = Function_3(&uVar19, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar44, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar44, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar44, 3);
			uVar45 = Function_3(&uVar19, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar45, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar45, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar45, 2);
			uVar46 = Function_3(&uVar19, &bVar8, 2,7E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar46, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar46, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar46, 2);
			uVar47 = Function_3(&uVar19, &bVar10, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar47, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar47, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar47, 3);
			uVar48 = Function_3(&uVar19, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar48, 1);
			uVar49 = Function_3(&uVar19, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar49, 2);
		}
		else
		{
			LOG_ERROR("TallTreesPop: Cannot find talv_flk_SOUTH_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "talv_birds");
		if (IS_VOLUME_VALID(&uVar19))
		{
			Function_3(&uVar19, &bVar15, 6E-05f, 0, 0, 1);
			Function_3(&uVar19, &bVar16, 6E-05f, 0, 0, 1);
			Function_3(&uVar19, &bVar17, 9E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("TallTreesPop: Cannot find talv_birds to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "talv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			Function_3(&uVar19, &bVar14, 6E-05f, 0, 0, 1);
			uVar50 = Function_3(&uVar19, &bVar13, 0,00012f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar50, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar50, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar50, 3);
			Function_3(&uVar19, &bVar0, 4,5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("TallTreesPop: Cannot find talv_aquaticWildlife_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("tal_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_6(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_5("Finished loading Tall Trees population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1C15 / 7189
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1C26 / 7206
{
	int iVar0;
	
	if (!Function_4(1))
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

var Function_3(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1C7E / 7294
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

bool Function_4(int iParam0) //Position: 0x1D0E / 7438
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0x1D2A / 7466
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0x1D6A / 7530
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x1D87 / 7559
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1D98 / 7576
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x1E16 / 7702
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

var Function_10(int iParam0) //Position: 0x1E82 / 7810
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

var Function_11(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1EEE / 7918
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

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1F70 / 8048
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_13(var uParam0, int iParam1) //Position: 0x1FB7 / 8119
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_14(int iParam0) //Position: 0x1FC6 / 8134
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_15(char* cParam0) //Position: 0x1FD3 / 8147
{
	if (!Function_4(128))
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

