//Decompiled with MagicRDR v1.0
//Function Count : 21
//Statics Count : 4
//Natives Count : 49
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
	var uVar12;
	var uVar13;
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
	
	iLocal_0 = &uScriptParam_0;
	ENABLE_AMBIENT_SPAWNING(false);
	strcpy(&Global_21682, "Loa", 4);
	Function_20("Loading Escalera population file", 3);
	Global_47148++;
	BEGIN_POPULATION_DEFINITION();
	bVar0 = Function_19("ped_generic", 0);
	Function_16(&bVar0, 270, 2.0f, 15, 0, 0);
	Function_16(&bVar0, 271, 2.0f, 15, 0, 0);
	Function_16(&bVar0, 272, 2.0f, 15, 0, 0);
	Function_16(&bVar0, 317, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 318, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 314, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 302, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 278, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 281, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 284, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 295, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 296, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 286, 1.0f, 15, 0, 0);
	Function_16(&bVar0, 291, 1.0f, 15, 0, 0);
	bVar1 = Function_19("ped_town_night", 0);
	Function_16(&bVar1, 270, 2.0f, 48, 0, 0);
	Function_16(&bVar1, 271, 2.0f, 48, 0, 0);
	Function_16(&bVar1, 272, 2.0f, 48, 0, 0);
	Function_16(&bVar1, 317, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 318, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 302, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 278, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 281, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 284, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 295, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 296, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 286, 1.0f, 48, 0, 0);
	Function_16(&bVar1, 291, 1.0f, 48, 0, 0);
	bVar2 = Function_19("ped_mex_army_gen", 0);
	Function_16(&bVar2, 391, 1.0f, 63, 0, 0);
	Function_16(&bVar2, 393, 1.0f, 63, 0, 0);
	Function_16(&bVar2, 395, 1.0f, 63, 0, 0);
	Function_16(&bVar2, 396, 1.0f, 63, 0, 0);
	bVar3 = Function_19("ped_mex_rebels_gen", 0);
	Function_16(&bVar3, 516, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 517, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 518, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 519, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 520, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 521, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 522, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 523, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 524, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 525, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 526, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 527, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 529, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 530, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 531, 1.0f, 63, 0, 0);
	Function_16(&bVar3, 532, 1.0f, 63, 0, 0);
	bVar4 = Function_19("esc_day_brothel", 0);
	Function_16(&bVar4, 71, 5.0f, 15, 0, 0);
	Function_16(&bVar4, 245, 5.0f, 15, 0, 0);
	Function_16(&bVar4, 246, 5.0f, 15, 0, 0);
	Function_16(&bVar4, 247, 5.0f, 15, 0, 0);
	Function_16(&bVar4, 249, 5.0f, 15, 0, 0);
	Function_16(&bVar4, 316, 5.0f, 15, 0, 0);
	bVar5 = Function_19("esc_night_brothel", 0);
	Function_16(&bVar5, 71, 5.0f, 48, 0, 0);
	Function_16(&bVar5, 245, 5.0f, 48, 0, 0);
	Function_16(&bVar5, 246, 5.0f, 48, 0, 0);
	Function_16(&bVar5, 247, 5.0f, 48, 0, 0);
	Function_16(&bVar5, 249, 5.0f, 48, 0, 0);
	Function_16(&bVar5, 316, 5.0f, 48, 0, 0);
	bVar6 = Function_19("ped_men", 0);
	Function_15(&bVar6, 295, 1.0f, 0, 0);
	Function_15(&bVar6, 296, 1.0f, 0, 0);
	Function_15(&bVar6, 286, 1.0f, 0, 0);
	bVar7 = Function_19("ped_prisoners", 0);
	Function_14(&bVar7, 295, 1.0f, 0, 0);
	Function_14(&bVar7, 296, 1.0f, 0, 0);
	Function_14(&bVar7, 286, 1.0f, 0, 0);
	bVar8 = Function_19("ped_saloon", 0);
	Function_16(&bVar8, 272, 4.0f, 48, 0, 0);
	Function_16(&bVar8, 247, 8.0f, 48, 0, 0);
	Function_16(&bVar8, 249, 1.0f, 24, 0, 0);
	Function_16(&bVar8, 302, 2.0f, 48, 0, 0);
	Function_16(&bVar8, 278, 4.0f, 48, 0, 0);
	Function_16(&bVar8, 282, 4.0f, 48, 0, 0);
	Function_16(&bVar8, 284, 4.0f, 48, 0, 0);
	Function_16(&bVar8, 295, 4.0f, 48, 0, 0);
	Function_16(&bVar8, 302, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 278, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 281, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 284, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 295, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 296, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 286, 1.0f, 48, 0, 0);
	Function_16(&bVar8, 291, 1.0f, 48, 0, 0);
	if (Global_39266[7])
	{
		bVar9 = Function_19("ped_liarsdice", 0);
		Function_15(&bVar9, 379, 1.0f, 0, 0);
		Function_15(&bVar9, 261, 1.0f, 0, 0);
		Function_15(&bVar9, 267, 1.0f, 0, 0);
		Function_15(&bVar9, 38, 1.0f, 0, 0);
		Function_15(&bVar9, 138, 1.0f, 0, 0);
		Function_15(&bVar9, 200, 1.0f, 0, 0);
		Function_15(&bVar9, 207, 1.0f, 0, 0);
		Function_15(&bVar9, 312, 1.0f, 0, 0);
		Function_15(&bVar9, 455, 1.0f, 0, 0);
	}
	if (Global_39266[8])
	{
		bVar10 = Function_19("ped_fivefinger", 0);
		Function_15(&bVar10, 261, 1.0f, 0, 0);
		Function_15(&bVar10, 283, 1.0f, 0, 0);
		Function_15(&bVar10, 280, 1.0f, 0, 0);
		Function_15(&bVar10, 162, 1.0f, 0, 0);
		Function_15(&bVar10, 268, 1.0f, 0, 0);
		Function_15(&bVar10, 294, 1.0f, 0, 0);
		Function_15(&bVar10, 461, 1.0f, 0, 0);
		Function_15(&bVar10, 311, 1.0f, 0, 0);
		Function_15(&bVar10, 137, 1.0f, 0, 0);
	}
	bVar11 = Function_19("ped_mex_mansion", 0);
	Function_16(&bVar11, 245, 1.0f, 24, 0, 0);
	Function_16(&bVar11, 246, 1.0f, 24, 0, 0);
	Function_13(&(Global_46972[1]));
	Global_46972[1] = Function_19("ped_traveller", 3);
	switch (Global_46720)
	{
		case 0x00000000:
			Function_15(&(Global_46972[1]), 63, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 62, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 253, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 263, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 264, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 265, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 300, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 303, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 311, 10.0f, 0, 0);
			break;
		
		case 0x00000001:
			Function_15(&(Global_46972[1]), 63, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 62, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 253, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 263, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 264, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 265, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 300, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 303, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 311, 10.0f, 0, 0);
			break;
		
		case 0x00000002:
			Function_15(&(Global_46972[1]), 63, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 62, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 253, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 263, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 264, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 265, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 300, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 303, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 311, 10.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_15(&(Global_46972[1]), 63, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 62, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 253, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 263, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 264, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 265, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 300, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 303, 10.0f, 0, 0);
			Function_15(&(Global_46972[1]), 311, 10.0f, 0, 0);
			break;
	}
	Function_13(&(Global_46972[5]));
	Global_46972[5] = Function_19("animal_wilderness", 1);
	Function_15(&(Global_46972[5]), 1131, 9.0f, 0, 0);
	Function_13(&(Global_46972[8]));
	Global_46972[8] = Function_19("animal_herd", 1);
	Function_15(&(Global_46972[8]), 1009, 3.0f, 0, 0);
	uVar12 = Function_19("critters", 0);
	Function_16(&uVar12, 1081, 2.0f, 48, 0, 0);
	uVar13 = Function_19("animal_bull", 0);
	Function_16(&uVar13, 1012, 100.0f, 15, 0, 0);
	Function_16(&uVar13, 1013, 100.0f, 15, 0, 0);
	Function_16(&uVar13, 1014, 100.0f, 15, 0, 0);
	Function_13(&(Global_46972[7]));
	Global_46972[7] = Function_19("animal_bird", 0);
	Function_16(&(Global_46972[7]), 1128, 9.0f, 3, 0, 0);
	Function_16(&(Global_46972[7]), 1129, 9.0f, 3, 0, 0);
	Function_16(&(Global_46972[7]), 1130, 9.0f, 3, 0, 0);
	Function_16(&(Global_46972[7]), 1131, 9.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1132, 9.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1133, 9.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1145, 4.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1146, 4.0f, 14, 0, 0);
	Function_16(&(Global_46972[7]), 1147, 4.0f, 14, 0, 0);
	bVar14 = Function_19("chickens", 0);
	Function_16(&bVar14, 1015, 100.0f, 15, 0, 0);
	Function_16(&bVar14, 1017, 100.0f, 15, 0, 0);
	bVar15 = Function_19("goats", 0);
	Function_16(&bVar15, 1026, 10.0f, 15, 0, 0);
	Function_16(&bVar15, 1027, 10.0f, 15, 0, 0);
	Function_16(&bVar15, 1028, 10.0f, 15, 0, 0);
	bVar16 = Function_19("mules", 0);
	Function_15(&bVar16, 1000, 10.0f, 0, 0);
	Function_15(&bVar16, 1001, 10.0f, 0, 0);
	Function_15(&bVar16, 1002, 10.0f, 0, 0);
	Function_13(&(Global_46972[10]));
	Global_46972[10] = Function_19("animal_hunt", 0);
	Function_13(&(Global_46972[11]));
	Global_46972[11] = Function_19("animal_predator", 0);
	Function_15(&(Global_46972[11]), 1049, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	Function_15(&(Global_46972[11]), 1050, 2.0f, 0, 0);
	bVar17 = Function_19("dogs", 0);
	Function_16(&bVar17, 1030, 1.0f, 15, 0, 0);
	Function_16(&bVar17, 1031, 1.0f, 15, 0, 0);
	Function_16(&bVar17, 1032, 1.0f, 15, 0, 0);
	uVar18 = Function_19("null", 1);
	Function_12(&(Global_46972[5]), 2E-05f);
	Function_13(&(Global_46972[2]));
	Global_46972[2] = Function_19("ped_law", 1);
	Function_15(&(Global_46972[2]), 461, 8.0f, 0, 0);
	Function_15(&(Global_46972[2]), 462, 8.0f, 0, 0);
	Function_15(&(Global_46972[2]), 463, 8.0f, 0, 0);
	Function_13(&(Global_46972[3]));
	Global_46972[3] = Function_19("ped_bad_guys_local", 1);
	Function_15(&(Global_46972[3]), 406, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 409, 1.0f, 0, 0);
	Function_15(&(Global_46972[3]), 412, 1.0f, 0, 0);
	Function_13(&(Global_46972[4]));
	Global_46972[4] = Function_19("ped_bad_guys_generic", 1);
	Function_15(&(Global_46972[4]), 408, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 411, 1.0f, 0, 0);
	Function_15(&(Global_46972[4]), 414, 1.0f, 0, 0);
	Function_13(&(Global_46972[9]));
	Global_46972[9] = Function_19("ped_vehicle", 1);
	Function_15(&(Global_46972[9]), 1185, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1184, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1200, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1199, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1196, 2.0f, 0, 0);
	Function_15(&(Global_46972[9]), 1201, 2.0f, 0, 0);
	Function_13(&(Global_46972[0]));
	Global_46972[0] = Function_19("ped_wilderness", Global_47149);
	switch (Global_46720)
	{
		case 0x00000000:
			Function_15(&(Global_46972[0]), 237, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 251, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 269, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 273, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 276, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 279, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 285, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 287, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 289, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 290, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 292, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 293, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 297, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 306, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 320, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 321, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 322, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 323, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 307, 1.0f, 0, 0);
			break;
		
		case 0x00000001:
			Function_15(&(Global_46972[0]), 237, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 251, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 269, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 273, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 276, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 279, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 285, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 287, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 289, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 290, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 292, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 293, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 297, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 306, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 320, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 321, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 322, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 323, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 307, 1.0f, 0, 0);
			break;
		
		case 0x00000002:
			Function_15(&(Global_46972[0]), 237, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 251, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 269, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 273, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 276, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 279, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 285, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 287, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 289, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 290, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 292, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 293, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 297, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 306, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 320, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 321, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 322, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 323, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 307, 1.0f, 0, 0);
			break;
		
		case 0x00000003:
			Function_15(&(Global_46972[0]), 237, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 251, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 269, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 273, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 276, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 279, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 285, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 287, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 289, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 290, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 292, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 293, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 297, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 306, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 320, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 321, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 322, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 323, 1.0f, 0, 0);
			Function_15(&(Global_46972[0]), 307, 1.0f, 0, 0);
			break;
	}
	Function_13(&(Global_46972[6]));
	Global_46972[6] = Function_19("animal_horse", 4);
	Function_14(&(Global_46972[6]), 1000, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 981, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 983, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 984, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 985, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 986, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 987, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 988, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 989, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 990, 100.0f, 0, 3);
	Function_14(&(Global_46972[6]), 991, 100.0f, 0, 3);
	Function_13(&(Global_46972[15]));
	Global_46972[15] = Function_19("animal_horse_unsaddled", 0);
	Function_15(&(Global_46972[15]), 1000, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 981, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 983, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 984, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 985, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 986, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 987, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 988, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 989, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 990, 100.0f, 0, 0);
	Function_15(&(Global_46972[15]), 991, 100.0f, 0, 0);
	while (!Function_11(&(Global_43791[iLocal_0]), 16) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (IS_EXITFLAG_SET())
	{
		Function_10("Exiting population file early", 5.0f);
		END_POPULATION_DEFINITION();
		Global_47148 = (Global_47148 - 1);
		if (Global_47148 == 0)
		{
			ENABLE_AMBIENT_SPAWNING(Function_9(1));
		}
		TERMINATE_THIS_SCRIPT();
	}
	uVar19 = FIND_NAMED_LAYOUT("Escalera_layout");
	if (IS_LAYOUTREF_VALID(&uVar19))
	{
		switch (Global_46720)
		{
			case 0x00000000:
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar17, 1, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar14, 2, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &uVar12, 1, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar15, 1, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &(Global_46972[7]), 1, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar4, 2, 4, 0, 0, 1);
					Function_7(&uVar20, &bVar5, 3, 5, 0, 0, 1);
					Function_7(&uVar20, &bVar2, 3, 6, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar24 = Function_7(&uVar20, &bVar8, 10, 15, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
					uVar24 = Function_7(&uVar20, &bVar2, 2, 3, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar8, 5, 8, 0, 0, 1);
					Function_7(&uVar20, &bVar2, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar23 = Function_7(&uVar20, &bVar2, 4, 5, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar23))
					{
						SET_ZONE_PRIORITY(&uVar23, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar23, 50.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar23, 1);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 3, 6, 0, 0, 1);
					Function_7(&uVar20, &bVar0, 10, 15, 0, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 2, 4, 0, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_market_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 3, 6, 0, 0, 1);
					Function_7(&uVar20, &bVar0, 10, 12, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_church");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				if (Global_39266[7])
				{
					uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_liarsdice");
					uVar21 = Function_8(&uVar20, &bVar9, 3, 1, 0, 0);
					if (IS_VOLUME_VALID(&uVar20))
					{
						if (IS_ZONE_VALID(&uVar21))
						{
							Function_6(&uVar21);
							SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar21, 50.0f);
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
				if (Global_39266[8])
				{
					uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_fff");
					if (IS_VOLUME_VALID(&uVar20))
					{
						uVar22 = Function_8(&uVar20, &bVar10, 5, 1, 0, 0);
						if (IS_ZONE_VALID(&uVar22))
						{
							Function_4(&uVar22);
							SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar22, 50.0f);
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
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar7, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar2, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 3, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 4, 6, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 3, 0, 0, 1);
					Function_7(&uVar20, &bVar11, 2, 5, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
			
			case 0x00000001:
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar17, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar14, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_3(&uVar20, &uVar12, 0,0001f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar15, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_3(&uVar20, &(Global_46972[7]), 1E-05f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar4, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar5, 5, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar24 = Function_7(&uVar20, &bVar4, 2, 4, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
					uVar24 = Function_7(&uVar20, &bVar5, 3, 5, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
					uVar24 = Function_7(&uVar20, &bVar2, 3, 6, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar1, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar8, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar2, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar23 = Function_7(&uVar20, &bVar2, 4, 5, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar23))
					{
						SET_ZONE_PRIORITY(&uVar23, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar23, 50.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar23, 1);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar23 = Function_7(&uVar20, &bVar2, 4, 5, 0, 0, 1);
					SET_ZONE_PRIORITY(&uVar23, 2);
					SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar23, 50.0f);
					SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar23, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 0, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 0, 0, 1);
					Function_7(&uVar20, &bVar2, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 1, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_market_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 6, 8, 1, 0, 1);
					Function_7(&uVar20, &bVar2, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_church");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				if (Global_39266[7])
				{
					uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_liarsdice");
					uVar21 = Function_8(&uVar20, &bVar9, 3, 1, 0, 0);
					if (IS_VOLUME_VALID(&uVar20))
					{
						if (IS_ZONE_VALID(&uVar21))
						{
							SET_ZONE_PRIORITY(&uVar21, 2);
							SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar21, 50.0f);
							SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar21, 1);
							SET_ZONE_RESERVE_GRINGOS(&uVar21, 1);
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
				if (Global_39266[8])
				{
					uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_fff");
					if (IS_VOLUME_VALID(&uVar20))
					{
						uVar22 = Function_8(&uVar20, &bVar10, 4, 1, 0, 0);
						if (IS_ZONE_VALID(&uVar22))
						{
							SET_ZONE_PRIORITY(&uVar22, 2);
							SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar22, 50.0f);
							SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar22, 1);
							SET_ZONE_RESERVE_GRINGOS(&uVar22, 1);
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
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar7, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar2, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar11, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
			
			case 0x00000002:
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar17, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar14, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_3(&uVar20, &uVar12, 0,0001f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar15, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_3(&uVar20, &(Global_46972[7]), 1E-05f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar4, 2, 4, 0, 0, 1);
					Function_7(&uVar20, &bVar5, 3, 5, 0, 0, 1);
					Function_7(&uVar20, &bVar2, 3, 6, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar24 = Function_7(&uVar20, &bVar0, 2, 3, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
					uVar24 = Function_7(&uVar20, &bVar8, 5, 8, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar1, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar8, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_toughGuys");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar23 = Function_7(&uVar20, &bVar2, 4, 5, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar23))
					{
						SET_ZONE_PRIORITY(&uVar23, 2);
						SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar23, 50.0f);
						SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar23, 1);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_toughGuys to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 0, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 1, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_market_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 6, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_church");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar7, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar2, 1, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 3, 4, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 3, 4, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 4, 8, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar2, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar11, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion1_set to create population volumes");
				}
				break;
			
			case 0x00000003:
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar17, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_chickens_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar14, 2, 5, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_chickens_trapped_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_animals_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_3(&uVar20, &uVar12, 0,0001f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_animals_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_goats_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar15, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_goats_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_birds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_3(&uVar20, &(Global_46972[7]), 1E-05f, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_birds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_whorehouse");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar4, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar5, 5, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_whorehouse to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					uVar24 = Function_7(&uVar20, &bVar0, 2, 3, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
					uVar24 = Function_7(&uVar20, &bVar8, 5, 8, 0, 0, 1);
					if (IS_ZONE_VALID(&uVar24))
					{
						SET_ZONE_PRIORITY(&uVar24, 3);
					}
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cantina_exterior_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar1, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar8, 2, 3, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cantina_exterior_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_streets_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 0, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_streets_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_slums_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 3, 5, 1, 0, 1);
					Function_7(&uVar20, &bVar1, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_slums_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_market_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 6, 8, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_market_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_church");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar0, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_church to create population volumes");
				}
				if (Global_39266[7])
				{
					uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_liarsdice");
					uVar21 = Function_8(&uVar20, &bVar9, 3, 1, 0, 0);
					if (IS_VOLUME_VALID(&uVar20))
					{
						if (IS_ZONE_VALID(&uVar21))
						{
							SET_ZONE_PRIORITY(&uVar21, 2);
							SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar21, 50.0f);
							SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar21, 1);
							SET_ZONE_RESERVE_GRINGOS(&uVar21, 1);
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
				if (Global_39266[8])
				{
					uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_fff");
					if (IS_VOLUME_VALID(&uVar20))
					{
						uVar22 = Function_8(&uVar20, &bVar10, 4, 1, 0, 0);
						if (IS_ZONE_VALID(&uVar22))
						{
							SET_ZONE_PRIORITY(&uVar22, 2);
							SET_ZONE_FORCE_SPAWN_DISTANCE(&uVar22, 50.0f);
							SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&uVar22, 1);
							SET_ZONE_RESERVE_GRINGOS(&uVar22, 1);
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
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_cell_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar7, 0, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_cell_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_jail_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_8(&uVar20, &bVar2, 0, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_jail_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdsbooth_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar3, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdsbooth_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_gaurdstower_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar3, 1, 2, 1, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_gaurdstower_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_grnds_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar3, 2, 3, 0, 0, 1);
				}
				else
				{
					LOG_ERROR("esc_pop: Cannot find escv_mansion_grnds_set to create population volumes");
				}
				uVar20 = FIND_VOLUME_IN_LAYOUT(&uVar19, "escv_mansion_set");
				if (IS_VOLUME_VALID(&uVar20))
				{
					Function_7(&uVar20, &bVar3, 2, 3, 1, 0, 1);
					Function_7(&uVar20, &bVar11, 2, 3, 1, 0, 1);
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
	Global_47148 = (Global_47148 - 1);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	while (!Function_2() && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (!Function_11(&(Global_43791[iLocal_0]), 128) && Global_47148 != 0)
	{
		ENABLE_AMBIENT_SPAWNING(Function_9(1));
	}
	Global_21682 = &Global_44085[iLocal_09] + 32;
	Function_10("Finished loading Escalara population file", 5.0f);
	Function_1(&(Global_43791[iLocal_0]), 64);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1) //Position: 0x468E / 18062
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_2() //Position: 0x469F / 18079
{
	int iVar0;
	
	if (!Function_9(1))
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

var Function_3(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x46F7 / 18167
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &uParam1);
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

void Function_4(int iParam0) //Position: 0x4787 / 18311
{
	Function_5(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_fivefingerfillet");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_B");
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fivefingerfillet_spectate_C");
	return;
}

void Function_5(int iParam0) //Position: 0x4821 / 18465
{
	SET_ZONE_PRIORITY(&iParam0, 2);
	SET_ZONE_SPAWN_ONLY_AT_GRINGOS(&iParam0, 1);
	SET_ZONE_RESERVE_GRINGOS(&iParam0, 1);
	SET_ZONE_RESPECT_VOLUME_RESTRICTIONS(&iParam0, 0, 0);
	return;
}

void Function_6(int iParam0) //Position: 0x4844 / 18500
{
	Function_5(&iParam0);
	CLEAR_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0);
	ADD_TO_ZONE_ALLOWED_GRINGO_TYPE_LIST(&iParam0, "fake_liars_dice");
	return;
}

var Function_7(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0x486E / 18542
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT_RANDOM(&uVar0, iParam2, iParam3);
	SET_ZONE_RESTRICT_ACTORS(&uVar0, &iParam4);
	if (&bParam5)
	{
		SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&uVar0, 1);
	}
	SET_ZONE_ALLOWED_SPAWN_READY_TOO_CLOSE(&uVar0, !&bParam6);
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

var Function_8(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x4900 / 18688
{
	var uVar0;
	
	uVar0 = CREATE_ZONE_VOLUME(&uParam0);
	SET_ZONE_POPULATION_TYPE(&uVar0, &bParam1);
	SET_ZONE_POPULATION_COUNT(&uVar0, iParam2);
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

bool Function_9(int iParam0) //Position: 0x4990 / 18832
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(char* cParam0) //Position: 0x49AC / 18860
{
	if (!Function_9(128))
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

bool Function_11(var uParam0, int iParam1) //Position: 0x49EC / 18924
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x4A09 / 18953
{
	SET_DEFAULT_POPULATION_TYPE(&uParam0);
	SET_DEFAULT_POPULATION_DENSITY(bParam1);
	return;
}

void Function_13(int iParam0) //Position: 0x4A1A / 18970
{
	DESTROY_POPULATION_SET(&iParam0);
	return;
}

var Function_14(bool bParam0, int iParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x4A27 / 18983
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_15(&bParam0, iParam1, fParam2, bParam3, 0);
	if (iVar0 > 0)
	{
		iVar1 = GET_ACTORENUM_SPECIES(iParam1);
		if ((iVar1 != 23 || iVar1 != 24) || iVar1 != 0)
		{
			SET_ACCESSORYSET_ON_SPAWN(&bParam0, iVar0, iParam4);
		}
	}
	return iVar0;
}

var Function_15(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x4A6E / 19054
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

var Function_16(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x4AF0 / 19184
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
	LINK_ACTORENUM_TO_POPULATION_TIMED(&uParam0, iParam1, fParam2, Function_18(iParam3), Function_17(iParam3));
	if (&bParam4)
	{
	}
	return (GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0) - 1);
}

var Function_17(int iParam0) //Position: 0x4B6E / 19310
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

var Function_18(int iParam0) //Position: 0x4BDA / 19418
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

var Function_19(var uParam0, int iParam1) //Position: 0x4C46 / 19526
{
	return CREATE_NAMED_POPULATION_SET(&uParam0, &iParam1);
}

void Function_20(char* cParam0) //Position: 0x4C55 / 19541
{
	if (!Function_9(128))
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

