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
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_19("Loading Rio Bravo population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	Function_18(&(Global_46972[6]));
	Global_46972[6] = Function_17("animal_horse", 4);
	Function_16(&(Global_46972[6]), 976, 100.0f, 0, 3);
	Function_16(&(Global_46972[6]), 977, 100.0f, 0, 3);
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
	Function_15(&(Global_46972[15]), 976, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 977, 100.0f, 0, 0);
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
	Function_15(&(Global_46972[0]), 33, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 34, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 37, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 38, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 39, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 46, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 50, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 51, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 53, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 54, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 55, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 56, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 153, 8.0f, 0, 0);
	Function_15(&(Global_46972[0]), 173, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 174, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 175, 2.0f, 0, 0);
	Function_15(&(Global_46972[0]), 178, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 199, 10.0f, 0, 0);
	Function_15(&(Global_46972[0]), 202, 10.0f, 0, 0);
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
	Function_12(&(Global_46972[5]), 1057, 2.0f, 14, 1, 0);
	bVar0 = Function_17("critter_pop", 0);
	Function_12(&bVar0, 1057, 2.0f, 14, 1, 0);
	bVar1 = Function_17("armadillo_pop", 0);
	Function_15(&bVar1, 1081, 4.0f, 0, 0);
	Function_15(&bVar1, 1081, 4.0f, 0, 0);
	Function_15(&bVar1, 1081, 4.0f, 0, 0);
	Function_18(&(Global_46972[10]));
	Global_46972[10] = Function_17("animal_hunt", 1);
	Function_15(&(Global_46972[10]), 1084, 2.0f, 0, 0);
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
	Function_15(&(Global_46972[11]), 1061, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1062, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1063, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1088, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1089, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1090, 5.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1050, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1051, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1052, 3.0f, 0, 0);
	Function_18(&(Global_46972[13]));
	Global_46972[13] = Function_17("animal_hunted", 0);
	Function_15(&(Global_46972[13]), 1061, 4.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1062, 4.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1063, 4.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1119, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1120, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1117, 2.0f, 0, 0);
	Function_15(&(Global_46972[13]), 1116, 2.0f, 0, 0);
	Function_18(&(Global_46972[12]));
	Global_46972[12] = Function_17("animal_prey", 0);
	Function_15(&(Global_46972[12]), 1118, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1119, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1120, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1117, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1116, 3.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1078, 7.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1026, 4.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1027, 4.0f, 0, 0);
	Function_15(&(Global_46972[12]), 1028, 4.0f, 0, 0);
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
	Function_15(&bVar3, 1089, 4.0f, 0, 0);
	Function_15(&bVar3, 1090, 4.0f, 0, 0);
	bVar4 = Function_17("animal_duck", 0);
	Function_15(&bVar4, 1140, 100.0f, 0, 0);
	Function_15(&bVar4, 1140, 100.0f, 0, 0);
	bVar5 = Function_17("deer_pop", 0);
	Function_15(&bVar5, 1119, 4.0f, 0, 0);
	Function_15(&bVar5, 1119, 4.0f, 0, 0);
	Function_15(&bVar5, 1120, 4.0f, 0, 0);
	Function_15(&bVar5, 1116, 1.0f, 0, 0);
	Function_15(&bVar5, 1117, 1.0f, 0, 0);
	Function_15(&bVar5, 1116, 1.0f, 0, 0);
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
	Function_12(&bVar9, 1085, 4.0f, 49, 0, 0);
	Function_12(&bVar9, 1082, 4.0f, 33, 0, 0);
	Function_18(&(Global_46972[7]));
	Global_46972[7] = Function_17("animal_bird", 1);
	Function_12(&(Global_46972[7]), 1128, 6.0f, 15, 0, 0);
	Function_12(&(Global_46972[7]), 1131, 6.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1135, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1136, 2.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1145, 3.0f, 14, 0, 0);
	Function_12(&(Global_46972[7]), 1137, 3.0f, 33, 0, 0);
	bVar10 = Function_17("hawk", 0);
	Function_12(&bVar10, 1145, 3.0f, 15, 0, 0);
	bVar11 = Function_17("vulture", 0);
	Function_12(&bVar11, 1131, 6.0f, 14, 0, 0);
	bVar12 = Function_17("crow", 0);
	Function_12(&bVar12, 1131, 6.0f, 14, 0, 0);
	bVar13 = Function_17("nsmallbird", 0);
	Function_12(&bVar13, 1135, 2.0f, 15, 0, 0);
	Function_12(&bVar13, 1136, 2.0f, 15, 0, 0);
	Function_12(&bVar13, 1136, 2.0f, 15, 0, 0);
	Function_12(&bVar13, 1137, 2.0f, 33, 0, 0);
	Function_18(&(Global_46972[14]));
	Global_46972[14] = Function_17("birds_trees", 1);
	Function_15(&(Global_46972[14]), 1131, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1132, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1133, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1135, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	Function_15(&(Global_46972[14]), 1136, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(&(Global_46972[14]));
	bVar14 = Function_17("wildHorses", 0);
	Function_15(&bVar14, 980, 8.0f, 0, 0);
	Function_15(&bVar14, 981, 8.0f, 0, 0);
	Function_15(&bVar14, 984, 8.0f, 0, 0);
	Function_15(&bVar14, 987, 8.0f, 0, 0);
	Function_15(&bVar14, 989, 8.0f, 0, 0);
	Function_15(&bVar14, 990, 8.0f, 0, 0);
	if (Function_8(6, 0))
	{
		Function_15(&bVar14, 978, 10.0f, 0, 0);
	}
	Function_7(&(Global_46972[5]), 9E-05f);
	Function_18(&(Global_46972[2]));
	Global_46972[2] = Function_17("ped_law", 1);
	Function_15(&(Global_46972[2]), 449, 1.0f, 0, 0);
	Function_15(&(Global_46972[2]), 436, 4.0f, 0, 0);
	Function_15(&(Global_46972[2]), 437, 8.0f, 0, 0);
	Function_15(&(Global_46972[2]), 438, 8.0f, 0, 0);
	Function_15(&(Global_46972[2]), 440, 8.0f, 0, 0);
	Function_18(&(Global_46972[3]));
	Global_46972[3] = Function_17("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 486, 10.0f, 0, 0);
	Function_15(&(Global_46972[3]), 487, 10.0f, 0, 0);
	Function_15(&(Global_46972[3]), 488, 10.0f, 0, 0);
	Function_15(&(Global_46972[3]), 489, 3.0f, 0, 0);
	Function_15(&(Global_46972[3]), 490, 3.0f, 0, 0);
	Function_15(&(Global_46972[3]), 491, 3.0f, 0, 0);
	Function_15(&(Global_46972[3]), 492, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 493, 1.0f, 0, 0);
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
	uVar15 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (IS_LAYOUTREF_VALID(&uVar15))
	{
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "riov_flk_CENTER_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			uVar17 = Function_3(&uVar16, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar17, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar17, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar17, 3);
			uVar18 = Function_3(&uVar16, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar18, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar18, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar18, 3);
			uVar19 = Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar19, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar19, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar19, 2);
			uVar20 = Function_3(&uVar16, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar20, 3);
			uVar21 = Function_3(&uVar16, &bVar3, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar21, 1);
			uVar22 = Function_3(&uVar16, &bVar0, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar22, 2);
			uVar23 = Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar23, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find riov_flk_CENTER_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "riov_flk_SOUTH_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			uVar24 = Function_3(&uVar16, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar24, 3);
			uVar25 = Function_3(&uVar16, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar25, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar25, 3);
			uVar26 = Function_3(&uVar16, &bVar7, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar26, 2);
			uVar27 = Function_3(&uVar16, &bVar6, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar27, 3);
			uVar28 = Function_3(&uVar16, &bVar5, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar28, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar28, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar28, 3);
			uVar29 = Function_3(&uVar16, &bVar3, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar29, 1);
			uVar30 = Function_3(&uVar16, &bVar0, 9E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar30, 2);
			uVar31 = Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar31, 2);
			uVar32 = Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar32, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find riov_flk_SW_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "riov_flk_NORTH_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			uVar33 = Function_3(&uVar16, &bVar14, 1,5E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar33, 3);
			uVar34 = Function_3(&uVar16, &bVar2, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar34, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar34, 3);
			uVar35 = Function_3(&uVar16, &bVar6, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar35, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar35, 3);
			uVar36 = Function_3(&uVar16, &bVar8, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar36, 2);
			uVar37 = Function_3(&uVar16, &bVar5, 2,7E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(&uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(&uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(&uVar37, 3);
			uVar38 = Function_3(&uVar16, &bVar3, 2,1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar38, 1);
			uVar39 = Function_3(&uVar16, &bVar0, 9E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar39, 2);
			uVar40 = Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_MAX_PER_CELL(&uVar40, 2);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find riov_flk_NORTH_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "riov_aquaticWildlife_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_3(&uVar16, &bVar9, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar4, 4,5E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hen_pop: Cannot find riov_aquaticWildlife_set to create population volumes");
		}
		uVar16 = FIND_VOLUME_IN_LAYOUT(&uVar15, "riov_flk_BIRD_set");
		if (IS_VOLUME_VALID(&uVar16))
		{
			Function_3(&uVar16, &bVar10, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar11, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar12, 6E-05f, 0, 0, 1);
			Function_3(&uVar16, &bVar13, 9E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find riov_flk_BIRD_set to create population volumes");
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
	Function_5("Finished loading Rio Bravo population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1836 / 6198
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1847 / 6215
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

var Function_3(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x189F / 6303
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

bool Function_4(int iParam0) //Position: 0x192F / 6447
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(char* cParam0) //Position: 0x194B / 6475
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

bool Function_6(var uParam0, int iParam1) //Position: 0x198B / 6539
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x19A8 / 6568
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

bool Function_8(var uParam0, bool bParam1) //Position: 0x19B9 / 6585
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

bool Function_9(int iParam0) //Position: 0x19F7 / 6647
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_10(int iParam0) //Position: 0x1A0E / 6670
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_11(bool bParam0) //Position: 0x1A28 / 6696
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_12(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1A3E / 6718
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

var Function_13(int iParam0) //Position: 0x1ABC / 6844
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

var Function_14(int iParam0) //Position: 0x1B28 / 6952
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

var Function_15(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1B94 / 7060
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

var Function_16(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1C16 / 7190
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

var Function_17(var uParam0, int iParam1) //Position: 0x1C5D / 7261
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_18(int iParam0) //Position: 0x1C6C / 7276
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

void Function_19(char* cParam0) //Position: 0x1C79 / 7289
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

