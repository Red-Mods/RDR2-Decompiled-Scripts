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
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_15("Loading Diez Coronas population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_14(&(Global_46972[6]));
	Global_46972[6] = Function_13("animal_horse", 4);
	Function_12(&(Global_46972[6]), 1000, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 1001, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 1002, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_46972[6]), 980, 100.0f, 0, 3);
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
	Global_46972[15] = Function_13("animal_horse_unsaddled", 0);
	Function_11(&(Global_46972[15]), 1000, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 1001, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 1002, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 996, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 997, 100.0f, 0, 0);
	Function_11(&(Global_46972[15]), 998, 100.0f, 0, 0);
	Function_14(&(Global_46972[0]));
	Global_46972[0] = Function_13("ped_wilderness", Global_47149);
	Function_11(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_11(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_14(&(Global_46972[1]));
	Global_46972[1] = Function_13("ped_traveller", 3);
	Function_11(&(Global_46972[1]), 63, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 62, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 253, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 263, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 265, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 275, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 302, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 303, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 311, 10.0f, 0, 0);
	Function_11(&(Global_46972[1]), 318, 10.0f, 0, 0);
	Function_14(&(Global_46972[5]));
	Global_46972[5] = Function_13("animal_wilderness", 1);
	Function_11(&(Global_46972[5]), 1081, 9.0f, 0, 0);
	Function_8(&(Global_46972[5]), 1059, 3.0f, 15, 1, 0);
	bVar0 = Function_13("critter_pop", 0);
	Function_8(&bVar0, 1059, 2.0f, 14, 1, 0);
	Function_14(&(Global_46972[10]));
	Global_46972[10] = Function_13("animal_hunt", 1);
	Function_11(&(Global_46972[10]), 1050, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1050, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1051, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1052, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1052, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1119, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1119, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1120, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1065, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1066, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1067, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1113, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1113, 1.0f, 0, 0);
	Function_11(&(Global_46972[10]), 1112, 1.0f, 0, 0);
	Function_14(&(Global_46972[11]));
	Global_46972[11] = Function_13("animal_predator", 1);
	Function_11(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1050, 1.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1051, 1.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_11(&(Global_46972[11]), 1052, 1.0f, 0, 0);
	Function_14(&(Global_46972[13]));
	Global_46972[13] = Function_13("animal_hunted", 0);
	Function_11(&(Global_46972[13]), 1122, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1123, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1123, 4.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1120, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1117, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1074, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1075, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1076, 3.0f, 0, 0);
	Function_11(&(Global_46972[13]), 1076, 3.0f, 0, 0);
	Function_14(&(Global_46972[12]));
	Global_46972[12] = Function_13("animal_prey", 0);
	Function_11(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_11(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_14(&(Global_46972[8]));
	Global_46972[8] = Function_13("animal_herd", 1);
	Function_11(&(Global_46972[8]), 1026, 10.0f, 0, 0);
	Function_11(&(Global_46972[8]), 1027, 10.0f, 0, 0);
	Function_11(&(Global_46972[8]), 1028, 10.0f, 0, 0);
	bVar1 = Function_13("coyote_den", 0);
	Function_11(&bVar1, 1050, 4.0f, 0, 0);
	Function_11(&bVar1, 1050, 4.0f, 0, 0);
	Function_11(&bVar1, 1051, 4.0f, 0, 0);
	Function_11(&bVar1, 1052, 4.0f, 0, 0);
	Function_11(&bVar1, 1052, 4.0f, 0, 0);
	bVar2 = Function_13("cougar_pop", 0);
	Function_11(&bVar2, 1113, 4.0f, 0, 0);
	Function_11(&bVar2, 1113, 4.0f, 0, 0);
	Function_11(&bVar2, 1112, 4.0f, 0, 0);
	bVar3 = Function_13("deer_pop", 0);
	Function_11(&bVar3, 1119, 4.0f, 0, 0);
	Function_11(&bVar3, 1119, 4.0f, 0, 0);
	Function_11(&bVar3, 1120, 4.0f, 0, 0);
	Function_11(&bVar3, 1116, 1.0f, 0, 0);
	Function_11(&bVar3, 1117, 1.0f, 0, 0);
	Function_11(&bVar3, 1116, 1.0f, 0, 0);
	bVar4 = Function_13("animal_duck", 0);
	Function_11(&bVar4, 1140, 100.0f, 0, 0);
	Function_11(&bVar4, 1140, 100.0f, 0, 0);
	Function_11(&bVar4, 1140, 100.0f, 0, 0);
	bVar5 = Function_13("wolf_pop", 0);
	Function_11(&bVar5, 1065, 4.0f, 0, 0);
	Function_11(&bVar5, 1066, 4.0f, 0, 0);
	Function_11(&bVar5, 1067, 4.0f, 0, 0);
	bVar6 = Function_13("fox_pop", 0);
	Function_11(&bVar6, 1026, 4.0f, 0, 0);
	Function_11(&bVar6, 1027, 4.0f, 0, 0);
	Function_11(&bVar6, 1028, 4.0f, 0, 0);
	bVar7 = Function_13("rabbit_pop", 0);
	Function_11(&bVar7, 1078, 4.0f, 0, 0);
	Function_11(&bVar7, 1078, 4.0f, 0, 0);
	Function_11(&bVar7, 1078, 4.0f, 0, 0);
	bVar8 = Function_13("armadillo_pop", 0);
	Function_11(&bVar8, 1081, 4.0f, 0, 0);
	Function_11(&bVar8, 1081, 4.0f, 0, 0);
	Function_11(&bVar8, 1081, 4.0f, 0, 0);
	bVar9 = Function_13("nnight_pop", 0);
	Function_8(&bVar9, 1084, 4.0f, 49, 0, 0);
	Function_14(&(Global_46972[7]));
	Global_46972[7] = Function_13("animal_bird", 1);
	Function_8(&(Global_46972[7]), 1128, 6.0f, 15, 0, 0);
	Function_8(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_8(&(Global_46972[7]), 1137, 6.0f, 33, 0, 0);
	bVar10 = Function_13("hawk", 0);
	Function_8(&bVar10, 1145, 3.0f, 15, 0, 0);
	bVar11 = Function_13("vulture", 0);
	Function_8(&bVar11, 1131, 6.0f, 14, 0, 0);
	bVar12 = Function_13("crow", 0);
	Function_8(&bVar12, 1131, 6.0f, 14, 0, 0);
	bVar13 = Function_13("nsmallbird", 0);
	Function_8(&bVar13, 1135, 2.0f, 15, 0, 0);
	Function_8(&bVar13, 1136, 2.0f, 15, 0, 0);
	Function_8(&bVar13, 1136, 2.0f, 15, 0, 0);
	Function_8(&bVar13, 1137, 2.0f, 33, 0, 0);
	Function_14(&(Global_46972[14]));
	Global_46972[14] = Function_13("birds_trees", 1);
	Function_11(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_11(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar14 = Function_13("wildHorses", 1);
	Function_11(&bVar14, 987, 8.0f, 0, 0);
	Function_11(&bVar14, 988, 8.0f, 0, 0);
	Function_11(&bVar14, 982, 16.0f, 0, 0);
	Function_11(&bVar14, 997, 8.0f, 0, 0);
	Function_11(&bVar14, 998, 8.0f, 0, 0);
	Function_7(&(Global_46972[5]), 9E-05f);
	switch (Global_46720)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Function_14(&(Global_46972[2]));
			Global_46972[2] = Function_13("ped_law", 1);
			Function_11(&(Global_46972[2]), 465, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 462, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 464, 8.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_14(&(Global_46972[2]));
			Global_46972[2] = Function_13("ped_law", 1);
			Function_11(&(Global_46972[2]), 516, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 521, 8.0f, 0, 0);
			Function_11(&(Global_46972[2]), 518, 8.0f, 0, 0);
			break;
	}
	Function_14(&(Global_46972[3]));
	Global_46972[3] = Function_13("ped_bad_guys_local", 1);
	Function_11(&(Global_46972[3]), 496, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 497, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 498, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 499, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 500, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 501, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 502, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 503, 10.0f, 0, 0);
	Function_11(&(Global_46972[3]), 504, 10.0f, 0, 0);
	Function_14(&(Global_46972[4]));
	Global_46972[4] = Function_13("ped_bad_guys_generic", 1);
	Function_11(&(Global_46972[4]), 407, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 406, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 408, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 409, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 410, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 411, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 412, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 413, 10.0f, 0, 0);
	Function_11(&(Global_46972[4]), 414, 10.0f, 0, 0);
	Function_14(&(Global_46972[9]));
	Global_46972[9] = Function_13("ped_vehicle", 1);
	Function_11(&(Global_46972[9]), 1185, 1.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1184, 1.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_11(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	while (!Function_6(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
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
	uVar15 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (IS_LAYOUTREF_VALID(&uVar15))
	{
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "dzcv_flk_CENTER_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			uVar17 = Function_3(&uVar16, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar17, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar17, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar17, 3);
			uVar18 = Function_3(&uVar16, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar18, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar18, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar18, 4);
			uVar19 = Function_3(&uVar16, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar19, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar19, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar19, 2);
			uVar20 = Function_3(&uVar16, &bVar3, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar20, 3);
			uVar21 = Function_3(&uVar16, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar21, 2);
			uVar22 = Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar22, 2);
			uVar23 = Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar23, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find dzcv_flk_CENTER_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "dzcv_flk_SOUTH_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			uVar24 = Function_3(&uVar16, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar24, 3);
			uVar25 = Function_3(&uVar16, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar25, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar25, 4);
			uVar26 = Function_3(&uVar16, &bVar6, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar26, 3);
			uVar27 = Function_3(&uVar16, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar27, 7);
			uVar28 = Function_3(&uVar16, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar28, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar28, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar28, 2);
			uVar29 = Function_3(&uVar16, &bVar3, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar29, 3);
			uVar30 = Function_3(&uVar16, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar30, 2);
			uVar31 = Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar31, 2);
			uVar32 = Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar32, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find dzcv_flk_SE_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "dzcv_flk_NORTH_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			uVar33 = Function_3(&uVar16, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar33, 4);
			uVar34 = Function_3(&uVar16, &bVar1, 2,7E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar34, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar34, 5);
			uVar35 = Function_3(&uVar16, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar35, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar35, 7);
			uVar36 = Function_3(&uVar16, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar36, 3);
			uVar37 = Function_3(&uVar16, &bVar3, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar37, 4);
			uVar38 = Function_3(&uVar16, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar38, 1);
			uVar39 = Function_3(&uVar16, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar39, 2);
			uVar40 = Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar40, 2);
			uVar41 = Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar41, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find dzcv_flk_NW_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "dzcv_flk_BIRD_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_3(&uVar16, &bVar10, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar11, 9E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar12, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar13, 0,00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find dzcv_flk_BIRD_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "dzcv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_3(&uVar16, &bVar4, 0,00024f, 0, 0, 1);
			Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar0, 4,5E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("dzc_pop: Cannot find dzcv_aquaticWildlife_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("dzc_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_6(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_5("Finished loading Diez Coronas population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x19DF / 6623
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x19F0 / 6640
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

var Function_3(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1A48 / 6728
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

bool Function_4(int iParam0) //Position: 0x1AD8 / 6872
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0x1AF4 / 6900
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

bool Function_6(var uParam0, int iParam1) //Position: 0x1B34 / 6964
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x1B51 / 6993
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1B62 / 7010
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_10(iParam3), Function_9(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x1BE0 / 7136
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

var Function_10(int iParam0) //Position: 0x1C4C / 7244
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

var Function_11(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1CB8 / 7352
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

var Function_12(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1D3A / 7482
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_11(&uParam0, iParam1, fParam2, iParam3, 0);
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

var Function_13(var uParam0, int iParam1) //Position: 0x1D81 / 7553
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_14(int iParam0) //Position: 0x1D90 / 7568
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_15(char* cParam0) //Position: 0x1D9D / 7581
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

