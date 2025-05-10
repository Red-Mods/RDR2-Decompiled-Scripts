//Decompiled with MagicRDR v1.0
//Function Count : 17
//Statics Count : 4
//Natives Count : 45
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
	vector3 vVar13;
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
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Hgn", 4);
	Function_16("Loading Hennigan's Stead population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_15("ped_generic", 0);
	Function_14(&uVar0, 202, 4.0f, 0, 0);
	Function_14(&uVar0, 87, 4.0f, 0, 0);
	Function_14(&uVar0, 235, 4.0f, 0, 0);
	Function_14(&uVar0, 217, 4.0f, 0, 0);
	Function_14(&uVar0, 140, 4.0f, 0, 0);
	Function_14(&uVar0, 137, 4.0f, 0, 0);
	Function_14(&uVar0, 46, 4.0f, 0, 0);
	Function_14(&uVar0, 50, 4.0f, 0, 0);
	Function_14(&uVar0, 22, 4.0f, 0, 0);
	Function_14(&uVar0, 311, 4.0f, 0, 0);
	Function_14(&uVar0, 33, 4.0f, 0, 0);
	Function_14(&uVar0, 34, 4.0f, 0, 0);
	Function_14(&uVar0, 76, 4.0f, 0, 0);
	Function_14(&uVar0, 79, 4.0f, 0, 0);
	Function_14(&uVar0, 136, 4.0f, 0, 0);
	Function_14(&uVar0, 204, 4.0f, 0, 0);
	Function_14(&uVar0, 155, 4.0f, 0, 0);
	Function_14(&uVar0, 142, 4.0f, 0, 0);
	Function_14(&uVar0, 49, 4.0f, 0, 0);
	Function_14(&uVar0, 56, 4.0f, 0, 0);
	Function_14(&uVar0, 74, 4.0f, 0, 0);
	Function_14(&uVar0, 178, 4.0f, 0, 0);
	Function_14(&uVar0, 48, 4.0f, 0, 0);
	Function_14(&uVar0, 203, 4.0f, 0, 0);
	Function_14(&uVar0, 250, 4.0f, 0, 0);
	Function_14(&uVar0, 66, 4.0f, 0, 0);
	Function_14(&uVar0, 67, 4.0f, 0, 0);
	Function_14(&uVar0, 69, 4.0f, 0, 0);
	Function_14(&uVar0, 65, 4.0f, 0, 0);
	Function_14(&uVar0, 71, 4.0f, 0, 0);
	Function_14(&uVar0, 72, 4.0f, 0, 0);
	Function_14(&uVar0, 298, 4.0f, 0, 0);
	Function_14(&uVar0, 288, 4.0f, 0, 0);
	Function_14(&uVar0, 153, 4.0f, 0, 0);
	Function_14(&uVar0, 154, 4.0f, 0, 0);
	Function_14(&uVar0, 1204, 5.0f, 0, 0);
	Function_14(&uVar0, 1205, 5.0f, 0, 0);
	Function_14(&uVar0, 1206, 5.0f, 0, 0);
	Function_14(&uVar0, 1207, 5.0f, 0, 0);
	Function_14(&uVar0, 1208, 5.0f, 0, 0);
	Function_14(&uVar0, 1209, 5.0f, 0, 0);
	Function_14(&uVar0, 1210, 5.0f, 0, 0);
	Function_14(&uVar0, 1211, 5.0f, 0, 0);
	Function_14(&uVar0, 1212, 5.0f, 0, 0);
	Function_14(&uVar0, 1213, 5.0f, 0, 0);
	Function_13(&(Global_30750[0]));
	Global_30750[0] = Function_15("ped_wilderness", Global_30840);
	Function_14(&(Global_30750[0]), 38, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 39, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 53, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 54, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 153, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 166, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 167, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 170, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 171, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 172, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 173, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 174, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 175, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 232, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 288, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 51, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 289, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 35, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 37, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 135, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 136, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 154, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 155, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 156, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 159, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 162, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 117, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 194, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 196, 4.0f, 0, 0);
	Function_14(&(Global_30750[0]), 311, 4.0f, 0, 0);
	Function_13(&(Global_30750[1]));
	Global_30750[1] = Function_15("ped_traveller", 3);
	Function_14(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 56, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 195, 2.0f, 0, 0);
	Function_14(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_13(&(Global_30750[6]));
	Global_30750[6] = Function_15("animal_horse", 4);
	Function_12(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_12(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_13(&(Global_30750[15]));
	Global_30750[15] = Function_15("animal_horse_unsaddled", 0);
	Function_14(&(Global_30750[15]), 977, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_14(&(Global_30750[15]), 991, 100.0f, 0, 0);
	Function_13(&(Global_30750[5]));
	Global_30750[5] = Function_15("animal_wilderness", 0);
	Function_13(&(Global_30750[11]));
	Global_30750[11] = Function_15("animal_predator", 0);
	Function_13(&(Global_30750[10]));
	Global_30750[10] = Function_15("animal_hunt", 0);
	Function_13(&(Global_30750[8]));
	Global_30750[8] = Function_15("animal_herd", 0);
	Function_13(&(Global_30750[7]));
	Global_30750[7] = Function_15("animal_bird", 1);
	Function_13(&(Global_30750[14]));
	Global_30750[14] = Function_15("birds_trees", 1);
	Function_14(&(Global_30750[14]), 1247, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	uVar1 = Function_15("ngiant_bat", 0);
	Function_9(&uVar1, 1247, 10.0f, 49, 0, 0);
	uVar2 = Function_15("zombie_horse", 0);
	Function_14(&uVar2, 1248, 10.0f, 0, 0);
	Function_14(&uVar2, 1249, 10.0f, 0, 0);
	Function_14(&uVar2, 1250, 10.0f, 0, 0);
	Function_14(&uVar2, 1251, 10.0f, 0, 0);
	uVar3 = Function_15("zombie_bear", 0);
	Function_14(&uVar3, 1246, 10.0f, 0, 0);
	uVar4 = Function_15("zombie_boar", 0);
	Function_14(&uVar4, 1245, 10.0f, 0, 0);
	uVar5 = Function_15("zombie_cougar", 0);
	Function_14(&uVar5, 1244, 10.0f, 0, 0);
	uVar6 = Function_15("zombie_wolf", 0);
	Function_14(&uVar6, 1242, 10.0f, 0, 0);
	uVar7 = Function_15("zombie_coyote", 0);
	Function_14(&uVar7, 1241, 10.0f, 0, 0);
	uVar8 = Function_15("zombie_dog", 0);
	Function_14(&uVar8, 1240, 10.0f, 0, 0);
	uVar9 = Function_15("zombie_bull", 0);
	Function_14(&uVar9, 1243, 10.0f, 0, 0);
	uVar10 = Function_15("nevil_goat", 0);
	Function_14(&uVar10, 1272, 10.0f, 0, 0);
	Function_8(Global_30750[5], 2E-05f);
	Function_13(&(Global_30750[2]));
	Global_30750[2] = Function_15("ped_law", 1);
	Function_14(&(Global_30750[2]), 1222, 5.0f, 0, 0);
	Function_14(&(Global_30750[2]), 1223, 5.0f, 0, 0);
	Function_14(&(Global_30750[2]), 1224, 5.0f, 0, 0);
	Function_14(&(Global_30750[2]), 1225, 5.0f, 0, 0);
	Function_14(&(Global_30750[2]), 1226, 5.0f, 0, 0);
	Function_14(&(Global_30750[2]), 1227, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]));
	Global_30750[3] = Function_15("ped_bad_guys_local", 1);
	Function_14(&(Global_30750[3]), 1214, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]), 1215, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]), 1216, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]), 1217, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]), 1218, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]), 1219, 5.0f, 0, 0);
	Function_14(&(Global_30750[3]), 1220, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]));
	Global_30750[4] = Function_15("ped_bad_guys_generic", 1);
	Function_14(&(Global_30750[4]), 1204, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1205, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1206, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1207, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1208, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1209, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1210, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1211, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1212, 5.0f, 0, 0);
	Function_14(&(Global_30750[4]), 1213, 5.0f, 0, 0);
	Function_13(&(Global_30750[9]));
	Global_30750[9] = Function_15("ped_vehicle", 1);
	Function_14(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_14(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	uVar11 = CREATE_POPULATION_SET(1);
	uVar12 = Function_15("thieves_prestream", 0);
	Function_14(&uVar12, 140, 4.0f, 0, 0);
	Function_14(&uVar12, 137, 4.0f, 0, 0);
	Function_14(&uVar12, 33, 4.0f, 0, 0);
	Function_14(&uVar12, 34, 4.0f, 0, 0);
	Function_14(&uVar12, 76, 4.0f, 0, 0);
	Function_14(&uVar12, 79, 4.0f, 0, 0);
	Function_14(&uVar12, 136, 4.0f, 0, 0);
	Function_14(&uVar12, 204, 4.0f, 0, 0);
	Function_14(&uVar12, 155, 4.0f, 0, 0);
	Function_14(&uVar12, 142, 4.0f, 0, 0);
	Function_14(&uVar12, 178, 4.0f, 0, 0);
	Function_14(&uVar12, 48, 4.0f, 0, 0);
	Function_14(&uVar12, 203, 4.0f, 0, 0);
	Function_14(&uVar12, 250, 4.0f, 0, 0);
	Function_14(&uVar12, 66, 4.0f, 0, 0);
	Function_14(&uVar12, 67, 4.0f, 0, 0);
	Function_14(&uVar12, 69, 4.0f, 0, 0);
	Function_14(&uVar12, 65, 4.0f, 0, 0);
	Function_14(&uVar12, 71, 4.0f, 0, 0);
	Function_14(&uVar12, 72, 4.0f, 0, 0);
	Function_14(&uVar12, 486, 4.0f, 0, 0);
	Function_14(&uVar12, 487, 4.0f, 0, 0);
	Function_14(&uVar12, 489, 4.0f, 0, 0);
	Function_14(&uVar12, 490, 4.0f, 0, 0);
	Function_14(&uVar12, 491, 4.0f, 0, 0);
	Function_14(&uVar12, 493, 4.0f, 0, 0);
	vVar13 = { 119.5282f, 73.31f, 2284.021f };
	AMBIENT_SPAWN_PRESTREAM_SET(uVar12, vVar13, 450.0f, 15);
	while (!Function_7(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_6("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_5(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar16 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (IS_LAYOUTREF_VALID(bVar16))
	{
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "hgnv_flk_ALL_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			uVar18 = Function_4(bVar17, uVar0, 4E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar18, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar18, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar18, 10);
			uVar19 = Function_4(bVar17, uVar2, 2E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar19, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar19, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar19, 1);
			uVar20 = Function_4(bVar17, uVar6, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar20, 4);
			uVar21 = Function_4(bVar17, uVar7, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar21, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar21, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar21, 6);
			uVar22 = Function_4(bVar17, uVar10, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar22, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar22, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar22, 3);
			uVar23 = Function_4(bVar17, uVar4, 1.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar23, 1);
			uVar24 = Function_4(bVar17, uVar9, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar24, 1);
			Function_4(bVar17, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_4(bVar17, uVar1, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_ALL_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "hgnv_flk_NE_NW_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			uVar25 = Function_4(bVar17, uVar0, 4E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar25, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar25, 20);
			uVar26 = Function_4(bVar17, uVar5, 5.5E-06f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar26, 1);
			uVar27 = Function_4(bVar17, uVar6, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar27, 4);
			uVar28 = Function_4(bVar17, uVar7, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar28, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar28, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar28, 6);
			uVar29 = Function_4(bVar17, uVar10, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar29, 3);
			uVar30 = Function_4(bVar17, uVar4, 1.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar30, 1);
			Function_4(bVar17, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_4(bVar17, uVar1, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_NE_NW_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "hgnv_flk_SE_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			uVar31 = Function_4(bVar17, uVar0, 4E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar31, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar31, 5);
			uVar32 = Function_4(bVar17, uVar5, 5.5E-06f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar32, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar32, 1);
			uVar33 = Function_4(bVar17, uVar6, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar33, 4);
			uVar34 = Function_4(bVar17, uVar7, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar34, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar34, 6);
			uVar35 = Function_4(bVar17, uVar10, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar35, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar35, 3);
			uVar36 = Function_4(bVar17, uVar4, 1.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar36, 1);
			Function_4(bVar17, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_4(bVar17, uVar1, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_flk_SE_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "hgnv_war_livestock");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_3(bVar17, uVar0, 1, 3, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_livestock to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "hgnv_war_chickens");
		if (IS_VOLUME_VALID(bVar17))
		{
			Function_3(bVar17, uVar0, 1, 2, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("hgn_pop: Cannot find hgnv_war_barn to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("hgn_pop: Cannot find one of the volumes to create population volumes");
	}
	bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "hgnv_null_set");
	if (IS_VOLUME_VALID(bVar17))
	{
		Function_4(bVar17, uVar11, 0.0f, 0, 0, 1);
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
	if (!Function_7(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_5(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_6("Finished loading Hennigan's Stead population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x14B9 / 5305
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x14C8 / 5320
{
	int iVar0;
	
	if (!Function_5(1))
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

var Function_3(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x151D / 5405
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

var Function_4(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x159F / 5535
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

bool Function_5(int iParam0) //Position: 0x161F / 5663
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0, float fParam1) //Position: 0x163B / 5691
{
	if (!Function_5(128))
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

bool Function_7(var uParam0, int iParam1) //Position: 0x1679 / 5753
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x1695 / 5781
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_9(var uParam0, bool bParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x16A5 / 5797
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, uParam2, Function_11(uParam3), Function_10(uParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_10(int iParam0) //Position: 0x171D / 5917
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

var Function_11(int iParam0) //Position: 0x1789 / 6025
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

var Function_12(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x17F5 / 6133
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_14(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_13(int iParam0) //Position: 0x183A / 6202
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_14(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1846 / 6214
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

var Function_15(bool bParam0, int iParam1) //Position: 0x18C2 / 6338
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_16(bool bParam0, var uParam1) //Position: 0x18CF / 6351
{
	if (!Function_5(128))
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

