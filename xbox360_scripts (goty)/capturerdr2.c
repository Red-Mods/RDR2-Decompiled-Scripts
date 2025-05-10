//Decompiled with MagicRDR v1.0
//Function Count : 5
//Statics Count : 422
//Natives Count : 25
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	vector3 vLocal_1[140] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iLocal_0 = 0;
	iVar0 = 0;
	while (iVar0 > 300 && !IS_EXITFLAG_SET())
	{
		PRINTSTRING("We be spinning");
		PRINTNL();
		WAIT(0);
		iVar0++;
	}
	Function_3();
	iVar1 = 10;
	uVar2[0] = "K";
	uVar2[1] = "L";
	uVar2[2] = "M";
	uVar2[3] = "N";
	uVar2[4] = "O";
	uVar2[5] = "P";
	uVar2[6] = "Q";
	uVar2[7] = "R";
	uVar2[8] = "S";
	uVar2[9] = "T";
	iVar13 = 7;
	iVar14 = 21;
	iVar15 = MAKE_TIME_OF_DAY(9, 0, 0);
	SET_TIME_ACCELERATION(0.0f);
	UNK_0x02DB5C93(1, 0, 1);
	UNK_0x8DD4BC60(1);
	UNK_0xD5501B1B(256, 256);
	UNK_0x1CB7C07D(1.0f);
	if (!UNK_0xD3FE15FB())
	{
		UNK_0x4C3F3C71("n/out_test");
		UNK_0xAF7D851C();
	}
	bVar16 = UNK_0x95132289();
	PRINTSTRING("captureRDR2.sc: continue mark (");
	PRINTSTRING(bVar16);
	PRINTSTRING(")");
	PRINTNL();
	iVar17 = 0;
	iVar18 = 0;
	iVar17 = 0;
	while (iVar17 < (iLocal_0 - 1))
	{
		PRINTSTRING("MARK: ");
		PRINTSTRING(uVar2[vLocal_1[iVar173].y]);
		PRINTSTRING(", ");
		PRINTINT(vLocal_1[iVar173]);
		PRINTNL();
		iVar18 = 0;
		while (iVar18 < 3)
		{
			Function_1(vLocal_1[iVar173], uVar2[vLocal_1[iVar173].y], iVar18, 1, "N:/RSGSAN/RDR2/art/AssetImages/AutomatedTestingImages/hudCaptureImages");
			iVar18++;
		}
		iVar17++;
	}
	iVar19 = 0;
	while (iVar19 > 60 && !IS_EXITFLAG_SET())
	{
		WAIT(0);
		iVar19++;
	}
	if (!UNK_0xD3FE15FB())
	{
		UNK_0x18D7E687(uVar2[0], uVar2[(iVar1 - 1)], iVar13, iVar14);
		UNK_0xC3BE5695();
		UNK_0xF38E8BBE();
	}
	UNK_0x8DD4BC60(0);
	UNK_0x02DB5C93(0, 0, 1);
	if (!UNK_0xD3FE15FB())
	{
		UNK_0xBD829B6B();
	}
	iVar19 = 0;
	while (iVar19 > 50 && !IS_EXITFLAG_SET())
	{
		WAIT(0);
		iVar19++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) //Position: 0x253 / 595
{
	UNK_0x8DD4BC60(iParam3);
	UNK_0x7306CC72(uParam4);
	Function_2(uParam0, uParam1, uParam2);
}

void Function_2(var uParam0, var uParam1, var uParam2) //Position: 0x26E / 622
{
	int iVar0;
	
	UNK_0x9631DFD0(uParam0, uParam1, uParam2);
	iVar0 = 0;
	while (iVar0 > 100 && !IS_EXITFLAG_SET())
	{
		WAIT(0);
		iVar0++;
	}
	while (!STREAMING_IS_WORLD_LOADED() && iVar0 > 1500)
	{
		PRINTSTRING("STREAMING_IS_WORLD_LOADED - Waiting for world to load...");
		PRINTNL();
		WAIT(0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 > 100 && !IS_EXITFLAG_SET())
	{
		WAIT(0);
		iVar0++;
	}
	if (!IS_EXITFLAG_SET())
	{
		UNK_0x3BED7D9F();
	}
	return;
}

void Function_3() //Position: 0x31D / 797
{
	Function_4(7, 0, "7_0");
	Function_4(8, 0, "8_0");
	Function_4(9, 0, "9_0");
	Function_4(10, 0, "10_0");
	Function_4(11, 0, "11_0");
	Function_4(12, 0, "12_0");
	Function_4(13, 0, "13_0");
	Function_4(14, 0, "14_0");
	Function_4(15, 0, "15_0");
	Function_4(16, 0, "16_0");
	Function_4(17, 0, "17_0");
	Function_4(18, 0, "18_0");
	Function_4(19, 0, "19_0");
	Function_4(20, 0, "20_0");
	Function_4(7, 1, "7_1");
	Function_4(8, 1, "8_1");
	Function_4(9, 1, "9_1");
	Function_4(10, 1, "10_1");
	Function_4(11, 1, "11_1");
	Function_4(12, 1, "12_1");
	Function_4(13, 1, "13_1");
	Function_4(14, 1, "14_1");
	Function_4(15, 1, "15_1");
	Function_4(16, 1, "16_1");
	Function_4(17, 1, "17_1");
	Function_4(18, 1, "18_1");
	Function_4(19, 1, "19_1");
	Function_4(20, 1, "20_1");
	Function_4(7, 2, "7_2");
	Function_4(8, 2, "8_2");
	Function_4(9, 2, "9_2");
	Function_4(10, 2, "10_2");
	Function_4(11, 2, "11_2");
	Function_4(12, 2, "12_2");
	Function_4(13, 2, "13_2");
	Function_4(14, 2, "14_2");
	Function_4(15, 2, "15_2");
	Function_4(16, 2, "16_2");
	Function_4(17, 2, "17_2");
	Function_4(18, 2, "18_2");
	Function_4(19, 2, "19_2");
	Function_4(20, 2, "20_2");
	Function_4(7, 3, "7_3");
	Function_4(8, 3, "8_3");
	Function_4(9, 3, "9_3");
	Function_4(10, 3, "10_3");
	Function_4(11, 3, "11_3");
	Function_4(12, 3, "12_3");
	Function_4(13, 3, "13_3");
	Function_4(14, 3, "14_3");
	Function_4(15, 3, "15_3");
	Function_4(16, 3, "16_3");
	Function_4(17, 3, "17_3");
	Function_4(18, 3, "18_3");
	Function_4(19, 3, "19_3");
	Function_4(20, 3, "20_3");
	Function_4(7, 4, "7_4");
	Function_4(8, 4, "8_4");
	Function_4(9, 4, "9_4");
	Function_4(10, 4, "10_4");
	Function_4(11, 4, "11_4");
	Function_4(12, 4, "12_4");
	Function_4(13, 4, "13_4");
	Function_4(14, 4, "14_4");
	Function_4(15, 4, "15_4");
	Function_4(16, 4, "16_4");
	Function_4(17, 4, "17_4");
	Function_4(18, 4, "18_4");
	Function_4(19, 4, "19_4");
	Function_4(20, 4, "20_4");
	Function_4(7, 5, "7_5");
	Function_4(8, 5, "8_5");
	Function_4(9, 5, "9_5");
	Function_4(10, 5, "10_5");
	Function_4(11, 5, "11_5");
	Function_4(12, 5, "12_5");
	Function_4(13, 5, "13_5");
	Function_4(14, 5, "14_5");
	Function_4(15, 5, "15_5");
	Function_4(16, 5, "16_5");
	Function_4(17, 5, "17_5");
	Function_4(18, 5, "18_5");
	Function_4(19, 5, "19_5");
	Function_4(20, 5, "20_5");
	Function_4(7, 6, "7_6");
	Function_4(8, 6, "8_6");
	Function_4(9, 6, "9_6");
	Function_4(10, 6, "10_6");
	Function_4(11, 6, "11_6");
	Function_4(12, 6, "12_6");
	Function_4(13, 6, "13_6");
	Function_4(14, 6, "14_6");
	Function_4(15, 6, "15_6");
	Function_4(16, 6, "16_6");
	Function_4(17, 6, "17_6");
	Function_4(18, 6, "18_6");
	Function_4(19, 6, "19_6");
	Function_4(20, 6, "20_6");
	Function_4(7, 7, "7_7");
	Function_4(8, 7, "8_7");
	Function_4(9, 7, "9_7");
	Function_4(10, 7, "10_7");
	Function_4(11, 7, "11_7");
	Function_4(12, 7, "12_7");
	Function_4(13, 7, "13_7");
	Function_4(14, 7, "14_7");
	Function_4(15, 7, "15_7");
	Function_4(16, 7, "16_7");
	Function_4(17, 7, "17_7");
	Function_4(18, 7, "18_7");
	Function_4(19, 7, "19_7");
	Function_4(20, 7, "20_7");
	Function_4(7, 8, "7_8");
	Function_4(8, 8, "8_8");
	Function_4(9, 8, "9_8");
	Function_4(10, 8, "10_8");
	Function_4(11, 8, "11_8");
	Function_4(12, 8, "12_8");
	Function_4(13, 8, "13_8");
	Function_4(14, 8, "14_8");
	Function_4(15, 8, "15_8");
	Function_4(16, 8, "16_8");
	Function_4(17, 8, "17_8");
	Function_4(18, 8, "18_8");
	Function_4(19, 8, "19_8");
	Function_4(20, 8, "20_8");
	Function_4(7, 9, "7_9");
	Function_4(8, 9, "8_9");
	Function_4(9, 9, "9_9");
	Function_4(10, 9, "10_9");
	Function_4(11, 9, "11_9");
	Function_4(12, 9, "12_9");
	Function_4(13, 9, "13_9");
	Function_4(14, 9, "14_9");
	Function_4(15, 9, "15_9");
	Function_4(16, 9, "16_9");
	Function_4(17, 9, "17_9");
	Function_4(18, 9, "18_9");
	Function_4(19, 9, "19_9");
	Function_4(20, 9, "20_9");
	return;
}

void Function_4(var uParam0, int iParam1, int iParam2) //Position: 0xA19 / 2585
{
	vector3 vVar0;
	
	if (iLocal_0 == vLocal_1)
	{
		LOG_ERROR("captureRDR2.sc: Too many tiles: Increase MAX_TILES at top of captureRDR2.sc");
		return;
	}
	vVar0.x = uParam0;
	vVar0.y = iParam1;
	vVar0.z = iParam2;
	vLocal_1[iLocal_03] = { StackVal, StackVal, vVar0 };
	iLocal_0++;
	return;
}

