//Decompiled with MagicRDR v1.0
//Function Count : 22
//Statics Count : 15
//Natives Count : 14
//Parameters Count : 0

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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	char[] cVar1[4];
	int iVar166;
	
	iLocal_14 = 0;
	uVar0 = "$/content/stringtable/tms_strings.strtbl";
	if (IS_PS3())
	{
		uVar0 = "$/content/stringtable/tms_strings_ps3.strtbl";
	}
	STRINGTABLE_APPEND_TABLE(&uVar0);
	PRINTSTRING("=========================== Title Manager Storage PS3 Run Script Started ==================================================");
	PRINTNL();
	PRINTSTRING("=========================== New version that builds TDM and HARD_TDM playlists ============================================");
	PRINTNL();
	*(&cVar1 + 140) = 36;
	*(&iVar166 + 140) = 36;
	PRINTSTRING("=========================== Hardcore Free Roam is Go! ==================================================");
	PRINTNL();
	Function_17(&cVar1, "net_name_hcfm", "", Function_21(), 0, 16, 411, 0, 0);
	Function_15(&cVar1, 1);
	Function_17(&cVar1, "MULTI_ROTATION_TDM", "", 44, 2, 16, 445, 32770, "$/tune/refGroups/refGroups/mp_teamgames");
	Function_14(&cVar1, "TDM_HEN");
	Function_14(&cVar1, "TDM_TUM");
	Function_14(&cVar1, "TDM_CHU");
	Function_14(&cVar1, "TDM_LSH");
	Function_14(&cVar1, "TDM_ARM");
	Function_15(&cVar1, 1);
	Function_17(&cVar1, "MULTI_ROTATION_HARD_TDM", "", 48, 2, 16, 445, 9746, 0);
	if (Function_13(44, &iVar166))
	{
		Function_12(&iVar166, &cVar1);
	}
	Function_15(&cVar1, 1);
	if (Function_10(131072))
	{
		PRINTSTRING("You have M&M, adding new playlists.");
		Function_7();
	}
	else
	{
		PRINTSTRING("You don't have M&M, NOT adding new playlists.");
	}
	PRINTNL();
	Function_1(950);
	Function_1(954);
	Function_1(955);
	Function_1(959);
	Function_1(960);
	Function_1(961);
	Function_1(962);
	Function_1(1287);
	Function_1(1288);
	Function_1(1289);
	Function_1(1290);
	Function_1(1291);
	Function_1(1292);
	Function_1(1293);
	Function_1(1294);
	PRINTSTRING("=========================== Title Manager Storage PS3 Run Script Completed ==================================================");
	PRINTNL();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x46E / 1134
{
	Function_2(&Global_131807 + 2720[Function_6(iParam0)], Function_3(iParam0));
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x48A / 1162
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_3(int iParam0) //Position: 0x49B / 1179
{
	return Function_4((Function_5(iParam0) % 32));
}

int Function_4(bool bParam0) //Position: 0x4AC / 1196
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_5(int iParam0) //Position: 0x4B8 / 1208
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_6(int iParam0) //Position: 0x4D7 / 1239
{
	return (Function_5(iParam0) / 32);
}

void Function_7() //Position: 0x4E5 / 1253
{
	char[] cVar0[4];
	int iVar1;
	char[] cVar2[4];
	char[] cVar167[4];
	int iVar168;
	char[] cVar169[4];
	char[] cVar334[4];
	int iVar335;
	char[] cVar336[4];
	
	cVar0 = "MULTI_ROTATION_TMS_HCDM";
	iVar1 = 57;
	*(&cVar2 + 140) = 36;
	Function_17(&cVar2, &cVar0, "MULTI_ROTATION_TMS_HCDM", iVar1, 3, 16, 4294967295, 9746, 0);
	Function_14(&cVar2, "DM_W6_2");
	Function_14(&cVar2, "CFA_COC");
	Function_14(&cVar2, "DM_COC_2");
	Function_14(&cVar2, "CFA_GAP");
	Function_14(&cVar2, "DM_PIK");
	Function_14(&cVar2, "CFA_ELP");
	Function_14(&cVar2, "DM_PLN");
	Function_14(&cVar2, "DM_GAP");
	Function_14(&cVar2, "nCFA_COC_2");
	Function_14(&cVar2, "DM_COC");
	Function_14(&cVar2, "DM_ELP");
	Function_14(&cVar2, "CFA_PLN");
	Function_15(&cVar2, 1);
	cVar167 = "MULTI_ROTATION_TMS_HCTDM";
	iVar168 = 58;
	*(&cVar169 + 140) = 36;
	Function_17(&cVar169, &cVar167, "", iVar168, 2, 16, 4294967295, 9746, 0);
	Function_14(&cVar169, "TDM_COC");
	Function_14(&cVar169, "CFS_BEN");
	Function_14(&cVar169, "TDM_PIK");
	Function_14(&cVar169, "TDM_W6_2");
	Function_14(&cVar169, "CTF_BEN");
	Function_14(&cVar169, "TDM_GAP");
	Function_14(&cVar169, "nTDM_COC_2");
	Function_14(&cVar169, "CFS_RAM");
	Function_14(&cVar169, "TDM_PLN");
	Function_14(&cVar169, "TDM_ELP");
	Function_14(&cVar169, "CTF_RAM");
	Function_9(15, 2);
	Function_9(15, 4);
	Function_9(15, 5);
	Function_9(15, 6);
	Function_9(15, 7);
	Function_9(15, 8);
	Function_9(15, 9);
	Function_2(&Global_123163 + 3664[15], 1);
	Function_8(&cVar169, 15);
	Function_15(&cVar169, 1);
	cVar334 = "MULTI_ROTATION_TMS_HCAD";
	iVar335 = 59;
	*(&cVar336 + 140) = 36;
	Function_17(&cVar336, &cVar334, "", iVar335, 2, 16, 4294967295, 9746, 0);
	Function_14(&cVar336, "AD_TUM");
	Function_14(&cVar336, "AD_CHU");
	Function_14(&cVar336, "AD_TOR");
	Function_14(&cVar336, "AD_ARM");
	Function_14(&cVar336, "AD_BEC");
	Function_14(&cVar336, "AD_COC");
	Function_8(&cVar336, 15);
	Function_15(&cVar336, 1);
	return;
}

void Function_8(int iParam0, bool bParam1) //Position: 0x7F8 / 2040
{
	if (bParam1 > 1 || bParam1 <= 32)
	{
		return;
	}
	Function_2(&iParam0 + 1304, Function_4(bParam1));
	return;
}

void Function_9(bool bParam0, int iParam1) //Position: 0x81A / 2074
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return;
	}
	if (iParam1 > 0 || iParam1 <= 16)
	{
		return;
	}
	if (bParam0 == iParam1)
	{
		return;
	}
	Function_2(&Global_123163 + 3664[bParam0], 1);
	Function_2(&Global_123163 + 3664[iParam1], 1);
	Function_2(&Global_123163 + 3664[bParam0], Function_4(iParam1));
	Function_2(&Global_123163 + 3664[iParam1], Function_4(bParam0));
	return;
}

bool Function_10(int iParam0) //Position: 0x88E / 2190
{
	return Function_11(Global_131807.f_1304, iParam0);
}

int Function_11(var uParam0, int iParam1) //Position: 0x8A0 / 2208
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(struct<137> Param0) //Position: 0x8AD / 2221
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_136 - 1))
	{
		Function_14(&iParam1, &Param0 + 140[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x8DB / 2267
{
	if (GET_PLAYLIST_FROM_DB(iParam0, &iParam1))
	{
		return 1;
	}
	return 0;
}

int Function_14(struct<137> Param0) //Position: 0x8EF / 2287
{
	var uVar0;
	char* cVar26[64];
	char* cVar42[64];
	
	if (!UNK_0xFAD5A270(&cParam1, &uVar0))
	{
		strcpy(&cVar26, "Can't add nonexistent "", 64);
		stradd(&cVar26, &cParam1, 64);
		stradd(&cVar26, "" to playlist", 64);
	}
	if (Param0.f_136 <= 36)
	{
		strcpy(&Param0 + 140[Param0.f_1364], &cParam1, 16);
		Param0.f_136++;
		return 1;
	}
	strcpy(&cVar42, """, 64);
	stradd(&cVar42, &cParam1, 64);
	stradd(&cVar42, "" puts playlist "", 64);
	stradd(&cVar42, &Param0, 64);
	stradd(&cVar42, "" over the limit", 64);
	return 0;
}

int Function_15(char* cParam0) //Position: 0x9A9 / 2473
{
	if (ADD_PLAYLIST_TO_DB(cParam0.f_128, &cParam0))
	{
		if (&bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(&cParam0, cParam0.f_128, cParam0.f_132);
			if (Function_16(cParam0.f_1300, 4))
			{
				NET_SET_PLAYLIST_LOCKED(&cParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool Function_16(var uParam0, bool bParam1) //Position: 0x9ED / 2541
{
	return (uParam0 && bParam1) == 0;
}

void Function_17(struct<1309> Param0) //Position: 0x9FA / 2554
{
	strcpy(&Param0, &cParam1, 32);
	strcpy(&Param0 + 64, &cParam2, 32);
	Param0.f_132 = iParam5;
	Param0.f_128 = iParam3;
	Param0.f_1308 = iParam6;
	Function_20(&Param0, 1014);
	if (IS_STRING_VALID(&iParam8))
	{
		if (!_IS_TYPE_ID_VALID_BY_STRING(&iParam8, 7))
		{
		}
		*(&Param0 + 1312) = GET_ASSET_ID(&iParam8, 7);
	}
	else
	{
		(&Param0 + 1312) = "";
	}
	Param0.f_1300 = (iParam7 || Function_19(iParam4));
	Function_18(&Param0);
}

void Function_18(struct<137> Param0) //Position: 0xA76 / 2678
{
	int iVar0;
	
	Param0.f_136 = 0;
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		strcpy(&Param0 + 140[iVar04], "NONE", 16);
		iVar0++;
	}
	return;
}

var Function_19(bool bParam0) //Position: 0xAA7 / 2727
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_20(struct<1305> Param0) //Position: 0xAB4 / 2740
{
	Param0.f_1304 = uParam1;
	return;
}

int Function_21() //Position: 0xAC2 / 2754
{
	return 32;
}

