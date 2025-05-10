//Decompiled with MagicRDR v1.0
//Function Count : 20
//Statics Count : 2
//Natives Count : 19
//Parameters Count : 1

#region Local Var
	float fLocal_0 = 0.0f;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	
	fLocal_0 = 1.0f;
	bVar0 = uScriptParam_0 & 1 == false;
	bVar1 = uScriptParam_0 & 2 == false;
	if (Global_34165.f_44)
	{
	}
	if (bVar1)
	{
		Function_14(bVar0);
	}
	else
	{
		Function_1(bVar0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x39 / 57
{
	var uVar0;
	
	if (bParam0)
	{
		uVar0 = "$/content/DLC/MPCoopPack/mpcooppack.strtbl";
		STRINGTABLE_APPEND_TABLE(uVar0);
		Function_12();
	}
	if (Global_34165.f_44)
	{
		Function_2();
	}
	TOGGLE_COOP_JOURNAL_UI(1);
	UI_INCLUDE("LbCat_DLC1");
	return;
}

void Function_2() //Position: 0x9A / 154
{
	bool bVar0;
	int iVar168;
	
	*(&bVar0 + 76) = 36;
	*(&iVar168 + 76) = 36;
	Function_8(&bVar0, "MULTI_ROTATION_COOPPACK", "COOP_Barker", 37, 1, 4, 449, 0, "$/tune/refGroups/refGroups/mp_coop");
	Function_7(&bVar0, "AA_GAPMP");
	Function_7(&bVar0, "AA_TUMMP");
	Function_7(&bVar0, "AA_FOMMP");
	Function_7(&bVar0, "AA_PIKMP");
	Function_7(&bVar0, "AA_NOSMP");
	Function_7(&bVar0, "AA_TESMP");
	Function_5(&bVar0, 1);
	Function_8(&bVar0, "MULTI_ROTATION_ADV_COOPPACK", "", 38, 1, 4, 449, 244, 0);
	if (Function_4(37, &iVar168))
	{
		Function_3(&iVar168, &bVar0);
	}
	Function_5(&bVar0, 1);
	return;
}

void Function_3(int iParam0, char* cParam1) //Position: 0x1C3 / 451
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_72 - 1))
	{
		Function_7(cParam1, iParam0 + 76[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_4(int iParam0, int iParam1) //Position: 0x1EE / 494
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

int Function_5(bool bParam0, bool bParam1) //Position: 0x227 / 551
{
	if (Global_3361 <= 20)
	{
		Global_0[Global_3361168] = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0 };
		Global_3361++;
		if (bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(bParam0, bParam0->f_64, bParam0->f_68);
			if (Function_6(bParam0->f_656, 4))
			{
				NET_SET_PLAYLIST_LOCKED(bParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool Function_6(var uParam0, int iParam1) //Position: 0x277 / 631
{
	return (uParam0 && iParam1) == 0;
}

int Function_7(char* cParam0, bool bParam1) //Position: 0x284 / 644
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

void Function_8(int iParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x334 / 820
{
	strcpy(iParam0, cParam1, 32);
	strcpy(iParam0 + 32, bParam2, 32);
	iParam0->f_68 = iParam5;
	iParam0->f_64 = iParam3;
	iParam0->f_664 = iParam6;
	Function_11(iParam0, 1014);
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
	iParam0->f_656 = (iParam7 || Function_10(iParam4));
	Function_9(iParam0);
}

void Function_9(int iParam0) //Position: 0x39E / 926
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

var Function_10(bool bParam0) //Position: 0x3CD / 973
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_11(var uParam0, var uParam1) //Position: 0x3DA / 986
{
	uParam0->f_660 = uParam1;
	return;
}

void Function_12() //Position: 0x3E7 / 999
{
	bool bVar0;
	
	bVar0 = 500772;
	Function_13("AA_TUMMP", "net_name_AA_TUMMP", bVar0, 20, "$/content/DLC/MPCoopPack/TUM_coop/TumbleweedMP_CO", "$/content/DLC/MPCoopPack/Regions/TumBasic", -4191.011f, 23.11f, 3776.966f, 1);
	Function_13("AA_FOMMP", "net_name_AA_FOMMP", bVar0, 20, "$/content/DLC/MPCoopPack/FOM_Coop/FortMercerMP_CO", "$/content/DLC/MPCoopPack/Regions/FomBasic", -2601.073f, 72.273f, 3351.1f, 1);
	Function_13("AA_PIKMP", "net_name_AA_PIKMP", bVar0, 20, "$/content/DLC/MPCoopPack/PIK_Coop/PikesBasinMP_CO", "$/content/DLC/MPCoopPack/Regions/PikBasic", -1205.566f, 74.733f, 2375.88f, 1);
	Function_13("AA_GAPMP", "net_name_AA_GAPMP", bVar0, 20, "$/content/DLC/MPCoopPack/GAP_Coop/GaptoothBreachMP_CO", "$/content/DLC/MPCoopPack/Regions/GapBasic", -4436.313f, 7.167f, 3350.627f, 1);
	Function_13("AA_NOSMP", "net_name_AA_NOSMP", bVar0, 20, "$/content/DLC/MPCoopPack/NOS_Coop/NosalidaMP_CO", "$/content/DLC/MPCoopPack/Regions/NosalidaBasic", -3636.443f, 7.604f, 4248.969f, 1);
	Function_13("AA_TESMP", "net_name_AA_TESMP", (bVar0 || 4096), 20, "$/content/DLC/MPCoopPack/TES_Coop/TesoroAzulMP_CO", "$/content/DLC/MPCoopPack/Regions/TesBasic", -3261.275f, 38.149f, 4548.0f, 1);
	return;
}

var Function_13(char* cParam0, char* cParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, vector3 vParam6, int iParam9) //Position: 0x788 / 1928
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

void Function_14(bool bParam0) //Position: 0x851 / 2129
{
	if (bParam0)
	{
		LOAD_AUDIO_SPEECH_DATA("dlc1_speech.dat");
		LOAD_AUDIO_METADATA("sounds", "dlc1_sounds.dat", "DLC1");
		LOAD_AUDIO_METADATA("gameobjects", "dlc1_game.dat", "DLC1");
		LOAD_AUDIO_METADATA("curves", "dlc1_curves.dat", "DLC1");
		_DLC_FRAGMENT("$/fragments/MPCoopPack/fragmentsList.bin");
		DLC_INIT_STRINGTABLE_STREAMABLES("$/content/stringtable", "MPCoopPack/StringTableList");
		REQUEST_ASSET("dlc_mpcooppack_mp_coop", 10);
		REQUEST_ASSET("dlc_mpcooppack_mp_coop_tum", 10);
		REQUEST_ASSET("dlc_mpcooppack_mp_coop_fom", 10);
		REQUEST_ASSET("dlc_mpcooppack_mp_coop_pik", 10);
		REQUEST_ASSET("dlc_mpcooppack_mp_coop_gap", 10);
		REQUEST_ASSET("dlc_mpcooppack_mp_coop_nos", 10);
		REQUEST_ASSET("dlc_mpcooppack_mp_coop_tes", 10);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/Regions/TumBasic", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/Regions/FomBasic", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/Regions/PikBasic", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/Regions/GapBasic", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/Regions/TesBasic", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/Regions/NosalidaBasic", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/TUM_coop/TumbleweedMP_CO", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/FOM_coop/FortMercerMP_CO", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/PIK_coop/PikesBasinMP_CO", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/GAP_coop/GaptoothBreachMP_CO", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/NOS_coop/NosalidaMP_CO", 4);
		REQUEST_ASSET("$/content/DLC/MPCoopPack/TES_coop/TesoroAzulMP_CO", 4);
		Function_19();
	}
	Function_16(16);
	Function_15();
	return;
}

void Function_15() //Position: 0xCCC / 3276
{
	strcpy(&Global_83864 + 1288[517], "title_dlc_one_", 64);
	(&Global_83864 + 1288[517])->f_64 = 50;
	(&Global_83864 + 1288)->f_684 += 50;
	return;
}

void Function_16(int iParam0) //Position: 0xD13 / 3347
{
	Function_17(&Global_83864 + 1252, iParam0);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xD25 / 3365
{
	Function_18(uParam0, iParam1);
	return;
}

void Function_18(var uParam0, var uParam1) //Position: 0xD32 / 3378
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

void Function_19() //Position: 0xD41 / 3393
{
	return;
}

