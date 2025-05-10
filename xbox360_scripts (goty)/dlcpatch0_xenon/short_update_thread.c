//Decompiled with MagicRDR v1.0
//Function Count : 456
//Statics Count : 75
//Natives Count : 550
//Parameters Count : 0

#region Local Var
	bool bLocal_0 = false;
	vector3 vLocal_1 = { 0.0f, 0.0f, 0.0f };
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<9> Local_18[6];
	bool bLocal_73 = false;
	float fLocal_74 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	Function_451(&(vLocal_18[09]));
	Function_314(&(vLocal_18[19]));
	Function_195(&(vLocal_18[39]));
	Function_145(&(vLocal_18[59]));
	Function_111(&(vLocal_18[49]));
	Function_3(&(vLocal_18[29]));
	while ((!Function_2(256) && !IS_EXITFLAG_SET()) && !IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
	{
		WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_18)
	{
		if (vLocal_18[iVar09].f_28 || !Global_34165.f_44)
		{
			Call_Loc(vLocal_18[iVar09]);
			vLocal_18[iVar09].f_32 = 1;
		}
		else
		{
			vLocal_18[iVar09].f_32 = 0;
		}
		iVar0++;
	}
	while (!IS_EXITFLAG_SET())
	{
		SET_DEBUG_DRAW(((Global_30900[5] || Global_30900[6]) || Global_30900[7]));
		iVar0 = 0;
		while (iVar0 <= vLocal_18)
		{
			if (vLocal_18[iVar09].f_28 || !Function_1())
			{
				if (bLocal_73)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&vLocal_18[iVar09] + 12);
					PRINTSTRING(": ");
					fLocal_74 = GET_PROFILE_TIME();
				}
				Call_Loc(vLocal_18[iVar09].y);
				if (bLocal_73)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_74));
					PRINTNL();
				}
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_18)
	{
		if (vLocal_18[iVar09].f_32)
		{
			Call_Loc(vLocal_18[iVar09].z);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1() //Position: 0x175 / 373
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_2(int iParam0) //Position: 0x17E / 382
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_3(int iParam0) //Position: 0x19A / 410
{
	strcpy(iParam0 + 12, "EVENT-MONITOR", 16);
	*iParam0 = 28623;
	iParam0->f_4 = 530;
	iParam0->f_8 = 466;
	iParam0->f_28 = 1;
	return;
}

void Function_4() //Position: 0x1D2 / 466
{
	bool bVar0;
	
	if (IS_ITERATOR_VALID(Global_26149))
	{
		DESTROY_ITERATOR(Global_26149);
	}
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		RELEASE_LAYOUT_REF(bVar0);
	}
	return;
}

int Function_5() //Position: 0x212 / 530
{
	bool bVar0;
	
	Function_109(0);
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return 0;
	}
	bVar0 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar0))
	{
		Function_108(GET_EVENT_FROM_OBJECT(bVar0), 0);
		Function_87(GET_EVENT_FROM_OBJECT(bVar0));
		Function_67(GET_EVENT_FROM_OBJECT(bVar0));
		Function_63(GET_EVENT_FROM_OBJECT(bVar0));
		Function_62(GET_EVENT_FROM_OBJECT(bVar0));
		Function_42(GET_EVENT_FROM_OBJECT(bVar0));
		Function_30(GET_EVENT_FROM_OBJECT(bVar0));
		bVar0 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	Function_6();
	return 0;
}

void Function_6() //Position: 0x280 / 640
{
	bool bVar0;
	
	bVar0 = GET_WEAPON_IN_HAND(Global_34573);
	if (SHIFT_RIGHT(Global_49309, 8) & 255 >= 0)
	{
		Function_24(bVar0);
	}
	if (Global_49309 & 255 >= 0)
	{
		Function_23(bVar0);
	}
	if (Function_22(Global_49309, 0x40000000))
	{
		Function_7(135, 1, 0, 0);
	}
	if (Function_22(Global_49309, 0x20000000))
	{
		Function_7(134, 1, 0, 0);
	}
	if (Function_22(Global_49309, 0x10000000))
	{
		Function_7(136, 1, 0, 0);
	}
	if (Function_22(Global_49309, 0x8000000))
	{
		Function_7(137, 1, 0, 0);
	}
	Global_49309 = 0;
	return;
}

int Function_7(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x311 / 785
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_21(iParam0, TO_FLOAT(bParam1), 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_8(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x531 / 1329
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_19(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_18(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_18(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_16(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_13(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_10(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_9(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_9() //Position: 0xB5E / 2910
{
	int iVar0;
	
	return iVar0;
}

var Function_10(int iParam0) //Position: 0xB66 / 2918
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB77 / 2935
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_12(char* cParam0, char* cParam1) //Position: 0xC6C / 3180
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_13(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC85 / 3205
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_14(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_14(int iParam0, int iParam1) //Position: 0xCEA / 3306
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_15(int iParam0, bool bParam1) //Position: 0xCFC / 3324
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xD0E / 3342
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_17(iParam0) != 19 || Function_17(iParam0) != 17) || Function_17(iParam0) != 10) || Function_17(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_17(int iParam0) //Position: 0xE3E / 3646
{
	return Global_35278[iParam020].f_48;
}

float Function_18(int iParam0) //Position: 0xE4D / 3661
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_19(int iParam0) //Position: 0xE86 / 3718
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_20(int iParam0) //Position: 0xEC3 / 3779
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_21(int iParam0, bool bParam1, bool bParam2) //Position: 0x105D / 4189
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

bool Function_22(bool bParam0, int iParam1) //Position: 0x12A1 / 4769
{
	return (bParam0 && iParam1) == 0;
}

void Function_23(bool bParam0) //Position: 0x12AE / 4782
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_7(49, 1, 0, 0);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_7(iVar0, 1, 0, 0);
	return;
}

void Function_24(bool bParam0) //Position: 0x12FE / 4862
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001D:
			break;
		
		default:
			Function_29(49, (Function_19(49) + 1.0f));
			Function_7(89, 1, 0, 0);
			Function_28(6);
			Function_25(6);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_29(iVar0, (Function_19(iVar0) + 1.0f));
	iVar0 = (90 + bParam0);
	Function_7(iVar0, 1, 0, 0);
	return;
}

void Function_25(int iParam0) //Position: 0x1376 / 4982
{
	if (iParam0 == 6)
	{
		if (Global_12976.f_144 >= 0)
		{
			Global_12976.f_144 = (Global_12976.f_144 * 4294967295);
		}
		else if (Global_12976.f_144 <= 0)
		{
			Global_12976.f_144 = 0;
		}
	}
	else if (iParam0 == 11)
	{
		if (Global_12976.f_144 <= 0)
		{
			Global_12976.f_144 = (Global_12976.f_144 * 4294967295);
		}
		Global_12976.f_144++;
		if (Global_12976.f_144 >= Function_27(48))
		{
			Function_26(48, Global_12976.f_144, 0);
		}
	}
	return;
}

int Function_26(int iParam0, bool bParam1, bool bParam2) //Position: 0x13ED / 5101
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_21(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_20(iParam0);
	if (bParam2)
	{
		Function_8(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_27(int iParam0) //Position: 0x1688 / 5768
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_28(int iParam0) //Position: 0x16C9 / 5833
{
	if (iParam0 == 6)
	{
		if (Global_12976.f_140 >= 0)
		{
			Global_12976.f_140 = (Global_12976.f_140 * 4294967295);
		}
		else if (Global_12976.f_140 <= 0)
		{
			Global_12976.f_140 = 0;
		}
	}
	else if (iParam0 == 10)
	{
		if (Global_12976.f_140 <= 0)
		{
			Global_12976.f_140 = (Global_12976.f_140 * 4294967295);
		}
		Global_12976.f_140++;
		if (Global_12976.f_140 >= Function_27(47))
		{
			Function_26(47, Global_12976.f_140, 0);
		}
	}
	return;
}

int Function_29(int iParam0, int iParam1) //Position: 0x1740 / 5952
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_30(bool bParam0) //Position: 0x1780 / 6016
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	bVar4 = GET_EVENT_PERPETRATOR(bParam0);
	bVar5 = GET_EVENT_TYPE(bParam0);
	switch (bVar5)
	{
		case 0x0000005F:
			if (!IS_OBJECT_VALID(bVar4))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar4) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar4) != Global_34573)
			{
				return;
			}
			bVar1 = DECOR_GET_INT(bParam0, "Type");
			if (bVar1 < 4294967295 && bVar1 > 21)
			{
				if ((Function_40(65536) || Function_39()) && !Function_38())
				{
					if (!Function_1())
					{
						SET_WEAPON_GOLD(Global_34573, bVar2, IS_GOLDEN_GUNS_ON());
					}
					else
					{
						SET_WEAPON_GOLD(Global_34573, bVar2, (IS_GOLDEN_GUNS_ON() && Global_83823[bVar2]));
					}
				}
			}
			if (!Function_37(Global_76846, 0x1000000))
			{
				if (bVar1 >= 4294967295 || bVar1 <= 26)
				{
					return;
				}
				iVar0 = GET_ITEM_EQUIPSLOT(bVar1);
				iVar3 = 0;
				bVar2 = false;
				while (bVar2 < 25)
				{
					if (GET_ITEM_EQUIPSLOT(bVar2) == iVar0)
					{
						if (ACTOR_HAS_WEAPON(Global_34573, bVar2))
						{
							iVar3++;
						}
					}
					bVar2++;
				}
				if (iVar3 >= 1)
				{
					Function_31(Global_34573, 0x1000000, 1, 0);
				}
			}
			break;
	}
	return;
}

void Function_31(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1893 / 6291
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_33(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_32(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_32(char* cParam0, int iParam1) //Position: 0x18FF / 6399
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_33(bool bParam0, var uParam1, int iParam2) //Position: 0x1936 / 6454
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_35(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_34(uVar0))
		{
			case 0x00000002:
				if (!Function_37(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_34(char* cParam0) //Position: 0x19AE / 6574
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_35(int iParam0) //Position: 0x1A4F / 6735
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_36(var uParam0, int iParam1) //Position: 0x1A8C / 6796
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_37(int iParam0, int iParam1) //Position: 0x1A9F / 6815
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_38() //Position: 0x1AB2 / 6834
{
	if (Function_22(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_39() //Position: 0x1ACD / 6861
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_22(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_40(int iParam0) //Position: 0x1AFD / 6909
{
	return Function_41(Global_83864.f_1252, iParam0);
}

int Function_41(var uParam0, int iParam1) //Position: 0x1B0F / 6927
{
	return (uParam0 && iParam1) == 0;
}

void Function_42(bool bParam0) //Position: 0x1B1C / 6940
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	bVar0 = GET_EVENT_PERPETRATOR(bParam0);
	if (GET_EVENT_TYPE(bParam0) == 112)
	{
		if (IS_OBJECT_VALID(bVar1))
		{
			Function_57(bVar1, 0.0f, 0.0f, 0.0f, 1, bVar0, 0);
		}
		return;
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	bVar10 = Function_56();
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000002:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			Global_12976.f_136 = 0;
			if (IS_ACTOR_ANIMAL(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				Function_7(26, 1, 0, 0);
				if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(bVar0), 0))
				{
					Function_7(138, 1, 0, 0);
				}
				if (StackVal && Function_22(!Function_22(StackVal, 4), 2))
				{
					if (DECOR_CHECK_EXIST(bParam0, "Weapon"))
					{
						bVar2 = DECOR_GET_INT(bParam0, "Weapon");
					}
					else
					{
						bVar2 = GET_WEAPON_IN_HAND(Global_34573);
					}
					if (bVar2 == 24)
					{
						iVar5 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1));
						if ((((((((iVar5 != 1087 || iVar5 != 1088) || iVar5 != 1089) || iVar5 != 1090) || iVar5 != 1091) || iVar5 != 1091) || iVar5 != 1092) || iVar5 != 1093) || iVar5 != 1094)
						{
							DECOR_SET_BOOL(Global_34573, "CougarOutfitKill", true);
						}
					}
				}
				Function_55(GET_ACTOR_FROM_OBJECT(bVar1));
				if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar1)))
				{
					if (IS_ACTOR_MOUNTED(GET_ACTOR_FROM_OBJECT(bVar1)))
					{
						if (Function_54(GET_RIDER(GET_ACTOR_FROM_OBJECT(bVar1))))
						{
							Function_7(41, 1, 0, 0);
						}
					}
				}
				else if (!Global_3386)
				{
					if (!Function_37(Global_76848, 524288))
					{
						Function_31(Global_34573, 524288, 3, 0);
					}
					if (Global_29004 == 1)
					{
						if (!Function_37(Global_76848, 2097152))
						{
							Function_31(Global_34573, 2097152, 3, 0);
						}
					}
				}
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			iVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1));
			if ((iVar4 == 1263 && iVar4 == 1264) && iVar4 == 1265)
			{
				if (!Function_38())
				{
					Function_7(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(bVar0), 0))
					{
						Function_7(139, 1, 0, 0);
					}
				}
				else if (((((((!DECOR_CHECK_EXIST(bVar1, "Zombie") && !(iVar4 <= 1204 && iVar4 >= 1254)) && iVar4 == 541) && iVar4 == 542) && iVar4 == 543) && iVar4 == 544) && iVar4 == 1252) && iVar4 == 1253)
				{
					Function_7(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(bVar0), 0))
					{
						Function_7(139, 1, 0, 0);
					}
				}
			}
			if (DECOR_CHECK_EXIST(bParam0, "Weapon"))
			{
				bVar2 = DECOR_GET_INT(bParam0, "Weapon");
			}
			else
			{
				bVar2 = GET_WEAPON_IN_HAND(bVar10);
			}
			if (bVar2 < 4294967295 && bVar2 > 39)
			{
				if (!Function_38())
				{
					Function_7((183 + bVar2), 1, 0, 0);
				}
				else if (((((((DECOR_CHECK_EXIST(bVar1, "Zombie") || (iVar4 <= 1204 && iVar4 >= 1254)) || iVar4 != 541) || iVar4 != 542) || iVar4 != 543) || iVar4 != 544) || iVar4 != 1252) || iVar4 != 1253)
				{
					Function_7((183 + bVar2), 1, 0, 0);
				}
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002A:
					case 0x00000029:
					case 0x0000002B:
					case 0x0000002C:
						Function_53(37);
						break;
					
					case 0x00000027:
					case 0x00000028:
						Function_53(36);
						break;
					
					case 0x00000031:
					case 0x00000032:
					case 0x00000033:
						Function_53(35);
						break;
					}
			}
			bVar9 = true;
			if (iVar4 <= 1263 && iVar4 >= 1265)
			{
				Function_7(602, 1, 0, 0);
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(98))
				{
					AWARD_ACHIEVEMENT(98);
				}
			}
			else if (iVar4 <= 516 && iVar4 >= 531)
			{
				Function_7(39, 1, 0, 0);
			}
			else if (iVar4 <= 505 && iVar4 >= 515)
			{
				Function_7(37, 1, 0, 0);
			}
			else if (iVar4 <= 496 && iVar4 >= 504)
			{
				Function_7(38, 1, 0, 0);
			}
			else if (iVar4 <= 486 && iVar4 >= 494)
			{
				Function_7(36, 1, 0, 0);
			}
			else if (iVar4 <= 477 && iVar4 >= 485)
			{
				Function_7(35, 1, 0, 0);
			}
			else if (iVar4 <= 467 && iVar4 >= 476)
			{
				Function_7(40, 1, 0, 0);
			}
			else if (iVar4 <= 455 && iVar4 >= 466)
			{
				Function_7(32, 1, 0, 0);
			}
			else if (iVar4 <= 449 && iVar4 >= 454)
			{
				Function_7(30, 1, 0, 0);
			}
			else if (iVar4 <= 424 && iVar4 >= 442)
			{
				Function_7(29, 1, 0, 0);
			}
			else if (iVar4 <= 397 && iVar4 >= 423)
			{
				Function_7(34, 1, 0, 0);
			}
			else if (iVar4 <= 379 && iVar4 >= 396)
			{
				Function_7(33, 1, 0, 0);
			}
			else if (iVar4 <= 369 && iVar4 >= 378)
			{
				Function_7(31, 1, 0, 0);
			}
			else if (DECOR_CHECK_EXIST(bVar1, "criminal"))
			{
				Function_7(34, 1, 0, 0);
			}
			else
			{
				Function_7(28, 1, 0, 0);
				bVar9 = false;
			}
			if (bVar9)
			{
				Function_52(DECOR_CHECK_EXIST(bParam0, "headshot"));
			}
			break;
		
		case 0x00000003:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			Function_7(43, 1, 0, 0);
			break;
		
		case 0x0000000A:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)) && !Function_38())
			{
				return;
			}
			Function_7(42, 1, 0, 0);
			Function_28(10);
			if (!Function_1())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(26))
				{
					if (GET_PLAYER_COMBATMODE() == 1)
					{
						if (Function_54(GET_ACTOR_FROM_OBJECT(bVar1)))
						{
							AWARD_ACHIEVEMENT(26);
						}
					}
				}
			}
			Function_53(38);
			break;
		
		case 0x00000005:
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			bVar3 = DECOR_GET_INT(bParam0, "Weapon");
			if (bVar3 == 31)
			{
				if (GET_ACTOR_FROM_OBJECT(bVar0) == bVar10)
				{
					Function_48(bParam0, 0);
				}
				else
				{
					if (IS_ACTOR_PLAYER(GET_ACTOR_FROM_OBJECT(bVar0)) && !NET_IS_OBJECT_LOCAL(bVar0))
					{
						Function_48(bParam0, 1);
					}
					return;
				}
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(bVar10);
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(bParam0, "Weapon"))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
			{
				return;
			}
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_49309, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_49309, 8) & 255;
					iVar7 = Global_49309 & 255;
					iVar7++;
					Global_49309 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					break;
				
				case 0x0000001D:
					DECOR_SET_INT(bVar1, "HitsByTomahawk", DECOR_GET_INT(bVar1, "HitsByTomahawk") + 1);
					Function_23(bVar3);
					break;
				
				default:
					Function_23(bVar3);
					break;
			}
			break;
		
		case 0x00000006:
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(bVar10);
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_49309, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_49309, 8) & 255;
					iVar7 = Global_49309 & 255;
					bVar6++;
					Global_49309 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					if (IS_ACTOR_USING_COVER(bVar10))
					{
						Function_47(&Global_49309, 0x40000000);
					}
					else if (IS_ACTOR_CROUCHING(bVar10))
					{
						Function_47(&Global_49309, 0x20000000);
					}
					if (IS_ACTOR_RIDING(bVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(bVar10)) || IS_ACTOR_MULE(GET_MOUNT(bVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 8)
						{
							Function_47(&Global_49309, 0x10000000);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(bVar10))
					{
						Function_47(&Global_49309, 0x8000000);
					}
					break;
				
				case 0x00000015:
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
				case 0x0000001D:
					Function_24(bVar3);
					break;
				
				default:
					if (IS_ACTOR_USING_COVER(bVar10))
					{
						Function_7(135, 1, 0, 0);
					}
					else if (IS_ACTOR_CROUCHING(bVar10))
					{
						Function_7(134, 1, 0, 0);
					}
					if (IS_ACTOR_RIDING(bVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(bVar10)) || IS_ACTOR_MULE(GET_MOUNT(bVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(bVar10)) != 8)
						{
							Function_7(136, 1, 0, 0);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(bVar10))
					{
						Function_7(137, 1, 0, 0);
					}
					Function_24(bVar3);
					break;
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			if (GET_LAST_HIT_TIME(GET_ACTOR_FROM_OBJECT(bVar1)) < (GET_CURRENT_GAME_TIME() - 0.5f))
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(bParam0, "DroppedItem"))
			{
				return;
			}
			bVar1 = DECOR_GET_OBJECT(bParam0, "DroppedItem");
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
			{
				return;
			}
			if (GET_OBJECT_TYPE(bVar1) == 17)
			{
				Function_7(45, 1, 0, 0);
				Function_44(10);
			}
			break;
		
		case 0x0000000B:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			Function_7(46, 1, 0, 0);
			Function_25(11);
			break;
		
		case 0x00000004:
			Function_7(44, 1, 0, 0);
			break;
		
		case 0x00000057:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_RIDER(GET_ACTOR_FROM_OBJECT(bVar0)) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
				{
					DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_7(130, 1, 0, 0);
					Function_7(129, 1, 0, 0);
				}
				else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
				{
					DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_7(130, 1, 0, 0);
					Function_7(129, 1, 0, 0);
				}
			}
			break;
		
		case 0x00000058:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!IS_ACTOR_DRIVING_VEHICLE(bVar10))
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != GET_VEHICLE(Global_34573))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				iVar4 = Function_43(bVar0);
				if ((iVar4 <= 1177 && iVar4 >= 1182) || iVar4 != 1202)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_7(133, 1, 0, 0);
						Function_7(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_7(133, 1, 0, 0);
						Function_7(129, 1, 0, 0);
					}
				}
				else if (iVar4 <= 1183 && iVar4 >= 1188)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_7(131, 1, 0, 0);
						Function_7(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_7(131, 1, 0, 0);
						Function_7(129, 1, 0, 0);
					}
				}
				else if (iVar4 <= 1195 && iVar4 >= 1201)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_7(132, 1, 0, 0);
						Function_7(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(bVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(bVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_7(132, 1, 0, 0);
						Function_7(129, 1, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000024:
			break;
		
		case 0x0000005E:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			Function_7(389, 5, 0, 0);
			break;
		
		case 0x00000069:
			if (!IS_OBJECT_VALID(bVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(bVar0) != bVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar1)))
			{
				return;
			}
			Function_7(391, 1, 0, 0);
			break;
	}
	return;
}

int Function_43(bool bParam0) //Position: 0x2923 / 10531
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

void Function_44(int iParam0) //Position: 0x293E / 10558
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_45("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

void Function_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2975 / 10613
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_46(int iParam0) //Position: 0x29F0 / 10736
{
	char* cVar0[16];
	
	if (!Function_38())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_47(bool bParam0, int iParam1) //Position: 0x2A2F / 10799
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x2A3E / 10814
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	
	bVar16 = true;
	if (bParam1 || (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) >= 0.2f)
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		bVar14 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
		bVar15 = GET_EVENT_PERPETRATOR(bParam0);
		if (GET_OBJECT_TYPE(bVar15) == 15)
		{
			bVar13 = GET_ACTOR_FROM_OBJECT(bVar15);
		}
		if ((GET_OBJECT_TYPE(bVar14) != 15 || GET_OBJECT_TYPE(bVar14) != 29) || Function_51(bVar14))
		{
			if (GET_OBJECT_TYPE(bVar14) == 15)
			{
				bVar12 = GET_ACTOR_FROM_OBJECT(bVar14);
			}
			else if (GET_OBJECT_TYPE(bVar14) == 29)
			{
				if (DECOR_CHECK_EXIST(bVar14, "bATRifleBlewUpCorpse"))
				{
					bVar16 = false;
				}
			}
			if (IS_OBJECT_VALID(bVar14))
			{
				if (IS_ACTOR_VALID(bVar12))
				{
					if (IS_ACTOR_VEHICLE(bVar12))
					{
						bVar16 = false;
					}
					else if (GET_ACTOR_PROOF(bVar12) != 8 || GET_ACTOR_HEALTH(bVar12) < 65.0f)
					{
						bVar16 = false;
					}
				}
				if (bVar16)
				{
					if (bParam1)
					{
						if (GET_OBJECT_TYPE(bVar14) != 29 || Function_51(bVar14))
						{
							Function_57(StackVal, StackVal, bVar14, vVar0, 0, bVar13, DECOR_GET_INT(bParam0, "Weapon") != 31);
						}
					}
					else
					{
						NET_BROADCAST_EXPLODE_TARGET_EVENT(bVar14);
						Function_57(StackVal, StackVal, bVar14, vVar0, 0, bVar13, 0);
					}
				}
			}
		}
		if (DECOR_GET_INT(bParam0, "Weapon") == 31)
		{
			bVar18 = false;
			bVar19 = GET_EVENT_PERPETRATOR(bParam0);
			bVar20 = false;
			if (bParam1)
			{
				if (IS_OBJECT_VALID(bVar19))
				{
					if (GET_OBJECT_NAMED_BONE_POSITION(bVar19, "head", &vVar3))
					{
						bVar20 = true;
					}
				}
			}
			else
			{
				GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar3);
				bVar20 = true;
			}
			if (bVar20)
			{
				if (FIND_WATER_INTERSECTION(vVar3, vVar0, &uVar6, &uVar9))
				{
					if (IS_LAYOUTREF_VALID(Global_30616))
					{
						bVar17 = FIND_OBJECT_IN_LAYOUT(Global_30616, "oATRifleWaterExplosionRMPTFX");
						if (IS_OBJECT_VALID(bVar17))
						{
							if (DECOR_CHECK_EXIST(bVar17, "fWaterExplosionCreateTime"))
							{
								if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar17, "fWaterExplosionCreateTime")) < 1.0f)
								{
									DESTROY_OBJECT(bVar17);
								}
							}
						}
						if (!IS_OBJECT_VALID(bVar17))
						{
							Function_50(&uVar6);
						}
					}
					bVar18 = true;
				}
			}
			if (!bVar18)
			{
				if (!bParam1)
				{
					if (Function_1())
					{
						if (IS_OBJECT_VALID(bVar19))
						{
							if (GET_OBJECT_TYPE(bVar19) == 15)
							{
								bVar21 = GET_ACTOR_FROM_OBJECT(bVar19);
							}
						}
						Function_49(&vVar0, "ATRifleExplosion_MP", bVar21, 1);
					}
					else
					{
						Function_49(&vVar0, "ATRifleExplosion", Global_34573, 1);
					}
				}
				PLAY_SOUND_FROM_POSITION("ANTI_TANK_EXPLOSION_DIRT_MASTER", vVar0);
			}
		}
	}
	return;
}

void Function_49(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x2CF6 / 11510
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_50(int iParam0) //Position: 0x2D12 / 11538
{
	bool bVar0;
	
	bVar0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, "oATRifleWaterExplosionRMPTFX", "nexp_water", *iParam0);
	SET_RMPTFX_SCALE(bVar0, 0.2f);
	UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
	DECOR_SET_FLOAT(bVar0, "fWaterExplosionCreateTime", GET_CURRENT_GAME_TIME());
	return;
}

bool Function_51(bool bParam0) //Position: 0x2D88 / 11656
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = GET_OBJECT_MODEL_NAME(bParam0);
	if (STRING_CONTAINS_STRING(bVar0, "carcass"))
	{
		return 1;
	}
	return 0;
}

void Function_52(bool bParam0) //Position: 0x2DB5 / 11701
{
	if (!NET_GET_KILL_EFFECT_ON())
	{
		return;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return;
	}
	SET_SHOCK_AMPLITUDE(0.2f);
	SET_SHOCK_SPEED(15.0f);
	FIRE_SHOCK(0.5f);
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_HS_SINGLE_PLAYER_MASTER");
	}
	else
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_SINGLE_PLAYER_MASTER");
	}
	return;
}

void Function_53(int iParam0) //Position: 0x2E3C / 11836
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0x00000026:
			if (Function_27(42) > 250)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(38))
				{
					AWARD_ACHIEVEMENT(38);
				}
			}
			return;
			break;
		
		case 0x00000024:
			iVar1 = 0;
			while (iVar1 < 7)
			{
				iVar0 = (iVar0 + Function_27((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(36))
				{
					AWARD_ACHIEVEMENT(36);
				}
			}
			return;
			break;
		
		case 0x00000025:
			iVar1 = 8;
			while (iVar1 < 20)
			{
				iVar0 = (iVar0 + Function_27((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(37))
				{
					AWARD_ACHIEVEMENT(37);
				}
			}
			return;
			break;
		
		case 0x00000023:
			iVar1 = 26;
			while (iVar1 < 28)
			{
				iVar0 = (iVar0 + Function_27((183 + iVar1)));
				iVar1++;
			}
			if (iVar0 > 500)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(35))
				{
					AWARD_ACHIEVEMENT(35);
				}
			}
			return;
			break;
		
		case 0x00000027:
			if (!Function_1())
			{
				if (Function_27(354) > 26)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(39))
					{
						AWARD_ACHIEVEMENT(39);
					}
				}
			}
			else if (Function_27(354) > 24)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(39))
				{
					AWARD_ACHIEVEMENT(39);
				}
			}
			return;
			break;
		
		case 0x0000001D:
			if (Function_27(320) > 20)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(29))
				{
					AWARD_ACHIEVEMENT(29);
				}
			}
			break;
	}
	return;
}

bool Function_54(bool bParam0) //Position: 0x2F9E / 12190
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, "honor"))
	{
		if (DECOR_GET_INT(bParam0, "honor") > 0)
		{
			return 1;
		}
		return 0;
	}
	iVar0 = GET_ACTOR_FACTION(bParam0);
	switch (iVar0)
	{
		case 0x0000000E:
		case 0x00000019:
		case 0x00000018:
		case 0x0000000C:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000016:
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			return 0;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_30619 <= 1)
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000001C:
		case 0x0000001D:
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_55(bool bParam0) //Position: 0x30B3 / 12467
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0));
	switch (bVar1)
	{
		case 0x00000000:
			LOG_ERROR("PROCESS_STAT_WILD_ANIMAL_SPECIES_KILLED called with a human actor!");
			return;
			break;
		
		case 0x00000001:
			Function_7(313, 1, 0, 0);
			iVar0 = Function_27(313);
			break;
		
		case 0x00000002:
			Function_7(314, 1, 0, 0);
			iVar0 = Function_27(314);
			break;
		
		case 0x00000003:
			Function_7(315, 1, 0, 0);
			iVar0 = Function_27(315);
			break;
		
		case 0x00000005:
			Function_7(317, 1, 0, 0);
			iVar0 = Function_27(317);
			break;
		
		case 0x00000004:
			Function_7(316, 1, 0, 0);
			iVar0 = Function_27(316);
			break;
		
		case 0x00000006:
			Function_7(318, 1, 0, 0);
			iVar0 = Function_27(318);
			break;
		
		case 0x00000007:
			Function_7(319, 1, 0, 0);
			iVar0 = Function_27(319);
			break;
		
		case 0x00000008:
			Function_7(320, 1, 0, 0);
			Function_53(29);
			iVar0 = Function_27(320);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			Function_7(323, 1, 0, 0);
			return;
			break;
		
		case 0x0000000A:
			Function_7(321, 1, 0, 0);
			break;
		
		case 0x0000000B:
			Function_7(322, 1, 0, 0);
			iVar0 = Function_27(322);
			break;
		
		case 0x0000000D:
			Function_7(324, 1, 0, 0);
			iVar0 = Function_27(324);
			break;
		
		case 0x0000000E:
			bVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(bParam0));
			if (STRING_CONTAINS_STRING(bVar2, "seagull"))
			{
				Function_7(341, 1, 0, 0);
				iVar0 = Function_27(341);
			}
			else
			{
				Function_7(325, 1, 0, 0);
				iVar0 = Function_27(325);
			}
			break;
		
		case 0x0000000F:
			Function_7(326, 1, 0, 0);
			iVar0 = Function_27(326);
			break;
		
		case 0x00000010:
		case 0x00000021:
			Function_7(327, 1, 0, 0);
			break;
		
		case 0x00000011:
			Function_7(328, 1, 0, 0);
			iVar0 = Function_27(328);
			break;
		
		case 0x00000012:
			Function_7(329, 1, 0, 0);
			iVar0 = Function_27(329);
			break;
		
		case 0x00000013:
			Function_7(330, 1, 0, 0);
			iVar0 = Function_27(330);
			break;
		
		case 0x00000014:
			Function_7(331, 1, 0, 0);
			iVar0 = Function_27(331);
			break;
		
		case 0x00000015:
			Function_7(332, 1, 0, 0);
			return;
			break;
		
		case 0x00000016:
			Function_7(333, 1, 0, 0);
			iVar0 = Function_27(333);
			break;
		
		case 0x00000017:
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bParam0) == 0)
			{
				Function_7(334, 1, 0, 0);
				return;
			}
			Function_7(335, 1, 0, 0);
			iVar0 = Function_27(335);
			break;
		
		case 0x00000018:
			Function_7(336, 1, 0, 0);
			return;
			break;
		
		case 0x00000019:
			Function_7(337, 1, 0, 0);
			iVar0 = Function_27(337);
			break;
		
		case 0x0000001A:
			Function_7(338, 1, 0, 0);
			break;
		
		case 0x0000001B:
			bVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(bParam0));
			if (STRING_CONTAINS_STRING(bVar2, "njackalope"))
			{
				Function_7(349, 1, 0, 0);
				iVar0 = Function_27(349);
			}
			else
			{
				Function_7(339, 1, 0, 0);
				iVar0 = Function_27(339);
			}
			break;
		
		case 0x0000001C:
			Function_7(340, 1, 0, 0);
			iVar0 = Function_27(340);
			break;
		
		case 0x0000001D:
			Function_7(342, 1, 0, 0);
			return;
			break;
		
		case 0x0000001E:
			Function_7(343, 1, 0, 0);
			iVar0 = Function_27(343);
			break;
		
		case 0x0000001F:
			Function_7(344, 1, 0, 0);
			iVar0 = Function_27(344);
			break;
		
		case 0x00000020:
			Function_7(345, 1, 0, 0);
			iVar0 = Function_27(345);
			break;
		
		case 0x00000022:
			Function_7(346, 1, 0, 0);
			iVar0 = Function_27(346);
			break;
		
		case 0x00000023:
			Function_7(347, 1, 0, 0);
			iVar0 = Function_27(347);
			break;
	}
	if (iVar0 == 1)
	{
		Function_7(354, 1, 0, 0);
		Function_53(39);
	}
	return;
}

bool Function_56() //Position: 0x3507 / 13575
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_57(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x351C / 13596
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	int iVar16;
	vector3 vVar17;
	bool bVar20;
	bool bVar21;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	
	fVar3 = 1.0f;
	bVar11 = false;
	bVar12 = !bParam4;
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bParam0);
			iVar0 = GET_ACTOR_ENUM(bVar1);
		}
		else if (GET_OBJECT_TYPE(bParam0) == 29)
		{
			iVar0 = GET_CORPSE_ACTOR_ENUM(bParam0);
		}
		else if (!Function_51(bParam0))
		{
			return;
		}
		if (GET_OBJECT_TYPE(bParam5) == 15)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bParam5);
		}
		if (bParam4 || bParam6)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(bParam0, "spine00", &vVar13))
			{
				vParam1 = { StackVal, StackVal, vVar13 };
				bVar12 = true;
			}
			else
			{
				bVar12 = false;
			}
		}
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			if (iVar0 != 1241 || iVar0 != 1240)
			{
				iVar16 = 2;
			}
			else if (iVar0 != 1243 || iVar0 != 1246)
			{
				iVar16 = 0;
			}
			else
			{
				iVar16 = 1;
			}
		}
		else if (!Function_51(bParam0))
		{
			iVar16 = Function_61(iVar0);
		}
		else
		{
			iVar16 = Function_60(bParam0);
		}
		switch (iVar16)
		{
			case 0x00000000:
				if (GET_OBJECT_TYPE(bParam0) != 15 && !Function_51(bParam0))
				{
					bVar11 = false;
				}
				else
				{
					bVar11 = true;
				}
				fVar3 = 1.2f;
				break;
			
			case 0x00000001:
				fVar3 = 0.8f;
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_HUMAN(bVar1))
					{
						DEEQUIP_ACCESSORY(bVar1, 0);
						DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
					}
				}
				break;
			
			case 0x00000002:
				fVar3 = 0.45f;
				break;
			
			case 0x00000003:
				fVar3 = 0.3f;
				break;
		}
		if ((DECOR_CHECK_EXIST(bParam0, "bShopDontKill") || DECOR_CHECK_EXIST(bParam0, "lootCorpse_objSet")) || DECOR_CHECK_EXIST(bParam0, "skinning_objSet"))
		{
			bVar11 = false;
		}
		else
		{
			bVar11 = true;
		}
		if (((iVar0 != 1105 || iVar0 != 1077) || iVar0 != 1094) || iVar0 != 1072)
		{
			bVar11 = false;
		}
		if (bVar11)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(bParam0, "head", &vVar17))
			{
				bVar20 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_9(), 2, vVar17, 0.0f, 0.0f, 0.0f, 0.25f, 0.25f, 0.25f);
				RESET_RMPTFX_IN_VOLUME(bVar20);
				DESTROY_VOLUME(bVar20);
			}
			if (GET_OBJECT_TYPE(bParam0) == 15)
			{
				SET_DRAW_OBJECT(bParam0, 0);
				if (FIRE_IS_ACTOR_ON_FIRE(GET_ACTOR_FROM_OBJECT(bParam0)))
				{
					FIRE_STOP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(bParam0));
				}
				if (IS_ACTOR_VALID(GET_HOGTIED_MASTER(GET_ACTOR_FROM_OBJECT(bParam0))))
				{
					FREE_FROM_HOGTIE(GET_ACTOR_FROM_OBJECT(bParam0));
				}
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
				DECOR_SET_BOOL(bParam0, "corpse_loot_gringo", false);
				DECOR_SET_BOOL(bParam0, "NoCorpse", true);
			}
			else if (GET_OBJECT_TYPE(bParam0) != 29 || Function_51(bParam0))
			{
				bVar21 = FIND_OBJECT_IN_OBJECT(bParam0, "loot");
				if (IS_OBJECT_VALID(bVar21))
				{
					DESTROY_OBJECT(bVar21);
				}
				GET_OBJECT_POSITION(bParam0, &vVar22);
				vVar8 = { StackVal, StackVal, vVar22 };
				vVar22.f_4 = (vVar22.y - 100.0f);
				SET_OBJECT_POSITION(bParam0, vVar22);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bParam0), 0);
				SET_DRAW_OBJECT(bParam0, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
				DECOR_SET_BOOL(bParam0, "bATRifleBlewUpCorpse", true);
			}
		}
	}
	if (bVar12)
	{
		if (bVar11)
		{
			vVar28 = { 0.0f, 0.0f, 0.0f };
			if (!bParam4 && IS_OBJECT_VALID(bParam5))
			{
				GET_OBJECT_POSITION(bParam5, &vVar25);
				vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar25, vParam1, StackVal) };
				VSCALE(&vVar28, 0.01f);
			}
			if ((Function_59() && DECOR_CHECK_EXIST(bParam0, "Zombie")) || (iVar0 <= 1222 && iVar0 >= 1227))
			{
				bVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_9(), bParam0, StackVal) + Vector(vVar28, vParam1, "blood_zombie_explode"));
			}
			else
			{
				bVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_9(), bParam0, StackVal) + Vector(vVar28, vParam1, "script_train_squash_ped"));
			}
			SET_RMPTFX_SCALE(bVar4, fVar3);
			if (!UNK_0x6745191B(bVar4, 0.0f, 0.0f, 0.0f))
			{
			}
			PLAY_SOUND_FROM_POSITION("EXECUTION_RIFLE_DLY_MASTER", vParam1);
		}
	}
	if (IS_OBJECT_VALID(bParam0))
	{
		if (bVar11 && GET_OBJECT_TYPE(bParam0) != 29)
		{
			if (!Function_58(StackVal, StackVal, vVar8))
			{
				CREATE_DECAL(2, vVar8, RAND_FLOAT_RANGE((1.8f * fVar3), (2.4f * fVar3)), 0, 0);
			}
		}
		else if (GET_OBJECT_POSITION(bParam0, &vVar5))
		{
			CREATE_DECAL(2, vVar5, RAND_FLOAT_RANGE((1.8f * fVar3), (2.4f * fVar3)), 0, 0);
		}
		if (NET_IS_OBJECT_LOCAL(bParam0))
		{
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_HEALTH(bVar1, 0.0f);
				if (IS_ACTOR_VALID(bVar2))
				{
					KILL_ACTOR_WITH_KILLER(bVar1, bVar2);
					if (!bParam6)
					{
						DECOR_SET_BOOL(bVar1, "ATRifle", true);
					}
				}
				else
				{
					KILL_ACTOR(bVar1);
				}
			}
		}
	}
}

bool Function_58(vector3 vParam0) //Position: 0x39D3 / 14803
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_59() //Position: 0x39EB / 14827
{
	return HAS_STRING_TABLE_LOADED("de");
}

int Function_60(bool bParam0) //Position: 0x39F9 / 14841
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
	}
	bVar0 = GET_OBJECT_MODEL_NAME(bParam0);
	if ((STRING_CONTAINS_STRING(bVar0, "large") || STRING_CONTAINS_STRING(bVar0, "horse")) || STRING_CONTAINS_STRING(bVar0, "elk"))
	{
		return 0;
	}
	if (STRING_CONTAINS_STRING(bVar0, "medium"))
	{
		return 1;
	}
	if (STRING_CONTAINS_STRING(bVar0, "small"))
	{
		return 2;
	}
	return 3;
}

int Function_61(int iParam0) //Position: 0x3A67 / 14951
{
	if ((((((iParam0 <= 3 && iParam0 >= 836) || (iParam0 <= 837 && iParam0 >= 971)) || (iParam0 <= 1287 && iParam0 >= 1310)) || (iParam0 <= 972 && iParam0 >= 975)) || (iParam0 <= 1116 && iParam0 >= 1123)) || (iParam0 <= 1073 && iParam0 >= 1077))
	{
		return 1;
	}
	if (((((iParam0 <= 1095 && iParam0 >= 1105) || (iParam0 <= 1124 && iParam0 >= 1127)) || (iParam0 <= 976 && iParam0 >= 1007)) || (iParam0 <= 1008 && iParam0 >= 1014)) || (iParam0 <= 1109 && iParam0 >= 1111))
	{
		return 0;
	}
	if (((((iParam0 <= 1020 && iParam0 >= 1029) || (iParam0 <= 1030 && iParam0 >= 1048)) || (iParam0 <= 1087 && iParam0 >= 1094)) || (iParam0 <= 1112 && iParam0 >= 1115)) || (iParam0 <= 1060 && iParam0 >= 1072))
	{
		return 2;
	}
	return 3;
}

void Function_62(bool bParam0) //Position: 0x3B5E / 15198
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_22(Global_79349.f_44, 4194304))
	{
		iVar0 = GET_EVENT_TYPE(bParam0);
		bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
		if (16 != iVar0 && IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_HORSE(bVar2))
					{
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 21, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 22, false);
					}
					else
					{
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 23, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 24, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 25, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 26, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 27, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 28, true);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 29, false);
						ACTOR_ENABLE_VARIABLE_MESH(bVar2, 30, false);
					}
				}
			}
		}
	}
	return;
}

void Function_63(bool bParam0) //Position: 0x3C05 / 15365
{
	int iVar0;
	
	iVar0 = GET_EVENT_TYPE(bParam0);
	if (Function_66(iVar0))
	{
		Function_64(bParam0);
	}
	return;
}

void Function_64(bool bParam0) //Position: 0x3C1F / 15391
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = Function_65();
	bVar1 = COPY_EVENT(bParam0, bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar0);
	if (!IS_ITERATOR_VALID(bVar2))
	{
		return;
	}
	ITERATE_ON_OBJECT_TYPE(bVar2, 2);
	ITERATE_IN_LAYOUT(bVar2, bVar0);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bVar1), GET_OBJECTSET_FROM_OBJECT(bVar3));
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_ITERATOR(bVar2);
	return;
}

var Function_65() //Position: 0x3C7D / 15485
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

bool Function_66(int iParam0) //Position: 0x3CB9 / 15545
{
	switch (iParam0)
	{
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
		case 0x00000047:
		case 0x00000048:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_67(bool bParam0) //Position: 0x3D4F / 15695
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	if (Function_1())
	{
		return;
	}
	if (Global_3380)
	{
		return;
	}
	if (!GET_EVENT_PERPETRATOR(bParam0) != "")
	{
		if (!GET_OBJECT_FROM_ACTOR(Global_34573) != GET_EVENT_PERPETRATOR(bParam0))
		{
			return;
		}
	}
	return;
	if (!GET_EVENT_TYPE(bParam0) != 2)
	{
		return;
	}
	bVar0 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	if (bVar0 == GET_EVENT_PERPETRATOR(bParam0))
	{
		return;
	}
	fVar2 = 1.0f;
	if (DECOR_CHECK_EXIST(bParam0, "Weapon"))
	{
		bVar1 = DECOR_GET_INT(bParam0, "Weapon");
	}
	else
	{
		bVar1 = GET_WEAPON_IN_HAND(Global_34573);
	}
	if (bVar1 < 4294967295 && bVar1 > 39)
	{
		if (GET_WEAPON_GOLD(Global_34573, bVar1))
		{
			fVar2 = 1.5f;
		}
	}
	if (DECOR_CHECK_EXIST(bVar0, "honor"))
	{
		Function_83(DECOR_GET_INT(bVar0, "honor"), 1, 0);
	}
	if (DECOR_CHECK_EXIST(bVar0, "nnotoriety"))
	{
		Function_68(ROUND((TO_FLOAT(DECOR_GET_INT(bVar0, "nnotoriety")) * fVar2)), 1, 0);
	}
	if (IS_ACTOR_ANIMAL(GET_ACTOR_FROM_OBJECT(bVar0)))
	{
		if (ANIMAL_ACTOR_GET_SPECIES(GET_ACTOR_FROM_OBJECT(bVar0)) == 16)
		{
			if (!DECOR_CHECK_EXIST(bVar0, "honor"))
			{
				Function_83(4294967246, 1, 0);
			}
		}
		if (Global_12976.f_36 == GET_ACTOR_FROM_OBJECT(bVar0))
		{
			if (!DECOR_CHECK_EXIST(bVar0, "honor"))
			{
				Function_83(4294967246, 1, 0);
			}
		}
		return;
	}
	bVar3 = GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar0));
	iVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar0));
	switch (bVar3)
	{
		case 0x0000000E:
		case 0x00000019:
		case 0x00000018:
		case 0x0000000C:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000016:
			if (!DECOR_CHECK_EXIST(bVar0, "honor"))
			{
				Function_83(10, 0, 0);
			}
			if (!DECOR_CHECK_EXIST(bVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(2) * fVar2)), 0, 0);
			}
			Global_76852 += 120;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(bVar0, "honor"))
			{
				if ((iVar4 <= 61 && iVar4 >= 63) || (iVar4 <= 242 && iVar4 >= 244))
				{
					Function_83(4294967196, 1, 0);
				}
				else
				{
					Function_83(4294967246, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(bVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(true) * fVar2)), 0, 0);
			}
			Global_76852 += 15;
			break;
		
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			if (!DECOR_CHECK_EXIST(bVar0, "honor"))
			{
				Function_83(4294967196, 1, 0);
			}
			if (!DECOR_CHECK_EXIST(bVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(4) * fVar2)), 0, 0);
			}
			Global_76852 += 60;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_30619 <= 1)
			{
				if (!DECOR_CHECK_EXIST(bVar0, "honor"))
				{
					Function_83(4294967196, 1, 0);
				}
			}
			else if (!DECOR_CHECK_EXIST(bVar0, "honor"))
			{
				Function_83(10, 0, 0);
			}
			if (!DECOR_CHECK_EXIST(bVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(4) * fVar2)), 0, 0);
			}
			Global_76852 += 60;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000020:
			break;
		
		case 0x0000001F:
		case 0x0000001C:
		case 0x0000001D:
			break;
		
		default:
			LOG_ERROR("Trying to award honor and notoriety on a kill of an undefined faction");
			break;
	}
	return;
}

void Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x413A / 16698
{
	int iVar0;
	bool bVar1;
	
	if (Function_82(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_81())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_27(3);
	Function_79();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_77(3, bVar1);
		if (!bParam2)
		{
			if (!Function_37(Global_76848, 4))
			{
				Function_31(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_7(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_18(3));
	iVar0 = Function_27(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_70(4, Function_76(Global_12976.f_156), 1);
				Function_69(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_70(4, Function_76(Global_12976.f_156), 1);
				Function_69(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_70(4, Function_76(Global_12976.f_156), 1);
				Function_69(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_70(4, Function_76(Global_12976.f_156), 1);
				Function_69(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_70(4, Function_76(Global_12976.f_156), 1);
				Function_69(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x4309 / 17161
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_70(int iParam0, char* cParam1, bool bParam2) //Position: 0x4567 / 17767
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_74(iParam0, cParam1, 0, 1);
	iVar1 = Function_71();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_71() //Position: 0x46EC / 18156
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_72();
	return 0;
}

void Function_72() //Position: 0x478B / 18315
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_73(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_73(int iParam0) //Position: 0x483A / 18490
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

int Function_74(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4898 / 18584
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10) //Position: 0x4BEA / 19434
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_76(int iParam0) //Position: 0x4C6D / 19565
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_77(int iParam0, bool bParam1) //Position: 0x4CFC / 19708
{
	bool bVar0;
	int iVar1;
	
	Function_7(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_78(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_71();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_78(int iParam0, int iParam1) //Position: 0x4E99 / 20121
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_79() //Position: 0x4EDA / 20186
{
	Function_80(3, 0.0f);
	Function_29(3, 10000.0f);
	return;
}

int Function_80(int iParam0, int iParam1) //Position: 0x4EF0 / 20208
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_81() //Position: 0x4F30 / 20272
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_82(int iParam0) //Position: 0x4F5B / 20315
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_83(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F6A / 20330
{
	int iVar0;
	bool bVar1;
	
	if (Function_82(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_81())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_27(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_77(1, bVar1);
			if (!bParam2)
			{
				if (!Function_37(Global_76848, 1))
				{
					Function_31(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_86(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_37(Global_76848, 2))
				{
					Function_31(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_7(1, bVar1, 0, 0);
	}
	else
	{
		Function_85(1, (4294967295 * bVar1), 0);
	}
	if (Function_27(1) <= 4294962296)
	{
		Function_26(1, 4294962296, 0);
	}
	else if (Function_27(1) >= 5000)
	{
		Function_26(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_18(1));
	iVar0 = Function_27(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_70(2, Function_84(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_70(2, Function_84(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_70(2, Function_84(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_70(2, Function_84(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_70(2, Function_84(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_70(2, Function_84(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_70(2, Function_84(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_70(2, Function_84(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_70(2, Function_84(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_70(2, Function_84(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_70(2, Function_84(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_70(2, Function_84(Global_12976.f_152), 0);
			}
			break;
	}
	Function_69(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_84(int iParam0) //Position: 0x528B / 21131
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_85(int iParam0, bool bParam1, int iParam2) //Position: 0x532E / 21294
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_8(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_86(int iParam0, bool bParam1) //Position: 0x5529 / 21801
{
	bool bVar0;
	int iVar1;
	
	Function_85(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_78(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_71();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_87(bool bParam0) //Position: 0x56C5 / 22213
{
	int iVar0;
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
	bool bVar12;
	var uVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	iVar0 = GET_NUM_OBJECTS_OF_TYPE(3);
	bVar1 = CEIL((IntToFloat(GET_MAX_NUM_OBJECTS_OF_TYPE(3)) * 0.8f));
	if (iVar0 + 1 >= bVar1)
	{
		return;
	}
	if (!Function_106() || !Function_103(1))
	{
		return;
	}
	bVar2 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	bVar3 = GET_EVENT_PERPETRATOR(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		if (DECOR_CHECK_EXIST(bVar2, "nocrime"))
		{
			return;
		}
	}
	if (!IS_OBJECT_VALID(bVar3))
	{
		if (DECOR_CHECK_EXIST(bParam0, "Perpetrator"))
		{
			bVar3 = DECOR_GET_OBJECT(bParam0, "Perpetrator");
		}
	}
	if (GET_OBJECT_TYPE(bVar2) == 15)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(bVar2);
	}
	else if (GET_OBJECT_TYPE(bVar2) == 24)
	{
		bVar4 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar2));
	}
	if (GET_OBJECT_TYPE(bVar3) == 15)
	{
		bVar5 = GET_ACTOR_FROM_OBJECT(bVar3);
	}
	bVar6 = Function_56();
	if (Function_1())
	{
		if (IS_ACTOR_VALID(bVar4))
		{
			if (IS_ACTOR_PLAYER(bVar4))
			{
				return;
			}
			if (IS_ACTOR_RIDEABLE(bVar4))
			{
				bVar7 = GET_MOST_RECENT_RIDER(bVar4);
				if (IS_ACTOR_VALID(bVar7))
				{
					if (IS_ACTOR_PLAYER(bVar7))
					{
						return;
					}
				}
			}
			if (IS_ACTOR_DRAFTED(bVar4))
			{
				bVar8 = GET_ACTOR_DRAFTED_TO(bVar4);
				if (IS_ACTOR_VALID(bVar8))
				{
					bVar9 = GET_ACTOR_IN_VEHICLE_SEAT(bVar8, 0);
					if (IS_ACTOR_VALID(bVar9))
					{
						if (IS_ACTOR_PLAYER(bVar9))
						{
							return;
						}
					}
					if (Function_102(bVar4, 0))
					{
						return;
					}
				}
			}
		}
	}
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000007:
		case 0x00000008:
		case 0x0000002F:
		case 0x0000005A:
		case 0x0000005E:
			if (bVar2 == "")
			{
				return;
			}
			if (IS_ACTOR_VALID(bVar4))
			{
				if (!GET_ACTOR_FACTION(bVar4) != Global_26361)
				{
					if (GET_EVENT_TYPE(bParam0) != 94)
					{
						if (!DECOR_CHECK_EXIST(bVar4, "faction"))
						{
							return;
						}
						if (DECOR_GET_INT(bVar4, "faction") == Global_26361)
						{
						}
						else
						{
							return;
						}
					}
					if (!IS_ACTOR_HUMAN(bVar4))
					{
						return;
					}
				}
			}
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (bVar5 != bVar6)
			{
				if (GET_EVENT_TYPE(bParam0) == 87)
				{
					if (IS_ACTOR_HORSE(bVar5))
					{
						if (!GET_RIDER(bVar5) != bVar6)
						{
							return;
						}
						bVar5 = Function_56();
						DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(bVar5));
					}
					else
					{
						return;
					}
				}
				if (GET_EVENT_TYPE(bParam0) == 88)
				{
					if (IS_ACTOR_VEHICLE(bVar5))
					{
						if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar5, 0) != bVar6)
						{
							return;
						}
						bVar5 = Function_56();
						DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(bVar5));
					}
					else
					{
						return;
					}
				}
				return;
			}
			if (GET_OBJECT_TYPE(bVar2) != 17 || GET_OBJECT_TYPE(bVar2) != 27)
			{
				REFERENCE_OBJECT(bVar2);
			}
			if (DECOR_CHECK_EXIST(bVar2, "Duel"))
			{
				return;
			}
			break;
		
		case 0x00000003:
			if (bVar2 == "")
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (bVar5 != bVar6)
			{
				if (IS_ACTOR_HORSE(bVar5))
				{
					if (!GET_RIDER(bVar5) != bVar6)
					{
						return;
					}
					bVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(bVar5));
				}
				else if (IS_ACTOR_VEHICLE(bVar5))
				{
					if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar5, 0) != bVar6)
					{
						return;
					}
					bVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(bVar5));
				}
				else
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(bVar2, "Duel"))
			{
				return;
			}
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				if (!GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar2)) != Global_26361 && IS_ACTOR_MALE(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					return;
				}
			}
			if (GET_OBJECT_TYPE(bVar2) == 24)
			{
				if (!GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar2))) != Global_26361 && IS_ACTOR_MALE(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar2))))
				{
					return;
				}
			}
			break;
		
		case 0x00000005:
		case 0x0000005B:
			if (bVar2 == "")
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (!Function_101(0x40000000))
			{
				if (!bVar5 != bVar6)
				{
					return;
				}
			}
			if (IS_ACTOR_VALID(bVar5))
			{
				if (bVar5 != bVar6)
				{
					if (!IS_ACTOR_HUMAN(bVar5))
					{
						return;
					}
					if (GET_OBJECT_TYPE(bVar2) != 17 || GET_OBJECT_TYPE(bVar2) != 27)
					{
						return;
					}
				}
			}
			return;
			if (bVar4 == bVar6)
			{
				if (bVar5 == bVar6)
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(bVar2, "Duel"))
			{
				return;
			}
			if (GET_OBJECT_TYPE(bVar2) != 17 || GET_OBJECT_TYPE(bVar2) != 27)
			{
				if (Function_1())
				{
					return;
				}
				REFERENCE_OBJECT(bVar2);
			}
			if (Function_1())
			{
				if (IS_ACTOR_VALID(bVar4))
				{
					if (IS_ACTOR_VEHICLE(bVar4))
					{
						bVar10 = GET_ACTOR_IN_VEHICLE_SEAT(bVar4, 0);
						if (IS_ACTOR_VALID(bVar10))
						{
							if (IS_ACTOR_PLAYER(bVar10))
							{
								return;
							}
						}
						if (Function_102(bVar4, 0))
						{
							return;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			bVar11 = false;
			if (DECOR_GET_OBJECT(bVar4, "HogtiedGringoAttached") == "" && IS_ACTOR_IN_WATER(bVar4))
			{
				bVar11 = true;
			}
			if (!Function_101(0x40000000))
			{
				if (!bVar5 != bVar6)
				{
					if (!bVar11)
					{
						return;
					}
				}
			}
			if (bVar5 != bVar6)
			{
				if (IS_ACTOR_HORSE(bVar5))
				{
					if (!GET_RIDER(bVar5) != bVar6)
					{
						return;
					}
					bVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(bVar5));
				}
				if (IS_ACTOR_VEHICLE(bVar5))
				{
					if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar5, 0) != bVar6)
					{
						return;
					}
					bVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(bVar5));
				}
				if (!bVar11)
				{
					if (IS_ACTOR_VALID(bVar5))
					{
						if (!IS_ACTOR_HUMAN(bVar5))
						{
							return;
						}
					}
					return;
				}
				if (GET_OBJECT_TYPE(bVar2) != 17 || GET_OBJECT_TYPE(bVar2) != 27)
				{
					return;
				}
			}
			if (bVar3 == bVar2)
			{
				if (!bVar11)
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(bVar2, "Duel"))
			{
				return;
			}
			if (IS_ACTOR_VALID(GET_MOUNT(bVar4)))
			{
				DECOR_SET_FLOAT(GET_MOUNT(bVar4), "dismount", GET_CURRENT_GAME_TIME());
				DECOR_SET_INT(GET_MOUNT(bVar4), "faction", GET_ACTOR_FACTION(bVar4));
			}
			else if (IS_ACTOR_VALID(GET_VEHICLE(bVar4)))
			{
				DECOR_SET_FLOAT(GET_VEHICLE(bVar4), "dismount", GET_CURRENT_GAME_TIME());
				DECOR_SET_INT(GET_VEHICLE(bVar4), "faction", GET_ACTOR_FACTION(bVar4));
			}
			break;
		
		case 0x0000000C:
		case 0x0000000D:
			if (!Function_103(1))
			{
				return;
			}
			if (Function_1())
			{
				return;
			}
			if (!bVar5 != bVar6)
			{
				return;
			}
			REFERENCE_OBJECT(bVar2);
			break;
		
		case 0x00000014:
		case 0x00000018:
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (!bVar5 != bVar6)
			{
				if (bVar4 == bVar6)
				{
					if (GET_ACTOR_FACTION(bVar5) == Global_26361)
					{
						if (!Global_27759)
						{
							DECOR_SET_BOOL(GET_MOUNT(bVar5), "hijacked", true);
						}
					}
				}
				return;
			}
			if (GET_EVENT_TYPE(bParam0) == 20)
			{
				DECOR_SET_BOOL(GET_MOUNT(bVar4), "hijacked", true);
			}
			else
			{
				DECOR_SET_BOOL(GET_VEHICLE(bVar4), "hijacked", true);
			}
			if (!IS_OBJECT_VALID(bVar2))
			{
				return;
			}
			if (DECOR_CHECK_EXIST(GET_MOUNT(bVar5), "break"))
			{
				return;
			}
			if (!GET_ACTOR_FACTION(bVar4) != 20)
			{
				MEMORY_PREFER_RIDING(bVar4, 0);
				DECOR_SET_BOOL(bVar2, "hijacked", true);
				if (!Global_3386)
				{
					MEMORY_CONSIDER_AS_ENEMY(bVar4, bVar5);
					TASK_CLEAR(bVar4);
					TASK_KILL_CHAR(bVar4, bVar5);
					TASK_PRIORITY_SET(bVar4, 2);
				}
				else
				{
					TASK_CLEAR(bVar4);
					MEMORY_CONSIDER_AS_ENEMY(bVar4, bVar5);
					MEMORY_PREFER_MELEE(bVar4, 1);
					TASK_PRIORITY_SET(bVar4, 2);
				}
			}
			break;
		
		case 0x00000013:
		case 0x00000017:
			bVar12 = false;
			if (IS_ACTOR_VALID(bVar5))
			{
				if (!bVar5 != bVar6)
				{
					if (IS_OBJECT_VALID(bVar2))
					{
						DECOR_SET_FLOAT(bVar2, "dismount", GET_CURRENT_GAME_TIME());
					}
					if (IS_ACTOR_VALID(bVar4))
					{
						DECOR_SET_INT(bVar4, "faction", GET_ACTOR_FACTION(bVar5));
					}
					if (!Function_1() && !Global_3380)
					{
						if (IS_ACTOR_VALID(bVar4))
						{
							if (IS_ACTOR_VEHICLE(bVar4))
							{
								if (GET_VEHICLE(bVar6) == bVar4)
								{
									if (GET_ACTOR_IN_VEHICLE_SEAT(bVar4, 0) == bVar5)
									{
										if ((GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bVar5)) != 0 && GET_ACTOR_FACTION(bVar5) == 20) && GET_ACTOR_FACTION(bVar5) == 23)
										{
											fVar14 = -1.0f;
											iVar15 = 0;
											Function_47(&iVar15, 1);
											Function_47(&iVar15, 16);
											Function_47(&iVar15, 4);
											if (Function_97(bVar5, &uVar13, &fVar14, iVar15, 0, 0x40400000) || (CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(Function_56(), bVar5) > 0.06f && GET_WEAPON_IN_HAND(Function_56()) == 4294967295))
											{
												DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(bParam0), "Perpetrator", Function_56());
												bVar12 = true;
											}
										}
									}
								}
							}
						}
					}
				}
				else if (IS_ACTOR_VALID(bVar4))
				{
					DECOR_SET_BOOL(bVar4, "corralNoCrime", true);
				}
			}
			if (!bVar12)
			{
				return;
			}
			break;
		
		case 0x00000023:
			bVar16 = true;
			if (Function_1())
			{
				if (IS_ACTOR_VALID(bVar4))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(bVar4))
					{
						if (!Function_102(bVar4, 1))
						{
							if (Function_96(bVar4, 4294967295, 1, 4294967295) && GET_NUM_OCCUPIED_SEATS(bVar4) < 1)
							{
								if (Function_95(bVar4) == Global_28841)
								{
									bVar16 = false;
								}
							}
						}
					}
				}
			}
			if (bVar16)
			{
				return;
			}
			break;
		
		case 0x00000016:
		case 0x00000012:
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (!bVar5 != bVar6)
			{
				return;
			}
			if (!Function_103(1))
			{
				return;
			}
			if (Function_1())
			{
				if (GET_EVENT_TYPE(bParam0) == 22)
				{
					if (GET_NUM_OCCUPIED_SEATS(bVar4) != 0 || Function_102(bVar4, 0))
					{
						return;
					}
				}
			}
			if (GET_EVENT_TYPE(bParam0) == 18)
			{
				if (GET_ACTORS_HORSE(bVar5) == GET_MOUNT(bVar5))
				{
					return;
				}
				if (DECOR_CHECK_EXIST(GET_MOUNT(bVar5), "break"))
				{
					return;
				}
				if (DECOR_CHECK_EXIST(GET_MOUNT(bVar5), "hijacked"))
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(bVar2, "dismount"))
			{
				if (DECOR_GET_FLOAT(bVar2, "dismount") + 15.0f) > GET_CURRENT_GAME_TIME()
				{
					if (!Global_27759)
					{
						DECOR_REMOVE(bVar2, "dismount");
						return;
					}
				}
			}
			if (GET_EVENT_TYPE(bParam0) == 22)
			{
				if (!IS_ACTOR_VALID(bVar4))
				{
					return;
				}
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bVar4)) == 8)
				{
					return;
				}
			}
			break;
		
		case 0x00000011:
			if (!Function_101(0x40000000))
			{
				if (!bVar5 != bVar6)
				{
					return;
				}
			}
			if (bVar5 != bVar6)
			{
				if (IS_ACTOR_VALID(bVar5))
				{
					if (!IS_ACTOR_HUMAN(bVar5))
					{
						return;
					}
				}
				return;
			}
			if (!Function_103(1))
			{
				return;
			}
			break;
		
		case 0x00000033:
			if (!Function_103(1))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (!bVar5 != bVar6)
			{
				return;
			}
			if (bVar4 == bVar6)
			{
				return;
			}
			break;
		
		case 0x0000000E:
			if (Function_1())
			{
				return;
			}
			if (!Function_103(1))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar2))
			{
				return;
			}
			if (!bVar5 != bVar6)
			{
				return;
			}
			if (((((!STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "open_credenza") && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "stand_armoir")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "stand_cupboard")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "stand_open_chest")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "locked_footlocker")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "Player_Lockpick_Footlocker"))
			{
				return;
			}
			break;
		
		case 0x0000000F:
			if (!Function_103(1))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar3))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar2))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(bVar3) != 15)
			{
				return;
			}
			if (STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "$/content/scripting/gringo/simplegringo/horse_stay"))
			{
				if (!GET_RIDER(bVar5) != bVar6)
				{
					return;
				}
			}
			if (STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(bVar2), "hogtie_pickup"))
			{
				if (bVar5 == bVar6)
				{
					if (!Global_3403)
					{
						bVar17 = GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(bVar2));
						if (IS_OBJECT_VALID(bVar17))
						{
							Function_94(bVar17);
							Function_93(bVar5);
							if (VDIST(Function_94(bVar17), Function_93(bVar5)) >= 3.0f)
							{
								if (GET_OBJECT_TYPE(bVar17) == 15)
								{
									bVar18 = GET_ACTOR_FROM_OBJECT(bVar17);
								}
								else if (GET_OBJECT_TYPE(bVar17) == 24)
								{
									bVar18 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar17));
								}
								if (IS_ACTOR_VALID(bVar18))
								{
									iVar19 = GET_ACTOR_ENUM(bVar18);
									if (iVar19 != 4294967295)
									{
										if (StackVal && Function_91(GET_ACTORENUM_ACTOR_BASE_TYPE(iVar19) != 1) < 0)
										{
											if (IS_OBJECTSET_VALID(Global_62999))
											{
												if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanObject"))
												{
													DECOR_REMOVE(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanObject");
												}
												if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanTime"))
												{
													DECOR_REMOVE(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanTime");
												}
												DECOR_SET_OBJECT(Global_62999, "untiedLawmanObject", bVar17);
												DECOR_SET_FLOAT(Global_62999, "untiedLawmanTime", (GET_CURRENT_GAME_TIME() + 2.5f));
											}
										}
									}
								}
							}
						}
					}
				}
				return;
			}
			return;
			break;
		
		case 0x00000009:
			if (DECOR_CHECK_EXIST(bParam0, "DroppedItem"))
			{
				bVar20 = DECOR_GET_OBJECT(bParam0, "DroppedItem");
				if (IS_OBJECT_VALID(bVar20))
				{
					Function_90(bVar20);
				}
			}
			return;
			break;
		
		default:
			return;
			break;
	}
	if (!IS_LAYOUTREF_VALID(Global_26314))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(Global_26315))
	{
		return;
	}
	bVar21 = COPY_EVENT(bParam0, Global_26314);
	ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bVar21), Global_26315);
	bVar22 = GET_EVENT_PERPETRATOR(bVar21);
	if (Function_88(Global_26361, bVar22, 1) || Function_1())
	{
		DECOR_SET_INT(bVar21, "witness", 3);
	}
	else if (Function_88(StackVal, bVar22, 1))
	{
		DECOR_SET_INT(bVar21, "witness", 2);
	}
	else
	{
		DECOR_SET_INT(bVar21, "witness", true);
	}
	return;
}

bool Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x64C3 / 25795
{
	bool bVar0;
	vector3 vVar1;
	
	if (GET_OBJECT_TYPE(bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		return 0;
	}
	if (bParam2)
	{
		if (!IS_ITERATOR_VALID(Global_26118))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(bParam1, &vVar1);
		Function_89(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(Global_26118, 15);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar0)) == iParam0)
			{
				return 1;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
		Function_89(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, Global_6289);
		ITERATE_ON_OBJECT_TYPE(Global_26118, 24);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))) == iParam0)
				{
					return 1;
				}
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
	}
	return 0;
}

int Function_89(int iParam0) //Position: 0x6636 / 26166
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_9());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_9());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_90(bool bParam0) //Position: 0x6667 / 26215
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

int Function_91(int iParam0) //Position: 0x669B / 26267
{
	if (!Function_92(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_92(int iParam0) //Position: 0x66B3 / 26291
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

vector3 Function_93(bool bParam0) //Position: 0x66C8 / 26312
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_94(bool bParam0) //Position: 0x66D9 / 26329
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_95(bool bParam0) //Position: 0x6700 / 26368
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

int Function_96(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x675A / 26458
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_97(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x6813 / 26643
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_100(bParam0, Global_34573);
		if (!Function_22(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_98(bParam0);
				return 1;
			}
		}
		if (!Function_22(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_98(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_98(bParam0);
				return 1;
			}
		}
		if (!Function_22(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_98(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_98(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_22(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_98(bParam0);
				return 1;
			}
		}
		if (!Function_22(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_98(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_98(bool bParam0) //Position: 0x69AA / 27050
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_99(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_99(bool bParam0) //Position: 0x69DE / 27102
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_100(bool bParam0, bool bParam1) //Position: 0x69F5 / 27125
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_101(int iParam0) //Position: 0x6AE6 / 27366
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_102(bool bParam0, bool bParam1) //Position: 0x6B04 / 27396
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return GET_VEHICLE(Function_56()) != bParam0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				if (!bParam1)
				{
					bVar1 = Function_56();
				}
			}
			else
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (GET_VEHICLE(bVar1) == bParam0)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_103(bool bParam0) //Position: 0x6B68 / 27496
{
	if (Function_101(256))
	{
		return 0;
	}
	if (Function_101(262144))
	{
		return 0;
	}
	if (Function_105())
	{
		return 0;
	}
	if (!Function_101(1))
	{
		return 0;
	}
	if (!Function_101(4096))
	{
		return 0;
	}
	if (bParam0 && Function_104(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_101(2048))
	{
		return 0;
	}
	if (Function_1() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

bool Function_104(int iParam0) //Position: 0x6BDE / 27614
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_105() //Position: 0x6BEF / 27631
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_106() //Position: 0x6C08 / 27656
{
	return Function_107(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26361);
}

float Function_107(vector3 vParam0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x6C17 / 27671
{
	if (Function_101(256))
	{
		return 0;
	}
	if (Function_101(262144))
	{
		return 0;
	}
	if (Function_105())
	{
		return 0;
	}
	if (Function_104(12))
	{
		return 0;
	}
	if (vParam0.z >= 4294967295 || vParam0.z <= 2)
	{
		return 0;
	}
	return 1;
}

void Function_108(bool bParam0, bool bParam1) //Position: 0x6C65 / 27749
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	bParam1 = (bParam1 || Global_30900[8]);
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	bVar2 = GET_EVENT_PERPETRATOR(bParam0);
	bVar3 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	if (IS_OBJECT_VALID(bVar3))
	{
		if (GET_OBJECT_TYPE(bVar3) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bParam0));
		}
	}
	if (IS_OBJECT_VALID(bVar2))
	{
		if (GET_OBJECT_TYPE(bVar2) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					if (bParam1)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bParam0)));
						PRINTNL();
					}
					if (GET_EVENT_TYPE(bParam0) == 6)
					{
						if (GET_WEAPON_IN_HAND(Global_34573) == 29)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", 29);
						}
					}
					if (IS_ACTOR_VALID(bVar1))
					{
						if (IS_ACTOR_FLYING(bVar1))
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Flying", true);
						}
						if (((GET_EVENT_TYPE(bParam0) != 2 || GET_EVENT_TYPE(bParam0) != 7) || GET_EVENT_TYPE(bParam0) != 10) || GET_EVENT_TYPE(bParam0) != 5)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", GET_LAST_HIT_WEAPON(bVar1));
							if (GET_LAST_HIT_WEAPON(bVar1) == 29)
							{
								if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Linked", true);
								}
								if (IS_PLAYER_DEADEYE(0))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "AM_Deadeye", true);
								}
							}
							else if (GET_LAST_HIT_WEAPON(bVar1) == 31)
							{
								if (IS_ACTOR_USING_COVER(bVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "AM_InCover", true);
								}
							}
						}
						else if (GET_EVENT_TYPE(bParam0) == 91)
						{
							if (DECOR_GET_STRING_HASH(bParam0, "ExplosionType") == STRING_TO_HASH("ATRifleExplosion"))
							{
								DECOR_SET_INT(GET_OBJECT_FROM_EVENT(bParam0), "nAM_Weapon", 31);
								if (IS_ACTOR_USING_COVER(bVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(bParam0), "AM_InCover", true);
								}
							}
						}
					}
					COPY_EVENT(bParam0, bVar0);
				}
			}
		}
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		if (GET_OBJECT_TYPE(bVar3) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
				{
					if (bParam1)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bParam0)));
						PRINTNL();
					}
					COPY_EVENT(bParam0, bVar0);
				}
			}
		}
	}
	return;
}

void Function_109(bool bParam0) //Position: 0x6F5E / 28510
{
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_26149 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return;
	}
	ITERATE_EVERYWHERE(Global_26149);
	ITERATE_ON_OBJECT_TYPE(Global_26149, 3);
	if (!bParam0 != "")
	{
		ITERATE_IN_SET(Global_26149, bParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(Global_26149, GET_EVENT_LAYOUT());
	}
	return;
}

void Function_110() //Position: 0x6FCF / 28623
{
	return;
}

void Function_111(int iParam0) //Position: 0x6FD5 / 28629
{
	strcpy(iParam0 + 12, "JOBLAUNCHER", 16);
	*iParam0 = 31881;
	iParam0->f_4 = 28683;
	iParam0->f_8 = 31881;
	iParam0->f_28 = 0;
	return;
}

int Function_112() //Position: 0x700B / 28683
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Global_3366)
	{
		return 0;
	}
	if (Function_143(0, 0, 1, 1))
	{
		return 0;
	}
	bVar1 = Function_56();
	if (!IS_ACTOR_VALID(bVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Function_142(&(Global_62484[iVar014]), 8))
		{
			if (IS_OBJECT_VALID(Global_62484[iVar014].f_32))
			{
				if (Function_138(Global_62484[iVar014].f_32, 1, 1, 1, 1, 0))
				{
					Function_123(StackVal, Global_62484[iVar014].f_12, Global_62484[iVar014].f_24, Global_62484[iVar014].f_16, Global_62484[iVar014].f_20);
					Function_122(Global_62484[iVar014].f_32);
				}
			}
		}
		if (!IS_SCRIPT_VALID(StackVal) && Function_142(&(Global_62484[iVar014]), 1))
		{
			if (IS_PERS_CHAR_VALID(Global_62484[iVar014].f_28))
			{
				bVar2 = GET_ACTOR_FROM_PERS_CHAR(Global_62484[iVar014].f_28);
			}
			if (IS_PERS_CHAR_VALID(Global_62484[iVar014].f_28))
			{
				if (IS_PERS_CHAR_ALIVE(Global_62484[iVar014].f_28) && !Function_121(bVar2))
				{
					if (Function_115(&(Global_62484[iVar014])))
					{
						Function_114(&(Global_62484[iVar014]), 1);
						Function_113(&(Global_62484[iVar014]), 2);
					}
				}
				else
				{
					Function_114(&(Global_62484[iVar014]), 1);
					Function_113(&(Global_62484[iVar014]), 8);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					HUD_CLEAR_HELP();
				}
			}
			else
			{
				Function_114(&(Global_62484[iVar014]), 1);
				Function_113(&(Global_62484[iVar014]), 8);
				if (!IS_PLAYER_CONTROLLABLE(0))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
				HUD_CLEAR_HELP();
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_113(var uParam0, int iParam1) //Position: 0x7190 / 29072
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_114(var uParam0, int iParam1) //Position: 0x719F / 29087
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_115(int iParam0) //Position: 0x71B6 / 29110
{
	struct<29> Var0;
	
	Var0.f_4 = iParam0->f_24;
	Var0.f_12 = iParam0->f_28;
	Function_120();
	*(&Var0 + 16) = { StackVal, Function_120() };
	Var0.f_24 = iParam0->f_16;
	Var0.f_28 = iParam0->f_20;
	iParam0->f_4 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(StackVal, 4), &Var0, 10, 0);
	Function_118();
	Function_116(0, 0);
	if (IS_ACTOR_DRUNK(Function_56()))
	{
		SET_ACTOR_DRUNK(Function_56(), 0);
	}
	return IS_SCRIPT_VALID(StackVal);
}

void Function_116(int iParam0, int iParam1) //Position: 0x7218 / 29208
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_117(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_117(int iParam0) //Position: 0x729A / 29338
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_118() //Position: 0x72E8 / 29416
{
	Function_119(512);
	Global_27761 = 0.0f;
	UNK_0x598815BD(Global_27761);
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	return;
}

void Function_119(var uParam0) //Position: 0x7324 / 29476
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

struct<8> Function_120() //Position: 0x7337 / 29495
{
	char* cVar0[8];
	
	strcpy(&cVar0, "watch01", 8);
	return StackVal, cVar0;
}

bool Function_121(bool bParam0) //Position: 0x734F / 29519
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAST_ATTACKER(bParam0) == Global_34573)
		{
			return 1;
		}
	}
	return 0;
}

void Function_122(bool bParam0) //Position: 0x736B / 29547
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_123(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x73F5 / 29685
{
	if (!Function_124(iParam0, uParam2, 63))
	{
		return;
	}
	Global_62484[iParam014].f_12 = iParam0;
	Global_62484[iParam014].f_24 = uParam2;
	Global_62484[iParam014].f_16 = uParam3;
	Global_62484[iParam014].f_20 = uParam4;
	Global_62484[iParam014].f_8 = uParam1;
	Function_113(&(Global_62484[iParam014]), 1);
}

bool Function_124(int iParam0, int iParam1, int iParam2) //Position: 0x744F / 29775
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (!Function_137())
	{
		return 0;
	}
	if (Global_3403 || Global_3404)
	{
		return 0;
	}
	if (!Function_136(iParam0))
	{
		return 0;
	}
	if ((Global_3380 || Global_3384) || Global_3382)
	{
		return 0;
	}
	if (!Global_29006 != iParam1)
	{
		return 0;
	}
	iVar0 = Function_131(iParam1, iParam0, 6);
	if (!Function_130(iVar0))
	{
		return 0;
	}
	if (Global_3365)
	{
		bVar1 = Function_127(iVar0);
		if (GET_DAY(bVar1) != 0)
		{
			bVar2 = GET_TIME_OF_DAY();
			if (iParam0 != 1)
			{
				if (GET_DAY(bVar1) > GET_DAY(false))
				{
					return 0;
				}
			}
			uVar3 = Function_127(iVar0);
			ADD_TIME(&uVar3, 0, 16, 0, 0);
			if (IS_LATER_THAN(uVar3, 0))
			{
				return 0;
			}
		}
	}
	if (!iParam2 != 63)
	{
		if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_126(iParam2), Function_125(iParam2)))
		{
			return 0;
		}
	}
	if (IS_SCRIPT_VALID(StackVal) || Function_142(&(Global_62484[iParam014]), 2))
	{
		return 0;
	}
	if (Function_142(&(Global_62484[iParam014]), 1))
	{
		return 0;
	}
	return 1;
}

var Function_125(int iParam0) //Position: 0x7541 / 30017
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

var Function_126(int iParam0) //Position: 0x75AD / 30125
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

var Function_127(int iParam0) //Position: 0x7619 / 30233
{
	if (!Function_128(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_128(int iParam0) //Position: 0x7638 / 30264
{
	if (!Function_130(iParam0))
	{
		return 0;
	}
	if (!Function_129(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_129(int iParam0) //Position: 0x765C / 30300
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_130(int iParam0) //Position: 0x7671 / 30321
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_131(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7688 / 30344
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_135(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_132(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_132(bParam0, bParam1, bParam2, 4294967295);
}

int Function_132(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x76E6 / 30438
{
	var uVar0;
	
	if (!Function_134(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_135(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_133(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_133(int iParam0) //Position: 0x783B / 30779
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_134(int iParam0) //Position: 0x7879 / 30841
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_135(int iParam0, int iParam1, int iParam2) //Position: 0x788E / 30862
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_136(int iParam0) //Position: 0x78AE / 30894
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return 0;
	}
	return Global_25970[iParam0];
}

bool Function_137() //Position: 0x78C9 / 30921
{
	return Function_2(512);
}

bool Function_138(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x78D5 / 30933
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_141(bVar1, iParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_140(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				iVar2 = TASK_SEQUENCE_OPEN();
				if (Function_140(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_139(&uVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_139(&uVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(0, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_139(var uParam0, int iParam1) //Position: 0x7AE7 / 31463
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_58(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_58(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_140(bool bParam0, bool bParam1) //Position: 0x7B52 / 31570
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_141(bool bParam0, bool bParam1) //Position: 0x7B71 / 31601
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_140(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

bool Function_142(var uParam0, int iParam1) //Position: 0x7BCE / 31694
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

bool Function_143(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7BE5 / 31717
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_144() //Position: 0x7C89 / 31881
{
	return;
}

void Function_145(int iParam0) //Position: 0x7C8F / 31887
{
	strcpy(iParam0 + 12, "QUESTLAUNCHER", 16);
	*iParam0 = 31881;
	iParam0->f_4 = 31941;
	iParam0->f_8 = 31881;
	iParam0->f_28 = 0;
	return;
}

int Function_146() //Position: 0x7CC5 / 31941
{
	float fVar0;
	int iVar1;
	
	if (!Global_3366)
	{
		return 0;
	}
	if (!Function_194(10) && !Function_2(1048576))
	{
		return 0;
	}
	fVar0 = GET_PROFILE_TIME();
	iVar1 = StackVal;
	while (iVar1 < (77 - 1))
	{
		if ((GET_PROFILE_TIME() - fVar0) < 150.0f)
		{
			Global_63535.f_4 = iVar1;
			return 0;
		}
		Function_147(&(Global_63541[iVar155]), iVar1);
		iVar1++;
	}
	Global_63535.f_4 = 0;
	return 0;
}

void Function_147(int iParam0, int iParam1) //Position: 0x7D31 / 32049
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (Function_22(iParam0->f_144, 128))
	{
		Function_193(iParam0);
		UI_POP("nCutscenes");
		Function_36(iParam0 + 144, 128);
	}
	if (!(Function_192(iParam1) || Function_191(iParam1)))
	{
		return;
	}
	if ((((Global_3384 || Global_3403) || Global_3405) || IS_ACTOR_VALID(GET_LINKED_ANIM_TARGET(Global_34573))) || Function_187(Global_34573, 0, 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
		}
		return;
	}
	if (Function_191(iParam1) || iParam0->f_148)
	{
		bVar0 = (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28);
		if (!bVar0)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
			}
			Function_186(iParam0, iParam1);
		}
		return;
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(iParam0->f_204))
			{
				return;
			}
			if (!IS_GRINGO_VALID(iParam0->f_208) && UNK_0x214AFB8C(iParam0->f_60))
			{
				return;
			}
			if (!Function_176(iParam0, iParam1, 0))
			{
				return;
			}
			Function_157(iParam0, iParam1);
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(iParam0->f_212))
			{
				return;
			}
			break;
		
		default:
			break;
	}
	if (iParam1 == 64 || Global_3365)
	{
		Function_149(iParam0, iParam1, 0x41f00000, 0x42200000, 0);
	}
	vVar1 = { StackVal, StackVal, *(iParam0 + 100) };
	vVar1.f_4 = (vVar1.y + 1.25f);
	bVar4 = IS_POSITION_INDOORS(Global_34574);
	bVar5 = IS_POSITION_INDOORS(vVar1);
	if (bVar4 != bVar5)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
		}
		return;
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		switch (*iParam0)
		{
			case 0x00000001:
				if (iParam1 == iParam0->f_20)
				{
					if (GATEWAY_UPDATE(iParam0->f_192))
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam0->f_200))
							{
								RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
								Function_148(iParam0);
								Function_186(iParam0, iParam1);
								UI_PUSH("nCutscenes");
							}
						}
						else if (HAS_STRING_TABLE_LOADED("RandomCharMissions"))
						{
							iParam0->f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(iParam0 + 24, GATEWAY_GET_VOLUME(iParam0->f_192), 30, 5, 0, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
					}
				}
				else if (Function_138(iParam0->f_192, 0, 1, 1, 0, 1))
				{
					Function_148(iParam0);
					Function_186(iParam0, iParam1);
				}
				break;
			
			case 0x00000002:
			case 0x00000003:
				if (iParam1 == 3)
				{
					if (Function_138(iParam0->f_192, 0, 1, 1, 0, 1))
					{
						Function_148(iParam0);
						Function_186(iParam0, iParam1);
					}
					return;
				}
				if (GATEWAY_UPDATE(iParam0->f_192))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam0->f_200))
						{
							RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
							Function_148(iParam0);
							Function_186(iParam0, iParam1);
							UI_PUSH("nCutscenes");
						}
					}
					else if (HAS_STRING_TABLE_LOADED("RandomCharMissions"))
					{
						iParam0->f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(iParam0 + 24, GATEWAY_GET_VOLUME(iParam0->f_192), 30, 4, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
				}
				break;
			
			default:
				break;
		}
	}
	else if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		if (!Function_22(iParam0->f_144, 4096) && !Global_63096)
		{
			if (VDIST(Global_34574, *(iParam0 + 100)) > iParam0->f_96)
			{
				Function_47(iParam0 + 144, 4096);
				PRINT_HELP_FORMAT(7.0f, "tutorial_rcm_player_busy", "", "", "", "", 0, 0, 0);
			}
		}
	}
	return;
}

void Function_148(int iParam0) //Position: 0x80AC / 32940
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_26316.f_56 & 16384;
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		SET_ACTOR_INVULNERABILITY(iParam0->f_204, 1);
		MEMORY_CLEAR_EVENTS(iParam0->f_204, 1);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, 1);
	return;
}

int Function_149(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x80F6 / 33014
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28))
		{
			if (UNK_0x214AFB8C(iParam0->f_68))
			{
				bVar0 = VDIST(Global_34574, *(iParam0 + 100));
				if (Global_63535.f_12 == iParam1)
				{
					uVar1 = Global_63535.f_20;
					uVar2 = Function_151(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
					Global_63535.f_20 = uVar1;
					Global_63535.f_16 = bVar0;
					if (bVar0 < fParam3)
					{
						Global_63535.f_12 = 4294967295;
						Global_63535.f_16 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > fParam2)
				{
					if (Global_63535.f_12 != 4294967295 || (Global_63535.f_12 == iParam1 && bVar0 > Global_63535.f_16))
					{
						iVar3 = Global_63535.f_20;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(Global_34573) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_150(iParam0));
							}
						}
						if (IS_ACTORSET_VALID(iParam4))
						{
							iVar4 = 0;
							while (iVar4 <= GET_ACTORSET_SIZE(iParam4))
							{
								bVar5 = GET_ACTOR_FROM_ACTORSET(iParam4, iVar4);
								if (IS_ACTOR_VALID(bVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar5), bVar5);
								}
								iVar4++;
							}
						}
						uVar6 = Function_151(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
						Global_63535.f_20 = iVar3;
						Global_63535.f_12 = iParam1;
						Global_63535.f_16 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

float Function_150(float fParam0) //Position: 0x8257 / 33367
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_150(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_151(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x828C / 33420
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_154(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_156()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *iParam1 == 0)
		{
			if (*iParam1 != 5)
			{
				*iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*iParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_58(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_152();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*iParam1 = 0;
				break;
		}
	}
	else if ((!Function_154(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_156()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_154(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_152() //Position: 0x84D2 / 34002
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_153(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_153(char* cParam0, vector3 vParam1) //Position: 0x8526 / 34086
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_154(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x864E / 34382
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_155(bParam0);
		if (VDIST(Function_155(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_155(bool bParam0) //Position: 0x86D8 / 34520
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

int Function_156() //Position: 0x8742 / 34626
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_157(int iParam0, int iParam1) //Position: 0x8751 / 34641
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	
	if (Function_22(iParam0->f_144, 2048))
	{
		return;
	}
	bVar0 = (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28);
	bVar1 = IS_OBJECT_VALID(iParam0->f_192);
	if (!bVar1 && !bVar0)
	{
		iVar2 = 6;
		if (GET_TARGETED_JOURNAL_ENTRY() == iParam0->f_140)
		{
			iVar2 = 7;
		}
		Function_167(iParam0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (GET_BLIP_ICON(iParam0->f_184) == 440)
		{
			vVar3 = { StackVal, StackVal, *(iParam0 + 100) };
			vVar3.f_4 = (vVar3.y + 0.5f);
			if (!Function_166(StackVal, StackVal, vVar3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_34574, *(iParam0 + 100)) < 42.0f)
			{
				return;
			}
			Global_74542[iParam110].f_12 = 1;
			REMOVE_BLIP(iParam0->f_184);
		}
		else if (bVar0)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	if (!IS_BLIP_VALID(iParam0->f_184))
	{
		if (bVar0)
		{
			if (iParam1 == iParam0->f_20)
			{
				if (Function_165(iParam0->f_132))
				{
					Function_162(StackVal, StackVal, iParam0->f_132, 23, *(iParam0 + 100), 63);
				}
				else
				{
					Function_162(StackVal, StackVal, Global_29006, 23, *(iParam0 + 100), 63);
				}
			}
		}
		else
		{
			if (iParam1 == iParam0->f_20)
			{
				if (Function_165(iParam0->f_132))
				{
					Function_158(StackVal, iParam0->f_132, 23, iParam0->f_100);
				}
				else
				{
					Function_158(StackVal, Global_29006, 23, iParam0->f_100);
				}
				Function_36(iParam0 + 144, 4096);
			}
			if (iParam1 == 2)
			{
				*(iParam0 + 100) = { -2168.505f, 16.879f, 2590.258f };
			}
			if (iParam1 == 33)
			{
				*(iParam0 + 100) = { -3951.709f, 25.098f, 2868.928f };
			}
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 2, 7);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 2, 7);
			SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			UNK_0xFF3DB575(iParam0->f_188, 1);
			SET_BLIP_PRIORITY(iParam0->f_188, 1);
			if (iParam0->f_20 != iParam1)
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.58f, 0.35f, 0.72f, 1.0f);
				SET_BLIP_COLOR(iParam0->f_188, 0.58f, 0.35f, 0.72f, 1.0f);
			}
			SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1.25f);
		}
	}
	return;
}

void Function_158(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x898E / 35214
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_160(Function_161(iParam2, 0.0f, bParam3));
		vVar4 = { StackVal, StackVal, Function_160(Function_161(iParam2, 0.0f, bParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_160(StackVal);
				vVar1 = { StackVal, StackVal, Function_160(StackVal) };
				if (Function_159(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_159(vector3 vParam0, vector3 vParam3) //Position: 0x8A94 / 35476
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_160(int iParam0) //Position: 0x8AC1 / 35521
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

int Function_161(vector3 vParam0) //Position: 0x8B18 / 35608
{
	bool bVar0;
	
	bVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_162(bool bParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x8B66 / 35686
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_165(bParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_58(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_164(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_161(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_160(uVar3);
		vVar7 = { StackVal, StackVal, Function_160(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_160(StackVal);
				vVar4 = { StackVal, StackVal, Function_160(StackVal) };
				if (Function_159(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = bParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_163(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_163(int iParam0) //Position: 0x8D49 / 36169
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

int Function_164(int iParam0) //Position: 0x8E80 / 36480
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_165(bool bParam0) //Position: 0x8F38 / 36664
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_166(vector3 vParam0, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8F4E / 36686
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, fParam3, fParam4, iParam5, iParam6, iParam7);
}

void Function_167(int iParam0, int iParam1) //Position: 0x8F6A / 36714
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_22(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_9(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_168(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_168(int iParam0) //Position: 0x9024 / 36900
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_9(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_165(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_9(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_169(&bVar1, 0);
	return;
}

int Function_169(var uParam0, int iParam1) //Position: 0x90C6 / 37062
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_173(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_170(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_170(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9227 / 37415
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_171(bool bParam0) //Position: 0x92C2 / 37570
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_172(char* cParam0, char* cParam1, char* cParam2) //Position: 0x932C / 37676
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_173(bool bParam0) //Position: 0x934B / 37707
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_175(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_174(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_175(iVar0);
						}
					}
					else if (Function_174(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_175(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_175(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_174(bool bParam0, vector3 vParam1) //Position: 0x94AC / 38060
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_155(bParam0);
		vVar0 = { StackVal, StackVal, Function_155(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_175(int iParam0) //Position: 0x9526 / 38182
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_176(int iParam0, int iParam1, bool bParam2) //Position: 0x9587 / 38279
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	
	if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
		if (!Function_185(iParam0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_179(iParam0, iParam1, 0, 0, bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 0);
				if (bVar17)
				{
					if (Function_38())
					{
						Function_178(iParam1, 1);
					}
					else
					{
						Function_177(iParam1);
					}
				}
				else
				{
					Function_45("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
					Global_74542[iParam110] = 7;
					Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
				}
			}
			return 0;
		}
		if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204) && GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == iParam0->f_204)
		{
			stradd(&cVar0, ": DA: Quest helper is now in combat.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_179(iParam0, iParam1, 0, 0, bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_179(iParam0, iParam1, 0, 0, bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_179(iParam0, iParam1, 0, 0, bParam2);
			bVar18 = false;
			bVar19 = GET_LAST_ATTACKER(iParam0->f_204);
			if (IS_ACTOR_VALID(bVar19))
			{
				if (IS_ACTOR_LOCAL_PLAYER(bVar19))
				{
					bVar18 = true;
				}
			}
			bVar20 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 1);
			if (!bVar20)
			{
				bVar21 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 0);
				if (bVar18)
				{
					if (bVar21)
					{
						if (Function_38())
						{
							Function_178(iParam1, 1);
						}
						else
						{
							Function_177(iParam1);
						}
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_45("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_74542[iParam110] = 7;
						Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
					}
				}
				else
				{
					Function_45("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
					Global_74542[iParam110] = 7;
					Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
				}
			}
			return 0;
		}
		if (AI_HAS_ACTOR_BUMPED_INTO_ME(iParam0->f_204, Global_34573, 5.0f) && AI_WAS_PUSHED_OVER(iParam0->f_204, 5.0f))
		{
			stradd(&cVar0, "DA: Quest helper has been bumped.", 64);
			Function_179(iParam0, iParam1, 0, 0, bParam2);
			TASK_CLEAR(iParam0->f_204);
			TASK_PRIORITY_SET(iParam0->f_204, 2);
			TASK_FLEE_ACTOR(iParam0->f_204, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(iParam0->f_204, 1);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam155].f_140, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Disabled", iParam0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 1);
				SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 0, "RCM_InactiveJournal");
			}
			Global_74542[iParam110] = 7;
			Global_74542[iParam110].f_4 = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam110] + 4, Global_63541[iParam155].f_84);
		}
	}
	return 1;
}

void Function_177(int iParam0) //Position: 0x99A8 / 39336
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_29004)
	{
		case 0x00000000:
			strcpy(&cVar0, "FTR", 32);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "MEX", 32);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NOR", 32);
			break;
		
		default:
			PRINTSTRING("Unknown territory");
			PRINTINT(Global_29004);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

void Function_178(int iParam0, bool bParam1) //Position: 0x9B0A / 39690
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (bParam1)
	{
		switch (Global_29004)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_29004);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_37(Global_76846, 8192))
	{
		Function_31(Global_34573, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

void Function_179(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x9C8A / 40074
{
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (((!bParam2 || Function_184(iParam1)) || Function_183(iParam1)) || iParam1 != iParam0->f_20)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	else if (bParam2)
	{
		if (Function_22(Global_63541[iParam155].f_144, 64) && iParam1 == iParam0->f_20)
		{
			Function_181(iParam0, iParam1);
		}
		if (!(Function_184(iParam1) || Function_183(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
			SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 1, 0);
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
	}
	if (IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_22(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_36(iParam0 + 144, 32);
	}
	if (IS_OBJECT_VALID(iParam0->f_212))
	{
		RELEASE_OBJECT_REF(iParam0->f_212);
	}
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		DESTROY_VOLUME(iParam0->f_216);
	}
	if (bParam4)
	{
		Function_180(iParam0);
	}
	Function_36(iParam0 + 144, 256);
	switch (Global_74542[iParam110])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_74542[iParam110] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(iParam0->f_196) && iParam3)
	{
		TERMINATE_SCRIPT(iParam0->f_196);
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(iParam0->f_204))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_204);
				AI_CONVERSE_ENABLE(iParam0->f_204);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(iParam0->f_204)))
				{
					DESTROY_OBJECT(SQUAD_GET(iParam0->f_204));
				}
				RELEASE_ACTOR(iParam0->f_204);
			}
			break;
		
		default:
			break;
	}
}

void Function_180(int iParam0) //Position: 0x9E34 / 40500
{
	if (Function_22(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_36(iParam0 + 144, 1);
	}
	if (Function_22(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_36(iParam0 + 144, 8);
	}
	if (Function_22(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_36(iParam0 + 144, 2);
	}
	if (Function_22(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_36(iParam0 + 144, 4);
	}
	return;
}

void Function_181(int iParam0, int iParam1) //Position: 0x9EB6 / 40630
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_166(StackVal, Function_192(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_182(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1.25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, 1);
		SET_BLIP_COLOR(iParam0->f_188, 0.58f, 0.35f, 0.72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0.58f, 0.35f, 0.72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

int Function_182(int iParam0) //Position: 0x9FFB / 40955
{
	if ((Global_74542[iParam010] != 3 || Global_74542[iParam010] != 4) || Global_74542[iParam010] != 5)
	{
		return 1;
	}
	return 0;
}

int Function_183(int iParam0) //Position: 0xA027 / 40999
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_184(int iParam0) //Position: 0xA03C / 41020
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_185(int iParam0) //Position: 0xA051 / 41041
{
	if (!iParam0->f_152)
	{
		if (Function_38())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

void Function_186(int iParam0, int iParam1) //Position: 0xA0F5 / 41205
{
	struct<5> Var0;
	
	Var0 = iParam1;
	Var0.f_4 = 4;
	if (!IS_SCRIPT_VALID(iParam0->f_196))
	{
		iParam0->f_196 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0->f_56, 4), &Var0, 2, 0);
	}
	if (!IS_SCRIPT_VALID(iParam0->f_196))
	{
		PRINTSTRING("Quest launch FAIL: ");
		PRINTSTRING(GET_ASSET_NAME(iParam0->f_56, 4));
		PRINTNL();
		LOG_ERROR("Failed to launch quest script! Check spew!");
	}
	else
	{
		Global_74542[iParam110] = 5;
		if (!(IS_JOURNAL_ENTRY_IN_LIST(iParam0->f_140, 0) || iParam0->f_148))
		{
			iParam0->f_140 = CREATE_JOURNAL_ENTRY(iParam0 + 4, 2, iParam0->f_20, "Mission_Strangers");
			PREPEND_JOURNAL_ENTRY(iParam0->f_140, false);
		}
	}
	return;
}

int Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA1CD / 41421
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_190(bParam0))
	{
		return 1;
	}
	if (Function_189(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_188())
	{
		return 1;
	}
	return 0;
}

bool Function_188() //Position: 0xA283 / 41603
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_189(int iParam0) //Position: 0xA29A / 41626
{
	return IS_ACTOR_IN_HOGTIE(iParam0);
}

bool Function_190(bool bParam0) //Position: 0xA2A5 / 41637
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

int Function_191(int iParam0) //Position: 0xA2B3 / 41651
{
	if (Global_74542[iParam010] == 3)
	{
		return 1;
	}
	return 0;
}

int Function_192(int iParam0) //Position: 0xA2C8 / 41672
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_193(int iParam0) //Position: 0xA2DD / 41693
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_26316.f_56 |= 16384;
	if (IS_ACTOR_VALID(iParam0->f_204) && iParam0->f_136 == 358)
	{
		SET_ACTOR_INVULNERABILITY(iParam0->f_204, 0);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, 0);
	return;
}

bool Function_194(int iParam0) //Position: 0xA31E / 41758
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_195(int iParam0) //Position: 0xA33A / 41786
{
	strcpy(iParam0 + 12, "MISSIONLAUNCHER", 16);
	*iParam0 = 66620;
	iParam0->f_4 = 41850;
	iParam0->f_8 = 41844;
	iParam0->f_28 = 0;
	return;
}

void Function_196() //Position: 0xA374 / 41844
{
	return;
}

int Function_197() //Position: 0xA37A / 41850
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_3366)
	{
		return 0;
	}
	if (Function_143(0, 0, 1, 1) && !Global_3414)
	{
		return 0;
	}
	if (((((Global_3403 || Global_3404) || Function_101(2048)) || Global_3407) || Function_22(Global_63084.f_32, 1)) && !Global_3414)
	{
		return 0;
	}
	if (!Global_3390)
	{
		return 0;
	}
	if (IS_GAME_RESETTING())
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return 0;
	}
	if (!iLocal_8)
	{
		fVar0 = GET_PROFILE_TIME();
		iVar1 = Global_6266;
		while (iVar1 < (Global_3422 - 1))
		{
			if ((!Global_3379 && !Global_3383) && !Global_63096)
			{
				if ((GET_PROFILE_TIME() - fVar0) < 150.0f)
				{
					Global_6266 = iVar1;
					return 0;
				}
				if ((Global_3422[iVar140] != Global_29003 && !Global_3422[iVar140].f_112) && Global_3422[iVar140].f_124)
				{
					if (!Function_312(&Global_3422[iVar140] + 128, 4194304) || Function_312(&Global_3422[iVar140] + 128, 8388608))
					{
						Function_309(&(Global_3422[iVar140]), iVar1);
					}
				}
				if (Global_3422[iVar140].f_112)
				{
					if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
					{
						CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
						return 0;
					}
					SATCHEL_SET_ENABLED(0);
					if (!Function_128(StackVal))
					{
						Function_201(&(Global_3422[iVar140]), 0, 0, 1);
					}
					else
					{
						Function_201(&(Global_3422[iVar140]), !HUD_IS_FADED(), 0, 1);
					}
				}
			}
			else if (Global_3379)
			{
			}
			else if (Global_3383)
			{
			}
			else if (Global_63096)
			{
			}
			iVar1++;
		}
		iLocal_8 = 1;
		Global_6266 = 1;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= Global_62527)
		{
			if (!Global_3379 && !Global_3383)
			{
				if (!Global_62527[iVar240].f_112)
				{
					Function_198(&(Global_62527[iVar240]));
				}
			}
			if (Global_62527[iVar240].f_112)
			{
				Function_201(&(Global_62527[iVar240]), 0, 0, 1);
			}
			iVar2++;
		}
		iLocal_8 = 0;
	}
	return 0;
}

void Function_198(bool bParam0) //Position: 0xA55C / 42332
{
	switch (bParam0->f_104)
	{
		case 0x00000005:
			if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_68))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bParam0->f_68))
				{
					if (Function_312(bParam0 + 128, 8192))
					{
						if (Function_200() <= bParam0->f_140)
						{
							Function_199("NO_LAUNCH_Player", 2.5f, 0, 2, 1, 0);
							return;
						}
					}
					bParam0->f_112 = 1;
					if (IS_OBJECT_VALID(bParam0->f_40))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam0->f_40)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam0->f_40));
						}
						DESTROY_OBJECT(bParam0->f_40);
					}
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_68);
				}
			}
			break;
	}
	return;
}

void Function_199(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA5F3 / 42483
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

int Function_200() //Position: 0xA66A / 42602
{
	return Function_27(0);
}

void Function_201(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA674 / 42612
{
	struct<4> Var0;
	
	if ((Function_308(StackVal) != 48 && !bParam2) && !Global_3381)
	{
		bParam1 = false;
	}
	if (Function_307(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(iParam0->f_40))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
			}
			DESTROY_OBJECT(iParam0->f_40);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_307(StackVal) == 1)
			{
				Global_3379 = 1;
				Global_3378 = 0;
				SET_RICH_PRESENCE(StackVal, Function_308(3), 0, 0, 0);
				Function_302(&(Global_3422[Function_308(StackVal)40]));
			}
			else if (Function_307(StackVal) == 4)
			{
				Function_301(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_308(58)), 0, 0, 0);
			}
			Function_118();
			Function_116(0, 0);
			iParam0->f_108 = Function_204(StackVal, StackVal, bParam2, 0, iParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_307(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_202(Function_308(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(iParam0 + 12) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		}
	}
	else
	{
		if (Function_307(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_202(Function_308(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_302(&(Global_3422[Function_308(StackVal)40]));
		}
		else if (Function_307(StackVal) == 4)
		{
			Function_301(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		Function_118();
		Function_116(0, 0);
		iParam0->f_108 = Function_204(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_202(bool bParam0) //Position: 0xA81D / 43037
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_203(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

bool Function_203(bool bParam0) //Position: 0xA84E / 43086
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xA864 / 43108
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<25> Var62;
	
	if (Function_307(iParam1) == 1)
	{
		Function_116(1, 0);
	}
	else
	{
		Function_116(0, 0);
	}
	bVar1 = Function_308(iParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_307(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_257(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_256(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_255(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_254(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_253(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_128(Function_252(iVar61)))
					{
						Function_250(Function_252(iVar61));
					}
					iVar61++;
				}
				Function_248();
				Function_247(Function_200(), 0);
				Function_246();
				if (bVar1 == 1)
				{
					Function_250(Function_252(2));
				}
			}
			if (bVar1 == 57)
			{
				DISABLE_CHILD_SECTOR("beh_silo02x");
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
			}
		}
		else
		{
			PRINTSTRING("Launch type = ");
			PRINTINT(Function_307(iParam1));
			PRINTNL();
		}
	}
	if (Function_307(iParam1) == 1)
	{
		Function_26(18, bVar1, 0);
		Function_74(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_244(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_243(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_241(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	Global_3378 = 0;
	SET_ACTOR_INVULNERABILITY(Global_34573, 0);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(Global_63084.f_28) || Function_22(Global_63084.f_32, 2)) || Function_22(Global_63084.f_32, 1)) || Function_22(Global_63084.f_32, 65536))
	{
		Function_36(&Global_63084 + 32, 2);
		Function_36(&Global_63084 + 32, 1);
		Function_36(&Global_63084 + 32, 65536);
		Function_47(&Global_63084 + 32, 4);
	}
	if (Function_307(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_128(iParam1))
		{
			if (bParam5)
			{
				Function_240(iParam1, iParam4);
			}
			else if (Function_239(iParam1) == 1)
			{
				Function_238(iParam1, iParam4);
			}
			else
			{
				Function_210(iParam1, iParam4);
			}
		}
		Function_207(2);
		Function_205((15 - Function_206(105)));
		return bVar73;
	}
	return "";
}

void Function_205(int iParam0) //Position: 0xAB90 / 43920
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_206(105)), 0);
	return;
}

int Function_206(int iParam0) //Position: 0xABB1 / 43953
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_207(int iParam0) //Position: 0xABC7 / 43975
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_209(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_209(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_209(Global_12976.f_24);
	PRINTNL();
	Function_208(iParam0);
	return;
}

void Function_208(int iParam0) //Position: 0xAC63 / 44131
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_206(90)), 0);
	return;
}

void Function_209(bool bParam0) //Position: 0xAC84 / 44164
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_210(int iParam0, int iParam1) //Position: 0xACCA / 44234
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	int iVar12;
	
	if (!Function_128(iParam0))
	{
		Function_236();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_307(iParam0);
	if (StackVal != 2)
	{
		Function_235("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_212(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_308(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<24> Function_211(char* cParam0) //Position: 0xADDA / 44506
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_212(bool bParam0) //Position: 0xB030 / 45104
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_226();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_213();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_36(&Global_63095, 1);
		Function_36(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_213() //Position: 0xB081 / 45185
{
	Function_224();
	Function_223();
	Function_223();
	Function_222();
	Function_222();
	Function_221();
	Function_221();
	Function_220(0);
	Function_220(0);
	if (!Function_1())
	{
		Function_218();
		Function_217();
		Function_216();
		Function_215();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_214();
	return;
}

void Function_214() //Position: 0xB0D3 / 45267
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_215() //Position: 0xB1D9 / 45529
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_216() //Position: 0xB20C / 45580
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_217() //Position: 0xB39A / 45978
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_218() //Position: 0xB54E / 46414
{
	Function_219(&Global_28260, 1, 0);
	return;
}

void Function_219(int iParam0, bool bParam1, int iParam2) //Position: 0xB55C / 46428
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_56();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_220(char* cParam0) //Position: 0xB74D / 46925
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_27((50 + iVar4)) + Function_27((183 + iVar4))) + Function_27((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_26(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_221() //Position: 0xB7F3 / 47091
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_27((50 + iVar3) + 15) + Function_27((183 + iVar3) + 15)) + Function_27((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_26(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_222() //Position: 0xB87C / 47228
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_27((50 + iVar3) + 8) + Function_27((183 + iVar3) + 8)) + Function_27((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_26(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_223() //Position: 0xB913 / 47379
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_27((50 + iVar3)) + Function_27((183 + iVar3))) + Function_27((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_26(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_224() //Position: 0xB992 / 47506
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_225(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_26(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_225(int iParam0, bool bParam1, int iParam2) //Position: 0xB9CB / 47563
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_21(iParam0, bParam1, 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_8(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_226() //Position: 0xBBD5 / 48085
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_38())
	{
		Function_232(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_232(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_227(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_227(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_58(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

vector3 Function_227(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBC90 / 48272
{
	int iVar0;
	
	iVar0 = Function_230(uParam2, uParam3);
	if (Function_229(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_47(&Global_63095, 1);
			Function_36(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_47(&Global_63095, 2);
			Function_36(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_47(&Global_63095, 2);
		Function_36(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_228();
	return StackVal, StackVal, Function_228();
}

vector3 Function_228() //Position: 0xBD77 / 48503
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_229(int iParam0) //Position: 0xBD80 / 48512
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_230(bool bParam0, bool bParam1) //Position: 0xBD96 / 48534
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_231(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_231(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_229(bVar0) && !bParam1)
	{
		bVar0 = Function_230(bParam0, 1);
	}
	return bVar0;
}

float Function_231(vector3 vParam0, vector3 vParam3) //Position: 0xBE5D / 48733
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_232(var uParam0, int iParam1) //Position: 0xBE7A / 48762
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_234(Global_34573, &vVar4);
	if (!Function_233(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_233(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_47(&Global_63095, 2);
	Function_36(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_58(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_233(int iParam0) //Position: 0xC6A1 / 50849
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_22(bVar0, 0x1000000) || Function_22(bVar0, 0x2000000)) || Function_22(bVar0, 0x4000000)) || !Function_22(bVar0, 0x10000000));
}

void Function_234(bool bParam0, int iParam1) //Position: 0xC6DC / 50908
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_235(char* cParam0, bool bParam1) //Position: 0xC6E9 / 50921
{
	struct<4> Var0;
	
	if (!Function_128(bParam1))
	{
		return;
	}
	switch (Function_307(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_243(Function_308(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_307(bParam1), Function_308(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_307(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_307(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_307(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_307(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_307(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_236() //Position: 0xC80D / 51213
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_237(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_237(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCA54 / 51796
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_238(int iParam0, int iParam1) //Position: 0xCA7D / 51837
{
	int iVar0;
	
	if (!Function_128(iParam0))
	{
		Function_236();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_307(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_212(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_308(iParam0);
	}
	Global_3376 = 1;
	return;
}

int Function_239(int iParam0) //Position: 0xCAE4 / 51940
{
	if (!Function_128(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_240(int iParam0, int iParam1) //Position: 0xCAFE / 51966
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_128(iParam0))
	{
		Function_236();
		return;
	}
	iVar0 = Function_307(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_212(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_308(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_6269) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(iVar11);
		APPEND_JOURNAL_ENTRY(iVar11, 0);
	}
	return;
}

void Function_241(bool bParam0) //Position: 0xCBA4 / 52132
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_242();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_242() //Position: 0xCC2F / 52271
{
	int iVar0;
	
	Global_26960 = Function_91(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

struct<16> Function_243(bool bParam0) //Position: 0xCC7D / 52349
{
	char* cVar0[16];
	
	if (!Function_38())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_244(int iParam0) //Position: 0xCCB7 / 52407
{
	int iVar0;
	
	iVar0 = Function_245(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_27(27);
			Global_34165.f_116 = Function_27(42);
			Global_34165.f_124 = CEIL(Function_19(49));
			Global_34165.f_128 = Function_27(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_27(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_19(49));
			Global_34165.f_128 = Function_27(49);
			break;
	}
	return;
}

int Function_245(int iParam0) //Position: 0xCD41 / 52545
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

void Function_246() //Position: 0xCDD6 / 52694
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_247(bool bParam0, bool bParam1) //Position: 0xCE13 / 52755
{
	bool bVar0;
	
	bVar0 = Function_27(0);
	if ((Function_27(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_85(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_27(0));
	return 1;
}

void Function_248() //Position: 0xCEA3 / 52899
{
	PRINTSTRING("Unlocking Frontier Weapons");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(false, 1);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(12, 1);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(19, 1);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), false);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), true);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 2);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 3);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 15);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 6);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 5);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 7);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 14);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 12);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 13);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 19);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 20);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 9);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 10);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 11);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 17);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 18);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 4, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 22, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 8, 1.0f, 0, 1);
	Function_249();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_249() //Position: 0xD026 / 53286
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	if (Global_3365)
	{
		return;
	}
	bVar2 = Function_56();
	if (!IS_ACTOR_VALID(bVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		iVar3 = GET_AMMO_ENUM(bVar1);
		if (iVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, iVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_250(int iParam0) //Position: 0xD0F7 / 53495
{
	Function_251(iParam0);
	return;
}

void Function_251(int iParam0) //Position: 0xD102 / 53506
{
	int iVar0;
	
	if (!Function_128(iParam0))
	{
		Function_236();
		return;
	}
	iVar0 = Function_307(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

int Function_252(int iParam0) //Position: 0xD126 / 53542
{
	if (!Function_203(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_253(int iParam0, int iParam1) //Position: 0xD140 / 53568
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xD15D / 53597
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0xD17A / 53626
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_256(int iParam0, int iParam1) //Position: 0xD196 / 53654
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_257(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xD1B2 / 53682
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		if (!Function_38())
		{
			Function_261(iParam0, uParam2, 0);
		}
		else
		{
			Function_258(iParam0, uParam2, 0);
		}
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_257(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_257(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_257(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_257(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_258(bool bParam0, var uParam1, bool bParam2) //Position: 0xD2AB / 53931
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_203(bParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_259(21, bParam2, 0);
			Function_259(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_243(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_259(bool bParam0, bool bParam1, int iParam2) //Position: 0xD349 / 54089
{
	if (!Function_260(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_56(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_56(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_56(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_260(int iParam0) //Position: 0xD3A0 / 54176
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_261(bool bParam0, var uParam1, bool bParam2) //Position: 0xD3B2 / 54194
{
	struct<4> Var0;
	
	if (!Function_203(bParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_259(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_298(Global_30640[0]);
			Function_298(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_296(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_298(Global_30668[0]);
			Function_288(0);
			Function_286(2, 1);
			Function_286(0, 1);
			Function_286(1, 1);
			break;
		
		case 0x00000003:
			Function_298(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_298(Global_30668[0]);
			Function_298(Global_30640[0]);
			Function_284(0, 1);
			Function_284(15, 1);
			Function_284(9, 1);
			Function_284(12, 1);
			Function_284(16, 1);
			Function_286(3, 1);
			break;
		
		case 0x00000005:
			Function_298(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_296(21, bParam2, 4);
			Function_298(Global_30668[0]);
			Function_286(39, 1);
			break;
		
		case 0x00000007:
			Function_298(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_298(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_39())
				{
					if (!Function_283(4))
					{
						Function_275(4, 0, 0, 1, 0);
					}
				}
			}
			Function_298(Global_30640[0]);
			Function_298(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_298(Global_30640[0]);
			Function_298(Global_30668[2]);
			Function_274(&(Global_29008[Global_30668[2]]), 32768);
			Function_273(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_296(9, bParam2, 4);
			Function_298(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_298(Global_30640[0]);
			Function_298(Global_30658[0]);
			Function_274(&(Global_29008[Global_30658[0]]), 32768);
			Function_273(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_298(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_298(Global_30640[0]);
			Function_298(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_298(Global_30640[1]);
			Function_298(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_298(Global_30679[0]);
			Function_298(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_298(Global_30658[5]);
			Function_298(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_296(21, bParam2, 4);
			Function_298(Global_30640[4]);
			Function_298(Global_30658[4]);
			Function_272(&Global_76847, 0x2000000);
			Function_272(&Global_76847, 0x4000000);
			Function_272(&Global_76847, 4096);
			Function_272(&Global_76847, 8);
			Function_272(&Global_76847, 8388608);
			Function_272(&Global_76847, 524288);
			Function_272(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_298(Global_30640[4]);
			Function_298(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_273(&(Global_29008[Global_30640[4]]), 256);
			Function_298(Global_30640[4]);
			Function_298(Global_30658[0]);
			Function_274(&(Global_29008[Global_30658[0]]), 32768);
			Function_273(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_298(Global_30640[0]);
			Function_298(Global_30640[5]);
			Function_296(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_298(Global_30658[3]);
			Function_274(&(Global_29008[Global_30658[3]]), 32768);
			Function_273(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_296(9, bParam2, 4);
			Function_298(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_274(&(Global_29008[Global_30679[1]]), 32768);
			Function_298(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_296(12, bParam2, 4);
			Function_273(&(Global_29008[Global_30679[1]]), 256);
			Function_298(Global_30668[3]);
			Function_298(Global_30693[0]);
			Function_298(Global_30685[0]);
			Function_288(4);
			Function_284(13, 1);
			Function_284(1, 1);
			Function_284(18, 1);
			Function_286(34, 1);
			Function_286(44, 1);
			Function_286(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_296(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_298(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_298(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_298(Global_30693[0]);
			Function_298(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_298(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_298(Global_30685[0]);
			Function_298(Global_30693[0]);
			Function_298(Global_30693[1]);
			Function_298(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_296(23, bParam2, 3);
			Function_284(23, 1);
			Function_298(Global_30685[0]);
			Function_298(Global_30685[2]);
			Function_274(&(Global_29008[Global_30685[2]]), 32768);
			Function_273(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_296(19, bParam2, 4);
			Function_298(Global_30685[0]);
			Function_298(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_296(24, bParam2, 3);
			Function_284(24, 1);
			Function_298(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_298(Global_30685[0]);
			Function_298(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_298(Global_30693[12]);
			Function_298(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_298(Global_30693[12]);
			Function_298(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_296(25, bParam2, 10);
			Function_298(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_298(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_298(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_296(13, bParam2, 4);
			Function_298(Global_30693[2]);
			Function_298(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_283(8))
				{
					Function_275(8, 0, 0, 1, 0);
				}
			}
			Function_298(Global_30685[0]);
			Function_288(9);
			Function_284(7, 1);
			Function_284(11, 1);
			Function_284(3, 1);
			Function_284(20, 1);
			Function_286(57, 1);
			break;
		
		case 0x0000002A:
			Function_296(2, bParam2, 4);
			Function_298(Global_30717[0]);
			Function_298(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_298(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_298(Global_30717[0]);
			Function_298(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_298(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_298(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_298(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_296(17, bParam2, 4);
			Function_298(Global_30723[0]);
			Function_298(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_270(15))
				{
					Function_265(15, 0, 1);
				}
			}
			Function_264(2, 26);
			Function_273(&(Global_29008[Global_30717[1]]), 256);
			Function_288(11);
			Function_298(Global_30717[1]);
			Function_298(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_298(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_298(Global_30717[1]);
			Function_298(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_298(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_298(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_298(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_298(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_298(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_298(Global_30717[1]);
			Function_262(11);
			Function_288(12);
			Global_16537[1121].f_40 = 0;
			Function_286(56, 1);
			if (!bParam2)
			{
				if (!Function_283(9))
				{
					Function_275(9, 0, 0, 0, 0);
				}
				if (!Function_283(10))
				{
					Function_275(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_243(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_262(int iParam0) //Position: 0xDCB0 / 56496
{
	bool bVar0;
	
	if (!Function_229(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_263(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_263(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_158(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_263(bool bParam0, bool bParam1) //Position: 0xDE1F / 56863
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_264(int iParam0, bool bParam1) //Position: 0xDE73 / 56947
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_265(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDEDA / 57050
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_269(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_270(bParam0))
	{
		if (!Function_283(bParam0))
		{
			Function_275(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_7(457, 1, 0, 0);
		Function_268(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_143(0, 0, 1, 1))
			{
				Function_212(1);
				Function_267(1, 0);
			}
			else
			{
				Function_266();
			}
		}
	}
	return;
}

void Function_266() //Position: 0xE079 / 57465
{
	return;
}

void Function_267(int iParam0, int iParam1) //Position: 0xE07F / 57471
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_1())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_268(bool bParam0, int iParam1) //Position: 0xE0C1 / 57537
{
	if (!Function_269(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_269(int iParam0) //Position: 0xE116 / 57622
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_270(int iParam0) //Position: 0xE12C / 57644
{
	if (!Function_269(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_271(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_271(int iParam0, int iParam1) //Position: 0xE17D / 57725
{
	int iVar0;
	
	if (!Function_269(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_272(var uParam0, int iParam1) //Position: 0xE1AA / 57770
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_273(var uParam0, int iParam1) //Position: 0xE1B9 / 57785
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_274(var uParam0, int iParam1) //Position: 0xE1D0 / 57808
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_275(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE1DF / 57823
{
	struct<8> Var0;
	
	if (!Function_269(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_194(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_283(bParam0))
	{
		Function_7(456, 1, 0, 0);
		Function_268(bParam0, 2);
		if (bParam2)
		{
			if (!Function_143(0, 0, 1, 1))
			{
				Function_212(1);
				Function_267(1, 5);
			}
			else
			{
				Function_266();
			}
		}
		Function_277(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_276() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_276() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_45(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_38())
		{
			if (!Function_37(Global_76846, 2))
			{
				Function_31(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_276() //Position: 0xE334 / 58164
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_277(bool bParam0) //Position: 0xE361 / 58209
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_281(bParam0, Function_282(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_281(bParam0, Function_282(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_280(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_279(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_278(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_278(int iParam0) //Position: 0xE511 / 58641
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_269(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_279(int iParam0, bool bParam1) //Position: 0xE568 / 58728
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

var Function_280(int iParam0) //Position: 0xE58D / 58765
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_269(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_281(bool bParam0, int iParam1) //Position: 0xE5E3 / 58851
{
	int iVar0;
	
	if (!Function_269(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_282(bool bParam0) //Position: 0xE642 / 58946
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_283(int iParam0) //Position: 0xE64E / 58958
{
	if (!Function_269(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_271(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_284(int iParam0, int iParam1) //Position: 0xE6A0 / 59040
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_285(iParam0, iParam1);
	Function_31(Global_34573, 1, 4, 1);
	return 1;
}

int Function_285(int iParam0, int iParam1) //Position: 0xE713 / 59155
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_286(int iParam0, int iParam1) //Position: 0xE76F / 59247
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_287(iParam0, iParam1);
	Function_31(Global_34573, 1, 4, 1);
	return 1;
}

int Function_287(int iParam0, int iParam1) //Position: 0xE7E0 / 59360
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_288(int iParam0) //Position: 0xE83A / 59450
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_229(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_295(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_295(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_7(468, 1, 0, 0);
			Function_264(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_45("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_158(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_275(14, 1, 0, 0, 0);
				Function_289(14, 1, 0, 0, 0);
			}
			if (!Function_143(0, 0, 1, 1))
			{
				Function_212(1);
				Function_267(1, 6);
			}
			else
			{
				Function_266();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_45("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_7(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_264(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_289(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xEAE7 / 60135
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_269(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_194(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_271(bParam0, 2))
	{
		Function_7(456, 1, 0, 0);
		Function_268(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_45(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_281(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_268(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_143(0, 0, 1, 1))
			{
				Function_212(1);
				Function_267(1, 0);
			}
			else
			{
				Function_266();
			}
		}
		Function_277(bParam0);
		if (StackVal && !Function_22(((((!Function_276() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_22((((Function_276() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_38())
		{
			if (!Function_37(Global_76846, 2))
			{
				Function_31(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_291();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_290(3, bParam1);
				break;
			
			case 0x00000005:
				Function_290(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_290(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_290(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_290(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_290(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_264(2, 24);
				break;
			
			case 0x00000003:
				Function_264(2, 25);
				break;
			
			case 0x0000000F:
				Function_264(2, 26);
				break;
			
			case 0x0000000D:
				Function_264(2, 27);
				break;
			
			case 0x0000000E:
				Function_264(2, 28);
				break;
			}
	}
}

void Function_290(int iParam0, bool bParam1) //Position: 0xED7D / 60797
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_291() //Position: 0xEDE8 / 60904
{
	if (Function_269(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_294(Global_28180);
			Global_28180.f_8 = Function_292(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_294(Global_28180);
			Global_28180.f_8 = Function_292(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_292(int iParam0, int iParam1) //Position: 0xEE63 / 61027
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_293(6, 0) || Function_293(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_184(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_293(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_184(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_184(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_184(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_184(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_293(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_184(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_184(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_184(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_184(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_184(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_184(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_184(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_293(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_184(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_293(6, 0) && Function_184(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_184(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_293(9, 0) && Function_184(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_184(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_293(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_58(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_58(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_58(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

bool Function_293(int iParam0, bool bParam1) //Position: 0xFA54 / 64084
{
	int iVar0;
	
	iVar0 = Function_252(iParam0);
	if (!Function_130(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_294(int iParam0) //Position: 0xFA91 / 64145
{
	int iVar0;
	int iVar1;
	
	if (!Function_269(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

void Function_295(bool bParam0, bool bParam1) //Position: 0xFAE0 / 64224
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_296(bool bParam0, bool bParam1, int iParam2) //Position: 0xFB31 / 64305
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_297(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_259(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_297(int iParam0, int iParam1) //Position: 0xFB9F / 64415
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_298(int iParam0) //Position: 0xFBB2 / 64434
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_300(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_274(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_7(473, 1, 0, 0);
		iVar0 = Function_299(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_7(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_7(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_7(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_264(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_264(7, 30);
	}
	if (Function_18(473) <= Function_19(473))
	{
		if (!Function_1())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_299(bool bParam0) //Position: 0xFCB1 / 64689
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_165(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_29155[bParam010];
		}
		else
		{
			bVar0 = Global_29155[bParam010];
			bVar0 = Global_29155[bVar010];
		}
	}
	return bVar0;
}

bool Function_300(var uParam0, int iParam1) //Position: 0xFD09 / 64777
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_301(int iParam0, bool bParam1) //Position: 0xFD25 / 64805
{
	if (!Function_128(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

void Function_302(int iParam0) //Position: 0xFD40 / 64832
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_303(4, 0, 0);
		}
	}
	return;
}

void Function_303(int iParam0, int iParam1, int iParam2) //Position: 0xFDA7 / 64935
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_304(Global_16524, bVar0, 1);
	}
	return;
}

void Function_304(int iParam0, bool bParam1, bool bParam2) //Position: 0xFE8D / 65165
{
	int iVar0;
	
	Function_306(iParam0);
	Function_209(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, bParam1);
	Function_305();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_305() //Position: 0x1000A / 65546
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_306(int iParam0) //Position: 0x10016 / 65558
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

int Function_307(bool bParam0) //Position: 0x1005C / 65628
{
	if (!Function_130(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_308(int iParam0) //Position: 0x10077 / 65655
{
	if (!Function_130(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

void Function_309(var uParam0, int iParam1) //Position: 0x10097 / 65687
{
	switch (uParam0->f_104)
	{
		case 0x00000001:
			if (!Function_293(iParam1, 0))
			{
				if (Function_311(uParam0))
				{
					if (!Global_3381)
					{
						uParam0->f_112 = 1;
					}
					return;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(uParam0->f_44))
			{
				if (Function_138(uParam0->f_44, 1, 1, 0, 1, 0))
				{
					Global_3378 = 1;
					uParam0->f_112 = 1;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(uParam0->f_48))
			{
				if (Function_310(uParam0->f_48, Global_34573, 1, 1, 0, 1, 0))
				{
					Global_3378 = 1;
					uParam0->f_112 = 1;
				}
			}
			break;
	}
	return;
}

bool Function_310(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x10127 / 65831
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Invalid actor given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bParam1))
	{
		return 0;
	}
	if (bParam5)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			if (!IS_ACTOR_RIDING(bParam1) || ((uParam6 && GET_TASK_STATUS(GET_ACTOR_FROM_OBJECT(bParam1), 12) != 1) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "gaveDismount")) < 0.25f))
			{
				DECOR_REMOVE(bParam0, "gaveDismount");
				return 1;
			}
			return 0;
		}
	}
	if (IS_ACTOR_IN_VOLUME(bParam1, bParam0))
	{
		if (IS_ACTOR_PLAYER(bParam1))
		{
			SET_PLAYER_CONTROL(0, 0, iParam2, iParam2);
		}
		if (IS_PLAYER_DEADEYE(0) && uParam3)
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam4)
		{
			Function_141(bParam1, 0);
		}
		else if (IS_ACTOR_RIDING(bParam1))
		{
			if (Function_140(bParam1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bParam1)))
			{
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bParam1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
			}
			RESET_ACTOR_GAITS(GET_MOUNT(bParam1), 1);
		}
		else
		{
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
		}
		if (bParam5 && IS_ACTOR_RIDING(bParam1))
		{
			iVar0 = TASK_SEQUENCE_OPEN();
			if (Function_140(bParam1, 0) < 12.0f)
			{
				vVar1 = { 0.0f, 0.0f, -4.0f };
				UNK_0xB89CC342(bParam1, &vVar1, &uVar4);
				Function_139(&uVar4, &vVar1);
			}
			else
			{
				vVar1 = { 0.0f, 0.0f, -2.0f };
				UNK_0xB89CC342(bParam1, &vVar1, &uVar4);
				Function_139(&uVar4, &vVar1);
			}
			TASK_DISMOUNT(false, 1);
			TASK_GO_TO_COORD(0, &vVar1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(Global_34573, iVar0);
			TASK_SEQUENCE_RELEASE(iVar0, 1);
			DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
			Global_3414 = 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_311(int iParam0) //Position: 0x10387 / 66439
{
	var uVar0;
	
	if (!iParam0->f_128 != 0)
	{
		uVar0 = iParam0->f_128;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_293(iParam0->f_132, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_293(iParam0->f_136, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_293(iParam0->f_140, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_293(iParam0->f_144, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (Global_30922 == 4294967295)
			{
				return 0;
			}
			PRINTINT(Global_30922);
			PRINTNL();
			iParam0->f_8 = Global_30922;
			Global_30922 = 4294967295;
		}
	}
	return 1;
}

bool Function_312(int iParam0, int iParam1) //Position: 0x10420 / 66592
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_313() //Position: 0x1043C / 66620
{
	return;
}

void Function_314(int iParam0) //Position: 0x10442 / 66626
{
	strcpy(iParam0 + 12, "EVENT-RESPONSE", 16);
	*iParam0 = 94670;
	iParam0->f_4 = 66689;
	iParam0->f_8 = 66683;
	iParam0->f_28 = 1;
	return;
}

void Function_315() //Position: 0x1047B / 66683
{
	return;
}

int Function_316() //Position: 0x10481 / 66689
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	struct<25> Var27;
	vector3 vVar53;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	int iVar60;
	struct<8> Var61;
	vector3 vVar69;
	bool bVar72;
	var uVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	bool bVar82;
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar2 = 0;
	while (iVar2 < (iVar0 - 1))
	{
		bVar16 = GET_EVENT_FOR_RESPONSE(iVar2);
		switch (GET_EVENT_RESPONSE_ID(iVar2))
		{
			case 0x00000001:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_49(&vVar3, "DynamiteExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_49(&vVar3, "DynamiteExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000002:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_49(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_49(&vVar3, "FireBottleExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000003:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_49(&vVar3, "KeroseneLampExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_49(&vVar3, "KeroseneLampExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000004:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000005:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar26 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar26))
					{
						Function_49(&vVar3, "GrenadeExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 1);
						Function_49(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 1);
					}
					else
					{
						Function_49(&vVar3, "GrenadeExplosion", 0, 1);
						Function_49(&vVar3, "FireBottleExplosion", 0, 1);
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000006:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
				}
				break;
			
			case 0x00000007:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					vVar3 = { 0.0f, 0.0f, 0.0f };
					vVar6 = { 0.0f, 0.0f, 0.0f };
					CREATE_GRINGO_ON_OBJECT(bVar12, "sliding_gate_gringo", "$/content/scripting/gringo/simplegringo/sliding_gate", vVar3, vVar6);
				}
				break;
			
			case 0x00000036:
				bVar13 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						bVar24 = GET_ACTOR_FROM_OBJECT(bVar13);
						if (!IS_ACTOR_PLAYER(bVar24))
						{
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 4, false);
						}
					}
				}
				break;
			
			case 0x00000008:
				if (!Function_1())
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 1.0f, 0.0f };
						bVar36 = false;
						if (DECOR_CHECK_EXIST(bVar12, "WasDrafted"))
						{
							bVar36 = DECOR_GET_BOOL(bVar12, "WasDrafted");
						}
						iVar37 = 1;
						if (DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
						{
							iVar37 = 0;
						}
						if (!bVar36 && iVar37)
						{
							iVar38 = Function_449(GET_CORPSE_ACTOR_ENUM(bVar12));
							if (iVar38 == 1)
							{
								bVar18 = CREATE_GRINGO_ON_OBJECT(bVar12, "Skin_Animal", "$/content/scripting/gringo/simplegringo/Skin_Animal", vVar3, vVar6);
							}
							else if (iVar38 == 2)
							{
								bVar18 = CREATE_GRINGO_ON_OBJECT(bVar12, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", vVar3, vVar6);
							}
							if (IS_OBJECT_VALID(bVar18))
							{
								if (DECOR_CHECK_EXIST(bVar12, "NonActiveGringo"))
								{
									DECOR_REMOVE(bVar12, "NonActiveGringo");
									GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bVar18), "UseCase", 0);
								}
								if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin1"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin1", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin2"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin2", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin3"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin3", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin4"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin4", bVar18);
								}
								if (DECOR_CHECK_EXIST(bVar12, "Skinning_CreateBlip"))
								{
									ADD_BLIP_FOR_OBJECT(bVar18, 330, 0.0f, 3, 0);
									DECOR_REMOVE(bVar12, "Skinning_CreateBlip");
								}
								if (Function_194(6))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar18)))
									{
										bVar39 = ADD_BLIP_FOR_OBJECT(bVar18, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar39, 0.5f);
										UNK_0x1E98AFEC(bVar39, 1);
										SET_BLIP_SCALE(bVar39, 0.6f);
										SET_BLIP_COLOR(bVar39, 0.35f, 0.35f, 0.35f, 0.65f);
									}
								}
								if (DECOR_CHECK_EXIST(bVar12, "skinning_objSet"))
								{
									ADD_OBJECT_TO_OBJECTSET(bVar18, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "skinning_objSet")));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				if (!Function_1())
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 1.0f, 0.0f };
							if (Function_449(GET_CORPSE_ACTOR_ENUM(bVar12)) == 2)
							{
								bVar40 = CREATE_GRINGO_ON_OBJECT(bVar12, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", vVar3, vVar6);
								if (Function_194(6))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar40)))
									{
										bVar41 = ADD_BLIP_FOR_OBJECT(bVar40, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar41, 0.5f);
										UNK_0x1E98AFEC(bVar41, 1);
										SET_BLIP_SCALE(bVar41, 0.6f);
										SET_BLIP_COLOR(bVar41, 0.35f, 0.35f, 0.35f, 0.65f);
									}
								}
							}
						}
						else
						{
							DECOR_REMOVE(bVar12, "nNoLooting");
						}
					}
				}
				break;
			
			case 0x0000000A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (!Function_1())
				{
					if (IS_OBJECT_VALID(bVar12))
					{
						bVar42 = false;
						if (DECOR_CHECK_EXIST(bVar12, "corpse_loot_gringo"))
						{
							if (DECOR_GET_BOOL(bVar12, "corpse_loot_gringo") == 1)
							{
								bVar42 = true;
							}
							DECOR_REMOVE(bVar12, "corpse_loot_gringo");
						}
						else
						{
							bVar42 = true;
						}
						if (DECOR_CHECK_EXIST(bVar12, "ReturnCorpse"))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar12, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "ReturnCorpse")));
						}
						if (bVar42)
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 0.0f, 0.0f };
							iVar43 = 0;
							vVar44 = { 0.0f, 0.0f, 0.0f };
							vVar47 = { 0.0f, 0.0f, 0.0f };
							vVar50 = { 0.0f, 0.0f, 0.0f };
							vVar53 = { 0.0f, 0.0f, 0.0f };
							if (!DECOR_CHECK_EXIST(bVar12, "NoEating"))
							{
								if (DECOR_CHECK_EXIST(bVar12, "AddCoyoteEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCoyoteEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_9(), "coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddBearEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddBearEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_9(), "bear_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddWolfEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddWolfEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_9(), "wolf_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddCougarEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCougarEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_9(), "cougar_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
							}
							else
							{
								DECOR_REMOVE(bVar12, "NoEating");
							}
							if (Function_194(6))
							{
								if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
								{
									bVar17 = CREATE_GRINGO_IN_LAYOUT(Global_6289, Function_9(), "Loot_Corpse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									ATTACH_OBJECTS(bVar17, bVar12, "pelvis", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
									GIVE_OBJECT_TO_LAYOUT(bVar17, bVar12);
									GRINGO_SET_TARGET_OBJECT(GET_GRINGO_FROM_OBJECT(bVar17), bVar12, 1);
									if (DECOR_CHECK_EXIST(bVar12, "LootCorpse_CreateBlip"))
									{
										if (!DECOR_CHECK_EXIST(bVar12, "LootCorpse_WhichBlip"))
										{
											ADD_BLIP_FOR_OBJECT(bVar17, 325, 0.0f, 2, 0);
										}
										else
										{
											ADD_BLIP_FOR_OBJECT(bVar17, DECOR_GET_INT(bVar12, "LootCorpse_WhichBlip"), 0.0f, 2, 0);
											DECOR_REMOVE(bVar12, "LootCorpse_WhichBlip");
										}
										DECOR_REMOVE(bVar12, "LootCorpse_CreateBlip");
									}
									else
									{
										bVar57 = ADD_BLIP_FOR_OBJECT(bVar17, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar57, 0.5f);
										UNK_0x1E98AFEC(bVar57, 1);
										SET_BLIP_SCALE(bVar57, 0.6f);
										SET_BLIP_COLOR(bVar57, 0.35f, 0.35f, 0.35f, 0.65f);
									}
									if (DECOR_CHECK_EXIST(bVar12, "lootCorpse_objSet"))
									{
										ADD_OBJECT_TO_OBJECTSET(bVar17, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "lootCorpse_objSet")));
									}
								}
								else
								{
									DECOR_REMOVE(bVar12, "nNoLooting");
								}
							}
						}
					}
				}
				break;
			
			case 0x00000038:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar58 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar16));
					bVar59 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar59))
					{
						iVar60 = GET_ACTOR_ENUM(bVar59);
						if (iVar60 <= 976 && iVar60 >= 1007)
						{
							if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
							{
								if (bVar12 == DECOR_GET_OBJECT(Global_34573, "HorseStolen"))
								{
									DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (!(NET_IS_IN_SESSION() || Function_1()))
							{
								if (bVar59 == Global_12976.f_36)
								{
									DECOR_SET_BOOL(Global_34573, "TriggerNewHorse", true);
								}
							}
						}
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_34573) && bVar12 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)))
						{
							if (IS_ACTOR_VALID(bVar58))
							{
								if (GET_ACTOR_ENUM(bVar58) <= 1155 && GET_ACTOR_ENUM(bVar58) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(bVar59, 0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.3f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.2f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0.1f, 1.25f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.1f, -0.1f, 0, 1, 0);
									if (DECOR_CHECK_EXIST(bVar12, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(bVar59))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bVar12, 1065353216, 1117126656, 1, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_140(bVar58, 0) <= 7.25f)
									{
										Var61 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("HitByTrain_FX") };
										Function_94(bVar12);
										vVar69 = { StackVal, StackVal, Function_94(bVar12) };
										if (!UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, &Var61, "script_train_squash_ped", vVar69), 0.0f, 0.0f, 0.0f))
										{
										}
										if (DECOR_CHECK_EXIST(bVar12, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(Global_34573, "CHBadguy_Gone", true);
										}
										DESTROY_OBJECT(bVar12);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000034:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12) && !Function_1())
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
					}
				}
				break;
			
			case 0x00000027:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (GET_OBJECT_TYPE(bVar12) == 15)
				{
					if (GET_ACTOR_FROM_OBJECT(bVar12) == Global_34573)
					{
						DECOR_SET_BOOL(bVar12, "coplasso", true);
					}
				}
				break;
			
			case 0x0000000C:
				PRINTSTRING("Duong thinks this should happen");
				PRINTNL();
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						bVar72 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						DECOR_SET_OBJECT(bVar12, "HogtiedGringoAttached", bVar72);
					}
				}
				bVar26 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar26))
				{
					if (GET_ACTOR_FROM_OBJECT(bVar26) == Function_56())
					{
						Global_12976.f_136++;
						if (Global_12976.f_136 >= Function_27(262))
						{
							Function_26(262, Global_12976.f_136, 0);
						}
					}
				}
				break;
			
			case 0x0000000D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
				}
				break;
			
			case 0x00000010:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) && ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) == 0)
					{
						if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!IS_SCRIPT_VALID(bLocal_0))
							{
								if (!Function_1() && !IS_DEBUGKEY_DOWN(50))
								{
									Var34.f_4 = GET_ACTOR_FROM_OBJECT(bVar12);
									Var34 = GET_ACTOR_FROM_OBJECT(bVar13);
									bLocal_0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &Var34, 2, 0);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(bVar12, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(bVar12, "HorseLeash"));
						DECOR_REMOVE(bVar12, "HorseLeash");
					}
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) || IS_ACTOR_MULE(GET_ACTOR_FROM_OBJECT(bVar12)))
					{
						if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) != 1)
						{
							ACCESSORIZE_HORSE(GET_ACTOR_FROM_OBJECT(bVar12), 2);
							if (!(Function_1() || NET_IS_IN_SESSION()))
							{
								if (bVar13 == GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
								{
									if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
									{
										uVar73 = Function_131(8, 0, 5);
										iVar74 = Function_448(uVar73);
										iVar75 = Function_131(7, 0, 5);
										Function_301(iVar75, FLOOR(GET_CURRENT_GAME_TIME()));
										if (Global_3381)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
										}
										else if (iVar74 > 3600)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
										}
										else if (iVar74 > 900)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 85.0f);
										}
										else
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
										}
									}
									else
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
									}
								}
							}
						}
					}
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar12)))
						{
							SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(bVar12), 1024, 0);
						}
					}
				}
				break;
			
			case 0x00000011:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
						{
							iVar76 = Function_131(7, 0, 5);
							iVar77 = Function_448(iVar76);
							iVar77 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar77);
							iVar78 = Function_131(8, 0, 5);
							iVar79 = Function_448(iVar78);
							Function_301(iVar78, (iVar77 + iVar79));
						}
						if (Function_2(0x8000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_447(0x8000000);
						}
						if (Function_2(0x4000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_447(0x4000000);
						}
					}
				}
				break;
			
			case 0x0000000F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
								{
									if (Function_446(bVar12, bVar13))
									{
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000031:
				break;
			
			case 0x0000002E:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__HogTie"))
								{
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill"))
								{
									Function_441(Function_443(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill_R"))
								{
									Function_441(Function_438(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__GroundAttack"))
								{
									Function_441(Function_433(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "n__WallPin"))
								{
									Function_94(bVar13);
									*(&Var27 + 12) = { StackVal, StackVal, Function_94(bVar13) };
									Function_432(bVar13);
									Var27 = { StackVal, StackVal, Function_432(bVar13) };
									Function_441(Function_428(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__ChairSmash"))
								{
									Function_441(Function_425(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 0, 0, 1));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecutionBack"))
								{
									switch (RAND_INT_RANGE(0, 5))
									{
										case 0x00000000:
											Function_441(Function_422(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_441(Function_419(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_441(Function_416(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_441(Function_413(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_441(Function_410(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_441(Function_407(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolExecution"))
								{
									switch (RAND_INT_RANGE(0, 5))
									{
										case 0x00000000:
											Function_441(Function_404(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_441(Function_401(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_441(Function_398(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_441(Function_395(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_441(Function_392(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_441(Function_389(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolKneelExecution"))
								{
									Function_441(Function_386(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleExecution"))
								{
									switch (RAND_INT_RANGE(0, 4))
									{
										case 0x00000000:
											Function_441(Function_383(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_441(Function_380(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_441(Function_377(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_441(Function_374(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_441(Function_371(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleKneelExecution"))
								{
									Function_441(Function_368(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecution"))
								{
									switch (RAND_INT_RANGE(0, 4))
									{
										case 0x00000000:
											Function_441(Function_365(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_441(Function_362(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_441(Function_359(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_441(Function_356(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_441(Function_353(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknKneelExecution"))
								{
									Function_441(Function_350(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__BottleSmash"))
								{
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
				{
					if (DECOR_CHECK_STRING(bVar16, "__HorseAgitated", "__BuckRider"))
					{
						PLAYER_RUMBLE("HorseBuckRumble", 4294967295, 0);
					}
					else
					{
						PLAYER_RUMBLE("HorseAgitatedRumble", 4294967295, 0);
						if (!Function_37(Global_76846, 128))
						{
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13))))
							{
								Function_31(bVar13, 128, 1, 0);
							}
						}
					}
				}
				break;
			
			case 0x00000032:
				if (!Function_1())
				{
					bVar13 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar13))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_94(bVar13);
								*(&Var27 + 12) = { StackVal, StackVal, Function_94(bVar13) };
								Function_432(bVar13);
								Var27 = { StackVal, StackVal, Function_432(bVar13) };
								Var27.f_24 = 0;
								Function_441(Function_347(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x00000033:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!Function_1())
							{
								Function_94(bVar13);
								*(&Var27 + 12) = { StackVal, StackVal, Function_94(bVar13) };
								Function_432(bVar13);
								Var27 = { StackVal, StackVal, Function_432(bVar13) };
								Var27.f_24 = 0;
								Function_441(Function_344(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x00000014:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							ENABLE_VEHICLE_SEAT(bVar10, 0, 0);
						}
					}
				}
				break;
			
			case 0x00000016:
				bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_OBJECT_VALID(bVar12))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
							bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
							if (IS_PHYSINST_VALID(bVar11))
							{
								GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
								vVar6.f_4 = (vVar6.y + 180.0f);
								ATTACH_OBJECTS(bVar12, bVar10, Function_9(), vVar3, vVar6, 4294967295);
								bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
								if (IS_OBJECT_VALID(bVar15))
								{
									DESTROY_OBJECT(bVar15);
								}
								CREATE_GRINGO_ON_OBJECT(bVar12, "shootBabyShoot", "stagegat_attach", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(bVar11))
								{
									GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_9(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootTruck", 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000017:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 2;
							while (iVar1 < (GET_NUM_AVAILABLE_SEATS(bVar10) - 1))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							NET_OBJECT_REPLICATION_MODE_END(17);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(bVar11))
								{
									GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_9(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootCoach", 1);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootTruck", 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 2, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 3, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 4, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 5, 0);
				break;
			
			case 0x00000019:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 0, 0);
				break;
			
			case 0x0000001A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarArmored", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBaggage", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001C:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001E:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox03", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001F:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox04", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000020:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox05", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000021:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarCaboose", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000022:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarCattle", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000023:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarFlat", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000024:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCar01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 1);
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x00000025:
				if (Global_34208.f_1440)
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar12) == 15)
						{
							bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
							if (IS_ACTOR_VALID(bVar10))
							{
								bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarSteamer", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				else
				{
					Global_34208.f_1440 = 1;
				}
				break;
			
			case 0x00000026:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarWood", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000028:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar24 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				bVar9 = DECOR_GET_VECTOR(bVar16, "__hjk_perp_position", &vVar21);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (!bVar9)
								{
									GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bVar13), &vVar21);
								}
								if (Function_343(StackVal, StackVal, bVar12, vVar21))
								{
									Function_441(Function_339(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
								else
								{
									Function_441(Function_335(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000029:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				bVar24 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_441(Function_331(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
							}
						}
					}
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VEHICLE(bVar10))
						{
							if (GET_OBJECT_TYPE(bVar13) == 15)
							{
								bVar80 = GET_ACTOR_FROM_OBJECT(bVar13);
							}
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								bVar25 = GET_ACTOR_IN_VEHICLE_SEAT(bVar10, iVar1);
								if ((IS_ACTOR_VALID(bVar24) && bVar25 == bVar80) && bVar25 == bVar24)
								{
									TASK_VEHICLE_LEAVE(bVar25);
								}
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x0000002A:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								bVar14 = bVar14;
								Function_441(Function_327(FIND_NAMED_LAYOUT("Formations"), 0, bVar14, bVar12, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002B:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								iVar20 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar12));
								bVar19 = iVar20;
								switch (bVar19)
								{
									case 0x000004AD:
										Function_441(Function_322(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
										break;
									
									default:
										Function_441(Function_317(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
										break;
									}
								}
						}
					}
					else
					{
						LOG_ERROR("Perp is not actor");
					}
				}
				else
				{
					LOG_ERROR("Perp or Target are invalid");
				}
				break;
			
			case 0x0000002C:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
								Function_441(Function_317(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002D:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
							}
						}
					}
				}
				break;
			
			case 0x00000037:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (GET_LAST_ATTACKER(bVar10) == Global_34573)
					{
						iVar81 = Function_131(6, 3, 5);
						bVar82 = Function_448(iVar81);
						if (Global_29006 == Global_30640[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ARMAddKO")))
							{
								Function_47(&bVar82, 1);
							}
						}
						else if (Global_29006 == Global_30658[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "ratv_saloon")))
							{
								Function_47(&bVar82, 2);
							}
						}
						else if (Global_29006 == Global_30668[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "thiv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_THIAddKO")))
							{
								Function_47(&bVar82, 4);
							}
						}
						else if (Global_29006 == Global_30685[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "escv_cantina_set")))
							{
								Function_47(&bVar82, 8);
							}
						}
						else if (Global_29006 == Global_30693[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "chuv_knockout_set")))
							{
								Function_47(&bVar82, 16);
							}
						}
						else if (Global_29006 == Global_30707[2])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "casv_bar_set")))
							{
								Function_47(&bVar82, 32);
							}
						}
						else if (Global_29006 == Global_30717[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "blkv_saloon_set")))
							{
								Function_47(&bVar82, 64);
							}
						}
						Function_301(iVar81, bVar82);
						if (bVar82 != (128 - 1) && !Function_22(bVar82, 128))
						{
							Function_47(&bVar82, 128);
							AWARD_ACHIEVEMENT(15);
						}
					}
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")) && !Function_1())
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000039:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar10);
					}
				}
				break;
			
			case 0x0000003A:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_49(&vVar3, "DynamiteCrateExp", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_49(&vVar3, "DynamiteCrateExp", 0, 0);
						}
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
		}
		iVar2++;
	}
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 0;
}

bool Function_317(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x135CD / 79309
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToWagon", 3, 1);
	}
	Function_318(&bVar0, bParam2, bParam3, bParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_318(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x13651 / 79441
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_321(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_320(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_319(&uVar0, uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_319(var uParam0, bool bParam1) //Position: 0x136CD / 79565
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4.240117f, 2.848692f, -3.453501f, -14.51869f, 120.8944f, -0.096658f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.705376f, 1.356211f, -0.494339f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_320(var uParam0, bool bParam1) //Position: 0x13750 / 79696
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.312839f, 2.04426f, -3.890313f, -11.40707f, -165.6106f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_321(var uParam0, bool bParam1) //Position: 0x137CF / 79823
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.382136f, 2.293721f, 0.74885f, -8.276146f, -68.90104f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_322(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x1384E / 79950
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToPrison", 3, 1);
	}
	Function_323(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam6)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_323(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x138C7 / 80071
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_326(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_325(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_324(&uVar0, uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_324(var uParam0, bool bParam1) //Position: 0x1393C / 80188
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_9(), 5.056644f, 3.927511f, -3.112992f, 2.874524f, 1.177293f, 3.10158f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.88904f, 2.422013f, -0.671586f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_325(var uParam0, bool bParam1) //Position: 0x139D1 / 80337
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_9(), 0.312839f, 2.04426f, -3.890313f, 2.942502f, -0.251143f, -3.141593f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_326(var uParam0, bool bParam1) //Position: 0x13A66 / 80486
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_9(), -3.382136f, 2.293721f, 0.74885f, -0.144446f, -1.20255f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_327(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x13AF7 / 80631
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToHorse", 2, 1);
	}
	Function_328(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_328(var uParam0, var uParam1, int iParam2) //Position: 0x13B79 / 80761
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_330(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_329(&uVar0, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.75f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_329(var uParam0, bool bParam1) //Position: 0x13BCE / 80846
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.577029f, 1.710976f, -3.825424f, -3.464217f, 169.0016f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1.289642f, 1.484856f, -0.158455f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_330(var uParam0, bool bParam1) //Position: 0x13C4D / 80973
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.496739f, 1.711366f, -2.162416f, -5.032116f, 131.0492f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.087791f, 1.409592f, 0.088257f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_331(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x13CCC / 81100
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hijack", 2, 1);
	}
	Function_332(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_332(var uParam0, int iParam1) //Position: 0x13D40 / 81216
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_334(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_333(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.0f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 2.0f, 0, 0);
	return;
}

void Function_333(var uParam0, bool bParam1) //Position: 0x13D8A / 81290
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.366477f, 1.49934f, -2.612921f, 8.860391f, -121.5917f, 1.481497f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

void Function_334(var uParam0, bool bParam1) //Position: 0x13DF2 / 81394
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.576806f, 2.573345f, -4.386736f, -12.39926f, 179.9947f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

bool Function_335(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x13E56 / 81494
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseLeft", 2, 1);
	}
	Function_336(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_336(var uParam0, int iParam1) //Position: 0x13ED3 / 81619
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_338(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_337(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_337(var uParam0, bool bParam1) //Position: 0x13F34 / 81716
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.547432f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_338(var uParam0, bool bParam1) //Position: 0x13FB3 / 81843
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.008554f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_339(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14036 / 81974
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseRight", 2, 1);
	}
	Function_340(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_340(var uParam0, int iParam1) //Position: 0x140B4 / 82100
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_342(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_341(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_341(var uParam0, bool bParam1) //Position: 0x14115 / 82197
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.547f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_342(var uParam0, bool bParam1) //Position: 0x14194 / 82324
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.009f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_343(bool bParam0, vector3 vParam1) //Position: 0x14213 / 82451
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_344(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x14251 / 82513
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseFalling", 1, 1);
	}
	Function_345(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_345(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x142CF / 82639
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_346(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
}

void Function_346(var uParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x14300 / 82688
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar3 = { 0.0f, 2.12f, -2.422f };
	UNK_0xF76F2BB3(&vVar3, bParam1, bParam1->f_24, 4);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar3, StackVal) };
	vVar6 = { 0.0f, -30.351f, -15.34f };
	UNK_0xF76F2BB3(&vVar6, bParam1, bParam1->f_24, 4);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar6, StackVal) };
	CAMERA_PROBE(&vVar0, vVar3, vVar6, uParam2, 23);
	vVar0.x = (vVar0.x + 0.0f);
	vVar0.f_4 = (vVar0.y + 1.0f);
	vVar0.f_8 = (vVar0.z + 0.0f);
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
}

bool Function_347(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x143ED / 82925
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WagonCrash", 1, 1);
	}
	Function_348(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return bVar0;
}

void Function_348(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x14469 / 83049
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_349(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
}

void Function_349(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x144A6 / 83110
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9.270768f, 7.965437f, 3.153887f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
}

bool Function_350(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14587 / 83335
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknKneelExecution", 1, 1);
	}
	Function_351(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_351(var uParam0, char* cParam1) //Position: 0x14606 / 83462
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_352(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_352(var uParam0, bool bParam1) //Position: 0x14655 / 83541
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.077684f, 1.688702f, 0.09395f, -16.10126f, 77.37032f, 0.009626f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_353(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x146E1 / 83681
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_04", 1, 1);
	}
	Function_354(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_354(var uParam0, char* cParam1) //Position: 0x1475E / 83806
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_355(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_355(var uParam0, bool bParam1) //Position: 0x147AD / 83885
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.598154f, 1.524616f, -1.161397f, -8.163617f, -141.3147f, -16.12286f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_356(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14835 / 84021
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_03", 1, 1);
	}
	Function_357(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_357(var uParam0, char* cParam1) //Position: 0x148B2 / 84146
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_358(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_358(var uParam0, bool bParam1) //Position: 0x14901 / 84225
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.785012f, 1.737865f, -0.003387f, -16.92512f, 84.24278f, 11.77102f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_359(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14989 / 84361
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_02", 1, 1);
	}
	Function_360(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_360(var uParam0, char* cParam1) //Position: 0x14A06 / 84486
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_361(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_361(var uParam0, bool bParam1) //Position: 0x14A55 / 84565
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.033225f, 1.295071f, 0.859828f, 2.370899f, -21.91965f, 11.26406f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_362(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14ADD / 84701
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_01", 1, 1);
	}
	Function_363(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_363(var uParam0, char* cParam1) //Position: 0x14B5A / 84826
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_364(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_364(var uParam0, bool bParam1) //Position: 0x14BA9 / 84905
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.15953f, 1.084327f, -1.321146f, 8.784932f, 138.2104f, -8.502293f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_365(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14C31 / 85041
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution", 1, 1);
	}
	Function_366(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_366(var uParam0, char* cParam1) //Position: 0x14CAB / 85163
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_367(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_367(var uParam0, bool bParam1) //Position: 0x14CFA / 85242
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.731022f, 1.207424f, -0.59499f, -0.219386f, 98.4201f, -6.49419f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_368(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14D82 / 85378
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleKneelExecution", 1, 1);
	}
	Function_369(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_369(var uParam0, char* cParam1) //Position: 0x14E03 / 85507
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_370(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_370(var uParam0, bool bParam1) //Position: 0x14E52 / 85586
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.427828f, 1.442699f, -0.021391f, -11.90606f, 72.94113f, 5.7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_371(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14EDE / 85726
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_04", 1, 1);
	}
	Function_372(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_372(var uParam0, char* cParam1) //Position: 0x14F5D / 85853
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_373(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_373(var uParam0, bool bParam1) //Position: 0x14FAC / 85932
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.154827f, 0.698168f, 0.196961f, 14.45704f, 46.70459f, -11.70381f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_374(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15038 / 86072
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_03", 1, 1);
	}
	Function_375(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_375(var uParam0, char* cParam1) //Position: 0x150B7 / 86199
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_376(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_376(var uParam0, bool bParam1) //Position: 0x15106 / 86278
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.678964f, 0.992386f, -2.09693f, 13.04992f, 150.5624f, -0.189706f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_377(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15192 / 86418
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_02", 1, 1);
	}
	Function_378(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_378(var uParam0, char* cParam1) //Position: 0x15211 / 86545
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_379(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_379(var uParam0, bool bParam1) //Position: 0x15260 / 86624
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.17763f, 1.626893f, -1.877858f, -16.66625f, -132.0675f, -4.978086f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_380(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x152EC / 86764
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_01", 1, 1);
	}
	Function_381(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_381(var uParam0, char* cParam1) //Position: 0x1536B / 86891
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_382(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_382(var uParam0, bool bParam1) //Position: 0x153BA / 86970
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.23275f, 0.7751f, -1.966721f, 14.39797f, 133.8307f, 29.31653f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_383(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15446 / 87110
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution", 1, 1);
	}
	Function_384(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_384(var uParam0, char* cParam1) //Position: 0x154C2 / 87234
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_385(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_385(var uParam0, bool bParam1) //Position: 0x15511 / 87313
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.650726f, 0.618574f, 0.427292f, 13.80886f, 47.58586f, -11.28612f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_386(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1559D / 87453
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolKneelExecution", 1, 1);
	}
	Function_387(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_387(var uParam0, char* cParam1) //Position: 0x1561F / 87583
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_388(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_388(var uParam0, bool bParam1) //Position: 0x1566E / 87662
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.381174f, 1.428986f, -0.436662f, -11.62205f, 89.08679f, -0.000115f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.795814f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_389(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x156FA / 87802
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PistolExecution_05", 1, 1);
	}
	Function_390(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_390(var uParam0, char* cParam1) //Position: 0x1577A / 87930
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_391(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_391(var uParam0, bool bParam1) //Position: 0x157C9 / 88009
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.18887f, 1.61792f, 0.534385f, -15.9202f, 45.06617f, 3.526383f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_392(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15855 / 88149
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PistolExecution_04", 1, 1);
	}
	Function_393(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_393(var uParam0, char* cParam1) //Position: 0x158D5 / 88277
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_394(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_394(var uParam0, bool bParam1) //Position: 0x15924 / 88356
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.024016f, 0.554619f, 0.408258f, 30.14079f, 44.81871f, 3.92224f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_395(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x159B0 / 88496
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_03", 1, 1);
	}
	Function_396(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_396(var uParam0, char* cParam1) //Position: 0x15A30 / 88624
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_397(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_397(var uParam0, bool bParam1) //Position: 0x15A7F / 88703
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.108242f, 1.113226f, 0.091178f, 4.81359f, -74.79637f, -10.2132f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_398(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15B0B / 88843
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_02", 1, 1);
	}
	Function_399(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_399(var uParam0, char* cParam1) //Position: 0x15B8B / 88971
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_400(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_400(var uParam0, bool bParam1) //Position: 0x15BDA / 89050
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.736095f, 0.952384f, -1.123448f, 10.26351f, 112.517f, 12.43874f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_401(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15C66 / 89190
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_01", 1, 1);
	}
	Function_402(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_402(var uParam0, char* cParam1) //Position: 0x15CE6 / 89318
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_403(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_403(var uParam0, bool bParam1) //Position: 0x15D35 / 89397
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.121333f, 0.883925f, 0.788724f, 13.18485f, 39.53941f, 6.69186f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_404(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15DC1 / 89537
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution", 1, 1);
	}
	Function_405(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_405(var uParam0, char* cParam1) //Position: 0x15E3E / 89662
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_406(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_406(var uParam0, bool bParam1) //Position: 0x15E8D / 89741
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.833069f, 0.910306f, 0.392504f, 6.567528f, 60.56582f, 0.046868f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_407(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15F19 / 89881
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_05", 1, 1);
	}
	Function_408(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_408(var uParam0, char* cParam1) //Position: 0x15F9A / 90010
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_409(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_409(var uParam0, bool bParam1) //Position: 0x15FE9 / 90089
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.367814f, 1.599156f, 1.072289f, -3.876976f, 19.19374f, 11.86928f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_410(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16071 / 90225
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_04", 1, 1);
	}
	Function_411(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_411(var uParam0, char* cParam1) //Position: 0x160F2 / 90354
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_412(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_412(var uParam0, bool bParam1) //Position: 0x16141 / 90433
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34.38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.2005f, 0.639449f, -0.77461f, 28.96044f, 100.1754f, -21.46019f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_413(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x161C9 / 90569
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_03", 1, 1);
	}
	Function_414(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_414(var uParam0, char* cParam1) //Position: 0x1624A / 90698
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_415(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_415(var uParam0, bool bParam1) //Position: 0x16299 / 90777
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.772715f, 0.601514f, 0.683062f, 27.82014f, 33.3886f, -21.21926f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_416(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16321 / 90913
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_02", 1, 1);
	}
	Function_417(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_417(var uParam0, char* cParam1) //Position: 0x163A2 / 91042
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_418(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_418(var uParam0, bool bParam1) //Position: 0x163F1 / 91121
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.261779f, 1.408872f, 1.275128f, 0.737339f, 39.14373f, -9.138619f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_419(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16479 / 91257
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_01", 1, 1);
	}
	Function_420(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_420(var uParam0, char* cParam1) //Position: 0x164FA / 91386
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_421(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_421(var uParam0, bool bParam1) //Position: 0x16549 / 91465
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23.34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.193164f, -0.139685f, -0.718702f, 33.4145f, 100.2139f, 15.81386f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_422(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x165D5 / 91605
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack", 1, 1);
	}
	Function_423(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_423(var uParam0, char* cParam1) //Position: 0x16653 / 91731
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_424(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_424(var uParam0, bool bParam1) //Position: 0x166A2 / 91810
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.158421f, 1.612226f, 0.177963f, -3.552166f, -69.33723f, -2.450368f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_425(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1672A / 91946
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ChairSmash", 1, 1);
	}
	Function_426(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_426(var uParam0, char* cParam1) //Position: 0x167A2 / 92066
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_427(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_427(var uParam0, bool bParam1) //Position: 0x167E2 / 92130
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.305018f, 1.08927f, 0.490524f, -4.4265f, -62.37619f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.451405f, 0.839948f, -1.002819f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_428(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x16861 / 92257
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WallPin", 2, 1);
	}
	Function_429(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_429(var uParam0, var uParam1, char* cParam2) //Position: 0x168D8 / 92376
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_431(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_430(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_430(var uParam0, bool bParam1) //Position: 0x16943 / 92483
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.000206f, 1.399983f, -0.499981f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.970139f, 1E-06f, 0.242549f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

void Function_431(var uParam0, bool bParam1) //Position: 0x169E2 / 92642
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.004646f, 1.400002f, -0.423557f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.999992f, 1E-06f, -0.004033f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

vector3 Function_432(bool bParam0) //Position: 0x16A81 / 92801
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_433(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16AA8 / 92840
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GroundAttack", 3, 1);
	}
	Function_434(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_434(var uParam0, char* cParam1) //Position: 0x16B22 / 92962
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_437(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_436(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_435(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_435(var uParam0, bool bParam1) //Position: 0x16BCA / 93130
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_436(var uParam0, bool bParam1) //Position: 0x16C78 / 93304
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.651182f, 1.344121f, 0.315187f, -21.06256f, -60.6819f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.047794f, 0.635919f, -0.585258f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_437(var uParam0, bool bParam1) //Position: 0x16D26 / 93478
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_438(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16DD4 / 93652
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BedStealthKill_R", 1, 1);
	}
	Function_439(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_439(var uParam0, char* cParam1) //Position: 0x16E52 / 93778
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_440(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_440(var uParam0, bool bParam1) //Position: 0x16E93 / 93843
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.938993f, 2.898682f, 0.045806f, -51.88138f, 61.50959f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.123694f, 0.266305f, -0.939428f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_441(bool bParam0) //Position: 0x16F12 / 93970
{
	Function_442();
	Global_63118 = bParam0;
	return;
}

void Function_442() //Position: 0x16F20 / 93984
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

var Function_443(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16F35 / 94005
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_9(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BedStealthKill", 1, 1);
	}
	Function_444(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_444(var uParam0, char* cParam1) //Position: 0x16FA5 / 94117
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_445(&uVar0, cParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_445(var uParam0, bool bParam1) //Position: 0x16FE7 / 94183
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_9(), -1.97754f, 2.195687f, -0.487989f, -0.712222f, -1.448415f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.182648f, 0.316525f, -0.753682f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_446(var uParam0, bool bParam1) //Position: 0x17078 / 94328
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	return Function_343(StackVal, StackVal, uParam0, vVar0);
}

void Function_447(bool bParam0) //Position: 0x1708F / 94351
{
	bool bVar0;
	
	if (Function_22(bParam0, 1) && Function_22(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_448(int iParam0) //Position: 0x170C3 / 94403
{
	if (!Function_128(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

int Function_449(int iParam0) //Position: 0x170DD / 94429
{
	bool bVar0;
	
	bVar0 = GET_ACTORENUM_SPECIES(iParam0);
	switch (bVar0)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000017:
		case 0x00000018:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000021:
		case 0x00000023:
			return 1;
			break;
		
		case 0x00000002:
		case 0x0000000E:
		case 0x0000000A:
		case 0x00000011:
		case 0x00000012:
		case 0x00000016:
		case 0x00000019:
		case 0x00000020:
		case 0x00000022:
			return 2;
			break;
	}
	return 0;
}

void Function_450() //Position: 0x171CE / 94670
{
	return;
}

void Function_451(int iParam0) //Position: 0x171D4 / 94676
{
	strcpy(iParam0 + 12, "AMBIENT-MAIDEN", 16);
	*iParam0 = 94798;
	iParam0->f_4 = 94739;
	iParam0->f_8 = 94733;
	iParam0->f_28 = 1;
	return;
}

void Function_452() //Position: 0x1720D / 94733
{
	return;
}

int Function_453() //Position: 0x17213 / 94739
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(Function_56()))
	{
		return 0;
	}
	bVar0 = VDIST(Global_34574, vLocal_1);
	if (bVar0 < 5.0f && IS_ACTOR_VALID(Function_56()))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		vLocal_1 = { StackVal, StackVal, Global_34574 };
	}
	return 0;
}

void Function_454() //Position: 0x1724E / 94798
{
	Function_455();
	return;
}

void Function_455() //Position: 0x17257 / 94807
{
	AMBIENT_SET_UPDATES_ENABLED(1);
	AMBIENT_SET_POINT_SPACING(4.5f);
	AMBIENT_SET_SLOPE_VALUES(0.985f, 0.94f, 0.85f, 0.75f);
	if (IS_ACTOR_VALID(Global_34573))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		vLocal_1 = { StackVal, StackVal, Global_34574 };
	}
	else
	{
		AMBIENT_SET_SCAN_CENTER(Global_34165);
		vLocal_1 = { StackVal, StackVal, Global_34165 };
	}
	return;
}

