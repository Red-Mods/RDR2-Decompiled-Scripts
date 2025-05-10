//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 4
//Natives Count : 50
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
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	
	Local_0 = { StackVal, ScriptParam_0 };
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_13171, "Loa", 4);
	Function_21("Loading Escalera population file", 3);
	Global_30839++;
	BEGIN_POPULATION_DEFINITION();
	uVar0 = Function_20("ped_generic", 0);
	Function_17(&uVar0, 270, 2.0f, 15, 0, 0);
	Function_17(&uVar0, 271, 2.0f, 15, 0, 0);
	Function_17(&uVar0, 272, 2.0f, 15, 0, 0);
	Function_17(&uVar0, 317, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 318, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 314, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 302, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 278, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 281, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 284, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 295, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 296, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 286, 1.0f, 15, 0, 0);
	Function_17(&uVar0, 291, 1.0f, 15, 0, 0);
	uVar1 = Function_20("ped_town_night", 0);
	Function_17(&uVar1, 270, 2.0f, 48, 0, 0);
	Function_17(&uVar1, 271, 2.0f, 48, 0, 0);
	Function_17(&uVar1, 272, 2.0f, 48, 0, 0);
	Function_17(&uVar1, 317, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 318, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 302, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 278, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 281, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 284, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 295, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 296, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 286, 1.0f, 48, 0, 0);
	Function_17(&uVar1, 291, 1.0f, 48, 0, 0);
	uVar2 = Function_20("ped_mex_army_gen", 0);
	Function_17(&uVar2, 391, 1.0f, 63, 0, 0);
	Function_17(&uVar2, 393, 1.0f, 63, 0, 0);
	Function_17(&uVar2, 395, 1.0f, 63, 0, 0);
	Function_17(&uVar2, 396, 1.0f, 63, 0, 0);
	uVar3 = Function_20("ped_mex_rebels_gen", 0);
	Function_17(&uVar3, 516, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 517, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 518, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 519, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 520, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 521, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 522, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 523, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 524, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 525, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 526, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 527, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 529, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 530, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 531, 1.0f, 63, 0, 0);
	Function_17(&uVar3, 532, 1.0f, 63, 0, 0);
	uVar4 = Function_20("esc_day_brothel", 0);
	Function_17(&uVar4, 71, 5.0f, 15, 0, 0);
	Function_17(&uVar4, 245, 5.0f, 15, 0, 0);
	Function_17(&uVar4, 246, 5.0f, 15, 0, 0);
	Function_17(&uVar4, 247, 5.0f, 15, 0, 0);
	Function_17(&uVar4, 249, 5.0f, 15, 0, 0);
	Function_17(&uVar4, 316, 5.0f, 15, 0, 0);
	uVar5 = Function_20("esc_night_brothel", 0);
	Function_17(&uVar5, 71, 5.0f, 48, 0, 0);
	Function_17(&uVar5, 245, 5.0f, 48, 0, 0);
	Function_17(&uVar5, 246, 5.0f, 48, 0, 0);
	Function_17(&uVar5, 247, 5.0f, 48, 0, 0);
	Function_17(&uVar5, 249, 5.0f, 48, 0, 0);
	Function_17(&uVar5, 316, 5.0f, 48, 0, 0);
	uVar6 = Function_20("ped_men", 0);
	Function_16(&uVar6, 295, 1.0f, 0, 0);
	Function_16(&uVar6, 296, 1.0f, 0, 0);
	Function_16(&uVar6, 286, 1.0f, 0, 0);
	uVar7 = Function_20("ped_prisoners", 0);
	Function_15(&uVar7, 295, 1.0f, 0, 0);
	Function_15(&uVar7, 296, 1.0f, 0, 0);
	Function_15(&uVar7, 286, 1.0f, 0, 0);
	uVar8 = Function_20("ped_saloon", 0);
	Function_17(&uVar8, 272, 4.0f, 48, 0, 0);
	Function_17(&uVar8, 247, 8.0f, 48, 0, 0);
	Function_17(&uVar8, 249, 1.0f, 24, 0, 0);
	Function_17(&uVar8, 302, 2.0f, 48, 0, 0);
	Function_17(&uVar8, 278, 4.0f, 48, 0, 0);
	Function_17(&uVar8, 282, 4.0f, 48, 0, 0);
	Function_17(&uVar8, 284, 4.0f, 48, 0, 0);
	Function_17(&uVar8, 295, 4.0f, 48, 0, 0);
	Function_17(&uVar8, 302, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 278, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 281, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 284, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 295, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 296, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 286, 1.0f, 48, 0, 0);
	Function_17(&uVar8, 291, 1.0f, 48, 0, 0);
	if (!Function_14())
	{
		if (Global_25974[7])
		{
			uVar9 = Function_20("ped_liarsdice", 0);
			Function_16(&uVar9, 379, 1.0f, 0, 0);
			Function_16(&uVar9, 261, 1.0f, 0, 0);
			Function_16(&uVar9, 267, 1.0f, 0, 0);
			Function_16(&uVar9, 38, 1.0f, 0, 0);
			Function_16(&uVar9, 138, 1.0f, 0, 0);
			Function_16(&uVar9, 200, 1.0f, 0, 0);
			Function_16(&uVar9, 207, 1.0f, 0, 0);
			Function_16(&uVar9, 312, 1.0f, 0, 0);
			Function_16(&uVar9, 455, 1.0f, 0, 0);
		}
		if (Global_25974[8])
		{
			uVar10 = Function_20("ped_fivefinger", 0);
			Function_16(&uVar10, 261, 1.0f, 0, 0);
			Function_16(&uVar10, 283, 1.0f, 0, 0);
			Function_16(&uVar10, 280, 1.0f, 0, 0);
			Function_16(&uVar10, 162, 1.0f, 0, 0);
			Function_16(&uVar10, 268, 1.0f, 0, 0);
			Function_16(&uVar10, 294, 1.0f, 0, 0);
			Function_16(&uVar10, 461, 1.0f, 0, 0);
			Function_16(&uVar10, 311, 1.0f, 0, 0);
			Function_16(&uVar10, 137, 1.0f, 0, 0);
		}
	}
	uVar11 = Function_20("ped_mex_mansion", 0);
	Function_17(&uVar11, 245, 1.0f, 24, 0, 0);
	Function_17(&uVar11, 246, 1.0f, 24, 0, 0);
	Function_13(&(Global_30750[1]));
	Global_30750[1] = Function_20("ped_traveller", 3);
	switch (Global_30619)
	{
		case 0x00000000:
			Function_16(&(Global_30750[1]), 63, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 62, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 253, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 263, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 264, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 265, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 300, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 303, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 311, 10.0f, 0, 0);
			break;
		
		case 0x00000001:
			Function_16(&(Global_30750[1]), 63, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 62, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 253, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 263, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 264, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 265, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 300, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 303, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 311, 10.0f, 0, 0);
			break;
		
		case 0x00000002:
			Function_16(&(Global_30750[1]), 63, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 62, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 253, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 263, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 264, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 265, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 300, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 303, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 311, 10.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_16(&(Global_30750[1]), 63, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 62, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 253, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 263, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 264, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 265, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 300, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 303, 10.0f, 0, 0);
			Function_16(&(Global_30750[1]), 311, 10.0f, 0, 0);
			break;
	}
	Function_13(&(Global_30750[5]));
	Global_30750[5] = Function_20("animal_wilderness", 1);
	Function_16(&(Global_30750[5]), 1131, 9.0f, 0, 0);
	Function_13(&(Global_30750[8]));
	Global_30750[8] = Function_20("animal_herd", 1);
	Function_16(&(Global_30750[8]), 1009, 3.0f, 0, 0);
	uVar12 = Function_20("critters", 0);
	Function_17(&uVar12, 1081, 2.0f, 48, 0, 0);
	uVar13 = Function_20("animal_bull", 0);
	Function_17(&uVar13, 1012, 100.0f, 15, 0, 0);
	Function_17(&uVar13, 1013, 100.0f, 15, 0, 0);
	Function_17(&uVar13, 1014, 100.0f, 15, 0, 0);
	Function_13(&(Global_30750[7]));
	Global_30750[7] = Function_20("animal_bird", 0);
	Function_17(&(Global_30750[7]), 1128, 9.0f, 3, 0, 0);
	Function_17(&(Global_30750[7]), 1129, 9.0f, 3, 0, 0);
	Function_17(&(Global_30750[7]), 1130, 9.0f, 3, 0, 0);
	Function_17(&(Global_30750[7]), 1131, 9.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1132, 9.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1133, 9.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1145, 4.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1146, 4.0f, 14, 0, 0);
	Function_17(&(Global_30750[7]), 1147, 4.0f, 14, 0, 0);
	uVar14 = Function_20("chickens", 0);
	Function_17(&uVar14, 1015, 100.0f, 15, 0, 0);
	Function_17(&uVar14, 1017, 100.0f, 15, 0, 0);
	uVar15 = Function_20("goats", 0);
	Function_17(&uVar15, 1026, 10.0f, 15, 0, 0);
	Function_17(&uVar15, 1027, 10.0f, 15, 0, 0);
	Function_17(&uVar15, 1028, 10.0f, 15, 0, 0);
	uVar16 = Function_20("mules", 0);
	Function_16(&uVar16, 1000, 10.0f, 0, 0);
	Function_16(&uVar16, 1001, 10.0f, 0, 0);
	Function_16(&uVar16, 1002, 10.0f, 0, 0);
	Function_13(&(Global_30750[10]));
	Global_30750[10] = Function_20("animal_hunt", 0);
	Function_13(&(Global_30750[11]));
	Global_30750[11] = Function_20("animal_predator", 0);
	Function_16(&(Global_30750[11]), 1049, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	Function_16(&(Global_30750[11]), 1050, 2.0f, 0, 0);
	uVar17 = Function_20("dogs", 0);
	Function_17(&uVar17, 1030, 1.0f, 15, 0, 0);
	Function_17(&uVar17, 1031, 1.0f, 15, 0, 0);
	Function_17(&uVar17, 1032, 1.0f, 15, 0, 0);
	uVar18 = Function_20("null", 1);
	Function_12(Global_30750[5], 2E-05f);
	Function_13(&(Global_30750[2]));
	Global_30750[2] = Function_20("ped_law", 1);
	Function_16(&(Global_30750[2]), 461, 8.0f, 0, 0);
	Function_16(&(Global_30750[2]), 462, 8.0f, 0, 0);
	Function_16(&(Global_30750[2]), 463, 8.0f, 0, 0);
	Function_13(&(Global_30750[3]));
	Global_30750[3] = Function_20("ped_bad_guys_local", 1);
	Function_16(&(Global_30750[3]), 406, 1.0f, 0, 0);
	Function_16(&(Global_30750[3]), 409, 1.0f, 0, 0);
	Function_16(&(Global_30750[3]), 412, 1.0f, 0, 0);
	Function_13(&(Global_30750[4]));
	Global_30750[4] = Function_20("ped_bad_guys_generic", 1);
	Function_16(&(Global_30750[4]), 408, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 411, 1.0f, 0, 0);
	Function_16(&(Global_30750[4]), 414, 1.0f, 0, 0);
	Function_13(&(Global_30750[9]));
	Global_30750[9] = Function_20("ped_vehicle", 1);
	Function_16(&(Global_30750[9]), 1185, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1184, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1200, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1199, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1196, 2.0f, 0, 0);
	Function_16(&(Global_30750[9]), 1201, 2.0f, 0, 0);
	Function_13(&(Global_30750[0]));
	Global_30750[0] = Function_20("ped_wilderness", Global_30840);
	switch (Global_30619)
	{
		case 0x00000000:
			Function_16(&(Global_30750[0]), 237, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 251, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 269, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 273, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 276, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 279, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 285, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 287, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 289, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 290, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 292, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 293, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 297, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 306, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 320, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 321, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 322, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 323, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 307, 1.0f, 0, 0);
			break;
		
		case 0x00000001:
			Function_16(&(Global_30750[0]), 237, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 251, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 269, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 273, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 276, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 279, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 285, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 287, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 289, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 290, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 292, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 293, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 297, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 306, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 320, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 321, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 322, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 323, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 307, 1.0f, 0, 0);
			break;
		
		case 0x00000002:
			Function_16(&(Global_30750[0]), 237, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 251, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 269, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 273, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 276, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 279, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 285, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 287, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 289, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 290, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 292, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 293, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 297, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 306, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 320, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 321, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 322, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 323, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 307, 1.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_16(&(Global_30750[0]), 237, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 251, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 269, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 273, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 276, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 279, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 285, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 287, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 289, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 290, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 292, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 293, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 297, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 306, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 320, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 321, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 322, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 323, 1.0f, 0, 0);
			Function_16(&(Global_30750[0]), 307, 1.0f, 0, 0);
			break;
	}
	Function_13(&(Global_30750[6]));
	Global_30750[6] = Function_20("animal_horse", 4);
	Function_15(&(Global_30750[6]), 1000, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 981, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 983, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 984, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 985, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 986, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 987, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 988, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 989, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 990, 100.0f, 0, 3);
	Function_15(&(Global_30750[6]), 991, 100.0f, 0, 3);
	Function_13(&(Global_30750[15]));
	Global_30750[15] = Function_20("animal_horse_unsaddled", 0);
	Function_16(&(Global_30750[15]), 1000, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 981, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 983, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 984, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 985, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 986, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 987, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 988, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 989, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 990, 100.0f, 0, 0);
	Function_16(&(Global_30750[15]), 991, 100.0f, 0, 0);
	while (!Function_11(&(Global_29008[Local_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_10("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_30839 = (Global_30839 - 1);
		if (Global_30839 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	bVar19 = FIND_NAMED_LAYOUT("Escalera_layout");
	if (IS_LAYOUTREF_VALID(bVar19))
	{
		switch (Global_30619)
		{
			case 0x00000000:
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar17, 1, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar14, 2, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar12, 1, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar15, 1, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, Global_30750[7], 1, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar4, 2, 4, 0, 0, 1);
					Function_7(bVar20, uVar5, 3, 5, 0, 0, 1);
					Function_7(bVar20, uVar2, 3, 6, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar24 = Function_7(bVar20, uVar8, 10, 15, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
					bVar24 = Function_7(bVar20, uVar2, 2, 3, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar8, 5, 8, 0, 0, 1);
					Function_7(bVar20, uVar2, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar23 = Function_7(bVar20, uVar2, 4, 5, 0, 0, 1);
					if (IS_ZONE_VALID(bVar23))
					{
						SET_ZONE_PRIORITY(bVar23, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar23, 50.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar23, 1);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 3, 6, 0, 0, 1);
					Function_7(bVar20, uVar0, 10, 15, 0, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 2, 4, 0, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_market_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 3, 6, 0, 0, 1);
					Function_7(bVar20, uVar0, 10, 12, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_church");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				if (!Function_14())
				{
					if (Global_25974[7])
					{
						bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_liarsdice");
						bVar21 = Function_8(bVar20, uVar9, 3, 1, 0, 0);
						if (IS_VOLUME_VALID(bVar20))
						{
							if (IS_ZONE_VALID(bVar21))
							{
								Function_6(bVar21);
								SET_ZONE_FORCE_SPAWN_DISTANCE(bVar21, 50.0f);
							}
							else
							{
								LOG_ERROR("esc_pop: Cannot find escv_liarsdice to create population volumes");
							}
						}
						else
						{
							LOG_ERROR("esc_pop: Cannot find escv_liarsdice to create population volumes");
						}
					}
					if (Global_25974[8])
					{
						bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_fff");
						if (IS_VOLUME_VALID(bVar20))
						{
							bVar22 = Function_8(bVar20, uVar10, 5, 1, 0, 0);
							if (IS_ZONE_VALID(bVar22))
							{
								Function_4(bVar22);
								SET_ZONE_FORCE_SPAWN_DISTANCE(bVar22, 50.0f);
							}
							else
							{
								LOG_ERROR("esc_pop: Cannot find escv_fff to create population volumes");
							}
						}
						else
						{
							LOG_ERROR("esc_pop: Cannot find escv_fff to create population volumes");
						}
					}
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar7, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar2, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 3, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 4, 6, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 3, 0, 0, 1);
					Function_7(bVar20, uVar11, 2, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
			
			case 0x00000001:
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar17, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar14, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_3(bVar20, uVar12, 0.0001f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar15, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_3(bVar20, Global_30750[7], 1E-05f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar4, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar5, 5, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar24 = Function_7(bVar20, uVar4, 2, 4, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
					bVar24 = Function_7(bVar20, uVar5, 3, 5, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
					bVar24 = Function_7(bVar20, uVar2, 3, 6, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar1, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar8, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar2, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar23 = Function_7(bVar20, uVar2, 4, 5, 0, 0, 1);
					if (IS_ZONE_VALID(bVar23))
					{
						SET_ZONE_PRIORITY(bVar23, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar23, 50.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar23, 1);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar23 = Function_7(bVar20, uVar2, 4, 5, 0, 0, 1);
					SET_ZONE_PRIORITY(bVar23, 2);
					SET_ZONE_FORCE_SPAWN_DISTANCE(bVar23, 50.0f);
					SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar23, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 0, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 0, 0, 1);
					Function_7(bVar20, uVar2, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 1, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_market_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 6, 8, 1, 0, 1);
					Function_7(bVar20, uVar2, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_church");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				if (!Function_14())
				{
					if (Global_25974[7])
					{
						bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_liarsdice");
						bVar21 = Function_8(bVar20, uVar9, 3, 1, 0, 0);
						if (IS_VOLUME_VALID(bVar20))
						{
							if (IS_ZONE_VALID(bVar21))
							{
								SET_ZONE_PRIORITY(bVar21, 2);
								SET_ZONE_FORCE_SPAWN_DISTANCE(bVar21, 50.0f);
								SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar21, 1);
								SET_ZONE_RESERVE_GRINGOS(bVar21, 1);
							}
							else
							{
								LOG_ERROR("esc_pop: Cannot find escv_liarsdice to create population volumes");
							}
						}
						else
						{
							LOG_ERROR("esc_pop: Cannot find escv_liarsdice to create population volumes");
						}
					}
					if (Global_25974[8])
					{
						bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_fff");
						if (IS_VOLUME_VALID(bVar20))
						{
							bVar22 = Function_8(bVar20, uVar10, 4, 1, 0, 0);
							if (IS_ZONE_VALID(bVar22))
							{
								SET_ZONE_PRIORITY(bVar22, 2);
								SET_ZONE_FORCE_SPAWN_DISTANCE(bVar22, 50.0f);
								SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar22, 1);
								SET_ZONE_RESERVE_GRINGOS(bVar22, 1);
							}
							else
							{
								LOG_ERROR("esc_pop: Cannot find escv_fff to create population volumes");
							}
						}
						else
						{
							LOG_ERROR("esc_pop: Cannot find escv_fff to create population volumes");
						}
					}
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar7, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar2, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar11, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
			
			case 0x00000002:
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar17, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar14, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_3(bVar20, uVar12, 0.0001f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar15, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_3(bVar20, Global_30750[7], 1E-05f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar4, 2, 4, 0, 0, 1);
					Function_7(bVar20, uVar5, 3, 5, 0, 0, 1);
					Function_7(bVar20, uVar2, 3, 6, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar24 = Function_7(bVar20, uVar0, 2, 3, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
					bVar24 = Function_7(bVar20, uVar8, 5, 8, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar1, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar8, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar23 = Function_7(bVar20, uVar2, 4, 5, 0, 0, 1);
					if (IS_ZONE_VALID(bVar23))
					{
						SET_ZONE_PRIORITY(bVar23, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(bVar23, 50.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar23, 1);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 0, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 1, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_market_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 6, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_church");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar7, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar2, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 3, 4, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 3, 4, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 4, 8, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar2, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar11, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
			
			case 0x00000003:
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar17, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar14, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_3(bVar20, uVar12, 0.0001f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar15, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_3(bVar20, Global_30750[7], 1E-05f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar4, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar5, 5, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					bVar24 = Function_7(bVar20, uVar0, 2, 3, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
					bVar24 = Function_7(bVar20, uVar8, 5, 8, 0, 0, 1);
					if (IS_ZONE_VALID(bVar24))
					{
						SET_ZONE_PRIORITY(bVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar1, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar8, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 0, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 3, 5, 1, 0, 1);
					Function_7(bVar20, uVar1, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_market_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 6, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_church");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar0, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				if (!Function_14())
				{
					if (Global_25974[7])
					{
						bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_liarsdice");
						bVar21 = Function_8(bVar20, uVar9, 3, 1, 0, 0);
						if (IS_VOLUME_VALID(bVar20))
						{
							if (IS_ZONE_VALID(bVar21))
							{
								SET_ZONE_PRIORITY(bVar21, 2);
								SET_ZONE_FORCE_SPAWN_DISTANCE(bVar21, 50.0f);
								SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar21, 1);
								SET_ZONE_RESERVE_GRINGOS(bVar21, 1);
							}
							else
							{
								LOG_ERROR("esc_pop: Cannot find escv_liarsdice to create population volumes");
							}
						}
						else
						{
							LOG_ERROR("esc_pop: Cannot find escv_liarsdice to create population volumes");
						}
					}
					if (Global_25974[8])
					{
						bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_fff");
						if (IS_VOLUME_VALID(bVar20))
						{
							bVar22 = Function_8(bVar20, uVar10, 4, 1, 0, 0);
							if (IS_ZONE_VALID(bVar22))
							{
								SET_ZONE_PRIORITY(bVar22, 2);
								SET_ZONE_FORCE_SPAWN_DISTANCE(bVar22, 50.0f);
								SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bVar22, 1);
								SET_ZONE_RESERVE_GRINGOS(bVar22, 1);
							}
							else
							{
								LOG_ERROR("esc_pop: Cannot find escv_fff to create population volumes");
							}
						}
						else
						{
							LOG_ERROR("esc_pop: Cannot find escv_fff to create population volumes");
						}
					}
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar7, 0, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_8(bVar20, uVar2, 0, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar3, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar3, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar3, 2, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				bVar20 = FIND_VOLUME_IN_LAYOUT(bVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(bVar20))
				{
					Function_7(bVar20, uVar3, 2, 3, 1, 0, 1);
					Function_7(bVar20, uVar11, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
		}
	}
	else
	{
		LOG_ERROR("esc_pop: Cannot find one of the volumes to create population volumes");
	}
	END_POPULATION_DEFINITION();
	Global_30839 = (Global_30839 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_11(&(Global_29008[Local_0]), 128) && Global_30839 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_13171 = Global_29155[Local_010].f_20;
	Function_10("Finished loading Escalara population file", 5.0f);
	Function_1(&(Global_29008[Local_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x4419 / 17433
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x4428 / 17448
{
	int iVar0;
	
	if (!Function_9(1))
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

var Function_3(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x447D / 17533
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

void Function_4(bool bParam0) //Position: 0x44FD / 17661
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(bool bParam0) //Position: 0x4591 / 17809
{
	SET_ZONE_PRIORITY(bParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(bParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(bParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(bParam0, 0, 0);
	return;
}

void Function_6(bool bParam0) //Position: 0x45B0 / 17840
{
	Function_5(bParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(bParam0, "fake_liars_dice");
	return;
}

bool Function_7(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x45D7 / 17879
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

bool Function_8(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x4659 / 18009
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

bool Function_9(int iParam0) //Position: 0x46D9 / 18137
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x46F5 / 18165
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x4733 / 18227
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x474F / 18255
{
	SET_DEFAULT_POPULATION_TYPE(uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_13(var uParam0) //Position: 0x475F / 18271
{
	DESTROY_POPULATION_SET(*uParam0);
	return;
}

bool Function_14() //Position: 0x476B / 18283
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_15(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x4774 / 18292
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_16(uParam0, bParam1, fParam2, bParam3, 0);
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

var Function_16(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x47B9 / 18361
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

var Function_17(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x4835 / 18485
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(*uParam0, bParam1, fParam2, Function_19(iParam3), Function_18(iParam3));
	if (bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(*uParam0) - 1);
}

var Function_18(int iParam0) //Position: 0x48AD / 18605
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

var Function_19(int iParam0) //Position: 0x4919 / 18713
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

var Function_20(bool bParam0, int iParam1) //Position: 0x4985 / 18821
{
	return CREATE_NAMED_POPULATION_SET(bParam0, iParam1);
}

void Function_21(bool bParam0, var uParam1) //Position: 0x4992 / 18834
{
	if (!Function_9(128))
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

