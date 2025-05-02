//Decompiled with MagicRDR v1.0
//Function Count : 38
//Statics Count : 15
//Natives Count : 30
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
	uVar0 = "$/content/DLC/TitleStorage/stringtable/tms_strings.strtbl";
	if (IS_PS3())
	{
		uVar0 = "$/content/DLC/TitleStorage/stringtable/tms_strings_ps3.strtbl";
	}
	if (IS_PS4())
	{
		uVar0 = "$/content/DLC/TitleStorage/stringtable/tms_strings_ps4.strtbl";
	}
	if (IS_SWITCH())
	{
		uVar0 = "$/content/DLC/TitleStorage/stringtable/tms_strings_switch.strtbl";
	}
	STRINGTABLE_APPEND_TABLE(&uVar0);
	PRINTSTRING("=========================== Title Manager Storage Xbox360 Run Script Started ==================================================");
	PRINTNL();
	PRINTSTRING("=========================== New version that builds TDM and HARD_TDM playlists and just those ============================================");
	PRINTNL();
	*(&cVar1 + 140) = 36;
	*(&iVar166 + 140) = 36;
	PRINTSTRING("=========================== Hardcore Free Roam is Go! ==================================================");
	PRINTNL();
	Function_33(&cVar1, "net_name_hcfm", "", Function_37(), 0, 16, 411, 0, 0);
	Function_31(&cVar1, 1);
	Function_33(&cVar1, "MULTI_ROTATION_TDM", "", 44, 2, 16, 445, 32770, "$/tune/refGroups/refGroups/mp_teamgames");
	Function_30(&cVar1, "TDM_HEN");
	Function_30(&cVar1, "TDM_TUM");
	Function_30(&cVar1, "TDM_CHU");
	Function_30(&cVar1, "TDM_LSH");
	Function_30(&cVar1, "TDM_ARM");
	Function_31(&cVar1, 1);
	Function_33(&cVar1, "MULTI_ROTATION_HARD_TDM", "", 48, 2, 16, 445, 9746, 0);
	if (Function_29(44, &iVar166))
	{
		Function_28(&iVar166, &cVar1);
	}
	Function_31(&cVar1, 1);
	if (Function_27(600) >= GET_UTC_TIME())
	{
		Function_12(600, 0, 0);
	}
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
	PRINTSTRING("=========================== Title Manager Storage Xbox360 Run Script Completed ==================================================");
	PRINTNL();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x551 / 1361
{
	Function_2(&Global_131807 + 2720[Function_6(iParam0)], Function_3(iParam0));
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x56D / 1389
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_3(int iParam0) //Position: 0x57E / 1406
{
	return Function_4((Function_5(iParam0) % 32));
}

int Function_4(bool bParam0) //Position: 0x58F / 1423
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_5(int iParam0) //Position: 0x59B / 1435
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_6(int iParam0) //Position: 0x5BA / 1466
{
	return (Function_5(iParam0) / 32);
}

void Function_7() //Position: 0x5C8 / 1480
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
	Function_33(&cVar2, &cVar0, "MULTI_ROTATION_TMS_HCDM", iVar1, 3, 16, 4294967295, 9746, 0);
	Function_30(&cVar2, "DM_W6_2");
	Function_30(&cVar2, "CFA_COC");
	Function_30(&cVar2, "DM_COC_2");
	Function_30(&cVar2, "CFA_GAP");
	Function_30(&cVar2, "DM_PIK");
	Function_30(&cVar2, "CFA_ELP");
	Function_30(&cVar2, "DM_PLN");
	Function_30(&cVar2, "DM_GAP");
	Function_30(&cVar2, "nCFA_COC_2");
	Function_30(&cVar2, "DM_COC");
	Function_30(&cVar2, "DM_ELP");
	Function_30(&cVar2, "CFA_PLN");
	Function_31(&cVar2, 1);
	cVar167 = "MULTI_ROTATION_TMS_HCTDM";
	iVar168 = 58;
	*(&cVar169 + 140) = 36;
	Function_33(&cVar169, &cVar167, "", iVar168, 2, 16, 4294967295, 9746, 0);
	Function_30(&cVar169, "TDM_COC");
	Function_30(&cVar169, "CFS_BEN");
	Function_30(&cVar169, "TDM_PIK");
	Function_30(&cVar169, "TDM_W6_2");
	Function_30(&cVar169, "CTF_BEN");
	Function_30(&cVar169, "TDM_GAP");
	Function_30(&cVar169, "nTDM_COC_2");
	Function_30(&cVar169, "CFS_RAM");
	Function_30(&cVar169, "TDM_PLN");
	Function_30(&cVar169, "TDM_ELP");
	Function_30(&cVar169, "CTF_RAM");
	Function_9(15, 2);
	Function_9(15, 4);
	Function_9(15, 5);
	Function_9(15, 6);
	Function_9(15, 7);
	Function_9(15, 8);
	Function_9(15, 9);
	Function_2(&Global_123163 + 3664[15], 1);
	Function_8(&cVar169, 15);
	Function_31(&cVar169, 1);
	cVar334 = "MULTI_ROTATION_TMS_HCAD";
	iVar335 = 59;
	*(&cVar336 + 140) = 36;
	Function_33(&cVar336, &cVar334, "", iVar335, 2, 16, 4294967295, 9746, 0);
	Function_30(&cVar336, "AD_TUM");
	Function_30(&cVar336, "AD_CHU");
	Function_30(&cVar336, "AD_TOR");
	Function_30(&cVar336, "AD_ARM");
	Function_30(&cVar336, "AD_BEC");
	Function_30(&cVar336, "AD_COC");
	Function_8(&cVar336, 15);
	Function_31(&cVar336, 1);
	return;
}

void Function_8(int iParam0, bool bParam1) //Position: 0x8DB / 2267
{
	if (bParam1 > 1 || bParam1 <= 32)
	{
		return;
	}
	Function_2(&iParam0 + 1304, Function_4(bParam1));
	return;
}

void Function_9(bool bParam0, int iParam1) //Position: 0x8FD / 2301
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

bool Function_10(int iParam0) //Position: 0x971 / 2417
{
	return Function_11(Global_131807.f_1304, iParam0);
}

int Function_11(var uParam0, int iParam1) //Position: 0x983 / 2435
{
	return (uParam0 && iParam1) == 0;
}

int Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0x990 / 2448
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_26(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_25(iParam0);
	if (&bParam2)
	{
		Function_13(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xC2C / 3116
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			bParam2 = (bParam2 * 3,28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_24(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_23(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_23(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_21(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_18(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_15(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_14(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_14() //Position: 0x126A / 4714
{
	int iVar0;
	
	return &iVar0;
}

var Function_15(int iParam0) //Position: 0x1273 / 4723
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_16(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1284 / 4740
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_17("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_17("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_17("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_17(char* cParam0) //Position: 0x137B / 4987
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_18(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1396 / 5014
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_20(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_19(Function_20(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_19(int iParam0, int iParam1) //Position: 0x13FD / 5117
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_20(int iParam0, bool bParam1) //Position: 0x140F / 5135
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_21(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1421 / 5153
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_22(iParam0) != 19 || Function_22(iParam0) != 17) || Function_22(iParam0) != 10) || Function_22(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_22(int iParam0) //Position: 0x1555 / 5461
{
	return Global_55480[iParam016].f_96;
}

float Function_23(int iParam0) //Position: 0x1564 / 5476
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_24(int iParam0) //Position: 0x159D / 5533
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_25(int iParam0) //Position: 0x15DA / 5594
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_26(int iParam0, float fParam1, bool bParam2) //Position: 0x1774 / 6004
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_27(int iParam0) //Position: 0x19B8 / 6584
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_28(struct<137> Param0) //Position: 0x19F9 / 6649
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_136 - 1))
	{
		Function_30(&iParam1, &Param0 + 140[iVar04]);
		iVar0++;
	}
	return;
}

bool Function_29(int iParam0, int iParam1) //Position: 0x1A27 / 6695
{
	if (GET_PLAYLIST_FROM_DB(iParam0, &iParam1))
	{
		return 1;
	}
	return 0;
}

int Function_30(struct<137> Param0) //Position: 0x1A3B / 6715
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

int Function_31(char* cParam0) //Position: 0x1AF5 / 6901
{
	if (ADD_PLAYLIST_TO_DB(cParam0.f_128, &cParam0))
	{
		if (&bParam1)
		{
			NET_REGISTER_PLAYLIST_TYPE(&cParam0, cParam0.f_128, cParam0.f_132);
			if (Function_32(cParam0.f_1300, 4))
			{
				NET_SET_PLAYLIST_LOCKED(&cParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool Function_32(var uParam0, bool bParam1) //Position: 0x1B39 / 6969
{
	return (uParam0 && bParam1) == 0;
}

void Function_33(struct<1309> Param0) //Position: 0x1B46 / 6982
{
	strcpy(&Param0, &cParam1, 32);
	strcpy(&Param0 + 64, &cParam2, 32);
	Param0.f_132 = iParam5;
	Param0.f_128 = iParam3;
	Param0.f_1308 = iParam6;
	Function_36(&Param0, 1014);
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
	Param0.f_1300 = (iParam7 || Function_35(iParam4));
	Function_34(&Param0);
}

void Function_34(struct<137> Param0) //Position: 0x1BC2 / 7106
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

var Function_35(bool bParam0) //Position: 0x1BF3 / 7155
{
	return SHIFT_LEFT(bParam0, 20);
}

void Function_36(struct<1305> Param0) //Position: 0x1C00 / 7168
{
	Param0.f_1304 = uParam1;
	return;
}

int Function_37() //Position: 0x1C0E / 7182
{
	return 32;
}

