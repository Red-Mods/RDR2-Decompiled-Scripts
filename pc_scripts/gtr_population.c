//Decompiled with MagicRDR v1.0
//Function Count : 20
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
	var uVar42;
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_19("Loading Gaptooth Ridge population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_18(&(Global_46972[6]));
	Global_46972[6] = Function_17("animal_horse", 4);
	Function_16(&(Global_46972[6]), 977, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 980, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_18(&(Global_46972[15]));
	Global_46972[15] = Function_17("animal_horse_unsaddled", 0);
	Function_15(&(Global_46972[15]), 977, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 980, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 991, 100.0f, 0, 0);
	Function_18(&(Global_46972[0]));
	Global_46972[0] = Function_17("ped_wilderness", Global_47149);
	Function_15(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 39, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 51, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 175, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 174, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 178, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 153, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 173, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 199, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 56, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 50, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 202, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 54, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 53, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 33, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 34, 10.0f, 0, 0);
	Function_18(&(Global_46972[1]));
	Global_46972[1] = Function_17("ped_traveller", 3);
	Function_15(&(Global_46972[1]), 64, 10.0f, 0, 0);
	Function_15(&(Global_46972[1]), 74, 10.0f, 0, 0);
	Function_15(&(Global_46972[1]), 48, 10.0f, 0, 0);
	Function_15(&(Global_46972[1]), 73, 10.0f, 0, 0);
	Function_15(&(Global_46972[1]), 78, 10.0f, 0, 0);
	Function_15(&(Global_46972[1]), 49, 10.0f, 0, 0);
	Function_18(&(Global_46972[5]));
	Global_46972[5] = Function_17("animal_wilderness", 1);
	Function_12(&(Global_46972[5]), 1057, 1.0f, 15, 0, 0);
	bVar0 = Function_17("critter_pop", 0);
	Function_12(&bVar0, 1057, 2.0f, 14, 1, 0);
	bVar1 = Function_17("armadillo_pop", 0);
	Function_15(&bVar1, 1081, 4.0f, 0, 0);
	Function_15(&bVar1, 1081, 4.0f, 0, 0);
	Function_15(&bVar1, 1081, 4.0f, 0, 0);
	Function_18(&(Global_46972[10]));
	Global_46972[10] = Function_17("animal_hunt", 1);
	Function_15(&(Global_46972[10]), 1088, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1089, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1090, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1050, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1051, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1052, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1119, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1120, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1117, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1116, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1061, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1062, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1063, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1054, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1055, 2.0f, 0, 0);
	Function_15(&(Global_46972[10]), 1056, 2.0f, 0, 0);
	Function_18(&(Global_46972[11]));
	Global_46972[11] = Function_17("animal_predator", 1);
	Function_15(&(Global_46972[11]), 1088, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1089, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1090, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1061, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1062, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1063, 2.0f, 0, 0);
	Function_18(&(Global_46972[13]));
	Global_46972[13] = Function_17("animal_hunted", 0);
	Function_15(&(Global_46972[13]), 1061, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1062, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1063, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1120, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1117, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_18(&(Global_46972[12]));
	Global_46972[12] = Function_17("animal_prey", 0);
	Function_15(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_18(&(Global_46972[8]));
	Global_46972[8] = Function_17("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1013, 10.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1014, 10.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1008, 10.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1009, 10.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1010, 10.0f, 0, 0);
	Function_15(&(Global_46972[8]), 1011, 10.0f, 0, 0);
	bVar2 = Function_17("coyote_pop", 0);
	Function_15(&bVar2, 1050, 4.0f, 0, 0);
	Function_15(&bVar2, 1050, 4.0f, 0, 0);
	Function_15(&bVar2, 1051, 4.0f, 0, 0);
	Function_15(&bVar2, 1052, 4.0f, 0, 0);
	Function_15(&bVar2, 1052, 4.0f, 0, 0);
	bVar3 = Function_17("cougar_pop", 0);
	Function_15(&bVar3, 1088, 4.0f, 0, 0);
	Function_15(&bVar3, 1089, 4.0f, 0, 0);
	Function_15(&bVar3, 1090, 4.0f, 0, 0);
	bVar4 = Function_17("deer_pop", 0);
	Function_15(&bVar4, 1119, 4.0f, 0, 0);
	Function_15(&bVar4, 1119, 4.0f, 0, 0);
	Function_15(&bVar4, 1120, 4.0f, 0, 0);
	Function_15(&bVar4, 1116, 1.0f, 0, 0);
	Function_15(&bVar4, 1117, 1.0f, 0, 0);
	Function_15(&bVar4, 1116, 1.0f, 0, 0);
	bVar5 = Function_17("elk_pop", 0);
	Function_15(&bVar5, 1110, 4.0f, 0, 0);
	Function_15(&bVar5, 1111, 4.0f, 0, 0);
	Function_15(&bVar5, 1111, 4.0f, 0, 0);
	bVar6 = Function_17("wolf_pop", 0);
	Function_15(&bVar6, 1061, 4.0f, 0, 0);
	Function_15(&bVar6, 1062, 4.0f, 0, 0);
	Function_15(&bVar6, 1063, 4.0f, 0, 0);
	bVar7 = Function_17("fox_pop", 0);
	Function_15(&bVar7, 1054, 4.0f, 0, 0);
	Function_15(&bVar7, 1055, 4.0f, 0, 0);
	Function_15(&bVar7, 1056, 4.0f, 0, 0);
	bVar8 = Function_17("rabbit_pop", 0);
	Function_15(&bVar8, 1078, 4.0f, 0, 0);
	Function_15(&bVar8, 1078, 4.0f, 0, 0);
	Function_15(&bVar8, 1078, 4.0f, 0, 0);
	bVar9 = Function_17("nnight_pop", 0);
	Function_12(&bVar9, 1084, 4.0f, 49, 0, 0);
	Function_12(&bVar9, 1082, 4.0f, 49, 0, 0);
	bVar10 = Function_17("animal_duck", 0);
	Function_15(&bVar10, 1140, 100.0f, 0, 0);
	Function_15(&bVar10, 1140, 100.0f, 0, 0);
	Function_15(&bVar10, 1140, 100.0f, 0, 0);
	Function_18(&(Global_46972[7]));
	Global_46972[7] = Function_17("animal_bird", 1);
	Function_12(&(Global_46972[7]), 1128, 6.0f, 15, 0, 0);
	Function_12(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1137, 3.0f, 33, 0, 0);
	bVar11 = Function_17("hawk", 0);
	Function_12(&bVar11, 1145, 3.0f, 15, 0, 0);
	bVar12 = Function_17("vulture", 0);
	Function_12(&bVar12, 1131, 6.0f, 14, 0, 0);
	bVar13 = Function_17("crow", 0);
	Function_12(&bVar13, 1131, 6.0f, 14, 0, 0);
	bVar14 = Function_17("nsmallbird", 0);
	Function_12(&bVar14, 1135, 2.0f, 15, 0, 0);
	Function_12(&bVar14, 1136, 2.0f, 15, 0, 0);
	Function_12(&bVar14, 1136, 2.0f, 15, 0, 0);
	Function_12(&bVar14, 1137, 2.0f, 33, 0, 0);
	Function_18(&(Global_46972[14]));
	Global_46972[14] = Function_17("birds_trees", 1);
	Function_15(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar15 = Function_17("wildHorses", 0);
	Function_15(&bVar15, 976, 8.0f, 0, 0);
	Function_15(&bVar15, 983, 8.0f, 0, 0);
	Function_15(&bVar15, 986, 8.0f, 0, 0);
	Function_15(&bVar15, 991, 8.0f, 0, 0);
	Function_15(&bVar15, 996, 8.0f, 0, 0);
	Function_15(&bVar15, 998, 8.0f, 0, 0);
	if (Function_8(6, 0))
	{
		Function_15(&bVar15, 978, 10.0f, 0, 0);
	}
	Function_7(&(Global_46972[5]), 6E-05f);
	Function_18(&(Global_46972[2]));
	Global_46972[2] = Function_17("ped_law", 1);
	Function_15(&(Global_46972[2]), 449, 1.0f, 0, 0);
	Function_15(&(Global_46972[2]), 436, 4.0f, 0, 0);
	Function_15(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_15(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_15(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_18(&(Global_46972[3]));
	Global_46972[3] = Function_17("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 513, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 514, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 515, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 508, 4.0f, 0, 0);
	Function_15(&(Global_46972[3]), 509, 4.0f, 0, 0);
	Function_15(&(Global_46972[3]), 510, 4.0f, 0, 0);
	Function_15(&(Global_46972[3]), 505, 8.0f, 0, 0);
	Function_15(&(Global_46972[3]), 506, 8.0f, 0, 0);
	Function_15(&(Global_46972[3]), 507, 8.0f, 0, 0);
	Function_18(&(Global_46972[4]));
	Global_46972[4] = Function_17("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 403, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 404, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 405, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 400, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 401, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 402, 4.0f, 0, 0);
	Function_15(&(Global_46972[4]), 397, 8.0f, 0, 0);
	Function_15(&(Global_46972[4]), 397, 8.0f, 0, 0);
	Function_15(&(Global_46972[4]), 398, 8.0f, 0, 0);
	Function_18(&(Global_46972[9]));
	Global_46972[9] = Function_17("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1183, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1188, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1195, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
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
	uVar16 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (IS_LAYOUTREF_VALID(&uVar16))
	{
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "gapv_flk_CENTER_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar18 = Function_3(&uVar17, &bVar15, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar18, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar18, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar18, 3);
			uVar19 = Function_3(&uVar17, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar19, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar19, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar19, 4);
			uVar20 = Function_3(&uVar17, &bVar8, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar20, 2);
			uVar21 = Function_3(&uVar17, &bVar4, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar21, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar21, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar21, 2);
			uVar22 = Function_3(&uVar17, &bVar1, 0,00018f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar22, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar22, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar22, 2);
			uVar23 = Function_3(&uVar17, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar23, 2);
			uVar24 = Function_3(&uVar17, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar24, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find gapv_flk_CENTER_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "gapv_flk_SW_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar25 = Function_3(&uVar17, &bVar15, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar25, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar25, 4);
			uVar26 = Function_3(&uVar17, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar26, 4);
			uVar27 = Function_3(&uVar17, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar27, 2);
			uVar28 = Function_3(&uVar17, &bVar6, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar28, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar28, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar28, 6);
			uVar29 = Function_3(&uVar17, &bVar8, 0,00032f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar29, 3);
			uVar30 = Function_3(&uVar17, &bVar4, 3,2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar30, 4);
			uVar31 = Function_3(&uVar17, &bVar1, 0,00024f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar31, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar31, 2);
			uVar32 = Function_3(&uVar17, &bVar0, 4,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar32, 2);
			uVar33 = Function_3(&uVar17, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar33, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find gapv_flk_SW_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "gapv_flk_NORTH_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			uVar34 = Function_3(&uVar17, &bVar15, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar34, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar34, 2);
			uVar35 = Function_3(&uVar17, &bVar3, 1,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar35, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar35, 1);
			uVar36 = Function_3(&uVar17, &bVar2, 1,5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar36, 5);
			uVar37 = Function_3(&uVar17, &bVar6, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar37, 2);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar37, 7);
			uVar38 = Function_3(&uVar17, &bVar8, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar38, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar38, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar38, 2);
			uVar39 = Function_3(&uVar17, &bVar4, 3,6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar39, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar39, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar39, 4);
			uVar40 = Function_3(&uVar17, &bVar1, 9E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar40, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar40, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar40, 2);
			uVar41 = Function_3(&uVar17, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar41, 2);
			uVar42 = Function_3(&uVar17, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar42, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find gapv_flk_NORTH_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "gapv_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_3(&uVar17, &bVar9, 0,00012f, 0, 0, 1);
			Function_3(&uVar17, &bVar10, 0,00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("gap_pop: Cannot find gapv_aquaticWildlife_set to create population volumes");
		}
		uVar17 = FIND_VOLUME_IN_LAYOUT(&uVar16, "gapv_flk_BIRD_set");
		if (IS_VOLUME_VALID(&uVar17))
		{
			Function_3(&uVar17, &bVar11, 8E-05f, 0, 0, 1);
			Function_3(&uVar17, &bVar12, 8E-05f, 0, 0, 1);
			Function_3(&uVar17, &bVar13, 8E-05f, 0, 0, 1);
			Function_3(&uVar17, &bVar14, 0,00012f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find gapv_flk_BIRD_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("cho_pop: Cannot find one of the volumes to create population volumes");
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
	Function_5("Finished loading Gaptooth Ridge population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x186D / 6253
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x187E / 6270
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

var Function_3(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x18D6 / 6358
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

bool Function_4(int iParam0) //Position: 0x1966 / 6502
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0x1982 / 6530
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

bool Function_6(var uParam0, int iParam1) //Position: 0x19C2 / 6594
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x19DF / 6623
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_8(var uParam0, bool bParam1) //Position: 0x19F0 / 6640
{
	int iVar0;
	
	iVar0 = Function_10(uParam0);
	if (!Function_9(iVar0))
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

bool Function_9(int iParam0) //Position: 0x1A2E / 6702
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_10(int iParam0) //Position: 0x1A45 / 6725
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_11(bool bParam0) //Position: 0x1A5F / 6751
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1A75 / 6773
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, bParam1, fParam2, Function_14(iParam3), Function_13(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_13(int iParam0) //Position: 0x1AF3 / 6899
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

var Function_14(int iParam0) //Position: 0x1B5F / 7007
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

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1BCB / 7115
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1C4D / 7245
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(&uParam0, bParam1, fParam2, iParam3, 0);
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

var Function_17(var uParam0, int iParam1) //Position: 0x1C94 / 7316
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_18(int iParam0) //Position: 0x1CA3 / 7331
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_19(char* cParam0) //Position: 0x1CB0 / 7344
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

