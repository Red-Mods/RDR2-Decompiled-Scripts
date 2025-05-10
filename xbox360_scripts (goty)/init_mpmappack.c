//Decompiled with MagicRDR v1.0
//Function Count : 62
//Statics Count : 65
//Natives Count : 47
//Parameters Count : 1

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	float fLocal_9 = 0.0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 11;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 11;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	
	fLocal_9 = 1.0f;
	bVar0 = uScriptParam_0 & 1 == false;
	bVar1 = uScriptParam_0 & 2 == false;
	if (Global_34165.f_44)
	{
	}
	if (uScriptParam_0 & 4 == 0)
	{
		if (bVar0 && bVar1)
		{
		}
		return;
	}
	if (bVar1)
	{
		Function_49(bVar0);
	}
	else
	{
		Function_1(bVar0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x4D / 77
{
	var uVar0;
	
	if (bParam0)
	{
		uVar0 = "$/content/DLC/MPMapPack/mpmappack.strtbl";
		if (IS_PS3())
		{
			uVar0 = "$/content/DLC/MPMapPack/mpmappack_ps3.strtbl";
		}
		STRINGTABLE_APPEND_TABLE(uVar0);
		Function_47();
	}
	if (Global_34165.f_44)
	{
		Function_36();
		Function_31(29, 10);
		Function_20();
		Function_19();
		Function_2();
	}
	return;
}

void Function_2() //Position: 0xDE / 222
{
	Function_3(228, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_3(229, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_3(230, &Global_50170, 1, 150.0f, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_3(231, &Global_50170, 1, 50.0f, 3, 100.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_3(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x156 / 342
{
	bool bVar0;
	bool bVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			bVar1 = fParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			bVar1 = fParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			bVar1 = fParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			bVar1 = iParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			bVar1 = iParam11;
			break;
		
		case 0x0000000A:
			Function_18(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = fParam3;
			break;
	}
	if (Function_17(uParam1[iParam022]->f_32, 4) || Function_17(uParam1[iParam022]->f_32, 2))
	{
		Function_9(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_4(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_4(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x253 / 595
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_8(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_7(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_8(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_6(iParam0, 4))
	{
		Function_5(Function_8(iParam0), 0);
	}
}

void Function_5(char* cParam0, int iParam1) //Position: 0x30A / 778
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

bool Function_6(int iParam0, int iParam1) //Position: 0x32F / 815
{
	return Function_17(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_7(int iParam0) //Position: 0x343 / 835
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_8(int iParam0) //Position: 0x377 / 887
{
	return Global_50170[iParam022].f_24;
}

void Function_9(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x386 / 902
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_16(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_8(iParam0));
	if ((bParam3 && Function_6(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_8(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_7(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_8(iParam0), &Var7, 0, 2, Function_6(iParam0, 4));
			if (!bParam3)
			{
				Function_10(iParam0, 4);
			}
		}
	}
}

void Function_10(int iParam0, int iParam1) //Position: 0x443 / 1091
{
	Function_11(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x457 / 1111
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x466 / 1126
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_7(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_13(int iParam0) //Position: 0x486 / 1158
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_14(int iParam0) //Position: 0x4B4 / 1204
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_15(int iParam0) //Position: 0x4E4 / 1252
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_16(int iParam0) //Position: 0x515 / 1301
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_17(var uParam0, int iParam1) //Position: 0x693 / 1683
{
	return (uParam0 && iParam1) == 0;
}

void Function_18(int iParam0, int iParam1) //Position: 0x6A0 / 1696
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_16(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_8(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_7(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_8(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_8(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_8(iParam0), 1.0f, 0, 0);
	}
	return;
}

void Function_19() //Position: 0x722 / 1826
{
	if (!Function_6(228, 2))
	{
		Function_10(228, 2);
		Function_9(228, 0, 0, 0);
	}
	if (!Function_6(229, 2))
	{
		Function_10(229, 2);
		Function_9(229, 0, 0, 0);
	}
	if (!Function_6(230, 2))
	{
		Function_10(230, 2);
		Function_9(230, 0, 0, 0);
	}
	if (!Function_6(231, 2))
	{
		Function_10(231, 2);
		Function_9(231, 0, 0, 0);
	}
	return;
}

void Function_20() //Position: 0x788 / 1928
{
	Function_24(228, &Global_50170, "WP_TOM", 1, 5, Function_30());
	Function_24(229, &Global_50170, "WP_TOM2", 1, 5, Function_23());
	Function_24(230, &Global_50170, "PVPTS", 1, 6, Function_22());
	Function_24(231, &Global_50170, "PVPRT", 1, 6, Function_21());
	return;
}

bool Function_21() //Position: 0x7E5 / 2021
{
	return "MP_Revenge_Icon";
}

bool Function_22() //Position: 0x7FD / 2045
{
	return "MP_TrickShot_Icon";
}

bool Function_23() //Position: 0x817 / 2071
{
	return "challenge_01lvl2";
}

void Function_24(int iParam0, var uParam1, char* cParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x830 / 2096
{
	strcpy(uParam1[iParam022] + 16, cParam2, 8);
	(*uParam1)[iParam022] = iParam0;
	uParam1[iParam022]->f_84 = bParam3;
	if (Global_3364 || Global_83864.f_1276)
	{
		uParam1[iParam022]->f_8 = 0;
		Global_50170[iParam022].f_28 = 0;
	}
	if (bParam3)
	{
		if (!Global_34165.f_44)
		{
			uParam1[iParam022]->f_4 = 1;
			uParam1[iParam022]->f_8 = 0;
			uParam1[iParam022]->f_12 = 0.0f;
			return;
		}
	}
	if (Global_83864.f_1276)
	{
		Function_28(iParam0, 4);
		Function_28(iParam0, 2);
		Function_27(iParam0, 0);
		uParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_8(iParam0), uParam1[iParam022]->f_12, 0, 0);
		REMOVE_JOURNAL_ENTRY(Function_8(iParam0), 1);
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = Function_26();
	}
	Function_25(iParam0, bParam4, bParam5);
	Function_9(iParam0, 0, 0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_18(iParam0, 1);
	}
	else
	{
		uParam1[iParam022]->f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Function_8(iParam0), uParam1[iParam022]->f_12, 0, 0);
	}
}

var Function_25(int iParam0, int iParam1, int iParam2) //Position: 0x940 / 2368
{
	struct<6> Var0;
	struct<4> Var6;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(iParam0) };
	Global_50170[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	Var6 = { StackVal, StackVal, StackVal, Function_7(iParam0) };
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	return Global_50170[iParam022].f_24;
}

bool Function_26() //Position: 0x97E / 2430
{
	return "SC_Travel_Icon";
}

void Function_27(int iParam0, int iParam1) //Position: 0x995 / 2453
{
	REMOVE_JOURNAL_ENTRY(Global_50170[iParam022].f_24, iParam1);
	return;
}

void Function_28(int iParam0, int iParam1) //Position: 0x9A9 / 2473
{
	Function_29(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_29(var uParam0, var uParam1) //Position: 0x9BD / 2493
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	return;
}

var Function_30() //Position: 0x9D0 / 2512
{
	return "challenge_01";
}

void Function_31(var uParam0, int iParam1) //Position: 0x9E5 / 2533
{
	bool bVar0;
	char* cVar1[32];
	struct<2> Var9;
	
	bVar0 = DECOR_GET_INT(Function_35(), "DLCFM_Weapon");
	DECOR_SET_INT(Function_35(), "DLCFM_Weapon", bVar0 + 1);
	strcpy(&cVar1, "DLCFM_Weapon_", 32);
	straddi(&cVar1, bVar0, 32);
	Var9 = uParam0;
	Var9.f_4 = iParam1;
	DECOR_SET_INT(StackVal, Function_35(), Function_32(&cVar1, Var9, 0));
	return;
}

var Function_32(struct<5> Param0) //Position: 0xA51 / 2641
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_33())) || SHIFT_LEFT(bParam2, Function_33() + 8));
}

int Function_33() //Position: 0xA6F / 2671
{
	return Function_34(39);
}

int Function_34(bool bParam0) //Position: 0xA7A / 2682
{
	bool bVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	bVar0 = false;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		bVar0++;
	}
	return bVar0;
}

var Function_35() //Position: 0xAA8 / 2728
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_36() //Position: 0xAD7 / 2775
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char[] cVar170[4];
	int iVar171;
	bool bVar172;
	bool bVar340;
	int iVar508;
	bool bVar676;
	int iVar844;
	
	uVar0 = "MULTI_ROTATION_MAPPACK_FFA";
	iVar1 = 62;
	*(&bVar2 + 76) = 36;
	Function_44(&bVar2, uVar0, "", iVar1, 3, 16, 4294967295, 2, 0);
	Function_43(&bVar2, "CFA_THI");
	Function_43(&bVar2, "DM_THI");
	Function_43(&bVar2, "CFA_W6");
	Function_43(&bVar2, "DM_BLK");
	Function_43(&bVar2, "DM_UPR");
	Function_43(&bVar2, "CFA_TUM");
	Function_43(&bVar2, "DM_FOM");
	Function_43(&bVar2, "DM_UPR");
	Function_43(&bVar2, "CFA_BLK");
	Function_43(&bVar2, "DM_ESC");
	Function_43(&bVar2, "DM_THI");
	Function_43(&bVar2, "CFA_FOM");
	Function_43(&bVar2, "DM_W6");
	Function_43(&bVar2, "DM_BLK");
	Function_43(&bVar2, "DM_UPR");
	Function_42(&bVar2, 1);
	cVar170 = "MULTI_ROTATION_MAPPACK_GANG";
	iVar171 = 63;
	*(&bVar172 + 76) = 36;
	Function_44(&bVar172, cVar170, "", iVar171, 2, 16, 4294967295, 2, 0);
	Function_41(11, 9);
	Function_41(11, 5);
	Function_41(11, 6);
	Function_41(11, 7);
	Function_39(&bVar172, ((((Function_40(11) || Function_40(9)) || Function_40(5)) || Function_40(6)) || Function_40(7)));
	Function_43(&bVar172, "CTF_TUM");
	Function_43(&bVar172, "TDM_ESC");
	Function_43(&bVar172, "CTF_THI");
	Function_43(&bVar172, "TDM_W6");
	Function_43(&bVar172, "CFS_BLK");
	Function_43(&bVar172, "TDM_FOM");
	Function_43(&bVar172, "CTF_MAN");
	Function_43(&bVar172, "TDM_BLK");
	Function_43(&bVar172, "CFS_DZC");
	Function_43(&bVar172, "TDM_UPR");
	Function_43(&bVar172, "CTF_W2");
	Function_43(&bVar172, "TDM_ESC");
	Function_43(&bVar172, "CFS_FOM");
	Function_43(&bVar172, "TDM_W6");
	Function_43(&bVar172, "CTF_BLK");
	Function_43(&bVar172, "TDM_THI");
	Function_43(&bVar172, "CFS_MAN");
	Function_43(&bVar172, "TDM_FOM");
	Function_43(&bVar172, "CTF_W4");
	Function_43(&bVar172, "TDM_UPR");
	Function_43(&bVar172, "CFS_W4");
	Function_43(&bVar172, "TDM_BLK");
	Function_43(&bVar172, "CTF_W5");
	Function_43(&bVar172, "TDM_THI");
	Function_43(&bVar172, "CFS_THI");
	Function_42(&bVar172, 1);
	*(&bVar340 + 76) = 36;
	*(&iVar508 + 76) = 36;
	Function_44(&bVar340, "MULTI_ROTATION_MAPPACK_HARD_FFA", "", 64, 3, 16, 446, 9746, 0);
	if (Function_38(iVar1, &iVar508))
	{
		Function_37(&iVar508, &bVar340);
	}
	Function_42(&bVar340, 1);
	*(&bVar676 + 76) = 36;
	*(&iVar844 + 76) = 36;
	Function_44(&bVar676, "MULTI_ROTATION_MAPPACK_HD_GANG", "", 65, 2, 16, 445, 9746, 0);
	Function_39(&bVar676, ((((Function_40(11) || Function_40(9)) || Function_40(5)) || Function_40(6)) || Function_40(7)));
	if (Function_38(iVar171, &iVar844))
	{
		Function_37(&iVar844, &bVar676);
	}
	Function_42(&bVar676, 1);
	return;
}

void Function_37(int iParam0, char* cParam1) //Position: 0xF00 / 3840
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_72 - 1))
	{
		Function_43(cParam1, iParam0 + 76[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_38(int iParam0, int iParam1) //Position: 0xF2B / 3883
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_0[iVar0168].f_64 == iParam0)
		{
			*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_0[iVar0168] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_39(char* cParam0, int iParam1) //Position: 0xF64 / 3940
{
	cParam0->f_660 = iParam1;
	return;
}

int Function_40(bool bParam0) //Position: 0xF71 / 3953
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_41(bool bParam0, bool bParam1) //Position: 0xF7D / 3965
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return;
	}
	if (bParam1 > 0 || bParam1 <= 16)
	{
		return;
	}
	if (bParam0 == bParam1)
	{
		return;
	}
	Function_11(&Global_78617 + 2652[bParam0], 1);
	Function_11(&Global_78617 + 2652[bParam1], 1);
	Function_11(&Global_78617 + 2652[bParam0], Function_40(bParam1));
	Function_11(&Global_78617 + 2652[bParam1], Function_40(bParam0));
	return;
}

int Function_42(bool bParam0, bool bParam1) //Position: 0xFF1 / 4081
{
	if (Global_3361 <= 20)
	{
		Global_0[Global_3361168] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0 };
		Global_3361++;
		if (bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(bParam0, bParam0->f_64, bParam0->f_68);
			if (Function_17(bParam0->f_656, 4))
			{
				NET_SET_PLAYLIST_LOCKED(bParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int Function_43(char* cParam0, bool bParam1) //Position: 0x1041 / 4161
{
	var uVar0;
	char* cVar29[64];
	char* cVar45[64];
	
	if (!UNK_0xFAD5A270(bParam1, &uVar0))
	{
		strcpy(&cVar29, "Can't add nonexistent "", 64);
		stradd(&cVar29, bParam1, 64);
		stradd(&cVar29, "" to playlist", 64);
	}
	if (cParam0->f_72 <= 36)
	{
		strcpy(cParam0 + 76[cParam0->f_724], bParam1, 16);
		cParam0->f_72++;
		return 1;
	}
	strcpy(&cVar45, """, 64);
	stradd(&cVar45, bParam1, 64);
	stradd(&cVar45, "" puts playlist "", 64);
	stradd(&cVar45, cParam0, 64);
	stradd(&cVar45, "" over the limit", 64);
	return 0;
}

void Function_44(int iParam0, char* cParam1, char* cParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x10F1 / 4337
{
	strcpy(iParam0, cParam1, 32);
	strcpy(iParam0 + 32, cParam2, 32);
	iParam0->f_68 = iParam5;
	iParam0->f_64 = iParam3;
	iParam0->f_664 = iParam6;
	Function_39(iParam0, 1014);
	if (IS_STRING_VALID(bParam8))
	{
		if (!_IS_TYPE_ID_VALID_BY_STRING(bParam8, 7))
		{
		}
		iParam0->f_668 = GET_ASSET_ID(bParam8, 7);
	}
	else
	{
		iParam0->f_668 = "";
	}
	iParam0->f_656 = (iParam7 || Function_46(iParam4));
	Function_45(iParam0);
}

void Function_45(int iParam0) //Position: 0x115B / 4443
{
	int iVar0;
	
	iParam0->f_72 = 0;
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		strcpy(iParam0 + 76[iVar04], "NONE", 16);
		iVar0++;
	}
	return;
}

var Function_46(bool bParam0) //Position: 0x118A / 4490
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_47() //Position: 0x1197 / 4503
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 1;
	bVar1 = iVar0 | 16 | 16384;
	bVar2 = iVar0 | 2 | 32 | 256 | 16384;
	bVar3 = iVar0 | 2 | 32 | 256 | 16384;
	Function_48("DM_BLK", "net_name_dm_a", bVar1, 2, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_BLK/Deathmatch_BLK", 735.41f, 78.31f, 1327.44f, 0);
	Function_48("DM_ESC", "net_name_dm_a", bVar1, 2, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_ESC/Deathmatch_ESC", -4365.0f, 30.21f, 4396.21f, 0);
	Function_48("DM_FOM", "net_name_dm_a", bVar1, 2, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_FOM/Deathmatch_FOM", -2687.01f, 71.66f, 3453.35f, 0);
	Function_48("DM_THI", "net_name_dm_a", bVar1, 2, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_THI/Deathmatch_THI", 115.281f, 73.037f, 2285.32f, 0);
	Function_48("DM_UPR", "net_name_dm_a", bVar1, 2, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_UPR/Deathmatch_UPR", -280.421f, 84.352f, 2115.867f, 0);
	Function_48("DM_W6", "net_name_dm_a", bVar1, 2, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_W6/Deathmatch_W6", -3175.13f, 39.15f, 3252.64f, 0);
	Function_48("TDM_BLK", "net_name_tdm_a", bVar2, 17, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_BLK/Deathmatch_BLK", 735.41f, 78.31f, 1327.44f, 0);
	Function_48("TDM_ESC", "net_name_tdm_a", bVar2, 17, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_ESC/Deathmatch_ESC", -4365.0f, 30.21f, 4396.21f, 0);
	Function_48("TDM_FOM", "net_name_tdm_a", bVar2, 17, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_FOM/Deathmatch_FOM", -2687.01f, 71.66f, 3453.35f, 0);
	Function_48("TDM_THI", "net_name_tdm_a", bVar2, 17, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_THI/Deathmatch_THI", 115.281f, 73.037f, 2285.32f, 0);
	Function_48("TDM_UPR", "net_name_tdm_a", bVar2, 17, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_UPR/Deathmatch_UPR", -280.421f, 84.352f, 2115.867f, 0);
	Function_48("TDM_W6", "net_name_tdm_a", bVar2, 17, "$/content/multiplayer/deathmatch/deathmatch", "$/content/DLC/MPMapPack/multiplayer/Regions/DM_W6/Deathmatch_W6", -3175.13f, 39.15f, 3252.64f, 0);
	Function_48("CFA_BLK", "net_name_ctf_a", bVar1, 7, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_BLK/CTF_BLK", 735.41f, 78.31f, 1327.44f, 0);
	Function_48("CFA_FOM", "net_name_ctf_a", bVar1, 7, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_FOM/CTF_FOM", -2687.01f, 71.66f, 3453.35f, 0);
	Function_48("CFA_THI", "net_name_ctf_a", bVar1, 7, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_THI/CTF_THI", 115.281f, 73.037f, 2285.32f, 0);
	Function_48("CFA_TUM", "net_name_ctf_a", bVar1, 7, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_TUM/CTF_TUM", -3979.237f, 27.97f, 2938.85f, 0);
	Function_48("CFA_W6", "net_name_ctf_a", bVar1, 7, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W6/CTF_W6", -3175.13f, 39.15f, 3252.64f, 0);
	Function_48("CFS_BLK", "net_name_ctf_b", bVar3, 8, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_BLK/CTF_BLK_Single", 735.41f, 78.31f, 1327.44f, 0);
	Function_48("CFS_DZC", "net_name_ctf_b", bVar3, 8, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_DZC/CTF_DZC_Single", -597.39f, 12.8f, 3730.03f, 0);
	Function_48("CFS_FOM", "net_name_ctf_b", bVar3, 8, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_FOM/CTF_FOM_Single", -2687.01f, 71.66f, 3453.35f, 0);
	Function_48("CFS_MAN", "net_name_ctf_b", bVar3, 8, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_MAN/CTF_MAN_Single", -422.25f, 151.04f, 1606.17f, 0);
	Function_48("CFS_THI", "net_name_ctf_b", bVar3, 8, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_THI/CTF_THI_Single", 115.281f, 73.037f, 2285.32f, 0);
	Function_48("CFS_W4", "net_name_ctf_b", bVar3, 8, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W4/CTF_W4_Single", -435.7f, 100.24f, 2764.62f, 0);
	Function_48("CTF_BLK", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_BLK/CTF_BLK_Sym", 735.41f, 78.31f, 1327.44f, 0);
	Function_48("CTF_MAN", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_MAN/CTF_MAN_Sym", -422.25f, 151.04f, 1606.17f, 0);
	Function_48("CTF_THI", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_THI/CTF_THI_Sym", 115.281f, 73.037f, 2285.32f, 0);
	Function_48("CTF_TUM", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_TUM/CTF_TUM_Sym", -3979.237f, 27.97f, 2938.85f, 0);
	Function_48("CTF_W2", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W2/CTF_W2_Sym", -3783.58f, 5.77f, 4559.63f, 0);
	Function_48("CTF_W4", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W4/CTF_W4_Sym", -435.7f, 100.25f, 2764.62f, 0);
	Function_48("CTF_W5", "net_name_ctf_C", bVar3, 9, "$/content/multiplayer/CTF/CTF_base_game", "$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W5/CTF_W5_Sym", -890.0f, 189.61f, 1354.59f, 0);
	return;
}

var Function_48(char* cParam0, char* cParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, vector3 vParam6, int iParam9) //Position: 0x2489 / 9353
{
	struct<29> Var0;
	
	Var0.f_16 = uParam3;
	strcpy(&Var0 + 48, cParam1, 64);
	Var0.f_44 = uParam2;
	Var0.f_112 = iParam9;
	if (IS_STRING_VALID(bParam4))
	{
		Var0.f_20 = GET_ASSET_ID(bParam4, 4);
		if (!UNK_0x214AFB8C(Var0.f_20))
		{
			return 4294967295;
		}
	}
	Var0.f_20 = 4294967295;
	if (IS_STRING_VALID(bParam5))
	{
		Var0.f_24 = GET_ASSET_ID(bParam5, 4);
		if (!UNK_0x214AFB8C(Var0.f_24))
		{
			return 4294967295;
		}
	}
	Var0.f_24 = 4294967295;
	if (Global_83589 > 125)
	{
		return 4294967295;
	}
	NET_REGISTER_GAME_TYPE(cParam0, Global_83589);
	*(&Var0 + 28) = { StackVal, StackVal, vParam6 };
	Var0.f_40 = 4294967294;
	strcpy(&Var0, cParam0, 16);
	UNK_0x55C5BB93(&Var0);
	Global_79963[Global_8358929] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
	Global_83589++;
	return (Global_83589 - 1);
}

void Function_49(bool bParam0) //Position: 0x2552 / 9554
{
	if (bParam0)
	{
		LOAD_AUDIO_SPEECH_DATA("dlc2_speech.dat");
		LOAD_AUDIO_METADATA("sounds", "dlc2_sounds.dat", "DLC2");
		LOAD_AUDIO_METADATA("gameobjects", "dlc2_game.dat", "DLC2");
		LOAD_AUDIO_METADATA("curves", "dlc2_curves.dat", "DLC2");
		PRINTSTRING("Preinitializing mpmappack fragment streamables...");
		PRINTNL();
		_DLC_FRAGMENT("$/fragments/MPMapPack/fragmentsList.bin");
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/DM_BLK/Deathmatch_BLK", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/DM_ESC/Deathmatch_ESC", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/DM_FOM/Deathmatch_FOM", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/DM_THI/Deathmatch_THI", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/DM_UPR/Deathmatch_UPR", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/DM_W6/Deathmatch_W6", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_BLK/CTF_BLK", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_FOM/CTF_FOM", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_THI/CTF_THI", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_TUM/CTF_TUM", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W6/CTF_W6", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_BLK/CTF_BLK_Single", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_DZC/CTF_DZC_Single", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_FOM/CTF_FOM_Single", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_MAN/CTF_MAN_Single", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_THI/CTF_THI_Single", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W4/CTF_W4_Single", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_BLK/CTF_BLK_Sym", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_MAN/CTF_MAN_Sym", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_THI/CTF_THI_Sym", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_TUM/CTF_TUM_Sym", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W2/CTF_W2_Sym", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W4/CTF_W4_Sym", 4);
		REQUEST_ASSET("$/content/DLC/MPMapPack/multiplayer/Regions/CTF_W5/CTF_W5_Sym", 4);
		REQUEST_ASSET("$/fragments/melee_tomahawk01x", 0);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_dm_blk", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_dm_esc", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_dm_fom", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_dm_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_dm_upr", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_dm_w6", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_tdm_blk", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_tdm_esc", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_tdm_fom", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_tdm_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_tdm_upr", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_tdm_w6", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfa_blk", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfa_fom", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfa_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfa_tum", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_cfa_w6", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfs_blk", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfs_dzc", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfs_fom", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfs_man", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_cfs_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_cfs_w4", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_ctf_blk", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_ctf_man", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_ctf_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_ctf_tum", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_ctf_w2", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_ctf_w4", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_ctf_w5", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "weapons_Tomahawk", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC01", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC02", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC03", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC04", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC05", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC06", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC07", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC08", 0, 16);
		Function_61();
		Function_59();
		REQUEST_ASSET("ManzanitaPost", 12);
	}
	Function_53(0);
	SET_WEAPONENUM_LOCKED(29, 0);
	Function_51(32);
	Global_26055[7] = 1;
	Function_50();
	DISABLE_CHILD_SECTOR("mp_thi_base01x");
	DISABLE_CHILD_SECTOR("mp_thi_ffa01x");
	DISABLE_CHILD_SECTOR("mp_esc_ffa02x");
	DISABLE_CHILD_SECTOR("mp_mtp_base02x");
	DISABLE_CHILD_SECTOR("mp_blk_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa02x");
	DISABLE_CHILD_SECTOR("mp_fom_base02x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa02x");
	DISABLE_WORLD_SECTOR("dlc02x");
	return;
}

void Function_50() //Position: 0x32C9 / 13001
{
	strcpy(&Global_83864 + 1288[617], "title_dlc_two_", 64);
	(&Global_83864 + 1288[617])->f_64 = 9;
	(&Global_83864 + 1288)->f_684 += 9;
	return;
}

void Function_51(int iParam0) //Position: 0x3310 / 13072
{
	Function_52(&Global_83864 + 1252, iParam0);
	return;
}

void Function_52(var uParam0, int iParam1) //Position: 0x3322 / 13090
{
	Function_11(uParam0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x332F / 13103
{
	int iVar0;
	
	iVar0 = 837;
	while (iVar0 < 971)
	{
		if (Function_58(iVar0) == iParam0)
		{
			Function_54(iVar0);
		}
		iVar0++;
	}
	iVar0 = 1287;
	while (iVar0 < 1310)
	{
		if (Function_58(iVar0) == iParam0)
		{
			Function_54(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_54(int iParam0) //Position: 0x337F / 13183
{
	Function_11(&Global_83864 + 1976[Function_57(iParam0)], Function_55(iParam0));
	return;
}

int Function_55(int iParam0) //Position: 0x339B / 13211
{
	return Function_40((Function_56(iParam0) % 32));
}

int Function_56(int iParam0) //Position: 0x33AC / 13228
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_57(int iParam0) //Position: 0x33CB / 13259
{
	return (Function_56(iParam0) / 32);
}

int Function_58(int iParam0) //Position: 0x33D9 / 13273
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(iParam0)) % 1000);
}

void Function_59() //Position: 0x33EB / 13291
{
	struct<45> Var0;
	
	Var0.f_4 = "MPPLAYER_DLC01";
	Var0.f_8 = "rdr1_redHarlow";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.15f, 1.02f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC01";
	Function_60(941, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC02";
	Var0.f_8 = "rdr1_jackSwift";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.15f, 1.02f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC02";
	Function_60(942, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC03";
	Var0.f_8 = "rdr1_buffaloSoldier";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.15f, 1.04f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC03";
	Function_60(943, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC04";
	Var0.f_8 = "rdr1_shadowWolf";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.1f, 1.04f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC04";
	Function_60(944, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC05";
	Var0.f_8 = "rdr1_pigJosh";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.1f, 1.02f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "fat";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC05";
	Function_60(945, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC06";
	Var0.f_8 = "rdr1_annieStokes";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.1f, 1.02f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Female";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC06";
	Function_60(946, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC07";
	Var0.f_8 = "rdr1_uglyChris";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.15f, 1.04f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "fat";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC07";
	Function_60(947, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC08";
	Var0.f_8 = "rdr1_mrKelly";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.15f, 1.04f, 1.0f };
	Var0.f_28 = 11000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC08";
	Function_60(948, "template_mplayer", &Var0);
	return;
}

void Function_60(var uParam0, int iParam1, var uParam2) //Position: 0x3905 / 14597
{
	INIT_NATIVE_ACTORENUM_DLC_PLAYER(uParam0, iParam1, uParam2, 12);
	return;
}

void Function_61() //Position: 0x3916 / 14614
{
	REPLACE_WORLD_SECTOR_LOAD_BOUNDING_BOX("dlc02x");
	return;
}

