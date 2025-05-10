//Decompiled with MagicRDR v1.0
//Function Count : 90
//Statics Count : 64
//Natives Count : 59
//Parameters Count : 1

#region Local Var
	float fLocal_0 = 0.0f;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
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
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	fLocal_0 = 1.0f;
	bVar0 = uScriptParam_0 & 1 == false;
	bVar1 = uScriptParam_0 & 2 == false;
	if (Global_34165.f_44)
	{
	}
	if (uScriptParam_0 & 16 == 0)
	{
		if (bVar0 && bVar1)
		{
			uVar2 = "$/content/DLC/MPModePack/mpmodepack.strtbl";
			if (IS_PS3())
			{
				uVar2 = "$/content/DLC/MPModePack/mpmodepack_ps3.strtbl";
			}
			STRINGTABLE_APPEND_TABLE(uVar2);
			PRINTSTRING("Displaying DLC_Disabled_MPModePack...");
			PRINTNL();
			UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "DLC_Requires_TU");
			UI_ACTIVATE("NetConf_BarkerLocked");
		}
	}
	else if (bVar1)
	{
		Function_71(bVar0);
	}
	else
	{
		Function_1(bVar0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x131 / 305
{
	var uVar0;
	
	if (bParam0)
	{
		uVar0 = "$/content/DLC/MPModePack/mpmodepack.strtbl";
		if (IS_PS3())
		{
			uVar0 = "$/content/DLC/MPModePack/mpmodepack_ps3.strtbl";
		}
		STRINGTABLE_APPEND_TABLE(uVar0);
		Function_70();
		Function_68();
	}
	if (Global_34165.f_44)
	{
		TOGGLE_JOURNAL_UI(9, 1);
		TOGGLE_JOURNAL_UI(10, 1);
		TOGGLE_JOURNAL_UI(11, 1);
		Function_65();
		Function_64();
		Function_62();
		Function_59();
		Function_58();
		Function_56();
		Function_49();
		Function_48();
		Function_46();
		Function_32();
		Function_31();
		Function_16();
		Function_2();
	}
	return;
}

void Function_2() //Position: 0x1F0 / 496
{
	bool bVar0;
	bool bVar168;
	int iVar336;
	
	*(&bVar0 + 76) = 36;
	Function_12(&bVar0, "MULTI_ROTATION_GP_RACE", "RACE_Barker", 51, 6, 8, 498, 16, 0);
	Function_11(&bVar0, "RAC_GP1");
	Function_11(&bVar0, "RAC_GP2");
	Function_11(&bVar0, "RAC_GP3");
	Function_9(&bVar0, 1);
	Function_12(&bVar0, "MULTI_ROTATION_ATKDEF", "", 66, 2, 16, 4294967295, 2, 0);
	Function_8(12, 9);
	Function_8(12, 5);
	Function_8(12, 6);
	Function_8(12, 7);
	Function_7(&Global_78617 + 2652[13], 1);
	Function_5(&bVar0, 12);
	Function_11(&bVar0, "AD_esc");
	Function_11(&bVar0, "AD_thi");
	Function_11(&bVar0, "AD_blk");
	Function_11(&bVar0, "AD_FOM");
	Function_9(&bVar0, 1);
	*(&bVar168 + 76) = 36;
	*(&iVar336 + 76) = 36;
	Function_12(&bVar168, "MULTI_ROTATION_ATKDEF_HARD", "", 67, 2, 16, 445, 9746, 0);
	Function_5(&bVar168, 12);
	if (Function_4(66, &iVar336))
	{
		Function_3(&iVar336, &bVar168);
	}
	Function_9(&bVar168, 1);
	Function_12(&bVar0, "MULTI_ROTATION_POKER", "POKER_Barker", 53, 4, 6, 433, 0, 0);
	Function_11(&bVar0, "PKR_BEH");
	Function_11(&bVar0, "PKR_ARM");
	Function_11(&bVar0, "PKR_HEN");
	Function_11(&bVar0, "PKR_THI");
	Function_11(&bVar0, "PKR_CAS");
	Function_9(&bVar0, 1);
	Function_12(&bVar0, "MULTI_ROTATION_LIARSDICE", "LIARSDICE_Barker", 54, 5, 6, 426, 0, 0);
	Function_11(&bVar0, "LD_THI");
	Function_11(&bVar0, "LD_ESC");
	Function_11(&bVar0, "LD_CAS");
	Function_9(&bVar0, 1);
	return;
}

void Function_3(int iParam0, char* cParam1) //Position: 0x469 / 1129
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_72 - 1))
	{
		Function_11(cParam1, iParam0 + 76[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_4(int iParam0, int iParam1) //Position: 0x494 / 1172
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

void Function_5(bool bParam0, bool bParam1) //Position: 0x4CD / 1229
{
	if (bParam1 > 1 || bParam1 <= 32)
	{
		return;
	}
	Function_7(bParam0 + 660, Function_6(bParam1));
	return;
}

int Function_6(bool bParam0) //Position: 0x4EE / 1262
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_7(var uParam0, int iParam1) //Position: 0x4FA / 1274
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x509 / 1289
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
	Function_7(&Global_78617 + 2652[bParam0], 1);
	Function_7(&Global_78617 + 2652[bParam1], 1);
	Function_7(&Global_78617 + 2652[bParam0], Function_6(bParam1));
	Function_7(&Global_78617 + 2652[bParam1], Function_6(bParam0));
	return;
}

int Function_9(bool bParam0, bool bParam1) //Position: 0x57D / 1405
{
	if (Global_3361 <= 20)
	{
		Global_0[Global_3361168] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0 };
		Global_3361++;
		if (bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(bParam0, bParam0->f_64, bParam0->f_68);
			if (Function_10(bParam0->f_656, 4))
			{
				NET_SET_PLAYLIST_LOCKED(bParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x5CD / 1485
{
	return (uParam0 && iParam1) == 0;
}

int Function_11(char* cParam0, bool bParam1) //Position: 0x5DA / 1498
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

void Function_12(int iParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x68A / 1674
{
	strcpy(iParam0, cParam1, 32);
	strcpy(iParam0 + 32, bParam2, 32);
	iParam0->f_68 = iParam5;
	iParam0->f_64 = iParam3;
	iParam0->f_664 = iParam6;
	Function_15(iParam0, 1014);
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
	iParam0->f_656 = (iParam7 || Function_14(iParam4));
	Function_13(iParam0);
}

void Function_13(int iParam0) //Position: 0x6F4 / 1780
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

var Function_14(bool bParam0) //Position: 0x723 / 1827
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_15(var uParam0, var uParam1) //Position: 0x730 / 1840
{
	uParam0->f_660 = uParam1;
	return;
}

void Function_16() //Position: 0x73D / 1853
{
	Function_17(246, &Global_50170, 5, 50.0f, 10, 150.0f, 15, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_17(247, &Global_50170, 25, 50.0f, 50, 150.0f, 100, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_17(249, &Global_50170, 16, 50.0f, 18, 150.0f, 20, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_17(250, &Global_50170, 5, 50.0f, 4, 150.0f, 3, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_17(251, &Global_50170, 10, 50.0f, 15, 150.0f, 20, 200.0f, 0, 0, 0, 0, 0, 0, 1);
	Function_17(248, &Global_50170, (CEIL(2700.0f) / 60), 50.0f, (CEIL(2700.0f) / 60), 150.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0);
	Function_17(252, &Global_50170, (CEIL(2700.0f) / 60), 50.0f, (CEIL(2700.0f) / 60), 150.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0, 0.0f, 0);
	return;
}

void Function_17(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14) //Position: 0x855 / 2133
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
		
		case 0x00000005:
			bVar0 = iParam12;
			bVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_30(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = fParam3;
			break;
	}
	if (Function_10(uParam1[iParam022]->f_32, 4) || Function_10(uParam1[iParam022]->f_32, 2))
	{
		Function_23(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_18(iParam0, uParam1[iParam022]->f_12, bParam14, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_18(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x964 / 2404
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_22(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_21(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_22(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_20(iParam0, 4))
	{
		Function_19(Function_22(iParam0), 0);
	}
}

void Function_19(char* cParam0, int iParam1) //Position: 0xA1B / 2587
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

bool Function_20(int iParam0, int iParam1) //Position: 0xA40 / 2624
{
	return Function_10(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_21(int iParam0) //Position: 0xA54 / 2644
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_22(int iParam0) //Position: 0xA88 / 2696
{
	return Global_50170[iParam022].f_24;
}

void Function_23(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA97 / 2711
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_29(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_22(iParam0));
	if ((bParam3 && Function_20(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_22(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_21(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_25(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_22(iParam0), &Var7, 0, 2, Function_20(iParam0, 4));
			if (!bParam3)
			{
				Function_24(iParam0, 4);
			}
		}
	}
}

void Function_24(int iParam0, int iParam1) //Position: 0xB54 / 2900
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_25(int iParam0) //Position: 0xB68 / 2920
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_21(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_26(int iParam0) //Position: 0xB88 / 2952
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_27(int iParam0) //Position: 0xBB6 / 2998
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_28(int iParam0) //Position: 0xBE6 / 3046
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_29(int iParam0) //Position: 0xC17 / 3095
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

void Function_30(int iParam0, int iParam1) //Position: 0xD95 / 3477
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_29(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_22(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_21(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_25(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_22(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_22(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_22(iParam0), 1.0f, 0, 0);
	}
	return;
}

void Function_31() //Position: 0xE17 / 3607
{
	if (!Function_20(246, 2))
	{
		Function_24(246, 2);
		Function_23(246, 0, 0, 0);
	}
	if (!Function_20(247, 2))
	{
		Function_24(247, 2);
		Function_23(247, 0, 0, 0);
	}
	if (!Function_20(248, 2))
	{
		Function_24(248, 2);
		Function_23(248, 0, 0, 0);
	}
	if (!Function_20(249, 2))
	{
		Function_24(249, 2);
		Function_23(249, 0, 0, 0);
	}
	if (!Function_20(250, 2))
	{
		Function_24(250, 2);
		Function_23(250, 0, 0, 0);
	}
	if (!Function_20(251, 2))
	{
		Function_24(251, 2);
		Function_23(251, 0, 0, 0);
	}
	if (!Function_20(252, 2))
	{
		Function_24(252, 2);
		Function_23(252, 0, 0, 0);
	}
	return;
}

void Function_32() //Position: 0xEC5 / 3781
{
	Function_39(246, &Global_50170, "AD_WIN", 1, 11, Function_45(1));
	Function_39(247, &Global_50170, "AD_CPT1", 1, 11, Function_38(1));
	Function_39(248, &Global_50170, "AD_ATK1", 1, 11, Function_37(1));
	Function_39(249, &Global_50170, "AD_TKTS", 1, 11, Function_36(1));
	Function_39(250, &Global_50170, "AD_DTHS", 1, 11, Function_35(1));
	Function_39(251, &Global_50170, "AD_KLSD", 1, 11, Function_34(1));
	Function_39(252, &Global_50170, "AD_ATK2", 1, 11, Function_33(1));
	return;
}

bool Function_33(bool bParam0) //Position: 0xF79 / 3961
{
	if (bParam0)
	{
		return "timeAttacking_64";
	}
	return "timeAttacking_128";
}

bool Function_34(bool bParam0) //Position: 0xFAF / 4015
{
	if (bParam0)
	{
		return "MP_KillStreak_Icon";
	}
	return "MP_KillStreak_Icon_128";
}

bool Function_35(bool bParam0) //Position: 0xFEC / 4076
{
	if (bParam0)
	{
		return "hardToKill_64";
	}
	return "hardToKill_128";
}

bool Function_36(bool bParam0) //Position: 0x101C / 4124
{
	if (bParam0)
	{
		return "gotLives_64";
	}
	return "gotLives_128";
}

bool Function_37(bool bParam0) //Position: 0x1048 / 4168
{
	if (bParam0)
	{
		return "timeAttacking_64";
	}
	return "timeAttacking_128";
}

bool Function_38(bool bParam0) //Position: 0x107E / 4222
{
	if (bParam0)
	{
		return "captureCheckPoints_64";
	}
	return "captureCheckPoints_128";
}

void Function_39(int iParam0, int iParam1, char* cParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x10BE / 4286
{
	strcpy(iParam1[iParam022] + 16, cParam2, 8);
	(*iParam1)[iParam022] = iParam0;
	iParam1[iParam022]->f_84 = bParam3;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[iParam022]->f_8 = 0;
		Global_50170[iParam022].f_28 = 0;
	}
	if (bParam3)
	{
		if (!Global_34165.f_44)
		{
			iParam1[iParam022]->f_4 = 1;
			iParam1[iParam022]->f_8 = 0;
			iParam1[iParam022]->f_12 = 0.0f;
			return;
		}
	}
	if (Global_83864.f_1276)
	{
		Function_43(iParam0, 4);
		Function_43(iParam0, 2);
		Function_42(iParam0, 0);
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_22(iParam0), iParam1[iParam022]->f_12, 0, 0);
		REMOVE_JOURNAL_ENTRY(Function_22(iParam0), 1);
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = Function_41();
	}
	Function_40(iParam0, iParam4, bParam5);
	Function_23(iParam0, 0, 0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_30(iParam0, 1);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Function_22(iParam0), iParam1[iParam022]->f_12, 0, 0);
	}
}

var Function_40(int iParam0, int iParam1, int iParam2) //Position: 0x11CE / 4558
{
	struct<6> Var0;
	struct<4> Var6;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(iParam0) };
	Global_50170[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	Var6 = { StackVal, StackVal, StackVal, Function_21(iParam0) };
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	return Global_50170[iParam022].f_24;
}

bool Function_41() //Position: 0x120C / 4620
{
	return "SC_Travel_Icon";
}

void Function_42(int iParam0, int iParam1) //Position: 0x1223 / 4643
{
	REMOVE_JOURNAL_ENTRY(Global_50170[iParam022].f_24, iParam1);
	return;
}

void Function_43(int iParam0, int iParam1) //Position: 0x1237 / 4663
{
	Function_44(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0x124B / 4683
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_45(bool bParam0) //Position: 0x125E / 4702
{
	if (bParam0)
	{
		return "matchWins_64";
	}
	return "matchWins_128";
}

void Function_46() //Position: 0x128C / 4748
{
	Function_47(240, &Global_50170, 10, 50.0f, 15, 150.0f, 25, 200.0f, 0, 0, 0, 0, 0, 0);
	Function_47(241, &Global_50170, 250, 50.0f, 500, 150.0f, 750, 200.0f, 0, 0, 0, 0, 0, 0);
	Function_47(242, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 1, 350.0f);
	Function_47(243, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 0, 0);
	Function_47(244, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 0, 0);
	Function_47(245, &Global_50170, 1, 50.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f, 0, 0);
	return;
}

void Function_47(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x137E / 4990
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
		
		case 0x00000005:
			bVar0 = iParam12;
			bVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_30(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = fParam3;
			break;
	}
	if (Function_10(uParam1[iParam022]->f_32, 4) || Function_10(uParam1[iParam022]->f_32, 2))
	{
		Function_23(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_18(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_48() //Position: 0x148C / 5260
{
	if (!Function_20(240, 2))
	{
		Function_24(240, 2);
		Function_23(240, 0, 0, 0);
	}
	if (!Function_20(241, 2))
	{
		Function_24(241, 2);
		Function_23(241, 0, 0, 0);
	}
	if (!Function_20(242, 2))
	{
		Function_24(242, 2);
		Function_23(242, 0, 0, 0);
	}
	if (!Function_20(243, 2))
	{
		Function_24(243, 2);
		Function_23(243, 0, 0, 0);
	}
	if (!Function_20(244, 2))
	{
		Function_24(244, 2);
		Function_23(244, 0, 0, 0);
	}
	if (!Function_20(245, 2))
	{
		Function_24(245, 2);
		Function_23(245, 0, 0, 0);
	}
	return;
}

void Function_49() //Position: 0x1522 / 5410
{
	Function_39(240, &Global_50170, "RC_TP3", 1, 10, Function_55(1));
	Function_39(241, &Global_50170, "RC_GP", 1, 10, Function_54(1));
	Function_39(242, &Global_50170, "RC_SML", 1, 10, Function_53(1));
	Function_39(243, &Global_50170, "RC_DS1", 1, 10, Function_52(1));
	Function_39(244, &Global_50170, "RC_DS2", 1, 10, Function_51(1));
	Function_39(245, &Global_50170, "RC_KLS", 1, 10, Function_50(1));
	return;
}

bool Function_50(bool bParam0) //Position: 0x15B7 / 5559
{
	if (bParam0)
	{
		return "MP_KillStreak_Icon";
	}
	return "MP_KillStreak_Icon_128";
}

bool Function_51(bool bParam0) //Position: 0x15F4 / 5620
{
	if (bParam0)
	{
		return "dontShoot_64";
	}
	return "dontShoot_128";
}

bool Function_52(bool bParam0) //Position: 0x1622 / 5666
{
	if (bParam0)
	{
		return "dontShoot_64";
	}
	return "dontShoot_128";
}

bool Function_53(bool bParam0) //Position: 0x1650 / 5712
{
	if (bParam0)
	{
		return "finishAll3_64";
	}
	return "finishAll3_128";
}

bool Function_54(bool bParam0) //Position: 0x1680 / 5760
{
	if (bParam0)
	{
		return "grandPrixPoints_64";
	}
	return "grandPrixPoints_128";
}

bool Function_55(bool bParam0) //Position: 0x16BA / 5818
{
	if (bParam0)
	{
		return "grandPrixTop3_64";
	}
	return "grandPrixTop3_128";
}

void Function_56() //Position: 0x16F0 / 5872
{
	Function_57(236, &Global_50170, 1, 50.0f, 1, 100.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 1, 300.0f);
	Function_57(237, &Global_50170, 1, 50.0f, 1, 100.0f, 1, 150.0f, 1, 200.0f, 1, 250.0f, 0, 0);
	Function_57(238, &Global_50170, 2, 50.0f, 2, 100.0f, 10, 150.0f, 20, 200.0f, 10, 250.0f, 20, 300.0f);
	Function_57(239, &Global_50170, 3, 50.0f, 4, 100.0f, (CEIL(3600.0f) / 3600), 150.0f, (CEIL(18000.0f) / 3600), 200.0f, (CEIL(36000.0f) / 3600), 250.0f, 0, 0);
	return;
}

void Function_57(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, float fParam9, int iParam10, float fParam11, int iParam12, int iParam13) //Position: 0x17C3 / 6083
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
			bVar1 = fParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			bVar1 = fParam11;
			break;
		
		case 0x00000005:
			bVar0 = iParam12;
			bVar1 = iParam13;
			break;
		
		case 0x0000000A:
			Function_30(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = fParam3;
			break;
	}
	if (Function_10(uParam1[iParam022]->f_32, 4) || Function_10(uParam1[iParam022]->f_32, 2))
	{
		Function_23(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_18(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_58() //Position: 0x18D1 / 6353
{
	if (!Function_20(236, 2))
	{
		Function_24(236, 2);
		Function_23(236, 0, 0, 0);
	}
	if (!Function_20(237, 2))
	{
		Function_24(237, 2);
		Function_23(237, 0, 0, 0);
	}
	if (!Function_20(238, 2))
	{
		Function_24(238, 2);
		Function_23(238, 0, 0, 0);
	}
	if (!Function_20(239, 2))
	{
		Function_24(239, 2);
		Function_23(239, 0, 0, 0);
	}
	return;
}

void Function_59() //Position: 0x1937 / 6455
{
	Function_39(236, &Global_50170, "GB_PKR1", 1, 9, Function_61());
	Function_39(237, &Global_50170, "GB_PKR2", 1, 9, Function_61());
	Function_39(238, &Global_50170, "GB_LD1", 1, 9, Function_60());
	Function_39(239, &Global_50170, "GB_LD2", 1, 9, Function_60());
	return;
}

bool Function_60() //Position: 0x199B / 6555
{
	return "SC_LiarsDice_Icon";
}

bool Function_61() //Position: 0x19B5 / 6581
{
	return "SC_Poker_Icon";
}

void Function_62() //Position: 0x19CB / 6603
{
	Function_63(232, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_63(233, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	return;
}

void Function_63(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x1A13 / 6675
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
			Function_30(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = fParam3;
			break;
	}
	if (Function_10(uParam1[iParam022]->f_32, 4) || Function_10(uParam1[iParam022]->f_32, 2))
	{
		Function_23(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_18(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_64() //Position: 0x1B10 / 6928
{
	if (!Function_20(232, 2))
	{
		Function_24(232, 2);
		Function_23(232, 0, 0, 0);
	}
	if (!Function_20(233, 2))
	{
		Function_24(233, 2);
		Function_23(233, 0, 0, 0);
	}
	return;
}

void Function_65() //Position: 0x1B46 / 6982
{
	Function_39(232, &Global_50170, "WP_ATR", 1, 5, Function_67());
	Function_39(233, &Global_50170, "WP_ATR2", 1, 5, Function_66());
	return;
}

bool Function_66() //Position: 0x1B79 / 7033
{
	return "challenge_01lvl2";
}

var Function_67() //Position: 0x1B92 / 7058
{
	return "challenge_01";
}

void Function_68() //Position: 0x1BA7 / 7079
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 3072;
	Function_69("RAC_ARM", "net_name_race_arm", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_ARM/MP_Race_ARM", -2104.108f, 16.449f, 2610.794f, 0);
	Function_69("RAC_DZC", "net_name_race_dzc", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_DZC/MP_Race_DZC", -771.946f, 10.715f, 3834.164f, 0);
	Function_69("RAC_GAP", "net_name_race_gap", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_GAP/MP_Race_GAP", -4444.635f, 8.248f, 3262.201f, 0);
	Function_69("RAC_GRT", "net_name_race_grt", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_GRT/MP_Race_GRT", -472.14f, 142.219f, 1911.901f, 0);
	Function_69("RAC_HAN", "net_name_race_han", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_HAN/MP_Race_Han", -1931.654f, 28.296f, 1977.908f, 0);
	Function_69("RAC_LSH", "net_name_race_lsh", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_LSH/MP_Race_LSH", -1589.085f, 5.774f, 4326.74f, 0);
	Function_69("RAC_PRD", "net_name_race_prd", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_PRD/MP_Race_PRD", -2697.125f, 31.602f, 4243.988f, 0);
	Function_69("RAC_RAT", "net_name_race_rat", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_RAT/MP_Race_RAT", -3694.961f, 41.264f, 2155.007f, 0);
	Function_69("RAC_RIO", "net_name_race_rio", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_RIO/MP_Race_RIO", -2372.59f, 13.618f, 3967.182f, 0);
	Function_69("RAC_SWG", "net_name_race_swg", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_SWG/MP_Race_SWG", -3433.231f, 6.211f, 4197.322f, 0);
	Function_69("RAC_TAL", "net_name_race_tal", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_TAL/MP_Race_TAL", -219.749f, 83.677f, 2078.994f, 0);
	Function_69("RAC_GP1", "net_name_race_gp1", (bVar0 || 524288), 12, "", "$/content/DLC/MPModePack/Races/MP_race_GP1", -3664.084f, 42.238f, 2123.868f, 0);
	Function_69("RAC_GP2", "net_name_race_gp2", (bVar0 || 524288), 12, "", "$/content/DLC/MPModePack/Races/MP_race_GP2", -2698.459f, 31.604f, 4244.814f, 0);
	Function_69("RAC_GP3", "net_name_race_gp3", (bVar0 || 524288), 12, "", "$/content/DLC/MPModePack/Races/MP_race_GP3", -281.841f, 84.314f, 2076.362f, 0);
	if (IS_DEV_BUILD())
	{
		Function_69("RAC_TEST", "net_name_race_test", bVar0, 12, "$/content/DLC/MPModePack/MP_Race/MP_race", "$/content/DLC/MPModePack/Races/MP_Race_test/MP_Race_Test", -2173.086f, 16.438f, 2618.674f, 0);
	}
	bVar1 = 2244899;
	Function_69("AD_FOM", "net_name_atkdef", bVar1, 23, "$/content/DLC/MPModePack/AtkDef/attackdefend", "$/content/DLC/MPModePack/AtkDef/AD_fom/ad_fom", -2674.26f, 67.26f, 3447.71f, 0);
	Function_69("AD_BLK", "net_name_atkdef", bVar1, 23, "$/content/DLC/MPModePack/AtkDef/attackdefend", "$/content/DLC/MPModePack/AtkDef/AD_BLK/ad_blk", 735.41f, 78.31f, 1327.44f, 0);
	Function_69("AD_ESC", "net_name_atkdef", bVar1, 23, "$/content/DLC/MPModePack/AtkDef/attackdefend", "$/content/DLC/MPModePack/AtkDef/AD_ESC/ad_esc", -4367.19f, 30.3f, 4398.99f, 0);
	Function_69("AD_THI", "net_name_atkdef", bVar1, 23, "$/content/DLC/MPModePack/AtkDef/attackdefend", "$/content/DLC/MPModePack/AtkDef/AD_THI/ad_thi", 113.1f, 73.04f, 2303.59f, 0);
	bVar2 = 6152;
	bVar3 = (bVar2 || 1048576);
	Function_69("PKR_ARM", "net_name_poker", bVar3, 10, "$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_ARM/MP_Poker_ARM", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_Poker_sb", -2157.657f, 17.677f, 2595.523f, 0);
	Function_69("PKR_HEN", "net_name_poker", bVar3, 10, "$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_HEN/MP_Poker_HEN", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_Poker_sb", -800.8856f, 93.554f, 2375.189f, 0);
	Function_69("PKR_THI", "net_name_poker", bVar3, 10, "$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_THI/MP_Poker_THI", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_Poker_sb", 163.9887f, 74.554f, 2231.428f, 0);
	Function_69("PKR_CAS", "net_name_poker", bVar3, 10, "$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_CAS/MP_Poker_CAS", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_Poker_sb", -795.0887f, 13.958f, 3699.661f, 0);
	Function_69("PKR_BEH", "net_name_poker", bVar3, 10, "$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_BEH/MP_Poker_BEH", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_Poker_sb", -138.8952f, 120.019f, 1343.499f, 0);
	Function_69("LD_THI", "net_name_liarsdice", bVar2, 11, "$/content/DLC/MPModePack/MP_LiarsDice_Instances/MP_LiarsDice_THI/MP_LiarsDice_THI", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_LiarsDice_sb", 165.924f, 73.754f, 2227.365f, 0);
	Function_69("LD_ESC", "net_name_liarsdice", bVar2, 11, "$/content/DLC/MPModePack/MP_LiarsDice_Instances/MP_LiarsDice_ESC/MP_LiarsDice_ESC", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_LiarsDice_sb", -4290.729f, 26.743f, 4383.98f, 0);
	Function_69("LD_CAS", "net_name_liarsdice", bVar2, 11, "$/content/DLC/MPModePack/MP_LiarsDice_Instances/MP_LiarsDice_CAS/MP_LiarsDice_CAS", "$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_LiarsDice_sb", -791.583f, 13.165f, 3700.945f, 0);
	return;
}

var Function_69(char* cParam0, char* cParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, vector3 vParam6, int iParam9) //Position: 0x2C6A / 11370
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

void Function_70() //Position: 0x2D33 / 11571
{
	UI_INCLUDE("LbCat_DLC0");
	UI_SET_DATA("LB_Race_Tabs.s0", "tableID", "131");
	UI_SET_DATA("LB_Race_Tabs.s1", "tableID", "132");
	UI_SET_DATA("LB_Race_Tabs.s2", "tableID", "133");
	UI_SET_DATA("LB_Race_Tabs.s3", "tableID", "134");
	UI_SET_DATA("LB_Race_Tabs.s4", "tableID", "135");
	UI_SET_DATA("LB_Race_Tabs.s5", "tableID", "136");
	UI_ADD_CHILD("LB_Race_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "137");
	UI_ADD_CHILD("LB_Race_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "138");
	UI_ADD_CHILD("LB_Race_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "139");
	UI_ADD_CHILD("LB_Race_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "140");
	UI_ADD_CHILD("LB_Race_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "141");
	UI_INCLUDE("LbCat_DLC2");
	UI_SET_DATA("LB_Mini_Tabs.s0", "tableID", "142");
	UI_SET_DATA("LB_Mini_Tabs.s1", "tableID", "143");
	UI_EXCLUDE("LB_Mini_Tabs.s2");
	UI_INCLUDE("LbCat_DLC4");
	UI_ADD_CHILD("LB_DLC4_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "46");
	UI_ADD_CHILD("LB_DLC4_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "82");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "109");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "110");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "111");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "112");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "113");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "114");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "115");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "117");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "118");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "119");
	UI_ADD_CHILD("LB_AA_Tabs", "rdrNetStatTab");
	UI_SET_DATA("", "tableID", "120");
	return;
}

void Function_71(bool bParam0) //Position: 0x327E / 12926
{
	if (bParam0)
	{
		LOAD_AUDIO_SPEECH_DATA("dlc5_speech.dat");
		LOAD_AUDIO_METADATA("sounds", "dlc5_sounds.dat", "DLC5");
		LOAD_AUDIO_METADATA("gameobjects", "dlc5_game.dat", "DLC5");
		LOAD_AUDIO_METADATA("curves", "dlc5_curves.dat", "DLC5");
		DLC_REPLACE_EXISTING_ANIM_SET("rfl_buf_hrs");
		ADDSHADER("rdr2_optics", 1);
		ADDSHADER("rdr2_gravestone_text", 1);
		PRINTSTRING("Preinitializing mpmodepack fragment streamables...");
		PRINTNL();
		_DLC_FRAGMENT("$/fragments/MPModePack/fragmentsList.bin");
		DLC_INIT_STRINGTABLE_STREAMABLES("$/content/stringtable", "MPModePack/StringTableList");
		REQUEST_ASSET("dlc_mpmodepack_atkdef", 10);
		REQUEST_ASSET("dlc_mpmodepack_race", 10);
		REQUEST_ASSET("$/content/DLC/MPModePack/Hunting/bobcatWildernessAA", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Hunting/rioWildernessAA", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Hunting/steadWildernessAA", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Hunting/brokenWildernessAA", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/AtkDef/attackdefend", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/AtkDef/AD_fom/ad_fom", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/AtkDef/AD_BLK/ad_blk", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/AtkDef/AD_ESC/ad_esc", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/AtkDef/AD_THI/ad_thi", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_Race/MP_Race", 4);
		REQUEST_ASSET("MP_Horserace_Victory", 5);
		REQUEST_ASSET("custom/MP_Horserace_Victory", 8);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_Arm/MP_Race_Arm", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_PRD/MP_Race_Prd", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_Lsh/MP_Race_Lsh", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_RAT/MP_Race_Rat", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_RIO/MP_Race_Rio", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_HAN/MP_Race_Han", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_SWG/MP_Race_Swg", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_TAL/MP_Race_Tal", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_DZC/MP_Race_DZC", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_GAP/MP_Race_Gap", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_GRT/MP_Race_Grt", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_GP1", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_GP2", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_GP3", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/CRI/CRI", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/VEN/VEN", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/CRK/CRK", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/SCR/SCR", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/RNP/RanchoPolvo", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/WAR/WarthingtonRanch", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/ActionAreas/CUE/CuevaSeca", 4);
		if (IS_DEV_BUILD())
		{
			REQUEST_ASSET("$/content/DLC/MPModePack/Races/MP_Race_Test/MP_Race_Test", 4);
		}
		REQUEST_ASSET("$/fragments/p_gen_markerPost01x", 0);
		REQUEST_ASSET("$/fragments/p_gen_marker01x", 0);
		REQUEST_ASSET("$/fragments/p_gen_marker02x", 0);
		REQUEST_ASSET("$/fragments/c_gen_flg03x", 0);
		REQUEST_ASSET("$/fragments/c_gen_flg04x", 0);
		REQUEST_ASSET("$/fragments/p_gen_fpole01x", 0);
		REQUEST_ASSET("$/content/scripting/gringo/simplegringo/MP_Lockpick_Safe", 1);
		REQUEST_ASSET("knl_picksafe", 5);
		REQUEST_ASSET("custom/knl_picksafe_mp", 8);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_Poker_sb", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_ARM/MP_Poker_ARM", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_HEN/MP_Poker_HEN", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_THI/MP_Poker_THI", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_CAS/MP_Poker_CAS", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_Poker_Instances/MP_Poker_BEH/MP_Poker_BEH", 4);
		REQUEST_ASSET("$/fragments/p_gen_dice02x", 0);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_MG_Scoreboards/MP_LiarsDice_sb", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_LiarsDice_Instances/MP_LiarsDice_THI/MP_LiarsDice_THI", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_LiarsDice_Instances/MP_LiarsDice_ESC/MP_LiarsDice_ESC", 4);
		REQUEST_ASSET("$/content/DLC/MPModePack/MP_LiarsDice_Instances/MP_LiarsDice_CAS/MP_LiarsDice_CAS", 4);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "ls_pkr_beh", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "ls_pkr_arm", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "ls_pkr_hen", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "ls_pkr_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "ls_pkr_cas", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nls_ld_thi", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nls_ld_esc", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nls_ld_cas", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_AD_ESC", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_AD_THI", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_AD_FOM", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "nLS_AD_BLK", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_ARM", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_DZC", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_GAP", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_GRT", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_HAN", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_LSH", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_PRD", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_RAT", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_RIO", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_SWG", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_TAL", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_GP1", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_GP2", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "LS_RAC_GP3", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "ammo_antitank", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "FE_RIF_AntiTank", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "RIF_AntiTank", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "weapons_RIF_Explosive", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "raceFinish_Blank", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "captureCheckPoints_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "dontShoot_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "gotLives_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "grandPrixPoints_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "grandPrixTop3_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "hardToKill_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "finishAll3_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "matchWins_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "timeAttacking_128", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "captureCheckPoints_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "dontShoot_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "gotLives_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "grandPrixPoints_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "grandPrixTop3_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "hardToKill_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "finishAll3_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "matchWins_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "timeAttacking_64", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC09", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC11", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC12", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC13", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC14", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC15", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC16", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC17", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC18", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC19", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC20", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC21", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC22", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC23", 0, 16);
		UI_REGISTER_STREAMING_TEXTURE("n$/mapres/", "MPPLAYER_DLC24", 0, 16);
		LOAD_PTFX_DLC_ASSETS("modePack_core");
		LOAD_AUDIO_BANK("DLC_00", "DLC5\\BASE_RIFLE_RIFLE_ANTITANK");
		Function_87();
		Function_86();
		Function_84();
		Function_83();
		REQUEST_ASSET("nArmadillo", 12);
		REQUEST_ASSET("Blackwater", 12);
		REQUEST_ASSET("Escalera", 12);
		REQUEST_ASSET("ThievesLanding", 12);
		REQUEST_ASSET("MPModePackGringoDictionary", 12);
	}
	Function_80(0);
	SET_WEAPONENUM_LOCKED(31, 0);
	Function_76(950);
	Function_76(954);
	Function_76(955);
	Function_76(959);
	Function_76(960);
	Function_76(961);
	Function_76(962);
	Function_74(64);
	Function_72();
	DISABLE_CHILD_SECTOR("mp_blk_base01x");
	DISABLE_CHILD_SECTOR("dlc_arm_race01x");
	DISABLE_CHILD_SECTOR("dlc_dzc_race01x");
	DISABLE_CHILD_SECTOR("dlc_gap_race01x");
	DISABLE_CHILD_SECTOR("dlc_grt_race01x");
	DISABLE_CHILD_SECTOR("dlc_han_race01x");
	DISABLE_CHILD_SECTOR("dlc_lsh_race01x");
	DISABLE_CHILD_SECTOR("dlc_prd_race01x");
	DISABLE_CHILD_SECTOR("dlc_rio_race01x");
	DISABLE_CHILD_SECTOR("dlc_swg_race01x");
	DISABLE_CHILD_SECTOR("dlc_tal_race01x");
	DISABLE_CHILD_SECTOR("dlc_fom_atkdef01x");
	DISABLE_CHILD_SECTOR("dlc_esc_strhld01x");
	DISABLE_CHILD_SECTOR("dlc_blk_strhld01x");
	DISABLE_CHILD_SECTOR("dlc_thi_strhld01x");
	DISABLE_WORLD_SECTOR("dlc05x");
	return;
}

void Function_72() //Position: 0x4B0D / 19213
{
	Function_73(&Global_83864 + 1288, 7, "title_dlc_three_", 62);
	Function_73(&Global_83864 + 1288, 8, "title_dlc_four_", 23);
	return;
}

void Function_73(var uParam0, int iParam1, char* cParam2, int iParam3) //Position: 0x4B53 / 19283
{
	strcpy(uParam0[iParam117], cParam2, 64);
	uParam0[iParam117]->f_64 = iParam3;
	uParam0->f_684 = (uParam0->f_684 + iParam3);
}

void Function_74(int iParam0) //Position: 0x4B7C / 19324
{
	Function_75(&Global_83864 + 1252, iParam0);
	return;
}

void Function_75(var uParam0, int iParam1) //Position: 0x4B8E / 19342
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_76(int iParam0) //Position: 0x4B9B / 19355
{
	Function_44(&Global_83864 + 1976[Function_79(iParam0)], Function_77(iParam0));
	return;
}

int Function_77(int iParam0) //Position: 0x4BB7 / 19383
{
	return Function_6((Function_78(iParam0) % 32));
}

int Function_78(int iParam0) //Position: 0x4BC8 / 19400
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_79(int iParam0) //Position: 0x4BE7 / 19431
{
	return (Function_78(iParam0) / 32);
}

void Function_80(int iParam0) //Position: 0x4BF5 / 19445
{
	int iVar0;
	
	iVar0 = 837;
	while (iVar0 < 971)
	{
		if (Function_82(iVar0) == iParam0)
		{
			Function_81(iVar0);
		}
		iVar0++;
	}
	iVar0 = 1287;
	while (iVar0 < 1310)
	{
		if (Function_82(iVar0) == iParam0)
		{
			Function_81(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_81(int iParam0) //Position: 0x4C45 / 19525
{
	Function_7(&Global_83864 + 1976[Function_79(iParam0)], Function_77(iParam0));
	return;
}

int Function_82(int iParam0) //Position: 0x4C61 / 19553
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(iParam0)) % 1000);
}

void Function_83() //Position: 0x4C73 / 19571
{
	UNK_0xC741F051(1112, 0.0f, -0.1f, 0.0f, 0.0f, -0.1f, 0.0f);
	UNK_0xC741F051(1113, 0.0f, -0.1f, 0.0f, 0.0f, -0.1f, 0.0f);
	UNK_0xC741F051(1114, 0.0f, -0.1f, 0.0f, 0.0f, -0.1f, 0.0f);
	UNK_0xC741F051(1115, 0.0f, -0.1f, 0.0f, 0.0f, -0.1f, 0.0f);
	return;
}

void Function_84() //Position: 0x4CC9 / 19657
{
	struct<45> Var0;
	
	Var0.f_4 = "MPPLAYER_DLC09";
	Var0.f_8 = "player_defaultMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC09";
	Function_85(949, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC11";
	Var0.f_8 = "player_jack_defaultMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC11";
	Function_85(950, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC12";
	Var0.f_8 = "com_wifeMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Female";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC12";
	Function_85(951, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC13";
	Var0.f_8 = "com_ranchersDaughterMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Female";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC13";
	Function_85(952, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC14";
	Var0.f_8 = "com_marshalMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC14";
	Function_85(953, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC15";
	Var0.f_8 = "com_snakeOilMerchantMP";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC15";
	Function_85(954, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC16";
	Var0.f_8 = "com_mexicanGirlMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Female";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC16";
	Function_85(955, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC24";
	Var0.f_8 = "com_graveRobberMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 12000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC24";
	Function_85(963, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC17";
	Var0.f_8 = "com_outlawMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC17";
	Function_85(956, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC18";
	Var0.f_8 = "com_firstFbiAgentMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC18";
	Function_85(957, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC19";
	Var0.f_8 = "anc_nemesis";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC19";
	Function_85(958, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC20";
	Var0.f_8 = "anc_firstOldFriendMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC20";
	Function_85(959, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC21";
	Var0.f_8 = "anc_mexicanTyrant";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC21";
	Function_85(960, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC22";
	Var0.f_8 = "com_mexicanRebelLeaderMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "fat";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC22";
	Function_85(961, "template_mplayer", &Var0);
	Var0.f_4 = "MPPLAYER_DLC23";
	Var0.f_8 = "com_anthropologistMp";
	Var0.f_12 = "";
	Var0 = 1;
	*(&Var0 + 16) = { 1.0f, 1.0f, 1.0f };
	Var0.f_28 = 13000;
	Var0.f_32 = "Male";
	Var0.f_36 = "gped";
	Var0.f_40 = "nCaucasian";
	Var0.f_44 = "MPPLAYER_DLC23";
	Function_85(962, "template_mplayer", &Var0);
	return;
}

void Function_85(var uParam0, int iParam1, var uParam2) //Position: 0x560D / 22029
{
	INIT_NATIVE_ACTORENUM_DLC_PLAYER(uParam0, iParam1, uParam2, 12);
	return;
}

void Function_86() //Position: 0x561E / 22046
{
	REPLACE_WORLD_SECTOR_LOAD_BOUNDING_BOX("dlc05x");
	return;
}

void Function_87() //Position: 0x5630 / 22064
{
	struct<329> Var0;
	
	Var0.f_20 = "RIFLE_Antitank";
	Var0.f_4 = 42;
	Var0.f_8 = 4294967295;
	Var0.f_12 = 80;
	Var0.f_16 = 13;
	Var0.f_28 = "rifle_explosive01x";
	Var0.f_32 = "WEAPONS_RIFLE_ANTITANK";
	Var0.f_36 = "WEAPONS_RIFLE_ANTITANK";
	Var0.f_24 = "ANTITANK";
	Var0.f_64 = "RIF_Explosive";
	Var0.f_68 = 4000.0f;
	Var0.f_72 = "rfl";
	Var0.f_76 = "rfl_buf";
	Var0.f_80 = "Rifle_bltStrip";
	Var0.f_84 = "rifle_1892Win";
	Var0.f_88 = "rifle_1892Win";
	Var0.f_92 = 1.0f;
	Var0.f_96 = 110.0f;
	Var0.f_100 = 80.0f;
	Var0.f_104 = 0.5f;
	Var0.f_108 = 1.0f;
	Var0.f_112 = 0.6f;
	Var0.f_116 = 120.0f;
	Var0.f_120 = 1.0f;
	Var0.f_124 = 0.4f;
	Var0.f_128 = 1.2f;
	Var0.f_132 = "MUZZLE_FLASH2";
	Var0.f_136 = "RUMBLE_RIFLE_HI";
	Var0.f_140 = "wrist_r_Attachment";
	Var0.f_144 = 0.0f;
	Var0.f_148 = 0.0f;
	Var0.f_152 = 0.0f;
	Var0.f_156 = 0.0f;
	Var0.f_160 = 40.0f;
	Var0.f_164 = 100.0f;
	Var0.f_168 = 0.3f;
	Var0.f_172 = 40.0f;
	Var0.f_176 = 100.0f;
	Var0.f_180 = 0.3f;
	Var0.f_184 = 0.0f;
	Var0.f_188 = 1.0f;
	Var0.f_192 = 0.0f;
	Var0.f_196 = "AIMER_BALLISTIC";
	Var0.f_200 = 1;
	Var0.f_204 = 0;
	Var0.f_208 = 1.8f;
	Var0.f_212 = 0.2f;
	Var0.f_216 = 0.5f;
	Var0.f_220 = 1.0f;
	Var0.f_224 = 1.0f;
	Var0.f_228 = 65.0f;
	Var0.f_232 = 65.0f;
	Var0.f_236 = 65.0f;
	Var0.f_240 = 70.0f;
	Var0.f_244 = 300.0f;
	Var0.f_248 = "";
	Var0.f_252 = 0;
	Var0.f_256 = 10.0f;
	Var0.f_260 = 60.0f;
	Var0.f_264 = 70.0f;
	Var0.f_268 = 5.0f;
	Var0.f_272 = 1.0f;
	Var0.f_276 = 4.0f;
	Var0.f_280 = 50.0f;
	Var0.f_284 = 1.0f;
	Var0.f_288 = 0;
	Var0.f_292 = 20.0f;
	Var0.f_296 = "Single";
	Var0.f_300 = 0.5f;
	Var0.f_308 = 1.0f;
	Var0.f_312 = 1.0f;
	Var0.f_316 = 500.0f;
	Var0.f_320 = 1.8f;
	Var0.f_324 = 0.5f;
	Var0.f_304 = 1.0f;
	Var0.f_328 = 1.0f;
	Var0.f_40 = 4294967295;
	Var0.f_44 = 1.0f;
	Var0.f_48 = 0.7f;
	Var0.f_52 = 0.27f;
	Var0.f_56 = 0.7f;
	Var0.f_60 = 0.1f;
	Function_89(31, "base_rifle", &Var0);
	RESOLVE_DLC_WEAPONENUM(31);
	Var83 = "ANTITANK";
	Var83.f_4 = "ammo_antitank";
	Var83.f_8 = "ammo_antiTank";
	Var83.f_12 = 30.0f;
	Var83.f_16 = 1.0f;
	Var83.f_20 = 0;
	Var83.f_24 = 0.5f;
	Var83.f_28 = 1;
	Var83.f_32 = 1;
	Function_88(13, &Var83);
	return;
}

void Function_88(int iParam0, int iParam1) //Position: 0x59E5 / 23013
{
	INIT_NATIVE_WEAPONENUM_AMMO(iParam0, iParam1);
	return;
}

void Function_89(var uParam0, var uParam1, var uParam2) //Position: 0x59F2 / 23026
{
	INIT_NATIVE_WEAPONENUM_RIFLE(uParam0, uParam1, uParam2);
	return;
}

