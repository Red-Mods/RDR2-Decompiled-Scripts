//Decompiled with MagicRDR v1.0
//Function Count : 17
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	var uVar15;
	struct<2> Var16;
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
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_16("Loading Perdido population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_15(&(Global_46972[6]));
	Global_46972[6] = Function_14("animal_horse", 4);
	Function_13(&(Global_46972[6]), 1000, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 1001, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 1002, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 996, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 997, 100.0f, 0, 3);
	Function_13(&(Global_46972[6]), 998, 100.0f, 0, 3);
	Function_15(&(Global_46972[15]));
	Global_46972[15] = Function_14("animal_horse_unsaddled", 0);
	Function_12(&(Global_46972[15]), 1000, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 1001, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 1002, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 996, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 997, 100.0f, 0, 0);
	Function_12(&(Global_46972[15]), 998, 100.0f, 0, 0);
	Function_15(&(Global_46972[0]));
	Global_46972[0] = Function_14("ped_wilderness", Global_47149);
	Function_12(&(Global_46972[0]), 239, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 240, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 241, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 292, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 295, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 297, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 269, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 270, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 271, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 272, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 278, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 279, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 280, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 281, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 282, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 284, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 306, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 317, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 322, 2.0f, 0, 0);
	Function_12(&(Global_46972[0]), 323, 2.0f, 0, 0);
	Function_15(&(Global_46972[1]));
	Global_46972[1] = Function_14("ped_traveller", 3);
	Function_12(&(Global_46972[1]), 63, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 62, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 253, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 263, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 265, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 275, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 302, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 303, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 311, 10.0f, 0, 0);
	Function_12(&(Global_46972[1]), 318, 10.0f, 0, 0);
	Function_15(&(Global_46972[5]));
	Global_46972[5] = Function_14("animal_wilderness", 1);
	Function_12(&(Global_46972[5]), 1081, 3.0f, 0, 0);
	Function_9(&(Global_46972[5]), 1059, 2.0f, 14, 1, 0);
	bVar0 = Function_14("critter_pop", 0);
	Function_12(&bVar0, 1059, 1.0f, 0, 0);
	Function_15(&(Global_46972[10]));
	Global_46972[10] = Function_14("animal_hunt", 1);
	Function_12(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1051, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1120, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1065, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1066, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1067, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1113, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1113, 2.0f, 0, 0);
	Function_12(&(Global_46972[10]), 1112, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]));
	Global_46972[11] = Function_14("animal_predator", 1);
	Function_12(&(Global_46972[11]), 1065, 2.0f, 0, 0);
	Function_12(&(Global_46972[11]), 1066, 2.0f, 0, 0);
	Function_12(&(Global_46972[11]), 1067, 2.0f, 0, 0);
	Function_12(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_12(&(Global_46972[11]), 1113, 2.0f, 0, 0);
	Function_12(&(Global_46972[11]), 1112, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]));
	Global_46972[13] = Function_14("animal_hunted", 0);
	Function_12(&(Global_46972[13]), 1065, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1066, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1067, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1120, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1117, 2.0f, 0, 0);
	Function_12(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_15(&(Global_46972[12]));
	Global_46972[12] = Function_14("animal_prey", 0);
	Function_12(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1026, 4.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1027, 4.0f, 0, 0);
	Function_12(&(Global_46972[12]), 1028, 4.0f, 0, 0);
	Function_15(&(Global_46972[8]));
	Global_46972[8] = Function_14("animal_herd", 1);
	Function_12(&(Global_46972[8]), 1026, 10.0f, 0, 0);
	Function_12(&(Global_46972[8]), 1027, 10.0f, 0, 0);
	Function_12(&(Global_46972[8]), 1028, 10.0f, 0, 0);
	bVar1 = Function_14("coyote_den", 0);
	Function_12(&bVar1, 1050, 4.0f, 0, 0);
	Function_12(&bVar1, 1050, 4.0f, 0, 0);
	Function_12(&bVar1, 1051, 4.0f, 0, 0);
	Function_12(&bVar1, 1052, 4.0f, 0, 0);
	Function_12(&bVar1, 1052, 4.0f, 0, 0);
	bVar2 = Function_14("cougar_pop", 0);
	Function_12(&bVar2, 1113, 4.0f, 0, 0);
	Function_12(&bVar2, 1113, 4.0f, 0, 0);
	Function_12(&bVar2, 1112, 4.0f, 0, 0);
	bVar3 = Function_14("animal_duck", 0);
	Function_12(&bVar3, 1140, 100.0f, 0, 0);
	Function_12(&bVar3, 1140, 100.0f, 0, 0);
	Function_12(&bVar3, 1140, 100.0f, 0, 0);
	bVar4 = Function_14("deer_pop", 0);
	Function_12(&bVar4, 1119, 4.0f, 0, 0);
	Function_12(&bVar4, 1119, 4.0f, 0, 0);
	Function_12(&bVar4, 1120, 4.0f, 0, 0);
	bVar5 = Function_14("wolf_pop", 0);
	Function_12(&bVar5, 1065, 4.0f, 0, 0);
	Function_12(&bVar5, 1066, 4.0f, 0, 0);
	Function_12(&bVar5, 1067, 4.0f, 0, 0);
	bVar6 = Function_14("fox_pop", 0);
	Function_12(&bVar6, 1026, 4.0f, 0, 0);
	Function_12(&bVar6, 1027, 4.0f, 0, 0);
	Function_12(&bVar6, 1028, 4.0f, 0, 0);
	bVar7 = Function_14("rabbit_pop", 0);
	Function_12(&bVar7, 1078, 4.0f, 0, 0);
	Function_12(&bVar7, 1078, 4.0f, 0, 0);
	Function_12(&bVar7, 1078, 4.0f, 0, 0);
	bVar8 = Function_14("armadillo_pop", 0);
	Function_12(&bVar8, 1081, 4.0f, 0, 0);
	Function_12(&bVar8, 1081, 4.0f, 0, 0);
	Function_12(&bVar8, 1081, 4.0f, 0, 0);
	bVar9 = Function_14("nnight_pop", 0);
	Function_9(&bVar9, 1084, 4.0f, 49, 0, 0);
	Function_15(&(Global_46972[7]));
	Global_46972[7] = Function_14("animal_bird", 1);
	Function_9(&(Global_46972[7]), 1128, 6.0f, 15, 0, 0);
	Function_9(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_9(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_9(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_9(&(Global_46972[7]), 1145, 6.0f, 14, 0, 0);
	Function_9(&(Global_46972[7]), 1137, 6.0f, 33, 0, 0);
	bVar10 = Function_14("hawk", 0);
	Function_9(&bVar10, 1145, 3.0f, 15, 0, 0);
	bVar11 = Function_14("vulture", 0);
	Function_9(&bVar11, 1131, 6.0f, 14, 0, 0);
	bVar12 = Function_14("nsmallbird", 0);
	Function_9(&bVar12, 1135, 2.0f, 15, 0, 0);
	Function_9(&bVar12, 1136, 2.0f, 15, 0, 0);
	Function_9(&bVar12, 1136, 2.0f, 15, 0, 0);
	Function_9(&bVar12, 1137, 2.0f, 33, 0, 0);
	Function_15(&(Global_46972[14]));
	Global_46972[14] = Function_14("birds_trees", 1);
	Function_12(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_12(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_12(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	uVar13 = Function_14("chickens", 0);
	Function_9(&uVar13, 1015, 100.0f, 15, 0, 0);
	Function_9(&uVar13, 1017, 100.0f, 15, 0, 0);
	bVar14 = Function_14("wildHorses", 0);
	Function_12(&bVar14, 982, 24.0f, 0, 0);
	Function_12(&bVar14, 983, 8.0f, 0, 0);
	Function_12(&bVar14, 984, 8.0f, 0, 0);
	Function_12(&bVar14, 985, 8.0f, 0, 0);
	Function_12(&bVar14, 986, 8.0f, 0, 0);
	Function_12(&bVar14, 987, 8.0f, 0, 0);
	Function_12(&bVar14, 996, 8.0f, 0, 0);
	Function_12(&bVar14, 997, 8.0f, 0, 0);
	Function_8(&(Global_46972[5]), 9E-05f);
	uVar15 = Function_14("chuparosa_prestream", 0);
	Function_9(&uVar15, 263, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 321, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 322, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 323, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 285, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 287, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 304, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 320, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 311, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 284, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 292, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 293, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 275, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 278, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 279, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 313, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 253, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 240, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 241, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 317, 100.0f, 15, 0, 0);
	Function_9(&uVar15, 318, 100.0f, 15, 0, 0);
	Var16 = Vector(-2695,956f, 31,296f, 4260,416f);
	AMBIENT_SPAWN_PRESTREAM_SET(&uVar15, Var16, 450.0f, 10);
	switch (Global_46720)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Function_15(&(Global_46972[2]));
			Global_46972[2] = Function_14("ped_law", 1);
			Function_12(&(Global_46972[2]), 465, 8.0f, 0, 0);
			Function_12(&(Global_46972[2]), 462, 8.0f, 0, 0);
			Function_12(&(Global_46972[2]), 464, 8.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_15(&(Global_46972[2]));
			Global_46972[2] = Function_14("ped_law", 1);
			Function_12(&(Global_46972[2]), 516, 8.0f, 0, 0);
			Function_12(&(Global_46972[2]), 521, 8.0f, 0, 0);
			Function_12(&(Global_46972[2]), 518, 8.0f, 0, 0);
			break;
	}
	Function_15(&(Global_46972[3]));
	Global_46972[3] = Function_14("ped_bad_guys_local", 1);
	Function_12(&(Global_46972[3]), 496, 10.0f, 0, 0);
	Function_12(&(Global_46972[3]), 497, 10.0f, 0, 0);
	Function_12(&(Global_46972[3]), 498, 10.0f, 0, 0);
	Function_12(&(Global_46972[3]), 499, 4.0f, 0, 0);
	Function_12(&(Global_46972[3]), 500, 4.0f, 0, 0);
	Function_12(&(Global_46972[3]), 501, 4.0f, 0, 0);
	Function_12(&(Global_46972[3]), 502, 1.0f, 0, 0);
	Function_12(&(Global_46972[3]), 503, 1.0f, 0, 0);
	Function_12(&(Global_46972[3]), 504, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]));
	Global_46972[4] = Function_14("ped_bad_guys_generic", 1);
	Function_12(&(Global_46972[4]), 407, 10.0f, 0, 0);
	Function_12(&(Global_46972[4]), 406, 10.0f, 0, 0);
	Function_12(&(Global_46972[4]), 408, 10.0f, 0, 0);
	Function_12(&(Global_46972[4]), 409, 4.0f, 0, 0);
	Function_12(&(Global_46972[4]), 410, 4.0f, 0, 0);
	Function_12(&(Global_46972[4]), 411, 4.0f, 0, 0);
	Function_12(&(Global_46972[4]), 412, 1.0f, 0, 0);
	Function_12(&(Global_46972[4]), 413, 1.0f, 0, 0);
	Function_12(&(Global_46972[4]), 414, 1.0f, 0, 0);
	Function_15(&(Global_46972[9]));
	Global_46972[9] = Function_14("ped_vehicle", 1);
	Function_12(&(Global_46972[9]), 1185, 2.0f, 0, 0);
	Function_12(&(Global_46972[9]), 1184, 2.0f, 0, 0);
	Function_12(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_12(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_12(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_12(&(Global_46972[9]), 1201, 2.0f, 0, 0);
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
	uVar18 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (IS_LAYOUTREF_VALID(&uVar18))
	{
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "prdv_flk_CENTER_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			uVar20 = Function_4(&uVar19, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar20, 4);
			uVar21 = Function_4(&uVar19, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar21, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar21, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar21, 3);
			uVar22 = Function_4(&uVar19, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar22, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar22, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar22, 3);
			uVar23 = Function_4(&uVar19, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar23, 3);
			uVar24 = Function_4(&uVar19, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar24, 2);
			uVar25 = Function_4(&uVar19, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar25, 2);
			uVar26 = Function_4(&uVar19, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar26, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_CENTER_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "prdv_flk_SOUTH_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			uVar27 = Function_4(&uVar19, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar27, 4);
			Function_4(&uVar19, &bVar2, 1,5E-05f, 0, 0, 1);
			uVar28 = Function_4(&uVar19, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar28, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar28, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar28, 3);
			uVar29 = Function_4(&uVar19, &bVar6, 3E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar29, 3);
			uVar30 = Function_4(&uVar19, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar30, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar30, 5);
			uVar31 = Function_4(&uVar19, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar31, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar31, 3);
			uVar32 = Function_4(&uVar19, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar32, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar32, 3);
			uVar33 = Function_4(&uVar19, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar33, 2);
			uVar34 = Function_4(&uVar19, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar34, 2);
			uVar35 = Function_4(&uVar19, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar35, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_SE_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "prdv_flk_NORTH_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			uVar36 = Function_4(&uVar19, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar36, 4);
			uVar37 = Function_4(&uVar19, &bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar37, 4);
			uVar38 = Function_4(&uVar19, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar38, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar38, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar38, 6);
			uVar39 = Function_4(&uVar19, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar39, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar39, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar39, 3);
			uVar40 = Function_4(&uVar19, &bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar40, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar40, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar40, 4);
			uVar41 = Function_4(&uVar19, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar41, 1);
			uVar42 = Function_4(&uVar19, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar42, 2);
			uVar43 = Function_4(&uVar19, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar43, 2);
			uVar44 = Function_4(&uVar19, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar44, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_NW_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "prdv_flk_BIRD_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			Function_4(&uVar19, &bVar10, 8E-05f, 0, 0, 1);
			Function_4(&uVar19, &bVar11, 8E-05f, 0, 0, 1);
			Function_4(&uVar19, &bVar12, 8E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_BIRD_set to create population volumes");
		}
		uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "prdv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar19))
		{
			Function_4(&uVar19, &bVar3, 6E-05f, 0, 0, 1);
			Function_4(&uVar19, &bVar8, 6E-05f, 0, 0, 1);
			Function_4(&uVar19, &bVar9, 6E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find prdv_aquaticWildlife_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("prd_pop: Cannot find one of the volumes to create population volumes");
	}
	uVar19 = FIND_VOLUME_IN_LAYOUT(&uVar18, "prdv_chickens_set");
	if (IS_VOLUME_VALID(&uVar19))
	{
		Function_3(&uVar19, &uVar13, 1, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("prd_pop: Cannot find prdv_chickens to create chickens");
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
	Function_6("Finished loading Perdido population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1B22 / 6946
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1B33 / 6963
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

var Function_3(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1B8B / 7051
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, bParam2);
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

var Function_4(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1C1B / 7195
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

bool Function_5(int iParam0) //Position: 0x1CAB / 7339
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(char* cParam0) //Position: 0x1CC7 / 7367
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

bool Function_7(var uParam0, int iParam1) //Position: 0x1D07 / 7431
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x1D24 / 7460
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_9(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1D35 / 7477
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_11(iParam3), Function_10(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_10(int iParam0) //Position: 0x1DB3 / 7603
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_11(int iParam0) //Position: 0x1E1F / 7711
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_12(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1E8B / 7819
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

var Function_13(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1F0D / 7949
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_12(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_14(var uParam0, int iParam1) //Position: 0x1F54 / 8020
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_15(int iParam0) //Position: 0x1F63 / 8035
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_16(char* cParam0) //Position: 0x1F70 / 8048
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

