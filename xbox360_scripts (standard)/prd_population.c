//Decompiled with MagicRDR v1.0
//Function Count : 18
//Statics Count : 4
//Natives Count : 47
//Parameters Count : 2

#region Local Var
	struct<2> Local_0 = { 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
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
	vector3 vVar16;
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
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_17("Loading Perdido population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	Function_16(&(Global_30750[6]));
	Global_30750[6] = Function_15("animal_horse", 4);
	Function_14(&(Global_30750[6]), 1000, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 1001, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 1002, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 976, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 980, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 996, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 997, 100.0f, 0, 3);
	Function_14(&(Global_30750[6]), 998, 100.0f, 0, 3);
	Function_16(&(Global_30750[15]));
	Global_30750[15] = Function_15("animal_horse_unsaddled", 0);
	Function_13(&(Global_30750[15]), 1000, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 1001, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 1002, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 976, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 980, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 996, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 997, 100.0f, 0, 0);
	Function_13(&(Global_30750[15]), 998, 100.0f, 0, 0);
	Function_16(&(Global_30750[0]));
	Global_30750[0] = Function_15("ped_wilderness", Global_30840);
	Function_13(&(Global_30750[0]), 239, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 240, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 241, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 292, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 295, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 297, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 269, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 270, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 271, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 272, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 278, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 279, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 280, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 281, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 282, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 284, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 306, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 317, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 322, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]), 323, 2.0f, 0, 0);
	Function_16(&(Global_30750[1]));
	Global_30750[1] = Function_15("ped_traveller", 3);
	Function_13(&(Global_30750[1]), 63, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 62, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 253, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 263, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 265, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 275, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 302, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 303, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 311, 10.0f, 0, 0);
	Function_13(&(Global_30750[1]), 318, 10.0f, 0, 0);
	Function_16(&(Global_30750[5]));
	Global_30750[5] = Function_15("animal_wilderness", 1);
	Function_13(&(Global_30750[5]), 1081, 3.0f, 0, 0);
	Function_10(&(Global_30750[5]), 1059, 2.0f, 14, 1, 0);
	bVar0 = Function_15("critter_pop", 0);
	Function_13(&bVar0, 1059, 1.0f, 0, 0);
	Function_16(&(Global_30750[10]));
	Global_30750[10] = Function_15("animal_hunt", 1);
	Function_13(&(Global_30750[10]), 1050, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1050, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1051, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1052, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1052, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1119, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1119, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1120, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1065, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1066, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1067, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_30750[10]), 1112, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]));
	Global_30750[11] = Function_15("animal_predator", 1);
	Function_13(&(Global_30750[11]), 1065, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1066, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1067, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1113, 2.0f, 0, 0);
	Function_13(&(Global_30750[11]), 1112, 2.0f, 0, 0);
	Function_16(&(Global_30750[13]));
	Global_30750[13] = Function_15("animal_hunted", 0);
	Function_13(&(Global_30750[13]), 1065, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1066, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1067, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1119, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1119, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1120, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1116, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1117, 2.0f, 0, 0);
	Function_13(&(Global_30750[13]), 1116, 2.0f, 0, 0);
	Function_16(&(Global_30750[12]));
	Global_30750[12] = Function_15("animal_prey", 0);
	Function_13(&(Global_30750[12]), 1119, 3.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1119, 3.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1120, 3.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1116, 3.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1117, 3.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1116, 3.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1078, 7.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1026, 4.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1027, 4.0f, 0, 0);
	Function_13(&(Global_30750[12]), 1028, 4.0f, 0, 0);
	Function_16(&(Global_30750[8]));
	Global_30750[8] = Function_15("animal_herd", 1);
	Function_13(&(Global_30750[8]), 1026, 10.0f, 0, 0);
	Function_13(&(Global_30750[8]), 1027, 10.0f, 0, 0);
	Function_13(&(Global_30750[8]), 1028, 10.0f, 0, 0);
	bVar1 = Function_15("coyote_den", 0);
	Function_13(&bVar1, 1050, 4.0f, 0, 0);
	Function_13(&bVar1, 1050, 4.0f, 0, 0);
	Function_13(&bVar1, 1051, 4.0f, 0, 0);
	Function_13(&bVar1, 1052, 4.0f, 0, 0);
	Function_13(&bVar1, 1052, 4.0f, 0, 0);
	bVar2 = Function_15("cougar_pop", 0);
	Function_13(&bVar2, 1113, 4.0f, 0, 0);
	Function_13(&bVar2, 1113, 4.0f, 0, 0);
	Function_13(&bVar2, 1112, 4.0f, 0, 0);
	bVar3 = Function_15("animal_duck", 0);
	Function_13(&bVar3, 1140, 100.0f, 0, 0);
	Function_13(&bVar3, 1140, 100.0f, 0, 0);
	Function_13(&bVar3, 1140, 100.0f, 0, 0);
	bVar4 = Function_15("deer_pop", 0);
	Function_13(&bVar4, 1119, 4.0f, 0, 0);
	Function_13(&bVar4, 1119, 4.0f, 0, 0);
	Function_13(&bVar4, 1120, 4.0f, 0, 0);
	bVar5 = Function_15("wolf_pop", 0);
	Function_13(&bVar5, 1065, 4.0f, 0, 0);
	Function_13(&bVar5, 1066, 4.0f, 0, 0);
	Function_13(&bVar5, 1067, 4.0f, 0, 0);
	bVar6 = Function_15("fox_pop", 0);
	Function_13(&bVar6, 1026, 4.0f, 0, 0);
	Function_13(&bVar6, 1027, 4.0f, 0, 0);
	Function_13(&bVar6, 1028, 4.0f, 0, 0);
	bVar7 = Function_15("rabbit_pop", 0);
	Function_13(&bVar7, 1078, 4.0f, 0, 0);
	Function_13(&bVar7, 1078, 4.0f, 0, 0);
	Function_13(&bVar7, 1078, 4.0f, 0, 0);
	bVar8 = Function_15("armadillo_pop", 0);
	Function_13(&bVar8, 1081, 4.0f, 0, 0);
	Function_13(&bVar8, 1081, 4.0f, 0, 0);
	Function_13(&bVar8, 1081, 4.0f, 0, 0);
	bVar9 = Function_15("nnight_pop", 0);
	Function_10(&bVar9, 1084, 4.0f, 49, 0, 0);
	Function_16(&(Global_30750[7]));
	Global_30750[7] = Function_15("animal_bird", 1);
	Function_10(&(Global_30750[7]), 1128, 6.0f, 15, 0, 0);
	Function_10(&(Global_30750[7]), 1135, 2.0f, 14, 0, 0);
	Function_10(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_10(&(Global_30750[7]), 1136, 2.0f, 14, 0, 0);
	Function_10(&(Global_30750[7]), 1145, 6.0f, 14, 0, 0);
	Function_10(&(Global_30750[7]), 1137, 6.0f, 33, 0, 0);
	bVar10 = Function_15("hawk", 0);
	Function_10(&bVar10, 1145, 3.0f, 15, 0, 0);
	bVar11 = Function_15("vulture", 0);
	Function_10(&bVar11, 1131, 6.0f, 14, 0, 0);
	bVar12 = Function_15("nsmallbird", 0);
	Function_10(&bVar12, 1135, 2.0f, 15, 0, 0);
	Function_10(&bVar12, 1136, 2.0f, 15, 0, 0);
	Function_10(&bVar12, 1136, 2.0f, 15, 0, 0);
	Function_10(&bVar12, 1137, 2.0f, 33, 0, 0);
	Function_16(&(Global_30750[14]));
	Global_30750[14] = Function_15("birds_trees", 1);
	Function_13(&(Global_30750[14]), 1135, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	Function_13(&(Global_30750[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar13 = Function_15("chickens", 0);
	Function_10(&uVar13, 1015, 100.0f, 15, 0, 0);
	Function_10(&uVar13, 1017, 100.0f, 15, 0, 0);
	bVar14 = Function_15("wildHorses", 0);
	Function_13(&bVar14, 982, 24.0f, 0, 0);
	Function_13(&bVar14, 983, 8.0f, 0, 0);
	Function_13(&bVar14, 984, 8.0f, 0, 0);
	Function_13(&bVar14, 985, 8.0f, 0, 0);
	Function_13(&bVar14, 986, 8.0f, 0, 0);
	Function_13(&bVar14, 987, 8.0f, 0, 0);
	Function_13(&bVar14, 996, 8.0f, 0, 0);
	Function_13(&bVar14, 997, 8.0f, 0, 0);
	Function_9(Global_30750[5], 9E-05f);
	uVar15 = Function_15("chuparosa_prestream", 0);
	Function_10(&uVar15, 263, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 321, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 322, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 323, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 285, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 287, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 304, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 320, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 311, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 284, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 292, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 293, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 275, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 278, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 279, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 313, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 253, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 240, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 241, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 317, 100.0f, 15, 0, 0);
	Function_10(&uVar15, 318, 100.0f, 15, 0, 0);
	vVar16 = { -2695,956f, 31,296f, 4260,416f };
	AMBIENT_SPAWN_PRESTREAM_SET(uVar15, vVar16, 450.0f, 10);
	switch (Global_30619)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Function_16(&(Global_30750[2]));
			Global_30750[2] = Function_15("ped_law", 1);
			Function_13(&(Global_30750[2]), 465, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 462, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 464, 8.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_16(&(Global_30750[2]));
			Global_30750[2] = Function_15("ped_law", 1);
			Function_13(&(Global_30750[2]), 516, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 521, 8.0f, 0, 0);
			Function_13(&(Global_30750[2]), 518, 8.0f, 0, 0);
			break;
	}
	Function_16(&(Global_30750[3]));
	Global_30750[3] = Function_15("ped_bad_guys_local", 1);
	Function_13(&(Global_30750[3]), 496, 10.0f, 0, 0);
	Function_13(&(Global_30750[3]), 497, 10.0f, 0, 0);
	Function_13(&(Global_30750[3]), 498, 10.0f, 0, 0);
	Function_13(&(Global_30750[3]), 499, 4.0f, 0, 0);
	Function_13(&(Global_30750[3]), 500, 4.0f, 0, 0);
	Function_13(&(Global_30750[3]), 501, 4.0f, 0, 0);
	Function_13(&(Global_30750[3]), 502, 1.0f, 0, 0);
	Function_13(&(Global_30750[3]), 503, 1.0f, 0, 0);
	Function_13(&(Global_30750[3]), 504, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]));
	Global_30750[4] = Function_15("ped_bad_guys_generic", 1);
	Function_13(&(Global_30750[4]), 407, 10.0f, 0, 0);
	Function_13(&(Global_30750[4]), 406, 10.0f, 0, 0);
	Function_13(&(Global_30750[4]), 408, 10.0f, 0, 0);
	Function_13(&(Global_30750[4]), 409, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 410, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 411, 4.0f, 0, 0);
	Function_13(&(Global_30750[4]), 412, 1.0f, 0, 0);
	Function_13(&(Global_30750[4]), 413, 1.0f, 0, 0);
	Function_13(&(Global_30750[4]), 414, 1.0f, 0, 0);
	Function_16(&(Global_30750[9]));
	Global_30750[9] = Function_15("ped_vehicle", 1);
	Function_13(&(Global_30750[9]), 1185, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1184, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1201, 2.0f, 0, 0);
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
	bVar19 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (IS_LAYOUTREF_VALID(bVar19))
	{
		bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "prdv_flk_CENTER_set");
		if (IS_VOLUME_VALID(bVar20))
		{
			if (!Function_5())
			{
				uVar21 = Function_4(bVar20, bVar14, 1,5E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar21, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar21, 1);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar21, 4);
			}
			uVar22 = Function_4(bVar20, bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar22, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar22, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar22, 3);
			uVar23 = Function_4(bVar20, bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar23, 3);
			uVar24 = Function_4(bVar20, bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar24, 3);
			uVar25 = Function_4(bVar20, bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar25, 2);
			uVar26 = Function_4(bVar20, bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar26, 2);
			uVar27 = Function_4(bVar20, bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar27, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_CENTER_set to create population volumes");
		}
		bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "prdv_flk_SOUTH_set");
		if (IS_VOLUME_VALID(bVar20))
		{
			if (!Function_5())
			{
				uVar28 = Function_4(bVar20, bVar14, 1,5E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar28, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar28, 1);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar28, 4);
			}
			Function_4(bVar20, bVar2, 1,5E-05f, 0, 0, 1);
			uVar29 = Function_4(bVar20, bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar29, 3);
			uVar30 = Function_4(bVar20, bVar6, 3E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar30, 3);
			uVar31 = Function_4(bVar20, bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar31, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar31, 5);
			uVar32 = Function_4(bVar20, bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar32, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar32, 3);
			uVar33 = Function_4(bVar20, bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar33, 3);
			uVar34 = Function_4(bVar20, bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar34, 2);
			uVar35 = Function_4(bVar20, bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar35, 2);
			uVar36 = Function_4(bVar20, bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar36, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_SE_set to create population volumes");
		}
		bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "prdv_flk_NORTH_set");
		if (IS_VOLUME_VALID(bVar20))
		{
			if (!Function_5())
			{
				uVar37 = Function_4(bVar20, bVar14, 1,5E-05f, 0, 1, 1);
				SET_ZONE_POPULATION_IS_FLOCK(uVar37, 1);
				SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar37, 1);
				SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar37, 4);
			}
			uVar38 = Function_4(bVar20, bVar1, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar38, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar38, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar38, 4);
			uVar39 = Function_4(bVar20, bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar39, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar39, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar39, 6);
			uVar40 = Function_4(bVar20, bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar40, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar40, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar40, 3);
			uVar41 = Function_4(bVar20, bVar4, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar41, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar41, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar41, 4);
			uVar42 = Function_4(bVar20, bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar42, 1);
			uVar43 = Function_4(bVar20, bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar43, 2);
			uVar44 = Function_4(bVar20, bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar44, 2);
			uVar45 = Function_4(bVar20, bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(uVar45, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_NW_set to create population volumes");
		}
		bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "prdv_flk_BIRD_set");
		if (IS_VOLUME_VALID(bVar20))
		{
			Function_4(bVar20, bVar10, 8E-05f, 0, 0, 1);
			Function_4(bVar20, bVar11, 8E-05f, 0, 0, 1);
			Function_4(bVar20, bVar12, 8E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_BIRD_set to create population volumes");
		}
		bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "prdv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(bVar20))
		{
			Function_4(bVar20, bVar3, 6E-05f, 0, 0, 1);
			Function_4(bVar20, bVar8, 6E-05f, 0, 0, 1);
			Function_4(bVar20, bVar9, 6E-05f, 0, 0, 1);
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
	bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "prdv_chickens_set");
	if (IS_VOLUME_VALID(bVar20))
	{
		Function_3(bVar20, uVar13, 1, 1, 0, 1);
	}
	else
	{
		LOG_ERROR("prd_pop: Cannot find prdv_chickens to create chickens");
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
	Function_7("Finished loading Perdido population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1A6D / 6765
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1A7C / 6780
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

var Function_3(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1AD1 / 6865
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

var Function_4(bool bParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1B51 / 6993
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

bool Function_5() //Position: 0x1BD1 / 7121
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_6(int iParam0) //Position: 0x1BDA / 7130
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(bool bParam0, float fParam1) //Position: 0x1BF6 / 7158
{
	if (!Function_6(128))
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

bool Function_8(var uParam0, int iParam1) //Position: 0x1C34 / 7220
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x1C50 / 7248
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_10(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1C60 / 7264
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_12(iParam3), Function_11(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_11(int iParam0) //Position: 0x1CC2 / 7362
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

var Function_12(int iParam0) //Position: 0x1D2E / 7470
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

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1D9A / 7578
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

var Function_14(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1E0F / 7695
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_15(bool bParam0, int iParam1) //Position: 0x1E54 / 7764
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_16(int iParam0) //Position: 0x1E61 / 7777
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

void Function_17(bool bParam0, var uParam1) //Position: 0x1E6D / 7789
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

