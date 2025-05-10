//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 4
//Natives Count : 44
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
	var uVar37;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Prd", 4);
	Function_15("Loading Perdido population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_14("ped_generic", 0);
	Function_13(&uVar0, 240, 4.0f, 0, 0);
	Function_13(&uVar0, 241, 4.0f, 0, 0);
	Function_13(&uVar0, 295, 4.0f, 0, 0);
	Function_13(&uVar0, 296, 4.0f, 0, 0);
	Function_13(&uVar0, 313, 4.0f, 0, 0);
	Function_13(&uVar0, 269, 4.0f, 0, 0);
	Function_13(&uVar0, 270, 4.0f, 0, 0);
	Function_13(&uVar0, 271, 4.0f, 0, 0);
	Function_13(&uVar0, 272, 4.0f, 0, 0);
	Function_13(&uVar0, 311, 4.0f, 0, 0);
	Function_13(&uVar0, 279, 4.0f, 0, 0);
	Function_13(&uVar0, 284, 4.0f, 0, 0);
	Function_13(&uVar0, 287, 4.0f, 0, 0);
	Function_13(&uVar0, 292, 4.0f, 0, 0);
	Function_13(&uVar0, 297, 4.0f, 0, 0);
	Function_13(&uVar0, 299, 4.0f, 0, 0);
	Function_13(&uVar0, 314, 4.0f, 0, 0);
	Function_13(&uVar0, 317, 4.0f, 0, 0);
	Function_13(&uVar0, 322, 4.0f, 0, 0);
	Function_13(&uVar0, 323, 4.0f, 0, 0);
	Function_13(&uVar0, 250, 4.0f, 0, 0);
	Function_13(&uVar0, 298, 4.0f, 0, 0);
	Function_13(&uVar0, 288, 4.0f, 0, 0);
	Function_13(&uVar0, 1204, 5.0f, 0, 0);
	Function_13(&uVar0, 1205, 5.0f, 0, 0);
	Function_13(&uVar0, 1206, 5.0f, 0, 0);
	Function_13(&uVar0, 1207, 5.0f, 0, 0);
	Function_13(&uVar0, 1208, 5.0f, 0, 0);
	Function_13(&uVar0, 1209, 5.0f, 0, 0);
	Function_13(&uVar0, 1210, 5.0f, 0, 0);
	Function_13(&uVar0, 1211, 5.0f, 0, 0);
	Function_13(&uVar0, 1212, 5.0f, 0, 0);
	Function_13(&uVar0, 1213, 5.0f, 0, 0);
	Function_13(&uVar0, 1214, 5.0f, 0, 0);
	Function_13(&uVar0, 1215, 5.0f, 0, 0);
	Function_13(&uVar0, 1216, 5.0f, 0, 0);
	Function_13(&uVar0, 1217, 5.0f, 0, 0);
	Function_13(&uVar0, 1218, 5.0f, 0, 0);
	Function_13(&uVar0, 1219, 5.0f, 0, 0);
	Function_13(&uVar0, 1220, 5.0f, 0, 0);
	Function_13(&uVar0, 1222, 5.0f, 0, 0);
	Function_13(&uVar0, 1223, 5.0f, 0, 0);
	Function_13(&uVar0, 1224, 5.0f, 0, 0);
	Function_13(&uVar0, 1225, 5.0f, 0, 0);
	Function_13(&uVar0, 1226, 5.0f, 0, 0);
	Function_13(&uVar0, 1227, 5.0f, 0, 0);
	Function_12(&(Global_30750[0]));
	Global_30750[0] = Function_14("ped_wilderness", Global_30840);
	Function_13(&(Global_30750[0]), 38, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 39, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 53, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 54, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 153, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 166, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 167, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 170, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 171, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 172, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 173, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 174, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 175, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 232, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 288, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 51, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 289, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 35, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 37, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 55, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 135, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 136, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 154, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 155, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 156, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 159, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 162, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 85, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 117, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 194, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 196, 4.0f, 0, 0);
	Function_13(&(Global_30750[0]), 311, 4.0f, 0, 0);
	Function_12(&(Global_30750[1]));
	Global_30750[1] = Function_14("ped_traveller", 3);
	Function_13(&(Global_30750[1]), 49, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 56, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 64, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 73, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 74, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 78, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 195, 2.0f, 0, 0);
	Function_13(&(Global_30750[1]), 202, 2.0f, 0, 0);
	Function_12(&(Global_30750[6]));
	Global_30750[6] = Function_14("animal_horse", 4);
	Function_11(&(Global_30750[6]), 977, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_11(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_12(&(Global_30750[15]));
	Global_30750[15] = Function_14("animal_horse_unsaddled", 0);
	Function_13(&(Global_30750[15]), 977, 100.0f, 0, 0);
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
	Function_12(&(Global_30750[5]));
	Global_30750[5] = Function_14("animal_wilderness", 0);
	Function_12(&(Global_30750[11]));
	Global_30750[11] = Function_14("animal_predator", 0);
	Function_12(&(Global_30750[10]));
	Global_30750[10] = Function_14("animal_hunt", 0);
	Function_12(&(Global_30750[8]));
	Global_30750[8] = Function_14("animal_herd", 0);
	Function_12(&(Global_30750[14]));
	Global_30750[14] = Function_14("birds_trees", 1);
	Function_13(&(Global_30750[14]), 1247, 100.0f, 0, 0);
	SAVE_POP_SET_BIRDS_SPAWNING_FROM_TREES(Global_30750[14]);
	Function_12(&(Global_30750[7]));
	Global_30750[7] = Function_14("animal_bird", 1);
	uVar1 = Function_14("ngiant_bat", 0);
	Function_8(&uVar1, 1247, 10.0f, 49, 0, 0);
	uVar2 = Function_14("zombie_horse", 0);
	Function_13(&uVar2, 1248, 10.0f, 0, 0);
	Function_13(&uVar2, 1249, 10.0f, 0, 0);
	Function_13(&uVar2, 1250, 10.0f, 0, 0);
	Function_13(&uVar2, 1251, 10.0f, 0, 0);
	uVar3 = Function_14("zombie_bear", 0);
	Function_13(&uVar3, 1246, 10.0f, 0, 0);
	uVar4 = Function_14("zombie_boar", 0);
	Function_13(&uVar4, 1245, 10.0f, 0, 0);
	uVar5 = Function_14("zombie_cougar", 0);
	Function_13(&uVar5, 1244, 10.0f, 0, 0);
	uVar6 = Function_14("zombie_wolf", 0);
	Function_13(&uVar6, 1242, 10.0f, 0, 0);
	uVar7 = Function_14("zombie_coyote", 0);
	Function_13(&uVar7, 1241, 10.0f, 0, 0);
	uVar8 = Function_14("zombie_dog", 0);
	Function_13(&uVar8, 1240, 10.0f, 0, 0);
	uVar9 = Function_14("zombie_bull", 0);
	Function_13(&uVar9, 1243, 10.0f, 0, 0);
	uVar10 = Function_14("nevil_goat", 0);
	Function_13(&uVar10, 1272, 10.0f, 0, 0);
	Function_7(Global_30750[5], 2E-05f);
	Function_12(&(Global_30750[2]));
	Global_30750[2] = Function_14("ped_law", 1);
	Function_13(&(Global_30750[2]), 1222, 5.0f, 0, 0);
	Function_13(&(Global_30750[2]), 1223, 5.0f, 0, 0);
	Function_13(&(Global_30750[2]), 1224, 5.0f, 0, 0);
	Function_13(&(Global_30750[2]), 1225, 5.0f, 0, 0);
	Function_13(&(Global_30750[2]), 1226, 5.0f, 0, 0);
	Function_13(&(Global_30750[2]), 1227, 5.0f, 0, 0);
	Function_12(&(Global_30750[3]));
	Global_30750[3] = Function_14("ped_bad_guys_local", 1);
	Function_13(&(Global_30750[3]), 1214, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]), 1215, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]), 1216, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]), 1217, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]), 1218, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]), 1219, 5.0f, 0, 0);
	Function_13(&(Global_30750[3]), 1220, 5.0f, 0, 0);
	Function_12(&(Global_30750[4]));
	Global_30750[4] = Function_14("ped_bad_guys_generic", 1);
	Function_13(&(Global_30750[4]), 1204, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1205, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1206, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1207, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1208, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1209, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1210, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1211, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1212, 5.0f, 0, 0);
	Function_13(&(Global_30750[4]), 1213, 5.0f, 0, 0);
	Function_12(&(Global_30750[9]));
	Global_30750[9] = Function_14("ped_vehicle", 1);
	Function_13(&(Global_30750[9]), 1183, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1188, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_13(&(Global_30750[9]), 1195, 2.0f, 0, 0);
	uVar11 = CREATE_POPULATION_SET(1);
	uVar12 = Function_14("escalera_prestream", 0);
	Function_13(&uVar12, 240, 4.0f, 0, 0);
	Function_13(&uVar12, 241, 4.0f, 0, 0);
	Function_13(&uVar12, 295, 4.0f, 0, 0);
	Function_13(&uVar12, 296, 4.0f, 0, 0);
	Function_13(&uVar12, 313, 4.0f, 0, 0);
	Function_13(&uVar12, 269, 4.0f, 0, 0);
	Function_13(&uVar12, 270, 4.0f, 0, 0);
	Function_13(&uVar12, 271, 4.0f, 0, 0);
	Function_13(&uVar12, 272, 4.0f, 0, 0);
	Function_13(&uVar12, 311, 4.0f, 0, 0);
	Function_13(&uVar12, 279, 4.0f, 0, 0);
	Function_13(&uVar12, 284, 4.0f, 0, 0);
	Function_13(&uVar12, 287, 4.0f, 0, 0);
	Function_13(&uVar12, 292, 4.0f, 0, 0);
	Function_13(&uVar12, 297, 4.0f, 0, 0);
	Function_13(&uVar12, 299, 4.0f, 0, 0);
	Function_13(&uVar12, 314, 4.0f, 0, 0);
	Function_13(&uVar12, 317, 4.0f, 0, 0);
	Function_13(&uVar12, 322, 4.0f, 0, 0);
	Function_13(&uVar12, 323, 4.0f, 0, 0);
	Function_13(&uVar12, 250, 4.0f, 0, 0);
	Function_13(&uVar12, 298, 4.0f, 0, 0);
	Function_13(&uVar12, 288, 4.0f, 0, 0);
	Function_13(&uVar12, 1204, 5.0f, 0, 0);
	Function_13(&uVar12, 1205, 5.0f, 0, 0);
	Function_13(&uVar12, 1206, 5.0f, 0, 0);
	Function_13(&uVar12, 1207, 5.0f, 0, 0);
	Function_13(&uVar12, 1208, 5.0f, 0, 0);
	Function_13(&uVar12, 1209, 5.0f, 0, 0);
	Function_13(&uVar12, 1210, 5.0f, 0, 0);
	Function_13(&uVar12, 1211, 5.0f, 0, 0);
	Function_13(&uVar12, 1212, 5.0f, 0, 0);
	Function_13(&uVar12, 1213, 5.0f, 0, 0);
	Function_13(&uVar12, 1214, 5.0f, 0, 0);
	Function_13(&uVar12, 1215, 5.0f, 0, 0);
	Function_13(&uVar12, 1216, 5.0f, 0, 0);
	Function_13(&uVar12, 1217, 5.0f, 0, 0);
	Function_13(&uVar12, 1218, 5.0f, 0, 0);
	Function_13(&uVar12, 1219, 5.0f, 0, 0);
	Function_13(&uVar12, 1220, 5.0f, 0, 0);
	Function_13(&uVar12, 1222, 5.0f, 0, 0);
	Function_13(&uVar12, 1223, 5.0f, 0, 0);
	Function_13(&uVar12, 1224, 5.0f, 0, 0);
	Function_13(&uVar12, 1225, 5.0f, 0, 0);
	Function_13(&uVar12, 1226, 5.0f, 0, 0);
	Function_13(&uVar12, 1227, 5.0f, 0, 0);
	vVar13 = { -2690.274f, 31.548f, 4256.147f };
	AMBIENT_SPAWN_PRESTREAM_SET(uVar12, vVar13, 450.0f, 10);
	while (!Function_6(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_5("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_4(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar16 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (IS_LAYOUTREF_VALID(bVar16))
	{
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "prdv_flk_CENTER_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			uVar18 = Function_3(bVar17, uVar0, 4E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar18, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar18, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar18, 2);
			uVar19 = Function_3(bVar17, uVar2, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar19, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar19, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar19, 1);
			uVar20 = Function_3(bVar17, uVar5, 7E-06f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar20, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar20, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar20, 1);
			uVar21 = Function_3(bVar17, uVar6, 2.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar21, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar21, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar21, 4);
			uVar22 = Function_3(bVar17, uVar7, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar22, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar22, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar22, 6);
			uVar23 = Function_3(bVar17, uVar10, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar23, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar23, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar23, 3);
			uVar24 = Function_3(bVar17, uVar9, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar24, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar24, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar24, 1);
			Function_3(bVar17, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_3(bVar17, uVar1, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_CENTER_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "prdv_flk_SOUTH_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			uVar25 = Function_3(bVar17, uVar0, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar25, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar25, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar25, 4);
			uVar26 = Function_3(bVar17, uVar2, 1E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar26, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar26, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar26, 1);
			uVar27 = Function_3(bVar17, uVar5, 7E-06f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar27, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar27, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar27, 1);
			uVar28 = Function_3(bVar17, uVar6, 2.5E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar28, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar28, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar28, 4);
			uVar29 = Function_3(bVar17, uVar7, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar29, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar29, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar29, 6);
			uVar30 = Function_3(bVar17, uVar10, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar30, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar30, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar30, 3);
			Function_3(bVar17, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_3(bVar17, uVar1, 3E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_SE_set to create population volumes");
		}
		bVar17 = FIND_VOLUME_IN_LAYOUT(bVar16, "prdv_flk_NORTH_set");
		if (IS_VOLUME_VALID(bVar17))
		{
			uVar31 = Function_3(bVar17, uVar0, 3E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar31, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar31, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar31, 6);
			uVar32 = Function_3(bVar17, uVar2, 2E-05f, 0, 1, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar32, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar32, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar32, 1);
			uVar33 = Function_3(bVar17, uVar5, 5E-06f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar33, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar33, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar33, 1);
			uVar34 = Function_3(bVar17, uVar6, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar34, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar34, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar34, 4);
			uVar35 = Function_3(bVar17, uVar7, 2E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar35, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar35, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar35, 6);
			uVar36 = Function_3(bVar17, uVar10, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar36, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar36, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar36, 3);
			uVar37 = Function_3(bVar17, uVar9, 1E-05f, 0, 0, 1);
			SET_ZONE_POPULATION_IS_FLOCK(uVar37, 1);
			SET_ZONE_POPULATION_MIN_FLOCK_SIZE(uVar37, 1);
			SET_ZONE_POPULATION_MAX_FLOCK_SIZE(uVar37, 1);
			Function_3(bVar17, Global_30750[7], 2E-05f, 0, 0, 1);
			Function_3(bVar17, uVar1, 4E-05f, 0, 0, 1);
		}
		else
		{
			LOG_ERROR("cho_pop: Cannot find prdv_flk_NW_set to create population volumes");
		}
	}
	else
	{
		LOG_ERROR("prd_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Function_6(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_4(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_5("Finished loading Perdido population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x1489 / 5257
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x1498 / 5272
{
	int iVar0;
	
	if (!Function_4(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x14ED / 5357
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

bool Function_4(int iParam0) //Position: 0x156D / 5485
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, float fParam1) //Position: 0x1589 / 5513
{
	if (!Function_4(128))
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

bool Function_6(var uParam0, int iParam1) //Position: 0x15C7 / 5575
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7(var uParam0, bool bParam1) //Position: 0x15E3 / 5603
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

var Function_8(var uParam0, bool bParam1, float fParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x15F3 / 5619
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, uParam2, Function_10(uParam3), Function_9(uParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_9(int iParam0) //Position: 0x166B / 5739
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

var Function_10(int iParam0) //Position: 0x16D7 / 5847
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

var Function_11(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x1743 / 5955
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_13(uParam0, bParam1, fParam2, bParam3, 0);
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

void Function_12(int iParam0) //Position: 0x1788 / 6024
{
	DESTROY_POPULATION_SET(*iParam0);
	return;
}

var Function_13(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1794 / 6036
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

var Function_14(bool bParam0, int iParam1) //Position: 0x1810 / 6160
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_15(bool bParam0, var uParam1) //Position: 0x181D / 6173
{
	if (!Function_4(128))
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

